
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>
#include <math.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "correlation.h"
int64_t kernel_correlation(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = 0x100000000 * a1;
    int64_t v2 = v1 >> 32; // 0x8
    int64_t v3 = 0x100000000 * a2 >> 32; // 0xb
    int128_t v4; // 0x0
    int64_t v5 = __asm_movsd_1(v4); // 0xe
    int128_t v6 = __asm_movsd(0x3fb999999999999a); // 0x23
    int64_t v7 = __asm_movsd_1(v6); // 0x2b
    int32_t v8 = v2; // 0x3a
    int32_t v9 = v3;
    if (v8 > 0) {
        int64_t v10 = v3 & 0xffffffff;
        int64_t v11 = v2 & 0xffffffff;
        int64_t v12 = 0;
        int128_t v13 = v6;
        int64_t v14 = __asm_movsd_1(__asm_xorps(v13, v13)); // 0x4e
        int64_t v15 = 8 * v12; // 0x4e
        int64_t * v16 = (int64_t *)(v15 + a5); // 0x4e
        *v16 = v14;
        int64_t v17; // 0x0
        int128_t v18; // 0x7c
        if (v9 > 0) {
            // 0x66
            v17 = 0;
            v18 = __asm_movsd(*(int64_t *)(v15 + a3 + 0x2580 * v17));
            *v16 = __asm_movsd_1(__asm_addsd_2(v18, *v16));
            v17++;
            while (v17 != v10) {
                // 0x66
                v18 = __asm_movsd(*(int64_t *)(v15 + a3 + 0x2580 * v17));
                *v16 = __asm_movsd_1(__asm_addsd_2(v18, *v16));
                v17++;
            }
        }
        int128_t v19 = __asm_divsd(__asm_movsd(*v16), __asm_movsd(v5)); // 0xb3
        *v16 = __asm_movsd_1(v19);
        v12++;
        int64_t v20 = 0; // 0x3d
        while (v12 != v11) {
            // 0x43
            v13 = v19;
            v14 = __asm_movsd_1(__asm_xorps(v13, v13));
            v15 = 8 * v12;
            v16 = (int64_t *)(v15 + a5);
            *v16 = v14;
            if (v9 > 0) {
                // 0x66
                v17 = 0;
                v18 = __asm_movsd(*(int64_t *)(v15 + a3 + 0x2580 * v17));
                *v16 = __asm_movsd_1(__asm_addsd_2(v18, *v16));
                v17++;
                while (v17 != v10) {
                    // 0x66
                    v18 = __asm_movsd(*(int64_t *)(v15 + a3 + 0x2580 * v17));
                    *v16 = __asm_movsd_1(__asm_addsd_2(v18, *v16));
                    v17++;
                }
            }
            // 0xa1
            v19 = __asm_divsd(__asm_movsd(*v16), __asm_movsd(v5));
            *v16 = __asm_movsd_1(v19);
            v12++;
            v20 = 0;
        }
        int128_t v21 = v19;
        int64_t v22 = __asm_movsd_1(__asm_xorps(v21, v21)); // 0xe8
        int64_t v23 = 8 * v20; // 0xe8
        int64_t * v24 = (int64_t *)(v23 + a6); // 0xe8
        *v24 = v22;
        int32_t v25 = 0; // 0xfa
        int64_t v26; // 0x0
        int64_t * v27; // 0x0
        int64_t * v28; // 0x116
        int128_t v29; // 0x123
        int128_t v30; // 0x14b
        if (v9 > 0) {
            // 0x100
            v27 = (int64_t *)(v23 + a5);
            v26 = 0;
            v28 = (int64_t *)(v23 + a3 + 0x2580 * v26);
            v29 = __asm_subsd(__asm_movsd(*v28), *v27);
            v30 = __asm_subsd(__asm_movsd(*v28), *v27);
            *v24 = __asm_movsd_1(__asm_addsd(__asm_mulsd(v29, v30), __asm_movsd(*v24)));
            v26++;
            v25 = v9;
            while (v26 != v10) {
                // 0x100
                v28 = (int64_t *)(v23 + a3 + 0x2580 * v26);
                v29 = __asm_subsd(__asm_movsd(*v28), *v27);
                v30 = __asm_subsd(__asm_movsd(*v28), *v27);
                *v24 = __asm_movsd_1(__asm_addsd(__asm_mulsd(v29, v30), __asm_movsd(*v24)));
                v26++;
                v25 = v9;
            }
        }
        int64_t v31 = __asm_movsd_1(__asm_divsd(__asm_movsd(*v24), __asm_movsd(v5))); // 0x18e
        *v24 = v31;
        int128_t v32 = __asm_movsd(v31); // 0x19b
        sqrt(v32);
        int64_t v33 = __asm_movsd_1(v32); // 0x1ad
        *v24 = v33;
        __asm_ucomisd(__asm_movsd(v7), __asm_movsd(v33));
        int64_t v34; // 0x0
        if (v25 < v9) {
            // 0x1e0
            v34 = __asm_movsd_1(__asm_movsd(*v24));
        } else {
            // 0x1ce
            v34 = __asm_movsd_1(__asm_movsd(0x3ff0000000000000));
        }
        int128_t v35 = __asm_movsd(v34); // 0x1f2
        *v24 = __asm_movsd_1(v35);
        int64_t v36 = v20 + 1;
        v20 = v36;
        while (v36 != v11) {
            // 0xdd
            v21 = v35;
            v22 = __asm_movsd_1(__asm_xorps(v21, v21));
            v23 = 8 * v20;
            v24 = (int64_t *)(v23 + a6);
            *v24 = v22;
            v25 = 0;
            if (v9 > 0) {
                // 0x100
                v27 = (int64_t *)(v23 + a5);
                v26 = 0;
                v28 = (int64_t *)(v23 + a3 + 0x2580 * v26);
                v29 = __asm_subsd(__asm_movsd(*v28), *v27);
                v30 = __asm_subsd(__asm_movsd(*v28), *v27);
                *v24 = __asm_movsd_1(__asm_addsd(__asm_mulsd(v29, v30), __asm_movsd(*v24)));
                v26++;
                v25 = v9;
                while (v26 != v10) {
                    // 0x100
                    v28 = (int64_t *)(v23 + a3 + 0x2580 * v26);
                    v29 = __asm_subsd(__asm_movsd(*v28), *v27);
                    v30 = __asm_subsd(__asm_movsd(*v28), *v27);
                    *v24 = __asm_movsd_1(__asm_addsd(__asm_mulsd(v29, v30), __asm_movsd(*v24)));
                    v26++;
                    v25 = v9;
                }
            }
            // 0x178
            v31 = __asm_movsd_1(__asm_divsd(__asm_movsd(*v24), __asm_movsd(v5)));
            *v24 = v31;
            v32 = __asm_movsd(v31);
            sqrt(v32);
            v33 = __asm_movsd_1(v32);
            *v24 = v33;
            __asm_ucomisd(__asm_movsd(v7), __asm_movsd(v33));
            if (v25 < v9) {
                // 0x1e0
                v34 = __asm_movsd_1(__asm_movsd(*v24));
            } else {
                // 0x1ce
                v34 = __asm_movsd_1(__asm_movsd(0x3ff0000000000000));
            }
            // 0x1f2
            v35 = __asm_movsd(v34);
            *v24 = __asm_movsd_1(v35);
            v36 = v20 + 1;
            v20 = v36;
        }
    }
    if (v9 > 0) {
        int64_t v37 = 0;
        int64_t v38; // 0x0
        int64_t v39; // 0x240
        int128_t v40; // 0x240
        int64_t * v41; // 0x25b
        int128_t v42; // 0x269
        int128_t v43; // 0x27e
        if (v8 > 0) {
            // 0x238
            v38 = 0;
            v39 = 8 * v38;
            v40 = __asm_movsd(*(int64_t *)(v39 + a5));
            v41 = (int64_t *)(0x2580 * v37 + a3 + v39);
            *v41 = __asm_movsd_1(__asm_subsd_3(__asm_movsd(*v41), v40));
            v42 = __asm_movsd(v5);
            sqrt(v42);
            v43 = __asm_mulsd_4(__asm_movaps(v42), *(int64_t *)(v39 + a6));
            *v41 = __asm_movsd_1(__asm_divsd(__asm_movsd(*v41), v43));
            v38++;
            while (v38 != (v2 & 0xffffffff)) {
                // 0x238
                v39 = 8 * v38;
                v40 = __asm_movsd(*(int64_t *)(v39 + a5));
                v41 = (int64_t *)(0x2580 * v37 + a3 + v39);
                *v41 = __asm_movsd_1(__asm_subsd_3(__asm_movsd(*v41), v40));
                v42 = __asm_movsd(v5);
                sqrt(v42);
                v43 = __asm_mulsd_4(__asm_movaps(v42), *(int64_t *)(v39 + a6));
                *v41 = __asm_movsd_1(__asm_divsd(__asm_movsd(*v41), v43));
                v38++;
            }
        }
        int64_t v44 = v37 + 1;
        while (v44 != (v3 & 0xffffffff)) {
            // 0x22c
            v37 = v44;
            if (v8 > 0) {
                // 0x238
                v38 = 0;
                v39 = 8 * v38;
                v40 = __asm_movsd(*(int64_t *)(v39 + a5));
                v41 = (int64_t *)(0x2580 * v37 + a3 + v39);
                *v41 = __asm_movsd_1(__asm_subsd_3(__asm_movsd(*v41), v40));
                v42 = __asm_movsd(v5);
                sqrt(v42);
                v43 = __asm_mulsd_4(__asm_movaps(v42), *(int64_t *)(v39 + a6));
                *v41 = __asm_movsd_1(__asm_divsd(__asm_movsd(*v41), v43));
                v38++;
                while (v38 != (v2 & 0xffffffff)) {
                    // 0x238
                    v39 = 8 * v38;
                    v40 = __asm_movsd(*(int64_t *)(v39 + a5));
                    v41 = (int64_t *)(0x2580 * v37 + a3 + v39);
                    *v41 = __asm_movsd_1(__asm_subsd_3(__asm_movsd(*v41), v40));
                    v42 = __asm_movsd(v5);
                    sqrt(v42);
                    v43 = __asm_mulsd_4(__asm_movaps(v42), *(int64_t *)(v39 + a6));
                    *v41 = __asm_movsd_1(__asm_divsd(__asm_movsd(*v41), v43));
                    v38++;
                }
            }
            // 0x2ba
            v44 = v37 + 1;
        }
    }
    uint64_t v45 = v2 + 0xffffffff & 0xffffffff; // 0x2d5
    if (v45 != 0) {
        int64_t v46 = 0;
        int32_t v47 = 0;
        int32_t v48 = 1;
        int64_t v49 = 0x2580 * v46 + a4; // 0x2ef
        int128_t v50 = __asm_movsd(0x3ff0000000000000); // 0x2f6
        int64_t v51 = __asm_movsd_1(v50); // 0x2fe
        int64_t v52 = 8 * v46; // 0x2fe
        *(int64_t *)(v49 + v52) = v51;
        v47++;
        int64_t v53; // 0x0
        int64_t v54; // 0x0
        int64_t v55; // 0x0
        int64_t v56; // 0x0
        int64_t v57; // 0x3a2
        int128_t v58; // 0x3cb
        int64_t v59; // 0x331
        int64_t v60; // 0x331
        int64_t * v61; // 0x331
        int64_t v62; // 0x358
        int128_t v63; // 0x35f
        int128_t v64; // 0x37a
        int128_t v65; // 0x0
        if (v47 < v8) {
            // 0x318
            v55 = v48;
            v65 = v50;
            v59 = __asm_movsd_1(__asm_xorps(v65, v65));
            v60 = 0x100000000 * v55 >> 29;
            v61 = (int64_t *)(v60 + v49);
            *v61 = v59;
            v56 = 0;
            v53 = v59;
            if (v9 > 0) {
                v62 = 0x2580 * v56 + a3;
                v63 = __asm_movsd(*(int64_t *)(v62 + v52));
                v64 = __asm_movsd(*(int64_t *)(v62 + v60));
                v57 = __asm_movsd_1(__asm_addsd(__asm_mulsd(v63, v64), __asm_movsd(*v61)));
                *v61 = v57;
                v54 = v56 + 1;
                v56 = v54;
                v53 = v57;
                while (v54 != (v3 & 0xffffffff)) {
                    // 0x349
                    v62 = 0x2580 * v56 + a3;
                    v63 = __asm_movsd(*(int64_t *)(v62 + v52));
                    v64 = __asm_movsd(*(int64_t *)(v62 + v60));
                    v57 = __asm_movsd_1(__asm_addsd(__asm_mulsd(v63, v64), __asm_movsd(*v61)));
                    *v61 = v57;
                    v54 = v56 + 1;
                    v56 = v54;
                    v53 = v57;
                }
            }
            // 0x3b5
            v58 = __asm_movsd(v53);
            *(int64_t *)(v52 + a4 + 0x2580 * v55) = __asm_movsd_1(v58);
            v55++;
            while ((int32_t)v55 != v8) {
                // 0x318
                v65 = v58;
                v59 = __asm_movsd_1(__asm_xorps(v65, v65));
                v60 = 0x100000000 * v55 >> 29;
                v61 = (int64_t *)(v60 + v49);
                *v61 = v59;
                v56 = 0;
                v53 = v59;
                if (v9 > 0) {
                    v62 = 0x2580 * v56 + a3;
                    v63 = __asm_movsd(*(int64_t *)(v62 + v52));
                    v64 = __asm_movsd(*(int64_t *)(v62 + v60));
                    v57 = __asm_movsd_1(__asm_addsd(__asm_mulsd(v63, v64), __asm_movsd(*v61)));
                    *v61 = v57;
                    v54 = v56 + 1;
                    v56 = v54;
                    v53 = v57;
                    while (v54 != (v3 & 0xffffffff)) {
                        // 0x349
                        v62 = 0x2580 * v56 + a3;
                        v63 = __asm_movsd(*(int64_t *)(v62 + v52));
                        v64 = __asm_movsd(*(int64_t *)(v62 + v60));
                        v57 = __asm_movsd_1(__asm_addsd(__asm_mulsd(v63, v64), __asm_movsd(*v61)));
                        *v61 = v57;
                        v54 = v56 + 1;
                        v56 = v54;
                        v53 = v57;
                    }
                }
                // 0x3b5
                v58 = __asm_movsd(v53);
                *(int64_t *)(v52 + a4 + 0x2580 * v55) = __asm_movsd_1(v58);
                v55++;
            }
        }
        // 0x3fe
        v46 = v47;
        int32_t v66 = v48 + 1; // 0x2da
        while ((v46 & 0xffffffff) < v45) {
            // 0x2e0
            v48 = v66;
            v49 = 0x2580 * v46 + a4;
            v50 = __asm_movsd(0x3ff0000000000000);
            v51 = __asm_movsd_1(v50);
            v52 = 8 * v46;
            *(int64_t *)(v49 + v52) = v51;
            v47++;
            if (v47 < v8) {
                // 0x318
                v55 = v48;
                v65 = v50;
                v59 = __asm_movsd_1(__asm_xorps(v65, v65));
                v60 = 0x100000000 * v55 >> 29;
                v61 = (int64_t *)(v60 + v49);
                *v61 = v59;
                v56 = 0;
                v53 = v59;
                if (v9 > 0) {
                    v62 = 0x2580 * v56 + a3;
                    v63 = __asm_movsd(*(int64_t *)(v62 + v52));
                    v64 = __asm_movsd(*(int64_t *)(v62 + v60));
                    v57 = __asm_movsd_1(__asm_addsd(__asm_mulsd(v63, v64), __asm_movsd(*v61)));
                    *v61 = v57;
                    v54 = v56 + 1;
                    v56 = v54;
                    v53 = v57;
                    while (v54 != (v3 & 0xffffffff)) {
                        // 0x349
                        v62 = 0x2580 * v56 + a3;
                        v63 = __asm_movsd(*(int64_t *)(v62 + v52));
                        v64 = __asm_movsd(*(int64_t *)(v62 + v60));
                        v57 = __asm_movsd_1(__asm_addsd(__asm_mulsd(v63, v64), __asm_movsd(*v61)));
                        *v61 = v57;
                        v54 = v56 + 1;
                        v56 = v54;
                        v53 = v57;
                    }
                }
                // 0x3b5
                v58 = __asm_movsd(v53);
                *(int64_t *)(v52 + a4 + 0x2580 * v55) = __asm_movsd_1(v58);
                v55++;
                while ((int32_t)v55 != v8) {
                    // 0x318
                    v65 = v58;
                    v59 = __asm_movsd_1(__asm_xorps(v65, v65));
                    v60 = 0x100000000 * v55 >> 29;
                    v61 = (int64_t *)(v60 + v49);
                    *v61 = v59;
                    v56 = 0;
                    v53 = v59;
                    if (v9 > 0) {
                        v62 = 0x2580 * v56 + a3;
                        v63 = __asm_movsd(*(int64_t *)(v62 + v52));
                        v64 = __asm_movsd(*(int64_t *)(v62 + v60));
                        v57 = __asm_movsd_1(__asm_addsd(__asm_mulsd(v63, v64), __asm_movsd(*v61)));
                        *v61 = v57;
                        v54 = v56 + 1;
                        v56 = v54;
                        v53 = v57;
                        while (v54 != (v3 & 0xffffffff)) {
                            // 0x349
                            v62 = 0x2580 * v56 + a3;
                            v63 = __asm_movsd(*(int64_t *)(v62 + v52));
                            v64 = __asm_movsd(*(int64_t *)(v62 + v60));
                            v57 = __asm_movsd_1(__asm_addsd(__asm_mulsd(v63, v64), __asm_movsd(*v61)));
                            *v61 = v57;
                            v54 = v56 + 1;
                            v56 = v54;
                            v53 = v57;
                        }
                    }
                    // 0x3b5
                    v58 = __asm_movsd(v53);
                    *(int64_t *)(v52 + a4 + 0x2580 * v55) = __asm_movsd_1(v58);
                    v55++;
                }
            }
            // 0x3fe
            v46 = v47;
            v66 = v48 + 1;
        }
    }
    int64_t v67 = v1 - 0x100000000;
    int64_t result = 0x2580 * (v67 >> 32) + a4; // 0x420
    *(int64_t *)(result + (v67 >> 29)) = __asm_movsd_1(__asm_movsd(0x3ff0000000000000));
    return result;
}
