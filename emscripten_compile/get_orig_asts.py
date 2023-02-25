#!/usr/bin/env python3
import sys
import os

pbcPath = 'polybench-c-4.2.1-beta/'
pbcSourceFilesWithPath = ['medley/floyd-warshall/floyd-warshall.c',
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
                          'stencils/seidel-2d/seidel-2d.c']

chsPath = 'CHStone_v1.11_150204/'
chsSourceFilesWithPath = ["adpcm/adpcm.c",
                          "aes/aes.c",
                          "blowfish/bf.c",
                          "dfadd/dfadd.c",
                          "dfdiv/dfdiv.c",
                          "dfmul/dfmul.c",
                          "dfsin/dfsin.c",
                          "gsm/gsm.c",
                          "mips/mips.c",
                          "motion/mpeg2.c",
                          "sha/sha_driver.c"]


em_flags = '-s WASM=1 -s ALLOW_MEMORY_GROWTH=1'
pbc_flags_type1 = 'polybench-c-4.2.1-beta/utilities/polybench_type1.c -I polybench-c-4.2.1-beta/utilities ' 
pbc_flags_type2 = 'polybench-c-4.2.1-beta/utilities/polybench_type2.c -I polybench-c-4.2.1-beta/utilities ' 
pbc_flags_type3 = 'polybench-c-4.2.1-beta/utilities/polybench_type3.c -I polybench-c-4.2.1-beta/utilities ' 

chs_flags = ''
output_prefix = '-o '
output_folder = '../asts/orig_asts/'
pbc_polybenchc_path = 'polybench-c-4.2.1-beta/utilities/polybench.c'


from subprocess import Popen, PIPE, STDOUT

def my_popen(cmd):
    print(" +", cmd)
    try:
        process = Popen(cmd, shell=True, stdout=PIPE, stderr=PIPE)
        ret, err = process.communicate()
    except subprocess.CalledProcessError as e:
        print(e.output)


def pbcCompile():
    print('================PolyBenchC====================')
    if not os.path.isfile(pbc_polybenchc_path):
        raise Exception('File polybench.c is missing')
    for i in range(len(pbcSourceFilesWithPath)):
        if (i == 0):
            #print('---GOTO polybench.c ~line 600, change ret\'s type to int----------\n')
            pbc_flags = pbc_flags_type1
        elif i == 2:
            #print('\n---GOTO polybench.c ~line 600, change ret\'s type to float--------\n')
            pbc_flags = pbc_flags_type2
        elif i == 3:
            #print('\n---GOTO polybench.c ~line 600, change ret\'s type to double-------\n')
            pbc_flags = pbc_flags_type3
        curr = pbcSourceFilesWithPath[i]
        fileName = curr.split('/')[-1][:-2]

        print('Compiling', fileName)
        command = "clang -emit-ast " + pbcPath + curr + " " + pbc_flags 
        my_popen(command)
        command = "mv %s.ast %s" % (fileName, output_folder)
        my_popen(command)
        print()


def chsCompile():
    print('\n=================CHStone======================')
    for i in range(len(chsSourceFilesWithPath)):
        curr = chsSourceFilesWithPath[i]
        fileName = curr.split('/')[-1][:-2]

        print('Compiling', fileName)
        command = "clang -emit-ast " + chsPath + curr + ' ' + chs_flags
        my_popen(command)
        command = "mv %s.ast %s" % (fileName, output_folder)
        my_popen(command)
        print()

if __name__ == '__main__':
    if not os.path.exists(output_folder):
        os.makedirs(output_folder)
    pbcCompile()
    chsCompile()
