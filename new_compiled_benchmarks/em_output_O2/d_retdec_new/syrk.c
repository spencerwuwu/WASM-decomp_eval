
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "syrk.h"
int64_t kernel_syrk(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x0
    int128_t v1; // 0x0
    int128_t v2 = v1;
    int64_t result; // 0x0
    if ((int32_t)a1 < 1) {
        // 0x2f4
        return result;
    }
    int64_t v3 = 0x100000000 * a2 >> 32; // 0xf
    int128_t v4 = __asm_unpcklpd(__asm_movapd(v2), v2); // 0x2b
    int64_t v5 = 1; // 0x38
    int64_t v6 = 0; // 0x38
    int64_t v7; // 0x0
    uint64_t v8; // 0x0
    int64_t v9; // 0x0
    int64_t v10; // 0x0
    uint64_t v11; // 0x58
    while (true) {
      lab_0x51:
        // 0x51
        v7 = v6;
        v8 = v5;
        v11 = 0x2580 * v7 + a3;
        v9 = 0;
        if (v8 >= 4) {
            int64_t v12 = v8 & 0x7ffffffffffffffc; // 0x7d
            int64_t v13 = 0; // 0x82
            int64_t v14 = 8 * v13; // 0x90
            int128_t * v15 = (int128_t *)(v14 + v11); // 0x90
            int128_t v16 = __asm_movupd_1(*v15); // 0x90
            int128_t * v17 = (int128_t *)(v11 + 16 + v14); // 0x96
            int128_t v18 = __asm_movupd_1(*v17); // 0x96
            int128_t v19 = __asm_mulpd(v16, v4); // 0x9d
            int128_t v20 = __asm_mulpd(v18, v4); // 0xa1
            __asm_movupd(*v15, v19);
            __asm_movupd(*v17, v20);
            v13 += 4;
            while (v13 != v12) {
                // 0x90
                v14 = 8 * v13;
                v15 = (int128_t *)(v14 + v11);
                v16 = __asm_movupd_1(*v15);
                v17 = (int128_t *)(v11 + 16 + v14);
                v18 = __asm_movupd_1(*v17);
                v19 = __asm_mulpd(v16, v4);
                v20 = __asm_mulpd(v18, v4);
                __asm_movupd(*v15, v19);
                __asm_movupd(*v17, v20);
                v13 += 4;
            }
            // 0xbb
            v9 = v12;
            v10 = v8;
            if (v8 == v12) {
                goto lab_0xd8;
            } else {
                goto lab_0xc0;
            }
        } else {
            goto lab_0xc0;
        }
    }
  lab_0x2f4:
    // 0x2f4
    return result;
  lab_0x253:;
    // 0x253
    int64_t v21; // 0x0
    int64_t v22 = v21;
    int64_t v23 = v22; // 0x25a
    uint64_t v24; // 0x0
    uint64_t v25; // 0x0
    if ((v8 & 1) != 0) {
        int128_t v26 = __asm_mulsd(__asm_movsd(*(int64_t *)v25), v1); // 0x261
        int128_t v27 = __asm_mulsd_3(v26, *(int64_t *)(0x1f40 * v22 + v24)); // 0x26f
        int64_t * v28 = (int64_t *)(8 * v22 + v11); // 0x275
        *v28 = __asm_movsd_2(__asm_addsd(v27, *v28));
        v23 = v22 | 1;
    }
    int64_t v29 = v23;
    int64_t v30 = v29; // 0x28b
    if (v7 != v22) {
        int64_t * v31 = (int64_t *)v25; // 0x2a0
        int64_t v32 = v29; // 0x2e6
        int128_t v33 = __asm_mulsd(__asm_movsd(*v31), v1); // 0x2a5
        int64_t v34 = v24 + 0x1f40 * v32;
        int128_t v35 = __asm_mulsd_3(v33, *(int64_t *)v34); // 0x2b3
        int64_t v36 = 8 * v32 + v11;
        int64_t * v37 = (int64_t *)v36; // 0x2b9
        *v37 = __asm_movsd_2(__asm_addsd(v35, *v37));
        int128_t v38 = __asm_mulsd_3(__asm_mulsd(__asm_movsd(*v31), v1), *(int64_t *)(v34 + 0x1f40)); // 0x2ce
        int64_t * v39 = (int64_t *)(v36 + 8); // 0x2d8
        *v39 = __asm_movsd_2(__asm_addsd(v38, *v39));
        v32 += 2;
        v30 = v32;
        while (v32 != v8) {
            // 0x2a0
            v33 = __asm_mulsd(__asm_movsd(*v31), v1);
            v34 = v24 + 0x1f40 * v32;
            v35 = __asm_mulsd_3(v33, *(int64_t *)v34);
            v36 = 8 * v32 + v11;
            v37 = (int64_t *)v36;
            *v37 = __asm_movsd_2(__asm_addsd(v35, *v37));
            v38 = __asm_mulsd_3(__asm_mulsd(__asm_movsd(*v31), v1), *(int64_t *)(v34 + 0x1f40));
            v39 = (int64_t *)(v36 + 8);
            *v39 = __asm_movsd_2(__asm_addsd(v38, *v39));
            v32 += 2;
            v30 = v32;
        }
    }
    goto lab_0x120;
  lab_0x120:;
    // 0x120
    int64_t v40; // 0x0
    int64_t v41 = v40 + 1; // 0x120
    int64_t v42 = v30; // 0x126
    v40 = v41;
    if (v41 == (v3 & 0xffffffff)) {
        // break -> 0x40
        goto lab_0x40;
    }
    goto lab_0x12c;
  lab_0xc0:;
    int64_t * v63 = (int64_t *)(8 * v9 + v11); // 0xc0
    *v63 = __asm_movsd_2(__asm_mulsd(__asm_movsd(*v63), v2));
    int64_t v64 = v9 + 1; // 0xd0
    int64_t v65 = v64; // 0xd6
    v10 = v64;
    while (v64 != v8) {
        // 0xc0
        v63 = (int64_t *)(8 * v65 + v11);
        *v63 = __asm_movsd_2(__asm_mulsd(__asm_movsd(*v63), v2));
        v64 = v65 + 1;
        v65 = v64;
        v10 = v64;
    }
    goto lab_0xd8;
  lab_0xd8:
    // 0xd8
    v42 = v10;
    if ((int32_t)v3 >= 1) {
        int64_t v43 = 0x1f40 * v7; // 0xea
        uint64_t v44 = a3 + 8 + 0x2588 * v7; // 0xfa
        int64_t v45 = v43 | 8; // 0xfe
        int64_t v62 = v8 & 0x7ffffffffffffffc; // 0x10f
        int64_t v57 = v11 + 16;
        v40 = 0;
        while (true) {
          lab_0x12c:
            // 0x12c
            v24 = 8 * v40 + a4;
            v25 = v24 + v43;
            v21 = 0;
            if (v8 < 6) {
                goto lab_0x253;
            } else {
                // 0x13e
                v21 = 0;
                if (v24 < v44 == v11 < v24 + v45) {
                    goto lab_0x253;
                } else {
                    // 0x16d
                    if (v11 < v24 + v45 == v25 < v44) {
                        goto lab_0x253;
                    } else {
                        int128_t v46 = __asm_mulsd(__asm_movsd(*(int64_t *)v25), v1); // 0x18a
                        int128_t v47 = __asm_unpcklpd(v46, v46); // 0x18e
                        int64_t v48 = 0; // 0x194
                        int128_t v49 = __asm_movsd(*(int64_t *)(0x1f40 * v48 + v24)); // 0x1dd
                        int128_t v50 = __asm_movhpd(v49, *(int64_t *)(0x1f40 * (v48 | 1) + v24)); // 0x1e3
                        int128_t v51 = __asm_movsd(*(int64_t *)(0x1f40 * (v48 | 2) + v24)); // 0x1e9
                        int128_t v52 = __asm_movhpd(v51, *(int64_t *)(0x1f40 * (v48 | 3) + v24)); // 0x1ef
                        int64_t v53 = 8 * v48; // 0x1f5
                        int128_t * v54 = (int128_t *)(v53 + v11); // 0x1f5
                        int128_t v55 = __asm_movupd_1(*v54); // 0x1f5
                        int128_t * v56 = (int128_t *)(v57 + v53); // 0x1fb
                        int128_t v58 = __asm_movupd_1(*v56); // 0x1fb
                        int128_t v59 = __asm_addpd(__asm_mulpd(v50, v47), v55); // 0x206
                        int128_t v60 = __asm_addpd(__asm_mulpd(v52, v47), v58); // 0x20e
                        __asm_movupd(*v54, v59);
                        __asm_movupd(*v56, v60);
                        int64_t v61 = v48 + 4; // 0x21f
                        v48 = v61;
                        while (v61 != v62) {
                            // 0x1a0
                            v49 = __asm_movsd(*(int64_t *)(0x1f40 * v48 + v24));
                            v50 = __asm_movhpd(v49, *(int64_t *)(0x1f40 * (v48 | 1) + v24));
                            v51 = __asm_movsd(*(int64_t *)(0x1f40 * (v48 | 2) + v24));
                            v52 = __asm_movhpd(v51, *(int64_t *)(0x1f40 * (v48 | 3) + v24));
                            v53 = 8 * v48;
                            v54 = (int128_t *)(v53 + v11);
                            v55 = __asm_movupd_1(*v54);
                            v56 = (int128_t *)(v57 + v53);
                            v58 = __asm_movupd_1(*v56);
                            v59 = __asm_addpd(__asm_mulpd(v50, v47), v55);
                            v60 = __asm_addpd(__asm_mulpd(v52, v47), v58);
                            __asm_movupd(*v54, v59);
                            __asm_movupd(*v56, v60);
                            v61 = v48 + 4;
                            v48 = v61;
                        }
                        // 0x22c
                        v30 = v61;
                        v21 = v62;
                        if (v8 == v62) {
                            goto lab_0x120;
                        } else {
                            goto lab_0x253;
                        }
                    }
                }
            }
        }
    }
  lab_0x40:
    // 0x40
    v6 = v7 + 1;
    v5 = v8 + 1;
    result = v42;
    if (v6 == (a1 & 0xffffffff)) {
        // break -> 0x2f4
        goto lab_0x2f4;
    }
    goto lab_0x51;
}
