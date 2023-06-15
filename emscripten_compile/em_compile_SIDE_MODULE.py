#!/usr/bin/env python3
import sys
import os

pbcPath = 'polybench-c-4.2.1-beta/'
pbcSourceFilesWithPath = [
                          'stencils/adi/adi.c',
                          'medley/floyd-warshall/floyd-warshall.c',
                          'medley/nussinov/nussinov.c',
                          'medley/deriche/deriche.c',
                          'datamining/correlation/correlation.c',
                          'datamining/covariance/covariance.c',
                          'linear-algebra/blas/gemm/gemm.c',
                          'linear-algebra/blas/gemver/gemver.c',
                          'linear-algebra/blas/gesummv/gesummv.c',
                          'linear-algebra/blas/symm/symm.c',
                          'linear-algebra/blas/syr2k/syr2k.c',
                          'linear-algebra/blas/syrk/syrk.c',
                          'linear-algebra/blas/trmm/trmm.c',
                          'linear-algebra/kernels/2mm/2mm.c',
                          'linear-algebra/kernels/3mm/3mm.c',
                          'linear-algebra/kernels/atax/atax.c',
                          'linear-algebra/kernels/bicg/bicg.c',
                          'linear-algebra/kernels/doitgen/doitgen.c',
                          'linear-algebra/kernels/mvt/mvt.c',
                          'linear-algebra/solvers/cholesky/cholesky.c',
                          'linear-algebra/solvers/durbin/durbin.c',
                          'linear-algebra/solvers/gramschmidt/gramschmidt.c',
                          'linear-algebra/solvers/lu/lu.c',
                          'linear-algebra/solvers/ludcmp/ludcmp.c',
                          'linear-algebra/solvers/trisolv/trisolv.c',
                          'stencils/fdtd-2d/fdtd-2d.c',
                          'stencils/heat-3d/heat-3d.c',
                          'stencils/jacobi-1d/jacobi-1d.c',
                          'stencils/jacobi-2d/jacobi-2d.c',
                          'stencils/seidel-2d/seidel-2d.c'
                          ]


chsPath = 'CHStone_v1.11_150204/'
chsSourceFilesWithPath = [
                          "dfadd/dfadd.c",
                          "aes/aes.c",
                          "adpcm/adpcm.c",
                          "blowfish/bf.c",
                          "dfdiv/dfdiv.c",
                          "dfmul/dfmul.c",
                          "dfsin/dfsin.c",
                          "gsm/gsm.c",
                          "motion/mpeg2.c",
                          "sha/sha_driver.c"
                          # "mips/mips.c",
                          ]

opt_level = '-O2'
wasm_flags = '-s WASM=1 -s SIDE_MODULE=1 -g3 --emit-symbol-map'
c_flags  = ' -g3 -c ' 
c_flags += '-fignore-exceptions -fPIC -fvisibility=default -mllvm -combiner-global-alias-analysis=false -mllvm -enable-emscripten-sjlj -mllvm -disable-lsr -Werror=implicit-function-declaration --sysroot=$(dirname $(which emcc))/cache/sysroot -Xclang -iwithsysroot/include/fakesdl -Xclang -iwithsysroot/include/compat '

pbc_flags = ' -I polybench-c-4.2.1-beta/utilities '
chs_flags = ''

output_prefix = '-o '
output_base = '../new_compiled_benchmarks/em_output_' + opt_level[1:]
wasm_output_folder = output_base + '/wasm/'
bc_output_folder   = output_base + '/bc/'
c_output_folder    = output_base + '/x86/'
pbc_polybenchc_path = 'polybench-c-4.2.1-beta/utilities/polybench.c'

compiler = 'emcc'
#correctCompilerVersion = '1.38.33'
correctCompilerVersion = '3.1.31'

c_compiler = "$(dirname $(which emcc))/../bin/clang"


def pbcCompile():
    print('================PolyBenchC====================')
    if not os.path.isfile(pbc_polybenchc_path):
        raise Exception('File polybench.c is missing')
    for i in range(len(pbcSourceFilesWithPath)):
        curr = pbcSourceFilesWithPath[i]
        fileName = curr.split('/')[-1][:-2]
        if "2mm" in curr or "3mm" in curr:
            fileName = "PL_" + fileName

        command = compiler + ' ' + wasm_flags + ' ' + pbcPath + curr + ' ' + pbc_flags + ' ' + opt_level \
                  + ' ' + output_prefix + wasm_output_folder + fileName + '.wasm'
        #print(command)
        #print('Compiling WASM', curr)
        #os.system(command)

        command = c_compiler + ' ' + c_flags + ' ' + pbcPath + curr + ' ' + pbc_flags + ' ' + opt_level \
                  + ' ' + output_prefix + c_output_folder + fileName + '.o'
        print(command)
        #print('Compiling x86', curr)
        #os.system(command)
        exit(0)


def chsCompile():
    print('\n=================CHStone======================')
    for i in range(len(chsSourceFilesWithPath)):
        curr = chsSourceFilesWithPath[i]
        fileName = curr.split('/')[-1][:-2]

        command = compiler + ' ' + wasm_flags + ' ' + chsPath + curr + ' ' + chs_flags + ' ' + opt_level \
                  + ' ' + output_prefix + wasm_output_folder + fileName + '.wasm'
        #print(command)
        print('Compiling WASM', curr)
        os.system(command)

        command = c_compiler + ' ' + c_flags + ' ' + chsPath + curr + ' ' + chs_flags + ' ' + opt_level \
                  + ' ' + output_prefix + c_output_folder + fileName + '.o'
        #print(command)
        print('Compiling x86', curr)
        os.system(command)



if __name__ == '__main__':

    print()
    print("++ Optimization", opt_level)
    print("++ Output dir", output_base)
    print()

    if not os.path.exists(wasm_output_folder):
        os.makedirs(wasm_output_folder)
    if not os.path.exists(c_output_folder):
        os.makedirs(c_output_folder)

    pbcCompile()
    chsCompile()
