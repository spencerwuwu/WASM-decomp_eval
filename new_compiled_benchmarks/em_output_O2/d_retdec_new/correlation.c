
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "correlation.h"
int64_t kernel_correlation(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x0
    int128_t v1; // 0x0
    int128_t v2 = v1;
    int128_t v3 = __asm_movapd(v1); // 0x1a
    uint64_t v4 = a1 & 0xffffffff; // 0x1e
    int64_t v5 = 0x100000000 * a2 >> 32; // 0x25
    int32_t v6 = a1; // 0x35
    int64_t v7 = __asm_movsd_1(v1); // 0x37
    int32_t v8; // 0x0
    int128_t v9; // 0x0
    int128_t v10; // 0x0
    int128_t v11; // 0x0
    int128_t v12; // 0x0
    if (v6 < 1) {
        // 0x0
        v8 = v5;
        v10 = v3;
    } else {
        int64_t v13 = a2 & 3; // 0x4a
        uint32_t v14 = (int32_t)v5;
        int64_t v15 = 0; // 0x52
        int128_t v16; // 0x0
        int128_t v17 = v16;
        int64_t v18 = 8 * v15; // 0x78
        int64_t * v19 = (int64_t *)(v18 + a5); // 0x78
        *v19 = 0;
        int128_t v20 = __asm_xorpd(v17, v17); // 0x85
        int128_t v21 = v20; // 0x8c
        int64_t v22; // 0x0
        int64_t v23; // 0x0
        int64_t v24; // 0x0
        int128_t v25; // 0xba
        int128_t v26; // 0xd7
        int128_t v27; // 0xf4
        int128_t v28; // 0x111
        int64_t v29; // 0x11d
        int128_t v30; // 0x14a
        int64_t v31; // 0x159
        int128_t v32; // 0x0
        int128_t v33; // 0x0
        if (v14 >= 1) {
            // 0x8e
            v32 = v20;
            v22 = 0;
            if (v14 >= 4) {
                // 0xb0
                v24 = v18 + a3;
                v29 = 0;
                v25 = __asm_addsd(v20, *(int64_t *)(0x2580 * v29 + v24));
                *v19 = __asm_movsd_1(v25);
                v26 = __asm_addsd(v25, *(int64_t *)(0x2580 * (v29 | 1) + v24));
                *v19 = __asm_movsd_1(v26);
                v27 = __asm_addsd(v26, *(int64_t *)(0x2580 * (v29 | 2) + v24));
                *v19 = __asm_movsd_1(v27);
                v28 = __asm_addsd(v27, *(int64_t *)(0x2580 * (v29 | 3) + v24));
                *v19 = __asm_movsd_1(v28);
                v29 += 4;
                v32 = v28;
                v22 = v29;
                while (v29 != (a2 & 0xfffffffc)) {
                    // 0xb0
                    v25 = __asm_addsd(v28, *(int64_t *)(0x2580 * v29 + v24));
                    *v19 = __asm_movsd_1(v25);
                    v26 = __asm_addsd(v25, *(int64_t *)(0x2580 * (v29 | 1) + v24));
                    *v19 = __asm_movsd_1(v26);
                    v27 = __asm_addsd(v26, *(int64_t *)(0x2580 * (v29 | 2) + v24));
                    *v19 = __asm_movsd_1(v27);
                    v28 = __asm_addsd(v27, *(int64_t *)(0x2580 * (v29 | 3) + v24));
                    *v19 = __asm_movsd_1(v28);
                    v29 += 4;
                    v32 = v28;
                    v22 = v29;
                }
            }
            // 0x12a
            v33 = v32;
            v21 = v33;
            if (v13 != 0) {
                // 0x140
                v30 = v33;
                v23 = v22;
                v31 = 0;
                v30 = __asm_addsd(v30, *(int64_t *)(v18 + a3 + 0x2580 * v23));
                *v19 = __asm_movsd_1(v30);
                v31++;
                v21 = v30;
                v23++;
                while (v31 != v13) {
                    // 0x140
                    v30 = __asm_addsd(v30, *(int64_t *)(v18 + a3 + 0x2580 * v23));
                    *v19 = __asm_movsd_1(v30);
                    v31++;
                    v21 = v30;
                    v23++;
                }
            }
        }
        int128_t v34 = __asm_divsd(v21, v3); // 0x60
        *v19 = __asm_movsd_1(v34);
        v15++;
        while (v15 != v4) {
            // 0x78
            v17 = v34;
            v18 = 8 * v15;
            v19 = (int64_t *)(v18 + a5);
            *v19 = 0;
            v20 = __asm_xorpd(v17, v17);
            v21 = v20;
            if (v14 >= 1) {
                // 0x8e
                v32 = v20;
                v22 = 0;
                if (v14 >= 4) {
                    // 0xb0
                    v24 = v18 + a3;
                    v29 = 0;
                    v25 = __asm_addsd(v20, *(int64_t *)(0x2580 * v29 + v24));
                    *v19 = __asm_movsd_1(v25);
                    v26 = __asm_addsd(v25, *(int64_t *)(0x2580 * (v29 | 1) + v24));
                    *v19 = __asm_movsd_1(v26);
                    v27 = __asm_addsd(v26, *(int64_t *)(0x2580 * (v29 | 2) + v24));
                    *v19 = __asm_movsd_1(v27);
                    v28 = __asm_addsd(v27, *(int64_t *)(0x2580 * (v29 | 3) + v24));
                    *v19 = __asm_movsd_1(v28);
                    v29 += 4;
                    v32 = v28;
                    v22 = v29;
                    while (v29 != (a2 & 0xfffffffc)) {
                        // 0xb0
                        v25 = __asm_addsd(v28, *(int64_t *)(0x2580 * v29 + v24));
                        *v19 = __asm_movsd_1(v25);
                        v26 = __asm_addsd(v25, *(int64_t *)(0x2580 * (v29 | 1) + v24));
                        *v19 = __asm_movsd_1(v26);
                        v27 = __asm_addsd(v26, *(int64_t *)(0x2580 * (v29 | 2) + v24));
                        *v19 = __asm_movsd_1(v27);
                        v28 = __asm_addsd(v27, *(int64_t *)(0x2580 * (v29 | 3) + v24));
                        *v19 = __asm_movsd_1(v28);
                        v29 += 4;
                        v32 = v28;
                        v22 = v29;
                    }
                }
                // 0x12a
                v33 = v32;
                v21 = v33;
                if (v13 != 0) {
                    // 0x140
                    v30 = v33;
                    v23 = v22;
                    v31 = 0;
                    v30 = __asm_addsd(v30, *(int64_t *)(v18 + a3 + 0x2580 * v23));
                    *v19 = __asm_movsd_1(v30);
                    v31++;
                    v21 = v30;
                    v23++;
                    while (v31 != v13) {
                        // 0x140
                        v30 = __asm_addsd(v30, *(int64_t *)(v18 + a3 + 0x2580 * v23));
                        *v19 = __asm_movsd_1(v30);
                        v31++;
                        v21 = v30;
                        v23++;
                    }
                }
            }
            // 0x60
            v34 = __asm_divsd(v21, v3);
            *v19 = __asm_movsd_1(v34);
            v15++;
        }
        int128_t v35 = __asm_xorpd(v2, v2); // 0x191
        int128_t v36 = __asm_movsd(0x3fb999999999999a); // 0x191
        int128_t v37 = __asm_movsd(0x3ff0000000000000); // 0x191
        int64_t v38 = 0; // 0x191
        int128_t v39 = v37;
        int128_t v40 = v36;
        int128_t v41 = v35;
        int128_t v42 = v34;
        int64_t v43 = 8 * v38; // 0x1e8
        int64_t * v44 = (int64_t *)(v43 + a6); // 0x1e8
        *v44 = 0;
        int128_t v45 = __asm_xorpd(v42, v42); // 0x1f0
        bool v46 = false; // 0x1f9
        int128_t v47 = v45; // 0x1f9
        int64_t v48; // 0x0
        int128_t v49; // 0x280
        int128_t v50; // 0x28a
        int128_t v51; // 0x21f
        int128_t v52; // 0x229
        int128_t v53; // 0x249
        int128_t v54; // 0x253
        int64_t v55; // 0x25d
        int64_t v56; // 0x0
        int64_t * v57; // 0x0
        uint64_t v58; // 0x271
        uint64_t v59; // 0x278
        int128_t v60; // 0x0
        int128_t v61; // 0x0
        if (v14 >= 1) {
            // 0x1ff
            v60 = v45;
            v48 = 0;
            if (v14 != 1) {
                // 0x210
                v56 = v43 + a3;
                v57 = (int64_t *)(v43 + a5);
                v55 = 0;
                v51 = __asm_subsd(__asm_movsd(*(int64_t *)(0x2580 * v55 + v56)), *v57);
                v52 = __asm_addsd_2(__asm_mulsd(v51, v51), v45);
                *v44 = __asm_movsd_1(v52);
                v53 = __asm_subsd(__asm_movsd(*(int64_t *)(0x2580 * (v55 | 1) + v56)), *v57);
                v54 = __asm_addsd_2(__asm_mulsd(v53, v53), v52);
                *v44 = __asm_movsd_1(v54);
                v55 += 2;
                v60 = v54;
                v48 = v55;
                while (v55 != (a2 & 0xfffffffe)) {
                    // 0x210
                    v51 = __asm_subsd(__asm_movsd(*(int64_t *)(0x2580 * v55 + v56)), *v57);
                    v52 = __asm_addsd_2(__asm_mulsd(v51, v51), v54);
                    *v44 = __asm_movsd_1(v52);
                    v53 = __asm_subsd(__asm_movsd(*(int64_t *)(0x2580 * (v55 | 1) + v56)), *v57);
                    v54 = __asm_addsd_2(__asm_mulsd(v53, v53), v52);
                    *v44 = __asm_movsd_1(v54);
                    v55 += 2;
                    v60 = v54;
                    v48 = v55;
                }
            }
            // 0x26a
            v61 = v60;
            v46 = false;
            v47 = v61;
            if ((a2 & 1) != 0) {
                // 0x271
                v58 = 0x2580 * v48;
                v59 = v58 + a3;
                v49 = __asm_subsd(__asm_movsd(*(int64_t *)(v59 + v43)), *(int64_t *)(v43 + a5));
                v50 = __asm_addsd_2(v61, __asm_mulsd(v49, v49));
                *v44 = __asm_movsd_1(v50);
                v46 = v59 < v58;
                v47 = v50;
            }
        }
        int128_t v62 = __asm_divsd(v47, v3); // 0x294
        __asm_ucomisd(v62, v41);
        int128_t v63; // 0x1a5
        int128_t v64; // 0x1ad
        int128_t v65; // 0x1b5
        int128_t v66; // 0x0
        int128_t v67; // 0x0
        int128_t v68; // 0x0
        int128_t v69; // 0x0
        int128_t v70; // 0x0
        if (v46) {
            // 0x1a0
            sqrt(v62);
            v63 = __asm_movsd(0x3ff0000000000000);
            v64 = __asm_movsd(0x3fb999999999999a);
            v65 = __asm_xorpd(v41, v41);
            v66 = v62;
            v67 = __asm_movsd(v7);
            v68 = v65;
            v69 = v64;
            v70 = v63;
        } else {
            // 0x2a2
            v66 = __asm_sqrtsd(v62);
            v67 = v3;
            v68 = v41;
            v69 = v40;
            v70 = v39;
        }
        // 0x1bf
        v37 = v70;
        v36 = v69;
        v35 = v68;
        int128_t v71 = v67;
        int128_t v72 = __asm_cmpnlesd(__asm_movapd(v66), v36); // 0x1c3
        int128_t v73 = __asm_andpd(v66, v72); // 0x1c8
        __asm_movlpd(*v44, __asm_orpd(__asm_andnpd(v72, v37), v73));
        v38++;
        v8 = v14;
        v9 = v73;
        v10 = v71;
        v11 = v35;
        v12 = v36;
        while (v38 != v4) {
            // 0x1e8
            v39 = v37;
            v40 = v36;
            v41 = v35;
            int128_t v74 = v71;
            v42 = v73;
            v43 = 8 * v38;
            v44 = (int64_t *)(v43 + a6);
            *v44 = 0;
            v45 = __asm_xorpd(v42, v42);
            v46 = false;
            v47 = v45;
            if (v14 >= 1) {
                // 0x1ff
                v60 = v45;
                v48 = 0;
                if (v14 != 1) {
                    // 0x210
                    v56 = v43 + a3;
                    v57 = (int64_t *)(v43 + a5);
                    v55 = 0;
                    v51 = __asm_subsd(__asm_movsd(*(int64_t *)(0x2580 * v55 + v56)), *v57);
                    v52 = __asm_addsd_2(__asm_mulsd(v51, v51), v45);
                    *v44 = __asm_movsd_1(v52);
                    v53 = __asm_subsd(__asm_movsd(*(int64_t *)(0x2580 * (v55 | 1) + v56)), *v57);
                    v54 = __asm_addsd_2(__asm_mulsd(v53, v53), v52);
                    *v44 = __asm_movsd_1(v54);
                    v55 += 2;
                    v60 = v54;
                    v48 = v55;
                    while (v55 != (a2 & 0xfffffffe)) {
                        // 0x210
                        v51 = __asm_subsd(__asm_movsd(*(int64_t *)(0x2580 * v55 + v56)), *v57);
                        v52 = __asm_addsd_2(__asm_mulsd(v51, v51), v54);
                        *v44 = __asm_movsd_1(v52);
                        v53 = __asm_subsd(__asm_movsd(*(int64_t *)(0x2580 * (v55 | 1) + v56)), *v57);
                        v54 = __asm_addsd_2(__asm_mulsd(v53, v53), v52);
                        *v44 = __asm_movsd_1(v54);
                        v55 += 2;
                        v60 = v54;
                        v48 = v55;
                    }
                }
                // 0x26a
                v61 = v60;
                v46 = false;
                v47 = v61;
                if ((a2 & 1) != 0) {
                    // 0x271
                    v58 = 0x2580 * v48;
                    v59 = v58 + a3;
                    v49 = __asm_subsd(__asm_movsd(*(int64_t *)(v59 + v43)), *(int64_t *)(v43 + a5));
                    v50 = __asm_addsd_2(v61, __asm_mulsd(v49, v49));
                    *v44 = __asm_movsd_1(v50);
                    v46 = v59 < v58;
                    v47 = v50;
                }
            }
            // 0x294
            v62 = __asm_divsd(v47, v74);
            __asm_ucomisd(v62, v41);
            if (v46) {
                // 0x1a0
                sqrt(v62);
                v63 = __asm_movsd(0x3ff0000000000000);
                v64 = __asm_movsd(0x3fb999999999999a);
                v65 = __asm_xorpd(v41, v41);
                v66 = v62;
                v67 = __asm_movsd(v7);
                v68 = v65;
                v69 = v64;
                v70 = v63;
            } else {
                // 0x2a2
                v66 = __asm_sqrtsd(v62);
                v67 = v74;
                v68 = v41;
                v69 = v40;
                v70 = v39;
            }
            // 0x1bf
            v37 = v70;
            v36 = v69;
            v35 = v68;
            v71 = v67;
            v72 = __asm_cmpnlesd(__asm_movapd(v66), v36);
            v73 = __asm_andpd(v66, v72);
            __asm_movlpd(*v44, __asm_orpd(__asm_andnpd(v72, v37), v73));
            v38++;
            v8 = v14;
            v9 = v73;
            v10 = v71;
            v11 = v35;
            v12 = v36;
        }
    }
    int128_t v75 = v9; // 0x2b5
    if (v8 >= 1) {
        int128_t v76 = v12;
        int128_t v77 = v11;
        __asm_xorps(v77, v77);
        int128_t v78 = __asm_sqrtsd(v10); // 0x2c0
        int128_t v79 = __asm_xorpd(v76, v76); // 0x2c4
        int64_t v80 = __asm_movsd_1(v78); // 0x2c8
        int64_t v81 = 0;
        int128_t v82 = v9; // 0x2e3
        int128_t v83 = v10; // 0x2e3
        int128_t v84 = v78; // 0x2e3
        int128_t v85 = v79; // 0x2e3
        uint64_t v86; // 0x317
        uint64_t v87; // 0x31e
        int64_t v88; // 0x321
        int64_t * v89; // 0x321
        int128_t v90; // 0x2fb
        int64_t v91; // 0x30d
        int128_t v92; // 0x33f
        int128_t v93; // 0x348
        int128_t v94; // 0x34c
        int128_t v95; // 0x0
        int128_t v96; // 0x0
        int128_t v97; // 0x0
        int128_t v98; // 0x0
        int128_t v99; // 0x0
        int128_t v100; // 0x0
        if (v6 >= 1) {
            // 0x317
            v86 = 0x2580 * v81;
            v87 = v86 + a3;
            v91 = 0;
            v100 = v79;
            v88 = 8 * v91;
            v89 = (int64_t *)(v88 + v87);
            *v89 = __asm_movsd_1(__asm_subsd(__asm_movsd(*v89), *(int64_t *)(v88 + a5)));
            __asm_ucomisd(v10, v100);
            v92 = __asm_movapd(v78);
            v95 = v10;
            v94 = v78;
            v93 = v100;
            if (v87 < v86) {
                // 0x33f
                v92 = __asm_movapd(v10);
                sqrt(v92);
                v93 = __asm_xorpd(v100, v100);
                v94 = __asm_movsd(v80);
                v95 = __asm_movsd(v7);
            }
            // 0x2f0
            v99 = v93;
            v98 = v94;
            v96 = v95;
            v90 = __asm_mulsd_3(v92, *(int64_t *)(v88 + a6));
            *v89 = __asm_movsd_1(__asm_divsd(__asm_movsd(*v89), v90));
            v91++;
            v82 = v90;
            v83 = v96;
            v84 = v98;
            v85 = v99;
            while (v91 != v4) {
                // 0x317
                v100 = v99;
                v97 = v96;
                v88 = 8 * v91;
                v89 = (int64_t *)(v88 + v87);
                *v89 = __asm_movsd_1(__asm_subsd(__asm_movsd(*v89), *(int64_t *)(v88 + a5)));
                __asm_ucomisd(v97, v100);
                v92 = __asm_movapd(v98);
                v95 = v97;
                v94 = v98;
                v93 = v100;
                if (v87 < v86) {
                    // 0x33f
                    v92 = __asm_movapd(v97);
                    sqrt(v92);
                    v93 = __asm_xorpd(v100, v100);
                    v94 = __asm_movsd(v80);
                    v95 = __asm_movsd(v7);
                }
                // 0x2f0
                v99 = v93;
                v98 = v94;
                v96 = v95;
                v90 = __asm_mulsd_3(v92, *(int64_t *)(v88 + a6));
                *v89 = __asm_movsd_1(__asm_divsd(__asm_movsd(*v89), v90));
                v91++;
                v82 = v90;
                v83 = v96;
                v84 = v98;
                v85 = v99;
            }
        }
        int128_t v101 = v82;
        int64_t v102 = v81 + 1; // 0x2d0
        v75 = v101;
        while (v102 != (a2 & 0xffffffff)) {
            // 0x2de
            v81 = v102;
            int128_t v103 = v85;
            int128_t v104 = v84;
            int128_t v105 = v83;
            v82 = v101;
            v83 = v105;
            v84 = v104;
            v85 = v103;
            if (v6 >= 1) {
                // 0x317
                v86 = 0x2580 * v81;
                v87 = v86 + a3;
                v91 = 0;
                v100 = v103;
                v97 = v105;
                v88 = 8 * v91;
                v89 = (int64_t *)(v88 + v87);
                *v89 = __asm_movsd_1(__asm_subsd(__asm_movsd(*v89), *(int64_t *)(v88 + a5)));
                __asm_ucomisd(v97, v100);
                v92 = __asm_movapd(v104);
                v95 = v97;
                v94 = v104;
                v93 = v100;
                if (v87 < v86) {
                    // 0x33f
                    v92 = __asm_movapd(v97);
                    sqrt(v92);
                    v93 = __asm_xorpd(v100, v100);
                    v94 = __asm_movsd(v80);
                    v95 = __asm_movsd(v7);
                }
                // 0x2f0
                v99 = v93;
                v98 = v94;
                v96 = v95;
                v90 = __asm_mulsd_3(v92, *(int64_t *)(v88 + a6));
                *v89 = __asm_movsd_1(__asm_divsd(__asm_movsd(*v89), v90));
                v91++;
                v82 = v90;
                v83 = v96;
                v84 = v98;
                v85 = v99;
                while (v91 != v4) {
                    // 0x317
                    v100 = v99;
                    v97 = v96;
                    v88 = 8 * v91;
                    v89 = (int64_t *)(v88 + v87);
                    *v89 = __asm_movsd_1(__asm_subsd(__asm_movsd(*v89), *(int64_t *)(v88 + a5)));
                    __asm_ucomisd(v97, v100);
                    v92 = __asm_movapd(v98);
                    v95 = v97;
                    v94 = v98;
                    v93 = v100;
                    if (v87 < v86) {
                        // 0x33f
                        v92 = __asm_movapd(v97);
                        sqrt(v92);
                        v93 = __asm_xorpd(v100, v100);
                        v94 = __asm_movsd(v80);
                        v95 = __asm_movsd(v7);
                    }
                    // 0x2f0
                    v99 = v93;
                    v98 = v94;
                    v96 = v95;
                    v90 = __asm_mulsd_3(v92, *(int64_t *)(v88 + a6));
                    *v89 = __asm_movsd_1(__asm_divsd(__asm_movsd(*v89), v90));
                    v91++;
                    v82 = v90;
                    v83 = v96;
                    v84 = v98;
                    v85 = v99;
                }
            }
            // 0x2d0
            v101 = v82;
            v102 = v81 + 1;
            v75 = v101;
        }
    }
    int64_t v106 = a1 + 0xffffffff; // 0x35f
    int64_t v107; // 0x0
    if (v6 < 2) {
        // 0x4a7
        v107 = 0x100000000 * v106;
        *(int64_t *)((v107 >> 29) + a4 + 0x2580 * (v107 >> 32)) = 0x3ff0000000000000;
        return 0x3ff0000000000000;
    }
    int64_t v108 = 0; // 0x391
    int64_t v109 = 1;
    int64_t v110 = 0x2580 * v108 + a4; // 0x3b6
    int64_t v111 = 8 * v108; // 0x3b9
    *(int64_t *)(v110 + v111) = 0x3ff0000000000000;
    v108++;
    int128_t v112 = v75; // 0x3c8
    int64_t v113; // 0x0
    int64_t v114; // 0x0
    int64_t v115; // 0x427
    int128_t v116; // 0x42a
    int128_t v117; // 0x438
    int64_t v118; // 0x44e
    int128_t v119; // 0x451
    int128_t v120; // 0x45f
    int64_t v121; // 0x46b
    int64_t v122; // 0x48b
    int128_t v123; // 0x48e
    int128_t v124; // 0x49a
    int64_t v125; // 0x3ee
    int64_t * v126; // 0x3ee
    int128_t v127; // 0x0
    int64_t v128; // 0x3e4
    int128_t v129; // 0x0
    int128_t v130; // 0x0
    int128_t v131; // 0x0
    int128_t v132; // 0x0
    int128_t v133; // 0x0
    int128_t v134; // 0x0
    if (v108 < v4) {
        // 0x3ee
        v128 = v109;
        v131 = v75;
        v125 = 8 * v128;
        v126 = (int64_t *)(v125 + v110);
        *v126 = 0;
        v127 = __asm_xorpd(v131, v131);
        v129 = v127;
        if (v8 >= 1) {
            // 0x3fb
            v132 = v127;
            v113 = 0;
            v133 = v127;
            v114 = 0;
            if (v8 != 1) {
                v115 = 0x2580 * v113 + a3;
                v116 = __asm_movsd(*(int64_t *)(v115 + v111));
                v117 = __asm_addsd_2(__asm_mulsd_3(v116, *(int64_t *)(v115 + v125)), v132);
                *v126 = __asm_movsd_1(v117);
                v118 = 0x2580 * (v113 | 1) + a3;
                v119 = __asm_movsd(*(int64_t *)(v118 + v111));
                v120 = __asm_addsd_2(__asm_mulsd_3(v119, *(int64_t *)(v118 + v125)), v117);
                *v126 = __asm_movsd_1(v120);
                v121 = v113 + 2;
                v132 = v120;
                v113 = v121;
                v133 = v120;
                v114 = v121;
                while (v121 != (a2 & 0xfffffffe)) {
                    // 0x420
                    v115 = 0x2580 * v113 + a3;
                    v116 = __asm_movsd(*(int64_t *)(v115 + v111));
                    v117 = __asm_addsd_2(__asm_mulsd_3(v116, *(int64_t *)(v115 + v125)), v132);
                    *v126 = __asm_movsd_1(v117);
                    v118 = 0x2580 * (v113 | 1) + a3;
                    v119 = __asm_movsd(*(int64_t *)(v118 + v111));
                    v120 = __asm_addsd_2(__asm_mulsd_3(v119, *(int64_t *)(v118 + v125)), v117);
                    *v126 = __asm_movsd_1(v120);
                    v121 = v113 + 2;
                    v132 = v120;
                    v113 = v121;
                    v133 = v120;
                    v114 = v121;
                }
            }
            // 0x474
            v134 = v133;
            v129 = v134;
            if ((a2 & 1) != 0) {
                // 0x484
                v122 = 0x2580 * v114 + a3;
                v123 = __asm_movsd(*(int64_t *)(v122 + v111));
                v124 = __asm_addsd_2(v134, __asm_mulsd_3(v123, *(int64_t *)(v122 + v125)));
                *v126 = __asm_movsd_1(v124);
                v129 = v124;
            }
        }
        // 0x3d4
        v130 = v129;
        *(int64_t *)(v111 + a4 + 0x2580 * v128) = __asm_movsd_1(v130);
        v128++;
        v112 = v130;
        while (v128 != v4) {
            // 0x3ee
            v131 = v130;
            v125 = 8 * v128;
            v126 = (int64_t *)(v125 + v110);
            *v126 = 0;
            v127 = __asm_xorpd(v131, v131);
            v129 = v127;
            if (v8 >= 1) {
                // 0x3fb
                v132 = v127;
                v113 = 0;
                v133 = v127;
                v114 = 0;
                if (v8 != 1) {
                    v115 = 0x2580 * v113 + a3;
                    v116 = __asm_movsd(*(int64_t *)(v115 + v111));
                    v117 = __asm_addsd_2(__asm_mulsd_3(v116, *(int64_t *)(v115 + v125)), v132);
                    *v126 = __asm_movsd_1(v117);
                    v118 = 0x2580 * (v113 | 1) + a3;
                    v119 = __asm_movsd(*(int64_t *)(v118 + v111));
                    v120 = __asm_addsd_2(__asm_mulsd_3(v119, *(int64_t *)(v118 + v125)), v117);
                    *v126 = __asm_movsd_1(v120);
                    v121 = v113 + 2;
                    v132 = v120;
                    v113 = v121;
                    v133 = v120;
                    v114 = v121;
                    while (v121 != (a2 & 0xfffffffe)) {
                        // 0x420
                        v115 = 0x2580 * v113 + a3;
                        v116 = __asm_movsd(*(int64_t *)(v115 + v111));
                        v117 = __asm_addsd_2(__asm_mulsd_3(v116, *(int64_t *)(v115 + v125)), v132);
                        *v126 = __asm_movsd_1(v117);
                        v118 = 0x2580 * (v113 | 1) + a3;
                        v119 = __asm_movsd(*(int64_t *)(v118 + v111));
                        v120 = __asm_addsd_2(__asm_mulsd_3(v119, *(int64_t *)(v118 + v125)), v117);
                        *v126 = __asm_movsd_1(v120);
                        v121 = v113 + 2;
                        v132 = v120;
                        v113 = v121;
                        v133 = v120;
                        v114 = v121;
                    }
                }
                // 0x474
                v134 = v133;
                v129 = v134;
                if ((a2 & 1) != 0) {
                    // 0x484
                    v122 = 0x2580 * v114 + a3;
                    v123 = __asm_movsd(*(int64_t *)(v122 + v111));
                    v124 = __asm_addsd_2(v134, __asm_mulsd_3(v123, *(int64_t *)(v122 + v125)));
                    *v126 = __asm_movsd_1(v124);
                    v129 = v124;
                }
            }
            // 0x3d4
            v130 = v129;
            *(int64_t *)(v111 + a4 + 0x2580 * v128) = __asm_movsd_1(v130);
            v128++;
            v112 = v130;
        }
    }
    int64_t v135 = v109 + 1; // 0x3a6
    while (v108 != (v106 & 0xffffffff)) {
        // 0x3ac
        v109 = v135;
        int128_t v136 = v112;
        v110 = 0x2580 * v108 + a4;
        v111 = 8 * v108;
        *(int64_t *)(v110 + v111) = 0x3ff0000000000000;
        v108++;
        v112 = v136;
        if (v108 < v4) {
            // 0x3ee
            v128 = v109;
            v131 = v136;
            v125 = 8 * v128;
            v126 = (int64_t *)(v125 + v110);
            *v126 = 0;
            v127 = __asm_xorpd(v131, v131);
            v129 = v127;
            if (v8 >= 1) {
                // 0x3fb
                v132 = v127;
                v113 = 0;
                v133 = v127;
                v114 = 0;
                if (v8 != 1) {
                    v115 = 0x2580 * v113 + a3;
                    v116 = __asm_movsd(*(int64_t *)(v115 + v111));
                    v117 = __asm_addsd_2(__asm_mulsd_3(v116, *(int64_t *)(v115 + v125)), v132);
                    *v126 = __asm_movsd_1(v117);
                    v118 = 0x2580 * (v113 | 1) + a3;
                    v119 = __asm_movsd(*(int64_t *)(v118 + v111));
                    v120 = __asm_addsd_2(__asm_mulsd_3(v119, *(int64_t *)(v118 + v125)), v117);
                    *v126 = __asm_movsd_1(v120);
                    v121 = v113 + 2;
                    v132 = v120;
                    v113 = v121;
                    v133 = v120;
                    v114 = v121;
                    while (v121 != (a2 & 0xfffffffe)) {
                        // 0x420
                        v115 = 0x2580 * v113 + a3;
                        v116 = __asm_movsd(*(int64_t *)(v115 + v111));
                        v117 = __asm_addsd_2(__asm_mulsd_3(v116, *(int64_t *)(v115 + v125)), v132);
                        *v126 = __asm_movsd_1(v117);
                        v118 = 0x2580 * (v113 | 1) + a3;
                        v119 = __asm_movsd(*(int64_t *)(v118 + v111));
                        v120 = __asm_addsd_2(__asm_mulsd_3(v119, *(int64_t *)(v118 + v125)), v117);
                        *v126 = __asm_movsd_1(v120);
                        v121 = v113 + 2;
                        v132 = v120;
                        v113 = v121;
                        v133 = v120;
                        v114 = v121;
                    }
                }
                // 0x474
                v134 = v133;
                v129 = v134;
                if ((a2 & 1) != 0) {
                    // 0x484
                    v122 = 0x2580 * v114 + a3;
                    v123 = __asm_movsd(*(int64_t *)(v122 + v111));
                    v124 = __asm_addsd_2(v134, __asm_mulsd_3(v123, *(int64_t *)(v122 + v125)));
                    *v126 = __asm_movsd_1(v124);
                    v129 = v124;
                }
            }
            // 0x3d4
            v130 = v129;
            *(int64_t *)(v111 + a4 + 0x2580 * v128) = __asm_movsd_1(v130);
            v128++;
            v112 = v130;
            while (v128 != v4) {
                // 0x3ee
                v131 = v130;
                v125 = 8 * v128;
                v126 = (int64_t *)(v125 + v110);
                *v126 = 0;
                v127 = __asm_xorpd(v131, v131);
                v129 = v127;
                if (v8 >= 1) {
                    // 0x3fb
                    v132 = v127;
                    v113 = 0;
                    v133 = v127;
                    v114 = 0;
                    if (v8 != 1) {
                        v115 = 0x2580 * v113 + a3;
                        v116 = __asm_movsd(*(int64_t *)(v115 + v111));
                        v117 = __asm_addsd_2(__asm_mulsd_3(v116, *(int64_t *)(v115 + v125)), v132);
                        *v126 = __asm_movsd_1(v117);
                        v118 = 0x2580 * (v113 | 1) + a3;
                        v119 = __asm_movsd(*(int64_t *)(v118 + v111));
                        v120 = __asm_addsd_2(__asm_mulsd_3(v119, *(int64_t *)(v118 + v125)), v117);
                        *v126 = __asm_movsd_1(v120);
                        v121 = v113 + 2;
                        v132 = v120;
                        v113 = v121;
                        v133 = v120;
                        v114 = v121;
                        while (v121 != (a2 & 0xfffffffe)) {
                            // 0x420
                            v115 = 0x2580 * v113 + a3;
                            v116 = __asm_movsd(*(int64_t *)(v115 + v111));
                            v117 = __asm_addsd_2(__asm_mulsd_3(v116, *(int64_t *)(v115 + v125)), v132);
                            *v126 = __asm_movsd_1(v117);
                            v118 = 0x2580 * (v113 | 1) + a3;
                            v119 = __asm_movsd(*(int64_t *)(v118 + v111));
                            v120 = __asm_addsd_2(__asm_mulsd_3(v119, *(int64_t *)(v118 + v125)), v117);
                            *v126 = __asm_movsd_1(v120);
                            v121 = v113 + 2;
                            v132 = v120;
                            v113 = v121;
                            v133 = v120;
                            v114 = v121;
                        }
                    }
                    // 0x474
                    v134 = v133;
                    v129 = v134;
                    if ((a2 & 1) != 0) {
                        // 0x484
                        v122 = 0x2580 * v114 + a3;
                        v123 = __asm_movsd(*(int64_t *)(v122 + v111));
                        v124 = __asm_addsd_2(v134, __asm_mulsd_3(v123, *(int64_t *)(v122 + v125)));
                        *v126 = __asm_movsd_1(v124);
                        v129 = v124;
                    }
                }
                // 0x3d4
                v130 = v129;
                *(int64_t *)(v111 + a4 + 0x2580 * v128) = __asm_movsd_1(v130);
                v128++;
                v112 = v130;
            }
        }
        // 0x3a0
        v135 = v109 + 1;
    }
    // 0x4a7
    v107 = 0x100000000 * v106;
    *(int64_t *)((v107 >> 29) + a4 + 0x2580 * (v107 >> 32)) = 0x3ff0000000000000;
    return 0x3ff0000000000000;
}
