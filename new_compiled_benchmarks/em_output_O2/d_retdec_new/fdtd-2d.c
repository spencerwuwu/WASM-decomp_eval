
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "fdtd-2d.h"
int64_t kernel_fdtd_2d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5, int64_t a6, int64_t a7) {
    int64_t result; // 0x0
    if ((int32_t)a1 < 1) {
        // 0x769
        return result;
    }
    int64_t v1 = a3 & 0xffffffff; // 0x1b
    int64_t v2 = a3 + 0xffffffff; // 0x2f
    int64_t v3 = v2 & 0xffffffff; // 0x2f
    int64_t v4 = a2 & 0xffffffff; // 0x3c
    int64_t v5 = v1 - 1; // 0x57
    int64_t v6 = a3 & 0xfffffffc; // 0x5d
    int64_t v7 = a3 & 3; // 0x63
    int64_t v8 = -v1; // 0x6a
    int64_t v9 = v5 & -4; // 0x77
    int64_t v10 = v2 & 0xfffffffc; // 0x7e
    int128_t v11 = __asm_movsd(-0x4020000000000000); // 0x87
    int128_t v12 = __asm_movapd(g1); // 0x8f
    int128_t v13 = __asm_movsd(-0x401999999999999a); // 0xb2
    int128_t v14 = __asm_movapd(g2); // 0xba
    int64_t v15 = 8 * v1; // 0xc2
    int64_t v16 = v9 | 1; // 0xe4
    int32_t v17 = a3; // 0x132
    uint32_t v18 = (int32_t)a2;
    int64_t v19 = a5 + 0x2580;
    int64_t v20 = 0x100000000 * v16 >> 32;
    int64_t v21 = v16; // 0x104
    int64_t v22 = 0; // 0x104
    int64_t v23; // 0x0
    int64_t v24; // 0x0
    int64_t v25; // 0x0
    while (true) {
      lab_0x132:
        // 0x132
        v23 = v22;
        v25 = v21;
        if (v17 < 1) {
            goto lab_0x230;
        } else {
            // 0x13a
            v24 = 0;
            if (v17 < 8) {
                goto lab_0x161;
            } else {
                uint64_t v26 = 8 * v23 + a7; // 0x13f
                v24 = 0;
                if (v26 + 8 <= a5 || v26 >= v15 + a5) {
                    int128_t v27 = __asm_movsd(*(int64_t *)v26); // 0x1ee
                    int128_t v28 = __asm_unpcklpd(v27, v27); // 0x1f4
                    int64_t v29 = 0; // 0x1fa
                    int64_t v30 = 8 * v29 + a5;
                    __asm_movupd(*(int128_t *)v30, v28);
                    __asm_movupd(*(int128_t *)(v30 + 16), v28);
                    v29 += 4;
                    while (v29 != v6) {
                        // 0x200
                        v30 = 8 * v29 + a5;
                        __asm_movupd(*(int128_t *)v30, v28);
                        __asm_movupd(*(int128_t *)(v30 + 16), v28);
                        v29 += 4;
                    }
                    // 0x216
                    v24 = v6;
                    v25 = v6;
                    if (v6 != v1) {
                        goto lab_0x161;
                    } else {
                        goto lab_0x230;
                    }
                } else {
                    goto lab_0x161;
                }
            }
        }
    }
  lab_0x769:
    // 0x769
    return result;
  lab_0x5d0:;
    // 0x5d0
    int64_t v31; // 0x0
    int64_t v32 = v31; // 0x5d5
    int64_t v33; // 0x5de
    int64_t v34 = v33; // 0x5d5
    if (v33 == (a2 + 0xffffffff & 0xffffffff)) {
        // break -> 0x110
        goto lab_0x110;
    }
    goto lab_0x5db;
  lab_0x720:;
    // 0x720
    int64_t v40; // 0x0
    int64_t v62 = 8 * v40; // 0x720
    uint64_t v38; // 0x5f1
    int128_t v63 = __asm_movupd_2(*(int128_t *)(v62 + v38)); // 0x720
    int128_t v64 = __asm_subsd_3(__asm_unpckhpd(__asm_movapd(v63), v63), v63); // 0x72e
    int128_t v65 = __asm_addsd(v64, *(int64_t *)(0x2580 * v33 + a5 + v62)); // 0x73c
    int64_t v39; // 0x5f5
    int128_t v66 = __asm_mulsd(__asm_subsd(v65, *(int64_t *)(v62 + v39)), v13); // 0x748
    uint64_t v37; // 0x5ed
    int64_t * v67 = (int64_t *)(v62 + v37); // 0x74c
    *v67 = __asm_movsd_1(__asm_addsd(v66, *v67));
    int64_t v61 = v40 + 1; // 0x758
    goto lab_0x75c;
  lab_0x75c:
    // 0x75c
    v31 = v39;
    v40 = v61;
    if (v61 != v3) {
        goto lab_0x720;
    } else {
        goto lab_0x5d0;
    }
  lab_0x430:;
    // 0x430
    int64_t v68; // 0x0
    int64_t v69 = v68;
    int64_t v70; // 0x0
    int64_t v71 = v70 + 1; // 0x430
    int64_t v72 = v69; // 0x436
    int64_t v73 = v71; // 0x436
    if (v71 == v4) {
        // break -> 0x5c0
        goto lab_0x5c0;
    }
    goto lab_0x43c;
  lab_0x520:;
    // 0x520
    int64_t v76; // 0x0
    int64_t v95 = v76;
    int64_t v96 = v95; // 0x526
    int64_t v74; // 0x441
    uint64_t v75; // 0x448
    if ((a3 & 1) == 0) {
        int64_t v97 = 8 * v95; // 0x52c
        int128_t v98 = __asm_movupd_2(*(int128_t *)(v75 - 8 + v97)); // 0x52c
        int128_t v99 = __asm_mulsd(__asm_subsd_3(__asm_unpckhpd(__asm_movapd(v98), v98), v98), v11); // 0x53f
        int64_t * v100 = (int64_t *)(v74 + a4 + v97); // 0x543
        *v100 = __asm_movsd_1(__asm_addsd(v99, *v100));
        v96 = v95 + 1;
    }
    // 0x551
    v68 = v8;
    if (v8 != -1 - v95) {
        int64_t v101 = v74 + a4; // 0x560
        int64_t v102 = v96; // 0x5ab
        int64_t v103 = 8 * v102; // 0x564
        int128_t v104 = __asm_movupd_2(*(int128_t *)(v75 - 8 + v103)); // 0x564
        int128_t v105 = __asm_mulsd(__asm_subsd_3(__asm_unpckhpd(__asm_movapd(v104), v104), v104), v11); // 0x577
        int64_t v106 = v103 + v101;
        int64_t * v107 = (int64_t *)v106; // 0x57b
        *v107 = __asm_movsd_1(__asm_addsd(v105, *v107));
        int128_t v108 = __asm_movupd_2(*(int128_t *)(v103 + v75)); // 0x587
        int128_t v109 = __asm_mulsd(__asm_subsd_3(__asm_unpckhpd(__asm_movapd(v108), v108), v108), v11); // 0x599
        int64_t * v110 = (int64_t *)(v106 + 8); // 0x59d
        *v110 = __asm_movsd_1(__asm_addsd(v109, *v110));
        v102 += 2;
        v68 = v101;
        while (v102 != v1) {
            // 0x560
            v103 = 8 * v102;
            v104 = __asm_movupd_2(*(int128_t *)(v75 - 8 + v103));
            v105 = __asm_mulsd(__asm_subsd_3(__asm_unpckhpd(__asm_movapd(v104), v104), v104), v11);
            v106 = v103 + v101;
            v107 = (int64_t *)v106;
            *v107 = __asm_movsd_1(__asm_addsd(v105, *v107));
            v108 = __asm_movupd_2(*(int128_t *)(v103 + v75));
            v109 = __asm_mulsd(__asm_subsd_3(__asm_unpckhpd(__asm_movapd(v108), v108), v108), v11);
            v110 = (int64_t *)(v106 + 8);
            *v110 = __asm_movsd_1(__asm_addsd(v109, *v110));
            v102 += 2;
            v68 = v101;
        }
    }
    goto lab_0x430;
  lab_0x250:;
    // 0x250
    int64_t v111; // 0x0
    int64_t v112 = v111 + 1; // 0x250
    int64_t v113; // 0x0
    int64_t v114 = v113; // 0x259
    int64_t v115 = v112; // 0x259
    int64_t v116; // 0x0
    int64_t v117 = v116 + 1; // 0x259
    int64_t v118 = v113; // 0x259
    if (v112 == v4) {
        // break -> 0x410
        goto lab_0x410;
    }
    goto lab_0x25f;
  lab_0x350:;
    // 0x350
    int64_t v120; // 0x0
    int64_t v123 = v120;
    int64_t v124 = v123; // 0x356
    int64_t v119; // 0x263
    if ((a3 & 1) != 0) {
        int64_t v125 = 8 * v123; // 0x366
        int64_t v126 = v125 + 0x2580 * v111;
        int128_t v127 = __asm_movsd(*(int64_t *)(v126 + a6)); // 0x366
        int128_t v128 = __asm_mulsd(__asm_subsd(v127, *(int64_t *)(0x2580 * v119 + a6 + v125)), v11); // 0x37c
        int64_t * v129 = (int64_t *)(v126 + a5); // 0x380
        *v129 = __asm_movsd_1(__asm_addsd(v128, *v129));
        v124 = v123 | 1;
    }
    int64_t v130 = v124;
    v113 = v130;
    if (v8 != -1 - v123) {
        int64_t v131 = 0x2580 * v111; // 0x3b0
        int64_t v132 = v131 + a5; // 0x3b7
        int64_t v133 = v131 + a6; // 0x3bb
        int64_t v134 = 0x2580 * v119 + a6;
        int64_t v135 = v130; // 0x3fe
        int64_t v136 = 8 * v135; // 0x3be
        int128_t v137 = __asm_movsd(*(int64_t *)(v136 + v133)); // 0x3be
        int128_t v138 = __asm_mulsd(__asm_subsd(v137, *(int64_t *)(v136 + v134)), v11); // 0x3d3
        int64_t * v139 = (int64_t *)(v136 + v132); // 0x3d7
        *v139 = __asm_movsd_1(__asm_addsd(v138, *v139));
        int64_t v140 = v136 + 8;
        int128_t v141 = __asm_movsd(*(int64_t *)(v140 + v133)); // 0x3e1
        int128_t v142 = __asm_mulsd(__asm_subsd(v141, *(int64_t *)(v140 + v134)), v11); // 0x3ee
        int64_t * v143 = (int64_t *)(v140 + v132); // 0x3f2
        *v143 = __asm_movsd_1(__asm_addsd(v142, *v143));
        v135 += 2;
        v113 = v135;
        while (v135 != v1) {
            // 0x3b0
            v136 = 8 * v135;
            v137 = __asm_movsd(*(int64_t *)(v136 + v133));
            v138 = __asm_mulsd(__asm_subsd(v137, *(int64_t *)(v136 + v134)), v11);
            v139 = (int64_t *)(v136 + v132);
            *v139 = __asm_movsd_1(__asm_addsd(v138, *v139));
            v140 = v136 + 8;
            v141 = __asm_movsd(*(int64_t *)(v140 + v133));
            v142 = __asm_mulsd(__asm_subsd(v141, *(int64_t *)(v140 + v134)), v11);
            v143 = (int64_t *)(v140 + v132);
            *v143 = __asm_movsd_1(__asm_addsd(v142, *v143));
            v135 += 2;
            v113 = v135;
        }
    }
    goto lab_0x250;
  lab_0x2d0:;
    int64_t v144 = 0x2580 * v111; // 0x2d0
    int64_t v145 = v144 + a5; // 0x2d7
    int64_t v146 = v144 + a6;
    int64_t v147 = 0x2580 * v119 + a6;
    int64_t v148 = 0; // 0x0
    int64_t v149 = 8 * v148; // 0x2db
    int128_t * v150 = (int128_t *)(v149 + v145); // 0x2db
    int128_t v151 = __asm_movupd_2(*v150); // 0x2db
    int64_t v152 = v149 | 16;
    int128_t * v153 = (int128_t *)(v152 + v145); // 0x2e0
    int128_t v154 = __asm_movupd_2(*v153); // 0x2e0
    int128_t v155 = __asm_movupd_2(*(int128_t *)(v149 + v146)); // 0x2e9
    int128_t v156 = __asm_movupd_2(*(int128_t *)(v152 + v146)); // 0x2ee
    int128_t v157 = __asm_subpd(v155, __asm_movupd_2(*(int128_t *)(v149 + v147))); // 0x304
    int128_t v158 = __asm_subpd(v156, __asm_movupd_2(*(int128_t *)(v152 + v147))); // 0x310
    int128_t v159 = __asm_addpd(__asm_mulpd(v157, v12), v151); // 0x319
    int128_t v160 = __asm_addpd(__asm_mulpd(v158, v12), v154); // 0x321
    __asm_movupd(*v150, v159);
    __asm_movupd(*v153, v160);
    int64_t v161 = v148 + 4; // 0x330
    v148 = v161;
    while (v161 != v6) {
        // 0x2d0
        v149 = 8 * v148;
        v150 = (int128_t *)(v149 + v145);
        v151 = __asm_movupd_2(*v150);
        v152 = v149 | 16;
        v153 = (int128_t *)(v152 + v145);
        v154 = __asm_movupd_2(*v153);
        v155 = __asm_movupd_2(*(int128_t *)(v149 + v146));
        v156 = __asm_movupd_2(*(int128_t *)(v152 + v146));
        v157 = __asm_subpd(v155, __asm_movupd_2(*(int128_t *)(v149 + v147)));
        v158 = __asm_subpd(v156, __asm_movupd_2(*(int128_t *)(v152 + v147)));
        v159 = __asm_addpd(__asm_mulpd(v157, v12), v151);
        v160 = __asm_addpd(__asm_mulpd(v158, v12), v154);
        __asm_movupd(*v150, v159);
        __asm_movupd(*v153, v160);
        v161 = v148 + 4;
        v148 = v161;
    }
    // 0x339
    v113 = v161;
    v120 = v6;
    if (v6 == v1) {
        goto lab_0x250;
    } else {
        goto lab_0x350;
    }
  lab_0x230:
    // 0x230
    v114 = v25;
    v115 = 1;
    v117 = 0;
    v118 = v25;
    if (v18 >= 2) {
        while (true) {
          lab_0x25f:
            // 0x25f
            v116 = v117;
            v111 = v115;
            v113 = v114;
            if (v17 < 1) {
                goto lab_0x250;
            } else {
                // 0x263
                v119 = v111 - 1;
                v120 = 0;
                if (v17 >= 4) {
                    int64_t v121 = 0x2580 * v116; // 0x280
                    int64_t v122 = v121 + 0x2580 + v15; // 0x28c
                    if (v19 + v121 >= v122 + a6) {
                        goto lab_0x2d0;
                    } else {
                        // 0x2a4
                        v120 = 0;
                        if (v121 + a6 < v122 + a5) {
                            goto lab_0x350;
                        } else {
                            goto lab_0x2d0;
                        }
                    }
                } else {
                    goto lab_0x350;
                }
            }
        }
    }
  lab_0x410:
    // 0x410
    v32 = v118;
    v72 = v118;
    v73 = 0;
    if (v18 >= 1) {
        while (true) {
          lab_0x43c:
            // 0x43c
            v70 = v73;
            v68 = v72;
            if (v17 < 2) {
                goto lab_0x430;
            } else {
                // 0x441
                v74 = 0x2580 * v70;
                v75 = v74 + a6;
                v76 = 1;
                if (v17 < 5) {
                    goto lab_0x520;
                } else {
                    int64_t v77 = v74 + v15; // 0x45e
                    int64_t v78 = v74 + a4; // 0x466
                    int64_t v79 = 0; // 0x471
                    if (v78 + 8 < v77 + a6 == v75 < v77 + a4) {
                        goto lab_0x520;
                    } else {
                        int64_t v80 = 8 * v79; // 0x4a4
                        int64_t v81 = v80 | 8; // 0x4ac
                        int128_t * v82 = (int128_t *)(v81 + v78); // 0x4b0
                        int128_t v83 = __asm_movupd_2(*v82); // 0x4b0
                        int64_t v84 = v80 | 24; // 0x4b5
                        int128_t * v85 = (int128_t *)(v84 + v78); // 0x4b5
                        int128_t v86 = __asm_movupd_2(*v85); // 0x4b5
                        int128_t v87 = __asm_movupd_2(*(int128_t *)(v81 + v75)); // 0x4bb
                        int128_t v88 = __asm_movupd_2(*(int128_t *)(v84 + v75)); // 0x4c1
                        int64_t v89 = v80 + v75;
                        int128_t v90 = __asm_subpd(v87, __asm_movupd_2(*(int128_t *)v89)); // 0x4ce
                        int128_t v91 = __asm_subpd(v88, __asm_movupd_2(*(int128_t *)(v89 + 16))); // 0x4da
                        int128_t v92 = __asm_addpd(__asm_mulpd(v90, v12), v83); // 0x4e3
                        int128_t v93 = __asm_addpd(__asm_mulpd(v91, v12), v86); // 0x4eb
                        __asm_movupd(*v82, v92);
                        __asm_movupd(*v85, v93);
                        int64_t v94 = v79 + 4; // 0x4fa
                        v79 = v94;
                        while (v94 != v9) {
                            // 0x4a0
                            v80 = 8 * v79;
                            v81 = v80 | 8;
                            v82 = (int128_t *)(v81 + v78);
                            v83 = __asm_movupd_2(*v82);
                            v84 = v80 | 24;
                            v85 = (int128_t *)(v84 + v78);
                            v86 = __asm_movupd_2(*v85);
                            v87 = __asm_movupd_2(*(int128_t *)(v81 + v75));
                            v88 = __asm_movupd_2(*(int128_t *)(v84 + v75));
                            v89 = v80 + v75;
                            v90 = __asm_subpd(v87, __asm_movupd_2(*(int128_t *)v89));
                            v91 = __asm_subpd(v88, __asm_movupd_2(*(int128_t *)(v89 + 16)));
                            v92 = __asm_addpd(__asm_mulpd(v90, v12), v83);
                            v93 = __asm_addpd(__asm_mulpd(v91, v12), v86);
                            __asm_movupd(*v82, v92);
                            __asm_movupd(*v85, v93);
                            v94 = v79 + 4;
                            v79 = v94;
                        }
                        // 0x503
                        v68 = v20;
                        v76 = v20;
                        if (v5 == v9) {
                            goto lab_0x430;
                        } else {
                            goto lab_0x520;
                        }
                    }
                }
            }
        }
      lab_0x5c0:
        // 0x5c0
        v32 = v69;
        v34 = 0;
        if (v18 >= 2) {
            while (true) {
              lab_0x5db:;
                int64_t v35 = v34;
                v33 = v35 + 1;
                v31 = v35;
                if (v17 < 2) {
                    goto lab_0x5d0;
                } else {
                    int64_t v36 = 0x2580 * v35; // 0x5e6
                    v37 = v36 + a6;
                    v38 = v36 + a4;
                    v39 = v36 + a5;
                    v40 = 0;
                    if (v17 >= 5) {
                        int64_t v41 = v36 + 8 * v3;
                        uint64_t v42 = v41 + a6; // 0x615
                        v40 = 0;
                        if (v38 < v42 == v37 < a4 + 8 + v41) {
                            goto lab_0x720;
                        } else {
                            // 0x649
                            v40 = 0;
                            if (v39 < v42 == v37 < v19 + v41) {
                                goto lab_0x720;
                            } else {
                                int64_t v43 = 0x2580 * v33 + a5;
                                int64_t v44 = 0; // 0x702
                                int64_t v45 = 8 * v44; // 0x670
                                int128_t * v46 = (int128_t *)(v45 + v37); // 0x678
                                int128_t v47 = __asm_movupd_2(*v46); // 0x678
                                int64_t v48 = v45 | 16;
                                int128_t * v49 = (int128_t *)(v48 + v37); // 0x67e
                                int128_t v50 = __asm_movupd_2(*v49); // 0x67e
                                int128_t v51 = __asm_movupd_2(*(int128_t *)((v45 | 8) + v38)); // 0x689
                                int128_t v52 = __asm_movupd_2(*(int128_t *)((v45 | 24) + v38)); // 0x68f
                                int128_t v53 = __asm_subpd(v51, __asm_movupd_2(*(int128_t *)(v45 + v38))); // 0x69c
                                int128_t v54 = __asm_subpd(v52, __asm_movupd_2(*(int128_t *)(v48 + v38))); // 0x6a8
                                int128_t v55 = __asm_addpd(__asm_movupd_2(*(int128_t *)(v45 + v43)), v53); // 0x6bd
                                int128_t v56 = __asm_addpd(__asm_movupd_2(*(int128_t *)(v48 + v43)), v54); // 0x6c9
                                int128_t v57 = __asm_subpd(v55, __asm_movupd_2(*(int128_t *)(v45 + v39))); // 0x6d3
                                int128_t v58 = __asm_subpd(v56, __asm_movupd_2(*(int128_t *)(v48 + v39))); // 0x6df
                                int128_t v59 = __asm_addpd(__asm_mulpd(v57, v14), v47); // 0x6e8
                                int128_t v60 = __asm_addpd(__asm_mulpd(v58, v14), v50); // 0x6f1
                                __asm_movupd(*v46, v59);
                                __asm_movupd(*v49, v60);
                                v44 += 4;
                                v61 = v10;
                                while (v44 != v10) {
                                    // 0x670
                                    v45 = 8 * v44;
                                    v46 = (int128_t *)(v45 + v37);
                                    v47 = __asm_movupd_2(*v46);
                                    v48 = v45 | 16;
                                    v49 = (int128_t *)(v48 + v37);
                                    v50 = __asm_movupd_2(*v49);
                                    v51 = __asm_movupd_2(*(int128_t *)((v45 | 8) + v38));
                                    v52 = __asm_movupd_2(*(int128_t *)((v45 | 24) + v38));
                                    v53 = __asm_subpd(v51, __asm_movupd_2(*(int128_t *)(v45 + v38)));
                                    v54 = __asm_subpd(v52, __asm_movupd_2(*(int128_t *)(v48 + v38)));
                                    v55 = __asm_addpd(__asm_movupd_2(*(int128_t *)(v45 + v43)), v53);
                                    v56 = __asm_addpd(__asm_movupd_2(*(int128_t *)(v48 + v43)), v54);
                                    v57 = __asm_subpd(v55, __asm_movupd_2(*(int128_t *)(v45 + v39)));
                                    v58 = __asm_subpd(v56, __asm_movupd_2(*(int128_t *)(v48 + v39)));
                                    v59 = __asm_addpd(__asm_mulpd(v57, v14), v47);
                                    v60 = __asm_addpd(__asm_mulpd(v58, v14), v50);
                                    __asm_movupd(*v46, v59);
                                    __asm_movupd(*v49, v60);
                                    v44 += 4;
                                    v61 = v10;
                                }
                                goto lab_0x75c;
                            }
                        }
                    } else {
                        goto lab_0x720;
                    }
                }
            }
        }
    }
  lab_0x110:
    // 0x110
    v21 = v32;
    v22 = v23 + 1;
    result = v21;
    if (v22 == (a1 & 0xffffffff)) {
        // break -> 0x769
        goto lab_0x769;
    }
    goto lab_0x132;
  lab_0x161:;
    int64_t v162 = v24;
    int64_t v163 = v162; // 0x16d
    if (v7 != 0) {
        int64_t v164 = v162; // 0x18c
        int64_t v165 = 0; // 0x18f
        int64_t v166 = *(int64_t *)(8 * v23 + a7); // 0x180
        *(int64_t *)(8 * v164 + a5) = __asm_movsd_1(__asm_movsd(v166));
        v164++;
        v165++;
        v163 = v164;
        while (v165 != v7) {
            // 0x180
            v166 = *(int64_t *)(8 * v23 + a7);
            *(int64_t *)(8 * v164 + a5) = __asm_movsd_1(__asm_movsd(v166));
            v164++;
            v165++;
            v163 = v164;
        }
    }
    int64_t v167 = v163;
    v25 = v167;
    if (v1 + -1 - v162 >= 3) {
        int64_t * v168 = (int64_t *)(8 * v23 + a7); // 0x1b0
        int64_t v169 = v167; // 0x1e3
        int64_t v170 = __asm_movsd_1(__asm_movsd(*v168)); // 0x1b6
        int64_t v171 = 8 * v169 + a5;
        *(int64_t *)v171 = v170;
        *(int64_t *)(v171 + 8) = __asm_movsd_1(__asm_movsd(*v168));
        *(int64_t *)(v171 + 16) = __asm_movsd_1(__asm_movsd(*v168));
        *(int64_t *)(v171 + 24) = __asm_movsd_1(__asm_movsd(*v168));
        v169 += 4;
        v25 = v169;
        while (v169 != v1) {
            // 0x1b0
            v170 = __asm_movsd_1(__asm_movsd(*v168));
            v171 = 8 * v169 + a5;
            *(int64_t *)v171 = v170;
            *(int64_t *)(v171 + 8) = __asm_movsd_1(__asm_movsd(*v168));
            *(int64_t *)(v171 + 16) = __asm_movsd_1(__asm_movsd(*v168));
            *(int64_t *)(v171 + 24) = __asm_movsd_1(__asm_movsd(*v168));
            v169 += 4;
            v25 = v169;
        }
    }
    goto lab_0x230;
}
