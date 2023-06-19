
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "lu.h"
int64_t kernel_lu(int64_t a1, int64_t a2, int64_t a3) {
    if ((int32_t)a1 < 1) {
        // 0x1ef
        int64_t result; // 0x0
        return result;
    }
    int64_t v1 = a1 & 0xffffffff; // 0x15
    int64_t v2 = 0; // 0x19
    int64_t v3; // 0x0
    int64_t v4; // 0x0
    int64_t v5; // 0x0
    int64_t v6; // 0x0
    int64_t v7; // 0x0
    int64_t * v8; // 0x14f
    int128_t v9; // 0x0
    while (true) {
        int64_t v10 = v2;
        v3 = 0x3e80 * v10 + a2;
        if (v10 != 0) {
            int64_t * v11 = (int64_t *)v3;
            int64_t v12 = 0;
            int64_t * v13; // 0x0
            int64_t v14; // 0x0
            int64_t v15; // 0x0
            int64_t v16; // 0x0
            int64_t * v17; // 0x0
            int128_t v18; // 0x7f
            int64_t v19; // 0x0
            int128_t v20; // 0xa0
            int128_t v21; // 0xb6
            int64_t v22; // 0xc2
            int128_t v23; // 0xc6
            int128_t v24; // 0xdc
            int64_t v25; // 0xe9
            int128_t v26; // 0xfc
            int64_t v27; // 0x10c
            int128_t v28; // 0x112
            int128_t v29; // 0x0
            int128_t v30; // 0x0
            int128_t v31; // 0x0
            if (v12 == 0) {
                // 0x50
                v13 = v11;
                v14 = 0;
                v29 = __asm_movsd(*v11);
            } else {
                // 0x7b
                v16 = 8 * v12;
                v17 = (int64_t *)(v16 + v3);
                v18 = __asm_movsd(*v17);
                v30 = v18;
                v15 = 0;
                if (v12 != 1) {
                    // 0x90
                    v19 = v16 + a2;
                    v25 = 0;
                    v20 = __asm_movsd(*(int64_t *)(8 * v25 + v3));
                    v21 = __asm_subsd(v18, __asm_mulsd(v20, *(int64_t *)(0x3e80 * v25 + v19)));
                    *v17 = __asm_movsd_1(v21);
                    v22 = v25 | 1;
                    v23 = __asm_movsd(*(int64_t *)(8 * v22 + v3));
                    v24 = __asm_subsd(v21, __asm_mulsd(v23, *(int64_t *)(0x3e80 * v22 + v19)));
                    *v17 = __asm_movsd_1(v24);
                    v25 += 2;
                    v30 = v24;
                    v15 = v25;
                    while (v25 != (v12 & 0x7ffffffffffffffe)) {
                        // 0xa0
                        v20 = __asm_movsd(*(int64_t *)(8 * v25 + v3));
                        v21 = __asm_subsd(v24, __asm_mulsd(v20, *(int64_t *)(0x3e80 * v25 + v19)));
                        *v17 = __asm_movsd_1(v21);
                        v22 = v25 | 1;
                        v23 = __asm_movsd(*(int64_t *)(8 * v22 + v3));
                        v24 = __asm_subsd(v21, __asm_mulsd(v23, *(int64_t *)(0x3e80 * v22 + v19)));
                        *v17 = __asm_movsd_1(v24);
                        v25 += 2;
                        v30 = v24;
                        v15 = v25;
                    }
                }
                // 0xf2
                v31 = v30;
                v13 = v17;
                v14 = v16;
                v29 = v31;
                if ((v12 & 1) != 0) {
                    // 0xfc
                    v26 = __asm_movsd(*(int64_t *)(8 * v15 + v3));
                    v27 = *(int64_t *)(v16 + a2 + 0x3e80 * v15);
                    v28 = __asm_subsd(v31, __asm_mulsd(v26, v27));
                    *v17 = __asm_movsd_1(v28);
                    v13 = v17;
                    v14 = v16;
                    v29 = v28;
                }
            }
            int64_t v32 = *(int64_t *)(0x3e80 * v12 + a2 + v14); // 0x5e
            *v13 = __asm_movsd_1(__asm_divsd_7(v29, v32));
            int64_t v33 = v12 + 1; // 0x6a
            while (v33 != v10) {
                // 0x76
                v12 = v33;
                if (v12 == 0) {
                    // 0x50
                    v13 = v11;
                    v14 = 0;
                    v29 = __asm_movsd(*v11);
                } else {
                    // 0x7b
                    v16 = 8 * v12;
                    v17 = (int64_t *)(v16 + v3);
                    v18 = __asm_movsd(*v17);
                    v30 = v18;
                    v15 = 0;
                    if (v12 != 1) {
                        // 0x90
                        v19 = v16 + a2;
                        v25 = 0;
                        v20 = __asm_movsd(*(int64_t *)(8 * v25 + v3));
                        v21 = __asm_subsd(v18, __asm_mulsd(v20, *(int64_t *)(0x3e80 * v25 + v19)));
                        *v17 = __asm_movsd_1(v21);
                        v22 = v25 | 1;
                        v23 = __asm_movsd(*(int64_t *)(8 * v22 + v3));
                        v24 = __asm_subsd(v21, __asm_mulsd(v23, *(int64_t *)(0x3e80 * v22 + v19)));
                        *v17 = __asm_movsd_1(v24);
                        v25 += 2;
                        v30 = v24;
                        v15 = v25;
                        while (v25 != (v12 & 0x7ffffffffffffffe)) {
                            // 0xa0
                            v20 = __asm_movsd(*(int64_t *)(8 * v25 + v3));
                            v21 = __asm_subsd(v24, __asm_mulsd(v20, *(int64_t *)(0x3e80 * v25 + v19)));
                            *v17 = __asm_movsd_1(v21);
                            v22 = v25 | 1;
                            v23 = __asm_movsd(*(int64_t *)(8 * v22 + v3));
                            v24 = __asm_subsd(v21, __asm_mulsd(v23, *(int64_t *)(0x3e80 * v22 + v19)));
                            *v17 = __asm_movsd_1(v24);
                            v25 += 2;
                            v30 = v24;
                            v15 = v25;
                        }
                    }
                    // 0xf2
                    v31 = v30;
                    v13 = v17;
                    v14 = v16;
                    v29 = v31;
                    if ((v12 & 1) != 0) {
                        // 0xfc
                        v26 = __asm_movsd(*(int64_t *)(8 * v15 + v3));
                        v27 = *(int64_t *)(v16 + a2 + 0x3e80 * v15);
                        v28 = __asm_subsd(v31, __asm_mulsd(v26, v27));
                        *v17 = __asm_movsd_1(v28);
                        v13 = v17;
                        v14 = v16;
                        v29 = v28;
                    }
                }
                // 0x54
                v32 = *(int64_t *)(0x3e80 * v12 + a2 + v14);
                *v13 = __asm_movsd_1(__asm_divsd_7(v29, v32));
                v33 = v12 + 1;
            }
        }
        int64_t v34 = v10 & 0x7ffffffffffffffe; // 0x123
        v6 = v10;
        while (true) {
          lab_0x13c:
            // 0x13c
            v7 = v6;
            if (v10 == 0) {
                goto lab_0x130;
            } else {
                int64_t v35 = 8 * v7; // 0x14b
                v8 = (int64_t *)(v35 + v3);
                int128_t v36 = __asm_movsd(*v8); // 0x14f
                v4 = v35 + a2;
                int128_t v37 = v36; // 0x164
                int64_t v38 = 0; // 0x164
                v5 = 0;
                v9 = v36;
                if (v10 == 1) {
                    goto lab_0x1cb;
                } else {
                    int128_t v39 = __asm_movsd(*(int64_t *)(8 * v38 + v3)); // 0x170
                    int128_t v40 = __asm_subsd(v37, __asm_mulsd(v39, *(int64_t *)(0x3e80 * v38 + v4))); // 0x186
                    *v8 = __asm_movsd_1(v40);
                    int64_t v41 = v38 | 1; // 0x192
                    int128_t v42 = __asm_movsd(*(int64_t *)(8 * v41 + v3)); // 0x196
                    int128_t v43 = __asm_subsd(v40, __asm_mulsd(v42, *(int64_t *)(0x3e80 * v41 + v4))); // 0x1ac
                    *v8 = __asm_movsd_1(v43);
                    int64_t v44 = v38 + 2; // 0x1b9
                    v37 = v43;
                    v38 = v44;
                    while (v44 != v34) {
                        // 0x170
                        v39 = __asm_movsd(*(int64_t *)(8 * v38 + v3));
                        v40 = __asm_subsd(v37, __asm_mulsd(v39, *(int64_t *)(0x3e80 * v38 + v4)));
                        *v8 = __asm_movsd_1(v40);
                        v41 = v38 | 1;
                        v42 = __asm_movsd(*(int64_t *)(8 * v41 + v3));
                        v43 = __asm_subsd(v40, __asm_mulsd(v42, *(int64_t *)(0x3e80 * v41 + v4)));
                        *v8 = __asm_movsd_1(v43);
                        v44 = v38 + 2;
                        v37 = v43;
                        v38 = v44;
                    }
                    // 0x1c2
                    v5 = v44;
                    v9 = v43;
                    if ((v10 & 1) == 0) {
                        goto lab_0x130;
                    } else {
                        goto lab_0x1cb;
                    }
                }
            }
        }
      lab_0x20:
        // 0x20
        v2 = v10 + 1;
        if (v2 == v1) {
            // break -> 0x1ef
            break;
        }
    }
    // 0x1ef
    return 0x7ffffffffffffffe;
  lab_0x130:;
    int64_t v45 = v7 + 1; // 0x130
    v6 = v45;
    if (v45 == v1) {
        // break -> 0x20
        goto lab_0x20;
    }
    goto lab_0x13c;
  lab_0x1cb:;
    int128_t v46 = __asm_movsd(*(int64_t *)(8 * v5 + v3)); // 0x1cb
    int128_t v47 = __asm_mulsd(v46, *(int64_t *)(0x3e80 * v5 + v4)); // 0x1db
    *v8 = __asm_movsd_1(__asm_subsd(v9, v47));
    goto lab_0x130;
}
