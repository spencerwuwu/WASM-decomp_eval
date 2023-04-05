import sys
import os

pbcPath = 'polybench-c-4.2.1-beta/'
pbcSourceFilesWithPath = [
                          'medley/floyd-warshall/floyd-warshall.c',
                          # 'medley/nussinov/nussinov.c',
                          # 'medley/deriche/deriche.c',
                          # 'datamining/correlation/correlation.c',
                          # 'datamining/covariance/covariance.c',
                          # 'linear-algebra/blas/gemm/gemm.c',
                          # 'linear-algebra/blas/gemver/gemver.c',
                          # 'linear-algebra/blas/gesummv/gesummv.c',
                          # 'linear-algebra/blas/symm/symm.c',
                          # 'linear-algebra/blas/syr2k/syr2k.c',
                          # 'linear-algebra/blas/syrk/syrk.c',
                          # 'linear-algebra/blas/trmm/trmm.c',
                          # 'linear-algebra/kernels/2mm/2mm.c',
                          # 'linear-algebra/kernels/3mm/3mm.c',
                          # 'linear-algebra/kernels/atax/atax.c',
                          # 'linear-algebra/kernels/bicg/bicg.c',
                          # 'linear-algebra/kernels/doitgen/doitgen.c',
                          # 'linear-algebra/kernels/mvt/mvt.c',
                          # 'linear-algebra/solvers/cholesky/cholesky.c',
                          # 'linear-algebra/solvers/durbin/durbin.c',
                          # 'linear-algebra/solvers/gramschmidt/gramschmidt.c',
                          # 'linear-algebra/solvers/lu/lu.c',
                          # 'linear-algebra/solvers/ludcmp/ludcmp.c',
                          # 'linear-algebra/solvers/trisolv/trisolv.c',
                          # 'stencils/adi/adi.c',
                          # 'stencils/fdtd-2d/fdtd-2d.c',
                          # 'stencils/heat-3d/heat-3d.c',
                          # 'stencils/jacobi-1d/jacobi-1d.c',
                          # 'stencils/jacobi-2d/jacobi-2d.c',
                          # 'stencils/seidel-2d/seidel-2d.c'
                          ]


chsPath = 'CHStone_v1.11_150204/'
chsSourceFilesWithPath = [
                          "aes/aes.c",
                          # "adpcm/adpcm.c",
                          # "blowfish/bf.c",
                          # "dfadd/dfadd.c",
                          # "dfdiv/dfdiv.c",
                          # "dfmul/dfmul.c",
                          # "dfsin/dfsin.c",
                          # "gsm/gsm.c",
                          # "mips/mips.c",
                          # "motion/mpeg2.c",
                          # "sha/sha_driver.c"
                          ]

opt_level = '-O0'
wasm_flags = '-s WASM=1 -s SIDE_MODULE=1 -g3 --emit-symbol-map'
bc_flags = '-c -g3 -emit-llvm'

pbc_flags_type1 = 'polybench-c-4.2.1-beta/utilities/polybench_type1.c -I polybench-c-4.2.1-beta/utilities ' \
                  '-DPOLYBENCH_TIME -DMEDIUM_DATASET'
pbc_flags_type2 = 'polybench-c-4.2.1-beta/utilities/polybench_type2.c -I polybench-c-4.2.1-beta/utilities ' \
                  '-DPOLYBENCH_TIME -DMEDIUM_DATASET'
pbc_flags_type3 = 'polybench-c-4.2.1-beta/utilities/polybench_type3.c -I polybench-c-4.2.1-beta/utilities ' \
                  '-DPOLYBENCH_TIME -DMEDIUM_DATASET'

chs_flags = ''
output_prefix = '-o '
wasm_output_folder = 'em_output_' + opt_level[1:] + '/wasm/'
bc_output_folder = 'em_output_' + opt_level[1:] + '/bc/'
pbc_polybenchc_path = 'polybench-c-4.2.1-beta/utilities/polybench.c'

compiler = 'emcc'
#correctCompilerVersion = '1.38.33'
correctCompilerVersion = '3.1.31'


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

        #command = compiler + ' ' + wasm_flags + ' ' + pbcPath + curr + ' ' + pbc_flags + ' ' + opt_level \
        #          + ' ' + output_prefix + wasm_output_folder + fileName + '.wasm'
        command = compiler + ' ' + wasm_flags + ' ' + pbcPath + curr + ' -I polybench-c-4.2.1-beta/utilities ' + opt_level \
                  + ' ' + output_prefix + wasm_output_folder + fileName + '.wasm'
        print(command)
        print('Compiling WASM', curr)
        os.system(command)

        # command = compiler + ' ' + bc_flags + ' ' + pbcPath + curr + ' ' + pbc_flags + ' ' + opt_level \
        #           + ' ' + output_prefix + bc_output_folder + fileName + '.bc'
        command = compiler + ' ' + bc_flags + ' ' + pbcPath + curr + ' -I polybench-c-4.2.1-beta/utilities ' + opt_level \
                  + ' ' + output_prefix + bc_output_folder + fileName + '.bc'
        print(command)
        print('Compiling bc', curr)
        os.system(command)


def chsCompile():
    print('\n=================CHStone======================')
    for i in range(len(chsSourceFilesWithPath)):
        curr = chsSourceFilesWithPath[i]
        fileName = curr.split('/')[-1][:-2]

        command = compiler + ' ' + wasm_flags + ' ' + chsPath + curr + ' ' + chs_flags + ' ' + opt_level \
                  + ' ' + output_prefix + wasm_output_folder + fileName + '.wasm'
        print(command)
        print('Compiling WASM', curr)
        os.system(command)

        command = compiler + ' ' + bc_flags + ' ' + chsPath + curr + ' ' + chs_flags + ' ' + opt_level \
                  + ' ' + output_prefix + bc_output_folder + fileName + '.bc'
        print(command)
        print('Compiling bc', curr)
        os.system(command)



if __name__ == '__main__':
    if not os.path.exists(wasm_output_folder):
        os.makedirs(wasm_output_folder)
    if not os.path.exists(bc_output_folder):
        os.makedirs(bc_output_folder)
    pbcCompile()
    chsCompile()
