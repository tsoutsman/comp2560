use std::{env, path::PathBuf, process::Command};

fn main() {
    let cargo_manifest_dir = PathBuf::from(env::var("CARGO_MANIFEST_DIR").unwrap());
    let out_dir = PathBuf::from(env::var("OUT_DIR").unwrap());

    // Compile libsepol
    let libsepol_dir = cargo_manifest_dir.join("src").join("c").join("libsepol");
    println!("cargo:rerun-if-changed={}", libsepol_dir.display());
    let libsepol_out_dir = out_dir.join("libsepol");
    fs_extra::copy_items(
        &[libsepol_dir],
        &out_dir,
        &fs_extra::dir::CopyOptions::new().overwrite(true),
    )
    .unwrap();
    assert!(
        Command::new("make")
            .current_dir(&libsepol_out_dir)
            .spawn()
            .unwrap()
            .wait()
            .unwrap()
            .success(),
        "failed to make libsepol"
    );
    let libsepol_lib_path = libsepol_out_dir.join("src");
    println!("cargo:rustc-link-search={}", libsepol_lib_path.display());
    println!("cargo:rustc-link-lib=sepol");

    // Compile various C files
    compile_c_file("lex.yy.c", "lex");
    compile_c_file("y.tab.c", "tab");
    compile_c_file("queue.c", "queue");
    compile_c_file("parse_util.c", "parse_util");
    compile_c_file("checkpolicy.c", "checkpolicy");
    compile_c_file("module_compiler.c", "module_compiler");
    compile_c_file("policy_define.c", "policy_define");

    // Generate binding to parse_util.h

    let bindings = bindgen::Builder::default()
        .header("src/c/parse_util.h")
        .parse_callbacks(Box::new(bindgen::CargoCallbacks))
        .generate()
        .unwrap();

    bindings.write_to_file(out_dir.join("bindings.rs")).unwrap();
}

fn compile_c_file(file_name: &str, lib_name: &str) {
    println!("cargo:rerun-if-changed=src/{file_name}");
    cc::Build::new()
        .file(format!("src/c/{file_name}"))
        .compile(lib_name);
    println!("cargo:rustc-link-lib={lib_name}");
}
