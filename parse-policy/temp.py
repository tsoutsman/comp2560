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

teacher_r = Const("teacher_r", user)
object_r = Const("object_r", user)
student_r = Const("student_r", user)

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

# Output

print(solver.check())

