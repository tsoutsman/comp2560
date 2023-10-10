use std::collections::HashSet;

use serde::Serialize;

use crate::{bindings::type_set, ebitmap};

#[derive(Debug, Clone, Serialize)]
pub(crate) struct Policy {
    pub(crate) classes: Vec<Class>,
    pub(crate) types: Vec<Type>,
    pub(crate) roles: Vec<Role>,
    pub(crate) users: Vec<User>,
    pub(crate) rules: Vec<Rule>,
}

#[derive(Debug, Clone, Serialize)]
pub(crate) struct Class {
    pub(crate) id: u32,
    pub(crate) name: String,
    pub(crate) permissions: Vec<Permission>,
    pub(crate) default_user: i8,
    pub(crate) default_role: i8,
    pub(crate) default_type: i8,
    pub(crate) default_range: i8,
}

#[derive(Debug, Clone, Serialize)]
pub(crate) struct User {
    pub(crate) id: u32,
    pub(crate) name: String,
    pub(crate) roles: Vec<u32>,
}

#[derive(Debug, Clone, Serialize)]
pub(crate) struct Permission {
    pub(crate) id: u32,
    pub(crate) name: String,
}

#[derive(Debug, Clone, Serialize)]
pub(crate) struct Role {
    pub(crate) id: u32,
    pub(crate) name: String,
}

#[derive(Debug, Clone, Serialize)]
pub(crate) struct Type {
    pub(crate) id: u32,
    pub(crate) name: String,
}

#[derive(Debug, Clone, Serialize)]
pub(crate) struct Rule {
    pub(crate) ty: RuleType,
    pub(crate) source_types: TypeSet,
    pub(crate) target_types: TypeSet,
    pub(crate) permissions: Vec<(u32, u32)>,
}

#[derive(Debug, Clone, Serialize)]
pub(crate) enum RuleType {
    Allow,
    NeverAllow,
}

#[derive(Debug, Clone, Serialize)]
pub(crate) struct TypeSet {
    pub(crate) types: HashSet<u32>,
    pub(crate) negatives: HashSet<u32>,
}

impl From<&type_set> for TypeSet {
    fn from(set: &type_set) -> Self {
        let types = if set.types.node.is_null() {
            HashSet::new()
        } else {
            unsafe { ebitmap::Iter::new(set.types) }.collect()
        };

        let negatives = if set.negset.node.is_null() {
            HashSet::new()
        } else {
            unsafe { ebitmap::Iter::new(set.negset) }.collect()
        };

        Self { types, negatives }
    }
}
