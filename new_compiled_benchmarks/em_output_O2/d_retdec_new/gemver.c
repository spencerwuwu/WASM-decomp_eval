
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "gemver.h"
int64_t kernel_gemver(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, uint64_t a6, int64_t a7, int64_t result2, int64_t a9, uint64_t a10) {
    // 0x0
    if ((int32_t)a1 < 1) {
        // 0x557
        int64_t result; // 0x0
        return result;
    }
    int64_t v1 = a1 & 0xffffffff; // 0x1c
    int64_t v2 = 8 * v1; // 0x1e
    int64_t v3 = v1 - 1; // 0x38
    int64_t v4 = a1 & 0xfffffffc; // 0x3f
    int64_t v5 = 0x100000000 * a1 >> 32; // 0x4e
    int64_t v6 = v5 & 0xffffffff;
    int64_t v7 = a1; // 0x57
    int64_t v8 = 0; // 0x57
    int64_t v9; // 0x0
    int64_t v10; // 0x0
    int64_t v11; // 0x0
    int64_t v12; // 0x0
    while (true) {
      lab_0x6c:
        // 0x6c
        v10 = v8;
        v12 = v7;
        v9 = 0;
        if ((int32_t)v7 >= 10) {
            int64_t v13 = 8 * v10; // 0x130
            uint64_t v14 = v13 + a3; // 0x141
            uint64_t v15 = 0x3e80 * v10 + a2;
            uint64_t v16 = v15 + v2; // 0x159
            v12 = v6;
            v9 = 0;
            if (v14 < v16 == v15 < v14 + 8) {
                goto lab_0x78;
            } else {
                // 0x1b3
                v12 = v6;
                v9 = 0;
                if (v15 < v2 + a4 == v16 > a4) {
                    goto lab_0x78;
                } else {
                    uint64_t v17 = v13 + a5; // 0x130
                    v12 = v6;
                    v9 = 0;
                    if (v17 < v16 == v15 < v17 + 8) {
                        goto lab_0x78;
                    } else {
                        // 0x1c9
                        v12 = v6;
                        v9 = 0;
                        if (v15 < v2 + a6 == v16 > a6) {
                            goto lab_0x78;
                        } else {
                            int128_t v18 = __asm_movsd(*(int64_t *)v14); // 0x1e3
                            int128_t v19 = __asm_unpcklpd(v18, v18); // 0x1e9
                            int128_t v20 = __asm_movsd(*(int64_t *)v17); // 0x1ed
                            int128_t v21 = __asm_unpcklpd(v20, v20); // 0x1f3
                            int64_t v22 = 0; // 0x1fa
                            int64_t v23 = 8 * v22; // 0x200
                            int128_t * v24 = (int128_t *)(v23 + v15); // 0x200
                            int128_t v25 = __asm_movupd_2(*v24); // 0x200
                            int64_t v26 = v23 | 16;
                            int128_t * v27 = (int128_t *)(v26 + v15); // 0x207
                            int128_t v28 = __asm_movupd_2(*v27); // 0x207
                            int128_t v29 = __asm_movupd_2(*(int128_t *)(v23 + a4)); // 0x20e
                            int128_t v30 = __asm_movupd_2(*(int128_t *)(v26 + a4)); // 0x214
                            int128_t v31 = __asm_addpd(__asm_mulpd(v29, v19), v25); // 0x21f
                            int128_t v32 = __asm_addpd(__asm_mulpd(v30, v19), v28); // 0x227
                            int128_t v33 = __asm_movupd_2(*(int128_t *)(v23 + a6)); // 0x22b
                            int128_t v34 = __asm_movupd_2(*(int128_t *)(v26 + a6)); // 0x231
                            int128_t v35 = __asm_addpd(__asm_mulpd(v33, v21), v31); // 0x23c
                            int128_t v36 = __asm_addpd(__asm_mulpd(v34, v21), v32); // 0x244
                            __asm_movupd(*v24, v35);
                            __asm_movupd(*v27, v36);
                            v22 += 4;
                            while (v22 != v4) {
                                // 0x200
                                v23 = 8 * v22;
                                v24 = (int128_t *)(v23 + v15);
                                v25 = __asm_movupd_2(*v24);
                                v26 = v23 | 16;
                                v27 = (int128_t *)(v26 + v15);
                                v28 = __asm_movupd_2(*v27);
                                v29 = __asm_movupd_2(*(int128_t *)(v23 + a4));
                                v30 = __asm_movupd_2(*(int128_t *)(v26 + a4));
                                v31 = __asm_addpd(__asm_mulpd(v29, v19), v25);
                                v32 = __asm_addpd(__asm_mulpd(v30, v19), v28);
                                v33 = __asm_movupd_2(*(int128_t *)(v23 + a6));
                                v34 = __asm_movupd_2(*(int128_t *)(v26 + a6));
                                v35 = __asm_addpd(__asm_mulpd(v33, v21), v31);
                                v36 = __asm_addpd(__asm_mulpd(v34, v21), v32);
                                __asm_movupd(*v24, v35);
                                __asm_movupd(*v27, v36);
                                v22 += 4;
                            }
                            // 0x25f
                            v11 = v6;
                            v12 = v6;
                            v9 = v4;
                            if (v4 == v1) {
                                goto lab_0x60;
                            } else {
                                goto lab_0x78;
                            }
                        }
                    }
                }
            }
        } else {
            goto lab_0x78;
        }
    }
  lab_0x281:
    // 0x281
    if ((int32_t)v7 < 1) {
        // 0x557
        return result2;
    }
    int64_t v37 = a1 & 0xfffffffe; // 0x290
    int64_t v38 = 0; // 0x295
    int64_t v39 = 8 * v38; // 0x2ac
    int64_t * v40 = (int64_t *)(v39 + result2); // 0x2ac
    int128_t v41 = __asm_movsd(*v40); // 0x2ac
    int128_t v42 = v41; // 0x2c0
    int64_t v43 = 0; // 0x2c0
    int64_t v44; // 0x0
    int128_t v45; // 0x2df
    int128_t v46; // 0x2e9
    int64_t v47; // 0x2f5
    int128_t v48; // 0x309
    int128_t v49; // 0x313
    int64_t v50; // 0x31c
    int128_t v51; // 0x0
    if (v3 != 0) {
        // 0x2d0
        v44 = v39 + a2;
        v50 = 0;
        v45 = __asm_mulsd(__asm_movsd(*(int64_t *)(0x3e80 * v50 + v44)), v51);
        v46 = __asm_addsd_4(__asm_mulsd_3(v45, *(int64_t *)(8 * v50 + a9)), v41);
        *v40 = __asm_movsd_1(v46);
        v47 = v50 | 1;
        v48 = __asm_mulsd(__asm_movsd(*(int64_t *)(0x3e80 * v47 + v44)), v51);
        v49 = __asm_addsd_4(__asm_mulsd_3(v48, *(int64_t *)(8 * v47 + a9)), v46);
        *v40 = __asm_movsd_1(v49);
        v50 += 2;
        v42 = v49;
        v43 = v50;
        while (v50 != v37) {
            // 0x2d0
            v45 = __asm_mulsd(__asm_movsd(*(int64_t *)(0x3e80 * v50 + v44)), v51);
            v46 = __asm_addsd_4(__asm_mulsd_3(v45, *(int64_t *)(8 * v50 + a9)), v49);
            *v40 = __asm_movsd_1(v46);
            v47 = v50 | 1;
            v48 = __asm_mulsd(__asm_movsd(*(int64_t *)(0x3e80 * v47 + v44)), v51);
            v49 = __asm_addsd_4(__asm_mulsd_3(v48, *(int64_t *)(8 * v47 + a9)), v46);
            *v40 = __asm_movsd_1(v49);
            v50 += 2;
            v42 = v49;
            v43 = v50;
        }
    }
    int128_t v52; // 0x341
    int128_t v53; // 0x345
    if ((a1 & 1) != 0) {
        // 0x332
        v52 = __asm_mulsd(__asm_movsd(*(int64_t *)(v39 + a2 + 0x3e80 * v43)), v51);
        v53 = __asm_mulsd_3(v52, *(int64_t *)(8 * v43 + a9));
        *v40 = __asm_movsd_1(__asm_addsd_4(v53, v42));
    }
    int64_t v54 = v38 + 1; // 0x2a0
    v38 = v54;
    while (v54 != v1) {
        // 0x2ac
        v39 = 8 * v38;
        v40 = (int64_t *)(v39 + result2);
        v41 = __asm_movsd(*v40);
        v42 = v41;
        v43 = 0;
        if (v3 != 0) {
            // 0x2d0
            v44 = v39 + a2;
            v50 = 0;
            v45 = __asm_mulsd(__asm_movsd(*(int64_t *)(0x3e80 * v50 + v44)), v51);
            v46 = __asm_addsd_4(__asm_mulsd_3(v45, *(int64_t *)(8 * v50 + a9)), v41);
            *v40 = __asm_movsd_1(v46);
            v47 = v50 | 1;
            v48 = __asm_mulsd(__asm_movsd(*(int64_t *)(0x3e80 * v47 + v44)), v51);
            v49 = __asm_addsd_4(__asm_mulsd_3(v48, *(int64_t *)(8 * v47 + a9)), v46);
            *v40 = __asm_movsd_1(v49);
            v50 += 2;
            v42 = v49;
            v43 = v50;
            while (v50 != v37) {
                // 0x2d0
                v45 = __asm_mulsd(__asm_movsd(*(int64_t *)(0x3e80 * v50 + v44)), v51);
                v46 = __asm_addsd_4(__asm_mulsd_3(v45, *(int64_t *)(8 * v50 + a9)), v49);
                *v40 = __asm_movsd_1(v46);
                v47 = v50 | 1;
                v48 = __asm_mulsd(__asm_movsd(*(int64_t *)(0x3e80 * v47 + v44)), v51);
                v49 = __asm_addsd_4(__asm_mulsd_3(v48, *(int64_t *)(8 * v47 + a9)), v46);
                *v40 = __asm_movsd_1(v49);
                v50 += 2;
                v42 = v49;
                v43 = v50;
            }
        }
        if ((a1 & 1) != 0) {
            // 0x332
            v52 = __asm_mulsd(__asm_movsd(*(int64_t *)(v39 + a2 + 0x3e80 * v43)), v51);
            v53 = __asm_mulsd_3(v52, *(int64_t *)(8 * v43 + a9));
            *v40 = __asm_movsd_1(__asm_addsd_4(v53, v42));
        }
        // 0x2a0
        v54 = v38 + 1;
        v38 = v54;
    }
    int32_t v55 = v5; // 0x35d
    if (v55 < 1) {
        // 0x557
        return result2;
    }
    int64_t v56 = 0; // 0x368
    if (v55 >= 6) {
        int64_t v57 = 0; // 0x37f
        v56 = 0;
        if (v2 + result2 > a10 == v2 + a10 > result2) {
            goto lab_0x3dd;
        } else {
            int64_t v58 = 8 * v57; // 0x3a0
            int64_t v59 = v58 + result2;
            int128_t * v60 = (int128_t *)v59; // 0x3a0
            int128_t v61 = __asm_movupd_2(*v60); // 0x3a0
            int128_t * v62 = (int128_t *)(v59 + 16); // 0x3a5
            int128_t v63 = __asm_movupd_2(*v62); // 0x3a5
            int64_t v64 = v58 + a10;
            int128_t v65 = __asm_addpd(__asm_movupd_2(*(int128_t *)v64), v61); // 0x3b1
            int128_t v66 = __asm_addpd(__asm_movupd_2(*(int128_t *)(v64 + 16)), v63); // 0x3bc
            __asm_movupd(*v60, v65);
            __asm_movupd(*v62, v66);
            int64_t v67 = v57 + 4; // 0x3cb
            v57 = v67;
            while (v67 != v4) {
                // 0x3a0
                v58 = 8 * v57;
                v59 = v58 + result2;
                v60 = (int128_t *)v59;
                v61 = __asm_movupd_2(*v60);
                v62 = (int128_t *)(v59 + 16);
                v63 = __asm_movupd_2(*v62);
                v64 = v58 + a10;
                v65 = __asm_addpd(__asm_movupd_2(*(int128_t *)v64), v61);
                v66 = __asm_addpd(__asm_movupd_2(*(int128_t *)(v64 + 16)), v63);
                __asm_movupd(*v60, v65);
                __asm_movupd(*v62, v66);
                v67 = v57 + 4;
                v57 = v67;
            }
            // 0x3d4
            v56 = v4;
            if (v4 == v1) {
                goto lab_0x48a;
            } else {
                goto lab_0x3dd;
            }
        }
    } else {
        goto lab_0x3dd;
    }
  lab_0x78:;
    int64_t v68 = v9;
    int64_t v69 = v12;
    int64_t v70 = v68; // 0x7e
    if ((a1 & 1) != 0) {
        int64_t v71 = 8 * v10; // 0x8a
        int128_t v72 = __asm_movsd(*(int64_t *)(v71 + a3)); // 0x8a
        int64_t v73 = 8 * v68; // 0x90
        int128_t v74 = __asm_mulsd_3(v72, *(int64_t *)(v73 + a4)); // 0x90
        int64_t * v75 = (int64_t *)(0x3e80 * v10 + a2 + v73); // 0x96
        int128_t v76 = __asm_addsd(v74, *v75); // 0x96
        int128_t v77 = __asm_mulsd_3(__asm_movsd(*(int64_t *)(v71 + a5)), *(int64_t *)(v73 + a6)); // 0xa2
        *v75 = __asm_movsd_1(__asm_addsd_4(v77, v76));
        v70 = v68 | 1;
    }
    // 0xb9
    v11 = v69;
    if (v3 != v68) {
        int64_t v78 = 0x3e80 * v10 + a2; // 0xc7
        int64_t v79 = 8 * v10; // 0xca
        int64_t * v80 = (int64_t *)(v79 + a3); // 0xca
        int64_t * v81 = (int64_t *)(v79 + a5);
        int64_t v82 = v70; // 0x11c
        int128_t v83 = __asm_movsd(*v80); // 0xca
        int64_t v84 = 8 * v82; // 0xd0
        int128_t v85 = __asm_mulsd_3(v83, *(int64_t *)(v84 + a4)); // 0xd0
        int64_t * v86 = (int64_t *)(v84 + v78); // 0xd5
        int128_t v87 = __asm_addsd(v85, *v86); // 0xd5
        int128_t v88 = __asm_mulsd_3(__asm_movsd(*v81), *(int64_t *)(v84 + a6)); // 0xe1
        *v86 = __asm_movsd_1(__asm_addsd_4(v88, v87));
        int128_t v89 = __asm_movsd(*v80); // 0xf1
        int64_t v90 = v84 + 8;
        int128_t v91 = __asm_mulsd_3(v89, *(int64_t *)(v90 + a4)); // 0xf7
        int64_t * v92 = (int64_t *)(v90 + v78); // 0xfd
        int128_t v93 = __asm_addsd(v91, *v92); // 0xfd
        int128_t v94 = __asm_mulsd_3(__asm_movsd(*v81), *(int64_t *)(v90 + a6)); // 0x10a
        *v92 = __asm_movsd_1(__asm_addsd_4(v94, v93));
        v82 += 2;
        v11 = v69;
        while (v82 != v1) {
            // 0xc0
            v83 = __asm_movsd(*v80);
            v84 = 8 * v82;
            v85 = __asm_mulsd_3(v83, *(int64_t *)(v84 + a4));
            v86 = (int64_t *)(v84 + v78);
            v87 = __asm_addsd(v85, *v86);
            v88 = __asm_mulsd_3(__asm_movsd(*v81), *(int64_t *)(v84 + a6));
            *v86 = __asm_movsd_1(__asm_addsd_4(v88, v87));
            v89 = __asm_movsd(*v80);
            v90 = v84 + 8;
            v91 = __asm_mulsd_3(v89, *(int64_t *)(v90 + a4));
            v92 = (int64_t *)(v90 + v78);
            v93 = __asm_addsd(v91, *v92);
            v94 = __asm_mulsd_3(__asm_movsd(*v81), *(int64_t *)(v90 + a6));
            *v92 = __asm_movsd_1(__asm_addsd_4(v94, v93));
            v82 += 2;
            v11 = v69;
        }
    }
    goto lab_0x60;
  lab_0x60:
    // 0x60
    v7 = v11;
    v8 = v10 + 1;
    if (v8 == v1) {
        // break -> 0x281
        goto lab_0x281;
    }
    goto lab_0x6c;
  lab_0x3dd:;
    int64_t v95 = a1 & 3; // 0x3e9
    int64_t v96 = v56; // 0x3ed
    if (v95 != 0) {
        int64_t v97 = 8 * v56; // 0x400
        int64_t * v98 = (int64_t *)(v97 + result2); // 0x400
        *v98 = __asm_movsd_1(__asm_addsd(__asm_movsd(*v98), *(int64_t *)(v97 + a10)));
        int64_t v99 = v56 + 1; // 0x410
        int64_t v100 = 1; // 0x413
        int64_t v101 = v99; // 0x419
        int64_t v102 = v100; // 0x419
        v96 = v99;
        while (v100 != v95) {
            // 0x400
            v97 = 8 * v101;
            v98 = (int64_t *)(v97 + result2);
            *v98 = __asm_movsd_1(__asm_addsd(__asm_movsd(*v98), *(int64_t *)(v97 + a10)));
            v99 = v101 + 1;
            v100 = v102 + 1;
            v101 = v99;
            v102 = v100;
            v96 = v99;
        }
    }
    // 0x41b
    if (v1 + -1 - v56 >= 3) {
        int64_t v103 = 8 * v96; // 0x430
        int64_t v104 = v103 + result2;
        int64_t * v105 = (int64_t *)v104; // 0x430
        int128_t v106 = __asm_movsd(*v105); // 0x430
        int64_t v107 = v103 + a10;
        int128_t v108 = __asm_addsd(v106, *(int64_t *)v107); // 0x435
        int64_t * v109 = (int64_t *)(v104 + 8); // 0x43b
        int128_t v110 = __asm_movsd(*v109); // 0x43b
        *v105 = __asm_movsd_1(v108);
        *v109 = __asm_movsd_1(__asm_addsd(v110, *(int64_t *)(v107 + 8)));
        int64_t * v111 = (int64_t *)(v104 + 16); // 0x453
        *v111 = __asm_movsd_1(__asm_addsd(__asm_movsd(*v111), *(int64_t *)(v107 + 16)));
        int64_t * v112 = (int64_t *)(v104 + 24); // 0x466
        *v112 = __asm_movsd_1(__asm_addsd(__asm_movsd(*v112), *(int64_t *)(v107 + 24)));
        int64_t v113 = v96 + 4; // 0x479
        int64_t v114 = v113; // 0x480
        while (v113 != v1) {
            // 0x430
            v103 = 8 * v114;
            v104 = v103 + result2;
            v105 = (int64_t *)v104;
            v106 = __asm_movsd(*v105);
            v107 = v103 + a10;
            v108 = __asm_addsd(v106, *(int64_t *)v107);
            v109 = (int64_t *)(v104 + 8);
            v110 = __asm_movsd(*v109);
            *v105 = __asm_movsd_1(v108);
            *v109 = __asm_movsd_1(__asm_addsd(v110, *(int64_t *)(v107 + 8)));
            v111 = (int64_t *)(v104 + 16);
            *v111 = __asm_movsd_1(__asm_addsd(__asm_movsd(*v111), *(int64_t *)(v107 + 16)));
            v112 = (int64_t *)(v104 + 24);
            *v112 = __asm_movsd_1(__asm_addsd(__asm_movsd(*v112), *(int64_t *)(v107 + 24)));
            v113 = v114 + 4;
            v114 = v113;
        }
    }
    goto lab_0x48a;
  lab_0x48a:;
    int64_t v115 = 0;
    int64_t * v116 = (int64_t *)(8 * v115 + a7); // 0x4ac
    int128_t v117 = __asm_movsd(*v116); // 0x4ac
    int128_t v118 = v117; // 0x4c0
    int64_t v119 = 0; // 0x4c0
    int64_t v120; // 0x4d7
    int64_t v121; // 0x4da
    int128_t v122; // 0x4e8
    int128_t v123; // 0x4f1
    int64_t v124; // 0x4fb
    int128_t v125; // 0x505
    int128_t v126; // 0x50f
    int64_t v127; // 0x519
    if (v3 != 0) {
        // 0x4d0
        v120 = 0x3e80 * v115 + a2;
        v127 = 0;
        v121 = 8 * v127;
        v122 = __asm_mulsd(__asm_movsd(*(int64_t *)(v121 + v120)), v51);
        v123 = __asm_addsd_4(__asm_mulsd_3(v122, *(int64_t *)(v121 + result2)), v117);
        *v116 = __asm_movsd_1(v123);
        v124 = v121 | 8;
        v125 = __asm_mulsd(__asm_movsd(*(int64_t *)(v124 + v120)), v51);
        v126 = __asm_addsd_4(__asm_mulsd_3(v125, *(int64_t *)(v124 + result2)), v123);
        *v116 = __asm_movsd_1(v126);
        v127 += 2;
        v118 = v126;
        v119 = v127;
        while (v127 != v37) {
            // 0x4d0
            v121 = 8 * v127;
            v122 = __asm_mulsd(__asm_movsd(*(int64_t *)(v121 + v120)), v51);
            v123 = __asm_addsd_4(__asm_mulsd_3(v122, *(int64_t *)(v121 + result2)), v126);
            *v116 = __asm_movsd_1(v123);
            v124 = v121 | 8;
            v125 = __asm_mulsd(__asm_movsd(*(int64_t *)(v124 + v120)), v51);
            v126 = __asm_addsd_4(__asm_mulsd_3(v125, *(int64_t *)(v124 + result2)), v123);
            *v116 = __asm_movsd_1(v126);
            v127 += 2;
            v118 = v126;
            v119 = v127;
        }
    }
    int64_t v128; // 0x539
    int128_t v129; // 0x53f
    int128_t v130; // 0x543
    if ((a1 & 1) != 0) {
        // 0x52f
        v128 = 8 * v119;
        v129 = __asm_mulsd(__asm_movsd(*(int64_t *)(0x3e80 * v115 + a2 + v128)), v51);
        v130 = __asm_mulsd_3(v129, *(int64_t *)(v128 + result2));
        *v116 = __asm_movsd_1(__asm_addsd_4(v130, v118));
    }
    int64_t v131 = v115 + 1; // 0x4a0
    while (v131 != v1) {
        // 0x4ac
        v115 = v131;
        v116 = (int64_t *)(8 * v115 + a7);
        v117 = __asm_movsd(*v116);
        v118 = v117;
        v119 = 0;
        if (v3 != 0) {
            // 0x4d0
            v120 = 0x3e80 * v115 + a2;
            v127 = 0;
            v121 = 8 * v127;
            v122 = __asm_mulsd(__asm_movsd(*(int64_t *)(v121 + v120)), v51);
            v123 = __asm_addsd_4(__asm_mulsd_3(v122, *(int64_t *)(v121 + result2)), v117);
            *v116 = __asm_movsd_1(v123);
            v124 = v121 | 8;
            v125 = __asm_mulsd(__asm_movsd(*(int64_t *)(v124 + v120)), v51);
            v126 = __asm_addsd_4(__asm_mulsd_3(v125, *(int64_t *)(v124 + result2)), v123);
            *v116 = __asm_movsd_1(v126);
            v127 += 2;
            v118 = v126;
            v119 = v127;
            while (v127 != v37) {
                // 0x4d0
                v121 = 8 * v127;
                v122 = __asm_mulsd(__asm_movsd(*(int64_t *)(v121 + v120)), v51);
                v123 = __asm_addsd_4(__asm_mulsd_3(v122, *(int64_t *)(v121 + result2)), v126);
                *v116 = __asm_movsd_1(v123);
                v124 = v121 | 8;
                v125 = __asm_mulsd(__asm_movsd(*(int64_t *)(v124 + v120)), v51);
                v126 = __asm_addsd_4(__asm_mulsd_3(v125, *(int64_t *)(v124 + result2)), v123);
                *v116 = __asm_movsd_1(v126);
                v127 += 2;
                v118 = v126;
                v119 = v127;
            }
        }
        if ((a1 & 1) != 0) {
            // 0x52f
            v128 = 8 * v119;
            v129 = __asm_mulsd(__asm_movsd(*(int64_t *)(0x3e80 * v115 + a2 + v128)), v51);
            v130 = __asm_mulsd_3(v129, *(int64_t *)(v128 + result2));
            *v116 = __asm_movsd_1(__asm_addsd_4(v130, v118));
        }
        // 0x4a0
        v131 = v115 + 1;
    }
    // 0x557
    return result2;
}
