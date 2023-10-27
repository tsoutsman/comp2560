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

use std::{ffi::CString, io::Write};

use criterion::{black_box, criterion_group, criterion_main, BenchmarkId, Criterion};
use parse_policy::{
    bindings::read_source_policy, classes, model::Policy, new_policy, py, roles, rules, types,
    users,
};
use tempfile::NamedTempFile;

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

pub fn bench_read_source_policy(c: &mut Criterion) {
    let mut group = c.benchmark_group("read_source_policy");
    // for size in [25_000, 50_000, 75_000, 100_000] {
    for size in [200, 400, 600, 800, 1000] {
        let file = generate_policy_file(size, false);
        let file_path = CString::new(file.path().to_str().unwrap()).unwrap();
        let progname = CString::new("bench").unwrap();

        group.bench_with_input(BenchmarkId::from_parameter(size), &file_path, |b, path| {
            b.iter(|| {
                let mut policy = new_policy();
                unsafe {
                    read_source_policy(&mut policy as *mut _, path.as_ptr(), progname.as_ptr())
                };
                black_box(policy);
            })
        });
    }
}

pub fn bench_construct_rust_policy(c: &mut Criterion) {
    let mut group = c.benchmark_group("construct_rust_policy");
    // for size in [25_000, 50_000, 75_000, 100_000] {
    for size in [200, 400, 600, 800, 1000] {
        let file = generate_policy_file(size, false);
        let file_path = CString::new(file.path().to_str().unwrap()).unwrap();
        let progname = CString::new("bench").unwrap();

        let mut policy = new_policy();
        unsafe { read_source_policy(&mut policy as *mut _, file_path.as_ptr(), progname.as_ptr()) };

        group.bench_with_input(BenchmarkId::from_parameter(size), &policy, |b, policy| {
            b.iter(|| {
                let policy = Policy {
                    types: types(&policy),
                    roles: roles(&policy),
                    classes: classes(&policy),
                    users: users(&policy),
                    rules: rules(&policy),
                };
                black_box(policy);
            });
        });
    }
}

pub fn bench_generate_py_file(c: &mut Criterion) {
    let mut group = c.benchmark_group("generate_py_file");
    // for size in [25_000, 50_000, 75_000, 100_000] {
    for size in [200, 400, 600, 800, 1000] {
        let file = generate_policy_file(size, false);
        let file_path = CString::new(file.path().to_str().unwrap()).unwrap();
        let progname = CString::new("bench").unwrap();

        let mut policy = new_policy();
        unsafe { read_source_policy(&mut policy as *mut _, file_path.as_ptr(), progname.as_ptr()) };

        let policy = Policy {
            types: types(&policy),
            roles: roles(&policy),
            classes: classes(&policy),
            users: users(&policy),
            rules: rules(&policy),
        };

        group.bench_with_input(BenchmarkId::from_parameter(size), &policy, |b, policy| {
            b.iter(|| {
                black_box(py::generate(policy.clone(), None));
            });
        });
    }
}

criterion_group!(
    benches,
    bench_read_source_policy,
    bench_construct_rust_policy,
    bench_generate_py_file,
);
criterion_main!(benches);
