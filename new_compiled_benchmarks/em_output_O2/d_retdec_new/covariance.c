
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "covariance.h"
int64_t kernel_covariance(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5) {
    uint64_t result = a1 & 0xffffffff; // 0xa
    int32_t v1 = a1; // 0xf
    int32_t v2; // 0x0
    int128_t v3; // 0x0
    int128_t v4; // 0x0
    if (v1 < 1) {
        // 0x0
        v2 = a2;
    } else {
        int64_t v5 = a2 & 3; // 0x1a
        uint32_t v6 = (int32_t)a2;
        int64_t v7 = 0; // 0x27
        int128_t v8; // 0x0
        int128_t v9 = v8;
        int64_t v10 = 8 * v7; // 0x46
        int64_t * v11 = (int64_t *)(v10 + a5); // 0x46
        *v11 = 0;
        int128_t v12 = __asm_xorpd(v9, v9); // 0x4e
        int128_t v13 = v12; // 0x54
        int64_t v14; // 0x0
        int64_t v15; // 0x0
        int64_t v16; // 0x0
        int128_t v17; // 0x7a
        int128_t v18; // 0x97
        int128_t v19; // 0xb4
        int128_t v20; // 0xd1
        int64_t v21; // 0xdd
        int128_t v22; // 0x10a
        int64_t v23; // 0x119
        int128_t v24; // 0x0
        int128_t v25; // 0x0
        if (v6 >= 1) {
            // 0x56
            v24 = v12;
            v14 = 0;
            if (v6 >= 4) {
                // 0x70
                v16 = v10 + a3;
                v21 = 0;
                v17 = __asm_addsd(v12, *(int64_t *)(0x2580 * v21 + v16));
                *v11 = __asm_movsd_1(v17);
                v18 = __asm_addsd(v17, *(int64_t *)(0x2580 * (v21 | 1) + v16));
                *v11 = __asm_movsd_1(v18);
                v19 = __asm_addsd(v18, *(int64_t *)(0x2580 * (v21 | 2) + v16));
                *v11 = __asm_movsd_1(v19);
                v20 = __asm_addsd(v19, *(int64_t *)(0x2580 * (v21 | 3) + v16));
                *v11 = __asm_movsd_1(v20);
                v21 += 4;
                v24 = v20;
                v14 = v21;
                while (v21 != (a2 & 0xfffffffc)) {
                    // 0x70
                    v17 = __asm_addsd(v20, *(int64_t *)(0x2580 * v21 + v16));
                    *v11 = __asm_movsd_1(v17);
                    v18 = __asm_addsd(v17, *(int64_t *)(0x2580 * (v21 | 1) + v16));
                    *v11 = __asm_movsd_1(v18);
                    v19 = __asm_addsd(v18, *(int64_t *)(0x2580 * (v21 | 2) + v16));
                    *v11 = __asm_movsd_1(v19);
                    v20 = __asm_addsd(v19, *(int64_t *)(0x2580 * (v21 | 3) + v16));
                    *v11 = __asm_movsd_1(v20);
                    v21 += 4;
                    v24 = v20;
                    v14 = v21;
                }
            }
            // 0xea
            v25 = v24;
            v13 = v25;
            if (v5 != 0) {
                // 0x100
                v22 = v25;
                v15 = v14;
                v23 = 0;
                v22 = __asm_addsd(v22, *(int64_t *)(v10 + a3 + 0x2580 * v15));
                *v11 = __asm_movsd_1(v22);
                v23++;
                v13 = v22;
                v15++;
                while (v23 != v5) {
                    // 0x100
                    v22 = __asm_addsd(v22, *(int64_t *)(v10 + a3 + 0x2580 * v15));
                    *v11 = __asm_movsd_1(v22);
                    v23++;
                    v13 = v22;
                    v15++;
                }
            }
        }
        int128_t v26 = __asm_divsd(v13, v3); // 0x30
        *v11 = __asm_movsd_1(v26);
        v7++;
        v2 = v6;
        v4 = v26;
        while (v7 != result) {
            // 0x46
            v9 = v26;
            v10 = 8 * v7;
            v11 = (int64_t *)(v10 + a5);
            *v11 = 0;
            v12 = __asm_xorpd(v9, v9);
            v13 = v12;
            if (v6 >= 1) {
                // 0x56
                v24 = v12;
                v14 = 0;
                if (v6 >= 4) {
                    // 0x70
                    v16 = v10 + a3;
                    v21 = 0;
                    v17 = __asm_addsd(v12, *(int64_t *)(0x2580 * v21 + v16));
                    *v11 = __asm_movsd_1(v17);
                    v18 = __asm_addsd(v17, *(int64_t *)(0x2580 * (v21 | 1) + v16));
                    *v11 = __asm_movsd_1(v18);
                    v19 = __asm_addsd(v18, *(int64_t *)(0x2580 * (v21 | 2) + v16));
                    *v11 = __asm_movsd_1(v19);
                    v20 = __asm_addsd(v19, *(int64_t *)(0x2580 * (v21 | 3) + v16));
                    *v11 = __asm_movsd_1(v20);
                    v21 += 4;
                    v24 = v20;
                    v14 = v21;
                    while (v21 != (a2 & 0xfffffffc)) {
                        // 0x70
                        v17 = __asm_addsd(v20, *(int64_t *)(0x2580 * v21 + v16));
                        *v11 = __asm_movsd_1(v17);
                        v18 = __asm_addsd(v17, *(int64_t *)(0x2580 * (v21 | 1) + v16));
                        *v11 = __asm_movsd_1(v18);
                        v19 = __asm_addsd(v18, *(int64_t *)(0x2580 * (v21 | 2) + v16));
                        *v11 = __asm_movsd_1(v19);
                        v20 = __asm_addsd(v19, *(int64_t *)(0x2580 * (v21 | 3) + v16));
                        *v11 = __asm_movsd_1(v20);
                        v21 += 4;
                        v24 = v20;
                        v14 = v21;
                    }
                }
                // 0xea
                v25 = v24;
                v13 = v25;
                if (v5 != 0) {
                    // 0x100
                    v22 = v25;
                    v15 = v14;
                    v23 = 0;
                    v22 = __asm_addsd(v22, *(int64_t *)(v10 + a3 + 0x2580 * v15));
                    *v11 = __asm_movsd_1(v22);
                    v23++;
                    v13 = v22;
                    v15++;
                    while (v23 != v5) {
                        // 0x100
                        v22 = __asm_addsd(v22, *(int64_t *)(v10 + a3 + 0x2580 * v15));
                        *v11 = __asm_movsd_1(v22);
                        v23++;
                        v13 = v22;
                        v15++;
                    }
                }
            }
            // 0x30
            v26 = __asm_divsd(v13, v3);
            *v11 = __asm_movsd_1(v26);
            v7++;
            v2 = v6;
            v4 = v26;
        }
    }
    int128_t v27 = v4; // 0x128
    int64_t v28; // 0x0
    int64_t v29; // 0x0
    int64_t v30; // 0x0
    uint64_t v31; // 0x0
    int128_t v32; // 0x0
    int128_t v33; // 0x0
    int128_t v34; // 0x0
    if (v2 >= 1) {
        int64_t v35 = 8 * result; // 0x12e
        int64_t v36 = a1 & 0xfffffffc; // 0x13c
        v33 = v4;
        v28 = 0;
        while (true) {
          lab_0x16c:
            // 0x16c
            v29 = v28;
            int128_t v37 = v33;
            v32 = v37;
            if (v1 < 1) {
                goto lab_0x160;
            } else {
                // 0x170
                v31 = 0x2580 * v29 + a3;
                v34 = v37;
                v30 = 0;
                if (v1 >= 6) {
                    int64_t v38 = 0; // 0x193
                    v34 = v37;
                    v30 = 0;
                    if (v31 < v35 + a5 == v31 + v35 > a5) {
                        goto lab_0x200;
                    } else {
                        int64_t v39 = 8 * v38; // 0x1b0
                        int64_t v40 = v39 + a5;
                        int128_t v41 = __asm_movupd_2(*(int128_t *)v40); // 0x1b0
                        int128_t v42 = __asm_movupd_2(*(int128_t *)(v40 + 16)); // 0x1b6
                        int64_t v43 = v39 + v31;
                        int128_t * v44 = (int128_t *)v43; // 0x1bd
                        int128_t v45 = __asm_subpd(__asm_movupd_2(*v44), v41); // 0x1c3
                        int128_t * v46 = (int128_t *)(v43 + 16); // 0x1c7
                        int128_t v47 = __asm_subpd(__asm_movupd_2(*v46), v42); // 0x1ce
                        __asm_movupd(*v44, v45);
                        __asm_movupd(*v46, v47);
                        int64_t v48 = v38 + 4; // 0x1df
                        v38 = v48;
                        while (v48 != v36) {
                            // 0x1b0
                            v39 = 8 * v38;
                            v40 = v39 + a5;
                            v41 = __asm_movupd_2(*(int128_t *)v40);
                            v42 = __asm_movupd_2(*(int128_t *)(v40 + 16));
                            v43 = v39 + v31;
                            v44 = (int128_t *)v43;
                            v45 = __asm_subpd(__asm_movupd_2(*v44), v41);
                            v46 = (int128_t *)(v43 + 16);
                            v47 = __asm_subpd(__asm_movupd_2(*v46), v42);
                            __asm_movupd(*v44, v45);
                            __asm_movupd(*v46, v47);
                            v48 = v38 + 4;
                            v38 = v48;
                        }
                        // 0x1e8
                        v32 = v47;
                        v34 = v47;
                        v30 = v36;
                        if (v36 == result) {
                            goto lab_0x160;
                        } else {
                            goto lab_0x200;
                        }
                    }
                } else {
                    goto lab_0x200;
                }
            }
        }
    }
  lab_0x265:
    if (v1 < 1) {
        // 0x370
        return result;
    }
    int128_t v49 = __asm_addsd(v3, -0x4010000000000000); // 0x26d
    int64_t v50 = 0; // 0x27e
    int64_t v51 = 8 * v50;
    int64_t v52 = v50; // 0x28f
    int128_t v53 = v27;
    int64_t v54 = 8 * v52; // 0x2cb
    int64_t * v55 = (int64_t *)(0x2580 * v50 + a4 + v54); // 0x2cf
    *v55 = 0;
    int128_t v56 = __asm_xorpd(v53, v53); // 0x2d7
    int128_t v57 = v56; // 0x2dd
    int64_t v58; // 0x0
    int64_t v59; // 0x0
    int64_t v60; // 0x353
    int128_t v61; // 0x356
    int128_t v62; // 0x362
    int64_t v63; // 0x2f7
    int128_t v64; // 0x2fa
    int128_t v65; // 0x306
    int64_t v66; // 0x31d
    int128_t v67; // 0x320
    int128_t v68; // 0x32c
    int64_t v69; // 0x335
    int128_t v70; // 0x0
    int128_t v71; // 0x0
    int128_t v72; // 0x0
    if (v2 >= 1) {
        // 0x2df
        v70 = v56;
        v58 = 0;
        v71 = v56;
        v59 = 0;
        if (v2 != 1) {
            v63 = 0x2580 * v58 + a3;
            v64 = __asm_movsd(*(int64_t *)(v63 + v51));
            v65 = __asm_addsd_3(__asm_mulsd(v64, *(int64_t *)(v63 + v54)), v70);
            *v55 = __asm_movsd_1(v65);
            v66 = 0x2580 * (v58 | 1) + a3;
            v67 = __asm_movsd(*(int64_t *)(v66 + v51));
            v68 = __asm_addsd_3(__asm_mulsd(v67, *(int64_t *)(v66 + v54)), v65);
            *v55 = __asm_movsd_1(v68);
            v69 = v58 + 2;
            v70 = v68;
            v58 = v69;
            v71 = v68;
            v59 = v69;
            while (v69 != (a2 & 0xfffffffe)) {
                // 0x2f0
                v63 = 0x2580 * v58 + a3;
                v64 = __asm_movsd(*(int64_t *)(v63 + v51));
                v65 = __asm_addsd_3(__asm_mulsd(v64, *(int64_t *)(v63 + v54)), v70);
                *v55 = __asm_movsd_1(v65);
                v66 = 0x2580 * (v58 | 1) + a3;
                v67 = __asm_movsd(*(int64_t *)(v66 + v51));
                v68 = __asm_addsd_3(__asm_mulsd(v67, *(int64_t *)(v66 + v54)), v65);
                *v55 = __asm_movsd_1(v68);
                v69 = v58 + 2;
                v70 = v68;
                v58 = v69;
                v71 = v68;
                v59 = v69;
            }
        }
        // 0x342
        v72 = v71;
        v57 = v72;
        if ((a2 & 1) != 0) {
            // 0x34c
            v60 = 0x2580 * v59 + a3;
            v61 = __asm_movsd(*(int64_t *)(v60 + v51));
            v62 = __asm_addsd_3(v72, __asm_mulsd(v61, *(int64_t *)(v60 + v54)));
            *v55 = __asm_movsd_1(v62);
            v57 = v62;
        }
    }
    int128_t v73 = __asm_divsd(v57, v49); // 0x2a0
    *v55 = __asm_movsd_1(v73);
    *(int64_t *)(v51 + a4 + 0x2580 * v52) = __asm_movsd_1(v73);
    v52++;
    while (v52 < result) {
        // 0x2c1
        v53 = v73;
        v54 = 8 * v52;
        v55 = (int64_t *)(0x2580 * v50 + a4 + v54);
        *v55 = 0;
        v56 = __asm_xorpd(v53, v53);
        v57 = v56;
        if (v2 >= 1) {
            // 0x2df
            v70 = v56;
            v58 = 0;
            v71 = v56;
            v59 = 0;
            if (v2 != 1) {
                v63 = 0x2580 * v58 + a3;
                v64 = __asm_movsd(*(int64_t *)(v63 + v51));
                v65 = __asm_addsd_3(__asm_mulsd(v64, *(int64_t *)(v63 + v54)), v70);
                *v55 = __asm_movsd_1(v65);
                v66 = 0x2580 * (v58 | 1) + a3;
                v67 = __asm_movsd(*(int64_t *)(v66 + v51));
                v68 = __asm_addsd_3(__asm_mulsd(v67, *(int64_t *)(v66 + v54)), v65);
                *v55 = __asm_movsd_1(v68);
                v69 = v58 + 2;
                v70 = v68;
                v58 = v69;
                v71 = v68;
                v59 = v69;
                while (v69 != (a2 & 0xfffffffe)) {
                    // 0x2f0
                    v63 = 0x2580 * v58 + a3;
                    v64 = __asm_movsd(*(int64_t *)(v63 + v51));
                    v65 = __asm_addsd_3(__asm_mulsd(v64, *(int64_t *)(v63 + v54)), v70);
                    *v55 = __asm_movsd_1(v65);
                    v66 = 0x2580 * (v58 | 1) + a3;
                    v67 = __asm_movsd(*(int64_t *)(v66 + v51));
                    v68 = __asm_addsd_3(__asm_mulsd(v67, *(int64_t *)(v66 + v54)), v65);
                    *v55 = __asm_movsd_1(v68);
                    v69 = v58 + 2;
                    v70 = v68;
                    v58 = v69;
                    v71 = v68;
                    v59 = v69;
                }
            }
            // 0x342
            v72 = v71;
            v57 = v72;
            if ((a2 & 1) != 0) {
                // 0x34c
                v60 = 0x2580 * v59 + a3;
                v61 = __asm_movsd(*(int64_t *)(v60 + v51));
                v62 = __asm_addsd_3(v72, __asm_mulsd(v61, *(int64_t *)(v60 + v54)));
                *v55 = __asm_movsd_1(v62);
                v57 = v62;
            }
        }
        // 0x2a0
        v73 = __asm_divsd(v57, v49);
        *v55 = __asm_movsd_1(v73);
        *(int64_t *)(v51 + a4 + 0x2580 * v52) = __asm_movsd_1(v73);
        v52++;
    }
    int64_t v74 = v50 + 1; // 0x280
    v50 = v74;
    while (v74 != result) {
        // 0x28c
        v51 = 8 * v50;
        v52 = v50;
        v53 = v73;
        v54 = 8 * v52;
        v55 = (int64_t *)(0x2580 * v50 + a4 + v54);
        *v55 = 0;
        v56 = __asm_xorpd(v53, v53);
        v57 = v56;
        if (v2 >= 1) {
            // 0x2df
            v70 = v56;
            v58 = 0;
            v71 = v56;
            v59 = 0;
            if (v2 != 1) {
                v63 = 0x2580 * v58 + a3;
                v64 = __asm_movsd(*(int64_t *)(v63 + v51));
                v65 = __asm_addsd_3(__asm_mulsd(v64, *(int64_t *)(v63 + v54)), v70);
                *v55 = __asm_movsd_1(v65);
                v66 = 0x2580 * (v58 | 1) + a3;
                v67 = __asm_movsd(*(int64_t *)(v66 + v51));
                v68 = __asm_addsd_3(__asm_mulsd(v67, *(int64_t *)(v66 + v54)), v65);
                *v55 = __asm_movsd_1(v68);
                v69 = v58 + 2;
                v70 = v68;
                v58 = v69;
                v71 = v68;
                v59 = v69;
                while (v69 != (a2 & 0xfffffffe)) {
                    // 0x2f0
                    v63 = 0x2580 * v58 + a3;
                    v64 = __asm_movsd(*(int64_t *)(v63 + v51));
                    v65 = __asm_addsd_3(__asm_mulsd(v64, *(int64_t *)(v63 + v54)), v70);
                    *v55 = __asm_movsd_1(v65);
                    v66 = 0x2580 * (v58 | 1) + a3;
                    v67 = __asm_movsd(*(int64_t *)(v66 + v51));
                    v68 = __asm_addsd_3(__asm_mulsd(v67, *(int64_t *)(v66 + v54)), v65);
                    *v55 = __asm_movsd_1(v68);
                    v69 = v58 + 2;
                    v70 = v68;
                    v58 = v69;
                    v71 = v68;
                    v59 = v69;
                }
            }
            // 0x342
            v72 = v71;
            v57 = v72;
            if ((a2 & 1) != 0) {
                // 0x34c
                v60 = 0x2580 * v59 + a3;
                v61 = __asm_movsd(*(int64_t *)(v60 + v51));
                v62 = __asm_addsd_3(v72, __asm_mulsd(v61, *(int64_t *)(v60 + v54)));
                *v55 = __asm_movsd_1(v62);
                v57 = v62;
            }
        }
        // 0x2a0
        v73 = __asm_divsd(v57, v49);
        *v55 = __asm_movsd_1(v73);
        *(int64_t *)(v51 + a4 + 0x2580 * v52) = __asm_movsd_1(v73);
        v52++;
        while (v52 < result) {
            // 0x2c1
            v53 = v73;
            v54 = 8 * v52;
            v55 = (int64_t *)(0x2580 * v50 + a4 + v54);
            *v55 = 0;
            v56 = __asm_xorpd(v53, v53);
            v57 = v56;
            if (v2 >= 1) {
                // 0x2df
                v70 = v56;
                v58 = 0;
                v71 = v56;
                v59 = 0;
                if (v2 != 1) {
                    v63 = 0x2580 * v58 + a3;
                    v64 = __asm_movsd(*(int64_t *)(v63 + v51));
                    v65 = __asm_addsd_3(__asm_mulsd(v64, *(int64_t *)(v63 + v54)), v70);
                    *v55 = __asm_movsd_1(v65);
                    v66 = 0x2580 * (v58 | 1) + a3;
                    v67 = __asm_movsd(*(int64_t *)(v66 + v51));
                    v68 = __asm_addsd_3(__asm_mulsd(v67, *(int64_t *)(v66 + v54)), v65);
                    *v55 = __asm_movsd_1(v68);
                    v69 = v58 + 2;
                    v70 = v68;
                    v58 = v69;
                    v71 = v68;
                    v59 = v69;
                    while (v69 != (a2 & 0xfffffffe)) {
                        // 0x2f0
                        v63 = 0x2580 * v58 + a3;
                        v64 = __asm_movsd(*(int64_t *)(v63 + v51));
                        v65 = __asm_addsd_3(__asm_mulsd(v64, *(int64_t *)(v63 + v54)), v70);
                        *v55 = __asm_movsd_1(v65);
                        v66 = 0x2580 * (v58 | 1) + a3;
                        v67 = __asm_movsd(*(int64_t *)(v66 + v51));
                        v68 = __asm_addsd_3(__asm_mulsd(v67, *(int64_t *)(v66 + v54)), v65);
                        *v55 = __asm_movsd_1(v68);
                        v69 = v58 + 2;
                        v70 = v68;
                        v58 = v69;
                        v71 = v68;
                        v59 = v69;
                    }
                }
                // 0x342
                v72 = v71;
                v57 = v72;
                if ((a2 & 1) != 0) {
                    // 0x34c
                    v60 = 0x2580 * v59 + a3;
                    v61 = __asm_movsd(*(int64_t *)(v60 + v51));
                    v62 = __asm_addsd_3(v72, __asm_mulsd(v61, *(int64_t *)(v60 + v54)));
                    *v55 = __asm_movsd_1(v62);
                    v57 = v62;
                }
            }
            // 0x2a0
            v73 = __asm_divsd(v57, v49);
            *v55 = __asm_movsd_1(v73);
            *(int64_t *)(v51 + a4 + 0x2580 * v52) = __asm_movsd_1(v73);
            v52++;
        }
        // 0x280
        v74 = v50 + 1;
        v50 = v74;
    }
    // 0x370
    return result;
  lab_0x160:;
    int64_t v75 = v29 + 1; // 0x160
    v33 = v32;
    v28 = v75;
    v27 = v32;
    if (v75 == (a2 & 0xffffffff)) {
        // break -> 0x265
        goto lab_0x265;
    }
    goto lab_0x16c;
  lab_0x200:;
    int64_t v76 = v30;
    int128_t v77 = v34; // 0x205
    int64_t v78 = v76; // 0x205
    if ((a1 & 1) != 0) {
        int64_t v79 = 8 * v76; // 0x207
        int64_t * v80 = (int64_t *)(v79 + v31); // 0x207
        int128_t v81 = __asm_subsd(__asm_movsd(*v80), *(int64_t *)(v79 + a5)); // 0x20d
        *v80 = __asm_movsd_1(v81);
        v77 = v81;
        v78 = v76 | 1;
    }
    // 0x220
    v32 = v77;
    int64_t v82 = v78; // 0x226
    if (-result != -1 - v76) {
        int64_t v83 = 8 * v82; // 0x230
        int64_t v84 = v83 + v31;
        int64_t * v85 = (int64_t *)v84; // 0x230
        int128_t v86 = __asm_movsd(*v85); // 0x230
        int64_t v87 = v83 + a5;
        int128_t v88 = __asm_subsd(v86, *(int64_t *)v87); // 0x236
        int64_t * v89 = (int64_t *)(v84 + 8); // 0x23c
        int128_t v90 = __asm_movsd(*v89); // 0x23c
        *v85 = __asm_movsd_1(v88);
        *v89 = __asm_movsd_1(__asm_subsd(v90, *(int64_t *)(v87 + 8)));
        int64_t v91 = v82 + 2; // 0x257
        v32 = v88;
        v82 = v91;
        while (v91 != result) {
            // 0x230
            v83 = 8 * v82;
            v84 = v83 + v31;
            v85 = (int64_t *)v84;
            v86 = __asm_movsd(*v85);
            v87 = v83 + a5;
            v88 = __asm_subsd(v86, *(int64_t *)v87);
            v89 = (int64_t *)(v84 + 8);
            v90 = __asm_movsd(*v89);
            *v85 = __asm_movsd_1(v88);
            *v89 = __asm_movsd_1(__asm_subsd(v90, *(int64_t *)(v87 + 8)));
            v91 = v82 + 2;
            v32 = v88;
            v82 = v91;
        }
    }
    goto lab_0x160;
}
