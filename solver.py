#!/usr/bin/env python3

from z3 import *

if __name__ == "__main__":
    parser = argparse.ArgumentParser(prog="solver")

    solver = Solver()

    user = DeclareSort("User")
    role = DeclareSort("Role")
    type = DeclareSort("Type")
    cclass = DeclareSort("Class")
    permission_set = DeclareSort("PermissionSet")

    user_id = Function("user-id", user, IntSort())
    user_name = Function("user-name", user, StringSort())
    role_id = Function("role-id", role, IntSort())
    type_id = Function("type-id", type, IntSort())
    class_id = Function("class-id", cclass, IntSort())

    user_has_role = Function("user-has-role", user, role, BoolSort())
    role_has_type = Function("role_has_type", role, type, BoolSort())

    av_allow = Function("av_allow", type, type, cclass, permission_set, BoolSort())
    # av_neverallow = Function("av_neverallow", type, type, class, permission_set, BoolSort())

    alice_u = Const("alice_u", user)
    teacher_r = Const("teacher", role)
    student_r = Const("student", role)

    teacher_t = Const("teacher_t", type)

    lecture_slides = Const("lecture_slides", type)

    file = Const("file", cclass)

    perms = Const("perms", permission_set)

    solver.add(user_name(alice_u) == "hello")
    solver.add(user_has_role(alice_u, teacher_r) == True)
    solver.add(user_has_role(alice_u, student_r) == True)
    solver.add(role_has_type(teacher_r, teacher_t) == True)
    solver.add(av_allow(teacher_t, lecture_slides, file, perms) == True)

    solver.add(user_has_role(alice_u, teacher_r) == False)

    print(solver.check())
