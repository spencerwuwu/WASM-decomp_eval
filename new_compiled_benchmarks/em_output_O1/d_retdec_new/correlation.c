
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
    int128_t v3 = __asm_movapd(v1); // 0x14
    int64_t v4 = a1 & 0xffffffff; // 0x18
    int64_t v5 = 0x100000000 * a2 >> 32; // 0x22
    uint64_t v6 = a2 & 0xffffffff; // 0x26
    int32_t v7 = a1; // 0x28
    int32_t v8; // 0x0
    int64_t v9; // 0x0
    int128_t v10; // 0x0
    int128_t v11; // 0x0
    int128_t v12; // 0x0
    if (v7 < 1) {
        // 0x90
        v8 = v5;
        v9 = __asm_movsd_1(v3);
        v10 = v3;
    } else {
        uint32_t v13 = (int32_t)v5;
        int64_t v14 = 0; // 0x42
        int64_t v15 = 8 * v14; // 0x4c
        int64_t * v16 = (int64_t *)(v15 + a5); // 0x4c
        *v16 = 0;
        int64_t v17 = 0; // 0x5a
        int128_t v18; // 0x7a
        int64_t v19; // 0x7f
        int64_t v20; // 0x86
        if (v13 >= 1) {
            // 0x5c
            v18 = __asm_movsd(0);
            v20 = 0;
            v18 = __asm_addsd_2(v18, *(int64_t *)(v15 + a3 + 0x2580 * v20));
            v19 = __asm_movsd_1(v18);
            *v16 = v19;
            v20++;
            v17 = v19;
            while (v20 != v6) {
                // 0x70
                v18 = __asm_addsd_2(v18, *(int64_t *)(v15 + a3 + 0x2580 * v20));
                v19 = __asm_movsd_1(v18);
                *v16 = v19;
                v20++;
                v17 = v19;
            }
        }
        // 0x30
        *v16 = __asm_movsd_1(__asm_divsd(__asm_movsd(v17), v3));
        v14++;
        while (v14 != v4) {
            // 0x4c
            v15 = 8 * v14;
            v16 = (int64_t *)(v15 + a5);
            *v16 = 0;
            v17 = 0;
            if (v13 >= 1) {
                // 0x5c
                v18 = __asm_movsd(0);
                v20 = 0;
                v18 = __asm_addsd_2(v18, *(int64_t *)(v15 + a3 + 0x2580 * v20));
                v19 = __asm_movsd_1(v18);
                *v16 = v19;
                v20++;
                v17 = v19;
                while (v20 != v6) {
                    // 0x70
                    v18 = __asm_addsd_2(v18, *(int64_t *)(v15 + a3 + 0x2580 * v20));
                    v19 = __asm_movsd_1(v18);
                    *v16 = v19;
                    v20++;
                    v17 = v19;
                }
            }
            // 0x30
            *v16 = __asm_movsd_1(__asm_divsd(__asm_movsd(v17), v3));
            v14++;
        }
        int64_t v21 = __asm_movsd_1(v3); // 0x9d
        int128_t v22 = __asm_xorpd(v2, v2); // 0xbf
        int128_t v23 = __asm_movsd(0x3fb999999999999a); // 0xbf
        int128_t v24 = __asm_movsd(0x3ff0000000000000); // 0xbf
        int64_t v25 = 0; // 0xbf
        int128_t v26 = v24;
        int128_t v27 = v23;
        int128_t v28 = v22;
        int64_t v29 = 8 * v25; // 0x119
        int64_t * v30 = (int64_t *)(v29 + a6); // 0x119
        *v30 = 0;
        int64_t v31 = 0; // 0x126
        bool v32 = false; // 0x126
        int64_t v33; // 0x0
        int128_t v34; // 0x13a
        int128_t v35; // 0x13f
        int64_t v36; // 0x150
        int64_t v37; // 0x156
        if (v13 >= 1) {
            // 0x130
            v33 = 0;
            v34 = __asm_movsd(*(int64_t *)(v29 + a3 + 0x2580 * v33));
            v35 = __asm_subsd(v34, *(int64_t *)(v29 + a5));
            v36 = __asm_movsd_1(__asm_addsd_2(__asm_mulsd(v35, v35), *v30));
            *v30 = v36;
            v37 = v33 + 1;
            v33 = v37;
            while (v37 != v6) {
                // 0x130
                v34 = __asm_movsd(*(int64_t *)(v29 + a3 + 0x2580 * v33));
                v35 = __asm_subsd(v34, *(int64_t *)(v29 + a5));
                v36 = __asm_movsd_1(__asm_addsd_2(__asm_mulsd(v35, v35), *v30));
                *v30 = v36;
                v37 = v33 + 1;
                v33 = v37;
            }
            // 0x15e
            v31 = v36;
            v32 = v37 < v6;
        }
        int128_t v38 = __asm_divsd(__asm_movsd(v31), v3); // 0x164
        __asm_ucomisd(v38, v28);
        int128_t v39; // 0xd5
        int128_t v40; // 0xdd
        int128_t v41; // 0xe5
        int128_t v42; // 0x0
        int128_t v43; // 0x0
        int128_t v44; // 0x0
        int128_t v45; // 0x0
        int128_t v46; // 0x0
        if (v32) {
            // 0xd0
            sqrt(v38);
            v39 = __asm_movsd(0x3ff0000000000000);
            v40 = __asm_movsd(0x3fb999999999999a);
            v41 = __asm_xorpd(v28, v28);
            v42 = v38;
            v43 = __asm_movsd(v21);
            v44 = v41;
            v45 = v40;
            v46 = v39;
        } else {
            // 0x172
            v42 = __asm_sqrtsd(v38);
            v43 = v3;
            v44 = v28;
            v45 = v27;
            v46 = v26;
        }
        // 0xf4
        v24 = v46;
        v23 = v45;
        v22 = v44;
        int128_t v47 = v43;
        int128_t v48 = __asm_cmpnlesd(__asm_movapd(v42), v23); // 0xf8
        __asm_movlpd(*v30, __asm_orpd(__asm_andnpd(v48, v24), __asm_andpd(v42, v48)));
        v25++;
        v8 = v13;
        v9 = v21;
        v10 = v47;
        v11 = v22;
        v12 = v23;
        while (v25 != v4) {
            // 0x119
            v26 = v24;
            v27 = v23;
            v28 = v22;
            int128_t v49 = v47;
            v29 = 8 * v25;
            v30 = (int64_t *)(v29 + a6);
            *v30 = 0;
            v31 = 0;
            v32 = false;
            if (v13 >= 1) {
                // 0x130
                v33 = 0;
                v34 = __asm_movsd(*(int64_t *)(v29 + a3 + 0x2580 * v33));
                v35 = __asm_subsd(v34, *(int64_t *)(v29 + a5));
                v36 = __asm_movsd_1(__asm_addsd_2(__asm_mulsd(v35, v35), *v30));
                *v30 = v36;
                v37 = v33 + 1;
                v33 = v37;
                while (v37 != v6) {
                    // 0x130
                    v34 = __asm_movsd(*(int64_t *)(v29 + a3 + 0x2580 * v33));
                    v35 = __asm_subsd(v34, *(int64_t *)(v29 + a5));
                    v36 = __asm_movsd_1(__asm_addsd_2(__asm_mulsd(v35, v35), *v30));
                    *v30 = v36;
                    v37 = v33 + 1;
                    v33 = v37;
                }
                // 0x15e
                v31 = v36;
                v32 = v37 < v6;
            }
            // 0x15e
            v38 = __asm_divsd(__asm_movsd(v31), v49);
            __asm_ucomisd(v38, v28);
            if (v32) {
                // 0xd0
                sqrt(v38);
                v39 = __asm_movsd(0x3ff0000000000000);
                v40 = __asm_movsd(0x3fb999999999999a);
                v41 = __asm_xorpd(v28, v28);
                v42 = v38;
                v43 = __asm_movsd(v21);
                v44 = v41;
                v45 = v40;
                v46 = v39;
            } else {
                // 0x172
                v42 = __asm_sqrtsd(v38);
                v43 = v49;
                v44 = v28;
                v45 = v27;
                v46 = v26;
            }
            // 0xf4
            v24 = v46;
            v23 = v45;
            v22 = v44;
            v47 = v43;
            v48 = __asm_cmpnlesd(__asm_movapd(v42), v23);
            __asm_movlpd(*v30, __asm_orpd(__asm_andnpd(v48, v24), __asm_andpd(v42, v48)));
            v25++;
            v8 = v13;
            v9 = v21;
            v10 = v47;
            v11 = v22;
            v12 = v23;
        }
    }
    // 0x17b
    if (v8 >= 1) {
        int128_t v50 = v12;
        int128_t v51 = v11;
        __asm_xorps(v51, v51);
        int128_t v52 = __asm_sqrtsd(v10); // 0x18b
        int128_t v53 = __asm_xorpd(v50, v50); // 0x18f
        int64_t v54 = __asm_movsd_1(v52); // 0x198
        int64_t v55 = 0;
        int128_t v56 = v10; // 0x1b0
        int128_t v57 = v52; // 0x1b0
        int128_t v58 = v53; // 0x1b0
        uint64_t v59; // 0x1e0
        uint64_t v60; // 0x1e7
        int64_t v61; // 0x1ea
        int64_t * v62; // 0x1ea
        int128_t v63; // 0x1c4
        int64_t v64; // 0x1d6
        int128_t v65; // 0x207
        int128_t v66; // 0x210
        int128_t v67; // 0x214
        int128_t v68; // 0x0
        int128_t v69; // 0x0
        int128_t v70; // 0x0
        int128_t v71; // 0x0
        int128_t v72; // 0x0
        int128_t v73; // 0x0
        if (v7 >= 1) {
            // 0x1e0
            v59 = 0x2580 * v55;
            v60 = v59 + a3;
            v64 = 0;
            v73 = v53;
            v61 = 8 * v64;
            v62 = (int64_t *)(v61 + v60);
            *v62 = __asm_movsd_1(__asm_subsd(__asm_movsd(*v62), *(int64_t *)(v61 + a5)));
            __asm_ucomisd(v10, v73);
            v65 = __asm_movapd(v52);
            v68 = v10;
            v67 = v52;
            v66 = v73;
            if (v60 < v59) {
                // 0x207
                v65 = __asm_movapd(v10);
                sqrt(v65);
                v66 = __asm_xorpd(v73, v73);
                v67 = __asm_movsd(v54);
                v68 = __asm_movsd(v9);
            }
            // 0x1c0
            v72 = v66;
            v71 = v67;
            v69 = v68;
            v63 = __asm_mulsd_3(v65, *(int64_t *)(v61 + a6));
            *v62 = __asm_movsd_1(__asm_divsd(__asm_movsd(*v62), v63));
            v64++;
            v56 = v69;
            v57 = v71;
            v58 = v72;
            while (v64 != v4) {
                // 0x1e0
                v73 = v72;
                v70 = v69;
                v61 = 8 * v64;
                v62 = (int64_t *)(v61 + v60);
                *v62 = __asm_movsd_1(__asm_subsd(__asm_movsd(*v62), *(int64_t *)(v61 + a5)));
                __asm_ucomisd(v70, v73);
                v65 = __asm_movapd(v71);
                v68 = v70;
                v67 = v71;
                v66 = v73;
                if (v60 < v59) {
                    // 0x207
                    v65 = __asm_movapd(v70);
                    sqrt(v65);
                    v66 = __asm_xorpd(v73, v73);
                    v67 = __asm_movsd(v54);
                    v68 = __asm_movsd(v9);
                }
                // 0x1c0
                v72 = v66;
                v71 = v67;
                v69 = v68;
                v63 = __asm_mulsd_3(v65, *(int64_t *)(v61 + a6));
                *v62 = __asm_movsd_1(__asm_divsd(__asm_movsd(*v62), v63));
                v64++;
                v56 = v69;
                v57 = v71;
                v58 = v72;
            }
        }
        int64_t v74 = v55 + 1; // 0x1a0
        while (v74 != v6) {
            // 0x1ad
            v55 = v74;
            int128_t v75 = v58;
            int128_t v76 = v57;
            int128_t v77 = v56;
            v56 = v77;
            v57 = v76;
            v58 = v75;
            if (v7 >= 1) {
                // 0x1e0
                v59 = 0x2580 * v55;
                v60 = v59 + a3;
                v64 = 0;
                v73 = v75;
                v70 = v77;
                v61 = 8 * v64;
                v62 = (int64_t *)(v61 + v60);
                *v62 = __asm_movsd_1(__asm_subsd(__asm_movsd(*v62), *(int64_t *)(v61 + a5)));
                __asm_ucomisd(v70, v73);
                v65 = __asm_movapd(v76);
                v68 = v70;
                v67 = v76;
                v66 = v73;
                if (v60 < v59) {
                    // 0x207
                    v65 = __asm_movapd(v70);
                    sqrt(v65);
                    v66 = __asm_xorpd(v73, v73);
                    v67 = __asm_movsd(v54);
                    v68 = __asm_movsd(v9);
                }
                // 0x1c0
                v72 = v66;
                v71 = v67;
                v69 = v68;
                v63 = __asm_mulsd_3(v65, *(int64_t *)(v61 + a6));
                *v62 = __asm_movsd_1(__asm_divsd(__asm_movsd(*v62), v63));
                v64++;
                v56 = v69;
                v57 = v71;
                v58 = v72;
                while (v64 != v4) {
                    // 0x1e0
                    v73 = v72;
                    v70 = v69;
                    v61 = 8 * v64;
                    v62 = (int64_t *)(v61 + v60);
                    *v62 = __asm_movsd_1(__asm_subsd(__asm_movsd(*v62), *(int64_t *)(v61 + a5)));
                    __asm_ucomisd(v70, v73);
                    v65 = __asm_movapd(v71);
                    v68 = v70;
                    v67 = v71;
                    v66 = v73;
                    if (v60 < v59) {
                        // 0x207
                        v65 = __asm_movapd(v70);
                        sqrt(v65);
                        v66 = __asm_xorpd(v73, v73);
                        v67 = __asm_movsd(v54);
                        v68 = __asm_movsd(v9);
                    }
                    // 0x1c0
                    v72 = v66;
                    v71 = v67;
                    v69 = v68;
                    v63 = __asm_mulsd_3(v65, *(int64_t *)(v61 + a6));
                    *v62 = __asm_movsd_1(__asm_divsd(__asm_movsd(*v62), v63));
                    v64++;
                    v56 = v69;
                    v57 = v71;
                    v58 = v72;
                }
            }
            // 0x1a0
            v74 = v55 + 1;
        }
    }
    int64_t v78 = a1 + 0xffffffff; // 0x227
    int64_t v79; // 0x0
    if (v7 < 2) {
        // 0x2fb
        v79 = 0x100000000 * v78;
        *(int64_t *)((v79 >> 29) + a4 + 0x2580 * (v79 >> 32)) = 0x3ff0000000000000;
        return 0x3ff0000000000000;
    }
    int64_t v80 = 0; // 0x251
    int64_t v81 = 1;
    int64_t v82 = 0x2580 * v80 + a4; // 0x276
    int64_t v83 = 8 * v80; // 0x279
    *(int64_t *)(v82 + v83) = 0x3ff0000000000000;
    v80++;
    int64_t v84; // 0x0
    int64_t v85; // 0x2af
    int64_t * v86; // 0x2b3
    int64_t v87; // 0x2a5
    int64_t v88; // 0x2d7
    int128_t v89; // 0x2da
    int128_t v90; // 0x2e8
    int64_t v91; // 0x2ec
    int64_t v92; // 0x2f1
    if (v80 < 0x100000000 * a1 >> 32) {
        // 0x2af
        v87 = v81;
        v85 = 8 * v87;
        v86 = (int64_t *)(v85 + v82);
        *v86 = 0;
        v84 = 0;
        if (v8 >= 1) {
            // 0x2c2
            v90 = __asm_movsd(0);
            v92 = 0;
            v88 = 0x2580 * v92 + a3;
            v89 = __asm_movsd(*(int64_t *)(v88 + v83));
            v90 = __asm_addsd(v90, __asm_mulsd_3(v89, *(int64_t *)(v88 + v85)));
            v91 = __asm_movsd_1(v90);
            *v86 = v91;
            v92++;
            v84 = v91;
            while (v92 != v6) {
                // 0x2d0
                v88 = 0x2580 * v92 + a3;
                v89 = __asm_movsd(*(int64_t *)(v88 + v83));
                v90 = __asm_addsd(v90, __asm_mulsd_3(v89, *(int64_t *)(v88 + v85)));
                v91 = __asm_movsd_1(v90);
                *v86 = v91;
                v92++;
                v84 = v91;
            }
        }
        // 0x290
        *(int64_t *)(v83 + a4 + 0x2580 * v87) = __asm_movsd_1(__asm_movsd(v84));
        v87++;
        while (v87 != v4) {
            // 0x2af
            v85 = 8 * v87;
            v86 = (int64_t *)(v85 + v82);
            *v86 = 0;
            v84 = 0;
            if (v8 >= 1) {
                // 0x2c2
                v90 = __asm_movsd(0);
                v92 = 0;
                v88 = 0x2580 * v92 + a3;
                v89 = __asm_movsd(*(int64_t *)(v88 + v83));
                v90 = __asm_addsd(v90, __asm_mulsd_3(v89, *(int64_t *)(v88 + v85)));
                v91 = __asm_movsd_1(v90);
                *v86 = v91;
                v92++;
                v84 = v91;
                while (v92 != v6) {
                    // 0x2d0
                    v88 = 0x2580 * v92 + a3;
                    v89 = __asm_movsd(*(int64_t *)(v88 + v83));
                    v90 = __asm_addsd(v90, __asm_mulsd_3(v89, *(int64_t *)(v88 + v85)));
                    v91 = __asm_movsd_1(v90);
                    *v86 = v91;
                    v92++;
                    v84 = v91;
                }
            }
            // 0x290
            *(int64_t *)(v83 + a4 + 0x2580 * v87) = __asm_movsd_1(__asm_movsd(v84));
            v87++;
        }
    }
    int64_t v93 = v81 + 1; // 0x266
    while (v80 != (v78 & 0xffffffff)) {
        // 0x26c
        v81 = v93;
        v82 = 0x2580 * v80 + a4;
        v83 = 8 * v80;
        *(int64_t *)(v82 + v83) = 0x3ff0000000000000;
        v80++;
        if (v80 < 0x100000000 * a1 >> 32) {
            // 0x2af
            v87 = v81;
            v85 = 8 * v87;
            v86 = (int64_t *)(v85 + v82);
            *v86 = 0;
            v84 = 0;
            if (v8 >= 1) {
                // 0x2c2
                v90 = __asm_movsd(0);
                v92 = 0;
                v88 = 0x2580 * v92 + a3;
                v89 = __asm_movsd(*(int64_t *)(v88 + v83));
                v90 = __asm_addsd(v90, __asm_mulsd_3(v89, *(int64_t *)(v88 + v85)));
                v91 = __asm_movsd_1(v90);
                *v86 = v91;
                v92++;
                v84 = v91;
                while (v92 != v6) {
                    // 0x2d0
                    v88 = 0x2580 * v92 + a3;
                    v89 = __asm_movsd(*(int64_t *)(v88 + v83));
                    v90 = __asm_addsd(v90, __asm_mulsd_3(v89, *(int64_t *)(v88 + v85)));
                    v91 = __asm_movsd_1(v90);
                    *v86 = v91;
                    v92++;
                    v84 = v91;
                }
            }
            // 0x290
            *(int64_t *)(v83 + a4 + 0x2580 * v87) = __asm_movsd_1(__asm_movsd(v84));
            v87++;
            while (v87 != v4) {
                // 0x2af
                v85 = 8 * v87;
                v86 = (int64_t *)(v85 + v82);
                *v86 = 0;
                v84 = 0;
                if (v8 >= 1) {
                    // 0x2c2
                    v90 = __asm_movsd(0);
                    v92 = 0;
                    v88 = 0x2580 * v92 + a3;
                    v89 = __asm_movsd(*(int64_t *)(v88 + v83));
                    v90 = __asm_addsd(v90, __asm_mulsd_3(v89, *(int64_t *)(v88 + v85)));
                    v91 = __asm_movsd_1(v90);
                    *v86 = v91;
                    v92++;
                    v84 = v91;
                    while (v92 != v6) {
                        // 0x2d0
                        v88 = 0x2580 * v92 + a3;
                        v89 = __asm_movsd(*(int64_t *)(v88 + v83));
                        v90 = __asm_addsd(v90, __asm_mulsd_3(v89, *(int64_t *)(v88 + v85)));
                        v91 = __asm_movsd_1(v90);
                        *v86 = v91;
                        v92++;
                        v84 = v91;
                    }
                }
                // 0x290
                *(int64_t *)(v83 + a4 + 0x2580 * v87) = __asm_movsd_1(__asm_movsd(v84));
                v87++;
            }
        }
        // 0x260
        v93 = v81 + 1;
    }
    // 0x2fb
    v79 = 0x100000000 * v78;
    *(int64_t *)((v79 >> 29) + a4 + 0x2580 * (v79 >> 32)) = 0x3ff0000000000000;
    return 0x3ff0000000000000;
}
