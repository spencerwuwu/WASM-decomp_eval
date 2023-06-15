#!/usr/bin/env python3
import os
import shutil
import subprocess
from src import generator, modifier, replacer, Config

base_dir = "/home/weicheng/Documents/CS699_WASM/CS699_webassembly/new_compiled_benchmarks/em_output_O0"
orig_dir = f"{base_dir}/d_ghidra"
out_dir = f"{base_dir}/d_ghidra_new"
wasm_symbol_dir = f"{base_dir}/d_wasm2c_symbols/"


for f in os.listdir(wasm_symbol_dir):
    func_names = []
    with open(f"{wasm_symbol_dir}/{f}", "r") as fd:
        for line in fd.read().split("\n"):
            if len(line) == 0:
                continue
            func_names.append(line.split(":")[0])

    proj = f.replace(".map", "")
    with open(f"{orig_dir}/{proj}.c", "r") as fd:
        text = fd.read()
    text = modifier.R2_modifier_before(text)
    text = modifier.R2_modifier_after(text)
    func_decls = ""
    new_code = """
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "ghidra_base.h"
"""
    new_code += f"#include \"{proj}.h\"\n"

    if proj in ["dfadd","dfdiv","dfmul","dfsin"]:
        pass
        #new_code += f'#include "{proj}/softfloat-specialize"\n'
        #new_code += '#include "SPARC-GCC.h"\n'
        #new_code += f'#include "{proj}/softfloat-macros"\n'

    for func_name in func_names:
        #print(f"Searching {func_name} in {proj}")
        if func_name not in text:
            print(f"Missing {func_name} in {proj}")
            continue
        m = replacer.find_fun_pos_with_name(text, func_name)
        cur_func = text[m[0]:m[1]]
        cur_decl = cur_func.split('{',1)[0].replace("\n", " ");
        new_code += cur_func
        new_code += "\n"
        func_decls += f"{cur_decl};\n"

    with open(f"{out_dir}/{proj}.c", "w") as fd:
        fd.write(new_code)

    with open(f"{out_dir}/{proj}.h", "w") as fd:
        if proj == "aes":
            fd.write("typedef struct evp_pkey_ctx_st evp_pkey_ctx_st, *Pevp_pkey_ctx_st;\n")
            fd.write("struct evp_pkey_ctx_st {};\n")
            fd.write("typedef struct evp_pkey_ctx_st EVP_PKEY_CTX;\n")
        if proj == "bf":
            fd.write("typedef struct bf_key_st bf_key_st, *Pbf_key_st;\n")
            fd.write("typedef struct bf_key_st BF_KEY;\n")
            fd.write("struct bf_key_st {\n")
            fd.write("uint P[18];\n  uint S[1024];\n")
            fd.write("};\n")
        fd.write(func_decls)

    # Try recompile
    cmd = f"clang -c {out_dir}/{proj}.c -I{Config.poly_absolute_path} -o /dev/null -Wno-"
    #status, output = subprocess.getstatusoutput(cmd)
    status, output = generator.compile_single_file(f"{out_dir}/{proj}.c", f" -g -c -I{Config.poly_absolute_path} -o /dev/null", False)
    if status != 0:
        new_code = generator.add_extra_declarations(new_code, output, "DAT")
        with open(f"{out_dir}/{proj}.h", "a") as fd:
            fd.write(new_code)
