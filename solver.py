#!/usr/bin/env python3

from z3 import Solver, DeclareSort, Function, IntSort, StringSort, Const

if __name__ == "__main__":
    solver = Solver()

    user = DeclareSort("User")
    role = DeclareSort("Role")
    type = DeclareSort("Type")
    cclass = DeclareSort("Class")

    user_id = Function("user-id", user, IntSort())
    user_name = Function("user-name", user, StringSort())
    role_id = Function("role-id", role, IntSort())
    type_id = Function("type-id", type, IntSort())
    class_id = Function("class-id", cclass, IntSort())

    alice_u = Const("alice_u", user)
