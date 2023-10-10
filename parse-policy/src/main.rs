use std::{
    ffi::{c_void, CStr, CString},
    mem::MaybeUninit,
    sync::Mutex,
};

use bindings::{
    avrule_block_t, class_datum, hashtab_map, perm_datum, policydb, policydb_init,
    policydb_set_target_platform, read_source_policy, role_datum, type_datum, AVRULE_ALLOWED,
    AVRULE_NEVERALLOW, DENY_UNKNOWN, POLICY_BASE, SEPOL_TARGET_SELINUX, SYM_CLASSES, SYM_ROLES,
    SYM_TYPES,
};
// TODO: SYM_BOOLS, SYM_CATS, SYM_COMMONS, SYM_LEVELS, SYM_USERS

mod ebitmap;
mod model;
mod py;

use model::{Class, Permission, Policy, Role, Rule, Type};

use crate::{
    bindings::{user_datum, SYM_USERS},
    model::{RuleType, TypeSet, User},
};

fn main() {
    let mut policy = new_policy();
    let file = CString::new("../policy.conf").unwrap();
    let progname = CString::new("parse-policy").unwrap();

    unsafe { read_source_policy(&mut policy as *mut _, file.as_ptr(), progname.as_ptr()) };

    let policy = Policy {
        types: types(&policy),
        roles: roles(&policy),
        classes: classes(&policy),
        users: users(&policy),
        rules: rules(&policy),
    };

    // println!("{policy:#?}");

    // py::generate(policy);
    println!("{}", py::generate(policy));
}

fn new_policy() -> policydb {
    let mut policy_db: MaybeUninit<policydb> = MaybeUninit::uninit();

    unsafe { policydb_init(policy_db.as_mut_ptr()) };
    let mut parse_policy = unsafe { policy_db.assume_init() };

    parse_policy.policy_type = POLICY_BASE;
    unsafe {
        policydb_set_target_platform(&mut parse_policy as *mut _, SEPOL_TARGET_SELINUX as i32)
    };

    // TODO: Set to 1 for MLS
    parse_policy.mls = 0;
    // TODO: ALLOW_UNKNOWN, REJECT_UNKNOWN
    parse_policy.handle_unknown = DENY_UNKNOWN;

    parse_policy
}

fn classes(policy: &policydb) -> Vec<Class> {
    extern "C" fn construct_classes(a: *mut i8, value: *mut c_void, result: *mut c_void) -> i32 {
        extern "C" fn construct_permissions(
            a: *mut i8,
            value: *mut c_void,
            result: *mut c_void,
        ) -> i32 {
            let name = unsafe { CStr::from_ptr(a) }.to_str().unwrap().to_owned();
            let value = unsafe { &*(value as *mut perm_datum) };
            // println!("permission: {name:?} {value:#?}");

            unsafe { &*(result as *mut Mutex<Vec<Permission>>) }
                .lock()
                .unwrap()
                .push(Permission {
                    id: value.s.value,
                    name,
                });
            0
        }

        let name = unsafe { rstr(a) };
        let value = unsafe { &*(value as *mut class_datum) };

        let mut permissions = Mutex::new(Vec::new());
        unsafe {
            hashtab_map(
                value.permissions.table,
                Some(construct_permissions),
                &mut permissions as *mut _ as *mut _,
            );
        };

        unsafe { &*(result as *mut Mutex<Vec<Class>>) }
            .lock()
            .unwrap()
            .push(Class {
                id: value.s.value,
                name,
                permissions: permissions.lock().unwrap().clone(),
                default_user: value.default_user,
                default_role: value.default_role,
                default_type: value.default_type,
                default_range: value.default_range,
            });

        0
    }

    let mut result = Mutex::new(Vec::new());
    unsafe {
        hashtab_map(
            policy.symtab[SYM_CLASSES as usize].table,
            Some(construct_classes),
            &mut result as *mut _ as *mut _,
        );
    };

    let ret = result.lock().unwrap().clone();
    ret
}

fn types(policy: &policydb) -> Vec<Type> {
    extern "C" fn construct_types(a: *mut i8, value: *mut c_void, result: *mut c_void) -> i32 {
        let name = unsafe { rstr(a) };
        let value = unsafe { &*(value as *mut type_datum) };

        unsafe { &*(result as *mut Mutex<Vec<Type>>) }
            .lock()
            .unwrap()
            .push(Type {
                id: value.s.value,
                name,
            });

        0
    }

    let mut result = Mutex::new(Vec::new());
    unsafe {
        hashtab_map(
            policy.symtab[SYM_TYPES as usize].table,
            Some(construct_types),
            &mut result as *mut _ as *mut _,
        );
    };

    let ret = result.lock().unwrap().clone();
    ret
}

fn roles(policy: &policydb) -> Vec<Role> {
    extern "C" fn construct_roles(a: *mut i8, value: *mut c_void, result: *mut c_void) -> i32 {
        let name = unsafe { rstr(a) };
        let value = unsafe { &*(value as *mut role_datum) };

        unsafe { &*(result as *mut Mutex<Vec<Role>>) }
            .lock()
            .unwrap()
            .push(Role {
                id: value.s.value,
                name,
            });

        0
    }

    let mut result = Mutex::new(Vec::new());
    unsafe {
        hashtab_map(
            policy.symtab[SYM_ROLES as usize].table,
            Some(construct_roles),
            &mut result as *mut _ as *mut _,
        );
    };

    let ret = result.lock().unwrap().clone();
    ret
}

fn users(policy: &policydb) -> Vec<User> {
    extern "C" fn construct_users(a: *mut i8, value: *mut c_void, result: *mut c_void) -> i32 {
        let name = unsafe { rstr(a) };
        let value = unsafe { &*(value as *mut user_datum) };

        unsafe { &*(result as *mut Mutex<Vec<User>>) }
            .lock()
            .unwrap()
            .push(User {
                id: value.s.value,
                name,
                roles: unsafe { ebitmap::Iter::new(value.roles.roles) }.collect(),
            });

        0
    }

    let mut result = Mutex::new(Vec::new());
    unsafe {
        hashtab_map(
            policy.symtab[SYM_USERS as usize].table,
            Some(construct_users),
            &mut result as *mut _ as *mut _,
        );
    };

    let ret = result.lock().unwrap().clone();
    ret
}

fn rules(policy: &policydb) -> Vec<Rule> {
    let mut result = Vec::new();

    let mut block_ptr: *const avrule_block_t = policy.global;
    while !block_ptr.is_null() {
        let block = unsafe { &*block_ptr };

        let mut branch_list_ptr = block.branch_list;
        while !branch_list_ptr.is_null() {
            let branch_list = unsafe { &*branch_list_ptr };

            let mut rule_ptr = branch_list.avrules;
            while !rule_ptr.is_null() {
                let rule = unsafe { &*rule_ptr };

                let mut permissions = Vec::new();

                let mut permission_ptr = rule.perms;
                while !permission_ptr.is_null() {
                    let permission = unsafe { &*permission_ptr };
                    for i in 0..32 {
                        if permission.data >> i & 1 == 1 {
                            // They one-index. Don't ask why.
                            permissions.push((permission.tclass, i + 1));
                        }
                    }
                    permission_ptr = permission.next;
                }

                result.push(Rule {
                    ty: match rule.specified {
                        AVRULE_ALLOWED => RuleType::Allow,
                        AVRULE_NEVERALLOW => RuleType::NeverAllow,
                        _ => panic!("unsupported rule type"),
                    },
                    source_types: TypeSet::from(&rule.stypes),
                    target_types: TypeSet::from(&rule.ttypes),
                    permissions,
                });
                rule_ptr = rule.next;
            }

            branch_list_ptr = branch_list.next;
        }

        block_ptr = block.next;
    }

    result
}

unsafe fn rstr(ptr: *mut i8) -> String {
    unsafe { CStr::from_ptr(ptr) }.to_str().unwrap().to_owned()
}

#[allow(non_upper_case_globals)]
#[allow(non_camel_case_types)]
#[allow(non_snake_case)]
#[allow(clippy::useless_transmute)]
pub mod bindings {
    include!(concat!(env!("OUT_DIR"), "/bindings.rs"));
}
