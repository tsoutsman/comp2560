use std::{collections::HashMap, fs, path::Path};

use crate::{model::User, Class, Policy, Role, Rule, Type};

const PRELUDE: &str = r#"#!/usr/bin/env/ python3

from z3 import *

# Prelude

solver = Solver()
user = DeclareSort("User")
role = DeclareSort("Role")
type = DeclareSort("Type")
cclass = DeclareSort("Class")
permission = DeclareSort("Permission")

user_has_role = Function("user-has-role", user, role, BoolSort())
role_has_type = Function("role_has_type", role, type, BoolSort())

av_allow = Function("av_allow", type, type, cclass, permission, BoolSort())

"#;

// user_id = Function("user-id", user, IntSort())
// user_name = Function("user-name", user, StringSort())
// role_id = Function("role-id", role, IntSort())
// type_id = Function("type-id", type, IntSort())
// class_id = Function("class-id", cclass, IntSort())

pub(crate) fn generate(policy: Policy, additional_constraints_path: Option<&Path>) -> String {
    let Policy {
        classes,
        types,
        roles,
        users,
        rules,
    } = policy;

    let mut python = PRELUDE.to_owned();

    let rules = format!(
        "# Rules\n\n{}",
        rules
            .into_iter()
            .map(|ty| ty.into_python(&classes, &types))
            // Yes, this collect could technically be avoided.
            .collect::<Vec<String>>()
            .join("\n"),
    );
    let users = format!(
        "# Users\n\n{}",
        users
            .into_iter()
            .map(|user| user.into_python(&roles))
            // Yes, this collect could technically be avoided.
            .collect::<Vec<String>>()
            .join("\n"),
    );

    python.push_str("# Classes\n\n");
    python.extend(classes.into_iter().map(Class::into_python));
    python.push('\n');

    python.push_str("# Types\n\n");
    python.extend(types.into_iter().map(Type::into_python));
    python.push('\n');

    python.push_str("# Roles\n\n");
    python.extend(roles.into_iter().map(Role::into_python));
    python.push('\n');

    python.push_str(&users);
    python.push('\n');

    python.push_str(&rules);
    python.push('\n');

    if let Some(path) = additional_constraints_path {
        python.push_str("# Additional constraints\n\n");
        python.push_str(&fs::read_to_string(path).unwrap());
        python.push('\n');
    }

    python.push_str("# Output\n\nprint(solver.check())");
    python.push('\n');

    python
}

impl Class {
    fn into_python(self) -> String {
        let mut result = format!("{name} = Const(\"{name}\", cclass)\n", name = self.name);
        for permission in self.permissions {
            result.push_str(&format!(
                "{name} = Const(\"{name}\", permission)\n",
                name = permission.name
            ));
        }
        result
    }
}

impl Role {
    fn into_python(self) -> String {
        format!("{name} = Const(\"{name}\", role)\n", name = self.name)
    }
}

impl Type {
    fn into_python(self) -> String {
        format!("{name} = Const(\"{name}\", type)\n", name = self.name)
    }
}

impl User {
    fn into_python(self, roles: &Vec<Role>) -> String {
        let mut result = format!("{name} = Const(\"{name}\", user)\n", name = self.name);
        for role_id in self.roles {
            result.push_str(&format!(
                "solver.add(user_has_role({name}, {role}))\n",
                name = self.name,
                role = roles
                    .into_iter()
                    .find(|role| role.id == role_id)
                    .unwrap()
                    .name,
            ));
        }
        result
    }
}

impl Rule {
    fn into_python(self, classes: &Vec<Class>, types: &Vec<Type>) -> String {
        let mut result = String::new();
        let permissions = self.permissions;

        for (class_id, permission_id) in permissions {
            let mut permission = None;
            let mut class = None;

            'outer: for c in classes {
                if c.id == class_id {
                    for p in c.permissions.iter() {
                        if p.id == permission_id {
                            permission = Some(p);
                            class = Some(c);
                            break 'outer;
                        }
                    }
                }
            }

            let permission = permission.expect("did not find matching permission");
            let class = class.expect("did not find matching class");

            for source_type in self.source_types.types.iter() {
                for target_type in self.target_types.types.iter() {
                    result.push_str(&format!(
                        "solver.add(av_allow({}, {}, {}, {}) == True)\n",
                        types
                            .into_iter()
                            .find(|ty| ty.id == *source_type)
                            .map(|ty| &ty.name)
                            .unwrap(),
                        types
                            .into_iter()
                            .find(|ty| ty.id == *target_type)
                            .map(|ty| &ty.name)
                            .unwrap(),
                        class.name,
                        permission.name
                    ));
                }
            }
        }
        result
    }
}
