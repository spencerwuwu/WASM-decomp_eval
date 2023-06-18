
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "symm.h"
int64_t kernel_symm(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x0
    int128_t v1; // 0x0
    int64_t v2 = __asm_movsd_1(v1); // 0xa
    int64_t v3 = __asm_movsd_1(v1); // 0xf
    if ((int32_t)a1 <= 0) {
        // 0x1cb
        return 0;
    }
    int64_t result = a1 & 0xffffffff;
    int64_t v4 = 0;
    int128_t v5; // 0x0
    int128_t v6 = v5; // 0x40
    int64_t v7; // 0x0
    int64_t v8; // 0x0
    int64_t v9; // 0x0
    int64_t v10; // 0x0
    int64_t v11; // 0x49
    int128_t v12; // 0x11a
    int64_t v13; // 0x0
    int64_t * v14; // 0x135
    int128_t v15; // 0x135
    int128_t v16; // 0x155
    int128_t v17; // 0x179
    int128_t v18; // 0x18b
    int64_t v19; // 0x0
    int128_t v20; // 0x7c
    int64_t * v21; // 0x97
    int128_t v22; // 0x97
    int64_t v23; // 0xa4
    int64_t * v24; // 0xb2
    int128_t v25; // 0xda
    int64_t v26; // 0x107
    int64_t v27; // 0x0
    int64_t v28; // 0x0
    int64_t * v29; // 0x0
    int128_t v30; // 0x0
    if ((int32_t)a2 > 0) {
        // 0x46
        v27 = 0x2580 * v4;
        v28 = 0x1f40 * v4 + a4;
        v29 = (int64_t *)(0x1f48 * v4 + a4);
        v9 = 0;
        v30 = v5;
        v11 = __asm_movsd_1(__asm_xorps(v30, v30));
        v7 = 8 * v9;
        v10 = v11;
        if (v4 != 0) {
            // 0x61
            v19 = v7 + a5;
            v8 = 0;
            v26 = v11;
            v20 = __asm_mulsd(__asm_movsd(v2), *(int64_t *)(v19 + v27));
            v21 = (int64_t *)(v28 + 8 * v8);
            v22 = __asm_movsd(*v21);
            v23 = 0x2580 * v8;
            v24 = (int64_t *)(v7 + a3 + v23);
            *v24 = __asm_movsd_1(__asm_addsd(__asm_mulsd_2(v20, v22), __asm_movsd(*v24)));
            v25 = __asm_movsd(*(int64_t *)(v23 + v19));
            v26 = __asm_movsd_1(__asm_addsd(__asm_mulsd_2(v25, __asm_movsd(*v21)), __asm_movsd(v26)));
            v8++;
            v10 = v26;
            while (v8 != v4) {
                // 0x61
                v20 = __asm_mulsd(__asm_movsd(v2), *(int64_t *)(v19 + v27));
                v21 = (int64_t *)(v28 + 8 * v8);
                v22 = __asm_movsd(*v21);
                v23 = 0x2580 * v8;
                v24 = (int64_t *)(v7 + a3 + v23);
                *v24 = __asm_movsd_1(__asm_addsd(__asm_mulsd_2(v20, v22), __asm_movsd(*v24)));
                v25 = __asm_movsd(*(int64_t *)(v23 + v19));
                v26 = __asm_movsd_1(__asm_addsd(__asm_mulsd_2(v25, __asm_movsd(*v21)), __asm_movsd(v26)));
                v8++;
                v10 = v26;
            }
        }
        // 0x11a
        v12 = __asm_movsd(v3);
        v13 = v7 + v27;
        v14 = (int64_t *)(v13 + a3);
        v15 = __asm_movsd(*v14);
        v16 = __asm_mulsd(__asm_movsd(v2), *(int64_t *)(v13 + a5));
        v17 = __asm_addsd(__asm_mulsd_2(v12, v15), __asm_mulsd(v16, *v29));
        v18 = __asm_addsd(__asm_mulsd_2(__asm_movsd(v2), __asm_movsd(v10)), v17);
        *v14 = __asm_movsd_1(v18);
        v9++;
        v6 = v18;
        while (v9 != (a2 & 0xffffffff)) {
            // 0x46
            v30 = v18;
            v11 = __asm_movsd_1(__asm_xorps(v30, v30));
            v7 = 8 * v9;
            v10 = v11;
            if (v4 != 0) {
                // 0x61
                v19 = v7 + a5;
                v8 = 0;
                v26 = v11;
                v20 = __asm_mulsd(__asm_movsd(v2), *(int64_t *)(v19 + v27));
                v21 = (int64_t *)(v28 + 8 * v8);
                v22 = __asm_movsd(*v21);
                v23 = 0x2580 * v8;
                v24 = (int64_t *)(v7 + a3 + v23);
                *v24 = __asm_movsd_1(__asm_addsd(__asm_mulsd_2(v20, v22), __asm_movsd(*v24)));
                v25 = __asm_movsd(*(int64_t *)(v23 + v19));
                v26 = __asm_movsd_1(__asm_addsd(__asm_mulsd_2(v25, __asm_movsd(*v21)), __asm_movsd(v26)));
                v8++;
                v10 = v26;
                while (v8 != v4) {
                    // 0x61
                    v20 = __asm_mulsd(__asm_movsd(v2), *(int64_t *)(v19 + v27));
                    v21 = (int64_t *)(v28 + 8 * v8);
                    v22 = __asm_movsd(*v21);
                    v23 = 0x2580 * v8;
                    v24 = (int64_t *)(v7 + a3 + v23);
                    *v24 = __asm_movsd_1(__asm_addsd(__asm_mulsd_2(v20, v22), __asm_movsd(*v24)));
                    v25 = __asm_movsd(*(int64_t *)(v23 + v19));
                    v26 = __asm_movsd_1(__asm_addsd(__asm_mulsd_2(v25, __asm_movsd(*v21)), __asm_movsd(v26)));
                    v8++;
                    v10 = v26;
                }
            }
            // 0x11a
            v12 = __asm_movsd(v3);
            v13 = v7 + v27;
            v14 = (int64_t *)(v13 + a3);
            v15 = __asm_movsd(*v14);
            v16 = __asm_mulsd(__asm_movsd(v2), *(int64_t *)(v13 + a5));
            v17 = __asm_addsd(__asm_mulsd_2(v12, v15), __asm_mulsd(v16, *v29));
            v18 = __asm_addsd(__asm_mulsd_2(__asm_movsd(v2), __asm_movsd(v10)), v17);
            *v14 = __asm_movsd_1(v18);
            v9++;
            v6 = v18;
        }
    }
    int64_t v31 = v4 + 1;
    while (v31 != result) {
        int128_t v32 = v6;
        v4 = v31;
        v6 = v32;
        if ((int32_t)a2 > 0) {
            // 0x46
            v27 = 0x2580 * v4;
            v28 = 0x1f40 * v4 + a4;
            v29 = (int64_t *)(0x1f48 * v4 + a4);
            v9 = 0;
            v30 = v32;
            v11 = __asm_movsd_1(__asm_xorps(v30, v30));
            v7 = 8 * v9;
            v10 = v11;
            if (v4 != 0) {
                // 0x61
                v19 = v7 + a5;
                v8 = 0;
                v26 = v11;
                v20 = __asm_mulsd(__asm_movsd(v2), *(int64_t *)(v19 + v27));
                v21 = (int64_t *)(v28 + 8 * v8);
                v22 = __asm_movsd(*v21);
                v23 = 0x2580 * v8;
                v24 = (int64_t *)(v7 + a3 + v23);
                *v24 = __asm_movsd_1(__asm_addsd(__asm_mulsd_2(v20, v22), __asm_movsd(*v24)));
                v25 = __asm_movsd(*(int64_t *)(v23 + v19));
                v26 = __asm_movsd_1(__asm_addsd(__asm_mulsd_2(v25, __asm_movsd(*v21)), __asm_movsd(v26)));
                v8++;
                v10 = v26;
                while (v8 != v4) {
                    // 0x61
                    v20 = __asm_mulsd(__asm_movsd(v2), *(int64_t *)(v19 + v27));
                    v21 = (int64_t *)(v28 + 8 * v8);
                    v22 = __asm_movsd(*v21);
                    v23 = 0x2580 * v8;
                    v24 = (int64_t *)(v7 + a3 + v23);
                    *v24 = __asm_movsd_1(__asm_addsd(__asm_mulsd_2(v20, v22), __asm_movsd(*v24)));
                    v25 = __asm_movsd(*(int64_t *)(v23 + v19));
                    v26 = __asm_movsd_1(__asm_addsd(__asm_mulsd_2(v25, __asm_movsd(*v21)), __asm_movsd(v26)));
                    v8++;
                    v10 = v26;
                }
            }
            // 0x11a
            v12 = __asm_movsd(v3);
            v13 = v7 + v27;
            v14 = (int64_t *)(v13 + a3);
            v15 = __asm_movsd(*v14);
            v16 = __asm_mulsd(__asm_movsd(v2), *(int64_t *)(v13 + a5));
            v17 = __asm_addsd(__asm_mulsd_2(v12, v15), __asm_mulsd(v16, *v29));
            v18 = __asm_addsd(__asm_mulsd_2(__asm_movsd(v2), __asm_movsd(v10)), v17);
            *v14 = __asm_movsd_1(v18);
            v9++;
            v6 = v18;
            while (v9 != (a2 & 0xffffffff)) {
                // 0x46
                v30 = v18;
                v11 = __asm_movsd_1(__asm_xorps(v30, v30));
                v7 = 8 * v9;
                v10 = v11;
                if (v4 != 0) {
                    // 0x61
                    v19 = v7 + a5;
                    v8 = 0;
                    v26 = v11;
                    v20 = __asm_mulsd(__asm_movsd(v2), *(int64_t *)(v19 + v27));
                    v21 = (int64_t *)(v28 + 8 * v8);
                    v22 = __asm_movsd(*v21);
                    v23 = 0x2580 * v8;
                    v24 = (int64_t *)(v7 + a3 + v23);
                    *v24 = __asm_movsd_1(__asm_addsd(__asm_mulsd_2(v20, v22), __asm_movsd(*v24)));
                    v25 = __asm_movsd(*(int64_t *)(v23 + v19));
                    v26 = __asm_movsd_1(__asm_addsd(__asm_mulsd_2(v25, __asm_movsd(*v21)), __asm_movsd(v26)));
                    v8++;
                    v10 = v26;
                    while (v8 != v4) {
                        // 0x61
                        v20 = __asm_mulsd(__asm_movsd(v2), *(int64_t *)(v19 + v27));
                        v21 = (int64_t *)(v28 + 8 * v8);
                        v22 = __asm_movsd(*v21);
                        v23 = 0x2580 * v8;
                        v24 = (int64_t *)(v7 + a3 + v23);
                        *v24 = __asm_movsd_1(__asm_addsd(__asm_mulsd_2(v20, v22), __asm_movsd(*v24)));
                        v25 = __asm_movsd(*(int64_t *)(v23 + v19));
                        v26 = __asm_movsd_1(__asm_addsd(__asm_mulsd_2(v25, __asm_movsd(*v21)), __asm_movsd(v26)));
                        v8++;
                        v10 = v26;
                    }
                }
                // 0x11a
                v12 = __asm_movsd(v3);
                v13 = v7 + v27;
                v14 = (int64_t *)(v13 + a3);
                v15 = __asm_movsd(*v14);
                v16 = __asm_mulsd(__asm_movsd(v2), *(int64_t *)(v13 + a5));
                v17 = __asm_addsd(__asm_mulsd_2(v12, v15), __asm_mulsd(v16, *v29));
                v18 = __asm_addsd(__asm_mulsd_2(__asm_movsd(v2), __asm_movsd(v10)), v17);
                *v14 = __asm_movsd_1(v18);
                v9++;
                v6 = v18;
            }
        }
        // 0x1bd
        v31 = v4 + 1;
    }
    // 0x1cb
    return result;
}
