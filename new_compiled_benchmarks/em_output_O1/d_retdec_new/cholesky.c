
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
    if ((int32_t)a1 < 1) {
        // 0x11c
        int64_t result; // 0x0
        return result;
    }
    int128_t v3 = __asm_xorpd(v2, v2); // 0x1d
    int64_t v4 = 0;
    int128_t v5 = v3;
    uint64_t v6 = 0x3e80 * v4;
    int64_t v7 = v6 + a2;
    int64_t * v8; // 0x64
    int64_t * v9; // 0x103
    int64_t v10; // 0x0
    int64_t v11; // 0x0
    int64_t * v12; // 0x0
    int64_t result2; // 0x0
    int64_t * v13; // 0x0
    int64_t v14; // 0x0
    int64_t v15; // 0x0
    int64_t v16; // 0x0
    int64_t v17; // 0x0
    int128_t v18; // 0x64
    int64_t v19; // 0x69
    int64_t v20; // 0x73
    int64_t v21; // 0xa0
    int128_t v22; // 0xa0
    int128_t v23; // 0xb4
    int64_t v24; // 0xb8
    int64_t v25; // 0xbc
    int64_t v26; // 0x0
    int64_t * v27; // 0x0
    int128_t v28; // 0xe0
    int128_t v29; // 0xe9
    int64_t v30; // 0xed
    int64_t v31; // 0xf1
    int64_t v32; // 0x0
    int64_t * v33; // 0x0
    if (v4 == 0) {
        // 0x3d
        v9 = (int64_t *)v7;
        v15 = *v9;
        v13 = v9;
        result2 = v7;
    } else {
        v16 = 0;
        if (v16 == 0) {
            // 0x7b
            v8 = (int64_t *)v7;
            v14 = *v8;
            v12 = v8;
            v11 = 0;
            v10 = a2;
        } else {
            // 0x80
            v32 = 8 * v16;
            v33 = (int64_t *)(v32 + v7);
            v17 = 0x3e80 * v16 + a2;
            v23 = __asm_movsd(*v33);
            v25 = 0;
            v21 = 8 * v25;
            v22 = __asm_movsd(*(int64_t *)(v21 + v7));
            v23 = __asm_subsd(v23, __asm_mulsd(v22, *(int64_t *)(v21 + v17)));
            v24 = __asm_movsd_1(v23);
            *v33 = v24;
            v25++;
            v14 = v24;
            v12 = v33;
            v11 = v32;
            v10 = v17;
            while (v25 != v16) {
                // 0xa0
                v21 = 8 * v25;
                v22 = __asm_movsd(*(int64_t *)(v21 + v7));
                v23 = __asm_subsd(v23, __asm_mulsd(v22, *(int64_t *)(v21 + v17)));
                v24 = __asm_movsd_1(v23);
                *v33 = v24;
                v25++;
                v14 = v24;
                v12 = v33;
                v11 = v32;
                v10 = v17;
            }
        }
        // 0x50
        v18 = __asm_movsd(v14);
        v19 = *(int64_t *)(v10 + v11);
        *v12 = __asm_movsd_1(__asm_divsd_3(v18, v19));
        v20 = v16 + 1;
        while (v20 != v4) {
            // 0x7b
            v16 = v20;
            if (v16 == 0) {
                // 0x7b
                v8 = (int64_t *)v7;
                v14 = *v8;
                v12 = v8;
                v11 = 0;
                v10 = a2;
            } else {
                // 0x80
                v32 = 8 * v16;
                v33 = (int64_t *)(v32 + v7);
                v17 = 0x3e80 * v16 + a2;
                v23 = __asm_movsd(*v33);
                v25 = 0;
                v21 = 8 * v25;
                v22 = __asm_movsd(*(int64_t *)(v21 + v7));
                v23 = __asm_subsd(v23, __asm_mulsd(v22, *(int64_t *)(v21 + v17)));
                v24 = __asm_movsd_1(v23);
                *v33 = v24;
                v25++;
                v14 = v24;
                v12 = v33;
                v11 = v32;
                v10 = v17;
                while (v25 != v16) {
                    // 0xa0
                    v21 = 8 * v25;
                    v22 = __asm_movsd(*(int64_t *)(v21 + v7));
                    v23 = __asm_subsd(v23, __asm_mulsd(v22, *(int64_t *)(v21 + v17)));
                    v24 = __asm_movsd_1(v23);
                    *v33 = v24;
                    v25++;
                    v14 = v24;
                    v12 = v33;
                    v11 = v32;
                    v10 = v17;
                }
            }
            // 0x50
            v18 = __asm_movsd(v14);
            v19 = *(int64_t *)(v10 + v11);
            *v12 = __asm_movsd_1(__asm_divsd_3(v18, v19));
            v20 = v16 + 1;
        }
        // 0xd0
        v26 = v7 + 8 * v4;
        v27 = (int64_t *)v26;
        v29 = __asm_movsd(*v27);
        v31 = 0;
        v28 = __asm_movsd(*(int64_t *)(8 * v31 + v7));
        v29 = __asm_subsd(v29, __asm_mulsd_4(v28, v28));
        v30 = __asm_movsd_1(v29);
        *v27 = v30;
        v31++;
        v15 = v30;
        v13 = v27;
        result2 = v26;
        while (v31 != v4) {
            // 0xe0
            v28 = __asm_movsd(*(int64_t *)(8 * v31 + v7));
            v29 = __asm_subsd(v29, __asm_mulsd_4(v28, v28));
            v30 = __asm_movsd_1(v29);
            *v27 = v30;
            v31++;
            v15 = v30;
            v13 = v27;
            result2 = v26;
        }
    }
    int128_t v34 = __asm_movsd(v15); // 0x103
    __asm_ucomisd(v34, v5);
    int128_t v35; // 0x0
    if (v7 < v6) {
        // 0x20
        sqrt();
        v35 = v34;
        v3 = __asm_xorpd(v5, v5);
    } else {
        // 0x113
        v35 = __asm_sqrtsd(v34);
        v3 = v5;
    }
    // 0x29
    *v13 = __asm_movsd_1(v35);
    int64_t v36 = v4 + 1; // 0x31
    while (v36 != (a1 & 0xffffffff)) {
        // 0x3d
        v4 = v36;
        v5 = v3;
        v6 = 0x3e80 * v4;
        v7 = v6 + a2;
        if (v4 == 0) {
            // 0x3d
            v9 = (int64_t *)v7;
            v15 = *v9;
            v13 = v9;
            result2 = v7;
        } else {
            v16 = 0;
            if (v16 == 0) {
                // 0x7b
                v8 = (int64_t *)v7;
                v14 = *v8;
                v12 = v8;
                v11 = 0;
                v10 = a2;
            } else {
                // 0x80
                v32 = 8 * v16;
                v33 = (int64_t *)(v32 + v7);
                v17 = 0x3e80 * v16 + a2;
                v23 = __asm_movsd(*v33);
                v25 = 0;
                v21 = 8 * v25;
                v22 = __asm_movsd(*(int64_t *)(v21 + v7));
                v23 = __asm_subsd(v23, __asm_mulsd(v22, *(int64_t *)(v21 + v17)));
                v24 = __asm_movsd_1(v23);
                *v33 = v24;
                v25++;
                v14 = v24;
                v12 = v33;
                v11 = v32;
                v10 = v17;
                while (v25 != v16) {
                    // 0xa0
                    v21 = 8 * v25;
                    v22 = __asm_movsd(*(int64_t *)(v21 + v7));
                    v23 = __asm_subsd(v23, __asm_mulsd(v22, *(int64_t *)(v21 + v17)));
                    v24 = __asm_movsd_1(v23);
                    *v33 = v24;
                    v25++;
                    v14 = v24;
                    v12 = v33;
                    v11 = v32;
                    v10 = v17;
                }
            }
            // 0x50
            v18 = __asm_movsd(v14);
            v19 = *(int64_t *)(v10 + v11);
            *v12 = __asm_movsd_1(__asm_divsd_3(v18, v19));
            v20 = v16 + 1;
            while (v20 != v4) {
                // 0x7b
                v16 = v20;
                if (v16 == 0) {
                    // 0x7b
                    v8 = (int64_t *)v7;
                    v14 = *v8;
                    v12 = v8;
                    v11 = 0;
                    v10 = a2;
                } else {
                    // 0x80
                    v32 = 8 * v16;
                    v33 = (int64_t *)(v32 + v7);
                    v17 = 0x3e80 * v16 + a2;
                    v23 = __asm_movsd(*v33);
                    v25 = 0;
                    v21 = 8 * v25;
                    v22 = __asm_movsd(*(int64_t *)(v21 + v7));
                    v23 = __asm_subsd(v23, __asm_mulsd(v22, *(int64_t *)(v21 + v17)));
                    v24 = __asm_movsd_1(v23);
                    *v33 = v24;
                    v25++;
                    v14 = v24;
                    v12 = v33;
                    v11 = v32;
                    v10 = v17;
                    while (v25 != v16) {
                        // 0xa0
                        v21 = 8 * v25;
                        v22 = __asm_movsd(*(int64_t *)(v21 + v7));
                        v23 = __asm_subsd(v23, __asm_mulsd(v22, *(int64_t *)(v21 + v17)));
                        v24 = __asm_movsd_1(v23);
                        *v33 = v24;
                        v25++;
                        v14 = v24;
                        v12 = v33;
                        v11 = v32;
                        v10 = v17;
                    }
                }
                // 0x50
                v18 = __asm_movsd(v14);
                v19 = *(int64_t *)(v10 + v11);
                *v12 = __asm_movsd_1(__asm_divsd_3(v18, v19));
                v20 = v16 + 1;
            }
            // 0xd0
            v26 = v7 + 8 * v4;
            v27 = (int64_t *)v26;
            v29 = __asm_movsd(*v27);
            v31 = 0;
            v28 = __asm_movsd(*(int64_t *)(8 * v31 + v7));
            v29 = __asm_subsd(v29, __asm_mulsd_4(v28, v28));
            v30 = __asm_movsd_1(v29);
            *v27 = v30;
            v31++;
            v15 = v30;
            v13 = v27;
            result2 = v26;
            while (v31 != v4) {
                // 0xe0
                v28 = __asm_movsd(*(int64_t *)(8 * v31 + v7));
                v29 = __asm_subsd(v29, __asm_mulsd_4(v28, v28));
                v30 = __asm_movsd_1(v29);
                *v27 = v30;
                v31++;
                v15 = v30;
                v13 = v27;
                result2 = v26;
            }
        }
        // 0xf9
        v34 = __asm_movsd(v15);
        __asm_ucomisd(v34, v5);
        if (v7 < v6) {
            // 0x20
            sqrt();
            v35 = v34;
            v3 = __asm_xorpd(v5, v5);
        } else {
            // 0x113
            v35 = __asm_sqrtsd(v34);
            v3 = v5;
        }
        // 0x29
        *v13 = __asm_movsd_1(v35);
        v36 = v4 + 1;
    }
    // 0x11c
    return result2;
}
