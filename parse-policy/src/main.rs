use std::{env, ffi::CString, io::Write, path::PathBuf, process::Command};

// TODO: SYM_BOOLS, SYM_CATS, SYM_COMMONS, SYM_LEVELS, SYM_USERS
use parse_policy::{
    bindings::read_source_policy, classes, model::Policy, new_policy, py, roles, rules, types,
    users,
};

fn main() {
    let mut policy = new_policy();

    let mut args = env::args();
    args.next().unwrap();
    let policy_file_path = CString::new(args.next().expect("no policy file provided")).unwrap();
    let additional_constraints_path = args.next().map(PathBuf::from);

    let progname = CString::new("parse-policy").unwrap();

    unsafe {
        read_source_policy(
            &mut policy as *mut _,
            policy_file_path.as_ptr(),
            progname.as_ptr(),
        )
    };

    let policy = Policy {
        types: types(&policy),
        roles: roles(&policy),
        classes: classes(&policy),
        users: users(&policy),
        rules: rules(&policy),
    };

    let mut file = tempfile::NamedTempFile::new().unwrap();
    write!(
        file,
        "{}",
        py::generate(policy, additional_constraints_path.as_deref())
    )
    .unwrap();

    let output = Command::new("python3")
        .arg(file.path())
        .output()
        .expect("failed to execute python");
    assert!(output.status.success());
    println!("{}", String::from_utf8(output.stdout).unwrap());
}
