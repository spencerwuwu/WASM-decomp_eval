
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "heat-3d.h"
int64_t kernel_heat_3d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = a2 + 0xffffffff & 0xffffffff; // 0x12
    int64_t v1 = 8 * result; // 0x15
    int64_t v2 = v1 + 0x1c5c0; // 0x15
    int64_t v3 = v1 + 0x387c0; // 0x22
    uint64_t v4 = result - 1; // 0x2f
    int64_t v5 = v4 & -2; // 0x36
    int64_t v6 = v4 | 1; // 0x44
    int128_t v7 = __asm_movsd(-0x4000000000000000); // 0x52
    int128_t v8 = __asm_movsd(0x3fc0000000000000); // 0x5a
    int128_t v9 = __asm_movapd(g1); // 0x62
    int128_t v10 = __asm_movapd(g2); // 0x6a
    int32_t v11 = 1; // 0x72
    int64_t v12; // 0x0
    int64_t v13; // 0x0
    int64_t v14; // 0x0
    int64_t v15; // 0x0
    int64_t v16; // 0x0
    int64_t v17; // 0x0
    int32_t v18; // 0x0
    int64_t v19; // 0x0
    int64_t v20; // 0x0
    int64_t v21; // 0x0
    int64_t v22; // 0x0
    int64_t v23; // 0x0
    int64_t v24; // 0x130
    int64_t v25; // 0x134
    while (true) {
      lab_0x92:
        // 0x92
        v18 = v11;
        int64_t v26 = 0; // 0x9b
        int64_t v27 = 1; // 0x9b
        if ((int32_t)a2 >= 3) {
            while (true) {
                int64_t v28 = 0x1c200 * v26; // 0xc9
                int64_t v29 = v27 + 1; // 0x102
                v20 = 0x1c200 * v29;
                int64_t v30 = 0x1c200 * v27;
                v21 = v30 + a3;
                v22 = v30 - 0x1c200;
                v23 = v30 + a4;
                v12 = 0;
                v14 = 1;
                while (true) {
                  lab_0x130:
                    // 0x130
                    v15 = v14;
                    v13 = v12;
                    v24 = v15 + 1;
                    v25 = v15 - 1;
                    v17 = 1;
                    if (v4 < 2) {
                        goto lab_0x2a0;
                    } else {
                        int64_t v31 = 960 * v13 + v28;
                        int64_t v32 = v31 + a3;
                        int64_t v33 = v31 + a4;
                        if (v33 + 0x1c5c8 >= v32 + v3) {
                            goto lab_0x1a0;
                        } else {
                            // 0x172
                            v17 = 1;
                            if (v32 + 968 < v33 + v2) {
                                goto lab_0x2a0;
                            } else {
                                goto lab_0x1a0;
                            }
                        }
                    }
                }
              lab_0xb0:
                // 0xb0
                v26++;
                v27 = v29;
                v19 = 0;
                v16 = 1;
                if (v29 == result) {
                    goto lab_0x394;
                }
            }
        }
        goto lab_0x80;
    }
  lab_0x629:
    // 0x629
    return result;
  lab_0x394:;
    int64_t v34 = 0x1c200 * v19; // 0x399
    int64_t v35 = v16 + 1; // 0x3d2
    int64_t v36 = 0x1c200 * v35;
    int64_t v37 = 0x1c200 * v16;
    int64_t v38 = v37 + a4;
    int64_t v39 = v37 - 0x1c200;
    int64_t v40 = v37 + a3;
    int64_t v41 = 1; // 0x3e3
    int64_t v42 = 0; // 0x3e3
    goto lab_0x400;
  lab_0x2a0:;
    int64_t v90 = 8 * v17; // 0x2c3
    int64_t v91 = v90 + 960 * v15;
    int64_t v92 = v91 + v21;
    int128_t v93 = __asm_movsd(*(int64_t *)v92); // 0x2c3
    int128_t v94 = __asm_mulsd(__asm_movapd(v93), v7); // 0x2cd
    int64_t v95 = v91 + a3;
    int128_t v96 = __asm_addsd(__asm_movsd(*(int64_t *)(v95 + v20)), v94); // 0x2d7
    int128_t v97 = __asm_addsd_3(v96, *(int64_t *)(v95 + v22)); // 0x2e8
    int64_t v98 = v90 + v21;
    int128_t v99 = __asm_addsd(__asm_movsd(*(int64_t *)(v98 + 960 * v24)), v94); // 0x2fe
    int128_t v100 = __asm_mulsd(__asm_addsd_3(v99, *(int64_t *)(v98 + 960 * v25)), v8); // 0x312
    int128_t v101 = __asm_mulsd(v97, v8); // 0x316
    int128_t v102 = __asm_addsd_3(v94, *(int64_t *)(v92 + 8)); // 0x31a
    int128_t v103 = __asm_addsd(v101, v100); // 0x321
    int128_t v104 = __asm_addsd_3(v102, *(int64_t *)(v92 - 8)); // 0x325
    int64_t v105 = __asm_movsd_1(__asm_addsd(__asm_addsd(__asm_mulsd(v104, v8), v103), v93)); // 0x33e
    *(int64_t *)(v23 + v91) = v105;
    int64_t v106 = v17 + 1; // 0x344
    int64_t v107 = v106; // 0x34e
    while (v106 != result) {
        // 0x2a0
        v90 = 8 * v107;
        v91 = v90 + 960 * v15;
        v92 = v91 + v21;
        v93 = __asm_movsd(*(int64_t *)v92);
        v94 = __asm_mulsd(__asm_movapd(v93), v7);
        v95 = v91 + a3;
        v96 = __asm_addsd(__asm_movsd(*(int64_t *)(v95 + v20)), v94);
        v97 = __asm_addsd_3(v96, *(int64_t *)(v95 + v22));
        v98 = v90 + v21;
        v99 = __asm_addsd(__asm_movsd(*(int64_t *)(v98 + 960 * v24)), v94);
        v100 = __asm_mulsd(__asm_addsd_3(v99, *(int64_t *)(v98 + 960 * v25)), v8);
        v101 = __asm_mulsd(v97, v8);
        v102 = __asm_addsd_3(v94, *(int64_t *)(v92 + 8));
        v103 = __asm_addsd(v101, v100);
        v104 = __asm_addsd_3(v102, *(int64_t *)(v92 - 8));
        v105 = __asm_movsd_1(__asm_addsd(__asm_addsd(__asm_mulsd(v104, v8), v103), v93));
        *(int64_t *)(v23 + v91) = v105;
        v106 = v107 + 1;
        v107 = v106;
    }
    goto lab_0x120;
  lab_0x120:
    // 0x120
    v12 = v13 + 1;
    v14 = v24;
    if (v24 == result) {
        // break -> 0xb0
        goto lab_0xb0;
    }
    goto lab_0x130;
  lab_0x1a0:;
    int64_t v108 = 960 * v15; // 0x1aa
    int64_t v109 = v108 + v21;
    int64_t v110 = 0; // 0x0
    int64_t v111 = 8 * v110; // 0x1b4
    int64_t v112 = v111 | 8; // 0x1bc
    int64_t v113 = v112 + v108;
    int64_t v114 = v113 + a3;
    int128_t v115 = __asm_movupd_2(*(int128_t *)(v114 + v20)); // 0x1c0
    int128_t v116 = __asm_movupd_2(*(int128_t *)(v114 + v22)); // 0x1df
    int64_t v117 = v112 + v21;
    int128_t v118 = __asm_movupd_2(*(int128_t *)(v117 + 960 * v24)); // 0x1f0
    int128_t v119 = __asm_movupd_2(*(int128_t *)(v117 + 960 * v25)); // 0x201
    int128_t v120 = __asm_movupd_2(*(int128_t *)(v112 + v109)); // 0x20c
    int64_t v121 = v111 + v109;
    int128_t v122 = __asm_movupd_2(*(int128_t *)v121); // 0x213
    int128_t v123 = __asm_movupd_2(*(int128_t *)(v121 + 16)); // 0x219
    int128_t v124 = __asm_mulpd(__asm_movapd(v120), v9); // 0x22b
    int128_t v125 = __asm_addpd(v116, __asm_addpd(v115, v124)); // 0x235
    int128_t v126 = __asm_addpd(__asm_mulpd(v125, v10), __asm_mulpd(__asm_addpd(v119, __asm_addpd(v118, v124)), v10)); // 0x24a
    int128_t v127 = __asm_addpd(__asm_addpd(__asm_mulpd(__asm_addpd(__asm_addpd(v123, v124), v122), v10), v126), v120); // 0x262
    __asm_movupd(*(int128_t *)(v23 + v113), v127);
    int64_t v128 = v110 + 2; // 0x26e
    v110 = v128;
    while (v128 != v5) {
        // 0x1a0
        v111 = 8 * v110;
        v112 = v111 | 8;
        v113 = v112 + v108;
        v114 = v113 + a3;
        v115 = __asm_movupd_2(*(int128_t *)(v114 + v20));
        v116 = __asm_movupd_2(*(int128_t *)(v114 + v22));
        v117 = v112 + v21;
        v118 = __asm_movupd_2(*(int128_t *)(v117 + 960 * v24));
        v119 = __asm_movupd_2(*(int128_t *)(v117 + 960 * v25));
        v120 = __asm_movupd_2(*(int128_t *)(v112 + v109));
        v121 = v111 + v109;
        v122 = __asm_movupd_2(*(int128_t *)v121);
        v123 = __asm_movupd_2(*(int128_t *)(v121 + 16));
        v124 = __asm_mulpd(__asm_movapd(v120), v9);
        v125 = __asm_addpd(v116, __asm_addpd(v115, v124));
        v126 = __asm_addpd(__asm_mulpd(v125, v10), __asm_mulpd(__asm_addpd(v119, __asm_addpd(v118, v124)), v10));
        v127 = __asm_addpd(__asm_addpd(__asm_mulpd(__asm_addpd(__asm_addpd(v123, v124), v122), v10), v126), v120);
        __asm_movupd(*(int128_t *)(v23 + v113), v127);
        v128 = v110 + 2;
        v110 = v128;
    }
    // 0x27d
    v17 = v6;
    if (v4 == v5) {
        goto lab_0x120;
    } else {
        goto lab_0x2a0;
    }
  lab_0x80:
    // 0x80
    v11 = v18 + 1;
    if (v18 == 500) {
        // break -> 0x629
        goto lab_0x629;
    }
    goto lab_0x92;
  lab_0x400:;
    int64_t v43 = v42;
    int64_t v44 = v41;
    int64_t v45 = v44 + 1; // 0x400
    int64_t v46 = v44 - 1; // 0x404
    int64_t v47 = 1; // 0x418
    if (v4 < 2) {
        goto lab_0x570;
    } else {
        int64_t v48 = 960 * v43 + v34;
        int64_t v49 = v48 + a4;
        int64_t v50 = v48 + a3;
        if (v50 + 0x1c5c8 >= v49 + v3) {
            goto lab_0x470;
        } else {
            // 0x442
            v47 = 1;
            if (v49 + 968 < v50 + v2) {
                goto lab_0x570;
            } else {
                goto lab_0x470;
            }
        }
    }
  lab_0x570:;
    int64_t v51 = v47; // 0x0
    goto lab_0x570_2;
  lab_0x570_2:;
    int64_t v52 = 8 * v51; // 0x593
    int64_t v53 = v52 + 960 * v44;
    int64_t v54 = v53 + v38;
    int128_t v55 = __asm_movsd(*(int64_t *)v54); // 0x593
    int128_t v56 = __asm_mulsd(__asm_movapd(v55), v7); // 0x59d
    int64_t v57 = v53 + a4;
    int128_t v58 = __asm_addsd(__asm_movsd(*(int64_t *)(v57 + v36)), v56); // 0x5a7
    int128_t v59 = __asm_addsd_3(v58, *(int64_t *)(v57 + v39)); // 0x5b8
    int64_t v60 = v52 + v38;
    int128_t v61 = __asm_addsd(__asm_movsd(*(int64_t *)(v60 + 960 * v45)), v56); // 0x5ce
    int128_t v62 = __asm_mulsd(__asm_addsd_3(v61, *(int64_t *)(v60 + 960 * v46)), v8); // 0x5e2
    int128_t v63 = __asm_mulsd(v59, v8); // 0x5e6
    int128_t v64 = __asm_addsd_3(v56, *(int64_t *)(v54 + 8)); // 0x5ea
    int128_t v65 = __asm_addsd(v63, v62); // 0x5f1
    int128_t v66 = __asm_addsd_3(v64, *(int64_t *)(v54 - 8)); // 0x5f5
    int64_t v67 = __asm_movsd_1(__asm_addsd(__asm_addsd(__asm_mulsd(v66, v8), v65), v55)); // 0x60e
    *(int64_t *)(v40 + v53) = v67;
    int64_t v68 = v51 + 1; // 0x614
    v51 = v68;
    if (v68 != result) {
        goto lab_0x570_2;
    } else {
        goto lab_0x3f0;
    }
  lab_0x470:;
    int64_t v69 = 960 * v44; // 0x47a
    int64_t v70 = v69 + v38;
    int64_t v71 = 0; // 0x0
    goto lab_0x470_2;
  lab_0x3f0:
    // 0x3f0
    v41 = v45;
    v42 = v43 + 1;
    if (v45 == result) {
        // 0x380
        v19++;
        v16 = v35;
        if (v35 == result) {
            goto lab_0x80;
        } else {
            goto lab_0x394;
        }
    } else {
        goto lab_0x400;
    }
  lab_0x470_2:;
    int64_t v72 = 8 * v71; // 0x484
    int64_t v73 = v72 | 8; // 0x48c
    int64_t v74 = v73 + v69;
    int64_t v75 = v74 + a4;
    int128_t v76 = __asm_movupd_2(*(int128_t *)(v75 + v36)); // 0x490
    int128_t v77 = __asm_movupd_2(*(int128_t *)(v75 + v39)); // 0x4af
    int64_t v78 = v73 + v38;
    int128_t v79 = __asm_movupd_2(*(int128_t *)(v78 + 960 * v45)); // 0x4c0
    int128_t v80 = __asm_movupd_2(*(int128_t *)(v78 + 960 * v46)); // 0x4d1
    int128_t v81 = __asm_movupd_2(*(int128_t *)(v73 + v70)); // 0x4dc
    int64_t v82 = v72 + v70;
    int128_t v83 = __asm_movupd_2(*(int128_t *)v82); // 0x4e3
    int128_t v84 = __asm_movupd_2(*(int128_t *)(v82 + 16)); // 0x4e9
    int128_t v85 = __asm_mulpd(__asm_movapd(v81), v9); // 0x4fb
    int128_t v86 = __asm_addpd(v77, __asm_addpd(v76, v85)); // 0x505
    int128_t v87 = __asm_addpd(__asm_mulpd(v86, v10), __asm_mulpd(__asm_addpd(v80, __asm_addpd(v79, v85)), v10)); // 0x51a
    int128_t v88 = __asm_addpd(__asm_addpd(__asm_mulpd(__asm_addpd(__asm_addpd(v84, v85), v83), v10), v87), v81); // 0x532
    __asm_movupd(*(int128_t *)(v40 + v74), v88);
    int64_t v89 = v71 + 2; // 0x53e
    v71 = v89;
    if (v89 != v5) {
        goto lab_0x470_2;
    } else {
        // 0x54d
        v47 = v6;
        if (v4 == v5) {
            goto lab_0x3f0;
        } else {
            goto lab_0x570;
        }
    }
}
