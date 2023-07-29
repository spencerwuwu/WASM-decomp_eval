import json
import os
import matplotlib, matplotlib.pyplot as plt
import statistics

emptyDict = dict()

# change this if you wants to generate results on different opt levels
# Option: '0', '1', or '2'
opt_level = '2'

src_file = 'results/new/em_output_src.json'
w2c2_file = 'results/new/em_output_O' + opt_level + '-d_w2c2.json'
wasm2c_file = 'results/new/em_output_O' + opt_level + '-d_wasm2c.json'
angr_file = 'results/new/em_output_O' + opt_level + '-d_angr.json'
ghidra_file = 'results/new/em_output_O' + opt_level + '-d_ghidra_new.json'
retdec_file = 'results/new/em_output_O' + opt_level + '-d_retdec_new.json'
snowman_file = 'results/new/em_output_O' + opt_level + '-d_snowman.json'
file_list = [src_file, w2c2_file, wasm2c_file, angr_file, ghidra_file, retdec_file, snowman_file]

keywords = ['Lines of code', 'Halstead complexity difficulty measure', 'McCabe cyclomatic complexity',
            'Maximum nesting depth', '# goto', '# cast', '# var', '# dead code',
            'goto / LOC', 'var / LOC']
# snowman is no longer used, but don't exclude it from the code
decompilers = ['Source', 'w2c2', 'wasm2c', 'angr', 'ghidra', 'retdec', 'snowman']
# all benchmarks
bench_list = ['2mm', '3mm', 'adi', 'atax', 'bicg', 'cholesky', 'correlation', 'covariance',
              'deriche', 'doitgen', 'durbin', 'fdtd-2d', 'floyd-warshall', 'gemm', 'gemver',
              'gesummv', 'gramschmidt', 'heat-3d', 'jacobi-1d', 'jacobi-2d', 'lu', 'ludcmp',
              'mvt', 'nussinov', 'seidel-2d', 'symm', 'syr2k', 'syrk', 'trisolv', 'trmm',
              'adpcm',
              'aes', 'blowfish', 'dfadd', 'dfdiv', 'dfmul', 'dfsin', 'gsm', 'jpeg',
              'mips', 'motion', 'sha', ]

# raw data stores here
# each element in stat = one keyword
stats = [
    # sr  w2  wa  an  gh  re  XsnX (snowman excluded)
    [[], [], [], [], [], [], []],  # loc
    [[], [], [], [], [], [], []],  # hal
    [[], [], [], [], [], [], []],  # cyc
    [[], [], [], [], [], [], []],  # nes
    [[], [], [], [], [], [], []],  # got
    [[], [], [], [], [], [], []],  # cas
    [[], [], [], [], [], [], []],  # var
    [[], [], [], [], [], [], []],  # dea
    [[], [], [], [], [], [], []],  # % got
    [[], [], [], [], [], [], []],  # % var
]

# core function list for each benchmark @ decompiler
# sr  w2  wa  an  gh  re  XsnX (snowman excluded)
core_func = {
    '2mm': [[['2mm.c', 'kernel_2mm']], [['PL_2mm.c', 'f8']], [['PL_2mm.c', 'w2c_PL__2mm_kernel_2mm_0']],
            [['2mm.c', 'kernel_2mm']], [['2mm.c', 'kernel_2mm']], [['2mm.c', 'kernel_2mm']], []],
    '3mm': [[['3mm.c', 'kernel_3mm']], [['PL_3mm.c', 'f8']], [['PL_3mm.c', 'w2c_PL__3mm_kernel_3mm_0']],
            [['3mm.c', 'kernel_3mm']], [['3mm.c', 'kernel_3mm']], [['3mm.c', 'kernel_3mm']], []],
    'adi': [[['adi.c', 'kernel_adi']], [['adi.c', 'f8']], [['adi.c', 'w2c_adi_kernel_adi_0']],
            [['adi.c', 'kernel_adi']], [['adi.c', 'kernel_adi']], [['adi.c', 'kernel_adi']], []],
    'atax': [[['atax.c', 'kernel_atax']], [['atax.c', 'f8']], [['atax.c', 'w2c_atax_kernel_atax_0']],
             [['atax.c', 'kernel_atax']], [['atax.c', 'kernel_atax']], [['atax.c', 'kernel_atax']], []],
    'bicg': [[['bicg.c', 'kernel_bicg']], [['bicg.c', 'f6']], [['bicg.c', 'w2c_bicg_kernel_bicg_0']],
             [['bicg.c', 'kernel_bicg']], [['bicg.c', 'kernel_bicg']], [['bicg.c', 'kernel_bicg']], []],
    'cholesky': [[['cholesky.c', 'kernel_cholesky']], [['cholesky.c', 'f6']],
                 [['cholesky.c', 'w2c_cholesky_kernel_cholesky_0']],
                 [['cholesky.c', 'kernel_cholesky']], [['cholesky.c', 'kernel_cholesky']],
                 [['cholesky.c', 'kernel_cholesky']], []],
    'correlation': [[['correlation.c', 'kernel_correlation']], [['correlation.c', 'f6']],
                    [['correlation.c', 'w2c_correlation_kernel_correlation_0']],
                    [['correlation.c', 'kernel_correlation']], [['correlation.c', 'kernel_correlation']],
                    [['correlation.c', 'kernel_correlation']], []],
    'covariance': [[['covariance.c', 'kernel_covariance']], [['covariance.c', 'f6']],
                   [['covariance.c', 'w2c_covariance_kernel_covariance_0']],
                   [['covariance.c', 'kernel_covariance']], [['covariance.c', 'kernel_covariance']],
                   [['covariance.c', 'kernel_covariance']], []],
    'deriche': [[['deriche.c', 'kernel_deriche']], [['deriche.c', 'f8']],
                [['deriche.c', 'w2c_deriche_kernel_deriche_0']],
                [['deriche.c', 'kernel_deriche']], [['deriche.c', 'kernel_deriche']], [['deriche.c', 'kernel_deriche']],
                []],
    'doitgen': [[['doitgen.c', 'kernel_doitgen']], [['doitgen.c', 'f6']],
                [['doitgen.c', 'w2c_doitgen_kernel_doitgen_0']],
                [['doitgen.c', 'kernel_doitgen']], [['doitgen.c', 'kernel_doitgen']], [['doitgen.c', 'kernel_doitgen']],
                []],
    'durbin': [[['durbin.c', 'kernel_durbin']], [['durbin.c', 'f6']], [['durbin.c', 'w2c_durbin_kernel_durbin_0']],
               [['durbin.c', 'kernel_durbin']], [['durbin.c', 'kernel_durbin']], [['durbin.c', 'kernel_durbin']], []],
    'fdtd-2d': [[['fdtd-2d.c', 'kernel_fdtd_2d']], [['fdtd-2d.c', 'f6']],
                [['fdtd-2d.c', 'w2c_fdtd0x2D2d_kernel_fdtd_2d_0']],
                [['fdtd-2d.c', 'kernel_fdtd_2d']], [['fdtd-2d.c', 'kernel_fdtd_2d']], [['fdtd-2d.c', 'kernel_fdtd_2d']],
                []],
    'floyd-warshall': [[['floyd-warshall.c', 'kernel_floyd_warshall']], [['floyd-warshall.c', 'f6']],
                       [['floyd-warshall.c', 'w2c_floyd0x2Dwarshall_kernel_floyd_warshall_0']],
                       [['floyd-warshall.c', 'kernel_floyd_warshall']], [['floyd-warshall.c', 'kernel_floyd_warshall']],
                       [['floyd-warshall.c', 'kernel_floyd_warshall']], []],
    'gemm': [[['gemm.c', 'kernel_gemm']], [['gemm.c', 'f6']], [['gemm.c', 'w2c_gemm_kernel_gemm_0']],
             [['gemm.c', 'kernel_gemm']], [['gemm.c', 'kernel_gemm']], [['gemm.c', 'kernel_gemm']], []],
    'gemver': [[['gemver.c', 'kernel_gemver']], [['gemver.c', 'f6']], [['gemver.c', 'w2c_gemver_kernel_gemver_0']],
               [['gemver.c', 'kernel_gemver']], [['gemver.c', 'kernel_gemver']], [['gemver.c', 'kernel_gemver']], []],
    'gesummv': [[['gesummv.c', 'kernel_gesummv']], [['gesummv.c', 'f6']],
                [['gesummv.c', 'w2c_gesummv_kernel_gesummv_0']],
                [['gesummv.c', 'kernel_gesummv']], [['gesummv.c', 'kernel_gesummv']], [['gesummv.c', 'kernel_gesummv']],
                []],
    'gramschmidt': [[['gramschmidt.c', 'kernel_gramschmidt']], [['gramschmidt.c', 'f6']],
                    [['gramschmidt.c', 'w2c_gramschmidt_kernel_gramschmidt_0']],
                    [['gramschmidt.c', 'kernel_gramschmidt']], [['gramschmidt.c', 'kernel_gramschmidt']],
                    [['gramschmidt.c', 'kernel_gramschmidt']], []],
    'heat-3d': [[['heat-3d.c', 'kernel_heat_3d']], [['heat-3d.c', 'f6']],
                [['heat-3d.c', 'w2c_heat0x2D3d_kernel_heat_3d_0']],
                [['heat-3d.c', 'kernel_heat_3d']], [['heat-3d.c', 'kernel_heat_3d']], [['heat-3d.c', 'kernel_heat_3d']],
                []],
    'jacobi-1d': [[['jacobi-1d.c', 'kernel_jacobi_1d']], [['jacobi-1d.c', 'f6']],
                  [['jacobi-1d.c', 'w2c_jacobi0x2D1d_kernel_jacobi_1d_0']],
                  [['jacobi-1d.c', 'kernel_jacobi_1d']], [['jacobi-1d.c', 'kernel_jacobi_1d']],
                  [['jacobi-1d.c', 'kernel_jacobi_1d']], []],
    'jacobi-2d': [[['jacobi-2d.c', 'kernel_jacobi_2d']], [['jacobi-2d.c', 'f6']],
                  [['jacobi-2d.c', 'w2c_jacobi0x2D2d_kernel_jacobi_2d_0']],
                  [['jacobi-2d.c', 'kernel_jacobi_2d']], [['jacobi-2d.c', 'kernel_jacobi_2d']],
                  [['jacobi-2d.c', 'kernel_jacobi_2d']], []],
    'lu': [[['lu.c', 'kernel_lu']], [['lu.c', 'f6']], [['lu.c', 'w2c_lu_kernel_lu_0']],
           [['lu.c', 'kernel_lu']], [['lu.c', 'kernel_lu']], [['lu.c', 'kernel_lu']], []],
    'ludcmp': [[['ludcmp.c', 'kernel_ludcmp']], [['ludcmp.c', 'f6']], [['ludcmp.c', 'w2c_ludcmp_kernel_ludcmp_0']],
               [['ludcmp.c', 'kernel_ludcmp']], [['ludcmp.c', 'kernel_ludcmp']], [['ludcmp.c', 'kernel_ludcmp']], []],
    'mvt': [[['mvt.c', 'kernel_mvt']], [['mvt.c', 'f6']], [['mvt.c', 'w2c_mvt_kernel_mvt_0']],
            [['mvt.c', 'kernel_mvt']], [['mvt.c', 'kernel_mvt']], [['mvt.c', 'kernel_mvt']], []],
    'nussinov': [[['nussinov.c', 'kernel_nussinov']], [['nussinov.c', 'f6']],
                 [['nussinov.c', 'w2c_nussinov_kernel_nussinov_0']],
                 [['nussinov.c', 'kernel_nussinov']], [['nussinov.c', 'kernel_nussinov']],
                 [['nussinov.c', 'kernel_nussinov']], []],
    'seidel-2d': [[['seidel-2d.c', 'kernel_seidel_2d']], [['seidel-2d.c', 'f6']],
                  [['seidel-2d.c', 'w2c_seidel0x2D2d_kernel_seidel_2d_0']],
                  [['seidel-2d.c', 'kernel_seidel_2d']], [['seidel-2d.c', 'kernel_seidel_2d']],
                  [['seidel-2d.c', 'kernel_seidel_2d']], []],
    'symm': [[['symm.c', 'kernel_symm']], [['symm.c', 'f6']], [['symm.c', 'w2c_symm_kernel_symm_0']],
             [['symm.c', 'kernel_symm']], [['symm.c', 'kernel_symm']], [['symm.c', 'kernel_symm']], []],
    'syr2k': [[['syr2k.c', 'kernel_syr2k']], [['syr2k.c', 'f6']], [['syr2k.c', 'w2c_syr2k_kernel_syr2k_0']],
              [['syr2k.c', 'kernel_syr2k']], [['syr2k.c', 'kernel_syr2k']], [['syr2k.c', 'kernel_syr2k']], []],
    'syrk': [[['syrk.c', 'kernel_syrk']], [['syrk.c', 'f6']], [['syrk.c', 'w2c_syrk_kernel_syrk_0']],
             [['syrk.c', 'kernel_syrk']], [['syrk.c', 'kernel_syrk']], [['syrk.c', 'kernel_syrk']], []],
    'trisolv': [[['trisolv.c', 'kernel_trisolv']], [['trisolv.c', 'f6']],
                [['trisolv.c', 'w2c_trisolv_kernel_trisolv_0']],
                [['trisolv.c', 'kernel_trisolv']], [['trisolv.c', 'kernel_trisolv']], [['trisolv.c', 'kernel_trisolv']],
                []],
    'trmm': [[['trmm.c', 'kernel_trmm']], [['trmm.c', 'f6']], [['trmm.c', 'w2c_trmm_kernel_trmm_0']],
             [['trmm.c', 'kernel_trmm']], [['trmm.c', 'kernel_trmm']], [['trmm.c', 'kernel_trmm']], []],
    'adpcm': [[['adpcm.c', 'encode', 'decode', 'reset', 'filtez', "filtep", "quantl", "logscl", "scalel", "upzero", "uppol2", "uppol1", "logsch", "adpcm_main",]],
              [['adpcm.c','f4', 'f5', 'f6', 'f7', 'f8', 'f9', 'f10', 'f11', 'f12', 'f13', 'f14', 'f15', 'f16', 'f17', 'f18', 'f19']],
              [['adpcm.c', "w2c_adpcm_abs_0","w2c_adpcm_encode_0","w2c_adpcm_filtez_0","w2c_adpcm_filtep_0","w2c_adpcm_quantl_0","w2c_adpcm_logscl_0","w2c_adpcm_scalel_0","w2c_adpcm_upzero_0","w2c_adpcm_uppol2_0","w2c_adpcm_uppol1_0","w2c_adpcm_logsch_0","w2c_adpcm_decode_0","w2c_adpcm_reset_0","w2c_adpcm_adpcm_main_0","w2c_adpcm_submain_0",]],
              [['adpcm.c', "abs","encode","filtez","filtep","quantl","logscl","scalel","upzero","uppol2","uppol1","logsch","decode","reset","submain","rtclock",]],
              [['adpcm.c', "abs","encode","filtez","filtep","quantl","logscl","scalel","upzero","uppol2","uppol1","logsch","decode",]],
              [['adpcm.c', "_abs","encode","filtez","filtep","quantl","logscl","scalel","upzero","uppol2","uppol1","logsch","decode",]],
              [],],
    'aes': [[['aes.c', 'aes_main'], ['aes_dec.c', 'decrypt'], ["aes_enc.c", "encrypt"], ["aes_key.c", "KeySchedule"], ["aes_func.c", "ByteSub_ShiftRow", "SubByte", "InversShiftRow_ByteSub", "MixColumn_AddRoundKey", "AddRoundKey_InversMixColumn", "AddRoundKey"]],
            [["aes.c", 'f4', 'f5', 'f6', 'f7', 'f8', 'f9', 'f10', 'f11', 'f12', 'f13', 'f14', 'f15']],
            [['aes.c', "w2c_aes_encrypt_0","w2c_aes_KeySchedule_0","w2c_aes_AddRoundKey_0","w2c_aes_ByteSub_ShiftRow_0","w2c_aes_MixColumn_AddRoundKey_0","w2c_aes_SubByte_0","w2c_aes_decrypt_0","w2c_aes_InversShiftRow_ByteSub_0","w2c_aes_AddRoundKey_InversMixColumn_0","w2c_aes_aes_main_0",]],
            [['aes.c', "encrypt","KeySchedule","AddRoundKey","ByteSub_ShiftRow","MixColumn_AddRoundKey","decrypt","InversShiftRow_ByteSub","aes_main","submain","rtclock",]],
            [['aes.c', "encrypt","KeySchedule","AddRoundKey","ByteSub_ShiftRow","MixColumn_AddRoundKey","SubByte","decrypt","InversShiftRow_ByteSub","AddRoundKey_InversMixColumn","aes_main",]],
            [['aes.c', "encrypt","KeySchedule","AddRoundKey","ByteSub_ShiftRow","MixColumn_AddRoundKey","SubByte","decrypt","InversShiftRow_ByteSub","AddRoundKey_InversMixColumn","aes_main",]],
            []],
    'blowfish': [[["bf.c", "blowfish_main", "BF_encrypt"], ["bf_cfb64.c", "BF_cfb64_encrypt"], ["bf_skey.c", "local_memcpy", "BF_set_key"]],
                 [['bf.c', 'f4', 'f5', 'f6', 'f7', 'f8', 'f9', 'f10']],
                 [['bf.c', "w2c_bf_local_memcpy_0","w2c_bf_BF_set_key_0","w2c_bf_BF_encrypt_0","w2c_bf_BF_cfb64_encrypt_0","w2c_bf_blowfish_main_0",]],
                 [['bf.c', "local_memcpy","BF_set_key","BF_encrypt","BF_cfb64_encrypt","blowfish_main","submain","rtclock",]],
                 [['bf.c', "local_memcpy","BF_set_key","BF_encrypt","BF_cfb64_encrypt",]],
                 [['bf.c', "local_memcpy","BF_set_key","BF_encrypt","BF_cfb64_encrypt",]],
                 []],
    'dfadd': [[["dfadd.c", "submain"], ["softfloat.c", "float64_add", "extractFloat64Sign", "extractFloat64Frac", "extractFloat64Exp", "packFloat64", "roundAndPackFloat64", "addFloat64Sigs", "subFloat64Sigs",]],
              [["dfadd.c", 'f4', 'f5', 'f6', 'f7', 'f8', 'f9', 'f10', 'f11', 'f12', 'f13', 'f14', 'f15', 'f16', 'f17', 'f18', 'f19', 'f20', 'f21', 'f22', 'f23', 'f24', 'f25', 'f26', 'f27', 'f28', 'f29', 'f30', 'f31', 'f32', 'f33', 'f34', 'f35', 'f36']],
              [["dfadd.c", "w2c_dfadd_shift64RightJamming_0","w2c_dfadd_float_raise_0","w2c_dfadd_float64_is_nan_0","w2c_dfadd_float64_is_signaling_nan_0","w2c_dfadd_extractFloat64Frac_0","w2c_dfadd_extractFloat64Exp_0","w2c_dfadd_extractFloat64Sign_0","w2c_dfadd_packFloat64_0","w2c_dfadd_roundAndPackFloat64_0","w2c_dfadd_normalizeRoundAndPackFloat64_0","w2c_dfadd_countLeadingZeros64","w2c_dfadd_countLeadingZeros32","w2c_dfadd_addFloat64Sigs_0","w2c_dfadd_propagateFloat64NaN","w2c_dfadd_subFloat64Sigs_0","w2c_dfadd_float64_add_0","w2c_dfadd_ullong_to_double_0","w2c_dfadd_submain_0","w2c_dfadd_rtclock","w2c_dfadd_legalstub0x24shift64RightJamming","w2c_dfadd_legalstub0x24float64_is_nan","w2c_dfadd_legalstub0x24float64_is_signaling_nan","w2c_dfadd_legalstub0x24extractFloat64Frac","w2c_dfadd_legalstub0x24extractFloat64Exp","w2c_dfadd_legalstub0x24extractFloat64Sign","w2c_dfadd_legalstub0x24packFloat64","w2c_dfadd_legalstub0x24roundAndPackFloat64","w2c_dfadd_legalstub0x24normalizeRoundAndPackFloat64","w2c_dfadd_legalstub0x24addFloat64Sigs","w2c_dfadd_legalstub0x24subFloat64Sigs","w2c_dfadd_legalstub0x24float64_add","w2c_dfadd_legalstub0x24ullong_to_double",]],
              [["dfadd.c", "shift64RightJamming","float_raise","float64_is_nan","float64_is_signaling_nan","extractFloat64Frac","extractFloat64Exp","extractFloat64Sign","packFloat64","roundAndPackFloat64","normalizeRoundAndPackFloat64","countLeadingZeros64","addFloat64Sigs","propagateFloat64NaN","subFloat64Sigs","float64_add","ullong_to_double","submain","countLeadingZeros32","rtclock",]],
              [["dfadd.c", "shift64RightJamming","float_raise","float64_is_nan","float64_is_signaling_nan","extractFloat64Frac","extractFloat64Exp","extractFloat64Sign","packFloat64","roundAndPackFloat64","normalizeRoundAndPackFloat64","countLeadingZeros64","countLeadingZeros32","addFloat64Sigs","propagateFloat64NaN","subFloat64Sigs","float64_add","ullong_to_double",]],
              [["dfadd.c", "shift64RightJamming","float_raise","float64_is_nan","float64_is_signaling_nan","extractFloat64Frac","extractFloat64Exp","extractFloat64Sign","packFloat64","roundAndPackFloat64","normalizeRoundAndPackFloat64","countLeadingZeros64","countLeadingZeros32","addFloat64Sigs","propagateFloat64NaN","subFloat64Sigs","float64_add","ullong_to_double",]],
              []],
    'dfdiv': [[["dfdiv.c", "submain"], ["softfloat.c", "float64_div", "extractFloat64Sign", "extractFloat64Frac", "extractFloat64Exp", "packFloat64", "normalizeFloat64Subnormal", "roundAndPackFloat64"]],
              [["dfdiv.c", 'f5', 'f6', 'f7', 'f8', 'f9', 'f10', 'f11', 'f12', 'f13', 'f14', 'f15', 'f16', 'f17', 'f18', 'f19', 'f20', 'f21', 'f22', 'f23', 'f24', 'f25', 'f26', 'f27', 'f28', 'f29', 'f30', 'f31', 'f32', 'f33', 'f34', 'f35', 'f36', 'f37', 'f38', 'f39']],
              [["dfdiv.c", "w2c_dfdiv_shift64RightJamming_0","w2c_dfdiv_add128_0","w2c_dfdiv_sub128_0","w2c_dfdiv_mul64To128_0","w2c_dfdiv_float_raise_0","w2c_dfdiv_float64_is_nan_0","w2c_dfdiv_float64_is_signaling_nan_0","w2c_dfdiv_extractFloat64Frac_0","w2c_dfdiv_extractFloat64Exp_0","w2c_dfdiv_extractFloat64Sign_0","w2c_dfdiv_normalizeFloat64Subnormal_0","w2c_dfdiv_countLeadingZeros64","w2c_dfdiv_countLeadingZeros32","w2c_dfdiv_packFloat64_0","w2c_dfdiv_roundAndPackFloat64_0","w2c_dfdiv_float64_div_0","w2c_dfdiv_propagateFloat64NaN","w2c_dfdiv_estimateDiv128To64","w2c_dfdiv_ullong_to_double_0","w2c_dfdiv_submain_0","w2c_dfdiv_rtclock","w2c_dfdiv_legalstub0x24shift64RightJamming","w2c_dfdiv_legalstub0x24add128","w2c_dfdiv_legalstub0x24sub128","w2c_dfdiv_legalstub0x24mul64To128","w2c_dfdiv_legalstub0x24float64_is_nan","w2c_dfdiv_legalstub0x24float64_is_signaling_nan","w2c_dfdiv_legalstub0x24extractFloat64Frac","w2c_dfdiv_legalstub0x24extractFloat64Exp","w2c_dfdiv_legalstub0x24extractFloat64Sign","w2c_dfdiv_legalstub0x24normalizeFloat64Subnormal","w2c_dfdiv_legalstub0x24packFloat64","w2c_dfdiv_legalstub0x24roundAndPackFloat64","w2c_dfdiv_legalstub0x24float64_div","w2c_dfdiv_legalstub0x24ullong_to_double",]],
              [["dfdiv.c", "shift64RightJamming","add128","sub128","mul64To128","float_raise","float64_is_nan","float64_is_signaling_nan","extractFloat64Frac","extractFloat64Exp","extractFloat64Sign","normalizeFloat64Subnormal","countLeadingZeros64","packFloat64","roundAndPackFloat64","propagateFloat64NaN","estimateDiv128To64","ullong_to_double","submain","countLeadingZeros32","rtclock",]],
              [["dfdiv.c", "shift64RightJamming","add128","sub128","mul64To128","float_raise","float64_is_nan","float64_is_signaling_nan","extractFloat64Frac","extractFloat64Exp","extractFloat64Sign","normalizeFloat64Subnormal","countLeadingZeros64","countLeadingZeros32","packFloat64","roundAndPackFloat64","float64_div","propagateFloat64NaN","estimateDiv128To64","ullong_to_double",]],
              [["dfdiv.c", "shift64RightJamming","add128","sub128","mul64To128","float_raise","float64_is_nan","float64_is_signaling_nan","extractFloat64Frac","extractFloat64Exp","extractFloat64Sign","normalizeFloat64Subnormal","countLeadingZeros64","countLeadingZeros32","packFloat64","roundAndPackFloat64","float64_div","propagateFloat64NaN","estimateDiv128To64","ullong_to_double",]],
              []],
    'dfmul': [[["dfmul.c", "submain"], ["softfloat.c", "float64_mul", "extractFloat64Sign", "extractFloat64Frac", "extractFloat64Exp", "packFloat64", "normalizeFloat64Subnormal", "roundAndPackFloat64"]],
              [["dfmul.c", 'f5', 'f6', 'f7', 'f8', 'f9', 'f10', 'f11', 'f12', 'f13', 'f14', 'f15', 'f16', 'f17', 'f18', 'f19', 'f20', 'f21', 'f22', 'f23', 'f24', 'f25', 'f26', 'f27', 'f28', 'f29', 'f30', 'f31', 'f32', 'f33', 'f34']],
              [["dfmul.c", "w2c_dfmul_shift64RightJamming_0","w2c_dfmul_mul64To128_0","w2c_dfmul_float_raise_0","w2c_dfmul_float64_is_nan_0","w2c_dfmul_float64_is_signaling_nan_0","w2c_dfmul_extractFloat64Frac_0","w2c_dfmul_extractFloat64Exp_0","w2c_dfmul_extractFloat64Sign_0","w2c_dfmul_normalizeFloat64Subnormal_0","w2c_dfmul_countLeadingZeros64","w2c_dfmul_countLeadingZeros32","w2c_dfmul_packFloat64_0","w2c_dfmul_roundAndPackFloat64_0","w2c_dfmul_float64_mul_0","w2c_dfmul_propagateFloat64NaN","w2c_dfmul_ullong_to_double_0","w2c_dfmul_submain_0","w2c_dfmul_rtclock","w2c_dfmul_legalstub0x24shift64RightJamming","w2c_dfmul_legalstub0x24mul64To128","w2c_dfmul_legalstub0x24float64_is_nan","w2c_dfmul_legalstub0x24float64_is_signaling_nan","w2c_dfmul_legalstub0x24extractFloat64Frac","w2c_dfmul_legalstub0x24extractFloat64Exp","w2c_dfmul_legalstub0x24extractFloat64Sign","w2c_dfmul_legalstub0x24normalizeFloat64Subnormal","w2c_dfmul_legalstub0x24packFloat64","w2c_dfmul_legalstub0x24roundAndPackFloat64","w2c_dfmul_legalstub0x24float64_mul","w2c_dfmul_legalstub0x24ullong_to_double",]],
              [["dfmul.c", "shift64RightJamming","mul64To128","float_raise","float64_is_nan","float64_is_signaling_nan","extractFloat64Frac","extractFloat64Exp","extractFloat64Sign","normalizeFloat64Subnormal","countLeadingZeros64","packFloat64","roundAndPackFloat64","propagateFloat64NaN","ullong_to_double","submain","countLeadingZeros32","rtclock",]],
              [["dfmul.c", "shift64RightJamming","mul64To128","float_raise","float64_is_nan","float64_is_signaling_nan","extractFloat64Frac","extractFloat64Exp","extractFloat64Sign","normalizeFloat64Subnormal","countLeadingZeros64","countLeadingZeros32","packFloat64","roundAndPackFloat64","float64_mul","propagateFloat64NaN","ullong_to_double",]],
              [["dfmul.c", "shift64RightJamming","mul64To128","float_raise","float64_is_nan","float64_is_signaling_nan","extractFloat64Frac","extractFloat64Exp","extractFloat64Sign","normalizeFloat64Subnormal","countLeadingZeros64","countLeadingZeros32","packFloat64","roundAndPackFloat64","float64_mul","propagateFloat64NaN","ullong_to_double",]],
              []],
    'dfsin': [[["dfsin.c", "submain", "local_sin", "float64_abs"], ["softfloat.c", "float64_div", "float64_neg", "float64_mul", "int32_to_float64", "float64_add", "float64_ge", "float64_le", "extractFloat64Sign", "extractFloat64Frac", "extractFloat64Exp", "packFloat64", "normalizeFloat64Subnormal", "roundAndPackFloat64", "packFloat64", "addFloat64Sigs", "subFloat64Sigs", "normalizeRoundAndPackFloat64"]],
              [["dfsin.c", 'f5', 'f6', 'f7', 'f8', 'f9', 'f10', 'f11', 'f12', 'f13', 'f14', 'f15', 'f16', 'f17', 'f18', 'f19', 'f20', 'f21', 'f22', 'f23', 'f24', 'f25', 'f26', 'f27', 'f28', 'f29','f30', 'f31', 'f32', 'f33', 'f34', 'f35', 'f36', 'f37', 'f38', 'f39','f40', 'f41', 'f42', 'f43', 'f44', 'f45', 'f46', 'f47', 'f48', 'f49','f50', 'f51', 'f52', 'f53', 'f54', 'f55', 'f56', 'f57', 'f58', 'f59','f60', 'f61', 'f62', 'f63']],
              [["dfsin.c", "w2c_dfsin_shift64RightJamming_0","w2c_dfsin_shift64ExtraRightJamming_0","w2c_dfsin_add128_0","w2c_dfsin_sub128_0","w2c_dfsin_mul64To128_0","w2c_dfsin_float_raise_0","w2c_dfsin_float64_is_nan_0","w2c_dfsin_float64_is_signaling_nan_0","w2c_dfsin_extractFloat64Frac_0","w2c_dfsin_extractFloat64Exp_0","w2c_dfsin_extractFloat64Sign_0","w2c_dfsin_normalizeFloat64Subnormal_0","w2c_dfsin_countLeadingZeros64","w2c_dfsin_countLeadingZeros32","w2c_dfsin_packFloat64_0","w2c_dfsin_roundAndPackFloat64_0","w2c_dfsin_normalizeRoundAndPackFloat64_0","w2c_dfsin_int32_to_float64_0","w2c_dfsin_addFloat64Sigs_0","w2c_dfsin_propagateFloat64NaN","w2c_dfsin_subFloat64Sigs_0","w2c_dfsin_float64_add_0","w2c_dfsin_float64_mul_0","w2c_dfsin_float64_div_0","w2c_dfsin_estimateDiv128To64","w2c_dfsin_float64_le_0","w2c_dfsin_float64_ge_0","w2c_dfsin_float64_neg_0","w2c_dfsin_float64_abs_0","w2c_dfsin_local_sin_0","w2c_dfsin_ullong_to_double_0","w2c_dfsin_submain_0","w2c_dfsin_rtclock","w2c_dfsin_legalstub0x24shift64RightJamming","w2c_dfsin_legalstub0x24shift64ExtraRightJamming","w2c_dfsin_legalstub0x24add128","w2c_dfsin_legalstub0x24sub128","w2c_dfsin_legalstub0x24mul64To128","w2c_dfsin_legalstub0x24float64_is_nan","w2c_dfsin_legalstub0x24float64_is_signaling_nan","w2c_dfsin_legalstub0x24extractFloat64Frac","w2c_dfsin_legalstub0x24extractFloat64Exp","w2c_dfsin_legalstub0x24extractFloat64Sign","w2c_dfsin_legalstub0x24normalizeFloat64Subnormal","w2c_dfsin_legalstub0x24packFloat64","w2c_dfsin_legalstub0x24roundAndPackFloat64","w2c_dfsin_legalstub0x24normalizeRoundAndPackFloat64","w2c_dfsin_legalstub0x24int32_to_float64","w2c_dfsin_legalstub0x24addFloat64Sigs","w2c_dfsin_legalstub0x24subFloat64Sigs","w2c_dfsin_legalstub0x24float64_add","w2c_dfsin_legalstub0x24float64_mul","w2c_dfsin_legalstub0x24float64_div","w2c_dfsin_legalstub0x24float64_le","w2c_dfsin_legalstub0x24float64_ge","w2c_dfsin_legalstub0x24float64_neg","w2c_dfsin_legalstub0x24float64_abs","w2c_dfsin_legalstub0x24local_sin","w2c_dfsin_legalstub0x24ullong_to_double",]],
                  [["dfsin.c", "shift64RightJamming","add128","sub128","mul64To128","float_raise","float64_is_nan","float64_is_signaling_nan","extractFloat64Frac","extractFloat64Exp","extractFloat64Sign","normalizeFloat64Subnormal","countLeadingZeros64","packFloat64","roundAndPackFloat64","normalizeRoundAndPackFloat64","int32_to_float64","countLeadingZeros32","addFloat64Sigs","propagateFloat64NaN","subFloat64Sigs","float64_add","estimateDiv128To64","float64_le","float64_ge","float64_neg","float64_abs","local_sin","ullong_to_double","submain","rtclock",]],
              [["dfsin.c", "shift64RightJamming","shift64ExtraRightJamming","add128","sub128","mul64To128","float_raise","float64_is_nan","float64_is_signaling_nan","extractFloat64Frac","extractFloat64Exp","extractFloat64Sign","normalizeFloat64Subnormal","countLeadingZeros64","countLeadingZeros32","packFloat64","roundAndPackFloat64","normalizeRoundAndPackFloat64","int32_to_float64","addFloat64Sigs","propagateFloat64NaN","subFloat64Sigs","float64_add","float64_mul","float64_div","estimateDiv128To64","float64_le","float64_ge","float64_neg","float64_abs","local_sin","ullong_to_double",]],
              [["dfsin.c", "shift64RightJamming","shift64ExtraRightJamming","add128","sub128","mul64To128","float_raise","float64_is_nan","float64_is_signaling_nan","extractFloat64Frac","extractFloat64Exp","extractFloat64Sign","normalizeFloat64Subnormal","countLeadingZeros64","countLeadingZeros32","packFloat64","roundAndPackFloat64","normalizeRoundAndPackFloat64","int32_to_float64","addFloat64Sigs","propagateFloat64NaN","subFloat64Sigs","float64_add","float64_mul","float64_div","estimateDiv128To64","float64_le","float64_ge","float64_neg","local_sin","ullong_to_double",]],
              []],
    'gsm': [[['gsm.c', 'submain'], ['lpc.c', 'Gsm_LPC_Analysis', 'Autocorrelation', 'Reflection_coefficients', "Transformation_to_Log_Area_Ratios", "Quantization_and_coding"], ["add.c", "gsm_add", "gsm_mult", "gsm_mult_r", "gsm_abs", "gsm_norm", "gsm_div"]],
            [['gsm.c', 'f4', 'f5', 'f6', 'f7', 'f8', 'f9', 'f10', 'f11', 'f12', 'f13', 'f14', 'f15', 'f16']],
            [['gsm.c', "w2c_gsm_gsm_add_0","w2c_gsm_gsm_mult_0","w2c_gsm_gsm_mult_r_0","w2c_gsm_gsm_abs_0","w2c_gsm_gsm_norm_0","w2c_gsm_gsm_div_0","w2c_gsm_Autocorrelation_0","w2c_gsm_Reflection_coefficients_0","w2c_gsm_Transformation_to_Log_Area_Ratios_0","w2c_gsm_Quantization_and_coding_0","w2c_gsm_Gsm_LPC_Analysis_0","w2c_gsm_submain_0","w2c_gsm_rtclock",]],
            [['gsm.c', "gsm_add","gsm_mult","gsm_mult_r","gsm_abs","gsm_norm","gsm_div","Autocorrelation","Reflection_coefficients","Transformation_to_Log_Area_Ratios","Quantization_and_coding","Gsm_LPC_Analysis","submain","rtclock",]],
            [['gsm.c', "gsm_add","gsm_mult","gsm_mult_r","gsm_abs","gsm_norm","gsm_div","Autocorrelation","Reflection_coefficients","Transformation_to_Log_Area_Ratios","Quantization_and_coding","Gsm_LPC_Analysis",]],
            [['gsm.c', "gsm_add","gsm_mult","gsm_mult_r","gsm_norm","gsm_div","Autocorrelation","Reflection_coefficients","Transformation_to_Log_Area_Ratios","Quantization_and_coding","Gsm_LPC_Analysis",]],
            []],
    'jpeg': [[["jpeg2bmp.c", 'jpeg2bmp_main'], ["marker.c","read_byte","read_word","first_marker","next_marker","get_sof","get_sos","get_dht","get_dqt","read_markers"], ["jfif_read.c", "jpeg_init_decompress", "jpeg_read"],["huffman.c","pgetc","buf_getb","buf_getv","huff_make_dhuff_tb","DecodeHuffman","DecodeHuffMCU"],["decode.c","IZigzagMatrix","IQuantize","PostshiftIDctMatrix","BoundIDctMatrix","WriteOneBlock","WriteBlock","Write4Blocks","YuvToRgb","decode_block","decode_start"], ["chenidct.c", "ChenIDct"]],
             [],
             [],
             [],
             [],
             [],
             []],
    'mips': [[["mips.c", "submain"]],
             [],
             [],
             [["mips.c", "submain", "rtclock"]],
             [],
             [],
             []],
    'motion': [[["mpeg2.c", "submain", "Initialize_Buffer"],["motion.c","motion_vectors","motion_vector","decode_motion_vector"], ["getvlc.c","Get_motion_code","Get_dmvector"],["getbits.c","read","Fill_Buffer","Show_Bits","Get_Bits1","Flush_Buffer","Get_Bits"]],
               [["mpeg2.c", 'f4', 'f5', 'f6', 'f7', 'f8', 'f9', 'f10', 'f11', 'f12', 'f13', 'f14', 'f15', 'f16', 'f17']],
               [["mpeg2.c", "w2c_mpeg2_read_0","w2c_mpeg2_Fill_Buffer_0","w2c_mpeg2_Show_Bits_0","w2c_mpeg2_Get_Bits1_0","w2c_mpeg2_Get_Bits_0","w2c_mpeg2_Flush_Buffer_0","w2c_mpeg2_Get_motion_code_0","w2c_mpeg2_Get_dmvector_0","w2c_mpeg2_motion_vectors_0","w2c_mpeg2_motion_vector_0","w2c_mpeg2_decode_motion_vector","w2c_mpeg2_Initialize_Buffer_0","w2c_mpeg2_submain_0","w2c_mpeg2_rtclock",]],
               [["mpeg2.c", "read","Fill_Buffer","Show_Bits","Get_Bits1","Get_Bits","Flush_Buffer","Get_motion_code","Get_dmvector","motion_vectors","motion_vector","decode_motion_vector","Initialize_Buffer","submain","rtclock",]],
               [["mpeg2.c", "read","Fill_Buffer","Show_Bits","Get_Bits1","Get_Bits","Flush_Buffer","Get_motion_code","Get_dmvector","motion_vectors","motion_vector","decode_motion_vector",]],
               [["mpeg2.c", "read","Fill_Buffer","Show_Bits","Get_Bits1","Get_Bits","Flush_Buffer","Get_motion_code","Get_dmvector","motion_vectors","motion_vector","decode_motion_vector",]],
               []],
    'sha': [[["sha.c", "local_memset","local_memcpy","sha_transform","sha_init","sha_update","sha_final","sha_stream"],["sha_driver.c","submain"]],
            [["sha_driver.c", 'f4', 'f5', 'f6', 'f7', 'f8', 'f9', 'f10', 'f11', 'f12']],
            [["sha_driver.c", "w2c_sha__driver_local_memset_0","w2c_sha__driver_local_memcpy_0","w2c_sha__driver_sha_transform_0","w2c_sha__driver_sha_init_0","w2c_sha__driver_sha_update_0","w2c_sha__driver_sha_final_0","w2c_sha__driver_sha_stream_0","w2c_sha__driver_submain_0","w2c_sha__driver_rtclock",]],
            [["sha_driver.c", "local_memset","local_memcpy","sha_transform","sha_init","sha_update","sha_final","sha_stream","submain","rtclock",]],
            [["sha_driver.c", "local_memset"]],
            [["sha_driver.c", "local_memset"]],
            []],
}

# opt_level > 1: adjust mapping table
if opt_level == '1' or opt_level == '2':
    # w2c2 = 1
    core_func['2mm'][1] = [['PL_2mm.c', 'f10']]
    core_func['3mm'][1] = [['PL_3mm.c', 'f10']]
    core_func['adi'][1] = [['adi.c', 'f10']]
    core_func['atax'][1] = [['atax.c', 'f11']]
    core_func['bicg'][1] = [['bicg.c', 'f9']]
    core_func['cholesky'][1] = [['cholesky.c', 'f9']]
    core_func['correlation'][1] = [['correlation.c', 'f8']]
    core_func['covariance'][1] = [['covariance.c', 'f8']]
    core_func['deriche'][1] = [['deriche.c', 'f10']]
    core_func['doitgen'][1] = [['doitgen.c', 'f8']]
    core_func['durbin'][1] = [['durbin.c', 'f9']]
    core_func['fdtd-2d'][1] = [['fdtd-2d.c', 'f8']]
    core_func['floyd-warshall'][1] = [['floyd-warshall.c', 'f7']]
    core_func['gemm'][1] = [['gemm.c', 'f8']]
    core_func['gemver'][1] = [['gemver.c', 'f8']]
    core_func['gesummv'][1] = [['gesummv.c', 'f8']]
    core_func['gramschmidt'][1] = [['gramschmidt.c', 'f9']]
    core_func['heat-3d'][1] = [['heat-3d.c', 'f8']]
    core_func['jacobi-1d'][1] = [['jacobi-1d.c', 'f8']]
    core_func['jacobi-2d'][1] = [['jacobi-2d.c', 'f8']]
    core_func['lu'][1] = [['lu.c', 'f9']]
    core_func['ludcmp'][1] = [['ludcmp.c', 'f9']]
    core_func['mvt'][1] = [['mvt.c', 'f8']]
    core_func['nussinov'][1] = [['nussinov.c', 'f8']]
    core_func['seidel-2d'][1] = [['seidel-2d.c', 'f8']]
    core_func['symm'][1] = [['symm.c', 'f8']]
    core_func['syr2k'][1] = [['syr2k.c', 'f8']]
    core_func['syrk'][1] = [['syrk.c', 'f8']]
    core_func['trisolv'][1] = [['trisolv.c', 'f8']]
    core_func['trmm'][1] = [['trmm.c', 'f8']]
    core_func['adpcm'][1] = [['adpcm.c', "f7","f8","f9","f10","f11","f12","f13","f14","f15","f16","f17","f18",]]
    core_func['aes'][1] = [['aes.c', "f5","f6","f7","f8","f9","f10","f11","f12","f13","f14",]]
    core_func['blowfish'][1] = [['bf.c', "f6","f7","f8","f9",]]
    core_func['dfadd'][1] = [['dfadd.c', "f21","f7","f22","f23","f24","f25","f26","f27","f28","f29","f30","f31","f32","f33", ]]
    core_func['dfdiv'][1] = [['dfdiv.c', "f22","f23","f24","f25","f10","f26","f27","f28","f29","f30","f31","f32","f33","f34","f35",]]
    core_func['dfmul'][1] = [['dfmul.c', "f20","f21","f8","f22","f23","f24","f25","f26","f27","f28","f29","f30","f31",]]
    core_func['dfsin'][1] = [['dfsin.c', "f34","f35","f36","f37","f38","f11","f39","f40","f41","f42","f43","f44","f45","f46","f47","f48","f49","f50","f51","f52","f53","f54","f55","f56","f57","f58","f59",]]
    core_func['gsm'][1] = [['gsm.c', "f7","f8","f9","f10","f11","f12","f13","f14","f15","f16","f17",]]
    core_func['motion'][1] = [['mpeg2.c', "f6","f7","f8","f9","f10","f11","f12","f13","f14","f15",]]
    core_func['sha'][1] = [['sha_driver.c', "f6","f7","f10",]]
    # no name update on pbc, chs only
    # wasm2c = 2
    core_func['adpcm'][2] = [['adpcm.c', "w2c_adpcm_abs_0","w2c_adpcm_encode_0","w2c_adpcm_filtez_0","w2c_adpcm_filtep_0","w2c_adpcm_quantl_0","w2c_adpcm_logscl_0","w2c_adpcm_scalel_0","w2c_adpcm_upzero_0","w2c_adpcm_uppol2_0","w2c_adpcm_uppol1_0","w2c_adpcm_logsch_0","w2c_adpcm_decode_0",]]
    core_func['aes'][2] = [['aes.c', "w2c_aes_encrypt_0","w2c_aes_KeySchedule_0","w2c_aes_ByteSub_ShiftRow_0","w2c_aes_MixColumn_AddRoundKey_0","w2c_aes_AddRoundKey_0","w2c_aes_decrypt_0","w2c_aes_InversShiftRow_ByteSub_0","w2c_aes_AddRoundKey_InversMixColumn_0","w2c_aes_SubByte_0","w2c_aes_aes_main_0",]]
    core_func['blowfish'][2] = [['bf.c', "w2c_bf_local_memcpy_0","w2c_bf_BF_set_key_0","w2c_bf_BF_encrypt_0","w2c_bf_BF_cfb64_encrypt_0",]]
    core_func['dfadd'][2] = [['dfadd.c',  "w2c_dfadd_shift64RightJamming_0","w2c_dfadd_float_raise_0","w2c_dfadd_float64_is_nan_0","w2c_dfadd_float64_is_signaling_nan_0","w2c_dfadd_extractFloat64Frac_0","w2c_dfadd_extractFloat64Exp_0","w2c_dfadd_extractFloat64Sign_0","w2c_dfadd_packFloat64_0","w2c_dfadd_roundAndPackFloat64_0","w2c_dfadd_normalizeRoundAndPackFloat64_0","w2c_dfadd_addFloat64Sigs_0","w2c_dfadd_subFloat64Sigs_0","w2c_dfadd_float64_add_0","w2c_dfadd_ullong_to_double_0",]]
    core_func['dfdiv'][2] = [['dfdiv.c', "w2c_dfdiv_shift64RightJamming_0","w2c_dfdiv_add128_0","w2c_dfdiv_sub128_0","w2c_dfdiv_mul64To128_0","w2c_dfdiv_float_raise_0","w2c_dfdiv_float64_is_nan_0","w2c_dfdiv_float64_is_signaling_nan_0","w2c_dfdiv_extractFloat64Frac_0","w2c_dfdiv_extractFloat64Exp_0","w2c_dfdiv_extractFloat64Sign_0","w2c_dfdiv_normalizeFloat64Subnormal_0","w2c_dfdiv_packFloat64_0","w2c_dfdiv_roundAndPackFloat64_0","w2c_dfdiv_float64_div_0","w2c_dfdiv_ullong_to_double_0",]]
    core_func['dfmul'][2] = [['dfmul.c', "w2c_dfmul_shift64RightJamming_0","w2c_dfmul_mul64To128_0","w2c_dfmul_float_raise_0","w2c_dfmul_float64_is_nan_0","w2c_dfmul_float64_is_signaling_nan_0","w2c_dfmul_extractFloat64Frac_0","w2c_dfmul_extractFloat64Exp_0","w2c_dfmul_extractFloat64Sign_0","w2c_dfmul_normalizeFloat64Subnormal_0","w2c_dfmul_packFloat64_0","w2c_dfmul_roundAndPackFloat64_0","w2c_dfmul_float64_mul_0","w2c_dfmul_ullong_to_double_0",]]
    core_func['dfsin'][2] = [['dfsin.c', "w2c_dfsin_shift64RightJamming_0","w2c_dfsin_shift64ExtraRightJamming_0","w2c_dfsin_add128_0","w2c_dfsin_sub128_0","w2c_dfsin_mul64To128_0","w2c_dfsin_float_raise_0","w2c_dfsin_float64_is_nan_0","w2c_dfsin_float64_is_signaling_nan_0","w2c_dfsin_extractFloat64Frac_0","w2c_dfsin_extractFloat64Exp_0","w2c_dfsin_extractFloat64Sign_0","w2c_dfsin_normalizeFloat64Subnormal_0","w2c_dfsin_packFloat64_0","w2c_dfsin_roundAndPackFloat64_0","w2c_dfsin_normalizeRoundAndPackFloat64_0","w2c_dfsin_int32_to_float64_0","w2c_dfsin_addFloat64Sigs_0","w2c_dfsin_subFloat64Sigs_0","w2c_dfsin_float64_add_0","w2c_dfsin_float64_mul_0","w2c_dfsin_float64_div_0","w2c_dfsin_float64_le_0","w2c_dfsin_float64_ge_0","w2c_dfsin_float64_neg_0","w2c_dfsin_float64_abs_0","w2c_dfsin_local_sin_0","w2c_dfsin_ullong_to_double_0",]]
    core_func['gsm'][2] = [['gsm.c', "w2c_gsm_gsm_add_0","w2c_gsm_gsm_mult_0","w2c_gsm_gsm_mult_r_0","w2c_gsm_gsm_abs_0","w2c_gsm_gsm_norm_0","w2c_gsm_gsm_div_0","w2c_gsm_Autocorrelation_0","w2c_gsm_Reflection_coefficients_0","w2c_gsm_Transformation_to_Log_Area_Ratios_0","w2c_gsm_Quantization_and_coding_0","w2c_gsm_Gsm_LPC_Analysis_0",]]
    core_func['motion'][2] = [['mpeg2.c', "w2c_mpeg2_read_0","w2c_mpeg2_Fill_Buffer_0","w2c_mpeg2_Show_Bits_0","w2c_mpeg2_Get_Bits1_0","w2c_mpeg2_Get_Bits_0","w2c_mpeg2_Flush_Buffer_0","w2c_mpeg2_Get_motion_code_0","w2c_mpeg2_Get_dmvector_0","w2c_mpeg2_motion_vectors_0","w2c_mpeg2_motion_vector_0",]]
    core_func['sha'][2] = [['sha_driver.c', "w2c_sha__driver_local_memset_0"]]
    # angr = 3
    if opt_level == '2':
        core_func['2mm'][3] = []
        core_func['3mm'][3] = []
        core_func['adi'][3] = []
        core_func['atax'][3] = []
        core_func['bicg'][3] = []
        core_func['cholesky'][3] = []
        core_func['correlation'][3] = []
        core_func['covariance'][3] = []
        core_func['deriche'][3] = []
        core_func['doitgen'][3] = []
        core_func['durbin'][3] = []
        core_func['fdtd-2d'][3] = []
        core_func['floyd-warshall'][3] = []
        core_func['gemm'][3] = []
        core_func['gemver'][3] = []
        core_func['gesummv'][3] = []
        core_func['gramschmidt'][3] = []
        core_func['heat-3d'][3] = []
        core_func['jacobi-1d'][3] = []
        core_func['jacobi-2d'][3] = []
        core_func['lu'][3] = []
        core_func['ludcmp'][3] = []
        core_func['mvt'][3] = []
        core_func['nussinov'][3] = [['nussinov.c', 'kernel_nussinov']]
        core_func['seidel-2d'][3] = []
        core_func['symm'][3] = []
        core_func['syr2k'][3] = []
        core_func['syrk'][3] = []
        core_func['trisolv'][3] = []
        core_func['trmm'][3] = []
        core_func['adpcm'][3] = []
        core_func['aes'][3] = []
        core_func['blowfish'][3] = []
        core_func['dfadd'][3] = []
        core_func['dfdiv'][3] = []
        core_func['dfmul'][3] = []
        core_func['dfsin'][3] = []
        core_func['gsm'][3] = []
        core_func['motion'][3] = []
        core_func['sha'][3] = []
    else:
        core_func['adpcm'][3] = [['adpcm.c', "abs","encode","filtez","filtep","quantl","logscl","scalel","upzero","uppol2","uppol1","logsch","decode","reset","adpcm_main","submain",]]
        core_func['aes'][3] = [['aes.c', "encrypt","AddRoundKey","ByteSub_ShiftRow","MixColumn_AddRoundKey","decrypt","InversShiftRow_ByteSub","AddRoundKey_InversMixColumn","SubByte","aes_main","submain",]]
        core_func['blowfish'][3] = [['bf.c', "local_memcpy","BF_set_key","BF_encrypt","BF_cfb64_encrypt","blowfish_main","submain",]]
        core_func['dfadd'][3] = [['dfadd.c',  "shift64RightJamming","float_raise","float64_is_nan","float64_is_signaling_nan","extractFloat64Frac","extractFloat64Exp","extractFloat64Sign","packFloat64","roundAndPackFloat64","normalizeRoundAndPackFloat64","addFloat64Sigs","subFloat64Sigs","float64_add","ullong_to_double","submain",]]
        core_func['dfdiv'][3] = [['dfdiv.c', "shift64RightJamming","add128","sub128","mul64To128","float_raise","float64_is_nan","float64_is_signaling_nan","extractFloat64Frac","extractFloat64Exp","extractFloat64Sign","normalizeFloat64Subnormal","packFloat64","roundAndPackFloat64","ullong_to_double","submain",]]
        core_func['dfmul'][3] = [['dfmul.c', "shift64RightJamming","mul64To128","float_raise","float64_is_nan","float64_is_signaling_nan","extractFloat64Frac","extractFloat64Exp","extractFloat64Sign","normalizeFloat64Subnormal","packFloat64","roundAndPackFloat64","ullong_to_double","submain",]]
        core_func['dfsin'][3] = [['dfsin.c', "shift64RightJamming","add128","sub128","mul64To128","float_raise","float64_is_nan","float64_is_signaling_nan","extractFloat64Frac","extractFloat64Exp","extractFloat64Sign","normalizeFloat64Subnormal","packFloat64","roundAndPackFloat64","normalizeRoundAndPackFloat64","int32_to_float64","addFloat64Sigs","subFloat64Sigs","float64_add","float64_le","float64_ge","float64_neg","float64_abs","local_sin","ullong_to_double","submain",]]
        core_func['gsm'][3] = [['gsm.c', "gsm_add","gsm_mult","gsm_mult_r","gsm_abs","gsm_norm","gsm_div","Autocorrelation","Reflection_coefficients","Transformation_to_Log_Area_Ratios","Quantization_and_coding","Gsm_LPC_Analysis","submain",]]
        core_func['motion'][3] = [['mpeg2.c', "read","Fill_Buffer","Show_Bits","Get_Bits1","Get_Bits","Flush_Buffer","Get_motion_code","Get_dmvector","motion_vectors","Initialize_Buffer","submain",]]
        core_func['sha'][3] = [['sha_driver.c', "local_memset","local_memcpy","sha_transform","sha_init","sha_update","sha_final","sha_stream","submain",]]
    # ghidra = 4
    core_func['adpcm'][4] = [['adpcm.c', "abs","encode","filtez","filtep","quantl","logscl","scalel","upzero","uppol2","uppol1","logsch","decode",]]
    core_func['aes'][4] = [['aes.c', "encrypt","KeySchedule","ByteSub_ShiftRow","MixColumn_AddRoundKey","AddRoundKey","decrypt","InversShiftRow_ByteSub","AddRoundKey_InversMixColumn","SubByte","aes_main",]]
    core_func['blowfish'][4] = [['bf.c', "local_memcpy","BF_set_key","BF_encrypt","BF_cfb64_encrypt",]]
    core_func['dfadd'][4] = [['dfadd.c',  "shift64RightJamming","float_raise","float64_is_nan","float64_is_signaling_nan","extractFloat64Frac","extractFloat64Exp","extractFloat64Sign","packFloat64","roundAndPackFloat64","normalizeRoundAndPackFloat64","addFloat64Sigs","subFloat64Sigs","float64_add","ullong_to_double",]]
    core_func['dfdiv'][4] = [['dfdiv.c', "shift64RightJamming","add128","sub128","mul64To128","float_raise","float64_is_nan","float64_is_signaling_nan","extractFloat64Frac","extractFloat64Exp","extractFloat64Sign","normalizeFloat64Subnormal","packFloat64","roundAndPackFloat64","float64_div","ullong_to_double",]]
    core_func['dfmul'][4] = [['dfmul.c', "shift64RightJamming","mul64To128","float_raise","float64_is_nan","float64_is_signaling_nan","extractFloat64Frac","extractFloat64Exp","extractFloat64Sign","normalizeFloat64Subnormal","packFloat64","roundAndPackFloat64","float64_mul","ullong_to_double",]]
    core_func['dfsin'][4] = [['dfsin.c', "shift64RightJamming","shift64ExtraRightJamming","add128","sub128","mul64To128","float_raise","float64_is_nan","float64_is_signaling_nan","extractFloat64Frac","extractFloat64Exp","extractFloat64Sign","normalizeFloat64Subnormal","packFloat64","roundAndPackFloat64","normalizeRoundAndPackFloat64","int32_to_float64","addFloat64Sigs","subFloat64Sigs","float64_add","float64_mul","float64_div","float64_le","float64_ge","float64_neg","float64_abs","local_sin","ullong_to_double",]]
    core_func['motion'][4] = [['mpeg2.c', "read","Fill_Buffer","Show_Bits","Get_Bits1","Get_Bits","Flush_Buffer","Get_motion_code","Get_dmvector","motion_vectors","motion_vector",]]
    core_func['sha'][4] = [['sha_driver.c', "local_memset"]]
    # retdec = 5
    core_func['adpcm'][5] = [['adpcm.c', "_abs","encode","filtez","filtep","quantl","logscl","scalel","upzero","uppol2","uppol1","logsch","decode",]]
    core_func['aes'][5] = [['aes.c', "encrypt","KeySchedule","ByteSub_ShiftRow","MixColumn_AddRoundKey","AddRoundKey","decrypt","InversShiftRow_ByteSub","AddRoundKey_InversMixColumn","SubByte","aes_main",]]
    core_func['blowfish'][5] = [['bf.c', "local_memcpy","BF_set_key","BF_encrypt","BF_cfb64_encrypt",]]
    core_func['dfadd'][5] = [['dfadd.c',  "shift64RightJamming","float_raise","float64_is_nan","float64_is_signaling_nan","extractFloat64Frac","extractFloat64Exp","extractFloat64Sign","packFloat64","roundAndPackFloat64","normalizeRoundAndPackFloat64","addFloat64Sigs","subFloat64Sigs","float64_add","ullong_to_double",]]
    core_func['dfdiv'][5] = [['dfdiv.c', "shift64RightJamming","add128","sub128","mul64To128","float_raise","float64_is_nan","float64_is_signaling_nan","extractFloat64Frac","extractFloat64Exp","extractFloat64Sign","normalizeFloat64Subnormal","packFloat64","roundAndPackFloat64","float64_div","ullong_to_double",]]
    core_func['dfmul'][5] = [['dfmul.c', "shift64RightJamming","mul64To128","float_raise","float64_is_nan","float64_is_signaling_nan","extractFloat64Frac","extractFloat64Exp","extractFloat64Sign","normalizeFloat64Subnormal","packFloat64","roundAndPackFloat64","float64_mul","ullong_to_double",]]
    core_func['dfsin'][5] = [['dfsin.c', "shift64RightJamming","shift64ExtraRightJamming","add128","sub128","mul64To128","float_raise","float64_is_nan","float64_is_signaling_nan","extractFloat64Frac","extractFloat64Exp","extractFloat64Sign","normalizeFloat64Subnormal","packFloat64","roundAndPackFloat64","normalizeRoundAndPackFloat64","int32_to_float64","addFloat64Sigs","subFloat64Sigs","float64_add","float64_mul","float64_div","float64_le","float64_ge","float64_neg","local_sin","ullong_to_double",]]
    core_func['gsm'][5] = [['gsm.c', "gsm_add","gsm_mult","gsm_mult_r","gsm_norm","gsm_div","Autocorrelation","Reflection_coefficients","Transformation_to_Log_Area_Ratios","Quantization_and_coding","Gsm_LPC_Analysis",]]
    core_func['motion'][5] = [['mpeg2.c', "read","Fill_Buffer","Show_Bits","Get_Bits1","Get_Bits","Flush_Buffer","Get_motion_code","Get_dmvector","motion_vectors","motion_vector",]]
    core_func['sha'][5] = [['sha_driver.c', "local_memset"]]

# excluded benchmarks
# ghidra = 4
core_func['dfsin'][4] = []
core_func['dfadd'][4] = []
core_func['dfmul'][4] = []
core_func['dfdiv'][4] = []
core_func['gsm'][4] = []
core_func['motion'][4] = []  # mpeg = motion
if opt_level == '1':
    core_func['aes'][4] = []
    core_func['blowfish'][4] = []  #bf = blowfish
if opt_level == '2':
    core_func['adpcm'][4] = []
    core_func['aes'][4] = []
    core_func['atax'][4] = []
    core_func['covariance'][4] = []
    core_func['deriche'][4] = []
    core_func['durbin'][4] = []
    core_func['fdtd-2d'][4] = []
    core_func['gemm'][4] = []
    core_func['gemver'][4] = []
    core_func['heat-3d'][4] = []
    core_func['gramschmidt'][4] = []
    core_func['jacobi-1d'][4] = []
    core_func['jacobi-2d'][4] = []
    core_func['syr2k'][4] = []
    core_func['syrk'][4] = []
# retdec = 5
if opt_level == '0':
    core_func['blowfish'][5] = []
    core_func['gsm'][5] = []
if opt_level == '1':
    core_func['atax'][5] = []
    core_func['cholesky'][5] = []
    core_func['durbin'][5] = []
    core_func['gramschmidt'][5] = []
    core_func['motion'][5] = []
if opt_level == '2':
    core_func['cholesky'][5] = []
    core_func['durbin'][5] = []
    core_func['gramschmidt'][5] = []
    core_func['motion'][5] = []

####
# all_data = []
print_info = 0

for i in range(len(decompilers)):
    print('\n===\nReading', file_list[i])
    f = open(file_list[i], mode='r')
    raw = json.load(f)
    f.close()

    cnt = 0
    for metric_iter in range(len(keywords)):
        # if i == 2 and metric_iter == 3:
        #     print('wasm2c @ MND')
        #     print_info = 1
        # else:
        #     print_info = 0

        cnt = 0
        for one_bench in bench_list:
            # stats[metric][bench]
            file_func_pairs = core_func[one_bench][i]
            if print_info:
                print('Decompiler', decompilers[i], '@ benchmark', one_bench, 'has file-func mapping info', file_func_pairs)
            for one_mapping in file_func_pairs:
                file_name = one_mapping[0]
                funcs = one_mapping[1:]
                for func_name in funcs:
                    if metric_iter < 8:
                        if print_info:
                            print('--reading', file_name, keywords[metric_iter], func_name)
                        try:
                            one_stat = raw[file_name][keywords[metric_iter]][func_name]
                        except KeyError:
                            continue
                        if print_info:
                            print(one_stat)
                        if one_stat != 'Timeout':
                            stats[metric_iter][i].append(one_stat)
                    # keywords = ['Lines of code', 'Halstead complexity difficulty measure', 'McCabe cyclomatic complexity',
                    #             'Maximum nesting depth', '# goto', '# cast', '# var', '# dead code',
                    #             'goto / LOC', 'var / LOC']
                    elif metric_iter == 8:    # goto / LOC
                        try:
                            goto_num = raw[file_name][keywords[4]][func_name]
                            loc_num = raw[file_name][keywords[0]][func_name]
                            one_stat = goto_num / loc_num
                            stats[metric_iter][i].append(one_stat)
                        except:
                            continue
                    elif metric_iter == 9:    # var / LOC
                        try:
                            var_num = raw[file_name][keywords[6]][func_name]
                            loc_num = raw[file_name][keywords[0]][func_name]
                            one_stat = var_num / loc_num
                            stats[metric_iter][i].append(one_stat)
                        except:
                            continue
            cnt += 1
    print(decompilers[i], 'data parsed: in total', cnt, 'programs detected')

# output: plots per metric using matplotlib
if 0:
    for i in range(len(keywords)):
        fig = plt.figure(1, figsize=(6, 4))
        plt.subplots_adjust(left=0.11, right=0.98, top=0.94, bottom=0.07, wspace=0.2, hspace=0.2)
        if i in [0]:  # loc
            plt.yscale('log')
        plt.title(keywords[i])
        plt.boxplot(stats[i][:-1], positions=range(len(decompilers[:-1])), sym='',
                    patch_artist=True,
                    boxprops={'facecolor': 'lightgrey'},
                    medianprops={'color': 'black'})
        plt.xticks(range(len(decompilers[:-1])), decompilers[:-1])
        plt.show()

# output: stats
output_data = [['Metrics', 'Source', 'w2c2', 'wasm2c', 'angr', 'ghidra', 'retdec',], ]
for i in range(len(keywords)):
    one_data = [keywords[i]]
    for j in range(len(stats[i][:-1])):
        if len(stats[i][j]) > 1:
            one_data.append("%.4f" % statistics.mean(stats[i][j]) + " (%.4f)" % statistics.stdev(stats[i][j]))
        elif len(stats[i][j]) == 1:
            one_data.append("%.4f" % statistics.mean(stats[i][j]) + " (N/A)")
        else:
            one_data.append('N/A')
    output_data.append(one_data)

f = open('data_bench.csv', mode='w')
for i in output_data:
    for j in i:
        f.write(str(j)+',')
    f.write('\n')
f.close()
