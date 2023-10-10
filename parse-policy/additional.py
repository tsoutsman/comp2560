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
