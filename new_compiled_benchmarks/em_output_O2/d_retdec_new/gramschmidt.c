
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "gramschmidt.h"
int64_t kernel_gramschmidt(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x0
    int128_t v1; // 0x0
    int128_t v2 = v1;
    int64_t result; // 0x0
    if ((int32_t)a2 < 1) {
        // 0x653
        return result;
    }
    int64_t v3 = a1 & 0xffffffff; // 0x20
    uint64_t v4 = a2 & 0xffffffff; // 0x22
    uint64_t v5 = a1 & 3; // 0x4d
    int64_t v6 = a1 & 0xfffffffe; // 0x59
    int64_t v7 = -v3; // 0x60
    uint32_t v8 = (int32_t)a1; // 0xd6
    int64_t v9 = 1; // 0x83
    int128_t v10 = __asm_xorpd(v2, v2); // 0x83
    int64_t v11 = 0; // 0x83
    int64_t v12; // 0x0
    int64_t v13; // 0x0
    int64_t v14; // 0xb4
    int64_t v15; // 0x0
    int64_t v16; // 0xb4
    uint64_t v17; // 0xb8
    int64_t v18; // 0xc1
    uint64_t v19; // 0x0
    int128_t v20; // 0x0
    int128_t v21; // 0x0
    int128_t v22; // 0x0
    int128_t v23; // 0x0
    int128_t v24; // 0x0
    int128_t v25; // 0x0
    while (true) {
      lab_0xaf:
        // 0xaf
        v12 = v11;
        v24 = v10;
        int128_t v26 = v20;
        v13 = v9;
        v14 = 8 * v12;
        v15 = v14 + 0x2580 * v3;
        v16 = v15 - 0x2578;
        v17 = v16 + a5;
        v18 = 0x2588 * v12;
        v19 = v14 + a5;
        if (v8 < 1) {
            // 0x1c0
            *(int64_t *)(v14 + a4 + 0x2580 * v12) = 0;
            v23 = v26;
            v10 = v24;
            goto lab_0x370;
        } else {
            int128_t v27 = __asm_xorpd(v26, v26); // 0xde
            int128_t v28 = v27; // 0xef
            int64_t v29 = 0; // 0xef
            if (v8 >= 4) {
                int64_t v30 = v14 + a3;
                int64_t v31 = 0; // 0x175
                int128_t v32 = __asm_movsd(*(int64_t *)(0x2580 * v31 + v30)); // 0x10a
                int128_t v33 = __asm_addsd(__asm_mulsd(v32, v32), v27); // 0x114
                int128_t v34 = __asm_movsd(*(int64_t *)(0x2580 * (v31 | 1) + v30)); // 0x129
                int128_t v35 = __asm_addsd(__asm_mulsd(v34, v34), v33); // 0x133
                int128_t v36 = __asm_movsd(*(int64_t *)(0x2580 * (v31 | 2) + v30)); // 0x148
                int128_t v37 = __asm_addsd(__asm_mulsd(v36, v36), v35); // 0x152
                int128_t v38 = __asm_movsd(*(int64_t *)(0x2580 * (v31 | 3) + v30)); // 0x167
                int128_t v39 = __asm_addsd(__asm_mulsd(v38, v38), v37); // 0x171
                v31 += 4;
                v28 = v39;
                v29 = v31;
                while (v31 != (a1 & 0xfffffffc)) {
                    // 0x100
                    v32 = __asm_movsd(*(int64_t *)(0x2580 * v31 + v30));
                    v33 = __asm_addsd(__asm_mulsd(v32, v32), v39);
                    v34 = __asm_movsd(*(int64_t *)(0x2580 * (v31 | 1) + v30));
                    v35 = __asm_addsd(__asm_mulsd(v34, v34), v33);
                    v36 = __asm_movsd(*(int64_t *)(0x2580 * (v31 | 2) + v30));
                    v37 = __asm_addsd(__asm_mulsd(v36, v36), v35);
                    v38 = __asm_movsd(*(int64_t *)(0x2580 * (v31 | 3) + v30));
                    v39 = __asm_addsd(__asm_mulsd(v38, v38), v37);
                    v31 += 4;
                    v28 = v39;
                    v29 = v31;
                }
            }
            int128_t v40 = v28;
            if (v5 == 0) {
                // 0x1b3
                __asm_ucomisd(v40, v24);
                v21 = v40;
                goto lab_0x1b9;
            } else {
                int64_t v41 = v29; // 0x0
                int128_t v42 = __asm_movsd(*(int64_t *)(v14 + a3 + 0x2580 * v41)); // 0x19a
                int128_t v43 = __asm_addsd(v40, __asm_mulsd(v42, v42)); // 0x1a4
                int64_t v44 = 1; // 0x1ab
                int128_t v45 = v43; // 0x1b1
                v41++;
                int64_t v46 = v44; // 0x1b1
                while (v44 != v5) {
                    // 0x190
                    v42 = __asm_movsd(*(int64_t *)(v14 + a3 + 0x2580 * v41));
                    v43 = __asm_addsd(v45, __asm_mulsd(v42, v42));
                    v44 = v46 + 1;
                    v45 = v43;
                    v41++;
                    v46 = v44;
                }
                // 0x1b3
                __asm_ucomisd(v43, v24);
                v21 = v43;
                if (v44 < v5) {
                    // 0x1e0
                    sqrt();
                    v22 = v43;
                    v25 = __asm_xorpd(v24, v24);
                    goto lab_0x20f;
                } else {
                    goto lab_0x1b9;
                }
            }
        }
    }
  lab_0x653:
    // 0x653
    return result;
  lab_0x3d0:;
    // 0x3d0
    int64_t v47; // 0x0
    int64_t v48 = v47 + 1; // 0x3d0
    int128_t v49; // 0x0
    int128_t v50 = v49; // 0x3db
    int64_t v51; // 0x0
    int64_t v52 = v51; // 0x3db
    int128_t v53 = v49; // 0x3db
    int64_t v54 = v51; // 0x3db
    int64_t v55; // 0x0
    int64_t v56 = v55 + 1; // 0x3db
    int64_t v57 = v48; // 0x3db
    if (v48 == v4) {
        // break -> 0x90
        goto lab_0x90;
    }
    goto lab_0x3e1;
  lab_0x5a0:;
    // 0x5a0
    int64_t v80; // 0x0
    int64_t v103 = v80;
    int128_t v78; // 0x0
    int128_t v104 = v78; // 0x5a7
    int64_t v79; // 0x0
    int64_t v105 = v79; // 0x5a7
    int64_t v106 = v103; // 0x5a7
    int64_t v60; // 0x3eb
    int64_t * v61; // 0x3eb
    if ((a1 & 1) != 0) {
        int64_t v107 = 0x2580 * v103; // 0x5a9
        int64_t * v108 = (int64_t *)(v60 + a3 + v107); // 0x5b4
        int128_t v109 = __asm_movsd(*v108); // 0x5b4
        int64_t v110 = v107 + a5; // 0x5ba
        int128_t v111 = __asm_subsd(v109, __asm_mulsd_4(__asm_movsd(*(int64_t *)(v110 + v14)), *v61)); // 0x5c8
        *v108 = __asm_movsd_1(v111);
        v104 = v111;
        v105 = v110;
        v106 = v103 | 1;
    }
    // 0x5d9
    v49 = v104;
    v51 = v105;
    if (v7 != -1 - v103) {
        int64_t v112 = v106; // 0x645
        int64_t v113 = 0x2580 * v112; // 0x5f0
        int64_t v114 = v113 + v60 + a3;
        int64_t * v115 = (int64_t *)v114; // 0x5fb
        int128_t v116 = __asm_movsd(*v115); // 0x5fb
        int128_t v117 = __asm_mulsd_4(__asm_movsd(*(int64_t *)(v113 + v19)), *v61); // 0x60b
        *v115 = __asm_movsd_1(__asm_subsd(v116, v117));
        int64_t * v118 = (int64_t *)(v114 + 0x2580); // 0x622
        int128_t v119 = __asm_movsd(*v118); // 0x622
        int64_t v120 = v113 + 0x2580 + a5; // 0x628
        int128_t v121 = __asm_subsd(v119, __asm_mulsd_4(__asm_movsd(*(int64_t *)(v120 + v14)), *v61)); // 0x63b
        *v118 = __asm_movsd_1(v121);
        v112 += 2;
        v49 = v121;
        v51 = v120;
        while (v112 != v3) {
            // 0x5f0
            v113 = 0x2580 * v112;
            v114 = v113 + v60 + a3;
            v115 = (int64_t *)v114;
            v116 = __asm_movsd(*v115);
            v117 = __asm_mulsd_4(__asm_movsd(*(int64_t *)(v113 + v19)), *v61);
            *v115 = __asm_movsd_1(__asm_subsd(v116, v117));
            v118 = (int64_t *)(v114 + 0x2580);
            v119 = __asm_movsd(*v118);
            v120 = v113 + 0x2580 + a5;
            v121 = __asm_subsd(v119, __asm_mulsd_4(__asm_movsd(*(int64_t *)(v120 + v14)), *v61));
            *v118 = __asm_movsd_1(v121);
            v112 += 2;
            v49 = v121;
            v51 = v120;
        }
    }
    goto lab_0x3d0;
  lab_0x370:;
    int128_t v122 = v23;
    v11 = v12 + 1;
    v50 = v122;
    v52 = v11;
    if (v11 < v4) {
        int64_t v88 = v18 + 16; // 0x396
        int64_t v85 = v15 - 0x2570; // 0x3b1
        int64_t v83 = v14 + a3 + 8;
        int64_t v87 = v88 & -256;
        int64_t v89 = v18 + a4 + 8;
        v53 = v122;
        v54 = v85;
        v56 = 0;
        v57 = v13;
        while (true) {
          lab_0x3e1:
            // 0x3e1
            v47 = v57;
            v55 = v56;
            int64_t v58 = v54;
            int128_t v59 = v53;
            v60 = 8 * v47;
            v61 = (int64_t *)(0x2580 * v12 + a4 + v60);
            *v61 = 0;
            v49 = v59;
            v51 = v58;
            if (v8 < 1) {
                goto lab_0x3d0;
            } else {
                int128_t v62 = __asm_xorpd(v59, v59); // 0x3fb
                int128_t v63 = v62; // 0x40e
                int64_t v64 = v58; // 0x40e
                int64_t v65 = 0; // 0x40e
                if (v8 != 1) {
                    int64_t v66 = 0; // 0x45d
                    int64_t v67 = 0x2580 * v66; // 0x410
                    int128_t v68 = __asm_movsd(*(int64_t *)(v67 + v19)); // 0x41b
                    int128_t v69 = __asm_addsd(__asm_mulsd_4(v68, *(int64_t *)(v60 + a3 + v67)), v62); // 0x42a
                    *v61 = __asm_movsd_1(v69);
                    int64_t v70 = 0x2580 * (v66 | 1); // 0x43a
                    int128_t v71 = __asm_movsd(*(int64_t *)(v70 + v19)); // 0x445
                    int64_t v72 = v70 + a3; // 0x44b
                    int128_t v73 = __asm_addsd(__asm_mulsd_4(v71, *(int64_t *)(v72 + v60)), v69); // 0x454
                    *v61 = __asm_movsd_1(v73);
                    v66 += 2;
                    v63 = v73;
                    v64 = v72;
                    v65 = v66;
                    while (v66 != v6) {
                        // 0x410
                        v67 = 0x2580 * v66;
                        v68 = __asm_movsd(*(int64_t *)(v67 + v19));
                        v69 = __asm_addsd(__asm_mulsd_4(v68, *(int64_t *)(v60 + a3 + v67)), v73);
                        *v61 = __asm_movsd_1(v69);
                        v70 = 0x2580 * (v66 | 1);
                        v71 = __asm_movsd(*(int64_t *)(v70 + v19));
                        v72 = v70 + a3;
                        v73 = __asm_addsd(__asm_mulsd_4(v71, *(int64_t *)(v72 + v60)), v69);
                        *v61 = __asm_movsd_1(v73);
                        v66 += 2;
                        v63 = v73;
                        v64 = v72;
                        v65 = v66;
                    }
                }
                int128_t v74 = v63;
                if ((a1 & 1) != 0) {
                    int64_t v75 = 0x2580 * v65; // 0x470
                    int128_t v76 = __asm_movsd(*(int64_t *)(v75 + v19)); // 0x47b
                    int128_t v77 = __asm_mulsd_4(v76, *(int64_t *)(v60 + a3 + v75)); // 0x484
                    *v61 = __asm_movsd_1(__asm_addsd(v77, v74));
                }
                // 0x49b
                v78 = v74;
                v79 = v64;
                v80 = 0;
                if (v8 >= 14) {
                    int64_t v81 = 8 * v55; // 0x4ad
                    uint64_t v82 = v83 + v81; // 0x4b1
                    uint64_t v84 = v81 + a3 + v85; // 0x4bd
                    int64_t v86 = v87 | (int64_t)(v19 < v84); // 0x4e6
                    v78 = v74;
                    v79 = v86;
                    v80 = 0;
                    if (v82 < v17 == v19 < v84) {
                        goto lab_0x5a0;
                    } else {
                        // 0x4ff
                        v78 = v74;
                        v79 = v86;
                        v80 = 0;
                        if (v82 < v81 + a4 + v88 == v89 + v81 < v84) {
                            goto lab_0x5a0;
                        } else {
                            int128_t v90 = __asm_movsd(*v61); // 0x512
                            int128_t v91 = __asm_unpcklpd(v90, v90); // 0x517
                            int64_t v92 = v60 + a3;
                            int64_t v93 = 0; // 0x51e
                            int64_t v94 = 0x2580 * v93; // 0x527
                            int64_t v95 = 0x2580 * (v93 | 1); // 0x532
                            int64_t * v96 = (int64_t *)(v94 + v92); // 0x53d
                            int128_t v97 = __asm_movsd(*v96); // 0x53d
                            int64_t * v98 = (int64_t *)(v95 + v92); // 0x543
                            int128_t v99 = __asm_movhpd(v97, *v98); // 0x543
                            int64_t v100 = v95 + a5; // 0x54c
                            int128_t v101 = __asm_movsd(*(int64_t *)(v94 + v19)); // 0x54f
                            int128_t v102 = __asm_subpd(v99, __asm_mulpd(__asm_movhpd(v101, *(int64_t *)(v100 + v14)), v91)); // 0x55f
                            __asm_movlpd(*v96, v102);
                            __asm_movhpd_2(*v98, v102);
                            v93 += 2;
                            while (v93 != v6) {
                                // 0x520
                                v94 = 0x2580 * v93;
                                v95 = 0x2580 * (v93 | 1);
                                v96 = (int64_t *)(v94 + v92);
                                v97 = __asm_movsd(*v96);
                                v98 = (int64_t *)(v95 + v92);
                                v99 = __asm_movhpd(v97, *v98);
                                v100 = v95 + a5;
                                v101 = __asm_movsd(*(int64_t *)(v94 + v19));
                                v102 = __asm_subpd(v99, __asm_mulpd(__asm_movhpd(v101, *(int64_t *)(v100 + v14)), v91));
                                __asm_movlpd(*v96, v102);
                                __asm_movhpd_2(*v98, v102);
                                v93 += 2;
                            }
                            // 0x578
                            v49 = v91;
                            v51 = v100;
                            v78 = v91;
                            v79 = v100;
                            v80 = v6;
                            if (v6 == v3) {
                                goto lab_0x3d0;
                            } else {
                                goto lab_0x5a0;
                            }
                        }
                    }
                } else {
                    goto lab_0x5a0;
                }
            }
        }
    }
  lab_0x90:
    // 0x90
    v9 = v13 + 1;
    v20 = v50;
    result = v52;
    if (v4 == v11) {
        // break -> 0x653
        goto lab_0x653;
    }
    goto lab_0xaf;
  lab_0x1b9:
    // 0x1b9
    v22 = __asm_sqrtsd(v21);
    v25 = v24;
    goto lab_0x20f;
  lab_0x20f:;
    int128_t v123 = v25;
    int128_t v124 = v22;
    int64_t v125 = __asm_movsd_1(v124); // 0x201
    int64_t * v126 = (int64_t *)(v14 + a4 + 0x2580 * v12); // 0x201
    *v126 = v125;
    int128_t v127 = v124; // 0x216
    int64_t v128 = 0; // 0x216
    if (v8 < 4) {
        goto lab_0x2e2;
    } else {
        uint64_t v129 = v14 + a3;
        v127 = v124;
        v128 = 0;
        if (v19 < v16 + a3 == v129 < v17) {
            goto lab_0x2e2;
        } else {
            uint64_t v130 = v18 + a4; // 0x228
            if (v19 < v130 + 8 == v130 < v17) {
                goto lab_0x2e2;
            } else {
                int128_t v131 = __asm_movsd(v125); // 0x26b
                int128_t v132 = __asm_unpcklpd(v131, v131); // 0x26f
                int64_t v133 = 0; // 0x275
                int64_t v134 = 0x2580 * v133; // 0x287
                int64_t v135 = 0x2580 * (v133 | 1); // 0x292
                int128_t v136 = __asm_movsd(*(int64_t *)(v134 + v129)); // 0x29d
                int128_t v137 = __asm_divpd(__asm_movhpd(v136, *(int64_t *)(v135 + v129)), v132); // 0x2a9
                __asm_movlpd(*(int64_t *)(v134 + v19), v137);
                __asm_movhpd_2(*(int64_t *)(v135 + v19), v137);
                v133 += 2;
                while (v133 != v6) {
                    // 0x280
                    v134 = 0x2580 * v133;
                    v135 = 0x2580 * (v133 | 1);
                    v136 = __asm_movsd(*(int64_t *)(v134 + v129));
                    v137 = __asm_divpd(__asm_movhpd(v136, *(int64_t *)(v135 + v129)), v132);
                    __asm_movlpd(*(int64_t *)(v134 + v19), v137);
                    __asm_movhpd_2(*(int64_t *)(v135 + v19), v137);
                    v133 += 2;
                }
                // 0x2c8
                v127 = v132;
                v128 = v6;
                v23 = v132;
                v10 = v123;
                if (v6 != v3) {
                    goto lab_0x2e2;
                } else {
                    goto lab_0x370;
                }
            }
        }
    }
  lab_0x2e2:;
    int64_t v138 = v128;
    int128_t v139 = v127; // 0x2e9
    int64_t v140 = v138; // 0x2e9
    if ((a1 & 1) != 0) {
        int64_t v141 = 0x2580 * v138; // 0x2eb
        int128_t v142 = __asm_divsd_3(__asm_movsd(*(int64_t *)(v14 + a3 + v141)), *v126); // 0x2fc
        *(int64_t *)(v141 + v19) = __asm_movsd_1(v142);
        v139 = v142;
        v140 = v138 | 1;
    }
    // 0x310
    v23 = v139;
    v10 = v123;
    if (v7 != -1 - v138) {
        int64_t v143 = v140; // 0x361
        int64_t v144 = 0x2580 * v143; // 0x320
        int64_t v145 = v144 + v14 + a3;
        int64_t v146 = __asm_movsd_1(__asm_divsd_3(__asm_movsd(*(int64_t *)v145), *v126)); // 0x339
        int64_t v147 = v144 + a5 + v14;
        *(int64_t *)v147 = v146;
        int128_t v148 = __asm_divsd_3(__asm_movsd(*(int64_t *)(v145 + 0x2580)), *v126); // 0x34d
        *(int64_t *)(v147 + 0x2580) = __asm_movsd_1(v148);
        v143 += 2;
        v23 = v148;
        v10 = v123;
        while (v143 != v3) {
            // 0x320
            v144 = 0x2580 * v143;
            v145 = v144 + v14 + a3;
            v146 = __asm_movsd_1(__asm_divsd_3(__asm_movsd(*(int64_t *)v145), *v126));
            v147 = v144 + a5 + v14;
            *(int64_t *)v147 = v146;
            v148 = __asm_divsd_3(__asm_movsd(*(int64_t *)(v145 + 0x2580)), *v126);
            *(int64_t *)(v147 + 0x2580) = __asm_movsd_1(v148);
            v143 += 2;
            v23 = v148;
            v10 = v123;
        }
    }
    goto lab_0x370;
}
