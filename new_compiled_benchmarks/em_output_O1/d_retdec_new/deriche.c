
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "deriche.h"
int64_t kernel_deriche(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x0
    int128_t v1; // 0x0
    int64_t v2 = __asm_movaps(v1); // 0x1a
    int128_t v3 = v2; // 0x1a
    int64_t v4 = a2 & 0xffffffff; // 0x1f
    int64_t result = a1 & 0xffffffff; // 0x21
    int128_t v5 = __asm_xorps(v1, g1); // 0x24
    int128_t v6 = __asm_movaps(v5); // 0x2b
    expf(v5);
    int128_t v7 = __asm_movss(0x3f800000); // 0x35
    int64_t v8 = __asm_movss_1(v7); // 0x3d
    int64_t v9 = __asm_movss_1(__asm_subss(v7, v5)); // 0x47
    int128_t v10 = __asm_movaps_2(v6); // 0x4d
    expf(v10);
    int64_t v11 = __asm_movaps(__asm_mulss(__asm_subss(__asm_movss(0x3f800000), v10), (int32_t)v9)); // 0x69
    int128_t v12 = __asm_movaps_2(v3); // 0x6e
    int64_t v13 = __asm_movaps(__asm_addss(v12, v12)); // 0x77
    int128_t v14 = __asm_movaps_2(v6); // 0x7c
    expf(v14);
    int128_t v15 = __asm_movaps_2((int128_t)v13); // 0x86
    int64_t v16 = __asm_movss_1(__asm_addss_4(__asm_mulss_3(v14, v15), 0x3f800000)); // 0x97
    int128_t v17 = __asm_movaps_2(v15); // 0x9d
    expf(v17);
    int128_t v18 = __asm_subss(__asm_movss((int32_t)v16), v17); // 0xab
    int128_t v19 = __asm_divss(__asm_movaps_2((int128_t)(int32_t)v11), v18); // 0xb4
    int32_t v20 = __asm_movaps(v19); // 0xb8
    int128_t v21 = __asm_movaps_2(v6); // 0xbd
    expf(v21);
    int128_t v22 = __asm_mulss(v21, v20); // 0xc7
    int64_t v23 = __asm_movss_1(__asm_mulss_3(__asm_addss_4(__asm_movss(-0x40800000), (int32_t)v2), v22)); // 0xdf
    int128_t v24 = __asm_movaps_2(v6); // 0xe5
    expf(v24);
    int128_t v25 = v20; // 0xef
    int128_t v26 = __asm_movaps_2(v25); // 0xef
    int64_t v27 = __asm_movss_1(__asm_mulss_3(v24, v26)); // 0xf8
    int128_t v28 = __asm_movaps_2(v3); // 0xfe
    int64_t v29 = __asm_movss_1(__asm_addss(__asm_movss((int32_t)v8), v28)); // 0x10d
    int128_t v30 = __asm_xorps(__asm_movaps_2(v26), g1); // 0x116
    int64_t v31 = __asm_movaps(v30); // 0x11d
    int128_t v32 = __asm_mulss(v28, -0x40000000); // 0x122
    int64_t v33 = __asm_movaps(v32); // 0x12a
    expf(v32);
    int64_t v34 = __asm_movss_1(v32); // 0x134
    int128_t v35 = __asm_movaps_2(v6); // 0x13a
    exp2f(v35);
    int64_t v36 = __asm_movss_1(v35); // 0x144
    int128_t v37 = __asm_movaps_2((int128_t)v33); // 0x14a
    expf(v37);
    int128_t v38 = __asm_movss((int32_t)v23); // 0x154
    int128_t v39 = __asm_movaps_2(v25); // 0x15b
    int128_t v40 = __asm_movss((int32_t)v36); // 0x161
    int128_t v41 = __asm_xorps(v37, g1); // 0x168
    uint32_t v42 = (int32_t)a2;
    int128_t v43 = v30; // 0x177
    int128_t v44 = v26; // 0x177
    int128_t v45; // 0x0
    int128_t v46; // 0x0
    if ((int32_t)a1 >= 1) {
        int64_t v47 = 0;
        int128_t v48; // 0x0
        int128_t v49 = v48;
        int128_t v50 = v26;
        int128_t v51 = v30;
        int128_t v52 = v51; // 0x18a
        int128_t v53 = v50; // 0x18a
        int128_t v54 = v49; // 0x18a
        int128_t v55; // 0x0
        int128_t v56 = v55; // 0x18a
        int128_t v57; // 0x1e7
        int128_t v58; // 0x1ea
        int128_t v59; // 0x18c
        int128_t v60; // 0x191
        int128_t v61; // 0x1a0
        int128_t v62; // 0x1ae
        int64_t v63; // 0x0
        int32_t * v64; // 0x1b3
        int128_t v65; // 0x1be
        int128_t v66; // 0x1d2
        int128_t v67; // 0x1de
        int64_t v68; // 0x1e4
        if (v42 >= 1) {
            // 0x18c
            v59 = __asm_xorps(v50, v50);
            v60 = __asm_xorps(v49, v49);
            v58 = __asm_xorps(v51, v51);
            v68 = 0;
            v61 = __asm_movaps_2(v60);
            v62 = __asm_mulss_3(v59, v38);
            v63 = 4 * v68 + 0x21c0 * v47;
            v64 = (int32_t *)(v63 + a3);
            v65 = __asm_addss(__asm_mulss_3(__asm_movss(*v64), v39), v62);
            v66 = __asm_addss(__asm_mulss_3(v58, v41), __asm_addss(__asm_mulss_3(__asm_movaps_2(v40), v61), v65));
            *(int32_t *)(v63 + a5) = (int32_t)__asm_movss_1(v66);
            v67 = __asm_movss(*v64);
            v68++;
            v57 = __asm_movaps_2(v66);
            v58 = __asm_movaps_2(v61);
            v52 = v58;
            v53 = v67;
            v54 = v57;
            v56 = v61;
            while (v68 != v4) {
                // 0x1a0
                v61 = __asm_movaps_2(v57);
                v62 = __asm_mulss_3(v67, v38);
                v63 = 4 * v68 + 0x21c0 * v47;
                v64 = (int32_t *)(v63 + a3);
                v65 = __asm_addss(__asm_mulss_3(__asm_movss(*v64), v39), v62);
                v66 = __asm_addss(__asm_mulss_3(v58, v41), __asm_addss(__asm_mulss_3(__asm_movaps_2(v40), v61), v65));
                *(int32_t *)(v63 + a5) = (int32_t)__asm_movss_1(v66);
                v67 = __asm_movss(*v64);
                v68++;
                v57 = __asm_movaps_2(v66);
                v58 = __asm_movaps_2(v61);
                v52 = v58;
                v53 = v67;
                v54 = v57;
                v56 = v61;
            }
        }
        int128_t v69 = v53;
        int128_t v70 = v52;
        int64_t v71 = v47 + 1; // 0x180
        v55 = v56;
        v43 = v70;
        v44 = v69;
        v45 = v54;
        v46 = v56;
        while (v71 != result) {
            // 0x188
            v47 = v71;
            v49 = v54;
            v50 = v69;
            v51 = v70;
            v52 = v51;
            v53 = v50;
            v54 = v49;
            v56 = v55;
            if (v42 >= 1) {
                // 0x18c
                v59 = __asm_xorps(v50, v50);
                v60 = __asm_xorps(v49, v49);
                v58 = __asm_xorps(v51, v51);
                v68 = 0;
                v61 = __asm_movaps_2(v60);
                v62 = __asm_mulss_3(v59, v38);
                v63 = 4 * v68 + 0x21c0 * v47;
                v64 = (int32_t *)(v63 + a3);
                v65 = __asm_addss(__asm_mulss_3(__asm_movss(*v64), v39), v62);
                v66 = __asm_addss(__asm_mulss_3(v58, v41), __asm_addss(__asm_mulss_3(__asm_movaps_2(v40), v61), v65));
                *(int32_t *)(v63 + a5) = (int32_t)__asm_movss_1(v66);
                v67 = __asm_movss(*v64);
                v68++;
                v57 = __asm_movaps_2(v66);
                v58 = __asm_movaps_2(v61);
                v52 = v58;
                v53 = v67;
                v54 = v57;
                v56 = v61;
                while (v68 != v4) {
                    // 0x1a0
                    v61 = __asm_movaps_2(v57);
                    v62 = __asm_mulss_3(v67, v38);
                    v63 = 4 * v68 + 0x21c0 * v47;
                    v64 = (int32_t *)(v63 + a3);
                    v65 = __asm_addss(__asm_mulss_3(__asm_movss(*v64), v39), v62);
                    v66 = __asm_addss(__asm_mulss_3(v58, v41), __asm_addss(__asm_mulss_3(__asm_movaps_2(v40), v61), v65));
                    *(int32_t *)(v63 + a5) = (int32_t)__asm_movss_1(v66);
                    v67 = __asm_movss(*v64);
                    v68++;
                    v57 = __asm_movaps_2(v66);
                    v58 = __asm_movaps_2(v61);
                    v52 = v58;
                    v53 = v67;
                    v54 = v57;
                    v56 = v61;
                }
            }
            // 0x180
            v69 = v53;
            v70 = v52;
            v71 = v47 + 1;
            v55 = v56;
            v43 = v70;
            v44 = v69;
            v45 = v54;
            v46 = v56;
        }
    }
    int128_t v72 = __asm_mulss(__asm_movss((int32_t)v29), (int32_t)v27); // 0x1fa
    int128_t v73 = __asm_mulss(__asm_movss((int32_t)v34), (int32_t)v31); // 0x206
    int128_t v74 = v46; // 0x20f
    int128_t v75 = v45; // 0x20f
    int128_t v76 = v44; // 0x20f
    int128_t v77 = v43; // 0x20f
    int128_t v78; // 0x0
    if ((int32_t)a1 >= 1) {
        int64_t v79 = 0;
        int128_t v80; // 0x0
        int128_t v81 = v80;
        int128_t v82 = v46;
        int128_t v83 = v45;
        int128_t v84 = v43;
        int128_t v85 = __asm_xorps(v82, v82); // 0x228
        int128_t v86 = __asm_xorps(v83, v83); // 0x22e
        int128_t v87 = __asm_xorps(v81, v81); // 0x231
        int128_t v88 = __asm_xorps(v84, v84); // 0x234
        int128_t v89 = v88; // 0x239
        int128_t v90 = v44; // 0x239
        int128_t v91 = v86; // 0x239
        int128_t v92 = v85; // 0x239
        int128_t v93 = v87; // 0x239
        uint64_t v94; // 0x0
        int128_t v95; // 0x240
        int64_t v96; // 0x243
        int128_t v97; // 0x252
        int128_t v98; // 0x266
        int64_t v99; // 0x278
        int64_t v100; // 0x0
        int128_t v101; // 0x281
        int128_t v102; // 0x284
        int128_t v103; // 0x291
        int128_t v104; // 0x294
        if (v42 >= 1) {
            // 0x240
            v94 = v4;
            v95 = __asm_movaps_2(v87);
            v96 = v94 - 1;
            v97 = __asm_addss(__asm_mulss_3(__asm_movaps_2(v72), v85), __asm_mulss_3(v86, v73));
            v98 = __asm_addss(__asm_mulss_3(v88, v41), __asm_addss(__asm_mulss_3(__asm_movaps_2(v40), v95), v97));
            v99 = __asm_movss_1(v98);
            v100 = (4 * v96 & 0x3fffffffc) + 0x21c0 * v79;
            *(int32_t *)(v100 + a6) = (int32_t)v99;
            v101 = __asm_movaps_2(v85);
            v102 = __asm_movss(*(int32_t *)(v100 + a3));
            v103 = __asm_movaps_2(v98);
            v104 = __asm_movaps_2(v95);
            v89 = v104;
            v90 = v95;
            v91 = v101;
            v92 = v102;
            v93 = v103;
            while (v94 > 1) {
                // 0x240
                v94 = v96;
                v95 = __asm_movaps_2(v103);
                v96 = v94 - 1;
                v97 = __asm_addss(__asm_mulss_3(__asm_movaps_2(v72), v102), __asm_mulss_3(v101, v73));
                v98 = __asm_addss(__asm_mulss_3(v104, v41), __asm_addss(__asm_mulss_3(__asm_movaps_2(v40), v95), v97));
                v99 = __asm_movss_1(v98);
                v100 = (4 * v96 & 0x3fffffffc) + 0x21c0 * v79;
                *(int32_t *)(v100 + a6) = (int32_t)v99;
                v101 = __asm_movaps_2(v102);
                v102 = __asm_movss(*(int32_t *)(v100 + a3));
                v103 = __asm_movaps_2(v98);
                v104 = __asm_movaps_2(v95);
                v89 = v104;
                v90 = v95;
                v91 = v101;
                v92 = v102;
                v93 = v103;
            }
        }
        int128_t v105 = v93;
        v74 = v92;
        v75 = v91;
        v76 = v90;
        int128_t v106 = v89;
        int64_t v107 = v79 + 1; // 0x220
        int128_t v108 = v76; // 0x226
        while (v107 != result) {
            // 0x228
            v79 = v107;
            v81 = v105;
            v82 = v74;
            v83 = v75;
            v84 = v106;
            v85 = __asm_xorps(v82, v82);
            v86 = __asm_xorps(v83, v83);
            v87 = __asm_xorps(v81, v81);
            v88 = __asm_xorps(v84, v84);
            v89 = v88;
            v90 = v108;
            v91 = v86;
            v92 = v85;
            v93 = v87;
            if (v42 >= 1) {
                // 0x240
                v94 = v4;
                v95 = __asm_movaps_2(v87);
                v96 = v94 - 1;
                v97 = __asm_addss(__asm_mulss_3(__asm_movaps_2(v72), v85), __asm_mulss_3(v86, v73));
                v98 = __asm_addss(__asm_mulss_3(v88, v41), __asm_addss(__asm_mulss_3(__asm_movaps_2(v40), v95), v97));
                v99 = __asm_movss_1(v98);
                v100 = (4 * v96 & 0x3fffffffc) + 0x21c0 * v79;
                *(int32_t *)(v100 + a6) = (int32_t)v99;
                v101 = __asm_movaps_2(v85);
                v102 = __asm_movss(*(int32_t *)(v100 + a3));
                v103 = __asm_movaps_2(v98);
                v104 = __asm_movaps_2(v95);
                v89 = v104;
                v90 = v95;
                v91 = v101;
                v92 = v102;
                v93 = v103;
                while (v94 > 1) {
                    // 0x240
                    v94 = v96;
                    v95 = __asm_movaps_2(v103);
                    v96 = v94 - 1;
                    v97 = __asm_addss(__asm_mulss_3(__asm_movaps_2(v72), v102), __asm_mulss_3(v101, v73));
                    v98 = __asm_addss(__asm_mulss_3(v104, v41), __asm_addss(__asm_mulss_3(__asm_movaps_2(v40), v95), v97));
                    v99 = __asm_movss_1(v98);
                    v100 = (4 * v96 & 0x3fffffffc) + 0x21c0 * v79;
                    *(int32_t *)(v100 + a6) = (int32_t)v99;
                    v101 = __asm_movaps_2(v102);
                    v102 = __asm_movss(*(int32_t *)(v100 + a3));
                    v103 = __asm_movaps_2(v98);
                    v104 = __asm_movaps_2(v95);
                    v89 = v104;
                    v90 = v95;
                    v91 = v101;
                    v92 = v102;
                    v93 = v103;
                }
            }
            // 0x220
            v105 = v93;
            v74 = v92;
            v75 = v91;
            v76 = v90;
            v106 = v89;
            v107 = v79 + 1;
            v108 = v76;
        }
        int64_t v109 = 0;
        int128_t v110 = v106; // 0x2ba
        int64_t v111; // 0x0
        int128_t v112; // 0x2cb
        int128_t v113; // 0x2d5
        int64_t v114; // 0x2e3
        if (v42 >= 1) {
            // 0x2c0
            v114 = 0;
            v111 = 4 * v114 + 0x21c0 * v109;
            v112 = __asm_movss(*(int32_t *)(v111 + a5));
            v113 = __asm_addss_4(v112, *(int32_t *)(v111 + a6));
            *(int32_t *)(v111 + a4) = (int32_t)__asm_movss_1(v113);
            v114++;
            v110 = v113;
            while (v114 != v4) {
                // 0x2c0
                v111 = 4 * v114 + 0x21c0 * v109;
                v112 = __asm_movss(*(int32_t *)(v111 + a5));
                v113 = __asm_addss_4(v112, *(int32_t *)(v111 + a6));
                *(int32_t *)(v111 + a4) = (int32_t)__asm_movss_1(v113);
                v114++;
                v110 = v113;
            }
        }
        int64_t v115 = v109 + 1; // 0x2b0
        int128_t v116 = v110; // 0x2b6
        v78 = v105;
        v77 = v110;
        while (v115 != result) {
            // 0x2b8
            v109 = v115;
            v110 = v116;
            if (v42 >= 1) {
                // 0x2c0
                v114 = 0;
                v111 = 4 * v114 + 0x21c0 * v109;
                v112 = __asm_movss(*(int32_t *)(v111 + a5));
                v113 = __asm_addss_4(v112, *(int32_t *)(v111 + a6));
                *(int32_t *)(v111 + a4) = (int32_t)__asm_movss_1(v113);
                v114++;
                v110 = v113;
                while (v114 != v4) {
                    // 0x2c0
                    v111 = 4 * v114 + 0x21c0 * v109;
                    v112 = __asm_movss(*(int32_t *)(v111 + a5));
                    v113 = __asm_addss_4(v112, *(int32_t *)(v111 + a6));
                    *(int32_t *)(v111 + a4) = (int32_t)__asm_movss_1(v113);
                    v114++;
                    v110 = v113;
                }
            }
            // 0x2b0
            v115 = v109 + 1;
            v116 = v110;
            v78 = v105;
            v77 = v110;
        }
    }
    // 0x2ed
    if (v42 >= 1) {
        int64_t v117 = 0;
        int128_t v118 = v75;
        int128_t v119 = v76;
        int128_t v120 = v77;
        int128_t v121 = v120; // 0x30b
        int128_t v122 = v119; // 0x30b
        int128_t v123 = v118; // 0x30b
        int128_t v124 = v74; // 0x30b
        int128_t v125; // 0x320
        int128_t v126; // 0x32e
        int64_t v127; // 0x0
        int32_t * v128; // 0x333
        int128_t v129; // 0x33e
        int128_t v130; // 0x352
        int128_t v131; // 0x35e
        int64_t v132; // 0x364
        int128_t v133; // 0x367
        int128_t v134; // 0x36a
        int128_t v135; // 0x30d
        int128_t v136; // 0x312
        if ((int32_t)a1 >= 1) {
            // 0x30d
            v135 = __asm_xorps(v119, v119);
            v136 = __asm_xorps(v118, v118);
            v134 = __asm_xorps(v120, v120);
            v132 = 0;
            v125 = __asm_movaps_2(v136);
            v126 = __asm_mulss_3(v135, v38);
            v127 = 0x21c0 * v132 + 4 * v117;
            v128 = (int32_t *)(v127 + a4);
            v129 = __asm_addss(__asm_mulss_3(__asm_movss(*v128), v39), v126);
            v130 = __asm_addss(__asm_mulss_3(v134, v41), __asm_addss(__asm_mulss_3(__asm_movaps_2(v40), v125), v129));
            *(int32_t *)(v127 + a5) = (int32_t)__asm_movss_1(v130);
            v131 = __asm_movss(*v128);
            v132++;
            v133 = __asm_movaps_2(v130);
            v134 = __asm_movaps_2(v125);
            v121 = v134;
            v122 = v131;
            v123 = v133;
            v124 = v125;
            while (v132 != result) {
                // 0x320
                v125 = __asm_movaps_2(v133);
                v126 = __asm_mulss_3(v131, v38);
                v127 = 0x21c0 * v132 + 4 * v117;
                v128 = (int32_t *)(v127 + a4);
                v129 = __asm_addss(__asm_mulss_3(__asm_movss(*v128), v39), v126);
                v130 = __asm_addss(__asm_mulss_3(v134, v41), __asm_addss(__asm_mulss_3(__asm_movaps_2(v40), v125), v129));
                *(int32_t *)(v127 + a5) = (int32_t)__asm_movss_1(v130);
                v131 = __asm_movss(*v128);
                v132++;
                v133 = __asm_movaps_2(v130);
                v134 = __asm_movaps_2(v125);
                v121 = v134;
                v122 = v131;
                v123 = v133;
                v124 = v125;
            }
        }
        int128_t v137 = v124;
        int128_t v138 = v123;
        int128_t v139 = v121;
        int64_t v140 = v117 + 1; // 0x300
        while (v140 != v4) {
            // 0x308
            v117 = v140;
            v118 = v138;
            v119 = v122;
            v120 = v139;
            v121 = v120;
            v122 = v119;
            v123 = v118;
            v124 = v137;
            if ((int32_t)a1 >= 1) {
                // 0x30d
                v135 = __asm_xorps(v119, v119);
                v136 = __asm_xorps(v118, v118);
                v134 = __asm_xorps(v120, v120);
                v132 = 0;
                v125 = __asm_movaps_2(v136);
                v126 = __asm_mulss_3(v135, v38);
                v127 = 0x21c0 * v132 + 4 * v117;
                v128 = (int32_t *)(v127 + a4);
                v129 = __asm_addss(__asm_mulss_3(__asm_movss(*v128), v39), v126);
                v130 = __asm_addss(__asm_mulss_3(v134, v41), __asm_addss(__asm_mulss_3(__asm_movaps_2(v40), v125), v129));
                *(int32_t *)(v127 + a5) = (int32_t)__asm_movss_1(v130);
                v131 = __asm_movss(*v128);
                v132++;
                v133 = __asm_movaps_2(v130);
                v134 = __asm_movaps_2(v125);
                v121 = v134;
                v122 = v131;
                v123 = v133;
                v124 = v125;
                while (v132 != result) {
                    // 0x320
                    v125 = __asm_movaps_2(v133);
                    v126 = __asm_mulss_3(v131, v38);
                    v127 = 0x21c0 * v132 + 4 * v117;
                    v128 = (int32_t *)(v127 + a4);
                    v129 = __asm_addss(__asm_mulss_3(__asm_movss(*v128), v39), v126);
                    v130 = __asm_addss(__asm_mulss_3(v134, v41), __asm_addss(__asm_mulss_3(__asm_movaps_2(v40), v125), v129));
                    *(int32_t *)(v127 + a5) = (int32_t)__asm_movss_1(v130);
                    v131 = __asm_movss(*v128);
                    v132++;
                    v133 = __asm_movaps_2(v130);
                    v134 = __asm_movaps_2(v125);
                    v121 = v134;
                    v122 = v131;
                    v123 = v133;
                    v124 = v125;
                }
            }
            // 0x300
            v137 = v124;
            v138 = v123;
            v139 = v121;
            v140 = v117 + 1;
        }
        int64_t v141 = 0;
        int128_t v142 = v78;
        int128_t v143 = v137;
        int128_t v144 = v138;
        int128_t v145 = v139;
        int128_t v146 = __asm_xorps(v143, v143); // 0x388
        int128_t v147 = __asm_xorps(v144, v144); // 0x38e
        int128_t v148 = __asm_xorps(v142, v142); // 0x391
        int128_t v149 = __asm_xorps(v145, v145); // 0x394
        int128_t v150 = v149; // 0x39a
        int128_t v151 = v147; // 0x39a
        int128_t v152 = v146; // 0x39a
        int128_t v153 = v148; // 0x39a
        uint64_t v154; // 0x0
        int128_t v155; // 0x3a0
        int64_t v156; // 0x3a3
        int128_t v157; // 0x3b2
        int128_t v158; // 0x3c6
        int64_t v159; // 0x3d8
        int64_t v160; // 0x0
        int128_t v161; // 0x3e1
        int128_t v162; // 0x3e4
        int128_t v163; // 0x3ea
        int128_t v164; // 0x3ed
        if ((int32_t)a1 >= 1) {
            // 0x3a0
            v154 = result;
            v155 = __asm_movaps_2(v148);
            v156 = v154 - 1;
            v157 = __asm_addss(__asm_mulss_3(__asm_movaps_2(v72), v146), __asm_mulss_3(v147, v73));
            v158 = __asm_addss(__asm_mulss_3(v149, v41), __asm_addss(__asm_mulss_3(__asm_movaps_2(v40), v155), v157));
            v159 = __asm_movss_1(v158);
            v160 = 0x21c0 * (v156 & 0xffffffff) + 4 * v141;
            *(int32_t *)(v160 + a6) = (int32_t)v159;
            v161 = __asm_movaps_2(v146);
            v162 = __asm_movss(*(int32_t *)(v160 + a4));
            v163 = __asm_movaps_2(v158);
            v164 = __asm_movaps_2(v155);
            v150 = v164;
            v151 = v161;
            v152 = v162;
            v153 = v163;
            while (v154 > 1) {
                // 0x3a0
                v154 = v156;
                v155 = __asm_movaps_2(v163);
                v156 = v154 - 1;
                v157 = __asm_addss(__asm_mulss_3(__asm_movaps_2(v72), v162), __asm_mulss_3(v161, v73));
                v158 = __asm_addss(__asm_mulss_3(v164, v41), __asm_addss(__asm_mulss_3(__asm_movaps_2(v40), v155), v157));
                v159 = __asm_movss_1(v158);
                v160 = 0x21c0 * (v156 & 0xffffffff) + 4 * v141;
                *(int32_t *)(v160 + a6) = (int32_t)v159;
                v161 = __asm_movaps_2(v162);
                v162 = __asm_movss(*(int32_t *)(v160 + a4));
                v163 = __asm_movaps_2(v158);
                v164 = __asm_movaps_2(v155);
                v150 = v164;
                v151 = v161;
                v152 = v162;
                v153 = v163;
            }
        }
        int64_t v165 = v141 + 1; // 0x380
        while (v165 != v4) {
            // 0x388
            v141 = v165;
            v142 = v153;
            v143 = v152;
            v144 = v151;
            v145 = v150;
            v146 = __asm_xorps(v143, v143);
            v147 = __asm_xorps(v144, v144);
            v148 = __asm_xorps(v142, v142);
            v149 = __asm_xorps(v145, v145);
            v150 = v149;
            v151 = v147;
            v152 = v146;
            v153 = v148;
            if ((int32_t)a1 >= 1) {
                // 0x3a0
                v154 = result;
                v155 = __asm_movaps_2(v148);
                v156 = v154 - 1;
                v157 = __asm_addss(__asm_mulss_3(__asm_movaps_2(v72), v146), __asm_mulss_3(v147, v73));
                v158 = __asm_addss(__asm_mulss_3(v149, v41), __asm_addss(__asm_mulss_3(__asm_movaps_2(v40), v155), v157));
                v159 = __asm_movss_1(v158);
                v160 = 0x21c0 * (v156 & 0xffffffff) + 4 * v141;
                *(int32_t *)(v160 + a6) = (int32_t)v159;
                v161 = __asm_movaps_2(v146);
                v162 = __asm_movss(*(int32_t *)(v160 + a4));
                v163 = __asm_movaps_2(v158);
                v164 = __asm_movaps_2(v155);
                v150 = v164;
                v151 = v161;
                v152 = v162;
                v153 = v163;
                while (v154 > 1) {
                    // 0x3a0
                    v154 = v156;
                    v155 = __asm_movaps_2(v163);
                    v156 = v154 - 1;
                    v157 = __asm_addss(__asm_mulss_3(__asm_movaps_2(v72), v162), __asm_mulss_3(v161, v73));
                    v158 = __asm_addss(__asm_mulss_3(v164, v41), __asm_addss(__asm_mulss_3(__asm_movaps_2(v40), v155), v157));
                    v159 = __asm_movss_1(v158);
                    v160 = 0x21c0 * (v156 & 0xffffffff) + 4 * v141;
                    *(int32_t *)(v160 + a6) = (int32_t)v159;
                    v161 = __asm_movaps_2(v162);
                    v162 = __asm_movss(*(int32_t *)(v160 + a4));
                    v163 = __asm_movaps_2(v158);
                    v164 = __asm_movaps_2(v155);
                    v150 = v164;
                    v151 = v161;
                    v152 = v162;
                    v153 = v163;
                }
            }
            // 0x380
            v165 = v141 + 1;
        }
    }
    // 0x3fb
    if ((int32_t)a1 < 1) {
        // 0x44d
        return result;
    }
    int64_t v166 = 0;
    int64_t v167; // 0x0
    int128_t v168; // 0x42b
    int64_t v169; // 0x43e
    int64_t v170; // 0x443
    if (v42 >= 1) {
        // 0x420
        v170 = 0;
        v167 = 4 * v170 + 0x21c0 * v166;
        v168 = __asm_movss(*(int32_t *)(v167 + a5));
        v169 = __asm_movss_1(__asm_addss_4(v168, *(int32_t *)(v167 + a6)));
        *(int32_t *)(v167 + a4) = (int32_t)v169;
        v170++;
        while (v170 != v4) {
            // 0x420
            v167 = 4 * v170 + 0x21c0 * v166;
            v168 = __asm_movss(*(int32_t *)(v167 + a5));
            v169 = __asm_movss_1(__asm_addss_4(v168, *(int32_t *)(v167 + a6)));
            *(int32_t *)(v167 + a4) = (int32_t)v169;
            v170++;
        }
    }
    int64_t v171 = v166 + 1; // 0x410
    while (v171 != result) {
        // 0x418
        v166 = v171;
        if (v42 >= 1) {
            // 0x420
            v170 = 0;
            v167 = 4 * v170 + 0x21c0 * v166;
            v168 = __asm_movss(*(int32_t *)(v167 + a5));
            v169 = __asm_movss_1(__asm_addss_4(v168, *(int32_t *)(v167 + a6)));
            *(int32_t *)(v167 + a4) = (int32_t)v169;
            v170++;
            while (v170 != v4) {
                // 0x420
                v167 = 4 * v170 + 0x21c0 * v166;
                v168 = __asm_movss(*(int32_t *)(v167 + a5));
                v169 = __asm_movss_1(__asm_addss_4(v168, *(int32_t *)(v167 + a6)));
                *(int32_t *)(v167 + a4) = (int32_t)v169;
                v170++;
            }
        }
        // 0x410
        v171 = v166 + 1;
    }
    // 0x44d
    return result;
}
