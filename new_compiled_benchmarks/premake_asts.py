#!/usr/bin/env python3
import os
from clang.cindex import TranslationUnit

WASM_DIRS = ["em_output_O0", "em_output_O1", "em_output_O2"]
DE_DIRS = ["d_w2c2", "d_wasm2c"]

for wasm in WASM_DIRS:
    for de in DE_DIRS:
        out = de.replace("d_", "ast_")
        out_dir = "%s/%s/" % (wasm, out)
        src_dir = "%s/%s/" % (wasm, de)
        if not os.path.exists(out_dir):
            os.makedirs(out_dir)

        for c_file in os.listdir(src_dir):
            if not c_file.endswith(".c"):
                continue

            out_f = out_dir + c_file.replace(".c", ".ast")
            #if os.path.exists(out_f):
            #    continue

            t_unit = TranslationUnit.from_source(src_dir+c_file, ["-Idecompiler_lib/"])
            t_unit.save(out_f)
            print("Generated:", out_f)
