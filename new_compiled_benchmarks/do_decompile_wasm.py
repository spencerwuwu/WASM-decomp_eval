#!/usr/bin/env python3
import logging
import sys
import os
from subprocess import Popen, PIPE

OPTIMIZE_LEVELS = ["0", "1", "2"]

W2C2 = "/home/weicheng/Documents/CS699_WASM/w2c2/build/w2c2/w2c2"
WASM2C = "/home/weicheng/Documents/CS699_WASM/wabt/build/wasm2c"

BLACKLIST = [
        #"em_output_O1/wasm/gsm.wasm",
        ]

logging.basicConfig(level=logging.INFO)
log = logging.getLogger("do_decompile_wasm.py")

"""
"   External process call
"   return None if error
"   else the STDOUT from pipe
"""
def run_cmd(cmd):
    if log is not None:
        log.debug(cmd)
    process = Popen(cmd, stdout=PIPE, stderr=PIPE, shell=True)
    out, err = process.communicate()
    if process.returncode != 0:
        err = err.decode("utf8","ignore")
        if len(err) != 0 and log is not None:
            log.error(err)
        return None
    return out.decode("utf8", "ignore")


def _decompile_w2c2(wasm, out_f):
    log.info("Handling w2c2 %s" % wasm)
    run_cmd("%s %s %s" % (W2C2, wasm, out_f))


def _decompile_wasm2c(wasm, c_f, out_f, out_dir):
    log.info("Handling wasm2c %s" % wasm)
    run_cmd("cd %s; %s ../../%s -o %s" % (out_dir, WASM2C, wasm, c_f))

    with open(out_f, "r") as fd:
        lines = list(fd.readlines())

    fd =  open(out_f, "w")
    filename = c_f.replace(".c", "")
    for line in lines:
        if line == "#include \"%s.h\"\n" % filename:
            fd.write(line)
            fd.write("// Patched line:\nWASM_RT_THREAD_LOCAL uint32_t wasm_rt_call_stack_depth = 0;\n")
        else:
            fd.write(line)
    fd.close()




def decompile_wasm(base_dir):
    wasm_dir   = base_dir + "wasm/"
    w2c2_dir   = base_dir + "d_w2c2/"
    wasm2c_dir = base_dir + "d_wasm2c/"

    if not os.path.exists(wasm_dir):
        log.error("Missing %s" % wasm_dir)
        return

    if not os.path.exists(wasm2c_dir):
        os.makedirs(wasm2c_dir)
    if not os.path.exists(w2c2_dir):
        os.makedirs(w2c2_dir)

    for f in os.listdir(wasm_dir):
        if not f.endswith(".wasm"):
            continue
        wasm = f
        wasm_f = wasm_dir + wasm
        if wasm_f in BLACKLIST:
            continue

        c_file = wasm.replace(".wasm", ".c")
        w2c2_f = w2c2_dir + c_file
        wasm2c_f = wasm2c_dir + c_file

        if not os.path.exists(w2c2_f):
            _decompile_w2c2(wasm_f, w2c2_f)
        if not os.path.exists(wasm2c_f):
            _decompile_wasm2c(wasm_f, c_file, wasm2c_f, wasm2c_dir)
        


if __name__ == '__main__':
    for o in OPTIMIZE_LEVELS:
        base_dir = "em_output_O%s/" % o
        decompile_wasm(base_dir)
    
