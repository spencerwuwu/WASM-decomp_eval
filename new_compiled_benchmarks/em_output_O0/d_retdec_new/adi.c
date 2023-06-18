
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "adi.h"
void kernel_adi(int32_t tsteps, int32_t n, float64_t (*u)[1], float64_t (*v)[1], float64_t (*p)[1], float64_t (*q)[1]) {
    int64_t v1 = __asm_movsd_1(__asm_divsd(__asm_movsd(0x3ff0000000000000), __asm_cvtsi2sd(n))); // 0x1ef
    int64_t v2 = __asm_movsd_1(__asm_divsd(__asm_movsd(0x3ff0000000000000), __asm_cvtsi2sd(n))); // 0x205
    int64_t v3 = __asm_movsd_1(__asm_divsd(__asm_movsd(0x3ff0000000000000), __asm_cvtsi2sd(tsteps))); // 0x21b
    int64_t v4 = __asm_movsd_1(__asm_movsd(0x4000000000000000)); // 0x228
    int64_t v5 = __asm_movsd_1(__asm_movsd(0x3ff0000000000000)); // 0x235
    int64_t v6 = __asm_movsd_1(__asm_divsd(__asm_mulsd(__asm_movsd(v4), v3), __asm_mulsd(__asm_movsd(v1), v1))); // 0x252
    int64_t v7 = __asm_movsd_1(__asm_divsd(__asm_mulsd(__asm_movsd(v5), v3), __asm_mulsd(__asm_movsd(v2), v2))); // 0x26f
    int128_t v8 = __asm_movq_2(__asm_movq(__asm_movsd(v6)) ^ -0x8000000000000000); // 0x28b
    int64_t v9 = __asm_movsd_1(__asm_divsd(v8, __asm_movsd(0x4000000000000000))); // 0x29c
    int64_t v10 = __asm_movsd_1(__asm_addsd(__asm_movsd(0x3ff0000000000000), v6)); // 0x2ae
    int64_t v11 = __asm_movsd_1(__asm_movsd(v9)); // 0x2b8
    int128_t v12 = __asm_movq_2(__asm_movq(__asm_movsd(v7)) ^ -0x8000000000000000); // 0x2d7
    int64_t v13 = __asm_movsd_1(__asm_divsd(v12, __asm_movsd(0x4000000000000000))); // 0x2e8
    int64_t v14 = __asm_movsd_1(__asm_addsd(__asm_movsd(0x3ff0000000000000), v7)); // 0x2fd
    int64_t v15 = __asm_movsd_1(__asm_movsd(v13)); // 0x30d
    if (tsteps < 1) {
        // 0x9aa
        return;
    }
    int32_t v16 = n - 1; // 0x335
    int64_t v17 = (int64_t)v;
    int64_t v18 = (int64_t)p;
    int64_t v19 = 0x100000000 * (int64_t)q >> 32;
    int64_t v20 = (int64_t)u;
    int32_t v21 = n - 2;
    int32_t v22 = 1; // 0x99f
    int32_t v23; // 0x1c0
    while (true) {
      lab_0x32f:;
        int32_t v24 = 1; // 0x33a
        if (v16 > 1) {
            while (true) {
                int64_t v25 = v24; // 0x344
                int128_t v26 = __asm_movsd(0x3ff0000000000000); // 0x348
                int64_t v27 = __asm_movsd_1(v26); // 0x350
                int64_t v28 = 8 * v25; // 0x350
                int64_t v29 = v28 + v17;
                int64_t * v30 = (int64_t *)v29; // 0x350
                *v30 = v27;
                int64_t v31 = 0x1f40 * v25; // 0x35d
                int64_t v32 = v31 + v18; // 0x364
                *(int64_t *)v32 = __asm_movsd_1(__asm_xorps(v26, v26));
                int64_t v33 = v31 + v19; // 0x38a
                *(int64_t *)v33 = __asm_movsd_1(__asm_movsd(*v30));
                int32_t v34 = v24 + 1;
                int32_t v35 = 1; // 0x572
                int128_t v36 = __asm_movq_2(__asm_movq(__asm_movsd(v11)) ^ -0x8000000000000000); // 0x3c3
                int128_t v37 = __asm_movsd(v9); // 0x3c8
                int64_t v38 = 8 * (int64_t)(v35 - 1); // 0x3e8
                int64_t * v39 = (int64_t *)(v38 + v32); // 0x3e8
                int128_t v40 = __asm_addsd_4(__asm_mulsd_3(v37, __asm_movsd(*v39)), __asm_movsd(v10)); // 0x3f6
                int64_t v41 = v35; // 0x410
                int64_t v42 = __asm_movsd_1(__asm_divsd(v36, v40)); // 0x414
                int64_t v43 = 8 * v41; // 0x414
                *(int64_t *)(v43 + v32) = v42;
                int128_t v44 = __asm_movq_2(__asm_movq(__asm_movsd(v13)) ^ -0x8000000000000000); // 0x433
                int64_t v45 = 0x1f40 * v41 + v20; // 0x447
                int128_t v46 = __asm_movsd(*(int64_t *)(v45 + 8 * (int64_t)(v24 - 1))); // 0x453
                int128_t v47 = __asm_movsd(v13); // 0x458
                int128_t v48 = __asm_addsd_4(__asm_addsd_4(v47, v47), __asm_movsd(0x3ff0000000000000)); // 0x46c
                int128_t v49 = __asm_addsd_4(__asm_mulsd_3(v44, v46), __asm_mulsd(v48, *(int64_t *)(v45 + v28))); // 0x48f
                int128_t v50 = __asm_movsd(v15); // 0x493
                int128_t v51 = __asm_movsd(*(int64_t *)(v45 + 8 * (int64_t)v34)); // 0x4b6
                int128_t v52 = __asm_addsd_4(__asm_mulsd_3(__asm_movq_2(__asm_movq(v50) ^ -0x8000000000000000), v51), v49); // 0x4d6
                int128_t v53 = __asm_movsd(v9); // 0x4da
                int128_t v54 = __asm_movsd(*(int64_t *)(v38 + v33)); // 0x4fa
                int128_t v55 = __asm_addsd_4(__asm_mulsd_3(__asm_movq_2(__asm_movq(v53) ^ -0x8000000000000000), v54), v52); // 0x51a
                int128_t v56 = __asm_addsd_4(__asm_mulsd_3(__asm_movsd(v9), __asm_movsd(*v39)), __asm_movsd(v10)); // 0x54c
                *(int64_t *)(v43 + v33) = __asm_movsd_1(__asm_divsd(v55, v56));
                v35++;
                while (v35 != v16) {
                    // 0x3a9
                    v36 = __asm_movq_2(__asm_movq(__asm_movsd(v11)) ^ -0x8000000000000000);
                    v37 = __asm_movsd(v9);
                    v38 = 8 * (int64_t)(v35 - 1);
                    v39 = (int64_t *)(v38 + v32);
                    v40 = __asm_addsd_4(__asm_mulsd_3(v37, __asm_movsd(*v39)), __asm_movsd(v10));
                    v41 = v35;
                    v42 = __asm_movsd_1(__asm_divsd(v36, v40));
                    v43 = 8 * v41;
                    *(int64_t *)(v43 + v32) = v42;
                    v44 = __asm_movq_2(__asm_movq(__asm_movsd(v13)) ^ -0x8000000000000000);
                    v45 = 0x1f40 * v41 + v20;
                    v46 = __asm_movsd(*(int64_t *)(v45 + 8 * (int64_t)(v24 - 1)));
                    v47 = __asm_movsd(v13);
                    v48 = __asm_addsd_4(__asm_addsd_4(v47, v47), __asm_movsd(0x3ff0000000000000));
                    v49 = __asm_addsd_4(__asm_mulsd_3(v44, v46), __asm_mulsd(v48, *(int64_t *)(v45 + v28)));
                    v50 = __asm_movsd(v15);
                    v51 = __asm_movsd(*(int64_t *)(v45 + 8 * (int64_t)v34));
                    v52 = __asm_addsd_4(__asm_mulsd_3(__asm_movq_2(__asm_movq(v50) ^ -0x8000000000000000), v51), v49);
                    v53 = __asm_movsd(v9);
                    v54 = __asm_movsd(*(int64_t *)(v38 + v33));
                    v55 = __asm_addsd_4(__asm_mulsd_3(__asm_movq_2(__asm_movq(v53) ^ -0x8000000000000000), v54), v52);
                    v56 = __asm_addsd_4(__asm_mulsd_3(__asm_movsd(v9), __asm_movsd(*v39)), __asm_movsd(v10));
                    *(int64_t *)(v43 + v33) = __asm_movsd_1(__asm_divsd(v55, v56));
                    v35++;
                }
                // 0x57d
                *(int64_t *)(v29 + 0x1f40 * (int64_t)v16) = __asm_movsd_1(__asm_movsd(0x3ff0000000000000));
                int64_t v57 = v21; // 0x5b2
                if (v21 >= 1) {
                    int64_t v58 = 8 * v57; // 0x5ce
                    int128_t v59 = __asm_movsd(*(int64_t *)(v58 + v32)); // 0x5ce
                    int64_t v60 = *(int64_t *)(0x1f40 * (0x100000000 * v57 + 0x100000000 >> 32) + v29); // 0x5ee
                    int128_t v61 = __asm_movsd(v60); // 0x5ee
                    int128_t v62 = __asm_movsd(*(int64_t *)(v58 + v33)); // 0x609
                    int64_t v63 = __asm_movsd_1(__asm_addsd_4(__asm_mulsd_3(v59, v61), v62)); // 0x62c
                    *(int64_t *)(0x1f40 * v57 + v29) = v63;
                    int32_t v64 = v21 - 1; // 0x634
                    v57--;
                    int32_t v65 = v64; // 0x5b2
                    while (v64 >= 1) {
                        // 0x5b8
                        v58 = 8 * v57;
                        v59 = __asm_movsd(*(int64_t *)(v58 + v32));
                        v60 = *(int64_t *)(0x1f40 * (0x100000000 * v57 + 0x100000000 >> 32) + v29);
                        v61 = __asm_movsd(v60);
                        v62 = __asm_movsd(*(int64_t *)(v58 + v33));
                        v63 = __asm_movsd_1(__asm_addsd_4(__asm_mulsd_3(v59, v61), v62));
                        *(int64_t *)(0x1f40 * v57 + v29) = v63;
                        v64 = v65 - 1;
                        v57--;
                        v65 = v64;
                    }
                }
                // 0x644
                v24 = v34;
                v23 = 1;
                if (v34 == v16) {
                    goto lab_0x9aa;
                }
            }
        }
        goto lab_0x99c;
    }
  lab_0x9aa:;
    int64_t v66 = 0x1f40 * (int64_t)v23; // 0x672
    int128_t v67 = __asm_movsd(0x3ff0000000000000); // 0x67c
    int64_t v68 = __asm_movsd_1(v67); // 0x684
    int64_t * v69 = (int64_t *)(v66 + v20); // 0x684
    *v69 = v68;
    int64_t v70 = v66 + v18; // 0x697
    *(int64_t *)v70 = __asm_movsd_1(__asm_xorps(v67, v67));
    int64_t v71 = v66 + v19; // 0x6c6
    *(int64_t *)v71 = __asm_movsd_1(__asm_movsd(*v69));
    int64_t v72 = 0x1f40 * (int64_t)(v23 - 1);
    int64_t v73 = 0x1f40 * (int64_t)(v23 + 1);
    int32_t v74 = 1; // 0x1c0
    goto lab_0x6e5_2;
  lab_0x99c:
    // 0x99c
    v22++;
    if (v22 > tsteps) {
        // break -> 0x9aa
        goto lab_0x9aa;
    }
    goto lab_0x32f;
  lab_0x6e5_2:;
    int128_t v75 = __asm_movq_2(__asm_movq(__asm_movsd(v15)) ^ -0x8000000000000000); // 0x6ff
    int128_t v76 = __asm_movsd(v13); // 0x704
    int64_t v77 = 8 * (int64_t)(v74 - 1); // 0x727
    int64_t * v78 = (int64_t *)(v77 + v70); // 0x727
    int128_t v79 = __asm_addsd_4(__asm_mulsd_3(v76, __asm_movsd(*v78)), __asm_movsd(v14)); // 0x738
    int64_t v80 = __asm_movsd_1(__asm_divsd(v75, v79)); // 0x756
    int64_t v81 = 8 * (int64_t)v74; // 0x756
    *(int64_t *)(v81 + v70) = v80;
    int128_t v82 = __asm_movq_2(__asm_movq(__asm_movsd(v9)) ^ -0x8000000000000000); // 0x772
    int64_t v83 = v81 + v17;
    int128_t v84 = __asm_movsd(*(int64_t *)(v83 + v72)); // 0x792
    int128_t v85 = __asm_movsd(v9); // 0x797
    int128_t v86 = __asm_addsd_4(__asm_addsd_4(v85, v85), __asm_movsd(0x3ff0000000000000)); // 0x7a8
    int128_t v87 = __asm_addsd_4(__asm_mulsd_3(v82, v84), __asm_mulsd(v86, *(int64_t *)(v83 + v66))); // 0x7cb
    int128_t v88 = __asm_movsd(v11); // 0x7cf
    int128_t v89 = __asm_movsd(*(int64_t *)(v83 + v73)); // 0x7f2
    int128_t v90 = __asm_addsd_4(__asm_mulsd_3(__asm_movq_2(__asm_movq(v88) ^ -0x8000000000000000), v89), v87); // 0x812
    int128_t v91 = __asm_movsd(v13); // 0x816
    int128_t v92 = __asm_movsd(*(int64_t *)(v77 + v71)); // 0x839
    int128_t v93 = __asm_addsd_4(__asm_mulsd_3(__asm_movq_2(__asm_movq(v91) ^ -0x8000000000000000), v92), v90); // 0x859
    int128_t v94 = __asm_addsd_4(__asm_mulsd_3(__asm_movsd(v13), __asm_movsd(*v78)), __asm_movsd(v14)); // 0x891
    *(int64_t *)(v81 + v71) = __asm_movsd_1(__asm_divsd(v93, v94));
    int32_t v95 = v74 + 1; // 0x8b7
    v74 = v95;
    int64_t v96; // 0x1c0
    int32_t v97; // 0x1c0
    int64_t v98; // 0x679
    if (v95 == v16) {
        // 0x8c2
        int64_t v99; // 0x1c0
        *(int64_t *)(v98 + 8 * v99) = __asm_movsd_1(__asm_movsd(0x3ff0000000000000));
        int64_t v100; // 0x1c0
        v96 = v100;
        v97 = v21;
        if (v21 < 1) {
            goto lab_0x989;
        } else {
            goto lab_0x8fd;
        }
    } else {
        goto lab_0x6e5_2;
    }
  lab_0x989:;
    // 0x989
    int32_t v101; // 0x1c0
    v23 = v101;
    if (v101 == v16) {
        goto lab_0x99c;
    } else {
        goto lab_0x9aa;
    }
  lab_0x8fd:;
    int64_t v102 = 8 * v96; // 0x913
    int128_t v103 = __asm_movsd(*(int64_t *)(v102 + v70)); // 0x913
    int128_t v104 = __asm_movsd(*(int64_t *)((0x100000000 * v96 + 0x100000000 >> 29) + v98)); // 0x933
    int128_t v105 = __asm_movsd(*(int64_t *)(v102 + v71)); // 0x94e
    *(int64_t *)(v102 + v98) = __asm_movsd_1(__asm_addsd_4(__asm_mulsd_3(v103, v104), v105));
    int32_t v106 = v97 - 1; // 0x979
    v96--;
    v97 = v106;
    if (v106 < 1) {
        goto lab_0x989;
    } else {
        goto lab_0x8fd;
    }
}
