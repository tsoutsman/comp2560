#!/usr/bin/env/ python3

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

# Classes

file = Const("file", cclass)
create = Const("create", permission)
view = Const("view", permission)
modify = Const("modify", permission)

# Types

lecture_slides = Const("lecture_slides", type)
group_presentations = Const("group_presentations", type)
student_t = Const("student_t", type)
teacher_t = Const("teacher_t", type)

# Roles

teacher_r = Const("teacher_r", role)
object_r = Const("object_r", role)
student_r = Const("student_r", role)

# Users

bob = Const("bob", user)
solver.add(user_has_role(bob, teacher_r))

alice = Const("alice", user)
solver.add(user_has_role(alice, student_r))

# Rules

solver.add(av_allow(teacher_t, lecture_slides, file, create) == True)
solver.add(av_allow(teacher_t, lecture_slides, file, modify) == True)
solver.add(av_allow(teacher_t, lecture_slides, file, view) == True)

solver.add(av_allow(teacher_t, group_presentations, file, create) == True)
solver.add(av_allow(teacher_t, group_presentations, file, modify) == True)
solver.add(av_allow(teacher_t, group_presentations, file, view) == True)

solver.add(av_allow(student_t, lecture_slides, file, view) == True)

solver.add(av_allow(student_t, group_presentations, file, modify) == True)
solver.add(av_allow(student_t, group_presentations, file, view) == True)

# Additional constraints

u = Const("u", user)
r = Const("r", role)
t = Const("t", type)

solver.add(
    ForAll(
        [u],
        Implies(
            user_has_role(u, student_r),
            ForAll(
                [r],
                Implies(
                    user_has_role(u, r),
                    ForAll(
                        [t],
                        Implies(
                            role_has_type(r, t),
                            av_allow(t, lecture_slides, file, create) == False,
                        ),
                    ),
                ),
            ),
        ),
    )
)

# Output

print(solver.check())

