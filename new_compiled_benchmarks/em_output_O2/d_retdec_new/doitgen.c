
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "doitgen.h"
int64_t kernel_doitgen(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    if ((int32_t)a1 < 1) {
        // 0x297
        int64_t result; // 0x0
        return result;
    }
    int64_t v1 = 0x100000000 * a2 >> 32; // 0xa
    int64_t result2 = a1 & 0xffffffff; // 0x16
    int64_t v2 = a3 & 0xffffffff; // 0x26
    int64_t v3 = a3 & 0xfffffffc; // 0x33
    int64_t v4 = a3 & 3; // 0x39
    int32_t v5 = a3;
    int64_t v6 = 0; // 0x49
    int64_t v7; // 0x0
    int64_t v8; // 0x0
    int64_t v9; // 0x0
    int64_t v10; // 0x0
    int128_t v11; // 0x0
    int128_t v12; // 0x0
    int128_t v13; // 0x0
    int128_t v14; // 0x0
    while (true) {
        // 0x6b
        int128_t v15; // 0x0
        int128_t v16 = v15;
        int64_t v17 = v6;
        v11 = v16;
        if ((int32_t)v1 >= 1) {
            int64_t v18 = 0x2bc00 * v17 + a4;
            int64_t v19 = v18 - a6;
            v13 = v16;
            v7 = 0;
            while (true) {
              lab_0x9a:
                // 0x9a
                v8 = v7;
                int128_t v20 = v13;
                v12 = v20;
                if (v5 < 1) {
                    goto lab_0x90;
                } else {
                    int64_t v21 = 1280 * v8; // 0xa9
                    v10 = v21 + v18;
                    int64_t v22 = 0; // 0xbc
                    int128_t v23 = v20;
                    int64_t v24 = 8 * v22; // 0xcc
                    int64_t * v25 = (int64_t *)(v24 + a6); // 0xcc
                    *v25 = 0;
                    int128_t v26 = __asm_xorpd(v23, v23); // 0xd4
                    int128_t v27 = v26; // 0xe6
                    int64_t v28 = 0; // 0xe6
                    int64_t v29; // 0x0
                    int128_t v30; // 0xf7
                    int128_t v31; // 0x115
                    int64_t v32; // 0x122
                    int128_t v33; // 0x126
                    int128_t v34; // 0x13d
                    int64_t v35; // 0x14b
                    if (v5 != 1) {
                        // 0xf0
                        v29 = v24 + a5;
                        v35 = 0;
                        v30 = __asm_movsd(*(int64_t *)(8 * v35 + v10));
                        v31 = __asm_addsd(__asm_mulsd(v30, *(int64_t *)(1280 * v35 + v29)), v26);
                        *v25 = __asm_movsd_1(v31);
                        v32 = v35 | 1;
                        v33 = __asm_movsd(*(int64_t *)(8 * v32 + v10));
                        v34 = __asm_addsd(__asm_mulsd(v33, *(int64_t *)(1280 * v32 + v29)), v31);
                        *v25 = __asm_movsd_1(v34);
                        v35 += 2;
                        v27 = v34;
                        v28 = v35;
                        while (v35 != (a3 & 0xfffffffe)) {
                            // 0xf0
                            v30 = __asm_movsd(*(int64_t *)(8 * v35 + v10));
                            v31 = __asm_addsd(__asm_mulsd(v30, *(int64_t *)(1280 * v35 + v29)), v34);
                            *v25 = __asm_movsd_1(v31);
                            v32 = v35 | 1;
                            v33 = __asm_movsd(*(int64_t *)(8 * v32 + v10));
                            v34 = __asm_addsd(__asm_mulsd(v33, *(int64_t *)(1280 * v32 + v29)), v31);
                            *v25 = __asm_movsd_1(v34);
                            v35 += 2;
                            v27 = v34;
                            v28 = v35;
                        }
                    }
                    int128_t v36 = v27;
                    int128_t v37; // 0x165
                    int128_t v38; // 0x17d
                    if ((a3 & 1) != 0) {
                        // 0x15e
                        v37 = __asm_movsd(*(int64_t *)(8 * v28 + v10));
                        v38 = __asm_mulsd(v37, *(int64_t *)(v24 + a5 + 1280 * v28));
                        *v25 = __asm_movsd_1(__asm_addsd(v38, v36));
                    }
                    // 0xc0
                    v22++;
                    while (v22 != v2) {
                        // 0xcc
                        v23 = v36;
                        v24 = 8 * v22;
                        v25 = (int64_t *)(v24 + a6);
                        *v25 = 0;
                        v26 = __asm_xorpd(v23, v23);
                        v27 = v26;
                        v28 = 0;
                        if (v5 != 1) {
                            // 0xf0
                            v29 = v24 + a5;
                            v35 = 0;
                            v30 = __asm_movsd(*(int64_t *)(8 * v35 + v10));
                            v31 = __asm_addsd(__asm_mulsd(v30, *(int64_t *)(1280 * v35 + v29)), v26);
                            *v25 = __asm_movsd_1(v31);
                            v32 = v35 | 1;
                            v33 = __asm_movsd(*(int64_t *)(8 * v32 + v10));
                            v34 = __asm_addsd(__asm_mulsd(v33, *(int64_t *)(1280 * v32 + v29)), v31);
                            *v25 = __asm_movsd_1(v34);
                            v35 += 2;
                            v27 = v34;
                            v28 = v35;
                            while (v35 != (a3 & 0xfffffffe)) {
                                // 0xf0
                                v30 = __asm_movsd(*(int64_t *)(8 * v35 + v10));
                                v31 = __asm_addsd(__asm_mulsd(v30, *(int64_t *)(1280 * v35 + v29)), v34);
                                *v25 = __asm_movsd_1(v31);
                                v32 = v35 | 1;
                                v33 = __asm_movsd(*(int64_t *)(8 * v32 + v10));
                                v34 = __asm_addsd(__asm_mulsd(v33, *(int64_t *)(1280 * v32 + v29)), v31);
                                *v25 = __asm_movsd_1(v34);
                                v35 += 2;
                                v27 = v34;
                                v28 = v35;
                            }
                        }
                        // 0x154
                        v36 = v27;
                        if ((a3 & 1) != 0) {
                            // 0x15e
                            v37 = __asm_movsd(*(int64_t *)(8 * v28 + v10));
                            v38 = __asm_mulsd(v37, *(int64_t *)(v24 + a5 + 1280 * v28));
                            *v25 = __asm_movsd_1(__asm_addsd(v38, v36));
                        }
                        // 0xc0
                        v22++;
                    }
                    int64_t v39 = 0; // 0x1b0
                    v14 = v36;
                    v9 = 0;
                    if (v5 < 6 || v19 + v21 < 32) {
                        goto lab_0x208;
                    } else {
                        int64_t v40 = 8 * v39; // 0x1d0
                        int64_t v41 = v40 + a6;
                        int128_t v42 = __asm_movupd_4(*(int128_t *)v41); // 0x1d0
                        int128_t v43 = __asm_movupd_4(*(int128_t *)(v41 + 16)); // 0x1d6
                        int64_t v44 = v40 + v10;
                        __asm_movupd(*(int128_t *)v44, v42);
                        __asm_movupd(*(int128_t *)(v44 + 16), v43);
                        int64_t v45 = v39 + 4; // 0x1ef
                        v39 = v45;
                        while (v45 != v3) {
                            // 0x1d0
                            v40 = 8 * v39;
                            v41 = v40 + a6;
                            v42 = __asm_movupd_4(*(int128_t *)v41);
                            v43 = __asm_movupd_4(*(int128_t *)(v41 + 16));
                            v44 = v40 + v10;
                            __asm_movupd(*(int128_t *)v44, v42);
                            __asm_movupd(*(int128_t *)(v44 + 16), v43);
                            v45 = v39 + 4;
                            v39 = v45;
                        }
                        // 0x1f8
                        v12 = v42;
                        v14 = v42;
                        v9 = v3;
                        if (v3 == v2) {
                            goto lab_0x90;
                        } else {
                            goto lab_0x208;
                        }
                    }
                }
            }
        }
      lab_0x50:
        // 0x50
        v6 = v17 + 1;
        v15 = v11;
        if (v6 == result2) {
            // break -> 0x297
            break;
        }
    }
    // 0x297
    return result2;
  lab_0x90:;
    int64_t v46 = v8 + 1; // 0x90
    v11 = v12;
    v13 = v12;
    v7 = v46;
    if (v46 == (v1 & 0xffffffff)) {
        // break -> 0x50
        goto lab_0x50;
    }
    goto lab_0x9a;
  lab_0x208:;
    int64_t v47 = v9; // 0x214
    int128_t v48 = v14; // 0x214
    int64_t v49 = v9; // 0x214
    if (v4 != 0) {
        int64_t v50 = 8 * v47; // 0x220
        int128_t v51 = __asm_movsd(*(int64_t *)(v50 + a6)); // 0x220
        *(int64_t *)(v50 + v10) = __asm_movsd_1(v51);
        int64_t v52 = v47 + 1; // 0x234
        int64_t v53 = 1; // 0x237
        v47 = v52;
        int64_t v54 = v53; // 0x23d
        v48 = v51;
        v49 = v52;
        while (v53 != v4) {
            // 0x220
            v50 = 8 * v47;
            v51 = __asm_movsd(*(int64_t *)(v50 + a6));
            *(int64_t *)(v50 + v10) = __asm_movsd_1(v51);
            v52 = v47 + 1;
            v53 = v54 + 1;
            v47 = v52;
            v54 = v53;
            v48 = v51;
            v49 = v52;
        }
    }
    // 0x23f
    v12 = v48;
    int64_t v55 = v49; // 0x243
    if (v2 + -1 - v9 >= 3) {
        int64_t v56 = 8 * v55; // 0x250
        int64_t v57 = v56 + a6;
        int64_t v58 = __asm_movsd_1(__asm_movsd(*(int64_t *)v57)); // 0x25d
        int64_t v59 = v56 + v10;
        *(int64_t *)v59 = v58;
        *(int64_t *)(v59 + 8) = __asm_movsd_1(__asm_movsd(*(int64_t *)(v57 + 8)));
        *(int64_t *)(v59 + 16) = __asm_movsd_1(__asm_movsd(*(int64_t *)(v57 + 16)));
        int128_t v60 = __asm_movsd(*(int64_t *)(v57 + 24)); // 0x27c
        *(int64_t *)(v59 + 24) = __asm_movsd_1(v60);
        int64_t v61 = v55 + 4; // 0x289
        v12 = v60;
        v55 = v61;
        while (v61 != v2) {
            // 0x250
            v56 = 8 * v55;
            v57 = v56 + a6;
            v58 = __asm_movsd_1(__asm_movsd(*(int64_t *)v57));
            v59 = v56 + v10;
            *(int64_t *)v59 = v58;
            *(int64_t *)(v59 + 8) = __asm_movsd_1(__asm_movsd(*(int64_t *)(v57 + 8)));
            *(int64_t *)(v59 + 16) = __asm_movsd_1(__asm_movsd(*(int64_t *)(v57 + 16)));
            v60 = __asm_movsd(*(int64_t *)(v57 + 24));
            *(int64_t *)(v59 + 24) = __asm_movsd_1(v60);
            v61 = v55 + 4;
            v12 = v60;
            v55 = v61;
        }
    }
    goto lab_0x90;
}
