
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
    int64_t v2 = __asm_movaps_1(v1); // 0x1a
    int128_t v3 = v2; // 0x1a
    int64_t v4 = a2 & 0xffffffff; // 0x1f
    int64_t result = a1 & 0xffffffff; // 0x21
    int128_t v5 = __asm_xorps(v1, g1); // 0x24
    int128_t v6 = __asm_movaps_1(v5); // 0x2b
    expf(v5);
    int64_t v7 = __asm_movss_2(__asm_subss(__asm_movss(0x3f800000), v5)); // 0x41
    int128_t v8 = __asm_movaps(v6); // 0x47
    expf(v8);
    int64_t v9 = __asm_movaps_1(__asm_mulss(__asm_subss(__asm_movss(0x3f800000), v8), (int32_t)v7)); // 0x63
    int128_t v10 = __asm_movaps(v3); // 0x68
    int64_t v11 = __asm_movaps_1(__asm_addss(v10, v10)); // 0x71
    int128_t v12 = __asm_movaps(v6); // 0x76
    expf(v12);
    int128_t v13 = __asm_movaps((int128_t)v11); // 0x80
    int64_t v14 = __asm_movss_2(__asm_addss_4(__asm_mulss_3(v12, v13), 0x3f800000)); // 0x91
    int128_t v15 = __asm_movaps(v13); // 0x97
    expf(v15);
    int128_t v16 = __asm_subss(__asm_movss((int32_t)v14), v15); // 0xa5
    int128_t v17 = __asm_divss(__asm_movaps((int128_t)(int32_t)v9), v16); // 0xae
    int32_t v18 = __asm_movaps_1(v17); // 0xb2
    int128_t v19 = __asm_movaps(v6); // 0xb7
    expf(v19);
    int128_t v20 = __asm_mulss(v19, v18); // 0xc1
    int64_t v21 = __asm_movss_2(__asm_mulss_3(__asm_addss_4(__asm_movss(-0x40800000), (int32_t)v2), v20)); // 0xd9
    int128_t v22 = __asm_movaps(v6); // 0xdf
    expf(v22);
    int128_t v23 = v18; // 0xe9
    int128_t v24 = __asm_movaps(v23); // 0xe9
    int128_t v25 = __asm_mulss_3(v22, v24); // 0xee
    int128_t v26 = __asm_movaps(v3); // 0xf2
    int128_t v27 = __asm_mulss_3(__asm_addss(__asm_movss(0x3f800000), v26), v25); // 0x103
    int64_t v28 = __asm_movss_2(v27); // 0x107
    int128_t v29 = __asm_xorps(v24, g1); // 0x10d
    int64_t v30 = __asm_movaps_1(v29); // 0x114
    int128_t v31 = __asm_mulss(v26, -0x40000000); // 0x119
    int64_t v32 = __asm_movaps_1(v31); // 0x121
    int128_t v33 = __asm_movaps(v31); // 0x126
    expf(v33);
    int64_t v34 = __asm_movss_2(__asm_mulss(v33, (int32_t)v30)); // 0x134
    int128_t v35 = __asm_movaps(v6); // 0x13a
    exp2f(v35);
    int64_t v36 = __asm_movss_2(v35); // 0x144
    int128_t v37 = __asm_movaps((int128_t)v32); // 0x14a
    expf(v37);
    int128_t v38 = __asm_movss((int32_t)v21); // 0x154
    int128_t v39 = __asm_movaps(v23); // 0x15b
    int128_t v40 = __asm_movss((int32_t)v36); // 0x161
    int128_t v41 = __asm_movss((int32_t)v34); // 0x168
    int128_t v42 = __asm_movss((int32_t)v28); // 0x16e
    int128_t v43 = __asm_xorps(v37, g1); // 0x174
    uint32_t v44 = (int32_t)a2;
    int128_t v45 = v31; // 0x183
    int128_t v46 = v27; // 0x183
    int128_t v47 = v29; // 0x183
    int64_t v48; // 0x0
    int64_t v49; // 0x0
    int64_t v50; // 0x0
    int64_t v51; // 0x2ac
    int64_t v52; // 0x2d7
    int64_t v53; // 0x2db
    int64_t v54; // 0x2df
    int128_t v55; // 0x0
    int128_t v56; // 0x0
    int128_t v57; // 0x0
    int128_t v58; // 0x0
    int128_t v59; // 0x0
    int128_t v60; // 0x0
    int128_t v61; // 0x0
    int128_t v62; // 0x0
    int128_t v63; // 0x0
    int128_t v64; // 0x0
    int128_t v65; // 0x0
    if ((int32_t)a1 >= 1) {
        int64_t v66 = 0;
        int128_t v67 = v29;
        int128_t v68 = v27;
        int128_t v69 = v31;
        int128_t v70 = v69; // 0x19a
        int128_t v71 = v68; // 0x19a
        int128_t v72 = v67; // 0x19a
        int128_t v73; // 0x0
        int128_t v74 = v73; // 0x19a
        int128_t v75; // 0x1b0
        int128_t v76; // 0x1be
        int64_t v77; // 0x0
        int32_t * v78; // 0x1c3
        int128_t v79; // 0x1ce
        int128_t v80; // 0x1e2
        int128_t v81; // 0x1ee
        int64_t v82; // 0x1f4
        int128_t v83; // 0x1f7
        int128_t v84; // 0x1fa
        int128_t v85; // 0x19c
        int128_t v86; // 0x1a1
        if (v44 >= 1) {
            // 0x19c
            v85 = __asm_xorps(v68, v68);
            v86 = __asm_xorps(v67, v67);
            v84 = __asm_xorps(v69, v69);
            v82 = 0;
            v75 = __asm_movaps(v86);
            v76 = __asm_mulss_3(v85, v38);
            v77 = 4 * v82 + 0x21c0 * v66;
            v78 = (int32_t *)(v77 + a3);
            v79 = __asm_addss(__asm_mulss_3(__asm_movss(*v78), v39), v76);
            v80 = __asm_addss(__asm_mulss_3(v84, v43), __asm_addss(__asm_mulss_3(__asm_movaps(v40), v75), v79));
            *(int32_t *)(v77 + a5) = (int32_t)__asm_movss_2(v80);
            v81 = __asm_movss(*v78);
            v82++;
            v83 = __asm_movaps(v80);
            v84 = __asm_movaps(v75);
            v70 = v84;
            v71 = v81;
            v72 = v83;
            v74 = v75;
            while (v82 != v4) {
                // 0x1b0
                v75 = __asm_movaps(v83);
                v76 = __asm_mulss_3(v81, v38);
                v77 = 4 * v82 + 0x21c0 * v66;
                v78 = (int32_t *)(v77 + a3);
                v79 = __asm_addss(__asm_mulss_3(__asm_movss(*v78), v39), v76);
                v80 = __asm_addss(__asm_mulss_3(v84, v43), __asm_addss(__asm_mulss_3(__asm_movaps(v40), v75), v79));
                *(int32_t *)(v77 + a5) = (int32_t)__asm_movss_2(v80);
                v81 = __asm_movss(*v78);
                v82++;
                v83 = __asm_movaps(v80);
                v84 = __asm_movaps(v75);
                v70 = v84;
                v71 = v81;
                v72 = v83;
                v74 = v75;
            }
        }
        int128_t v87 = v72;
        int128_t v88 = v71;
        int128_t v89 = v70;
        int64_t v90 = v66 + 1; // 0x190
        v73 = v74;
        int128_t v91 = v88; // 0x196
        while (v90 != result) {
            // 0x198
            v66 = v90;
            v67 = v87;
            v68 = v88;
            v69 = v89;
            v70 = v69;
            v71 = v68;
            v72 = v67;
            v74 = v73;
            if (v44 >= 1) {
                // 0x19c
                v85 = __asm_xorps(v68, v68);
                v86 = __asm_xorps(v67, v67);
                v84 = __asm_xorps(v69, v69);
                v82 = 0;
                v75 = __asm_movaps(v86);
                v76 = __asm_mulss_3(v85, v38);
                v77 = 4 * v82 + 0x21c0 * v66;
                v78 = (int32_t *)(v77 + a3);
                v79 = __asm_addss(__asm_mulss_3(__asm_movss(*v78), v39), v76);
                v80 = __asm_addss(__asm_mulss_3(v84, v43), __asm_addss(__asm_mulss_3(__asm_movaps(v40), v75), v79));
                *(int32_t *)(v77 + a5) = (int32_t)__asm_movss_2(v80);
                v81 = __asm_movss(*v78);
                v82++;
                v83 = __asm_movaps(v80);
                v84 = __asm_movaps(v75);
                v70 = v84;
                v71 = v81;
                v72 = v83;
                v74 = v75;
                while (v82 != v4) {
                    // 0x1b0
                    v75 = __asm_movaps(v83);
                    v76 = __asm_mulss_3(v81, v38);
                    v77 = 4 * v82 + 0x21c0 * v66;
                    v78 = (int32_t *)(v77 + a3);
                    v79 = __asm_addss(__asm_mulss_3(__asm_movss(*v78), v39), v76);
                    v80 = __asm_addss(__asm_mulss_3(v84, v43), __asm_addss(__asm_mulss_3(__asm_movaps(v40), v75), v79));
                    *(int32_t *)(v77 + a5) = (int32_t)__asm_movss_2(v80);
                    v81 = __asm_movss(*v78);
                    v82++;
                    v83 = __asm_movaps(v80);
                    v84 = __asm_movaps(v75);
                    v70 = v84;
                    v71 = v81;
                    v72 = v83;
                    v74 = v75;
                }
            }
            // 0x190
            v87 = v72;
            v88 = v71;
            v89 = v70;
            v90 = v66 + 1;
            v73 = v74;
            v91 = v88;
        }
        int64_t v92 = 0;
        int128_t v93; // 0x0
        int128_t v94 = v93;
        int128_t v95 = v74;
        int128_t v96 = v87;
        int128_t v97 = v89;
        int128_t v98 = __asm_xorps(v95, v95); // 0x228
        int128_t v99 = __asm_xorps(v96, v96); // 0x22e
        int128_t v100 = __asm_xorps(v94, v94); // 0x231
        int128_t v101 = __asm_xorps(v97, v97); // 0x234
        int128_t v102 = v101; // 0x239
        int128_t v103 = v91; // 0x239
        int128_t v104 = v99; // 0x239
        int128_t v105 = v98; // 0x239
        int128_t v106 = v100; // 0x239
        uint64_t v107; // 0x0
        int128_t v108; // 0x240
        int64_t v109; // 0x243
        int128_t v110; // 0x252
        int128_t v111; // 0x266
        int64_t v112; // 0x278
        int64_t v113; // 0x0
        int128_t v114; // 0x281
        int128_t v115; // 0x284
        int128_t v116; // 0x291
        int128_t v117; // 0x294
        if (v44 >= 1) {
            // 0x240
            v107 = v4;
            v108 = __asm_movaps(v100);
            v109 = v107 - 1;
            v110 = __asm_addss(__asm_mulss_3(__asm_movaps(v42), v98), __asm_mulss_3(v99, v41));
            v111 = __asm_addss(__asm_mulss_3(v101, v43), __asm_addss(__asm_mulss_3(__asm_movaps(v40), v108), v110));
            v112 = __asm_movss_2(v111);
            v113 = (4 * v109 & 0x3fffffffc) + 0x21c0 * v92;
            *(int32_t *)(v113 + a6) = (int32_t)v112;
            v114 = __asm_movaps(v98);
            v115 = __asm_movss(*(int32_t *)(v113 + a3));
            v116 = __asm_movaps(v111);
            v117 = __asm_movaps(v108);
            v102 = v117;
            v103 = v108;
            v104 = v114;
            v105 = v115;
            v106 = v116;
            while (v107 > 1) {
                // 0x240
                v107 = v109;
                v108 = __asm_movaps(v116);
                v109 = v107 - 1;
                v110 = __asm_addss(__asm_mulss_3(__asm_movaps(v42), v115), __asm_mulss_3(v114, v41));
                v111 = __asm_addss(__asm_mulss_3(v117, v43), __asm_addss(__asm_mulss_3(__asm_movaps(v40), v108), v110));
                v112 = __asm_movss_2(v111);
                v113 = (4 * v109 & 0x3fffffffc) + 0x21c0 * v92;
                *(int32_t *)(v113 + a6) = (int32_t)v112;
                v114 = __asm_movaps(v115);
                v115 = __asm_movss(*(int32_t *)(v113 + a3));
                v116 = __asm_movaps(v111);
                v117 = __asm_movaps(v108);
                v102 = v117;
                v103 = v108;
                v104 = v114;
                v105 = v115;
                v106 = v116;
            }
        }
        // 0x220
        v65 = v106;
        v64 = v105;
        int128_t v118 = v104;
        int128_t v119 = v103;
        int128_t v120 = v102;
        int64_t v121 = v92 + 1; // 0x220
        v91 = v119;
        while (v121 != result) {
            // 0x228
            v92 = v121;
            v94 = v65;
            v95 = v64;
            v96 = v118;
            v97 = v120;
            v98 = __asm_xorps(v95, v95);
            v99 = __asm_xorps(v96, v96);
            v100 = __asm_xorps(v94, v94);
            v101 = __asm_xorps(v97, v97);
            v102 = v101;
            v103 = v91;
            v104 = v99;
            v105 = v98;
            v106 = v100;
            if (v44 >= 1) {
                // 0x240
                v107 = v4;
                v108 = __asm_movaps(v100);
                v109 = v107 - 1;
                v110 = __asm_addss(__asm_mulss_3(__asm_movaps(v42), v98), __asm_mulss_3(v99, v41));
                v111 = __asm_addss(__asm_mulss_3(v101, v43), __asm_addss(__asm_mulss_3(__asm_movaps(v40), v108), v110));
                v112 = __asm_movss_2(v111);
                v113 = (4 * v109 & 0x3fffffffc) + 0x21c0 * v92;
                *(int32_t *)(v113 + a6) = (int32_t)v112;
                v114 = __asm_movaps(v98);
                v115 = __asm_movss(*(int32_t *)(v113 + a3));
                v116 = __asm_movaps(v111);
                v117 = __asm_movaps(v108);
                v102 = v117;
                v103 = v108;
                v104 = v114;
                v105 = v115;
                v106 = v116;
                while (v107 > 1) {
                    // 0x240
                    v107 = v109;
                    v108 = __asm_movaps(v116);
                    v109 = v107 - 1;
                    v110 = __asm_addss(__asm_mulss_3(__asm_movaps(v42), v115), __asm_mulss_3(v114, v41));
                    v111 = __asm_addss(__asm_mulss_3(v117, v43), __asm_addss(__asm_mulss_3(__asm_movaps(v40), v108), v110));
                    v112 = __asm_movss_2(v111);
                    v113 = (4 * v109 & 0x3fffffffc) + 0x21c0 * v92;
                    *(int32_t *)(v113 + a6) = (int32_t)v112;
                    v114 = __asm_movaps(v115);
                    v115 = __asm_movss(*(int32_t *)(v113 + a3));
                    v116 = __asm_movaps(v111);
                    v117 = __asm_movaps(v108);
                    v102 = v117;
                    v103 = v108;
                    v104 = v114;
                    v105 = v115;
                    v106 = v116;
                }
            }
            // 0x220
            v65 = v106;
            v64 = v105;
            v118 = v104;
            v119 = v103;
            v120 = v102;
            v121 = v92 + 1;
            v91 = v119;
        }
        int64_t v122 = a2 & 0xfffffff8; // 0x2a6
        v51 = -v4;
        bool v123 = a4 - a6 < 32 | v44 < 8 | a4 - a5 < 32;
        v56 = v120;
        v59 = v119;
        v62 = v118;
        v49 = 0;
        while (true) {
          lab_0x2cc:
            // 0x2cc
            v50 = v49;
            int128_t v124 = v62;
            int128_t v125 = v59;
            int128_t v126 = v56;
            v55 = v126;
            v58 = v125;
            v61 = v124;
            if (v44 < 1) {
                goto lab_0x2c0;
            } else {
                int64_t v127 = 0x21c0 * v50; // 0x2d0
                v52 = v127 + a4;
                v53 = v127 + a5;
                v54 = v127 + a6;
                int64_t v128 = 0; // 0x2e5
                v57 = v126;
                v60 = v125;
                v63 = v124;
                v48 = 0;
                if (v123) {
                    goto lab_0x363;
                } else {
                    int64_t v129 = 4 * v128; // 0x320
                    int128_t v130 = __asm_movups_5(*(int128_t *)(v129 + v53)); // 0x320
                    int64_t v131 = v129 | 16;
                    int128_t v132 = __asm_movups_5(*(int128_t *)(v131 + v53)); // 0x325
                    int128_t v133 = __asm_addps(__asm_movups_5(*(int128_t *)(v129 + v54)), v130); // 0x330
                    int128_t v134 = __asm_addps(__asm_movups_5(*(int128_t *)(v131 + v54)), v132); // 0x339
                    __asm_movups(*(int128_t *)(v129 + v52), v133);
                    __asm_movups(*(int128_t *)(v131 + v52), v134);
                    int64_t v135 = v128 + 8; // 0x347
                    v128 = v135;
                    while (v135 != v122) {
                        // 0x320
                        v129 = 4 * v128;
                        v130 = __asm_movups_5(*(int128_t *)(v129 + v53));
                        v131 = v129 | 16;
                        v132 = __asm_movups_5(*(int128_t *)(v131 + v53));
                        v133 = __asm_addps(__asm_movups_5(*(int128_t *)(v129 + v54)), v130);
                        v134 = __asm_addps(__asm_movups_5(*(int128_t *)(v131 + v54)), v132);
                        __asm_movups(*(int128_t *)(v129 + v52), v133);
                        __asm_movups(*(int128_t *)(v131 + v52), v134);
                        v135 = v128 + 8;
                        v128 = v135;
                    }
                    // 0x350
                    v55 = v134;
                    v58 = v132;
                    v61 = v133;
                    v57 = v134;
                    v60 = v132;
                    v63 = v133;
                    v48 = v122;
                    if (v122 == v4) {
                        goto lab_0x2c0;
                    } else {
                        goto lab_0x363;
                    }
                }
            }
        }
    }
  lab_0x3c5:;
    // 0x3c5
    int128_t v136; // 0x0
    int128_t v137 = v136;
    int128_t v138 = v45; // 0x3c7
    int128_t v139 = v46; // 0x3c7
    int128_t v140 = v47; // 0x3c7
    int128_t v141; // 0x0
    int128_t v142 = v141; // 0x3c7
    if (v44 >= 1) {
        int64_t v143 = 0;
        int128_t v144 = v140;
        int128_t v145 = v139;
        int128_t v146 = v138;
        int128_t v147 = v146; // 0x3eb
        int128_t v148 = v145; // 0x3eb
        int128_t v149 = v144; // 0x3eb
        int128_t v150 = v142; // 0x3eb
        int128_t v151; // 0x3ed
        int128_t v152; // 0x3f2
        int128_t v153; // 0x400
        int128_t v154; // 0x40e
        int64_t v155; // 0x0
        int32_t * v156; // 0x413
        int128_t v157; // 0x41e
        int128_t v158; // 0x432
        int128_t v159; // 0x43e
        int64_t v160; // 0x444
        int128_t v161; // 0x447
        int128_t v162; // 0x44a
        if ((int32_t)a1 >= 1) {
            // 0x3ed
            v151 = __asm_xorps(v145, v145);
            v152 = __asm_xorps(v144, v144);
            v162 = __asm_xorps(v146, v146);
            v160 = 0;
            v153 = __asm_movaps(v152);
            v154 = __asm_mulss_3(v151, v38);
            v155 = 0x21c0 * v160 + 4 * v143;
            v156 = (int32_t *)(v155 + a4);
            v157 = __asm_addss(__asm_mulss_3(__asm_movss(*v156), v39), v154);
            v158 = __asm_addss(__asm_mulss_3(v162, v43), __asm_addss(__asm_mulss_3(__asm_movaps(v40), v153), v157));
            *(int32_t *)(v155 + a5) = (int32_t)__asm_movss_2(v158);
            v159 = __asm_movss(*v156);
            v160++;
            v161 = __asm_movaps(v158);
            v162 = __asm_movaps(v153);
            v147 = v162;
            v148 = v159;
            v149 = v161;
            v150 = v153;
            while (v160 != result) {
                // 0x400
                v153 = __asm_movaps(v161);
                v154 = __asm_mulss_3(v159, v38);
                v155 = 0x21c0 * v160 + 4 * v143;
                v156 = (int32_t *)(v155 + a4);
                v157 = __asm_addss(__asm_mulss_3(__asm_movss(*v156), v39), v154);
                v158 = __asm_addss(__asm_mulss_3(v162, v43), __asm_addss(__asm_mulss_3(__asm_movaps(v40), v153), v157));
                *(int32_t *)(v155 + a5) = (int32_t)__asm_movss_2(v158);
                v159 = __asm_movss(*v156);
                v160++;
                v161 = __asm_movaps(v158);
                v162 = __asm_movaps(v153);
                v147 = v162;
                v148 = v159;
                v149 = v161;
                v150 = v153;
            }
        }
        int64_t v163 = v143 + 1; // 0x3e0
        v142 = v150;
        while (v163 != v4) {
            // 0x3e8
            v143 = v163;
            v144 = v149;
            v145 = v148;
            v146 = v147;
            v147 = v146;
            v148 = v145;
            v149 = v144;
            v150 = v142;
            if ((int32_t)a1 >= 1) {
                // 0x3ed
                v151 = __asm_xorps(v145, v145);
                v152 = __asm_xorps(v144, v144);
                v162 = __asm_xorps(v146, v146);
                v160 = 0;
                v153 = __asm_movaps(v152);
                v154 = __asm_mulss_3(v151, v38);
                v155 = 0x21c0 * v160 + 4 * v143;
                v156 = (int32_t *)(v155 + a4);
                v157 = __asm_addss(__asm_mulss_3(__asm_movss(*v156), v39), v154);
                v158 = __asm_addss(__asm_mulss_3(v162, v43), __asm_addss(__asm_mulss_3(__asm_movaps(v40), v153), v157));
                *(int32_t *)(v155 + a5) = (int32_t)__asm_movss_2(v158);
                v159 = __asm_movss(*v156);
                v160++;
                v161 = __asm_movaps(v158);
                v162 = __asm_movaps(v153);
                v147 = v162;
                v148 = v159;
                v149 = v161;
                v150 = v153;
                while (v160 != result) {
                    // 0x400
                    v153 = __asm_movaps(v161);
                    v154 = __asm_mulss_3(v159, v38);
                    v155 = 0x21c0 * v160 + 4 * v143;
                    v156 = (int32_t *)(v155 + a4);
                    v157 = __asm_addss(__asm_mulss_3(__asm_movss(*v156), v39), v154);
                    v158 = __asm_addss(__asm_mulss_3(v162, v43), __asm_addss(__asm_mulss_3(__asm_movaps(v40), v153), v157));
                    *(int32_t *)(v155 + a5) = (int32_t)__asm_movss_2(v158);
                    v159 = __asm_movss(*v156);
                    v160++;
                    v161 = __asm_movaps(v158);
                    v162 = __asm_movaps(v153);
                    v147 = v162;
                    v148 = v159;
                    v149 = v161;
                    v150 = v153;
                }
            }
            // 0x3e0
            v163 = v143 + 1;
            v142 = v150;
        }
        int64_t v164 = 0;
        int128_t v165 = v137;
        int128_t v166 = v150;
        int128_t v167 = v149;
        int128_t v168 = v147;
        int128_t v169 = __asm_xorps(v166, v166); // 0x468
        int128_t v170 = __asm_xorps(v167, v167); // 0x46e
        int128_t v171 = __asm_xorps(v165, v165); // 0x471
        int128_t v172 = __asm_xorps(v168, v168); // 0x474
        int128_t v173 = v172; // 0x47a
        int128_t v174 = v170; // 0x47a
        int128_t v175 = v169; // 0x47a
        int128_t v176 = v171; // 0x47a
        uint64_t v177; // 0x0
        int128_t v178; // 0x480
        int64_t v179; // 0x483
        int128_t v180; // 0x492
        int128_t v181; // 0x4a6
        int64_t v182; // 0x4b8
        int64_t v183; // 0x0
        int128_t v184; // 0x4c1
        int128_t v185; // 0x4c4
        int128_t v186; // 0x4ca
        int128_t v187; // 0x4cd
        if ((int32_t)a1 >= 1) {
            // 0x480
            v177 = result;
            v178 = __asm_movaps(v171);
            v179 = v177 - 1;
            v180 = __asm_addss(__asm_mulss_3(__asm_movaps(v42), v169), __asm_mulss_3(v170, v41));
            v181 = __asm_addss(__asm_mulss_3(v172, v43), __asm_addss(__asm_mulss_3(__asm_movaps(v40), v178), v180));
            v182 = __asm_movss_2(v181);
            v183 = 0x21c0 * (v179 & 0xffffffff) + 4 * v164;
            *(int32_t *)(v183 + a6) = (int32_t)v182;
            v184 = __asm_movaps(v169);
            v185 = __asm_movss(*(int32_t *)(v183 + a4));
            v186 = __asm_movaps(v181);
            v187 = __asm_movaps(v178);
            v173 = v187;
            v174 = v184;
            v175 = v185;
            v176 = v186;
            while (v177 > 1) {
                // 0x480
                v177 = v179;
                v178 = __asm_movaps(v186);
                v179 = v177 - 1;
                v180 = __asm_addss(__asm_mulss_3(__asm_movaps(v42), v185), __asm_mulss_3(v184, v41));
                v181 = __asm_addss(__asm_mulss_3(v187, v43), __asm_addss(__asm_mulss_3(__asm_movaps(v40), v178), v180));
                v182 = __asm_movss_2(v181);
                v183 = 0x21c0 * (v179 & 0xffffffff) + 4 * v164;
                *(int32_t *)(v183 + a6) = (int32_t)v182;
                v184 = __asm_movaps(v185);
                v185 = __asm_movss(*(int32_t *)(v183 + a4));
                v186 = __asm_movaps(v181);
                v187 = __asm_movaps(v178);
                v173 = v187;
                v174 = v184;
                v175 = v185;
                v176 = v186;
            }
        }
        int64_t v188 = v164 + 1; // 0x460
        while (v188 != v4) {
            // 0x468
            v164 = v188;
            v165 = v176;
            v166 = v175;
            v167 = v174;
            v168 = v173;
            v169 = __asm_xorps(v166, v166);
            v170 = __asm_xorps(v167, v167);
            v171 = __asm_xorps(v165, v165);
            v172 = __asm_xorps(v168, v168);
            v173 = v172;
            v174 = v170;
            v175 = v169;
            v176 = v171;
            if ((int32_t)a1 >= 1) {
                // 0x480
                v177 = result;
                v178 = __asm_movaps(v171);
                v179 = v177 - 1;
                v180 = __asm_addss(__asm_mulss_3(__asm_movaps(v42), v169), __asm_mulss_3(v170, v41));
                v181 = __asm_addss(__asm_mulss_3(v172, v43), __asm_addss(__asm_mulss_3(__asm_movaps(v40), v178), v180));
                v182 = __asm_movss_2(v181);
                v183 = 0x21c0 * (v179 & 0xffffffff) + 4 * v164;
                *(int32_t *)(v183 + a6) = (int32_t)v182;
                v184 = __asm_movaps(v169);
                v185 = __asm_movss(*(int32_t *)(v183 + a4));
                v186 = __asm_movaps(v181);
                v187 = __asm_movaps(v178);
                v173 = v187;
                v174 = v184;
                v175 = v185;
                v176 = v186;
                while (v177 > 1) {
                    // 0x480
                    v177 = v179;
                    v178 = __asm_movaps(v186);
                    v179 = v177 - 1;
                    v180 = __asm_addss(__asm_mulss_3(__asm_movaps(v42), v185), __asm_mulss_3(v184, v41));
                    v181 = __asm_addss(__asm_mulss_3(v187, v43), __asm_addss(__asm_mulss_3(__asm_movaps(v40), v178), v180));
                    v182 = __asm_movss_2(v181);
                    v183 = 0x21c0 * (v179 & 0xffffffff) + 4 * v164;
                    *(int32_t *)(v183 + a6) = (int32_t)v182;
                    v184 = __asm_movaps(v185);
                    v185 = __asm_movss(*(int32_t *)(v183 + a4));
                    v186 = __asm_movaps(v181);
                    v187 = __asm_movaps(v178);
                    v173 = v187;
                    v174 = v184;
                    v175 = v185;
                    v176 = v186;
                }
            }
            // 0x460
            v188 = v164 + 1;
        }
    }
    if ((int32_t)a1 < 1) {
        // 0x5f5
        return result;
    }
    int64_t v189 = 0; // 0x4f1
    int64_t v190; // 0x0
    int64_t v191; // 0x517
    int64_t v192; // 0x51b
    int64_t v193; // 0x51f
    while (true) {
      lab_0x50c:
        // 0x50c
        v190 = v189;
        if (v44 < 1) {
            goto lab_0x500;
        } else {
            int64_t v194 = 0x21c0 * v190; // 0x510
            v191 = v194 + a4;
            v192 = v194 + a5;
            v193 = v194 + a6;
            if (a4 - a6 < 32 || v44 < 8 || a4 - a5 < 32) {
                goto lab_0x593;
            } else {
                int64_t v195; // 0x0
                int64_t v196 = 4 * v195; // 0x550
                int128_t v197 = __asm_movups_5(*(int128_t *)(v196 + v192)); // 0x550
                int64_t v198 = v196 | 16;
                int128_t v199 = __asm_movups_5(*(int128_t *)(v198 + v192)); // 0x555
                int128_t v200 = __asm_addps(__asm_movups_5(*(int128_t *)(v196 + v193)), v197); // 0x560
                int128_t v201 = __asm_addps(__asm_movups_5(*(int128_t *)(v198 + v193)), v199); // 0x569
                __asm_movups(*(int128_t *)(v196 + v191), v200);
                __asm_movups(*(int128_t *)(v198 + v191), v201);
                int64_t v202 = v195 + 8; // 0x577
                v195 = v202;
                int64_t v203; // 0x4e6
                while (v202 != v203) {
                    int64_t v204 = v195;
                    v196 = 4 * v204;
                    int128_t v205 = *(int128_t *)(v196 + v192); // 0x550
                    v197 = __asm_movups_5(v205);
                    v198 = v196 | 16;
                    int128_t v206 = *(int128_t *)(v198 + v192); // 0x555
                    v199 = __asm_movups_5(v206);
                    int128_t v207 = *(int128_t *)(v196 + v193); // 0x55b
                    v200 = __asm_addps(__asm_movups_5(v207), v197);
                    int128_t v208 = *(int128_t *)(v198 + v193); // 0x563
                    v201 = __asm_addps(__asm_movups_5(v208), v199);
                    int128_t v209 = *(int128_t *)(v196 + v191); // 0x56c
                    __asm_movups(v209, v200);
                    int128_t v210 = *(int128_t *)(v198 + v191); // 0x571
                    __asm_movups(v210, v201);
                    v202 = v204 + 8;
                    v195 = v202;
                }
                // 0x580
                if (v203 == v4) {
                    goto lab_0x500;
                } else {
                    goto lab_0x593;
                }
            }
        }
    }
    // 0x5f5
    return result;
  lab_0x500:;
    int64_t v211 = v190 + 1; // 0x500
    v189 = v211;
    if (v211 == result) {
        return result;
    }
    goto lab_0x50c;
  lab_0x593:;
    int64_t v212 = 0;
    int64_t v213 = v212; // 0x599
    if ((a2 & 1) != 0) {
        int64_t v214 = 4 * v212; // 0x59b
        int128_t v215 = __asm_movss(*(int32_t *)(v214 + v192)); // 0x59b
        int64_t v216 = __asm_movss_2(__asm_addss_4(v215, *(int32_t *)(v214 + v193))); // 0x5a7
        *(int32_t *)(v214 + v191) = (int32_t)v216;
        v213 = v212 | 1;
    }
    int64_t v217 = v213; // 0x5ba
    if (-v4 != -1 - v212) {
        int64_t v218 = 4 * v217; // 0x5c0
        int128_t v219 = __asm_movss(*(int32_t *)(v218 + v192)); // 0x5c0
        int64_t v220 = __asm_movss_2(__asm_addss_4(v219, *(int32_t *)(v218 + v193))); // 0x5cc
        *(int32_t *)(v218 + v191) = (int32_t)v220;
        int64_t v221 = v218 + 4;
        int128_t v222 = __asm_movss(*(int32_t *)(v221 + v192)); // 0x5d2
        int64_t v223 = __asm_movss_2(__asm_addss_4(v222, *(int32_t *)(v221 + v193))); // 0x5e0
        *(int32_t *)(v221 + v191) = (int32_t)v223;
        int64_t v224 = v217 + 2; // 0x5e7
        v217 = v224;
        while (v224 != v4) {
            // 0x5c0
            v218 = 4 * v217;
            v219 = __asm_movss(*(int32_t *)(v218 + v192));
            v220 = __asm_movss_2(__asm_addss_4(v219, *(int32_t *)(v218 + v193)));
            *(int32_t *)(v218 + v191) = (int32_t)v220;
            v221 = v218 + 4;
            v222 = __asm_movss(*(int32_t *)(v221 + v192));
            v223 = __asm_movss_2(__asm_addss_4(v222, *(int32_t *)(v221 + v193)));
            *(int32_t *)(v221 + v191) = (int32_t)v223;
            v224 = v217 + 2;
            v217 = v224;
        }
    }
    goto lab_0x500;
  lab_0x2c0:;
    int64_t v225 = v50 + 1; // 0x2c0
    v56 = v55;
    v59 = v58;
    v62 = v61;
    v49 = v225;
    v45 = v55;
    v46 = v58;
    v47 = v61;
    v141 = v64;
    v136 = v65;
    if (v225 == result) {
        // break -> 0x3c5
        goto lab_0x3c5;
    }
    goto lab_0x2cc;
  lab_0x363:;
    int64_t v226 = v48;
    int128_t v227 = v63;
    int128_t v228 = v60;
    int128_t v229 = v57; // 0x369
    int64_t v230 = v226; // 0x369
    if ((a2 & 1) != 0) {
        int64_t v231 = 4 * v226; // 0x36b
        int128_t v232 = __asm_movss(*(int32_t *)(v231 + v53)); // 0x36b
        int128_t v233 = __asm_addss_4(v232, *(int32_t *)(v231 + v54)); // 0x371
        *(int32_t *)(v231 + v52) = (int32_t)__asm_movss_2(v233);
        v229 = v233;
        v230 = v226 | 1;
    }
    // 0x384
    v55 = v229;
    v58 = v228;
    v61 = v227;
    int64_t v234 = v230; // 0x38a
    if (v51 != -1 - v226) {
        int64_t v235 = 4 * v234; // 0x390
        int128_t v236 = __asm_movss(*(int32_t *)(v235 + v53)); // 0x390
        int64_t v237 = __asm_movss_2(__asm_addss_4(v236, *(int32_t *)(v235 + v54))); // 0x39c
        *(int32_t *)(v235 + v52) = (int32_t)v237;
        int64_t v238 = v235 + 4;
        int128_t v239 = __asm_movss(*(int32_t *)(v238 + v53)); // 0x3a2
        int128_t v240 = __asm_addss_4(v239, *(int32_t *)(v238 + v54)); // 0x3a9
        *(int32_t *)(v238 + v52) = (int32_t)__asm_movss_2(v240);
        int64_t v241 = v234 + 2; // 0x3b7
        v55 = v240;
        v58 = v228;
        v61 = v227;
        v234 = v241;
        while (v241 != v4) {
            // 0x390
            v235 = 4 * v234;
            v236 = __asm_movss(*(int32_t *)(v235 + v53));
            v237 = __asm_movss_2(__asm_addss_4(v236, *(int32_t *)(v235 + v54)));
            *(int32_t *)(v235 + v52) = (int32_t)v237;
            v238 = v235 + 4;
            v239 = __asm_movss(*(int32_t *)(v238 + v53));
            v240 = __asm_addss_4(v239, *(int32_t *)(v238 + v54));
            *(int32_t *)(v238 + v52) = (int32_t)__asm_movss_2(v240);
            v241 = v234 + 2;
            v55 = v240;
            v58 = v228;
            v61 = v227;
            v234 = v241;
        }
    }
    goto lab_0x2c0;
}
