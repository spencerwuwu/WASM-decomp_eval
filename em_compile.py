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

opt_level = '-O3'
em_flags = '-s WASM=1 -s ALLOW_MEMORY_GROWTH=1'
pbc_flags_type1 = 'polybench-c-4.2.1-beta/utilities/polybench_type1.c -I polybench-c-4.2.1-beta/utilities ' \
                  '-DPOLYBENCH_TIME -DMEDIUM_DATASET'
pbc_flags_type2 = 'polybench-c-4.2.1-beta/utilities/polybench_type2.c -I polybench-c-4.2.1-beta/utilities ' \
                  '-DPOLYBENCH_TIME -DMEDIUM_DATASET'
pbc_flags_type3 = 'polybench-c-4.2.1-beta/utilities/polybench_type3.c -I polybench-c-4.2.1-beta/utilities ' \
                  '-DPOLYBENCH_TIME -DMEDIUM_DATASET'

chs_flags = ''
output_prefix = '-o '
output_folder = 'em_output_' + opt_level[1:] + '/'
pbc_polybenchc_path = 'polybench-c-4.2.1-beta/utilities/polybench.c'

compiler = 'emcc'
#correctCompilerVersion = '1.38.33'
correctCompilerVersion = '3.1.31'


def compilerVersionCheck():
    # os.system('C://myPrograms/Emscripten/emsdk install 1.38.33')
    # os.system('C://myPrograms/Emscripten/emsdk activate 1.38.33')
    # os.system('C://myPrograms/Emscripten/emsdk_env.bat')
    #os.system('emsdk activate 3.1.31')
    verInfo = os.popen(compiler + ' --version').read()
    if correctCompilerVersion not in verInfo:
        raise RuntimeError('Bad Emscripten version, expect' + correctCompilerVersion +
                           '. Original version info follows:\n' + verInfo)


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
        # print('Compiling ' + fileName)
        command = compiler + ' ' + em_flags + ' ' + pbcPath + curr + ' ' + pbc_flags + ' ' + opt_level \
                  + ' ' + output_prefix + output_folder + fileName + '.js'
        #print(command)
        print('Compiling', curr)
        os.system(command)


def chsCompile():
    print('\n=================CHStone======================')
    for i in range(len(chsSourceFilesWithPath)):
        curr = chsSourceFilesWithPath[i]
        fileName = curr.split('/')[-1][:-2]
        # print('Compiling ' + fileName)
        command = compiler + ' ' + em_flags + ' ' + chsPath + curr + ' ' + chs_flags + ' ' + opt_level \
                  + ' ' + output_prefix + output_folder + fileName + '.js'
        #print(command)
        print('Compiling', curr)
        os.system(command)


def postCompile():
    old_str = 'Date.now()'
    new_str = 'performance.now()'
    # replace any Date.now() with performance.now()
    print('============POST COMPILE===============')
    f_list = os.listdir(output_folder)
    for i in f_list:
        if os.path.splitext(i)[1] == '.js':     # it is a JS loader
            print('Working on ' + i)
            file_data = ''
            cnt = 0
            f = open(output_folder + i, "r", encoding="utf-8")
            for line in f:
                if old_str in line:
                    line = line.replace(old_str, new_str)
                    cnt += 1
                file_data += line
            if cnt != 1:
                print('Error! Expect exactly 1 Date.now() in generated file, found: ' + str(cnt) +
                      '\nThe file will not be changed.')
            else:
                f = open(output_folder + i, "w", encoding="utf-8")
                f.write(file_data)
    print('Genreated Wasm can be found in ' + output_folder[:-1])


if __name__ == '__main__':
    compilerVersionCheck()
    if not os.path.exists(output_folder):
        os.makedirs(output_folder)
    pbcCompile()
    chsCompile()
    postCompile()
