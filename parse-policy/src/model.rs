use std::collections::HashSet;

use serde::Serialize;

use crate::{bindings::type_set, ebitmap};

#[derive(Debug, Clone, Serialize)]
pub struct Policy {
    pub classes: Vec<Class>,
    pub types: Vec<Type>,
    pub roles: Vec<Role>,
    pub users: Vec<User>,
    pub rules: Vec<Rule>,
}

#[derive(Debug, Clone, Serialize)]
pub struct Class {
    pub id: u32,
    pub name: String,
    pub permissions: Vec<Permission>,
    pub default_user: i8,
    pub default_role: i8,
    pub default_type: i8,
    pub default_range: i8,
}

#[derive(Debug, Clone, Serialize)]
pub struct User {
    pub id: u32,
    pub name: String,
    pub roles: Vec<u32>,
}

#[derive(Debug, Clone, Serialize)]
pub struct Permission {
    pub id: u32,
    pub name: String,
}

#[derive(Debug, Clone, Serialize)]
pub struct Role {
    pub id: u32,
    pub name: String,
    pub types: Vec<u32>,
}

#[derive(Debug, Clone, Serialize)]
pub struct Type {
    pub id: u32,
    pub name: String,
}

#[derive(Debug, Clone, Serialize)]
pub struct Rule {
    pub ty: RuleType,
    pub source_types: TypeSet,
    pub target_types: TypeSet,
    pub permissions: Vec<(u32, u32)>,
}

#[derive(Debug, Clone, Serialize)]
pub enum RuleType {
    Allow,
    NeverAllow,
}

#[derive(Debug, Clone, Serialize)]
pub struct TypeSet {
    pub types: HashSet<u32>,
    pub negatives: HashSet<u32>,
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
