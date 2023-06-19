
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
        // 0x6d3
        return;
    }
    int64_t v1 = (int64_t)q;
    int64_t v2 = (int64_t)p;
    int64_t v3 = (int64_t)v;
    int64_t v4 = (int64_t)u;
    int128_t v5 = __asm_cvtsi2sd(n); // 0x180
    int128_t v6 = __asm_movsd(0x3ff0000000000000); // 0x184
    int128_t v7 = __asm_divsd(__asm_movapd(v6), v5); // 0x192
    int128_t v8 = __asm_divsd(__asm_movapd(v6), __asm_cvtsi2sd(tsteps)); // 0x1a1
    int128_t v9 = __asm_addsd(__asm_movapd(v8), v8); // 0x1a9
    int128_t v10 = __asm_mulsd(v7, v7); // 0x1ad
    int128_t v11 = __asm_divsd(v9, v10); // 0x1b1
    int128_t v12 = __asm_divsd(v8, v10); // 0x1b5
    int128_t v13 = __asm_movsd(-0x4020000000000000); // 0x1b9
    int128_t v14 = __asm_mulsd(__asm_movapd(v11), v13); // 0x1c5
    int128_t v15 = __asm_addsd(v11, v6); // 0x1c9
    int128_t v16 = __asm_mulsd(v13, v12); // 0x1ce
    int128_t v17 = __asm_addsd(v12, v6); // 0x1d2
    int32_t v18 = n - 1; // 0x1d7
    int64_t v19 = v18; // 0x1d7
    int128_t v20 = __asm_movapd(g1); // 0x1da
    int128_t v21 = __asm_xorpd(__asm_movapd(v14), v20); // 0x1e6
    int128_t v22 = __asm_xorpd(v20, v16); // 0x1ea
    int128_t v23 = __asm_addsd(__asm_addsd(__asm_movapd(v16), v16), v6); // 0x1f6
    int64_t v24 = v18; // 0x1fb
    int128_t v25 = __asm_addsd(__asm_addsd(__asm_movapd(v14), v14), v6); // 0x209
    int64_t v26 = 8 * v19 + 0x1f40; // 0x216
    int64_t v27 = v2 + 0x1f40;
    int64_t v28 = v1 + 0x1f40;
    int64_t v29 = n - 2;
    int64_t v30 = 8 * v24;
    int32_t v31 = 1; // 0x24a
    int64_t v32; // 0x160
    int32_t v33; // 0x160
    int64_t v34; // 0x160
    int64_t v35; // 0x160
    uint64_t v36; // 0x160
    int64_t v37; // 0x2ad
    int64_t v38; // 0x160
    int64_t v39; // 0x2b8
    int64_t v40; // 0x2c6
    int64_t v41; // 0x2d0
    while (true) {
      lab_0x265:
        // 0x265
        v33 = v31;
        v35 = 1;
        v34 = 0;
        if (n >= 3) {
            while (true) {
              lab_0x28f_2:;
                int64_t v42 = 0x1f40 * v34; // 0x28f
                v36 = v42 + v27;
                int64_t v43 = v42 + v26; // 0x2a6
                v37 = 8 * v35;
                v38 = v37 + v3;
                int64_t * v44 = (int64_t *)v38; // 0x2ad
                *v44 = 0x3ff0000000000000;
                int64_t v45 = 0x1f40 * v35; // 0x2b1
                v39 = v45 + v2;
                *(int64_t *)v39 = 0;
                int64_t v46 = __asm_movsd_1(__asm_movsd(*v44)); // 0x2c6
                v40 = v45 + v1;
                *(int64_t *)v40 = v46;
                v41 = v35 + 1;
                if (v36 >= v43 + v1) {
                    // 0x28f
                    v32 = v42 + v28;
                    goto lab_0x390;
                } else {
                    int64_t v47 = v42 + v28;
                    v32 = v47;
                    if (v47 >= v43 + v2) {
                        goto lab_0x390;
                    } else {
                        int64_t v48; // 0x160
                        int64_t v49 = 8 * v48; // 0x304
                        int64_t v50 = v49 + v39;
                        int128_t v51 = __asm_addsd(__asm_mulsd(__asm_movsd(*(int64_t *)(v50 - 8)), v14), v15); // 0x310
                        *(int64_t *)v50 = __asm_movsd_1(__asm_divsd(__asm_movapd(v21), v51));
                        int64_t v52 = 0x1f40 * v48 + v4; // 0x32c
                        int128_t v53 = __asm_mulsd(__asm_movsd(*(int64_t *)(v52 + v37)), v23); // 0x335
                        int64_t v54; // 0x160
                        int128_t v55 = __asm_addsd(__asm_mulsd(__asm_movsd(*(int64_t *)(v52 + v54)), v22), v53); // 0x345
                        int64_t v56; // 0x160
                        int128_t v57 = __asm_addsd(__asm_mulsd(__asm_movsd(*(int64_t *)(v52 + v56)), v22), v55); // 0x355
                        int64_t v58 = v49 + v40;
                        int128_t v59 = __asm_movsd(*(int64_t *)(v58 - 8)); // 0x35e
                        *(int64_t *)v58 = __asm_movsd_1(__asm_divsd(__asm_addsd(__asm_mulsd(v59, v21), v57), v51));
                        int64_t v60 = v48 + 1; // 0x37a
                        v48 = v60;
                        // 0x300
                        while (v60 != v19) {
                            // 0x300
                            v49 = 8 * v48;
                            v50 = v49 + v39;
                            v51 = __asm_addsd(__asm_mulsd(__asm_movsd(*(int64_t *)(v50 - 8)), v14), v15);
                            *(int64_t *)v50 = __asm_movsd_1(__asm_divsd(__asm_movapd(v21), v51));
                            v52 = 0x1f40 * v48 + v4;
                            v53 = __asm_mulsd(__asm_movsd(*(int64_t *)(v52 + v37)), v23);
                            v55 = __asm_addsd(__asm_mulsd(__asm_movsd(*(int64_t *)(v52 + v54)), v22), v53);
                            v57 = __asm_addsd(__asm_mulsd(__asm_movsd(*(int64_t *)(v52 + v56)), v22), v55);
                            v58 = v49 + v40;
                            v59 = __asm_movsd(*(int64_t *)(v58 - 8));
                            *(int64_t *)v58 = __asm_movsd_1(__asm_divsd(__asm_addsd(__asm_mulsd(v59, v21), v57), v51));
                            v60 = v48 + 1;
                            v48 = v60;
                        }
                        goto lab_0x450;
                    }
                }
            }
        }
        goto lab_0x250;
    }
  lab_0x6d3:;
    // 0x4bc
    int64_t v61; // 0x160
    int64_t v62 = 0x1f40 * v61; // 0x4bc
    uint64_t v63 = v62 + v27;
    int64_t v64 = v62 + v26; // 0x4d3
    int64_t v65; // 0x160
    int64_t v66 = 0x1f40 * v65; // 0x4db
    int64_t v67 = v66 + v4; // 0x4e2
    int64_t * v68 = (int64_t *)v67; // 0x4e2
    *v68 = 0x3ff0000000000000;
    int64_t v69 = v66 + v2; // 0x4e6
    *(int64_t *)v69 = 0;
    int64_t v70 = __asm_movsd_1(__asm_movsd(*v68)); // 0x4f4
    int64_t v71 = v66 + v1; // 0x4f4
    *(int64_t *)v71 = v70;
    int64_t v72 = v65 - 1; // 0x4fa
    int64_t v73 = v65 + 1; // 0x4fe
    int64_t v74; // 0x160
    int64_t v75; // 0x160
    if (v63 >= v64 + v1) {
        // 0x4bc
        v74 = v62 + v28;
        goto lab_0x5d0;
    } else {
        int64_t v76 = v62 + v28;
        v74 = v76;
        if (v76 >= v64 + v2) {
            goto lab_0x5d0;
        } else {
            // 0x530
            v75 = 1;
            goto lab_0x530_2;
        }
    }
  lab_0x390:;
    int128_t v77 = __asm_movsd(*(int64_t *)v36); // 0x390
    int128_t v78 = __asm_movsd(*(int64_t *)v32); // 0x3aa
    int64_t v79 = 1; // 0x3aa
    int128_t v80 = __asm_addsd(__asm_mulsd(v77, v14), v15); // 0x3b5
    int128_t v81 = __asm_divsd(__asm_movapd(v21), v80); // 0x3bf
    int64_t v82 = __asm_movsd_1(v81); // 0x3c8
    int64_t v83 = 8 * v79; // 0x3c8
    *(int64_t *)(v83 + v39) = v82;
    int64_t v84 = 0x1f40 * v79 + v4; // 0x3d5
    int128_t v85 = __asm_mulsd(__asm_movsd(*(int64_t *)(v84 + v37)), v23); // 0x3de
    int64_t v86 = *(int64_t *)(v84 + 8 * (v35 - 1)); // 0x3e3
    int128_t v87 = __asm_addsd(__asm_mulsd(__asm_movsd(v86), v22), v85); // 0x3ee
    int128_t v88 = __asm_addsd(__asm_mulsd(__asm_movsd(*(int64_t *)(v84 + 8 * v41)), v22), v87); // 0x3fe
    int128_t v89 = __asm_divsd(__asm_addsd(__asm_mulsd(v78, v21), v88), v80); // 0x40d
    *(int64_t *)(v83 + v40) = __asm_movsd_1(v89);
    int64_t v90 = v79 + 1; // 0x41c
    v78 = v89;
    int128_t v91 = __asm_movapd(v81); // 0x427
    v79 = v90;
    while (v90 != v19) {
        // 0x3b0
        v80 = __asm_addsd(__asm_mulsd(v91, v14), v15);
        v81 = __asm_divsd(__asm_movapd(v21), v80);
        v82 = __asm_movsd_1(v81);
        v83 = 8 * v79;
        *(int64_t *)(v83 + v39) = v82;
        v84 = 0x1f40 * v79 + v4;
        v85 = __asm_mulsd(__asm_movsd(*(int64_t *)(v84 + v37)), v23);
        v86 = *(int64_t *)(v84 + 8 * (v35 - 1));
        v87 = __asm_addsd(__asm_mulsd(__asm_movsd(v86), v22), v85);
        v88 = __asm_addsd(__asm_mulsd(__asm_movsd(*(int64_t *)(v84 + 8 * v41)), v22), v87);
        v89 = __asm_divsd(__asm_addsd(__asm_mulsd(v78, v21), v88), v80);
        *(int64_t *)(v83 + v40) = __asm_movsd_1(v89);
        v90 = v79 + 1;
        v78 = v89;
        v91 = __asm_movapd(v81);
        v79 = v90;
    }
    goto lab_0x450;
  lab_0x450:
    // 0x450
    *(int64_t *)(v38 + 0x1f40 * v24) = 0x3ff0000000000000;
    uint64_t v92 = v29;
    int64_t v93 = 8 * v92; // 0x454
    int128_t v94 = __asm_movsd(*(int64_t *)(v93 + v39)); // 0x454
    int64_t v95 = v38 + 0x1f40 * v92;
    int128_t v96 = __asm_mulsd_2(v94, *(int64_t *)(v95 + 0x1f40)); // 0x468
    *(int64_t *)v95 = __asm_movsd_1(__asm_addsd_3(v96, *(int64_t *)(v93 + v40)));
    int64_t v97 = v92 - 1; // 0x489
    while (v92 > 1) {
        // 0x450
        v92 = v97;
        v93 = 8 * v92;
        v94 = __asm_movsd(*(int64_t *)(v93 + v39));
        v95 = v38 + 0x1f40 * v92;
        v96 = __asm_mulsd_2(v94, *(int64_t *)(v95 + 0x1f40));
        *(int64_t *)v95 = __asm_movsd_1(__asm_addsd_3(v96, *(int64_t *)(v93 + v40)));
        v97 = v92 - 1;
    }
    // 0x280
    v35 = v41;
    v34++;
    v61 = 0;
    v65 = 1;
    if (v41 == v19) {
        goto lab_0x6d3;
    }
    goto lab_0x28f_2;
  lab_0x250:
    // 0x250
    v31 = v33 + 1;
    if (v33 == tsteps) {
        // break -> 0x6d3
        goto lab_0x6d3;
    }
    goto lab_0x265;
  lab_0x5d0:;
    int128_t v98 = __asm_movsd(*(int64_t *)v63); // 0x5d0
    int128_t v99 = __asm_movsd(*(int64_t *)v74); // 0x5ea
    int128_t v100 = v98; // 0x5ea
    int64_t v101 = 1; // 0x5ea
    goto lab_0x5f0;
  lab_0x5f0:;
    int128_t v102 = __asm_addsd(__asm_mulsd(v100, v16), v17); // 0x5f5
    int128_t v103 = __asm_divsd(__asm_movapd(v22), v102); // 0x5ff
    int64_t v104 = __asm_movsd_1(v103); // 0x608
    int64_t v105 = 8 * v101; // 0x608
    *(int64_t *)(v105 + v69) = v104;
    int64_t v106 = v105 + v3;
    int128_t v107 = __asm_mulsd(__asm_movsd(*(int64_t *)(v106 + v66)), v25); // 0x622
    int128_t v108 = __asm_addsd(__asm_mulsd(__asm_movsd(*(int64_t *)(v106 + 0x1f40 * v72)), v21), v107); // 0x632
    int128_t v109 = __asm_addsd(__asm_mulsd(__asm_movsd(*(int64_t *)(v106 + 0x1f40 * v73)), v21), v108); // 0x64c
    int128_t v110 = __asm_divsd(__asm_addsd(__asm_mulsd(v99, v22), v109), v102); // 0x65b
    *(int64_t *)(v105 + v71) = __asm_movsd_1(v110);
    int64_t v111 = v101 + 1; // 0x66a
    v99 = v110;
    v100 = __asm_movapd(v103);
    v101 = v111;
    int64_t v112; // 0x160
    if (v111 != v19) {
        goto lab_0x5f0;
    } else {
        // 0x6a0
        *(int64_t *)(v67 + v30) = 0x3ff0000000000000;
        v112 = v29;
        goto lab_0x6a0_2;
    }
  lab_0x530_2:;
    int64_t v113 = 8 * v75; // 0x534
    int64_t v114 = v113 + v69;
    int128_t v115 = __asm_addsd(__asm_mulsd(__asm_movsd(*(int64_t *)(v114 - 8)), v16), v17); // 0x540
    *(int64_t *)v114 = __asm_movsd_1(__asm_divsd(__asm_movapd(v22), v115));
    int64_t v116 = v113 + v3;
    int128_t v117 = __asm_mulsd(__asm_movsd(*(int64_t *)(v116 + v66)), v25); // 0x569
    int128_t v118 = __asm_addsd(__asm_mulsd(__asm_movsd(*(int64_t *)(v116 + 0x1f40 * v72)), v21), v117); // 0x579
    int128_t v119 = __asm_addsd(__asm_mulsd(__asm_movsd(*(int64_t *)(v116 + 0x1f40 * v73)), v21), v118); // 0x593
    int64_t v120 = v113 + v71;
    int128_t v121 = __asm_movsd(*(int64_t *)(v120 - 8)); // 0x59c
    *(int64_t *)v120 = __asm_movsd_1(__asm_divsd(__asm_addsd(__asm_mulsd(v121, v22), v119), v115));
    int64_t v122 = v75 + 1; // 0x5b8
    v75 = v122;
    if (v122 != v19) {
        goto lab_0x530_2;
    } else {
        // 0x6a0
        *(int64_t *)(v67 + v30) = 0x3ff0000000000000;
        v112 = v29;
        goto lab_0x6a0_2;
    }
  lab_0x6a0_2:;
    int64_t v123 = v112;
    int64_t v124 = 8 * v123; // 0x6a4
    int128_t v125 = __asm_movsd(*(int64_t *)(v124 + v69)); // 0x6a4
    int64_t v126 = v124 + v67;
    int128_t v127 = __asm_mulsd_2(v125, *(int64_t *)(v126 + 8)); // 0x6ae
    *(int64_t *)v126 = __asm_movsd_1(__asm_addsd_3(v127, *(int64_t *)(v124 + v71)));
    v112 = v123 - 1;
    if (v123 > 1) {
        goto lab_0x6a0_2;
    } else {
        // 0x4b0
        v61++;
        v65 = v73;
        if (v73 == v19) {
            goto lab_0x250;
        } else {
            goto lab_0x6d3;
        }
    }
}
