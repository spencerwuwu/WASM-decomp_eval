
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "adi.h"
void kernel_adi(int32_t tsteps, uint32_t n, float64_t (*u)[1], float64_t (*v)[1], float64_t (*p)[1], float64_t (*q)[1]) {
    if (tsteps < 1) {
        // 0x71f
        return;
    }
    int64_t v1 = (int64_t)q;
    int64_t v2 = (int64_t)p;
    int64_t v3 = (int64_t)v;
    int64_t v4 = (int64_t)u;
    int64_t v5 = n;
    int128_t v6 = __asm_cvtsi2sd(n); // 0x1f8
    int128_t v7 = __asm_movsd(0x3ff0000000000000); // 0x1fc
    int128_t v8 = __asm_divsd(__asm_movapd(v7), v6); // 0x20a
    int128_t v9 = __asm_divsd(__asm_movapd(v7), __asm_cvtsi2sd(tsteps)); // 0x219
    int128_t v10 = __asm_addsd(__asm_movapd(v9), v9); // 0x221
    int128_t v11 = __asm_mulsd(v8, v8); // 0x225
    int128_t v12 = __asm_divsd(v10, v11); // 0x229
    int128_t v13 = __asm_divsd(v9, v11); // 0x22d
    int128_t v14 = __asm_movsd(-0x4020000000000000); // 0x231
    int128_t v15 = __asm_mulsd(__asm_movapd(v12), v14); // 0x23d
    int128_t v16 = __asm_addsd(v12, v7); // 0x241
    int128_t v17 = __asm_mulsd(v14, v13); // 0x246
    int128_t v18 = __asm_addsd(v13, v7); // 0x24a
    int64_t v19 = v5 + 0xffffffff; // 0x24f
    int64_t v20 = v19 & 0xffffffff; // 0x24f
    int128_t v21 = __asm_movapd(g3); // 0x252
    int128_t v22 = __asm_xorpd(__asm_movapd(v15), v21); // 0x25e
    int128_t v23 = __asm_xorpd(v21, v17); // 0x262
    int128_t v24 = __asm_addsd(__asm_addsd(__asm_movapd(v17), v17), v7); // 0x26e
    int64_t v25 = 0x100000000 * v19;
    int64_t v26 = v5 + 0xfffffffe & 0xffffffff; // 0x27b
    int128_t v27 = __asm_addsd(__asm_addsd(__asm_movapd(v15), v15), v7); // 0x28b
    int64_t v28 = 8 * v20 + 0x1f40; // 0x290
    int64_t v29 = v2 + 0x1f40;
    int64_t v30 = v1 + 0x1f40;
    int64_t v31 = v5 & 0xffffffff; // 0x2b1
    int32_t v32 = 1; // 0x2b1
    int64_t v33; // 0x1e0
    int64_t v34; // 0x1e0
    int64_t v35; // 0x1e0
    int64_t v36; // 0x1e0
    int64_t v37; // 0x1e0
    int64_t v38; // 0x1e0
    int64_t v39; // 0x1e0
    uint64_t v40; // 0x1e0
    int64_t v41; // 0x52e
    int64_t v42; // 0x535
    int64_t v43; // 0x539
    int64_t v44; // 0x547
    int64_t v45; // 0x552
    uint64_t v46; // 0x1e0
    int64_t v47; // 0x30f
    int64_t v48; // 0x1e0
    int64_t v49; // 0x31a
    int64_t v50; // 0x328
    int64_t v51; // 0x32e
    int64_t v52; // 0x332
    while (true) {
        // 0x2d2
        v39 = v31;
        v35 = 0;
        v37 = 1;
        if ((int32_t)v31 >= 3) {
            while (true) {
              lab_0x2f0_2:;
                int64_t v53 = 0x1f40 * v35; // 0x2f0
                v46 = v53 + v29;
                int64_t v54 = v53 + v28; // 0x307
                v47 = 8 * v37;
                v48 = v47 + v3;
                int64_t * v55 = (int64_t *)v48; // 0x30f
                *v55 = 0x3ff0000000000000;
                int64_t v56 = 0x1f40 * v37; // 0x313
                v49 = v56 + v2;
                *(int64_t *)v49 = 0;
                int64_t v57 = __asm_movsd_1(__asm_movsd(*v55)); // 0x328
                v50 = v56 + v1;
                *(int64_t *)v50 = v57;
                v51 = v37 - 1;
                v52 = v37 + 1;
                if (v46 >= v54 + v1) {
                    // 0x2f0
                    v34 = v53 + v30;
                    goto lab_0x3f0;
                } else {
                    int64_t v58 = v53 + v30;
                    v34 = v58;
                    if (v58 >= v54 + v2) {
                        goto lab_0x3f0;
                    } else {
                        int64_t v59 = 1; // 0x3da
                        int64_t v60 = 8 * v59; // 0x364
                        int64_t v61 = v60 + v49;
                        int128_t v62 = __asm_addsd(__asm_mulsd(__asm_movsd(*(int64_t *)(v61 - 8)), v15), v16); // 0x370
                        *(int64_t *)v61 = __asm_movsd_1(__asm_divsd(__asm_movapd(v22), v62));
                        int64_t v63 = 0x1f40 * v59 + v4; // 0x38c
                        int128_t v64 = __asm_mulsd(__asm_movsd(*(int64_t *)(v63 + v47)), v24); // 0x395
                        int128_t v65 = __asm_addsd(__asm_mulsd(__asm_movsd(*(int64_t *)(v63 + 8 * v51)), v23), v64); // 0x3a5
                        int128_t v66 = __asm_addsd(__asm_mulsd(__asm_movsd(*(int64_t *)(v63 + 8 * v52)), v23), v65); // 0x3b5
                        int64_t v67 = v60 + v50;
                        int128_t v68 = __asm_movsd(*(int64_t *)(v67 - 8)); // 0x3be
                        *(int64_t *)v67 = __asm_movsd_1(__asm_divsd(__asm_addsd(__asm_mulsd(v68, v22), v66), v62));
                        v59++;
                        while (v59 != v20) {
                            // 0x360
                            v60 = 8 * v59;
                            v61 = v60 + v49;
                            v62 = __asm_addsd(__asm_mulsd(__asm_movsd(*(int64_t *)(v61 - 8)), v15), v16);
                            *(int64_t *)v61 = __asm_movsd_1(__asm_divsd(__asm_movapd(v22), v62));
                            v63 = 0x1f40 * v59 + v4;
                            v64 = __asm_mulsd(__asm_movsd(*(int64_t *)(v63 + v47)), v24);
                            v65 = __asm_addsd(__asm_mulsd(__asm_movsd(*(int64_t *)(v63 + 8 * v51)), v23), v64);
                            v66 = __asm_addsd(__asm_mulsd(__asm_movsd(*(int64_t *)(v63 + 8 * v52)), v23), v65);
                            v67 = v60 + v50;
                            v68 = __asm_movsd(*(int64_t *)(v67 - 8));
                            *(int64_t *)v67 = __asm_movsd_1(__asm_divsd(__asm_addsd(__asm_mulsd(v68, v22), v66), v62));
                            v59++;
                        }
                        goto lab_0x489;
                    }
                }
            }
          lab_0x4ea:
            // 0x4ea
            v39 = v5;
            v36 = 1;
            v38 = 0;
            if (n >= 3) {
                while (true) {
                  lab_0x510_2:;
                    int64_t v69 = 0x1f40 * v38; // 0x510
                    v40 = v69 + v29;
                    int64_t v70 = v69 + v28; // 0x527
                    v41 = 0x1f40 * v36;
                    v42 = v41 + v4;
                    int64_t * v71 = (int64_t *)v42; // 0x535
                    *v71 = 0x3ff0000000000000;
                    v43 = v41 + v2;
                    *(int64_t *)v43 = 0;
                    int64_t v72 = __asm_movsd_1(__asm_movsd(*v71)); // 0x547
                    v44 = v41 + v1;
                    *(int64_t *)v44 = v72;
                    v45 = v36 + 1;
                    if (v40 >= v70 + v1) {
                        // 0x510
                        v33 = v69 + v30;
                        goto lab_0x620;
                    } else {
                        int64_t v73 = v69 + v30;
                        v33 = v73;
                        if (v73 >= v70 + v2) {
                            goto lab_0x620;
                        } else {
                            int64_t v74; // 0x1e0
                            int64_t v75 = 8 * v74; // 0x584
                            int64_t v76 = v75 + v43;
                            int128_t v77 = __asm_addsd(__asm_mulsd(__asm_movsd(*(int64_t *)(v76 - 8)), v17), v18); // 0x590
                            *(int64_t *)v76 = __asm_movsd_1(__asm_divsd(__asm_movapd(v23), v77));
                            int64_t v78 = v75 + v3;
                            int128_t v79 = __asm_mulsd(__asm_movsd(*(int64_t *)(v78 + v41)), v27); // 0x5b9
                            int64_t v80; // 0x1e0
                            int128_t v81 = __asm_addsd(__asm_mulsd(__asm_movsd(*(int64_t *)(v78 + v80)), v22), v79); // 0x5c9
                            int64_t v82; // 0x1e0
                            int128_t v83 = __asm_addsd(__asm_mulsd(__asm_movsd(*(int64_t *)(v78 + v82)), v22), v81); // 0x5e3
                            int64_t v84 = v75 + v44;
                            int128_t v85 = __asm_movsd(*(int64_t *)(v84 - 8)); // 0x5ec
                            *(int64_t *)v84 = __asm_movsd_1(__asm_divsd(__asm_addsd(__asm_mulsd(v85, v23), v83), v77));
                            int64_t v86 = v74 + 1; // 0x608
                            v74 = v86;
                            // 0x580
                            while (v86 != v20) {
                                // 0x580
                                v75 = 8 * v74;
                                v76 = v75 + v43;
                                v77 = __asm_addsd(__asm_mulsd(__asm_movsd(*(int64_t *)(v76 - 8)), v17), v18);
                                *(int64_t *)v76 = __asm_movsd_1(__asm_divsd(__asm_movapd(v23), v77));
                                v78 = v75 + v3;
                                v79 = __asm_mulsd(__asm_movsd(*(int64_t *)(v78 + v41)), v27);
                                v81 = __asm_addsd(__asm_mulsd(__asm_movsd(*(int64_t *)(v78 + v80)), v22), v79);
                                v83 = __asm_addsd(__asm_mulsd(__asm_movsd(*(int64_t *)(v78 + v82)), v22), v81);
                                v84 = v75 + v44;
                                v85 = __asm_movsd(*(int64_t *)(v84 - 8));
                                *(int64_t *)v84 = __asm_movsd_1(__asm_divsd(__asm_addsd(__asm_mulsd(v85, v23), v83), v77));
                                v86 = v74 + 1;
                                v74 = v86;
                            }
                            goto lab_0x6cb;
                        }
                    }
                }
            }
        }
      lab_0x2c0:
        // 0x2c0
        v31 = v39;
        if (v32 == tsteps) {
            // break -> 0x71f
            break;
        }
        v32++;
    }
  lab_0x620:;
    int128_t v87 = __asm_movsd(*(int64_t *)v40); // 0x620
    int128_t v88 = __asm_movsd(*(int64_t *)v33); // 0x639
    int64_t v89 = 1; // 0x639
    int128_t v90 = __asm_addsd(__asm_mulsd(v87, v17), v18); // 0x645
    int128_t v91 = __asm_divsd(__asm_movapd(v23), v90); // 0x64f
    int64_t v92 = __asm_movsd_1(v91); // 0x658
    int64_t v93 = 8 * v89; // 0x658
    *(int64_t *)(v93 + v43) = v92;
    int64_t v94 = v93 + v3;
    int128_t v95 = __asm_mulsd(__asm_movsd(*(int64_t *)(v94 + v41)), v27); // 0x672
    int64_t v96 = *(int64_t *)(v94 + 0x1f40 * (v36 - 1)); // 0x677
    int128_t v97 = __asm_addsd(__asm_mulsd(__asm_movsd(v96), v22), v95); // 0x682
    int128_t v98 = __asm_addsd(__asm_mulsd(__asm_movsd(*(int64_t *)(v94 + 0x1f40 * v45)), v22), v97); // 0x69c
    int128_t v99 = __asm_divsd(__asm_addsd(__asm_mulsd(v88, v23), v98), v90); // 0x6ab
    *(int64_t *)(v93 + v44) = __asm_movsd_1(v99);
    int64_t v100 = v89 + 1; // 0x6ba
    v88 = v99;
    int128_t v101 = __asm_movapd(v91); // 0x6c5
    v89 = v100;
    while (v100 != v20) {
        // 0x640
        v90 = __asm_addsd(__asm_mulsd(v101, v17), v18);
        v91 = __asm_divsd(__asm_movapd(v23), v90);
        v92 = __asm_movsd_1(v91);
        v93 = 8 * v89;
        *(int64_t *)(v93 + v43) = v92;
        v94 = v93 + v3;
        v95 = __asm_mulsd(__asm_movsd(*(int64_t *)(v94 + v41)), v27);
        v96 = *(int64_t *)(v94 + 0x1f40 * (v36 - 1));
        v97 = __asm_addsd(__asm_mulsd(__asm_movsd(v96), v22), v95);
        v98 = __asm_addsd(__asm_mulsd(__asm_movsd(*(int64_t *)(v94 + 0x1f40 * v45)), v22), v97);
        v99 = __asm_divsd(__asm_addsd(__asm_mulsd(v88, v23), v98), v90);
        *(int64_t *)(v93 + v44) = __asm_movsd_1(v99);
        v100 = v89 + 1;
        v88 = v99;
        v101 = __asm_movapd(v91);
        v89 = v100;
    }
    goto lab_0x6cb;
  lab_0x6cb:
    // 0x6cb
    *(int64_t *)(v42 + (v25 >> 29)) = 0x3ff0000000000000;
    uint64_t v102 = v26;
    int64_t v103 = 8 * v102; // 0x6e4
    int128_t v104 = __asm_movsd(*(int64_t *)(v103 + v43)); // 0x6e4
    int64_t v105 = v103 + v42;
    int128_t v106 = __asm_mulsd_2(v104, *(int64_t *)(v105 + 8)); // 0x6ee
    *(int64_t *)v105 = __asm_movsd_1(__asm_addsd_3(v106, *(int64_t *)(v103 + v44)));
    int64_t v107 = v102 - 1; // 0x70c
    while (v102 > 1) {
        // 0x6e0
        v102 = v107;
        v103 = 8 * v102;
        v104 = __asm_movsd(*(int64_t *)(v103 + v43));
        v105 = v103 + v42;
        v106 = __asm_mulsd_2(v104, *(int64_t *)(v105 + 8));
        *(int64_t *)v105 = __asm_movsd_1(__asm_addsd_3(v106, *(int64_t *)(v103 + v44)));
        v107 = v102 - 1;
    }
    // 0x70e
    v39 = v5;
    v36 = v45;
    v38++;
    if (v45 == v20) {
        // break -> 0x2c0
        goto lab_0x2c0;
    }
    goto lab_0x510_2;
  lab_0x3f0:;
    int128_t v108 = __asm_movsd(*(int64_t *)v46); // 0x3f0
    int128_t v109 = __asm_movsd(*(int64_t *)v34); // 0x409
    int64_t v110 = 1; // 0x409
    int128_t v111 = __asm_addsd(__asm_mulsd(v108, v15), v16); // 0x415
    int128_t v112 = __asm_divsd(__asm_movapd(v22), v111); // 0x41f
    int64_t v113 = __asm_movsd_1(v112); // 0x428
    int64_t v114 = 8 * v110; // 0x428
    *(int64_t *)(v114 + v49) = v113;
    int64_t v115 = 0x1f40 * v110 + v4; // 0x435
    int128_t v116 = __asm_mulsd(__asm_movsd(*(int64_t *)(v115 + v47)), v24); // 0x43e
    int128_t v117 = __asm_addsd(__asm_mulsd(__asm_movsd(*(int64_t *)(v115 + 8 * v51)), v23), v116); // 0x44e
    int128_t v118 = __asm_addsd(__asm_mulsd(__asm_movsd(*(int64_t *)(v115 + 8 * v52)), v23), v117); // 0x45e
    int128_t v119 = __asm_divsd(__asm_addsd(__asm_mulsd(v109, v22), v118), v111); // 0x46d
    *(int64_t *)(v114 + v50) = __asm_movsd_1(v119);
    int64_t v120 = v110 + 1; // 0x47c
    v109 = v119;
    int128_t v121 = __asm_movapd(v112); // 0x487
    v110 = v120;
    while (v120 != v20) {
        // 0x410
        v111 = __asm_addsd(__asm_mulsd(v121, v15), v16);
        v112 = __asm_divsd(__asm_movapd(v22), v111);
        v113 = __asm_movsd_1(v112);
        v114 = 8 * v110;
        *(int64_t *)(v114 + v49) = v113;
        v115 = 0x1f40 * v110 + v4;
        v116 = __asm_mulsd(__asm_movsd(*(int64_t *)(v115 + v47)), v24);
        v117 = __asm_addsd(__asm_mulsd(__asm_movsd(*(int64_t *)(v115 + 8 * v51)), v23), v116);
        v118 = __asm_addsd(__asm_mulsd(__asm_movsd(*(int64_t *)(v115 + 8 * v52)), v23), v117);
        v119 = __asm_divsd(__asm_addsd(__asm_mulsd(v109, v22), v118), v111);
        *(int64_t *)(v114 + v50) = __asm_movsd_1(v119);
        v120 = v110 + 1;
        v109 = v119;
        v121 = __asm_movapd(v112);
        v110 = v120;
    }
    goto lab_0x489;
  lab_0x489:
    // 0x489
    *(int64_t *)(v48 + 0x1f40 * (v25 >> 32)) = 0x3ff0000000000000;
    uint64_t v122 = v26;
    int64_t v123 = 8 * v122; // 0x4a4
    int128_t v124 = __asm_movsd(*(int64_t *)(v123 + v49)); // 0x4a4
    int64_t v125 = v48 + 0x1f40 * v122;
    int128_t v126 = __asm_mulsd_2(v124, *(int64_t *)(v125 + 0x1f40)); // 0x4b8
    *(int64_t *)v125 = __asm_movsd_1(__asm_addsd_3(v126, *(int64_t *)(v123 + v50)));
    int64_t v127 = v122 - 1; // 0x4d9
    while (v122 > 1) {
        // 0x4a0
        v122 = v127;
        v123 = 8 * v122;
        v124 = __asm_movsd(*(int64_t *)(v123 + v49));
        v125 = v48 + 0x1f40 * v122;
        v126 = __asm_mulsd_2(v124, *(int64_t *)(v125 + 0x1f40));
        *(int64_t *)v125 = __asm_movsd_1(__asm_addsd_3(v126, *(int64_t *)(v123 + v50)));
        v127 = v122 - 1;
    }
    // 0x4db
    v35++;
    v37 = v52;
    if (v52 == v20) {
        // break -> 0x4ea
        goto lab_0x4ea;
    }
    goto lab_0x2f0_2;
}
