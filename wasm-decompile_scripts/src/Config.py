
####################################################################################
#
# Please update these absolute paths below before use
#
####################################################################################

# Absolute path to csmith runtime directory
runtime_dir = '/home/weicheng/Wasm/DecFuzzer/runtime'
RetDec_absolute_path = '/home/weicheng/Documents/CS699_WASM/RetDec/bin/retdec-decompiler'
JEB3_absolute_path = '/home/fuzz/Documents/jeb-pro-3.0-beta.8/jeb_linux.sh'  #
WasmDecompile_absolute_path = "/home/weicheng/Wasm/wabt/bin/wasm-decompile"
csmith_absolute_path = '/home/weicheng/Wasm/csmith-2.3.0/src'  #
poly_absolute_path = "/home/weicheng/Wasm/cs699_webassembly/emscripten_compile/polybench-c-4.2.1-beta/utilities/"


from enum import Enum
class Result(Enum):
    SUCCEED = 1
    F_DECOM = 2
    F_RECOM = 3
    F_DISCR = 4
    F_COM = 5

####################################################################################
#
# Please do not modify anything below unless you are clear about what is it used for
#
####################################################################################
probability_live_code_mutate = 0.3

timeout_sec = 2

replaced_func_name = 'func_1'

RetDec_test = False
JEB3_test = False
IDA_test = False
R2_test = True

#time_cmd = "time -p "
time_cmd = ""

JEB3_suffix = '_JEB3.c'
RetDec_suffix = '_retdec.c'
IDA_suffix = '_ida.c'
Radare2_suffix = '_r2.c'
WasmDecompile_suffix = '_wasm-decompile.c'


JEB3_decompile_cmd = (JEB3_absolute_path + " "
                      " -c --srv2 --script='/home/fuzz/Documents/jeb-pro-3.0-beta.8/DecompileFile.py' "
                      " -- "
                      )

RetDec_decompile_cmd = (RetDec_absolute_path + r" --cleanup "
                        )

Radare2_decompile_cmd = r"python3 ./src/R2_decompile.py "

WasmDecompile_decompile_cmd = WasmDecompile_absolute_path + " "

# this csmith command is not used in the Artifact Evaluation Package
csmith_cmd = (csmith_absolute_path + " "
              " --no-arrays"
              " --no-structs"
              " --no-unions"
              " --no-safe-math"
              " --no-pointers"
              " --no-longlong"
              " --max-funcs 1"
              " --max-expr-complexity 5"  # " --max-expr-complexity 10" # too complicated to analyse?
              )

#compile_cmd = 'gcc -fno-stack-protector -no-pie -O0 -w -m32 '
compile_cmd = 'clang -Wno- -g -Wno-error=int-conversion -O0 -fno-stack-protector -m32'

emcc_compile_cmd = f"emcc -s WASM=1 -s SIDE_MODULE=1 -g3 -w -I{runtime_dir}"

# CFG_measurer
gcc_cfg_option = ' -fdump-tree-cfg '
cfg_suffix = '.011t.cfg'


def get_live_code_mutate():
    global probability_live_code_mutate
    return probability_live_code_mutate


def set_live_code_mutate(value):
    global probability_live_code_mutate
    probability_live_code_mutate = value


def set_decompiler(tool=''):
    global RetDec_test, JEB3_test, IDA_test, R2_test, WasmDecompile_test
    RetDec_test = False
    JEB3_test = False
    IDA_test = False
    R2_test = False
    WasmDecompile_test = False
    if tool.startswith('retdec'):
        RetDec_test = True
    elif tool.startswith('jeb'):
        JEB3_test = True
    elif tool.startswith('ida'):
        IDA_test = True
    elif tool.startswith('r2'):
        R2_test = True
    elif tool.startswith('wasm-decompile'):
        WasmDecompile_test = True
