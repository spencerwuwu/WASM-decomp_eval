
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>
#include <math.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "deriche.h"
int64_t kernel_deriche(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = 0x100000000 * a2 >> 32; // 0xe
    int128_t v2; // 0x0
    int32_t v3 = __asm_movss_1(v2); // 0x11
    int128_t v4 = __asm_movd_2(__asm_movd(__asm_movss(v3)) ^ -0x80000000); // 0x34
    expf(v4);
    int64_t v5 = __asm_movss_1(__asm_subss(__asm_movss(0x3f800000), __asm_movaps(v4))); // 0x4c
    int128_t v6 = __asm_movd_2(__asm_movd(__asm_movss(v3)) ^ -0x80000000); // 0x62
    expf(v6);
    int128_t v7 = __asm_movaps(v6); // 0x6b
    int128_t v8 = __asm_movss((int32_t)v5); // 0x6e
    int64_t v9 = __asm_movss_1(__asm_mulss(v8, __asm_subss(__asm_movss(0x3f800000), v7))); // 0x86
    int64_t v10 = __asm_movss_1(__asm_mulss_3(__asm_movss(0x40000000), v3)); // 0x9b
    int128_t v11 = __asm_movd_2(__asm_movd(__asm_movss(v3)) ^ -0x80000000); // 0xb1
    expf(v11);
    int128_t v12 = __asm_mulss(__asm_movss((int32_t)v10), __asm_movaps(v11)); // 0xc5
    int64_t v13 = __asm_movss_1(__asm_addss(v12, __asm_movss(0x3f800000))); // 0xd5
    int128_t v14 = __asm_mulss_3(__asm_movss(0x40000000), v3); // 0xe5
    expf(v14);
    int128_t v15 = __asm_movss((int32_t)v13); // 0xef
    int128_t v16 = __asm_divss(__asm_movss((int32_t)v9), __asm_subss(v15, __asm_movaps(v14))); // 0x106
    int32_t v17 = __asm_movss_1(v16); // 0x10a
    int128_t v18 = __asm_movss(v17); // 0x10f
    int64_t v19 = __asm_movss_1(v18); // 0x114
    int64_t v20 = __asm_movss_1(v18); // 0x119
    int64_t v21 = __asm_movss_1(__asm_movss(v17)); // 0x123
    int128_t v22 = __asm_movd_2(__asm_movd(__asm_movss(v3)) ^ -0x80000000); // 0x139
    expf(v22);
    int128_t v23 = __asm_mulss(__asm_movss((int32_t)v21), __asm_movaps(v22)); // 0x14d
    int128_t v24 = __asm_mulss(v23, __asm_subss(__asm_movss(v3), __asm_movss(0x3f800000))); // 0x162
    int64_t v25 = __asm_movss_1(v24); // 0x166
    int64_t v26 = __asm_movss_1(v24); // 0x16b
    int64_t v27 = __asm_movss_1(__asm_movss(v17)); // 0x175
    int128_t v28 = __asm_movd_2(__asm_movd(__asm_movss(v3)) ^ -0x80000000); // 0x18b
    expf(v28);
    int128_t v29 = __asm_mulss(__asm_movss((int32_t)v27), __asm_movaps(v28)); // 0x19f
    int128_t v30 = __asm_mulss(v29, __asm_addss_4(__asm_movss(0x3f800000), v3)); // 0x1b0
    int64_t v31 = __asm_movss_1(v30); // 0x1b4
    int64_t v32 = __asm_movss_1(v30); // 0x1b9
    int64_t v33 = __asm_movss_1(__asm_movd_2(__asm_movd(__asm_movss(v17)) ^ -0x80000000)); // 0x1d0
    int128_t v34 = __asm_mulss_3(__asm_movss(-0x40000000), v3); // 0x1e0
    expf(v34);
    int128_t v35 = __asm_mulss(__asm_movss((int32_t)v33), __asm_movaps(v34)); // 0x1f5
    int64_t v36 = __asm_movss_1(v35); // 0x1f9
    int64_t v37 = __asm_movss_1(v35); // 0x201
    __asm_movd_2(__asm_movd(__asm_movss(v3)) ^ -0x80000000);
    int128_t v38 = __asm_movss(0x40000000); // 0x218
    _powf(v38);
    int32_t v39 = __asm_movss_1(v38); // 0x225
    int128_t v40 = __asm_mulss_3(__asm_movss(-0x40000000), v3); // 0x235
    expf(v40);
    int32_t v41 = __asm_movss_1(__asm_movd_2(__asm_movd(v40) ^ -0x80000000)); // 0x24c
    int64_t v42 = __asm_movss_1(__asm_movss(0x3f800000)); // 0x25c
    int128_t v43 = __asm_movss(0x3f800000); // 0x264
    int64_t v44 = __asm_movss_1(v43); // 0x26c
    int32_t v45 = a1; // 0x27e
    int32_t v46 = v1;
    int128_t v47 = v43; // 0x281
    if (v45 > 0) {
        int64_t v48 = v1 & 0xffffffff;
        int64_t v49 = a1 & 0xffffffff;
        int128_t v50 = v43;
        int64_t v51 = 0;
        int128_t v52 = __asm_xorps(v50, v50); // 0x287
        int64_t v53 = __asm_movss_1(v52); // 0x28a
        int128_t v54 = __asm_xorps(v52, v52); // 0x28f
        int64_t v55 = __asm_movss_1(v54); // 0x292
        int128_t v56 = __asm_xorps(v54, v54); // 0x297
        int64_t v57 = __asm_movss_1(v56); // 0x29a
        int128_t v58 = v56; // 0x2ac
        int64_t v59; // 0x0
        int32_t v60; // 0x0
        int64_t v61; // 0x0
        int128_t v62; // 0x2b2
        int64_t v63; // 0x0
        int32_t * v64; // 0x2cd
        int128_t v65; // 0x2cd
        int128_t v66; // 0x2d7
        int128_t v67; // 0x2e0
        int128_t v68; // 0x2f5
        int64_t v69; // 0x324
        int32_t * v70; // 0x324
        int64_t v71; // 0x344
        int64_t v72; // 0x34e
        int128_t v73; // 0x369
        if (v46 > 0) {
            // 0x2b2
            v59 = 0;
            v60 = v53;
            v62 = __asm_movss((int32_t)v20);
            v63 = 4 * v59 + 0x21c0 * v51;
            v64 = (int32_t *)(v63 + a3);
            v65 = __asm_movss(*v64);
            v66 = __asm_mulss_3(__asm_movss((int32_t)v26), (int32_t)v57);
            v67 = __asm_addss(__asm_mulss(v62, v65), v66);
            v68 = __asm_addss(__asm_mulss(__asm_movss(v39), __asm_movss(v60)), v67);
            v69 = __asm_movss_1(__asm_addss(__asm_mulss(__asm_movss(v41), __asm_movss((int32_t)v55)), v68));
            v70 = (int32_t *)(v63 + a5);
            *v70 = (int32_t)v69;
            v71 = __asm_movss_1(__asm_movss(*v64));
            v72 = __asm_movss_1(__asm_movss(v60));
            v73 = __asm_movss(*v70);
            v59++;
            v61 = __asm_movss_1(v73);
            v58 = v73;
            while (v59 != v48) {
                // 0x2b2
                v60 = v61;
                v62 = __asm_movss((int32_t)v20);
                v63 = 4 * v59 + 0x21c0 * v51;
                v64 = (int32_t *)(v63 + a3);
                v65 = __asm_movss(*v64);
                v66 = __asm_mulss_3(__asm_movss((int32_t)v26), (int32_t)v71);
                v67 = __asm_addss(__asm_mulss(v62, v65), v66);
                v68 = __asm_addss(__asm_mulss(__asm_movss(v39), __asm_movss(v60)), v67);
                v69 = __asm_movss_1(__asm_addss(__asm_mulss(__asm_movss(v41), __asm_movss((int32_t)v72)), v68));
                v70 = (int32_t *)(v63 + a5);
                *v70 = (int32_t)v69;
                v71 = __asm_movss_1(__asm_movss(*v64));
                v72 = __asm_movss_1(__asm_movss(v60));
                v73 = __asm_movss(*v70);
                v59++;
                v61 = __asm_movss_1(v73);
                v58 = v73;
            }
        }
        int128_t v74 = v58;
        int64_t v75 = v51 + 1;
        while (v75 != v49) {
            // 0x287
            v50 = v74;
            v51 = v75;
            v52 = __asm_xorps(v50, v50);
            v53 = __asm_movss_1(v52);
            v54 = __asm_xorps(v52, v52);
            v55 = __asm_movss_1(v54);
            v56 = __asm_xorps(v54, v54);
            v57 = __asm_movss_1(v56);
            v58 = v56;
            if (v46 > 0) {
                // 0x2b2
                v59 = 0;
                v60 = v53;
                v62 = __asm_movss((int32_t)v20);
                v63 = 4 * v59 + 0x21c0 * v51;
                v64 = (int32_t *)(v63 + a3);
                v65 = __asm_movss(*v64);
                v66 = __asm_mulss_3(__asm_movss((int32_t)v26), (int32_t)v57);
                v67 = __asm_addss(__asm_mulss(v62, v65), v66);
                v68 = __asm_addss(__asm_mulss(__asm_movss(v39), __asm_movss(v60)), v67);
                v69 = __asm_movss_1(__asm_addss(__asm_mulss(__asm_movss(v41), __asm_movss((int32_t)v55)), v68));
                v70 = (int32_t *)(v63 + a5);
                *v70 = (int32_t)v69;
                v71 = __asm_movss_1(__asm_movss(*v64));
                v72 = __asm_movss_1(__asm_movss(v60));
                v73 = __asm_movss(*v70);
                v59++;
                v61 = __asm_movss_1(v73);
                v58 = v73;
                while (v59 != v48) {
                    // 0x2b2
                    v60 = v61;
                    v62 = __asm_movss((int32_t)v20);
                    v63 = 4 * v59 + 0x21c0 * v51;
                    v64 = (int32_t *)(v63 + a3);
                    v65 = __asm_movss(*v64);
                    v66 = __asm_mulss_3(__asm_movss((int32_t)v26), (int32_t)v71);
                    v67 = __asm_addss(__asm_mulss(v62, v65), v66);
                    v68 = __asm_addss(__asm_mulss(__asm_movss(v39), __asm_movss(v60)), v67);
                    v69 = __asm_movss_1(__asm_addss(__asm_mulss(__asm_movss(v41), __asm_movss((int32_t)v72)), v68));
                    v70 = (int32_t *)(v63 + a5);
                    *v70 = (int32_t)v69;
                    v71 = __asm_movss_1(__asm_movss(*v64));
                    v72 = __asm_movss_1(__asm_movss(v60));
                    v73 = __asm_movss(*v70);
                    v59++;
                    v61 = __asm_movss_1(v73);
                    v58 = v73;
                }
            }
            // 0x386
            v74 = v58;
            v75 = v51 + 1;
        }
        int32_t v76 = v46 - 1;
        int128_t v77 = v74;
        int64_t v78 = 0;
        int128_t v79 = __asm_xorps(v77, v77); // 0x3a7
        int64_t v80 = __asm_movss_1(v79); // 0x3aa
        int128_t v81 = __asm_xorps(v79, v79); // 0x3af
        int64_t v82 = __asm_movss_1(v81); // 0x3b2
        int128_t v83 = __asm_xorps(v81, v81); // 0x3b7
        int64_t v84 = __asm_movss_1(v83); // 0x3ba
        int128_t v85 = __asm_xorps(v83, v83); // 0x3bf
        int64_t v86 = __asm_movss_1(v85); // 0x3c2
        int128_t v87 = v85; // 0x3d4
        int64_t v88; // 0x0
        int32_t v89; // 0x0
        int64_t v90; // 0x0
        int32_t v91; // 0x0
        int32_t v92; // 0x0
        int128_t v93; // 0x3da
        int128_t v94; // 0x3df
        int128_t v95; // 0x3e9
        int128_t v96; // 0x3f2
        int128_t v97; // 0x407
        int64_t v98; // 0x436
        int64_t v99; // 0x0
        int32_t * v100; // 0x436
        int64_t v101; // 0x440
        int64_t v102; // 0x460
        int64_t v103; // 0x46a
        int128_t v104; // 0x485
        if (v76 >= 0) {
            // 0x3da
            v88 = v76;
            v92 = v76;
            v91 = v84;
            v89 = v80;
            v93 = __asm_movss((int32_t)v32);
            v94 = __asm_movss(v91);
            v95 = __asm_mulss_3(__asm_movss((int32_t)v37), (int32_t)v86);
            v96 = __asm_addss(__asm_mulss(v93, v94), v95);
            v97 = __asm_addss(__asm_mulss(__asm_movss(v39), __asm_movss(v89)), v96);
            v98 = __asm_movss_1(__asm_addss(__asm_mulss(__asm_movss(v41), __asm_movss((int32_t)v82)), v97));
            v99 = 4 * v88 + 0x21c0 * v78;
            v100 = (int32_t *)(v99 + a6);
            *v100 = (int32_t)v98;
            v101 = __asm_movss_1(__asm_movss(v91));
            v102 = __asm_movss_1(__asm_movss(*(int32_t *)(v99 + a3)));
            v103 = __asm_movss_1(__asm_movss(v89));
            v104 = __asm_movss(*v100);
            v92--;
            v88--;
            v90 = __asm_movss_1(v104);
            v87 = v104;
            while (v92 >= 0) {
                // 0x3da
                v91 = v102;
                v89 = v90;
                v93 = __asm_movss((int32_t)v32);
                v94 = __asm_movss(v91);
                v95 = __asm_mulss_3(__asm_movss((int32_t)v37), (int32_t)v101);
                v96 = __asm_addss(__asm_mulss(v93, v94), v95);
                v97 = __asm_addss(__asm_mulss(__asm_movss(v39), __asm_movss(v89)), v96);
                v98 = __asm_movss_1(__asm_addss(__asm_mulss(__asm_movss(v41), __asm_movss((int32_t)v103)), v97));
                v99 = 4 * v88 + 0x21c0 * v78;
                v100 = (int32_t *)(v99 + a6);
                *v100 = (int32_t)v98;
                v101 = __asm_movss_1(__asm_movss(v91));
                v102 = __asm_movss_1(__asm_movss(*(int32_t *)(v99 + a3)));
                v103 = __asm_movss_1(__asm_movss(v89));
                v104 = __asm_movss(*v100);
                v92--;
                v88--;
                v90 = __asm_movss_1(v104);
                v87 = v104;
            }
        }
        int128_t v105 = v87;
        int64_t v106 = v78 + 1;
        while (v106 != v49) {
            // 0x3a7
            v77 = v105;
            v78 = v106;
            v79 = __asm_xorps(v77, v77);
            v80 = __asm_movss_1(v79);
            v81 = __asm_xorps(v79, v79);
            v82 = __asm_movss_1(v81);
            v83 = __asm_xorps(v81, v81);
            v84 = __asm_movss_1(v83);
            v85 = __asm_xorps(v83, v83);
            v86 = __asm_movss_1(v85);
            v87 = v85;
            if (v76 >= 0) {
                // 0x3da
                v88 = v76;
                v92 = v76;
                v91 = v84;
                v89 = v80;
                v93 = __asm_movss((int32_t)v32);
                v94 = __asm_movss(v91);
                v95 = __asm_mulss_3(__asm_movss((int32_t)v37), (int32_t)v86);
                v96 = __asm_addss(__asm_mulss(v93, v94), v95);
                v97 = __asm_addss(__asm_mulss(__asm_movss(v39), __asm_movss(v89)), v96);
                v98 = __asm_movss_1(__asm_addss(__asm_mulss(__asm_movss(v41), __asm_movss((int32_t)v82)), v97));
                v99 = 4 * v88 + 0x21c0 * v78;
                v100 = (int32_t *)(v99 + a6);
                *v100 = (int32_t)v98;
                v101 = __asm_movss_1(__asm_movss(v91));
                v102 = __asm_movss_1(__asm_movss(*(int32_t *)(v99 + a3)));
                v103 = __asm_movss_1(__asm_movss(v89));
                v104 = __asm_movss(*v100);
                v92--;
                v88--;
                v90 = __asm_movss_1(v104);
                v87 = v104;
                while (v92 >= 0) {
                    // 0x3da
                    v91 = v102;
                    v89 = v90;
                    v93 = __asm_movss((int32_t)v32);
                    v94 = __asm_movss(v91);
                    v95 = __asm_mulss_3(__asm_movss((int32_t)v37), (int32_t)v101);
                    v96 = __asm_addss(__asm_mulss(v93, v94), v95);
                    v97 = __asm_addss(__asm_mulss(__asm_movss(v39), __asm_movss(v89)), v96);
                    v98 = __asm_movss_1(__asm_addss(__asm_mulss(__asm_movss(v41), __asm_movss((int32_t)v103)), v97));
                    v99 = 4 * v88 + 0x21c0 * v78;
                    v100 = (int32_t *)(v99 + a6);
                    *v100 = (int32_t)v98;
                    v101 = __asm_movss_1(__asm_movss(v91));
                    v102 = __asm_movss_1(__asm_movss(*(int32_t *)(v99 + a3)));
                    v103 = __asm_movss_1(__asm_movss(v89));
                    v104 = __asm_movss(*v100);
                    v92--;
                    v88--;
                    v90 = __asm_movss_1(v104);
                    v87 = v104;
                }
            }
            // 0x4a2
            v105 = v87;
            v106 = v78 + 1;
        }
        int64_t v107 = 0;
        int128_t v108 = v105; // 0x4d0
        int64_t v109; // 0x0
        int128_t v110; // 0x4d6
        int64_t v111; // 0x0
        int128_t v112; // 0x4f4
        int128_t v113; // 0x514
        if (v46 > 0) {
            // 0x4d6
            v109 = 0;
            v110 = __asm_movss((int32_t)v44);
            v111 = 4 * v109 + 0x21c0 * v107;
            v112 = __asm_movss(*(int32_t *)(v111 + a5));
            v113 = __asm_mulss(v110, __asm_addss_4(v112, *(int32_t *)(v111 + a6)));
            *(int32_t *)(v111 + a4) = (int32_t)__asm_movss_1(v113);
            v109++;
            v108 = v113;
            while (v109 != v48) {
                // 0x4d6
                v110 = __asm_movss((int32_t)v44);
                v111 = 4 * v109 + 0x21c0 * v107;
                v112 = __asm_movss(*(int32_t *)(v111 + a5));
                v113 = __asm_mulss(v110, __asm_addss_4(v112, *(int32_t *)(v111 + a6)));
                *(int32_t *)(v111 + a4) = (int32_t)__asm_movss_1(v113);
                v109++;
                v108 = v113;
            }
        }
        int64_t v114 = v107 + 1;
        int128_t v115 = v108; // 0x4bd
        v47 = v108;
        while (v114 != v49) {
            // 0x4ca
            v107 = v114;
            v108 = v115;
            if (v46 > 0) {
                // 0x4d6
                v109 = 0;
                v110 = __asm_movss((int32_t)v44);
                v111 = 4 * v109 + 0x21c0 * v107;
                v112 = __asm_movss(*(int32_t *)(v111 + a5));
                v113 = __asm_mulss(v110, __asm_addss_4(v112, *(int32_t *)(v111 + a6)));
                *(int32_t *)(v111 + a4) = (int32_t)__asm_movss_1(v113);
                v109++;
                v108 = v113;
                while (v109 != v48) {
                    // 0x4d6
                    v110 = __asm_movss((int32_t)v44);
                    v111 = 4 * v109 + 0x21c0 * v107;
                    v112 = __asm_movss(*(int32_t *)(v111 + a5));
                    v113 = __asm_mulss(v110, __asm_addss_4(v112, *(int32_t *)(v111 + a6)));
                    *(int32_t *)(v111 + a4) = (int32_t)__asm_movss_1(v113);
                    v109++;
                    v108 = v113;
                }
            }
            // 0x546
            v114 = v107 + 1;
            v115 = v108;
            v47 = v108;
        }
    }
    if (v46 > 0) {
        int64_t v116 = v1 & 0xffffffff;
        int128_t v117 = v47;
        int64_t v118 = 0;
        int128_t v119 = __asm_xorps(v117, v117); // 0x567
        int64_t v120 = __asm_movss_1(v119); // 0x56a
        int128_t v121 = __asm_xorps(v119, v119); // 0x56f
        int64_t v122 = __asm_movss_1(v121); // 0x572
        int128_t v123 = __asm_xorps(v121, v121); // 0x577
        int64_t v124 = __asm_movss_1(v123); // 0x57a
        int128_t v125 = v123; // 0x58c
        int64_t v126; // 0x0
        int32_t v127; // 0x0
        int64_t v128; // 0x0
        int128_t v129; // 0x592
        int64_t v130; // 0x0
        int32_t * v131; // 0x5ad
        int128_t v132; // 0x5ad
        int128_t v133; // 0x5b7
        int128_t v134; // 0x5c0
        int128_t v135; // 0x5d5
        int64_t v136; // 0x604
        int32_t * v137; // 0x604
        int64_t v138; // 0x624
        int64_t v139; // 0x62e
        int128_t v140; // 0x649
        if (v45 > 0) {
            // 0x592
            v126 = 0;
            v127 = v122;
            v129 = __asm_movss((int32_t)v19);
            v130 = 0x21c0 * v126 + 4 * v118;
            v131 = (int32_t *)(v130 + a4);
            v132 = __asm_movss(*v131);
            v133 = __asm_mulss_3(__asm_movss((int32_t)v25), (int32_t)v120);
            v134 = __asm_addss(__asm_mulss(v129, v132), v133);
            v135 = __asm_addss(__asm_mulss(__asm_movss(v39), __asm_movss(v127)), v134);
            v136 = __asm_movss_1(__asm_addss(__asm_mulss(__asm_movss(v41), __asm_movss((int32_t)v124)), v135));
            v137 = (int32_t *)(v130 + a5);
            *v137 = (int32_t)v136;
            v138 = __asm_movss_1(__asm_movss(*v131));
            v139 = __asm_movss_1(__asm_movss(v127));
            v140 = __asm_movss(*v137);
            v126++;
            v128 = __asm_movss_1(v140);
            v125 = v140;
            while (v126 != (a1 & 0xffffffff)) {
                // 0x592
                v127 = v128;
                v129 = __asm_movss((int32_t)v19);
                v130 = 0x21c0 * v126 + 4 * v118;
                v131 = (int32_t *)(v130 + a4);
                v132 = __asm_movss(*v131);
                v133 = __asm_mulss_3(__asm_movss((int32_t)v25), (int32_t)v138);
                v134 = __asm_addss(__asm_mulss(v129, v132), v133);
                v135 = __asm_addss(__asm_mulss(__asm_movss(v39), __asm_movss(v127)), v134);
                v136 = __asm_movss_1(__asm_addss(__asm_mulss(__asm_movss(v41), __asm_movss((int32_t)v139)), v135));
                v137 = (int32_t *)(v130 + a5);
                *v137 = (int32_t)v136;
                v138 = __asm_movss_1(__asm_movss(*v131));
                v139 = __asm_movss_1(__asm_movss(v127));
                v140 = __asm_movss(*v137);
                v126++;
                v128 = __asm_movss_1(v140);
                v125 = v140;
            }
        }
        int128_t v141 = v125;
        int64_t v142 = v118 + 1;
        while (v142 != v116) {
            // 0x567
            v117 = v141;
            v118 = v142;
            v119 = __asm_xorps(v117, v117);
            v120 = __asm_movss_1(v119);
            v121 = __asm_xorps(v119, v119);
            v122 = __asm_movss_1(v121);
            v123 = __asm_xorps(v121, v121);
            v124 = __asm_movss_1(v123);
            v125 = v123;
            if (v45 > 0) {
                // 0x592
                v126 = 0;
                v127 = v122;
                v129 = __asm_movss((int32_t)v19);
                v130 = 0x21c0 * v126 + 4 * v118;
                v131 = (int32_t *)(v130 + a4);
                v132 = __asm_movss(*v131);
                v133 = __asm_mulss_3(__asm_movss((int32_t)v25), (int32_t)v120);
                v134 = __asm_addss(__asm_mulss(v129, v132), v133);
                v135 = __asm_addss(__asm_mulss(__asm_movss(v39), __asm_movss(v127)), v134);
                v136 = __asm_movss_1(__asm_addss(__asm_mulss(__asm_movss(v41), __asm_movss((int32_t)v124)), v135));
                v137 = (int32_t *)(v130 + a5);
                *v137 = (int32_t)v136;
                v138 = __asm_movss_1(__asm_movss(*v131));
                v139 = __asm_movss_1(__asm_movss(v127));
                v140 = __asm_movss(*v137);
                v126++;
                v128 = __asm_movss_1(v140);
                v125 = v140;
                while (v126 != (a1 & 0xffffffff)) {
                    // 0x592
                    v127 = v128;
                    v129 = __asm_movss((int32_t)v19);
                    v130 = 0x21c0 * v126 + 4 * v118;
                    v131 = (int32_t *)(v130 + a4);
                    v132 = __asm_movss(*v131);
                    v133 = __asm_mulss_3(__asm_movss((int32_t)v25), (int32_t)v138);
                    v134 = __asm_addss(__asm_mulss(v129, v132), v133);
                    v135 = __asm_addss(__asm_mulss(__asm_movss(v39), __asm_movss(v127)), v134);
                    v136 = __asm_movss_1(__asm_addss(__asm_mulss(__asm_movss(v41), __asm_movss((int32_t)v139)), v135));
                    v137 = (int32_t *)(v130 + a5);
                    *v137 = (int32_t)v136;
                    v138 = __asm_movss_1(__asm_movss(*v131));
                    v139 = __asm_movss_1(__asm_movss(v127));
                    v140 = __asm_movss(*v137);
                    v126++;
                    v128 = __asm_movss_1(v140);
                    v125 = v140;
                }
            }
            // 0x666
            v141 = v125;
            v142 = v118 + 1;
        }
        int32_t v143 = v45 - 1;
        int128_t v144 = v141;
        int64_t v145 = 0;
        int128_t v146 = __asm_xorps(v144, v144); // 0x687
        int64_t v147 = __asm_movss_1(v146); // 0x68a
        int128_t v148 = __asm_xorps(v146, v146); // 0x68f
        int64_t v149 = __asm_movss_1(v148); // 0x692
        int128_t v150 = __asm_xorps(v148, v148); // 0x697
        int64_t v151 = __asm_movss_1(v150); // 0x69a
        int128_t v152 = __asm_xorps(v150, v150); // 0x69f
        int64_t v153 = __asm_movss_1(v152); // 0x6a2
        int128_t v154 = v152; // 0x6b4
        int64_t v155; // 0x0
        int32_t v156; // 0x0
        int64_t v157; // 0x0
        int32_t v158; // 0x0
        int32_t v159; // 0x0
        int128_t v160; // 0x6ba
        int128_t v161; // 0x6bf
        int128_t v162; // 0x6cc
        int128_t v163; // 0x6d5
        int128_t v164; // 0x6ea
        int64_t v165; // 0x719
        int64_t v166; // 0x0
        int32_t * v167; // 0x719
        int64_t v168; // 0x723
        int64_t v169; // 0x743
        int64_t v170; // 0x74d
        int128_t v171; // 0x768
        if (v143 >= 0) {
            // 0x6ba
            v155 = v143;
            v159 = v143;
            v158 = v147;
            v156 = v151;
            v160 = __asm_movss((int32_t)v31);
            v161 = __asm_movss(v158);
            v162 = __asm_mulss_3(__asm_movss((int32_t)v36), (int32_t)v149);
            v163 = __asm_addss(__asm_mulss(v160, v161), v162);
            v164 = __asm_addss(__asm_mulss(__asm_movss(v39), __asm_movss(v156)), v163);
            v165 = __asm_movss_1(__asm_addss(__asm_mulss(__asm_movss(v41), __asm_movss((int32_t)v153)), v164));
            v166 = 0x21c0 * v155 + 4 * v145;
            v167 = (int32_t *)(v166 + a6);
            *v167 = (int32_t)v165;
            v168 = __asm_movss_1(__asm_movss(v158));
            v169 = __asm_movss_1(__asm_movss(*(int32_t *)(v166 + a4)));
            v170 = __asm_movss_1(__asm_movss(v156));
            v171 = __asm_movss(*v167);
            v159--;
            v155--;
            v157 = __asm_movss_1(v171);
            v154 = v171;
            while (v159 >= 0) {
                // 0x6ba
                v158 = v169;
                v156 = v157;
                v160 = __asm_movss((int32_t)v31);
                v161 = __asm_movss(v158);
                v162 = __asm_mulss_3(__asm_movss((int32_t)v36), (int32_t)v168);
                v163 = __asm_addss(__asm_mulss(v160, v161), v162);
                v164 = __asm_addss(__asm_mulss(__asm_movss(v39), __asm_movss(v156)), v163);
                v165 = __asm_movss_1(__asm_addss(__asm_mulss(__asm_movss(v41), __asm_movss((int32_t)v170)), v164));
                v166 = 0x21c0 * v155 + 4 * v145;
                v167 = (int32_t *)(v166 + a6);
                *v167 = (int32_t)v165;
                v168 = __asm_movss_1(__asm_movss(v158));
                v169 = __asm_movss_1(__asm_movss(*(int32_t *)(v166 + a4)));
                v170 = __asm_movss_1(__asm_movss(v156));
                v171 = __asm_movss(*v167);
                v159--;
                v155--;
                v157 = __asm_movss_1(v171);
                v154 = v171;
            }
        }
        int64_t v172 = v145 + 1;
        while (v172 != v116) {
            // 0x687
            v144 = v154;
            v145 = v172;
            v146 = __asm_xorps(v144, v144);
            v147 = __asm_movss_1(v146);
            v148 = __asm_xorps(v146, v146);
            v149 = __asm_movss_1(v148);
            v150 = __asm_xorps(v148, v148);
            v151 = __asm_movss_1(v150);
            v152 = __asm_xorps(v150, v150);
            v153 = __asm_movss_1(v152);
            v154 = v152;
            if (v143 >= 0) {
                // 0x6ba
                v155 = v143;
                v159 = v143;
                v158 = v147;
                v156 = v151;
                v160 = __asm_movss((int32_t)v31);
                v161 = __asm_movss(v158);
                v162 = __asm_mulss_3(__asm_movss((int32_t)v36), (int32_t)v149);
                v163 = __asm_addss(__asm_mulss(v160, v161), v162);
                v164 = __asm_addss(__asm_mulss(__asm_movss(v39), __asm_movss(v156)), v163);
                v165 = __asm_movss_1(__asm_addss(__asm_mulss(__asm_movss(v41), __asm_movss((int32_t)v153)), v164));
                v166 = 0x21c0 * v155 + 4 * v145;
                v167 = (int32_t *)(v166 + a6);
                *v167 = (int32_t)v165;
                v168 = __asm_movss_1(__asm_movss(v158));
                v169 = __asm_movss_1(__asm_movss(*(int32_t *)(v166 + a4)));
                v170 = __asm_movss_1(__asm_movss(v156));
                v171 = __asm_movss(*v167);
                v159--;
                v155--;
                v157 = __asm_movss_1(v171);
                v154 = v171;
                while (v159 >= 0) {
                    // 0x6ba
                    v158 = v169;
                    v156 = v157;
                    v160 = __asm_movss((int32_t)v31);
                    v161 = __asm_movss(v158);
                    v162 = __asm_mulss_3(__asm_movss((int32_t)v36), (int32_t)v168);
                    v163 = __asm_addss(__asm_mulss(v160, v161), v162);
                    v164 = __asm_addss(__asm_mulss(__asm_movss(v39), __asm_movss(v156)), v163);
                    v165 = __asm_movss_1(__asm_addss(__asm_mulss(__asm_movss(v41), __asm_movss((int32_t)v170)), v164));
                    v166 = 0x21c0 * v155 + 4 * v145;
                    v167 = (int32_t *)(v166 + a6);
                    *v167 = (int32_t)v165;
                    v168 = __asm_movss_1(__asm_movss(v158));
                    v169 = __asm_movss_1(__asm_movss(*(int32_t *)(v166 + a4)));
                    v170 = __asm_movss_1(__asm_movss(v156));
                    v171 = __asm_movss(*v167);
                    v159--;
                    v155--;
                    v157 = __asm_movss_1(v171);
                    v154 = v171;
                }
            }
            // 0x785
            v172 = v145 + 1;
        }
    }
    // 0x79a
    if (v45 <= 0) {
        // 0x837
        return 0;
    }
    int64_t result = a1 & 0xffffffff;
    int64_t v173 = 0;
    int64_t v174; // 0x0
    int128_t v175; // 0x7b9
    int64_t v176; // 0x0
    int128_t v177; // 0x7d7
    int128_t v178; // 0x7f2
    if (v46 > 0) {
        // 0x7b9
        v174 = 0;
        v175 = __asm_movss((int32_t)v42);
        v176 = 4 * v174 + 0x21c0 * v173;
        v177 = __asm_movss(*(int32_t *)(v176 + a5));
        v178 = __asm_addss_4(v177, *(int32_t *)(v176 + a6));
        *(int32_t *)(v176 + a4) = (int32_t)__asm_movss_1(__asm_mulss(v175, v178));
        v174++;
        while (v174 != (v1 & 0xffffffff)) {
            // 0x7b9
            v175 = __asm_movss((int32_t)v42);
            v176 = 4 * v174 + 0x21c0 * v173;
            v177 = __asm_movss(*(int32_t *)(v176 + a5));
            v178 = __asm_addss_4(v177, *(int32_t *)(v176 + a6));
            *(int32_t *)(v176 + a4) = (int32_t)__asm_movss_1(__asm_mulss(v175, v178));
            v174++;
        }
    }
    int64_t v179 = v173 + 1;
    while (v179 != result) {
        // 0x7ad
        v173 = v179;
        if (v46 > 0) {
            // 0x7b9
            v174 = 0;
            v175 = __asm_movss((int32_t)v42);
            v176 = 4 * v174 + 0x21c0 * v173;
            v177 = __asm_movss(*(int32_t *)(v176 + a5));
            v178 = __asm_addss_4(v177, *(int32_t *)(v176 + a6));
            *(int32_t *)(v176 + a4) = (int32_t)__asm_movss_1(__asm_mulss(v175, v178));
            v174++;
            while (v174 != (v1 & 0xffffffff)) {
                // 0x7b9
                v175 = __asm_movss((int32_t)v42);
                v176 = 4 * v174 + 0x21c0 * v173;
                v177 = __asm_movss(*(int32_t *)(v176 + a5));
                v178 = __asm_addss_4(v177, *(int32_t *)(v176 + a6));
                *(int32_t *)(v176 + a4) = (int32_t)__asm_movss_1(__asm_mulss(v175, v178));
                v174++;
            }
        }
        // 0x829
        v179 = v173 + 1;
    }
    // 0x837
    return result;
}
