
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "jacobi-1d.h"
int64_t kernel_jacobi_1d(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4) {
    int32_t v1 = a1; // 0xa
    if (v1 < 1) {
        // 0x309
        int64_t result; // 0x0
        return result;
    }
    int64_t result2 = a2 + 0xffffffff & 0xffffffff; // 0x12
    uint64_t v2 = a3 + 8; // 0x15
    int64_t v3 = 8 * result2; // 0x19
    uint64_t v4 = v3 + a3; // 0x19
    uint64_t v5 = v3 + a4; // 0x1d
    uint64_t v6 = a4 + 8; // 0x25
    uint64_t v7 = result2 - 1; // 0x43
    int64_t v8 = v7 & -4; // 0x4d
    int64_t v9 = v8 | 1; // 0x51
    int64_t v10 = -result2; // 0x58
    int128_t v11 = __asm_movsd(0x3fd555475a31a4be); // 0x6f
    int128_t v12 = __asm_movapd(g1); // 0x77
    int64_t v13 = a3 + 16;
    int64_t v14 = a4 + 16;
    int64_t v15 = 0; // 0x7f
    int64_t v16; // 0x0
    while (true) {
      lab_0x9c:
        // 0x9c
        if ((int32_t)a2 < 3) {
            goto lab_0x90;
        } else {
            int64_t v17 = 0; // 0xb2
            v16 = 1;
            if (v7 < 4 || v5 > a3 == v6 < v4 + 8) {
                goto lab_0x134;
            } else {
                int64_t v18 = 8 * v17; // 0xc0
                int128_t v19 = __asm_movupd_2(*(int128_t *)(v18 + a3)); // 0xc8
                int128_t v20 = __asm_movupd_2(*(int128_t *)(v18 + v13)); // 0xce
                int64_t v21 = v18 | 8; // 0xd8
                int128_t v22 = __asm_addpd(__asm_movupd_2(*(int128_t *)(v21 + a3)), v19); // 0xe2
                int128_t v23 = __asm_addpd(__asm_movupd_2(*(int128_t *)(v21 + v13)), v20); // 0xed
                int64_t v24 = v18 | 16; // 0xf1
                int128_t v25 = __asm_addpd(__asm_movupd_2(*(int128_t *)(v24 + a3)), v22); // 0xfb
                int128_t v26 = __asm_addpd(__asm_movupd_2(*(int128_t *)(v24 + v13)), v23); // 0x106
                int128_t v27 = __asm_mulpd(v25, v12); // 0x10a
                int128_t v28 = __asm_mulpd(v26, v12); // 0x10e
                __asm_movupd(*(int128_t *)(v21 + a4), v27);
                __asm_movupd(*(int128_t *)(v21 + v14), v28);
                int64_t v29 = v17 + 4; // 0x11f
                v17 = v29;
                while (v29 != v8) {
                    // 0xc0
                    v18 = 8 * v17;
                    v19 = __asm_movupd_2(*(int128_t *)(v18 + a3));
                    v20 = __asm_movupd_2(*(int128_t *)(v18 + v13));
                    v21 = v18 | 8;
                    v22 = __asm_addpd(__asm_movupd_2(*(int128_t *)(v21 + a3)), v19);
                    v23 = __asm_addpd(__asm_movupd_2(*(int128_t *)(v21 + v13)), v20);
                    v24 = v18 | 16;
                    v25 = __asm_addpd(__asm_movupd_2(*(int128_t *)(v24 + a3)), v22);
                    v26 = __asm_addpd(__asm_movupd_2(*(int128_t *)(v24 + v13)), v23);
                    v27 = __asm_mulpd(v25, v12);
                    v28 = __asm_mulpd(v26, v12);
                    __asm_movupd(*(int128_t *)(v21 + a4), v27);
                    __asm_movupd(*(int128_t *)(v21 + v14), v28);
                    v29 = v17 + 4;
                    v17 = v29;
                }
                // 0x128
                v16 = v9;
                if (v7 == v8) {
                    goto lab_0x1cd;
                } else {
                    goto lab_0x134;
                }
            }
        }
    }
    // 0x309
    return result2;
  lab_0x90:;
    int64_t v30 = v15 + 1; // 0x90
    v15 = v30 & 0xffffffff;
    if ((int32_t)v30 == v1) {
        return result2;
    }
    goto lab_0x9c;
  lab_0x134:;
    int64_t v31 = v16;
    int64_t v32 = v31; // 0x13b
    if ((a2 & 1) != 0) {
        int64_t v33 = 8 * v31; // 0x13d
        int128_t v34 = __asm_movupd_2(*(int128_t *)(a3 - 8 + v33)); // 0x13d
        int128_t v35 = __asm_addsd(__asm_unpckhpd(__asm_movapd(v34), v34), v34); // 0x14c
        int128_t v36 = __asm_addsd_3(v35, *(int64_t *)(v33 + v2)); // 0x155
        *(int64_t *)(v33 + a4) = __asm_movsd_1(__asm_mulsd(v36, v11));
        v32 = v31 + 1;
    }
    int64_t v37 = v32; // 0x16c
    if (v10 != -1 - v31) {
        int64_t v38 = 8 * v37; // 0x170
        int64_t v39 = v38 + a3;
        int128_t v40 = __asm_movupd_2(*(int128_t *)(v39 - 8)); // 0x170
        int128_t v41 = __asm_addsd(__asm_unpckhpd(__asm_movapd(v40), v40), v40); // 0x17f
        int128_t v42 = __asm_addsd_3(v41, *(int64_t *)(v38 + v2)); // 0x183
        *(int64_t *)(v38 + a4) = __asm_movsd_1(__asm_mulsd(v42, v11));
        int128_t v43 = __asm_movupd_2(*(int128_t *)v39); // 0x194
        int128_t v44 = __asm_addsd(__asm_unpckhpd(__asm_movapd(v43), v43), v43); // 0x1a2
        int128_t v45 = __asm_addsd_3(v44, *(int64_t *)(v38 + v13)); // 0x1a6
        *(int64_t *)(v38 + v6) = __asm_movsd_1(__asm_mulsd(v45, v11));
        int64_t v46 = v37 + 2; // 0x1b8
        v37 = v46;
        while (v46 != result2) {
            // 0x170
            v38 = 8 * v37;
            v39 = v38 + a3;
            v40 = __asm_movupd_2(*(int128_t *)(v39 - 8));
            v41 = __asm_addsd(__asm_unpckhpd(__asm_movapd(v40), v40), v40);
            v42 = __asm_addsd_3(v41, *(int64_t *)(v38 + v2));
            *(int64_t *)(v38 + a4) = __asm_movsd_1(__asm_mulsd(v42, v11));
            v43 = __asm_movupd_2(*(int128_t *)v39);
            v44 = __asm_addsd(__asm_unpckhpd(__asm_movapd(v43), v43), v43);
            v45 = __asm_addsd_3(v44, *(int64_t *)(v38 + v13));
            *(int64_t *)(v38 + v6) = __asm_movsd_1(__asm_mulsd(v45, v11));
            v46 = v37 + 2;
            v37 = v46;
        }
    }
    goto lab_0x1cd;
  lab_0x1cd:;
    int64_t v47 = 0; // 0x1de
    int64_t v48 = 1; // 0x1de
    if (v7 < 4 || v4 > a4 == v2 < v5 + 8) {
        goto lab_0x264;
    } else {
        int64_t v49 = 8 * v47; // 0x1f0
        int128_t v50 = __asm_movupd_2(*(int128_t *)(v49 + a4)); // 0x1f8
        int128_t v51 = __asm_movupd_2(*(int128_t *)(v49 + v14)); // 0x1fe
        int64_t v52 = v49 | 8; // 0x208
        int128_t v53 = __asm_addpd(__asm_movupd_2(*(int128_t *)(v52 + a4)), v50); // 0x212
        int128_t v54 = __asm_addpd(__asm_movupd_2(*(int128_t *)(v52 + v14)), v51); // 0x21d
        int64_t v55 = v49 | 16; // 0x221
        int128_t v56 = __asm_addpd(__asm_movupd_2(*(int128_t *)(v55 + a4)), v53); // 0x22b
        int128_t v57 = __asm_addpd(__asm_movupd_2(*(int128_t *)(v55 + v14)), v54); // 0x236
        int128_t v58 = __asm_mulpd(v56, v12); // 0x23a
        int128_t v59 = __asm_mulpd(v57, v12); // 0x23e
        __asm_movupd(*(int128_t *)(v52 + a3), v58);
        __asm_movupd(*(int128_t *)(v52 + v13), v59);
        int64_t v60 = v47 + 4; // 0x24f
        v47 = v60;
        while (v60 != v8) {
            // 0x1f0
            v49 = 8 * v47;
            v50 = __asm_movupd_2(*(int128_t *)(v49 + a4));
            v51 = __asm_movupd_2(*(int128_t *)(v49 + v14));
            v52 = v49 | 8;
            v53 = __asm_addpd(__asm_movupd_2(*(int128_t *)(v52 + a4)), v50);
            v54 = __asm_addpd(__asm_movupd_2(*(int128_t *)(v52 + v14)), v51);
            v55 = v49 | 16;
            v56 = __asm_addpd(__asm_movupd_2(*(int128_t *)(v55 + a4)), v53);
            v57 = __asm_addpd(__asm_movupd_2(*(int128_t *)(v55 + v14)), v54);
            v58 = __asm_mulpd(v56, v12);
            v59 = __asm_mulpd(v57, v12);
            __asm_movupd(*(int128_t *)(v52 + a3), v58);
            __asm_movupd(*(int128_t *)(v52 + v13), v59);
            v60 = v47 + 4;
            v47 = v60;
        }
        // 0x258
        v48 = v9;
        if (v7 == v8) {
            goto lab_0x90;
        } else {
            goto lab_0x264;
        }
    }
  lab_0x264:;
    int64_t v61 = v48;
    int64_t v62 = v61; // 0x26b
    if ((a2 & 1) != 0) {
        int64_t v63 = 8 * v61; // 0x26d
        int128_t v64 = __asm_movupd_2(*(int128_t *)(a4 - 8 + v63)); // 0x26d
        int128_t v65 = __asm_addsd(__asm_unpckhpd(__asm_movapd(v64), v64), v64); // 0x27c
        int128_t v66 = __asm_addsd_3(v65, *(int64_t *)(v63 + v6)); // 0x285
        *(int64_t *)(v63 + a3) = __asm_movsd_1(__asm_mulsd(v66, v11));
        v62 = v61 + 1;
    }
    int64_t v67 = v62; // 0x29c
    if (v10 != -1 - v61) {
        int64_t v68 = 8 * v67; // 0x2b0
        int64_t v69 = v68 + a4;
        int128_t v70 = __asm_movupd_2(*(int128_t *)(v69 - 8)); // 0x2b0
        int128_t v71 = __asm_addsd(__asm_unpckhpd(__asm_movapd(v70), v70), v70); // 0x2bf
        int128_t v72 = __asm_addsd_3(v71, *(int64_t *)(v68 + v6)); // 0x2c3
        *(int64_t *)(v68 + a3) = __asm_movsd_1(__asm_mulsd(v72, v11));
        int128_t v73 = __asm_movupd_2(*(int128_t *)v69); // 0x2d4
        int128_t v74 = __asm_addsd(__asm_unpckhpd(__asm_movapd(v73), v73), v73); // 0x2e2
        int128_t v75 = __asm_addsd_3(v74, *(int64_t *)(v68 + v14)); // 0x2e6
        *(int64_t *)(v68 + v2) = __asm_movsd_1(__asm_mulsd(v75, v11));
        int64_t v76 = v67 + 2; // 0x2f8
        v67 = v76;
        while (v76 != result2) {
            // 0x2b0
            v68 = 8 * v67;
            v69 = v68 + a4;
            v70 = __asm_movupd_2(*(int128_t *)(v69 - 8));
            v71 = __asm_addsd(__asm_unpckhpd(__asm_movapd(v70), v70), v70);
            v72 = __asm_addsd_3(v71, *(int64_t *)(v68 + v6));
            *(int64_t *)(v68 + a3) = __asm_movsd_1(__asm_mulsd(v72, v11));
            v73 = __asm_movupd_2(*(int128_t *)v69);
            v74 = __asm_addsd(__asm_unpckhpd(__asm_movapd(v73), v73), v73);
            v75 = __asm_addsd_3(v74, *(int64_t *)(v68 + v14));
            *(int64_t *)(v68 + v2) = __asm_movsd_1(__asm_mulsd(v75, v11));
            v76 = v67 + 2;
            v67 = v76;
        }
    }
    goto lab_0x90;
}
