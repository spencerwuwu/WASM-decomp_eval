#!/usr/bin/env python3
import os
import sys
from clang.cindex import TranslationUnit

opt_level = '-O2'
c_flags_str  = ' -g3 ' 
c_flags_str += '-fignore-exceptions -fPIC -fvisibility=default -mllvm -combiner-global-alias-analysis=false -mllvm -enable-emscripten-sjlj -mllvm -disable-lsr -Werror=implicit-function-declaration --sysroot=$(dirname $(which emcc))/cache/sysroot -Xclang -iwithsysroot/include/fakesdl -Xclang -iwithsysroot/include/compat '
c_flags = c_flags_str.split()

output_base = '../new_compiled_benchmarks/em_output_' + opt_level[1:]
ast_output_folder = output_base + '/ast_x86/'


pbcPath = 'polybench-c-4.2.1-beta/'
pbcSourceFilesWithPath = [
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
                          'stencils/adi/adi.c',
                          'stencils/fdtd-2d/fdtd-2d.c',
                          'stencils/heat-3d/heat-3d.c',
                          'stencils/jacobi-1d/jacobi-1d.c',
                          'stencils/jacobi-2d/jacobi-2d.c',
                          'stencils/seidel-2d/seidel-2d.c'
                          ]


chsPath = 'CHStone_v1.11_150204/'
chsSourceFilesWithPath = [
                          "aes/aes.c",
                          "adpcm/adpcm.c",
                          "blowfish/bf.c",
                          "dfadd/dfadd.c",
                          "dfdiv/dfdiv.c",
                          "dfmul/dfmul.c",
                          "dfsin/dfsin.c",
                          "gsm/gsm.c",
                          "mips/mips.c",
                          "motion/mpeg2.c",
                          "sha/sha_driver.c"
                          ]




def pbcCompile():
    print('================PolyBenchC====================')
    for i in range(len(pbcSourceFilesWithPath)):
        curr = pbcSourceFilesWithPath[i]
        fileName = curr.split('/')[-1][:-2]
        if "2mm" in curr or "3mm" in curr:
            fileName = "PL_" + fileName
        flags = c_flags + ['-I polybench-c-4.2.1-beta/utilities', opt_level]
        t_unit = TranslationUnit.from_source(pbcPath+curr, flags)
        out_f = ast_output_folder + fileName + ".ast"
        t_unit.save(out_f)
        print("Generated:", out_f)



def chsCompile():
    print('\n=================CHStone======================')
    for i in range(len(chsSourceFilesWithPath)):
        curr = chsSourceFilesWithPath[i]
        fileName = curr.split('/')[-1][:-2]
        t_unit = TranslationUnit.from_source(chsPath+curr, c_flags)
        out_f = ast_output_folder + fileName + ".ast"
        t_unit.save(out_f)
        print("Generated:", out_f)



if __name__ == '__main__':
    if not os.path.exists(ast_output_folder):
        os.makedirs(ast_output_folder)
    pbcCompile()
    chsCompile()
