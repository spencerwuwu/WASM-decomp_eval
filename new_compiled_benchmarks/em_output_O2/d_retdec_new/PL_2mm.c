
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "PL_2mm.h"
int64_t kernel_2mm(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9) {
    // 0x500
    if ((int32_t)a1 < 1) {
        // 0x761
        int64_t result; // 0x500
        return result;
    }
    int64_t v1 = a1 & 0xffffffff; // 0x524
    uint32_t v2 = (int32_t)a2;
    uint32_t v3 = (int32_t)a3;
    int64_t v4 = 0;
    int128_t v5; // 0x500
    int128_t v6 = v5; // 0x553
    int64_t v7 = v1; // 0x553
    int64_t v8; // 0x500
    int64_t v9; // 0x500
    int64_t v10; // 0x500
    int64_t v11; // 0x56f
    int64_t v12; // 0x500
    int64_t v13; // 0x572
    int64_t * v14; // 0x572
    int64_t v15; // 0x560
    int128_t v16; // 0x582
    int128_t v17; // 0x500
    int64_t v18; // 0x500
    int128_t v19; // 0x61b
    int64_t v20; // 0x626
    int128_t v21; // 0x5b0
    int128_t v22; // 0x5c3
    int64_t v23; // 0x5cf
    int128_t v24; // 0x5d9
    int128_t v25; // 0x5ec
    int64_t v26; // 0x5f9
    int128_t v27; // 0x500
    int128_t v28; // 0x500
    int128_t v29; // 0x500
    int128_t v30; // 0x500
    int128_t v31; // 0x500
    if (v2 >= 1) {
        // 0x568
        v11 = 0x1c20 * v4 + a5;
        v12 = 0x2260 * v4 + a6;
        v15 = 0;
        v29 = v5;
        v13 = 8 * v15;
        v14 = (int64_t *)(v13 + v11);
        *v14 = 0;
        v27 = v29;
        v8 = v11;
        if (v3 >= 1) {
            // 0x57e
            v16 = __asm_xorpd(v29, v29);
            v30 = v16;
            v9 = 0;
            if (v3 != 1) {
                // 0x5a0
                v18 = v13 + a7;
                v26 = 0;
                v21 = __asm_mulsd(__asm_movsd(*(int64_t *)(8 * v26 + v12)), v17);
                v22 = __asm_addsd(__asm_mulsd_1(v21, *(int64_t *)(0x1c20 * v26 + v18)), v16);
                *v14 = __asm_movsd_2(v22);
                v23 = v26 | 1;
                v24 = __asm_mulsd(__asm_movsd(*(int64_t *)(8 * v23 + v12)), v17);
                v25 = __asm_addsd(__asm_mulsd_1(v24, *(int64_t *)(0x1c20 * v23 + v18)), v22);
                *v14 = __asm_movsd_2(v25);
                v26 += 2;
                v30 = v25;
                v9 = v26;
                while (v26 != (a3 & 0xfffffffe)) {
                    // 0x5a0
                    v21 = __asm_mulsd(__asm_movsd(*(int64_t *)(8 * v26 + v12)), v17);
                    v22 = __asm_addsd(__asm_mulsd_1(v21, *(int64_t *)(0x1c20 * v26 + v18)), v25);
                    *v14 = __asm_movsd_2(v22);
                    v23 = v26 | 1;
                    v24 = __asm_mulsd(__asm_movsd(*(int64_t *)(8 * v23 + v12)), v17);
                    v25 = __asm_addsd(__asm_mulsd_1(v24, *(int64_t *)(0x1c20 * v23 + v18)), v22);
                    *v14 = __asm_movsd_2(v25);
                    v26 += 2;
                    v30 = v25;
                    v9 = v26;
                }
            }
            // 0x602
            v10 = v9;
            v31 = v30;
            v27 = v31;
            v8 = v10;
            if ((a3 & 1) != 0) {
                // 0x60c
                v19 = __asm_mulsd(__asm_movsd(*(int64_t *)(8 * v10 + v12)), v17);
                v20 = 0x1c20 * v10 + a7;
                *v14 = __asm_movsd_2(__asm_addsd(__asm_mulsd_1(v19, *(int64_t *)(v20 + v13)), v31));
                v27 = v31;
                v8 = v20;
            }
        }
        // 0x560
        v28 = v27;
        v15++;
        v6 = v28;
        v7 = v8;
        while (v15 != (a2 & 0xffffffff)) {
            // 0x568
            v29 = v28;
            v13 = 8 * v15;
            v14 = (int64_t *)(v13 + v11);
            *v14 = 0;
            v27 = v29;
            v8 = v11;
            if (v3 >= 1) {
                // 0x57e
                v16 = __asm_xorpd(v29, v29);
                v30 = v16;
                v9 = 0;
                if (v3 != 1) {
                    // 0x5a0
                    v18 = v13 + a7;
                    v26 = 0;
                    v21 = __asm_mulsd(__asm_movsd(*(int64_t *)(8 * v26 + v12)), v17);
                    v22 = __asm_addsd(__asm_mulsd_1(v21, *(int64_t *)(0x1c20 * v26 + v18)), v16);
                    *v14 = __asm_movsd_2(v22);
                    v23 = v26 | 1;
                    v24 = __asm_mulsd(__asm_movsd(*(int64_t *)(8 * v23 + v12)), v17);
                    v25 = __asm_addsd(__asm_mulsd_1(v24, *(int64_t *)(0x1c20 * v23 + v18)), v22);
                    *v14 = __asm_movsd_2(v25);
                    v26 += 2;
                    v30 = v25;
                    v9 = v26;
                    while (v26 != (a3 & 0xfffffffe)) {
                        // 0x5a0
                        v21 = __asm_mulsd(__asm_movsd(*(int64_t *)(8 * v26 + v12)), v17);
                        v22 = __asm_addsd(__asm_mulsd_1(v21, *(int64_t *)(0x1c20 * v26 + v18)), v25);
                        *v14 = __asm_movsd_2(v22);
                        v23 = v26 | 1;
                        v24 = __asm_mulsd(__asm_movsd(*(int64_t *)(8 * v23 + v12)), v17);
                        v25 = __asm_addsd(__asm_mulsd_1(v24, *(int64_t *)(0x1c20 * v23 + v18)), v22);
                        *v14 = __asm_movsd_2(v25);
                        v26 += 2;
                        v30 = v25;
                        v9 = v26;
                    }
                }
                // 0x602
                v10 = v9;
                v31 = v30;
                v27 = v31;
                v8 = v10;
                if ((a3 & 1) != 0) {
                    // 0x60c
                    v19 = __asm_mulsd(__asm_movsd(*(int64_t *)(8 * v10 + v12)), v17);
                    v20 = 0x1c20 * v10 + a7;
                    *v14 = __asm_movsd_2(__asm_addsd(__asm_mulsd_1(v19, *(int64_t *)(v20 + v13)), v31));
                    v27 = v31;
                    v8 = v20;
                }
            }
            // 0x560
            v28 = v27;
            v15++;
            v6 = v28;
            v7 = v8;
        }
    }
    int64_t v32 = v7;
    int64_t v33 = v4 + 1; // 0x540
    while (v33 != v1) {
        // 0x54e
        v4 = v33;
        int128_t v34 = v6;
        v6 = v34;
        v7 = v32;
        if (v2 >= 1) {
            // 0x568
            v11 = 0x1c20 * v4 + a5;
            v12 = 0x2260 * v4 + a6;
            v15 = 0;
            v29 = v34;
            v13 = 8 * v15;
            v14 = (int64_t *)(v13 + v11);
            *v14 = 0;
            v27 = v29;
            v8 = v11;
            if (v3 >= 1) {
                // 0x57e
                v16 = __asm_xorpd(v29, v29);
                v30 = v16;
                v9 = 0;
                if (v3 != 1) {
                    // 0x5a0
                    v18 = v13 + a7;
                    v26 = 0;
                    v21 = __asm_mulsd(__asm_movsd(*(int64_t *)(8 * v26 + v12)), v17);
                    v22 = __asm_addsd(__asm_mulsd_1(v21, *(int64_t *)(0x1c20 * v26 + v18)), v16);
                    *v14 = __asm_movsd_2(v22);
                    v23 = v26 | 1;
                    v24 = __asm_mulsd(__asm_movsd(*(int64_t *)(8 * v23 + v12)), v17);
                    v25 = __asm_addsd(__asm_mulsd_1(v24, *(int64_t *)(0x1c20 * v23 + v18)), v22);
                    *v14 = __asm_movsd_2(v25);
                    v26 += 2;
                    v30 = v25;
                    v9 = v26;
                    while (v26 != (a3 & 0xfffffffe)) {
                        // 0x5a0
                        v21 = __asm_mulsd(__asm_movsd(*(int64_t *)(8 * v26 + v12)), v17);
                        v22 = __asm_addsd(__asm_mulsd_1(v21, *(int64_t *)(0x1c20 * v26 + v18)), v25);
                        *v14 = __asm_movsd_2(v22);
                        v23 = v26 | 1;
                        v24 = __asm_mulsd(__asm_movsd(*(int64_t *)(8 * v23 + v12)), v17);
                        v25 = __asm_addsd(__asm_mulsd_1(v24, *(int64_t *)(0x1c20 * v23 + v18)), v22);
                        *v14 = __asm_movsd_2(v25);
                        v26 += 2;
                        v30 = v25;
                        v9 = v26;
                    }
                }
                // 0x602
                v10 = v9;
                v31 = v30;
                v27 = v31;
                v8 = v10;
                if ((a3 & 1) != 0) {
                    // 0x60c
                    v19 = __asm_mulsd(__asm_movsd(*(int64_t *)(8 * v10 + v12)), v17);
                    v20 = 0x1c20 * v10 + a7;
                    *v14 = __asm_movsd_2(__asm_addsd(__asm_mulsd_1(v19, *(int64_t *)(v20 + v13)), v31));
                    v27 = v31;
                    v8 = v20;
                }
            }
            // 0x560
            v28 = v27;
            v15++;
            v6 = v28;
            v7 = v8;
            while (v15 != (a2 & 0xffffffff)) {
                // 0x568
                v29 = v28;
                v13 = 8 * v15;
                v14 = (int64_t *)(v13 + v11);
                *v14 = 0;
                v27 = v29;
                v8 = v11;
                if (v3 >= 1) {
                    // 0x57e
                    v16 = __asm_xorpd(v29, v29);
                    v30 = v16;
                    v9 = 0;
                    if (v3 != 1) {
                        // 0x5a0
                        v18 = v13 + a7;
                        v26 = 0;
                        v21 = __asm_mulsd(__asm_movsd(*(int64_t *)(8 * v26 + v12)), v17);
                        v22 = __asm_addsd(__asm_mulsd_1(v21, *(int64_t *)(0x1c20 * v26 + v18)), v16);
                        *v14 = __asm_movsd_2(v22);
                        v23 = v26 | 1;
                        v24 = __asm_mulsd(__asm_movsd(*(int64_t *)(8 * v23 + v12)), v17);
                        v25 = __asm_addsd(__asm_mulsd_1(v24, *(int64_t *)(0x1c20 * v23 + v18)), v22);
                        *v14 = __asm_movsd_2(v25);
                        v26 += 2;
                        v30 = v25;
                        v9 = v26;
                        while (v26 != (a3 & 0xfffffffe)) {
                            // 0x5a0
                            v21 = __asm_mulsd(__asm_movsd(*(int64_t *)(8 * v26 + v12)), v17);
                            v22 = __asm_addsd(__asm_mulsd_1(v21, *(int64_t *)(0x1c20 * v26 + v18)), v25);
                            *v14 = __asm_movsd_2(v22);
                            v23 = v26 | 1;
                            v24 = __asm_mulsd(__asm_movsd(*(int64_t *)(8 * v23 + v12)), v17);
                            v25 = __asm_addsd(__asm_mulsd_1(v24, *(int64_t *)(0x1c20 * v23 + v18)), v22);
                            *v14 = __asm_movsd_2(v25);
                            v26 += 2;
                            v30 = v25;
                            v9 = v26;
                        }
                    }
                    // 0x602
                    v10 = v9;
                    v31 = v30;
                    v27 = v31;
                    v8 = v10;
                    if ((a3 & 1) != 0) {
                        // 0x60c
                        v19 = __asm_mulsd(__asm_movsd(*(int64_t *)(8 * v10 + v12)), v17);
                        v20 = 0x1c20 * v10 + a7;
                        *v14 = __asm_movsd_2(__asm_addsd(__asm_mulsd_1(v19, *(int64_t *)(v20 + v13)), v31));
                        v27 = v31;
                        v8 = v20;
                    }
                }
                // 0x560
                v28 = v27;
                v15++;
                v6 = v28;
                v7 = v8;
            }
        }
        // 0x540
        v32 = v7;
        v33 = v4 + 1;
    }
    int64_t v35 = 0;
    int64_t v36 = v32; // 0x680
    int64_t v37; // 0x500
    int64_t v38; // 0x500
    int64_t v39; // 0x500
    int64_t v40; // 0x69f
    int64_t v41; // 0x500
    int64_t v42; // 0x6a2
    int64_t * v43; // 0x6a2
    int128_t v44; // 0x6a8
    int64_t v45; // 0x690
    int64_t v46; // 0x500
    int128_t v47; // 0x73e
    int64_t v48; // 0x74a
    int128_t v49; // 0x6da
    int128_t v50; // 0x6ef
    int64_t v51; // 0x6fb
    int128_t v52; // 0x6ff
    int128_t v53; // 0x715
    int64_t v54; // 0x722
    int128_t v55; // 0x500
    if ((int32_t)a4 >= 1) {
        // 0x698
        v40 = 0x2580 * v35 + a9;
        v41 = 0x1c20 * v35 + a5;
        v45 = 0;
        v42 = 8 * v45;
        v43 = (int64_t *)(v42 + v40);
        v44 = __asm_mulsd(__asm_movsd(*v43), v17);
        *v43 = __asm_movsd_2(v44);
        v37 = v40;
        if (v2 >= 1) {
            // 0x6b7
            v55 = v44;
            v38 = 0;
            if (v2 != 1) {
                // 0x6d0
                v46 = v42 + a8;
                v54 = 0;
                v49 = __asm_movsd(*(int64_t *)(8 * v54 + v41));
                v50 = __asm_addsd(__asm_mulsd_1(v49, *(int64_t *)(0x2580 * v54 + v46)), v44);
                *v43 = __asm_movsd_2(v50);
                v51 = v54 | 1;
                v52 = __asm_movsd(*(int64_t *)(8 * v51 + v41));
                v53 = __asm_addsd(__asm_mulsd_1(v52, *(int64_t *)(0x2580 * v51 + v46)), v50);
                *v43 = __asm_movsd_2(v53);
                v54 += 2;
                v55 = v53;
                v38 = v54;
                while (v54 != (a2 & 0xfffffffe)) {
                    // 0x6d0
                    v49 = __asm_movsd(*(int64_t *)(8 * v54 + v41));
                    v50 = __asm_addsd(__asm_mulsd_1(v49, *(int64_t *)(0x2580 * v54 + v46)), v53);
                    *v43 = __asm_movsd_2(v50);
                    v51 = v54 | 1;
                    v52 = __asm_movsd(*(int64_t *)(8 * v51 + v41));
                    v53 = __asm_addsd(__asm_mulsd_1(v52, *(int64_t *)(0x2580 * v51 + v46)), v50);
                    *v43 = __asm_movsd_2(v53);
                    v54 += 2;
                    v55 = v53;
                    v38 = v54;
                }
            }
            // 0x72b
            v39 = v38;
            v37 = v39;
            if ((a2 & 1) != 0) {
                // 0x734
                v47 = __asm_movsd(*(int64_t *)(8 * v39 + v41));
                v48 = 0x2580 * v39 + a8;
                *v43 = __asm_movsd_2(__asm_addsd(__asm_mulsd_1(v47, *(int64_t *)(v48 + v42)), v55));
                v37 = v48;
            }
        }
        // 0x690
        v45++;
        v36 = v37;
        while (v45 != (a4 & 0xffffffff)) {
            // 0x698
            v42 = 8 * v45;
            v43 = (int64_t *)(v42 + v40);
            v44 = __asm_mulsd(__asm_movsd(*v43), v17);
            *v43 = __asm_movsd_2(v44);
            v37 = v40;
            if (v2 >= 1) {
                // 0x6b7
                v55 = v44;
                v38 = 0;
                if (v2 != 1) {
                    // 0x6d0
                    v46 = v42 + a8;
                    v54 = 0;
                    v49 = __asm_movsd(*(int64_t *)(8 * v54 + v41));
                    v50 = __asm_addsd(__asm_mulsd_1(v49, *(int64_t *)(0x2580 * v54 + v46)), v44);
                    *v43 = __asm_movsd_2(v50);
                    v51 = v54 | 1;
                    v52 = __asm_movsd(*(int64_t *)(8 * v51 + v41));
                    v53 = __asm_addsd(__asm_mulsd_1(v52, *(int64_t *)(0x2580 * v51 + v46)), v50);
                    *v43 = __asm_movsd_2(v53);
                    v54 += 2;
                    v55 = v53;
                    v38 = v54;
                    while (v54 != (a2 & 0xfffffffe)) {
                        // 0x6d0
                        v49 = __asm_movsd(*(int64_t *)(8 * v54 + v41));
                        v50 = __asm_addsd(__asm_mulsd_1(v49, *(int64_t *)(0x2580 * v54 + v46)), v53);
                        *v43 = __asm_movsd_2(v50);
                        v51 = v54 | 1;
                        v52 = __asm_movsd(*(int64_t *)(8 * v51 + v41));
                        v53 = __asm_addsd(__asm_mulsd_1(v52, *(int64_t *)(0x2580 * v51 + v46)), v50);
                        *v43 = __asm_movsd_2(v53);
                        v54 += 2;
                        v55 = v53;
                        v38 = v54;
                    }
                }
                // 0x72b
                v39 = v38;
                v37 = v39;
                if ((a2 & 1) != 0) {
                    // 0x734
                    v47 = __asm_movsd(*(int64_t *)(8 * v39 + v41));
                    v48 = 0x2580 * v39 + a8;
                    *v43 = __asm_movsd_2(__asm_addsd(__asm_mulsd_1(v47, *(int64_t *)(v48 + v42)), v55));
                    v37 = v48;
                }
            }
            // 0x690
            v45++;
            v36 = v37;
        }
    }
    int64_t result2 = v36;
    int64_t v56 = v35 + 1; // 0x670
    while (v56 != v1) {
        // 0x67e
        v35 = v56;
        v36 = result2;
        if ((int32_t)a4 >= 1) {
            // 0x698
            v40 = 0x2580 * v35 + a9;
            v41 = 0x1c20 * v35 + a5;
            v45 = 0;
            v42 = 8 * v45;
            v43 = (int64_t *)(v42 + v40);
            v44 = __asm_mulsd(__asm_movsd(*v43), v17);
            *v43 = __asm_movsd_2(v44);
            v37 = v40;
            if (v2 >= 1) {
                // 0x6b7
                v55 = v44;
                v38 = 0;
                if (v2 != 1) {
                    // 0x6d0
                    v46 = v42 + a8;
                    v54 = 0;
                    v49 = __asm_movsd(*(int64_t *)(8 * v54 + v41));
                    v50 = __asm_addsd(__asm_mulsd_1(v49, *(int64_t *)(0x2580 * v54 + v46)), v44);
                    *v43 = __asm_movsd_2(v50);
                    v51 = v54 | 1;
                    v52 = __asm_movsd(*(int64_t *)(8 * v51 + v41));
                    v53 = __asm_addsd(__asm_mulsd_1(v52, *(int64_t *)(0x2580 * v51 + v46)), v50);
                    *v43 = __asm_movsd_2(v53);
                    v54 += 2;
                    v55 = v53;
                    v38 = v54;
                    while (v54 != (a2 & 0xfffffffe)) {
                        // 0x6d0
                        v49 = __asm_movsd(*(int64_t *)(8 * v54 + v41));
                        v50 = __asm_addsd(__asm_mulsd_1(v49, *(int64_t *)(0x2580 * v54 + v46)), v53);
                        *v43 = __asm_movsd_2(v50);
                        v51 = v54 | 1;
                        v52 = __asm_movsd(*(int64_t *)(8 * v51 + v41));
                        v53 = __asm_addsd(__asm_mulsd_1(v52, *(int64_t *)(0x2580 * v51 + v46)), v50);
                        *v43 = __asm_movsd_2(v53);
                        v54 += 2;
                        v55 = v53;
                        v38 = v54;
                    }
                }
                // 0x72b
                v39 = v38;
                v37 = v39;
                if ((a2 & 1) != 0) {
                    // 0x734
                    v47 = __asm_movsd(*(int64_t *)(8 * v39 + v41));
                    v48 = 0x2580 * v39 + a8;
                    *v43 = __asm_movsd_2(__asm_addsd(__asm_mulsd_1(v47, *(int64_t *)(v48 + v42)), v55));
                    v37 = v48;
                }
            }
            // 0x690
            v45++;
            v36 = v37;
            while (v45 != (a4 & 0xffffffff)) {
                // 0x698
                v42 = 8 * v45;
                v43 = (int64_t *)(v42 + v40);
                v44 = __asm_mulsd(__asm_movsd(*v43), v17);
                *v43 = __asm_movsd_2(v44);
                v37 = v40;
                if (v2 >= 1) {
                    // 0x6b7
                    v55 = v44;
                    v38 = 0;
                    if (v2 != 1) {
                        // 0x6d0
                        v46 = v42 + a8;
                        v54 = 0;
                        v49 = __asm_movsd(*(int64_t *)(8 * v54 + v41));
                        v50 = __asm_addsd(__asm_mulsd_1(v49, *(int64_t *)(0x2580 * v54 + v46)), v44);
                        *v43 = __asm_movsd_2(v50);
                        v51 = v54 | 1;
                        v52 = __asm_movsd(*(int64_t *)(8 * v51 + v41));
                        v53 = __asm_addsd(__asm_mulsd_1(v52, *(int64_t *)(0x2580 * v51 + v46)), v50);
                        *v43 = __asm_movsd_2(v53);
                        v54 += 2;
                        v55 = v53;
                        v38 = v54;
                        while (v54 != (a2 & 0xfffffffe)) {
                            // 0x6d0
                            v49 = __asm_movsd(*(int64_t *)(8 * v54 + v41));
                            v50 = __asm_addsd(__asm_mulsd_1(v49, *(int64_t *)(0x2580 * v54 + v46)), v53);
                            *v43 = __asm_movsd_2(v50);
                            v51 = v54 | 1;
                            v52 = __asm_movsd(*(int64_t *)(8 * v51 + v41));
                            v53 = __asm_addsd(__asm_mulsd_1(v52, *(int64_t *)(0x2580 * v51 + v46)), v50);
                            *v43 = __asm_movsd_2(v53);
                            v54 += 2;
                            v55 = v53;
                            v38 = v54;
                        }
                    }
                    // 0x72b
                    v39 = v38;
                    v37 = v39;
                    if ((a2 & 1) != 0) {
                        // 0x734
                        v47 = __asm_movsd(*(int64_t *)(8 * v39 + v41));
                        v48 = 0x2580 * v39 + a8;
                        *v43 = __asm_movsd_2(__asm_addsd(__asm_mulsd_1(v47, *(int64_t *)(v48 + v42)), v55));
                        v37 = v48;
                    }
                }
                // 0x690
                v45++;
                v36 = v37;
            }
        }
        // 0x670
        result2 = v36;
        v56 = v35 + 1;
    }
    // 0x761
    return result2;
}
