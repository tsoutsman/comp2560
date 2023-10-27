#![allow(soft_unstable)]
#![feature(test)]

use std::{ffi::CString, io::Write, process::Command};

use parse_policy::{
    bindings::read_source_policy, classes, model::Policy, new_policy, py, roles, rules, types,
    users,
};
use tempfile::NamedTempFile;

fn generate_additional_constraints(size: usize) -> String {
    use std::fmt::Write;

    let mut result = String::new();
    for i in 0..size {
        writeln!(
            result,
            "
constraint_{i}_u = Const(\"constraint_{i}_u\", user)
constraint_{i}_r = Const(\"constraint_{i}_r\", role)
constraint_{i}_t = Const(\"constraint_{i}_t\", type)

solver.add(
    ForAll(
        [constraint_{i}_u],
        Implies(
            user_has_role(constraint_{i}_u, role_{i}),
            ForAll(
                [constraint_{i}_r],
                Implies(
                    user_has_role(constraint_{i}_u, constraint_{i}_r),
                    ForAll(
                        [constraint_{i}_t],
                        Implies(
                            role_has_type(constraint_{i}_r, constraint_{i}_t),
                            av_allow(constraint_{i}_t, type_{i}, class_{i}, class_{i}_perm_0) == \
             True,
                        ),
                    ),
                ),
            ),
        ),
    )
)
"
        )
        .unwrap();
    }
    result
}

fn generate_policy_file(size: usize, saturate_roles: bool) -> NamedTempFile {
    use std::fmt::Write;

    let mut policy = String::new();

    for i in 0..size {
        writeln!(policy, "class class_{i}").unwrap();
    }

    policy.push_str("sid unlabeled");

    for i in 0..size {
        policy.push_str(&format!(
            "
class class_{i}
{{
    class_{i}_perm_0
    class_{i}_perm_1
    class_{i}_perm_2
}}
",
        ));
    }

    for i in 0..size {
        policy.push_str(&format!(
            "
role role_{i};
type role_type_{i};
role role_{i} types role_type_{i};
"
        ));
    }

    for i in 0..size {
        writeln!(policy, "type type_{i};").unwrap();
    }

    for i in 0..size {
        writeln!(
            policy,
            "allow role_type_{i} type_{i} : class_{i} {{ class_{i}_perm_0 class_{i}_perm_1 \
             class_{i}_perm_2 }};"
        )
        .unwrap();
    }

    for i in 0..size {
        if saturate_roles {
            let role_list = (0..size).map(|i| format!("role_{i} ")).collect::<String>();
            writeln!(policy, "user user_{i} roles {{ {role_list} }};").unwrap();
        } else {
            writeln!(policy, "user user_{i} roles {{ role_{i} }};").unwrap();
        }
    }

    writeln!(policy, "sid unlabeled user_0:object_r:type_0").unwrap();

    let mut file = tempfile::NamedTempFile::new().unwrap();
    write!(file, "{}", policy).unwrap();

    file
}

// #[bench]
// fn bench_read_source_policy(b: &mut Bencher) {
//     let file = generate_policy_file(800, true);
//     let path = CString::new(file.path().to_str().unwrap()).unwrap();
//     let progname = CString::new("bench").unwrap();

//     b.iter(|| {
//         let mut policy = new_policy();
//         unsafe { read_source_policy(&mut policy as *mut _, path.as_ptr(),
// progname.as_ptr()) };         black_box(policy);
//     });
// }

// #[bench]
// fn bench_construct_rust_policy(b: &mut Bencher) {
//     let file = generate_policy_file(800, true);
//     let path = CString::new(file.path().to_str().unwrap()).unwrap();
//     let progname = CString::new("bench").unwrap();
//     let mut policy = new_policy();
//     unsafe { read_source_policy(&mut policy as *mut _, path.as_ptr(),
// progname.as_ptr()) };

//     b.iter(|| {
//         let policy = Policy {
//             types: types(&policy),
//             roles: roles(&policy),
//             classes: classes(&policy),
//             users: users(&policy),
//             rules: rules(&policy),
//         };
//         black_box(policy);
//     });
// }

// #[bench]
// fn bench_generate_py_file(b: &mut Bencher) {
//     let file = generate_policy_file(800, true);
//     let path = CString::new(file.path().to_str().unwrap()).unwrap();
//     let progname = CString::new("bench").unwrap();
//     let mut policy = new_policy();
//     unsafe { read_source_policy(&mut policy as *mut _, path.as_ptr(),
// progname.as_ptr()) };     let policy = Policy {
//         types: types(&policy),
//         roles: roles(&policy),
//         classes: classes(&policy),
//         users: users(&policy),
//         rules: rules(&policy),
//     };
//     b.iter(|| {
//         black_box(py::generate(policy.clone(), None));
//     });
// }

fn generate_py_file(
    size: usize,
    saturate_roles: bool,
    additional_constraints_size: usize,
) -> NamedTempFile {
    let file = generate_policy_file(size, saturate_roles);
    println!("{:?}", file.path());
    loop {}

    let path = CString::new(file.path().to_str().unwrap()).unwrap();
    let progname = CString::new("bench").unwrap();

    let mut policy = new_policy();
    unsafe { read_source_policy(&mut policy as *mut _, path.as_ptr(), progname.as_ptr()) };
    let policy = Policy {
        types: types(&policy),
        roles: roles(&policy),
        classes: classes(&policy),
        users: users(&policy),
        rules: rules(&policy),
    };

    let additional_constraints_file = if additional_constraints_size > 0 {
        let mut file = tempfile::NamedTempFile::new().unwrap();
        write!(
            file,
            "{}",
            generate_additional_constraints(additional_constraints_size)
        )
        .unwrap();
        Some(file)
    } else {
        None
    };

    let mut file = tempfile::NamedTempFile::new().unwrap();

    write!(
        file,
        "{}",
        py::generate(
            policy,
            additional_constraints_file.as_ref().map(|file| file.path())
        )
    )
    .unwrap();

    println!("{:?}", file.path());

    file
}

use criterion::{criterion_group, criterion_main, BenchmarkId, Criterion};

pub fn criterion_benchmark(c: &mut Criterion) {
    // for size in [500, 1000, 1500] {
    for size in [2] {
        let mut group = c.benchmark_group(&format!("{size}"));
        for num_constraints in [1, 2, 3, 4, 5] {
            let file = generate_py_file(size, false, num_constraints);
            let file_path = file.path();
            group.bench_with_input(
                BenchmarkId::from_parameter(num_constraints),
                &file_path,
                |b, path| {
                    b.iter(|| {
                        let output = Command::new("python3")
                            .arg(path)
                            .output()
                            .expect("failed to execute python");
                        assert!(output.status.success());
                    })
                },
            );
        }
    }
}

criterion_group!(
    name = benches;
    config = Criterion::default()
        .sample_size(10);
    targets = criterion_benchmark
);
criterion_main!(benches);
