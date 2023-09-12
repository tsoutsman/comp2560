use std::{
    ffi::{c_void, CStr, CString},
    io,
    mem::MaybeUninit,
    sync::Mutex,
};

use bindings::{
    class_datum, hashtab_map, perm_datum, policydb, policydb_init, policydb_set_target_platform,
    read_source_policy, role_datum, type_datum, DENY_UNKNOWN, POLICY_BASE, SEPOL_TARGET_SELINUX,
    SYM_CLASSES, SYM_ROLES, SYM_TYPES,
};
// TODO: SYM_BOOLS, SYM_CATS, SYM_COMMONS, SYM_LEVELS, SYM_USERS
use serde::Serialize;

#[derive(Debug, Clone, Serialize)]
pub struct Policy {
    classes: Vec<Class>,
    types: Vec<Type>,
    roles: Vec<Role>,
    rules: Vec<Rule>,
}

#[derive(Debug, Clone, Serialize)]
pub struct Class {
    id: u32,
    name: String,
    permissions: Vec<Permission>,
    default_user: i8,
    default_role: i8,
    default_type: i8,
    default_range: i8,
}

#[derive(Debug, Clone, Serialize)]
pub struct Permission {
    id: u32,
    name: String,
}

#[derive(Debug, Clone, Serialize)]
pub struct Role {
    id: u32,
    name: String,
}

#[derive(Debug, Clone, Serialize)]
pub struct Type {
    id: u32,
    name: String,
}

#[derive(Debug, Clone, Serialize)]
pub struct Rule {
    id: u32,
    name: String,
}

fn main() {
    let mut policy = new_policy();
    let file = CString::new("../policy.conf").unwrap();
    let progname = CString::new("parse-policy").unwrap();

    unsafe { read_source_policy(&mut policy as *mut _, file.as_ptr(), progname.as_ptr()) };

    let policy = Policy {
        types: types(&policy),
        roles: roles(&policy),
        classes: classes(&policy),
        rules: rules(&policy),
    };

    // println!("{policy:#?}");
    serde_json::to_writer(io::stdout(), &policy).unwrap();
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

fn rules(_policy: &policydb) -> Vec<Rule> {
    Vec::new()
}

unsafe fn rstr(ptr: *mut i8) -> String {
    unsafe { CStr::from_ptr(ptr) }.to_str().unwrap().to_owned()
}

#[allow(non_upper_case_globals)]
#[allow(non_camel_case_types)]
#[allow(non_snake_case)]
pub mod bindings {
    include!(concat!(env!("OUT_DIR"), "/bindings.rs"));
}
