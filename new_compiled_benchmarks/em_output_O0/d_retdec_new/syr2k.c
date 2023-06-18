
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "syr2k.h"
int64_t kernel_syr2k(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x0
    int128_t v1; // 0x0
    int64_t v2 = __asm_movsd_1(v1); // 0xa
    int64_t v3 = __asm_movsd_1(v1); // 0xf
    if ((int32_t)a1 <= 0) {
        // 0x171
        return 0;
    }
    int64_t result = a1 & 0xffffffff;
    int64_t v4 = 1;
    int64_t v5 = 0;
    int64_t v6 = 0x2580 * v5 + a3;
    int64_t v7 = 0;
    int128_t v8 = __asm_movsd(v3); // 0x46
    int64_t * v9 = (int64_t *)(8 * v7 + v6); // 0x61
    *v9 = __asm_movsd_1(__asm_mulsd(v8, *v9));
    v7++;
    while (v7 != v4) {
        // 0x46
        v8 = __asm_movsd(v3);
        v9 = (int64_t *)(8 * v7 + v6);
        *v9 = __asm_movsd_1(__asm_mulsd(v8, *v9));
        v7++;
    }
    int64_t v10; // 0x0
    int64_t v11; // 0x0
    int64_t v12; // 0xb5
    int64_t v13; // 0x0
    int64_t v14; // 0x0
    int128_t v15; // 0xba
    int128_t v16; // 0xd5
    int128_t v17; // 0xf5
    int128_t v18; // 0x119
    int64_t * v19; // 0x133
    if ((int32_t)a2 > 0) {
        // 0x93
        v11 = 0;
        v12 = 8 * v11;
        v13 = v12 + 0x1f40 * v5;
        v10 = 0;
        v14 = 0x1f40 * v10 + v12;
        v15 = __asm_mulsd(__asm_movsd(*(int64_t *)(v14 + a4)), v2);
        v16 = __asm_movsd(*(int64_t *)(v13 + a5));
        v17 = __asm_mulsd(__asm_movsd(*(int64_t *)(v14 + a5)), v2);
        v18 = __asm_addsd(__asm_mulsd_2(v15, v16), __asm_mulsd(v17, *(int64_t *)(v13 + a4)));
        v19 = (int64_t *)(8 * v10 + v6);
        *v19 = __asm_movsd_1(__asm_addsd_3(v18, *v19));
        v10++;
        while (v10 != v4) {
            // 0x9f
            v14 = 0x1f40 * v10 + v12;
            v15 = __asm_mulsd(__asm_movsd(*(int64_t *)(v14 + a4)), v2);
            v16 = __asm_movsd(*(int64_t *)(v13 + a5));
            v17 = __asm_mulsd(__asm_movsd(*(int64_t *)(v14 + a5)), v2);
            v18 = __asm_addsd(__asm_mulsd_2(v15, v16), __asm_mulsd(v17, *(int64_t *)(v13 + a4)));
            v19 = (int64_t *)(8 * v10 + v6);
            *v19 = __asm_movsd_1(__asm_addsd_3(v18, *v19));
            v10++;
        }
        // 0x150
        v11++;
        while (v11 != (a2 & 0xffffffff)) {
            // 0x9f
            v12 = 8 * v11;
            v13 = v12 + 0x1f40 * v5;
            v10 = 0;
            v14 = 0x1f40 * v10 + v12;
            v15 = __asm_mulsd(__asm_movsd(*(int64_t *)(v14 + a4)), v2);
            v16 = __asm_movsd(*(int64_t *)(v13 + a5));
            v17 = __asm_mulsd(__asm_movsd(*(int64_t *)(v14 + a5)), v2);
            v18 = __asm_addsd(__asm_mulsd_2(v15, v16), __asm_mulsd(v17, *(int64_t *)(v13 + a4)));
            v19 = (int64_t *)(8 * v10 + v6);
            *v19 = __asm_movsd_1(__asm_addsd_3(v18, *v19));
            v10++;
            while (v10 != v4) {
                // 0x9f
                v14 = 0x1f40 * v10 + v12;
                v15 = __asm_mulsd(__asm_movsd(*(int64_t *)(v14 + a4)), v2);
                v16 = __asm_movsd(*(int64_t *)(v13 + a5));
                v17 = __asm_mulsd(__asm_movsd(*(int64_t *)(v14 + a5)), v2);
                v18 = __asm_addsd(__asm_mulsd_2(v15, v16), __asm_mulsd(v17, *(int64_t *)(v13 + a4)));
                v19 = (int64_t *)(8 * v10 + v6);
                *v19 = __asm_movsd_1(__asm_addsd_3(v18, *v19));
                v10++;
            }
            // 0x150
            v11++;
        }
    }
    int64_t v20 = v5 + 1;
    int64_t v21 = v4 + 1; // 0x2d
    while (v20 != result) {
        // 0x46
        v4 = v21;
        v5 = v20;
        v6 = 0x2580 * v5 + a3;
        v7 = 0;
        v8 = __asm_movsd(v3);
        v9 = (int64_t *)(8 * v7 + v6);
        *v9 = __asm_movsd_1(__asm_mulsd(v8, *v9));
        v7++;
        while (v7 != v4) {
            // 0x46
            v8 = __asm_movsd(v3);
            v9 = (int64_t *)(8 * v7 + v6);
            *v9 = __asm_movsd_1(__asm_mulsd(v8, *v9));
            v7++;
        }
        if ((int32_t)a2 > 0) {
            // 0x93
            v11 = 0;
            v12 = 8 * v11;
            v13 = v12 + 0x1f40 * v5;
            v10 = 0;
            v14 = 0x1f40 * v10 + v12;
            v15 = __asm_mulsd(__asm_movsd(*(int64_t *)(v14 + a4)), v2);
            v16 = __asm_movsd(*(int64_t *)(v13 + a5));
            v17 = __asm_mulsd(__asm_movsd(*(int64_t *)(v14 + a5)), v2);
            v18 = __asm_addsd(__asm_mulsd_2(v15, v16), __asm_mulsd(v17, *(int64_t *)(v13 + a4)));
            v19 = (int64_t *)(8 * v10 + v6);
            *v19 = __asm_movsd_1(__asm_addsd_3(v18, *v19));
            v10++;
            while (v10 != v4) {
                // 0x9f
                v14 = 0x1f40 * v10 + v12;
                v15 = __asm_mulsd(__asm_movsd(*(int64_t *)(v14 + a4)), v2);
                v16 = __asm_movsd(*(int64_t *)(v13 + a5));
                v17 = __asm_mulsd(__asm_movsd(*(int64_t *)(v14 + a5)), v2);
                v18 = __asm_addsd(__asm_mulsd_2(v15, v16), __asm_mulsd(v17, *(int64_t *)(v13 + a4)));
                v19 = (int64_t *)(8 * v10 + v6);
                *v19 = __asm_movsd_1(__asm_addsd_3(v18, *v19));
                v10++;
            }
            // 0x150
            v11++;
            while (v11 != (a2 & 0xffffffff)) {
                // 0x9f
                v12 = 8 * v11;
                v13 = v12 + 0x1f40 * v5;
                v10 = 0;
                v14 = 0x1f40 * v10 + v12;
                v15 = __asm_mulsd(__asm_movsd(*(int64_t *)(v14 + a4)), v2);
                v16 = __asm_movsd(*(int64_t *)(v13 + a5));
                v17 = __asm_mulsd(__asm_movsd(*(int64_t *)(v14 + a5)), v2);
                v18 = __asm_addsd(__asm_mulsd_2(v15, v16), __asm_mulsd(v17, *(int64_t *)(v13 + a4)));
                v19 = (int64_t *)(8 * v10 + v6);
                *v19 = __asm_movsd_1(__asm_addsd_3(v18, *v19));
                v10++;
                while (v10 != v4) {
                    // 0x9f
                    v14 = 0x1f40 * v10 + v12;
                    v15 = __asm_mulsd(__asm_movsd(*(int64_t *)(v14 + a4)), v2);
                    v16 = __asm_movsd(*(int64_t *)(v13 + a5));
                    v17 = __asm_mulsd(__asm_movsd(*(int64_t *)(v14 + a5)), v2);
                    v18 = __asm_addsd(__asm_mulsd_2(v15, v16), __asm_mulsd(v17, *(int64_t *)(v13 + a4)));
                    v19 = (int64_t *)(8 * v10 + v6);
                    *v19 = __asm_movsd_1(__asm_addsd_3(v18, *v19));
                    v10++;
                }
                // 0x150
                v11++;
            }
        }
        // 0x163
        v20 = v5 + 1;
        v21 = v4 + 1;
    }
    // 0x171
    return result;
}
