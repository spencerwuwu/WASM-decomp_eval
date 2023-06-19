
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "gemm.h"
int64_t kernel_gemm(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x0
    int128_t v1; // 0x0
    int128_t v2 = v1;
    if ((int32_t)a1 < 1) {
        // 0x2d7
        int64_t result; // 0x0
        return result;
    }
    int64_t v3 = 0x100000000 * a3 >> 32; // 0xf
    int64_t v4 = a2 & 0xffffffff; // 0x28
    int64_t v5 = 8 * v4; // 0x2f
    int64_t result2 = a2 & 0xfffffffc; // 0x39
    int128_t v6 = __asm_unpcklpd(__asm_movapd(v2), v2); // 0x40
    int64_t v7 = a2; // 0x68
    int64_t v8 = 0; // 0x68
    int64_t v9; // 0x0
    int64_t v10; // 0x0
    int64_t v11; // 0x0
    uint64_t v12; // 0x0
    while (true) {
      lab_0x83:
        // 0x83
        v9 = v8;
        v11 = v7;
        v12 = 0x2260 * v9 + a4;
        int32_t v13 = v11; // 0x9d
        if (v13 < 1) {
            goto lab_0x108;
        } else {
            // 0xa1
            v10 = 0;
            if (v13 < 4) {
                goto lab_0xf0;
            } else {
                int64_t v14 = 0; // 0xd0
                int64_t v15 = 8 * v14; // 0xb0
                int128_t * v16 = (int128_t *)(v15 + v12); // 0xb0
                int128_t v17 = __asm_movupd_1(*v16); // 0xb0
                int128_t * v18 = (int128_t *)(v12 + 16 + v15); // 0xb6
                int128_t v19 = __asm_movupd_1(*v18); // 0xb6
                int128_t v20 = __asm_mulpd(v17, v6); // 0xbc
                int128_t v21 = __asm_mulpd(v19, v6); // 0xc0
                __asm_movupd(*v16, v20);
                __asm_movupd(*v18, v21);
                v14 += 4;
                while (v14 != result2) {
                    // 0xb0
                    v15 = 8 * v14;
                    v16 = (int128_t *)(v15 + v12);
                    v17 = __asm_movupd_1(*v16);
                    v18 = (int128_t *)(v12 + 16 + v15);
                    v19 = __asm_movupd_1(*v18);
                    v20 = __asm_mulpd(v17, v6);
                    v21 = __asm_mulpd(v19, v6);
                    __asm_movupd(*v16, v20);
                    __asm_movupd(*v18, v21);
                    v14 += 4;
                }
                // 0xd9
                v10 = result2;
                if (result2 == v4) {
                    goto lab_0x108;
                } else {
                    goto lab_0xf0;
                }
            }
        }
    }
  lab_0x2d7:
    // 0x2d7
    return result2;
  lab_0x140:;
    // 0x140
    int64_t v22; // 0x0
    int64_t v23 = v22 + 1; // 0x140
    int64_t v24; // 0x0
    v7 = v24;
    int64_t v25 = v24; // 0x146
    int64_t v26 = v23; // 0x146
    if (v23 == (v3 & 0xffffffff)) {
        // break -> 0x70
        goto lab_0x70;
    }
    goto lab_0x14c;
  lab_0x250:;
    // 0x250
    int64_t v34; // 0x0
    int64_t v51 = v34;
    int64_t v33; // 0x0
    int64_t v52 = v33;
    int64_t v53 = v52; // 0x257
    uint64_t v29; // 0x0
    uint64_t v31; // 0x0
    if ((a2 & 1) != 0) {
        int128_t v54 = __asm_mulsd(__asm_movsd(*(int64_t *)v31), v1); // 0x25d
        int64_t v55 = 8 * v52; // 0x261
        int128_t v56 = __asm_mulsd_2(v54, *(int64_t *)(v55 + v29)); // 0x261
        int64_t * v57 = (int64_t *)(v55 + v12); // 0x266
        *v57 = __asm_movsd_3(__asm_addsd(v56, *v57));
        v53 = v52 | 1;
    }
    // 0x279
    v24 = v51;
    if (-v4 != -1 - v52) {
        int64_t * v58 = (int64_t *)v31; // 0x290
        int64_t v59 = v53; // 0x2c9
        int128_t v60 = __asm_mulsd(__asm_movsd(*v58), v1); // 0x294
        int64_t v61 = 8 * v59; // 0x298
        int64_t v62 = v61 + v29;
        int128_t v63 = __asm_mulsd_2(v60, *(int64_t *)v62); // 0x298
        int64_t v64 = v61 + v12;
        int64_t * v65 = (int64_t *)v64; // 0x29e
        *v65 = __asm_movsd_3(__asm_addsd(v63, *v65));
        int128_t v66 = __asm_mulsd_2(__asm_mulsd(__asm_movsd(*v58), v1), *(int64_t *)(v62 + 8)); // 0x2b4
        int64_t * v67 = (int64_t *)(v64 + 8); // 0x2bb
        *v67 = __asm_movsd_3(__asm_addsd(v66, *v67));
        v59 += 2;
        v24 = v51;
        while (v59 != v4) {
            // 0x290
            v60 = __asm_mulsd(__asm_movsd(*v58), v1);
            v61 = 8 * v59;
            v62 = v61 + v29;
            v63 = __asm_mulsd_2(v60, *(int64_t *)v62);
            v64 = v61 + v12;
            v65 = (int64_t *)v64;
            *v65 = __asm_movsd_3(__asm_addsd(v63, *v65));
            v66 = __asm_mulsd_2(__asm_mulsd(__asm_movsd(*v58), v1), *(int64_t *)(v62 + 8));
            v67 = (int64_t *)(v64 + 8);
            *v67 = __asm_movsd_3(__asm_addsd(v66, *v67));
            v59 += 2;
            v24 = v51;
        }
    }
    goto lab_0x140;
  lab_0x108:
    // 0x108
    v7 = v11;
    if ((int32_t)v3 >= 1) {
        int64_t v32 = 0x2580 * v9; // 0x113
        uint64_t v36 = v12 + v5; // 0x121
        int64_t v35 = v32 | 8; // 0x12b
        int64_t v47 = v12 + 16;
        v25 = v11;
        v26 = 0;
        while (true) {
          lab_0x14c:
            // 0x14c
            v22 = v26;
            int64_t v27 = v25;
            int32_t v28 = v27; // 0x14c
            v24 = v27;
            if (v28 < 1) {
                goto lab_0x140;
            } else {
                // 0x150
                v29 = 0x2260 * v22 + a6;
                int64_t v30 = 8 * v22 + a5;
                v31 = v30 + v32;
                v33 = 0;
                v34 = v27;
                if (v28 >= 6) {
                    // 0x170
                    v33 = 0;
                    v34 = v4;
                    if (v12 < v30 + v35 == v31 < v36) {
                        goto lab_0x250;
                    } else {
                        // 0x1bd
                        if (v29 < v36 == v12 < v29 + v5) {
                            goto lab_0x250;
                        } else {
                            int128_t v37 = __asm_mulsd(__asm_movsd(*(int64_t *)v31), v1); // 0x1dd
                            int128_t v38 = __asm_unpcklpd(v37, v37); // 0x1e1
                            int64_t v39 = 0; // 0x1e7
                            int64_t v40 = 8 * v39; // 0x1f0
                            int64_t v41 = v40 + v29;
                            int128_t v42 = __asm_movupd_1(*(int128_t *)v41); // 0x1f0
                            int128_t v43 = __asm_movupd_1(*(int128_t *)(v41 + 16)); // 0x1f5
                            int128_t * v44 = (int128_t *)(v40 + v12); // 0x1fb
                            int128_t v45 = __asm_movupd_1(*v44); // 0x1fb
                            int128_t * v46 = (int128_t *)(v47 + v40); // 0x201
                            int128_t v48 = __asm_movupd_1(*v46); // 0x201
                            int128_t v49 = __asm_addpd(__asm_mulpd(v42, v38), v45); // 0x20b
                            int128_t v50 = __asm_addpd(__asm_mulpd(v43, v38), v48); // 0x213
                            __asm_movupd(*v44, v49);
                            __asm_movupd(*v46, v50);
                            v39 += 4;
                            while (v39 != result2) {
                                // 0x1f0
                                v40 = 8 * v39;
                                v41 = v40 + v29;
                                v42 = __asm_movupd_1(*(int128_t *)v41);
                                v43 = __asm_movupd_1(*(int128_t *)(v41 + 16));
                                v44 = (int128_t *)(v40 + v12);
                                v45 = __asm_movupd_1(*v44);
                                v46 = (int128_t *)(v47 + v40);
                                v48 = __asm_movupd_1(*v46);
                                v49 = __asm_addpd(__asm_mulpd(v42, v38), v45);
                                v50 = __asm_addpd(__asm_mulpd(v43, v38), v48);
                                __asm_movupd(*v44, v49);
                                __asm_movupd(*v46, v50);
                                v39 += 4;
                            }
                            // 0x22c
                            v24 = v4;
                            v33 = result2;
                            v34 = v4;
                            if (result2 == v4) {
                                goto lab_0x140;
                            } else {
                                goto lab_0x250;
                            }
                        }
                    }
                } else {
                    goto lab_0x250;
                }
            }
        }
    }
  lab_0x70:
    // 0x70
    v8 = v9 + 1;
    if (v8 == (a1 & 0xffffffff)) {
        // break -> 0x2d7
        goto lab_0x2d7;
    }
    goto lab_0x83;
  lab_0xf0:;
    int64_t * v68 = (int64_t *)(8 * v10 + v12); // 0xf0
    *v68 = __asm_movsd_3(__asm_mulsd(__asm_movsd(*v68), v2));
    int64_t v69 = v10 + 1; // 0x100
    int64_t v70 = v69; // 0x106
    while (v69 != v4) {
        // 0xf0
        v68 = (int64_t *)(8 * v70 + v12);
        *v68 = __asm_movsd_3(__asm_mulsd(__asm_movsd(*v68), v2));
        v69 = v70 + 1;
        v70 = v69;
    }
    goto lab_0x108;
}
