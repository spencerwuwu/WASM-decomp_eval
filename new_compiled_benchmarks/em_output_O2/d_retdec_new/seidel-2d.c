
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "seidel-2d.h"
int64_t kernel_seidel_2d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t v1 = a1; // 0x3
    if (v1 < 1) {
        // 0x113
        int64_t result; // 0x0
        return result;
    }
    int64_t result2 = a2 + 0xffffffff & 0xffffffff; // 0xb
    int128_t v2 = __asm_movsd(0x4022000000000000); // 0x10
    int64_t v3 = 0; // 0x18
    int64_t v4; // 0x0
    int128_t v5; // 0x52
    int128_t v6; // 0x5c
    int64_t v7; // 0x0
    int128_t v8; // 0x62
    int128_t v9; // 0x69
    int128_t v10; // 0x90
    int128_t v11; // 0x94
    int64_t v12; // 0xa2
    int128_t v13; // 0xa2
    int128_t v14; // 0xb2
    int128_t v15; // 0xba
    int128_t v16; // 0xc9
    int128_t v17; // 0xd7
    int128_t v18; // 0xdb
    int128_t v19; // 0xe6
    int64_t v20; // 0xf0
    int128_t v21; // 0xf4
    int128_t v22; // 0x40
    int64_t v23; // 0x4f
    int64_t v24; // 0x0
    int64_t v25; // 0x0
    int128_t v26; // 0x0
    if ((int32_t)a2 >= 3) {
        // 0x2f
        v6 = __asm_movsd(a3);
        v4 = 1;
        v22 = __asm_movapd(v6);
        v23 = v4 + 1;
        v24 = 0x3e80 * v4 + a3;
        v25 = v24 - 0x3e78;
        v5 = __asm_movsd(*(int64_t *)v25);
        v6 = __asm_movsd(*(int64_t *)v24);
        v7 = v24 + 8;
        v8 = __asm_movsd(*(int64_t *)v7);
        v9 = __asm_movsd(*(int64_t *)(v24 + 0x3e80));
        v18 = __asm_movsd(*(int64_t *)(v24 + 0x3e88));
        v21 = __asm_movapd(v6);
        v20 = 1;
        v10 = __asm_movapd(v5);
        v11 = __asm_addsd(v22, v5);
        v12 = 8 * v20;
        v13 = __asm_movsd(*(int64_t *)(v12 + v25));
        v14 = __asm_addsd(__asm_addsd(__asm_addsd(v11, v13), v21), v8);
        v15 = __asm_movsd(*(int64_t *)(v7 + v12));
        v16 = __asm_addsd(__asm_addsd(__asm_addsd(v14, v15), v9), v18);
        v17 = __asm_movapd(v18);
        v18 = __asm_movsd(*(int64_t *)(v12 + 8 + a3 + 0x3e80 * v23));
        v19 = __asm_divsd(__asm_addsd(v16, v18), v2);
        *(int64_t *)(v12 + v24) = __asm_movsd_1(v19);
        v20++;
        v21 = __asm_movapd(v19);
        v26 = __asm_movapd(v10);
        while (v20 != result2) {
            // 0x90
            v10 = __asm_movapd(v13);
            v11 = __asm_addsd(v26, v13);
            v12 = 8 * v20;
            v13 = __asm_movsd(*(int64_t *)(v12 + v25));
            v14 = __asm_addsd(__asm_addsd(__asm_addsd(v11, v13), v21), v15);
            v15 = __asm_movsd(*(int64_t *)(v7 + v12));
            v16 = __asm_addsd(__asm_addsd(__asm_addsd(v14, v15), v17), v18);
            v17 = __asm_movapd(v18);
            v18 = __asm_movsd(*(int64_t *)(v12 + 8 + a3 + 0x3e80 * v23));
            v19 = __asm_divsd(__asm_addsd(v16, v18), v2);
            *(int64_t *)(v12 + v24) = __asm_movsd_1(v19);
            v20++;
            v21 = __asm_movapd(v19);
            v26 = __asm_movapd(v10);
        }
        while (v23 != result2) {
            // 0x40
            v4 = v23;
            v22 = __asm_movapd(v6);
            v23 = v4 + 1;
            v24 = 0x3e80 * v4 + a3;
            v25 = v24 - 0x3e78;
            v5 = __asm_movsd(*(int64_t *)v25);
            v6 = __asm_movsd(*(int64_t *)v24);
            v7 = v24 + 8;
            v8 = __asm_movsd(*(int64_t *)v7);
            v9 = __asm_movsd(*(int64_t *)(v24 + 0x3e80));
            v18 = __asm_movsd(*(int64_t *)(v24 + 0x3e88));
            v21 = __asm_movapd(v6);
            v20 = 1;
            v10 = __asm_movapd(v5);
            v11 = __asm_addsd(v22, v5);
            v12 = 8 * v20;
            v13 = __asm_movsd(*(int64_t *)(v12 + v25));
            v14 = __asm_addsd(__asm_addsd(__asm_addsd(v11, v13), v21), v8);
            v15 = __asm_movsd(*(int64_t *)(v7 + v12));
            v16 = __asm_addsd(__asm_addsd(__asm_addsd(v14, v15), v9), v18);
            v17 = __asm_movapd(v18);
            v18 = __asm_movsd(*(int64_t *)(v12 + 8 + a3 + 0x3e80 * v23));
            v19 = __asm_divsd(__asm_addsd(v16, v18), v2);
            *(int64_t *)(v12 + v24) = __asm_movsd_1(v19);
            v20++;
            v21 = __asm_movapd(v19);
            v26 = __asm_movapd(v10);
            while (v20 != result2) {
                // 0x90
                v10 = __asm_movapd(v13);
                v11 = __asm_addsd(v26, v13);
                v12 = 8 * v20;
                v13 = __asm_movsd(*(int64_t *)(v12 + v25));
                v14 = __asm_addsd(__asm_addsd(__asm_addsd(v11, v13), v21), v15);
                v15 = __asm_movsd(*(int64_t *)(v7 + v12));
                v16 = __asm_addsd(__asm_addsd(__asm_addsd(v14, v15), v17), v18);
                v17 = __asm_movapd(v18);
                v18 = __asm_movsd(*(int64_t *)(v12 + 8 + a3 + 0x3e80 * v23));
                v19 = __asm_divsd(__asm_addsd(v16, v18), v2);
                *(int64_t *)(v12 + v24) = __asm_movsd_1(v19);
                v20++;
                v21 = __asm_movapd(v19);
                v26 = __asm_movapd(v10);
            }
        }
    }
    while ((int32_t)v3 != v1) {
        // 0x2a
        v3 &= 0xffffffff;
        if ((int32_t)a2 >= 3) {
            // 0x2f
            v6 = __asm_movsd(a3);
            v4 = 1;
            v22 = __asm_movapd(v6);
            v23 = v4 + 1;
            v24 = 0x3e80 * v4 + a3;
            v25 = v24 - 0x3e78;
            v5 = __asm_movsd(*(int64_t *)v25);
            v6 = __asm_movsd(*(int64_t *)v24);
            v7 = v24 + 8;
            v8 = __asm_movsd(*(int64_t *)v7);
            v9 = __asm_movsd(*(int64_t *)(v24 + 0x3e80));
            v18 = __asm_movsd(*(int64_t *)(v24 + 0x3e88));
            v21 = __asm_movapd(v6);
            v20 = 1;
            v10 = __asm_movapd(v5);
            v11 = __asm_addsd(v22, v5);
            v12 = 8 * v20;
            v13 = __asm_movsd(*(int64_t *)(v12 + v25));
            v14 = __asm_addsd(__asm_addsd(__asm_addsd(v11, v13), v21), v8);
            v15 = __asm_movsd(*(int64_t *)(v7 + v12));
            v16 = __asm_addsd(__asm_addsd(__asm_addsd(v14, v15), v9), v18);
            v17 = __asm_movapd(v18);
            v18 = __asm_movsd(*(int64_t *)(v12 + 8 + a3 + 0x3e80 * v23));
            v19 = __asm_divsd(__asm_addsd(v16, v18), v2);
            *(int64_t *)(v12 + v24) = __asm_movsd_1(v19);
            v20++;
            v21 = __asm_movapd(v19);
            v26 = __asm_movapd(v10);
            while (v20 != result2) {
                // 0x90
                v10 = __asm_movapd(v13);
                v11 = __asm_addsd(v26, v13);
                v12 = 8 * v20;
                v13 = __asm_movsd(*(int64_t *)(v12 + v25));
                v14 = __asm_addsd(__asm_addsd(__asm_addsd(v11, v13), v21), v15);
                v15 = __asm_movsd(*(int64_t *)(v7 + v12));
                v16 = __asm_addsd(__asm_addsd(__asm_addsd(v14, v15), v17), v18);
                v17 = __asm_movapd(v18);
                v18 = __asm_movsd(*(int64_t *)(v12 + 8 + a3 + 0x3e80 * v23));
                v19 = __asm_divsd(__asm_addsd(v16, v18), v2);
                *(int64_t *)(v12 + v24) = __asm_movsd_1(v19);
                v20++;
                v21 = __asm_movapd(v19);
                v26 = __asm_movapd(v10);
            }
            while (v23 != result2) {
                // 0x40
                v4 = v23;
                v22 = __asm_movapd(v6);
                v23 = v4 + 1;
                v24 = 0x3e80 * v4 + a3;
                v25 = v24 - 0x3e78;
                v5 = __asm_movsd(*(int64_t *)v25);
                v6 = __asm_movsd(*(int64_t *)v24);
                v7 = v24 + 8;
                v8 = __asm_movsd(*(int64_t *)v7);
                v9 = __asm_movsd(*(int64_t *)(v24 + 0x3e80));
                v18 = __asm_movsd(*(int64_t *)(v24 + 0x3e88));
                v21 = __asm_movapd(v6);
                v20 = 1;
                v10 = __asm_movapd(v5);
                v11 = __asm_addsd(v22, v5);
                v12 = 8 * v20;
                v13 = __asm_movsd(*(int64_t *)(v12 + v25));
                v14 = __asm_addsd(__asm_addsd(__asm_addsd(v11, v13), v21), v8);
                v15 = __asm_movsd(*(int64_t *)(v7 + v12));
                v16 = __asm_addsd(__asm_addsd(__asm_addsd(v14, v15), v9), v18);
                v17 = __asm_movapd(v18);
                v18 = __asm_movsd(*(int64_t *)(v12 + 8 + a3 + 0x3e80 * v23));
                v19 = __asm_divsd(__asm_addsd(v16, v18), v2);
                *(int64_t *)(v12 + v24) = __asm_movsd_1(v19);
                v20++;
                v21 = __asm_movapd(v19);
                v26 = __asm_movapd(v10);
                while (v20 != result2) {
                    // 0x90
                    v10 = __asm_movapd(v13);
                    v11 = __asm_addsd(v26, v13);
                    v12 = 8 * v20;
                    v13 = __asm_movsd(*(int64_t *)(v12 + v25));
                    v14 = __asm_addsd(__asm_addsd(__asm_addsd(v11, v13), v21), v15);
                    v15 = __asm_movsd(*(int64_t *)(v7 + v12));
                    v16 = __asm_addsd(__asm_addsd(__asm_addsd(v14, v15), v17), v18);
                    v17 = __asm_movapd(v18);
                    v18 = __asm_movsd(*(int64_t *)(v12 + 8 + a3 + 0x3e80 * v23));
                    v19 = __asm_divsd(__asm_addsd(v16, v18), v2);
                    *(int64_t *)(v12 + v24) = __asm_movsd_1(v19);
                    v20++;
                    v21 = __asm_movapd(v19);
                    v26 = __asm_movapd(v10);
                }
            }
        }
    }
    // 0x113
    return result2;
}
