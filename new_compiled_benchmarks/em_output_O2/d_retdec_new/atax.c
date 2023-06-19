
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "atax.h"
int64_t kernel_atax(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5, int64_t a6) {
    int64_t v1 = a2 & 0xffffffff; // 0x26a
    uint32_t v2 = (int32_t)a2; // 0x26f
    int64_t v3 = a1; // 0x271
    int64_t set_mem; // 0x250
    if (v2 >= 1) {
        // 0x273
        set_mem = memset(a5, 0, 8 * v1);
        v3 = a1 & 0xffffffff;
    }
    // 0x28d
    if ((int32_t)v3 < 1) {
        // 0x4d1
        return set_mem;
    }
    int64_t result = v3 & 0xffffffff; // 0x295
    int64_t v4 = 8 * v1; // 0x297
    uint64_t v5 = v4 + a5; // 0x29f
    int64_t v6 = a2 & 0xfffffffc; // 0x2b1
    int64_t v7 = 0; // 0x2cf
    int64_t v8; // 0x250
    int64_t v9; // 0x250
    int64_t * v10; // 0x2ec
    uint64_t v11; // 0x250
    int128_t v12; // 0x250
    int128_t v13; // 0x250
    int128_t v14; // 0x250
    while (true) {
      lab_0x2ec:
        // 0x2ec
        v8 = v7;
        int128_t v15 = v13;
        uint64_t v16 = 8 * v8 + a6; // 0x2ec
        v10 = (int64_t *)v16;
        *v10 = 0;
        v12 = v15;
        if (v2 < 1) {
            goto lab_0x2e0;
        } else {
            // 0x2f8
            v11 = 0x41a0 * v8 + a3;
            int128_t v17 = __asm_xorpd(v15, v15); // 0x303
            int128_t v18 = v17; // 0x314
            int64_t v19 = 0; // 0x314
            int128_t v20 = v17; // 0x314
            int64_t v21 = 0; // 0x314
            if (v2 != 1) {
                int64_t v22 = 8 * v19; // 0x320
                int128_t v23 = __asm_movsd(*(int64_t *)(v22 + v11)); // 0x320
                int128_t v24 = __asm_addsd(__asm_mulsd(v23, *(int64_t *)(v22 + a4)), v18); // 0x334
                *v10 = __asm_movsd_1(v24);
                int64_t v25 = v22 | 8; // 0x33e
                int128_t v26 = __asm_movsd(*(int64_t *)(v25 + v11)); // 0x342
                int128_t v27 = __asm_addsd(__asm_mulsd(v26, *(int64_t *)(v25 + a4)), v24); // 0x34e
                *v10 = __asm_movsd_1(v27);
                int64_t v28 = v19 + 2; // 0x358
                v18 = v27;
                v19 = v28;
                v20 = v27;
                v21 = v28;
                while (v28 != (a2 & 0xfffffffe)) {
                    // 0x320
                    v22 = 8 * v19;
                    v23 = __asm_movsd(*(int64_t *)(v22 + v11));
                    v24 = __asm_addsd(__asm_mulsd(v23, *(int64_t *)(v22 + a4)), v18);
                    *v10 = __asm_movsd_1(v24);
                    v25 = v22 | 8;
                    v26 = __asm_movsd(*(int64_t *)(v25 + v11));
                    v27 = __asm_addsd(__asm_mulsd(v26, *(int64_t *)(v25 + a4)), v24);
                    *v10 = __asm_movsd_1(v27);
                    v28 = v19 + 2;
                    v18 = v27;
                    v19 = v28;
                    v20 = v27;
                    v21 = v28;
                }
            }
            int128_t v29 = v20;
            if ((a2 & 1) != 0) {
                int64_t v30 = 8 * v21; // 0x36b
                int128_t v31 = __asm_mulsd(__asm_movsd(*(int64_t *)(v30 + v11)), *(int64_t *)(v30 + a4)); // 0x371
                *v10 = __asm_movsd_1(__asm_addsd(v31, v29));
            }
            // 0x389
            v14 = v29;
            v9 = 0;
            if (v2 >= 8) {
                // 0x395
                v14 = v29;
                v9 = 0;
                if (v11 < v5 == v11 + v4 > a5) {
                    goto lab_0x450;
                } else {
                    // 0x3cd
                    v14 = v29;
                    v9 = 0;
                    if (v16 < v5 == v16 + 8 > a5) {
                        goto lab_0x450;
                    } else {
                        int128_t v32 = __asm_movsd(*v10); // 0x3df
                        int128_t v33 = __asm_unpcklpd(v32, v32); // 0x3e5
                        int64_t v34 = 0; // 0x3eb
                        int64_t v35 = 8 * v34; // 0x3f0
                        int64_t v36 = v35 + a5;
                        int128_t * v37 = (int128_t *)v36; // 0x3f0
                        int128_t v38 = __asm_movupd_2(*v37); // 0x3f0
                        int128_t * v39 = (int128_t *)(v36 + 16); // 0x3f6
                        int128_t v40 = __asm_movupd_2(*v39); // 0x3f6
                        int64_t v41 = v35 + v11;
                        int128_t v42 = __asm_movupd_2(*(int128_t *)v41); // 0x3fd
                        int128_t v43 = __asm_movupd_2(*(int128_t *)(v41 + 16)); // 0x403
                        int128_t v44 = __asm_addpd(__asm_mulpd(v42, v33), v38); // 0x40e
                        int128_t v45 = __asm_addpd(__asm_mulpd(v43, v33), v40); // 0x416
                        __asm_movupd(*v37, v44);
                        __asm_movupd(*v39, v45);
                        v34 += 4;
                        while (v34 != v6) {
                            // 0x3f0
                            v35 = 8 * v34;
                            v36 = v35 + a5;
                            v37 = (int128_t *)v36;
                            v38 = __asm_movupd_2(*v37);
                            v39 = (int128_t *)(v36 + 16);
                            v40 = __asm_movupd_2(*v39);
                            v41 = v35 + v11;
                            v42 = __asm_movupd_2(*(int128_t *)v41);
                            v43 = __asm_movupd_2(*(int128_t *)(v41 + 16));
                            v44 = __asm_addpd(__asm_mulpd(v42, v33), v38);
                            v45 = __asm_addpd(__asm_mulpd(v43, v33), v40);
                            __asm_movupd(*v37, v44);
                            __asm_movupd(*v39, v45);
                            v34 += 4;
                        }
                        // 0x430
                        v12 = v33;
                        v14 = v33;
                        v9 = v6;
                        if (v6 == v1) {
                            goto lab_0x2e0;
                        } else {
                            goto lab_0x450;
                        }
                    }
                }
            } else {
                goto lab_0x450;
            }
        }
    }
    // 0x4d1
    return result;
  lab_0x2e0:
    // 0x2e0
    v7 = v8 + 1;
    v13 = v12;
    if (v7 == result) {
        return result;
    }
    goto lab_0x2ec;
  lab_0x450:;
    int64_t v46 = v9;
    int128_t v47 = v14; // 0x457
    int64_t v48 = v46; // 0x457
    if ((a2 & 1) != 0) {
        int64_t v49 = 8 * v46; // 0x459
        int128_t v50 = __asm_mulsd(__asm_movsd(*(int64_t *)(v49 + v11)), *v10); // 0x45f
        int64_t * v51 = (int64_t *)(v49 + a5); // 0x465
        int128_t v52 = __asm_addsd_3(v50, *v51); // 0x465
        *v51 = __asm_movsd_1(v52);
        v47 = v52;
        v48 = v46 | 1;
    }
    // 0x478
    v12 = v47;
    int64_t v53 = v48; // 0x480
    if (-((0x100000000 * a2)) >> 32 != -1 - v46) {
        int64_t v54 = 8 * v53; // 0x490
        int64_t v55 = v54 + v11;
        int128_t v56 = __asm_mulsd(__asm_movsd(*(int64_t *)v55), *v10); // 0x496
        int64_t v57 = v54 + a5;
        int64_t * v58 = (int64_t *)v57; // 0x49c
        *v58 = __asm_movsd_1(__asm_addsd_3(v56, *v58));
        int128_t v59 = __asm_mulsd(__asm_movsd(*(int64_t *)(v55 + 8)), *v10); // 0x4af
        int64_t * v60 = (int64_t *)(v57 + 8); // 0x4b5
        int128_t v61 = __asm_addsd_3(v59, *v60); // 0x4b5
        *v60 = __asm_movsd_1(v61);
        int64_t v62 = v53 + 2; // 0x4c3
        v12 = v61;
        v53 = v62;
        while (v62 != v1) {
            // 0x490
            v54 = 8 * v53;
            v55 = v54 + v11;
            v56 = __asm_mulsd(__asm_movsd(*(int64_t *)v55), *v10);
            v57 = v54 + a5;
            v58 = (int64_t *)v57;
            *v58 = __asm_movsd_1(__asm_addsd_3(v56, *v58));
            v59 = __asm_mulsd(__asm_movsd(*(int64_t *)(v55 + 8)), *v10);
            v60 = (int64_t *)(v57 + 8);
            v61 = __asm_addsd_3(v59, *v60);
            *v60 = __asm_movsd_1(v61);
            v62 = v53 + 2;
            v12 = v61;
            v53 = v62;
        }
    }
    goto lab_0x2e0;
}
