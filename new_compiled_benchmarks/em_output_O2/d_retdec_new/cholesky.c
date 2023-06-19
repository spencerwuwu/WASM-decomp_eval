
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "cholesky.h"
int64_t kernel_cholesky(int64_t a1, int64_t a2) {
    // 0x0
    int128_t v1; // 0x0
    int128_t v2 = v1;
    int64_t result; // 0x0
    if ((int32_t)a1 < 1) {
        // 0x1ed
        return result;
    }
    int128_t v3 = __asm_xorpd(v2, v2); // 0x28
    int64_t v4 = a2; // 0x28
    int64_t v5 = 0; // 0x28
    int64_t v6; // 0x0
    int64_t v7; // 0x0
    int64_t * v8; // 0x0
    int64_t v9; // 0x0
    int64_t v10; // 0x0
    int64_t v11; // 0x0
    int128_t v12; // 0x0
    int128_t v13; // 0x0
    int128_t v14; // 0x0
    while (true) {
      lab_0x54:
        // 0x54
        v10 = v5;
        int64_t v15 = v4;
        v14 = v3;
        if (v10 == 0) {
            int128_t v16 = __asm_movsd(v15); // 0x160
            __asm_ucomisd(v16, v14);
            v9 = 0;
            v11 = v15;
            v13 = v16;
            v6 = a2;
            goto lab_0x1e4;
        } else {
            uint64_t v17 = 0x3e80 * v10;
            int64_t v18 = v17 + a2;
            int64_t * v19 = (int64_t *)v18;
            int64_t v20 = v15; // 0x69
            int64_t v21 = 0;
            int64_t v22; // 0x0
            int64_t * v23; // 0x0
            int64_t v24; // 0x0
            int64_t v25; // 0x0
            int64_t v26; // 0x0
            int64_t v27; // 0x0
            int64_t * v28; // 0x0
            int128_t v29; // 0x9d
            int64_t v30; // 0x0
            int64_t v31; // 0xc0
            int128_t v32; // 0xc0
            int128_t v33; // 0xdd
            int64_t v34; // 0xe5
            int128_t v35; // 0xe9
            int128_t v36; // 0xf5
            int64_t v37; // 0xfd
            int64_t v38; // 0x113
            int128_t v39; // 0x113
            int64_t v40; // 0x122
            int128_t v41; // 0x127
            int128_t v42; // 0x0
            int128_t v43; // 0x0
            int128_t v44; // 0x0
            if (v21 == 0) {
                // 0x70
                v23 = v19;
                v22 = 0;
                v42 = __asm_movsd(*v19);
                v24 = v20;
            } else {
                // 0x99
                v27 = 8 * v21;
                v28 = (int64_t *)(v27 + v18);
                v29 = __asm_movsd(*v28);
                v43 = v29;
                v25 = 0;
                if (v21 != 1) {
                    // 0xb0
                    v30 = 0x3e80 * v21 + a2;
                    v37 = 0;
                    v31 = 8 * v37;
                    v32 = __asm_movsd(*(int64_t *)(v31 + v18));
                    v33 = __asm_subsd(v29, __asm_mulsd(v32, *(int64_t *)(v31 + v30)));
                    *v28 = __asm_movsd_1(v33);
                    v34 = v31 | 8;
                    v35 = __asm_movsd(*(int64_t *)(v34 + v18));
                    v36 = __asm_subsd(v33, __asm_mulsd(v35, *(int64_t *)(v34 + v30)));
                    *v28 = __asm_movsd_1(v36);
                    v37 += 2;
                    v43 = v36;
                    v25 = v37;
                    while (v37 != (v21 & 0x7ffffffffffffffe)) {
                        // 0xc0
                        v31 = 8 * v37;
                        v32 = __asm_movsd(*(int64_t *)(v31 + v18));
                        v33 = __asm_subsd(v36, __asm_mulsd(v32, *(int64_t *)(v31 + v30)));
                        *v28 = __asm_movsd_1(v33);
                        v34 = v31 | 8;
                        v35 = __asm_movsd(*(int64_t *)(v34 + v18));
                        v36 = __asm_subsd(v33, __asm_mulsd(v35, *(int64_t *)(v34 + v30)));
                        *v28 = __asm_movsd_1(v36);
                        v37 += 2;
                        v43 = v36;
                        v25 = v37;
                    }
                }
                // 0x10a
                v26 = v25;
                v44 = v43;
                v23 = v28;
                v22 = v27;
                v42 = v44;
                v24 = v26;
                if ((v21 & 1) != 0) {
                    // 0x113
                    v38 = 8 * v26;
                    v39 = __asm_movsd(*(int64_t *)(v38 + v18));
                    v40 = *(int64_t *)(0x3e80 * v21 + a2 + v38);
                    v41 = __asm_subsd(v44, __asm_mulsd(v39, v40));
                    *v28 = __asm_movsd_1(v41);
                    v23 = v28;
                    v22 = v27;
                    v42 = v41;
                    v24 = v26;
                }
            }
            int64_t v45 = v24;
            int64_t v46 = *(int64_t *)(0x3e80 * v21 + a2 + v22); // 0x7e
            *v23 = __asm_movsd_1(__asm_divsd_7(v42, v46));
            int64_t v47 = v21 + 1; // 0x88
            v20 = v45;
            while (v47 != v10) {
                // 0x94
                v21 = v47;
                if (v21 == 0) {
                    // 0x70
                    v23 = v19;
                    v22 = 0;
                    v42 = __asm_movsd(*v19);
                    v24 = v20;
                } else {
                    // 0x99
                    v27 = 8 * v21;
                    v28 = (int64_t *)(v27 + v18);
                    v29 = __asm_movsd(*v28);
                    v43 = v29;
                    v25 = 0;
                    if (v21 != 1) {
                        // 0xb0
                        v30 = 0x3e80 * v21 + a2;
                        v37 = 0;
                        v31 = 8 * v37;
                        v32 = __asm_movsd(*(int64_t *)(v31 + v18));
                        v33 = __asm_subsd(v29, __asm_mulsd(v32, *(int64_t *)(v31 + v30)));
                        *v28 = __asm_movsd_1(v33);
                        v34 = v31 | 8;
                        v35 = __asm_movsd(*(int64_t *)(v34 + v18));
                        v36 = __asm_subsd(v33, __asm_mulsd(v35, *(int64_t *)(v34 + v30)));
                        *v28 = __asm_movsd_1(v36);
                        v37 += 2;
                        v43 = v36;
                        v25 = v37;
                        while (v37 != (v21 & 0x7ffffffffffffffe)) {
                            // 0xc0
                            v31 = 8 * v37;
                            v32 = __asm_movsd(*(int64_t *)(v31 + v18));
                            v33 = __asm_subsd(v36, __asm_mulsd(v32, *(int64_t *)(v31 + v30)));
                            *v28 = __asm_movsd_1(v33);
                            v34 = v31 | 8;
                            v35 = __asm_movsd(*(int64_t *)(v34 + v18));
                            v36 = __asm_subsd(v33, __asm_mulsd(v35, *(int64_t *)(v34 + v30)));
                            *v28 = __asm_movsd_1(v36);
                            v37 += 2;
                            v43 = v36;
                            v25 = v37;
                        }
                    }
                    // 0x10a
                    v26 = v25;
                    v44 = v43;
                    v23 = v28;
                    v22 = v27;
                    v42 = v44;
                    v24 = v26;
                    if ((v21 & 1) != 0) {
                        // 0x113
                        v38 = 8 * v26;
                        v39 = __asm_movsd(*(int64_t *)(v38 + v18));
                        v40 = *(int64_t *)(0x3e80 * v21 + a2 + v38);
                        v41 = __asm_subsd(v44, __asm_mulsd(v39, v40));
                        *v28 = __asm_movsd_1(v41);
                        v23 = v28;
                        v22 = v27;
                        v42 = v41;
                        v24 = v26;
                    }
                }
                // 0x74
                v45 = v24;
                v46 = *(int64_t *)(0x3e80 * v21 + a2 + v22);
                *v23 = __asm_movsd_1(__asm_divsd_7(v42, v46));
                v47 = v21 + 1;
                v20 = v45;
            }
            int64_t v48 = 8 * v10;
            int64_t v49 = v18 + v48;
            int64_t * v50 = (int64_t *)v49;
            int128_t v51 = __asm_movsd(*v50); // 0x149
            int128_t v52 = v51; // 0x153
            int64_t v53 = 0; // 0x153
            int64_t v54 = v45; // 0x153
            if (v10 != 1) {
                int64_t v55 = v10 & 0x7ffffffffffffffe; // 0x169
                int64_t v56 = 0; // 0x16e
                int64_t v57 = 8 * v56; // 0x170
                int128_t v58 = __asm_movsd(*(int64_t *)(v57 + v18)); // 0x178
                int128_t v59 = __asm_subsd(v51, __asm_mulsd_8(v58, v58)); // 0x181
                *v50 = __asm_movsd_1(v59);
                int128_t v60 = __asm_movsd(*(int64_t *)((v57 | 8) + v18)); // 0x18d
                int128_t v61 = __asm_subsd(v59, __asm_mulsd_8(v60, v60)); // 0x197
                *v50 = __asm_movsd_1(v61);
                v56 += 2;
                v52 = v61;
                v53 = v56;
                v54 = v55;
                while (v56 != v55) {
                    // 0x170
                    v57 = 8 * v56;
                    v58 = __asm_movsd(*(int64_t *)(v57 + v18));
                    v59 = __asm_subsd(v61, __asm_mulsd_8(v58, v58));
                    *v50 = __asm_movsd_1(v59);
                    v60 = __asm_movsd(*(int64_t *)((v57 | 8) + v18));
                    v61 = __asm_subsd(v59, __asm_mulsd_8(v60, v60));
                    *v50 = __asm_movsd_1(v61);
                    v56 += 2;
                    v52 = v61;
                    v53 = v56;
                    v54 = v55;
                }
            }
            int64_t v62 = v54;
            int128_t v63 = v52;
            int128_t v64 = v63; // 0x1b0
            if ((v10 & 1) != 0) {
                int128_t v65 = __asm_movsd(*(int64_t *)(8 * v53 + v18)); // 0x1b2
                v64 = __asm_subsd(v63, __asm_mulsd_8(v65, v65));
                *v50 = __asm_movsd_1(v64);
            }
            int128_t v66 = v64;
            __asm_ucomisd(v66, v14);
            v9 = v48;
            v11 = v62;
            v13 = v66;
            v6 = v18;
            if (v18 < v17) {
                // 0x30
                sqrt();
                v8 = v50;
                v7 = v49;
                v4 = v62;
                v12 = v66;
                v3 = __asm_xorpd(v14, v14);
                goto lab_0x39;
            } else {
                goto lab_0x1e4;
            }
        }
    }
  lab_0x1ed:
    // 0x1ed
    return result;
  lab_0x1e4:;
    int64_t v67 = v6 + v9; // 0x41
    v8 = (int64_t *)v67;
    v7 = v67;
    v4 = v11;
    v12 = __asm_sqrtsd(v13);
    v3 = v14;
    goto lab_0x39;
  lab_0x39:
    // 0x39
    *v8 = __asm_movsd_1(v12);
    v5 = v10 + 1;
    result = v7;
    if (v5 == (a1 & 0xffffffff)) {
        // break -> 0x1ed
        goto lab_0x1ed;
    }
    goto lab_0x54;
}
