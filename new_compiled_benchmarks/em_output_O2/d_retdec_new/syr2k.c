
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "syr2k.h"
int64_t kernel_syr2k(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x0
    int128_t v1; // 0x0
    int128_t v2 = v1;
    int128_t v3 = v1;
    if ((int32_t)a1 < 1) {
        // 0x2e5
        int64_t result; // 0x0
        return result;
    }
    int64_t v4 = 0x100000000 * a2 >> 32; // 0xf
    int64_t result2 = a1 & 0xffffffff; // 0x1b
    int128_t v5 = __asm_unpcklpd(__asm_movapd(v2), v2); // 0x2b
    int128_t v6 = __asm_unpcklpd(__asm_movapd(v3), v3); // 0x33
    int64_t v7 = 0; // 0x44
    int64_t v8 = 1; // 0x44
    uint64_t v9; // 0x0
    int64_t v10; // 0x0
    int64_t v11; // 0x0
    uint64_t v12; // 0x6d
    while (true) {
      lab_0x66:
        // 0x66
        v9 = v8;
        v10 = v7;
        v12 = 0x2580 * v10 + a3;
        v11 = 0;
        if (v9 >= 4) {
            int64_t v13 = v9 & 0x7ffffffffffffffc; // 0x9d
            int64_t v14 = 0; // 0xa2
            int64_t v15 = 8 * v14 + v12;
            int128_t * v16 = (int128_t *)v15; // 0xb0
            int128_t v17 = __asm_movupd_2(*v16); // 0xb0
            int128_t * v18 = (int128_t *)(v15 + 16); // 0xb5
            int128_t v19 = __asm_movupd_2(*v18); // 0xb5
            int128_t v20 = __asm_mulpd(v17, v5); // 0xbb
            int128_t v21 = __asm_mulpd(v19, v5); // 0xbf
            __asm_movupd(*v16, v20);
            __asm_movupd(*v18, v21);
            v14 += 4;
            while (v14 != v13) {
                // 0xb0
                v15 = 8 * v14 + v12;
                v16 = (int128_t *)v15;
                v17 = __asm_movupd_2(*v16);
                v18 = (int128_t *)(v15 + 16);
                v19 = __asm_movupd_2(*v18);
                v20 = __asm_mulpd(v17, v5);
                v21 = __asm_mulpd(v19, v5);
                __asm_movupd(*v16, v20);
                __asm_movupd(*v18, v21);
                v14 += 4;
            }
            // 0xd7
            v11 = v13;
            if (v9 == v13) {
                goto lab_0xf6;
            } else {
                goto lab_0xe0;
            }
        } else {
            goto lab_0xe0;
        }
    }
  lab_0x2e5:
    // 0x2e5
    return result2;
  lab_0x2a0:;
    // 0x2a0
    int64_t v22; // 0x0
    int64_t v23 = 0x1f40 * v22; // 0x2a0
    uint64_t v24; // 0x0
    int128_t v25 = __asm_mulsd(__asm_movsd_1(*(int64_t *)(v23 + v24)), v3); // 0x2b0
    uint64_t v26; // 0x0
    int128_t v27 = __asm_mulsd(__asm_movsd_1(*(int64_t *)(v23 + v26)), v3); // 0x2bc
    int64_t v28; // 0x168
    int128_t v29 = __asm_mulsd_3(v27, *(int64_t *)v28); // 0x2c0
    int64_t v30; // 0x164
    int128_t v31 = __asm_addsd(__asm_mulsd_3(v25, *(int64_t *)v30), v29); // 0x2c8
    int64_t * v32 = (int64_t *)(8 * v22 + v12); // 0x2cc
    *v32 = __asm_movsd(__asm_addsd_4(v31, *v32));
    int64_t v33 = v22 + 1; // 0x2d8
    int64_t v34 = v33; // 0x2de
    while (v33 != v9) {
        // 0x2a0
        v23 = 0x1f40 * v34;
        v25 = __asm_mulsd(__asm_movsd_1(*(int64_t *)(v23 + v24)), v3);
        v27 = __asm_mulsd(__asm_movsd_1(*(int64_t *)(v23 + v26)), v3);
        v29 = __asm_mulsd_3(v27, *(int64_t *)v28);
        v31 = __asm_addsd(__asm_mulsd_3(v25, *(int64_t *)v30), v29);
        v32 = (int64_t *)(8 * v34 + v12);
        *v32 = __asm_movsd(__asm_addsd_4(v31, *v32));
        v33 = v34 + 1;
        v34 = v33;
    }
    goto lab_0x150;
  lab_0x150:;
    // 0x150
    int64_t v35; // 0x0
    int64_t v36 = v35 + 1; // 0x150
    v35 = v36;
    if (v36 == (v4 & 0xffffffff)) {
        // break -> 0x50
        goto lab_0x50;
    }
    goto lab_0x15c;
  lab_0xe0:;
    int64_t * v57 = (int64_t *)(8 * v11 + v12); // 0xe0
    *v57 = __asm_movsd(__asm_mulsd(__asm_movsd_1(*v57), v2));
    int64_t v58 = v11 + 1; // 0xee
    int64_t v59 = v58; // 0xf4
    while (v58 != v9) {
        // 0xe0
        v57 = (int64_t *)(8 * v59 + v12);
        *v57 = __asm_movsd(__asm_mulsd(__asm_movsd_1(*v57), v2));
        v58 = v59 + 1;
        v59 = v58;
    }
    goto lab_0xf6;
  lab_0xf6:
    if ((int32_t)v4 >= 1) {
        int64_t v38 = 0x1f40 * v10; // 0x10d
        uint64_t v42 = a3 + 8 + 0x2588 * v10; // 0x11c
        int64_t v41 = v38 | 8; // 0x125
        int64_t v56 = v9 & 0x7ffffffffffffffe; // 0x13d
        v35 = 0;
        while (true) {
          lab_0x15c:;
            int64_t v37 = 8 * v35; // 0x164
            v26 = v37 + a5;
            v30 = v26 + v38;
            v24 = v37 + a4;
            v28 = v24 + v38;
            v22 = 0;
            if (v9 >= 8) {
                int64_t v39 = v37 + v38; // 0x180
                int64_t v40 = v37 + v41; // 0x192
                v22 = 0;
                if (v12 < v40 + a4 == v39 + a4 < v42) {
                    goto lab_0x2a0;
                } else {
                    // 0x1e1
                    v22 = 0;
                    if (v24 < v42 == v12 < v40 + a4) {
                        goto lab_0x2a0;
                    } else {
                        // 0x1ea
                        if (v26 < v42 == v12 < v40 + a5) {
                            goto lab_0x2a0;
                        } else {
                            // 0x1f3
                            v22 = 0;
                            if (v12 < v40 + a5 == v39 + a5 < v42) {
                                goto lab_0x2a0;
                            } else {
                                int128_t v43 = __asm_movsd_1(*(int64_t *)v30); // 0x20c
                                int128_t v44 = __asm_unpcklpd(v43, v43); // 0x210
                                int128_t v45 = __asm_movsd_1(*(int64_t *)v28); // 0x214
                                int128_t v46 = __asm_unpcklpd(v45, v45); // 0x218
                                int64_t v47 = 0; // 0x21f
                                int64_t v48 = 0x1f40 * v47; // 0x227
                                int64_t v49 = 0x1f40 * (v47 | 1); // 0x232
                                int128_t v50 = __asm_movsd_1(*(int64_t *)(v48 + v24)); // 0x23d
                                int128_t v51 = __asm_mulpd(__asm_mulpd(__asm_movhpd(v50, *(int64_t *)(v49 + v24)), v6), v44); // 0x24d
                                int128_t v52 = __asm_movsd_1(*(int64_t *)(v48 + v26)); // 0x257
                                int128_t v53 = __asm_mulpd(__asm_movhpd(v52, *(int64_t *)(v49 + v26)), v6); // 0x261
                                int128_t v54 = __asm_addpd(__asm_mulpd(v53, v46), v51); // 0x269
                                int128_t * v55 = (int128_t *)(8 * v47 + v12); // 0x26d
                                __asm_movupd(*v55, __asm_addpd(__asm_movupd_2(*v55), v54));
                                v47 += 2;
                                while (v47 != v56) {
                                    // 0x220
                                    v48 = 0x1f40 * v47;
                                    v49 = 0x1f40 * (v47 | 1);
                                    v50 = __asm_movsd_1(*(int64_t *)(v48 + v24));
                                    v51 = __asm_mulpd(__asm_mulpd(__asm_movhpd(v50, *(int64_t *)(v49 + v24)), v6), v44);
                                    v52 = __asm_movsd_1(*(int64_t *)(v48 + v26));
                                    v53 = __asm_mulpd(__asm_movhpd(v52, *(int64_t *)(v49 + v26)), v6);
                                    v54 = __asm_addpd(__asm_mulpd(v53, v46), v51);
                                    v55 = (int128_t *)(8 * v47 + v12);
                                    __asm_movupd(*v55, __asm_addpd(__asm_movupd_2(*v55), v54));
                                    v47 += 2;
                                }
                                // 0x286
                                v22 = v56;
                                if (v9 != v56) {
                                    goto lab_0x2a0;
                                } else {
                                    goto lab_0x150;
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x2a0;
            }
        }
    }
  lab_0x50:
    // 0x50
    v7 = v10 + 1;
    v8 = v9 + 1;
    if (v7 == result2) {
        // break -> 0x2e5
        goto lab_0x2e5;
    }
    goto lab_0x66;
}
