
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "seidel-2d.h"
int64_t kernel_seidel_2d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t v1 = a1; // 0x5
    if (v1 < 1) {
        // 0xe5
        int64_t result; // 0x0
        return result;
    }
    int64_t result2 = a2 + 0xffffffff & 0xffffffff; // 0xd
    int128_t v2 = __asm_movsd(0x4022000000000000); // 0x12
    int64_t v3 = 0; // 0x1a
    int64_t v4 = 0; // 0x2d
    int64_t v5 = 1; // 0x2d
    int64_t v6; // 0x6a
    int64_t v7; // 0x0
    int128_t v8; // 0x71
    int128_t v9; // 0x7e
    int64_t * v10; // 0x8c
    int128_t v11; // 0x92
    int64_t v12; // 0x0
    int128_t v13; // 0xaa
    int128_t v14; // 0xb7
    int64_t v15; // 0xc1
    int64_t v16; // 0x4b
    int128_t v17; // 0x0
    if ((int32_t)a2 >= 3) {
        v16 = v5 + 1;
        v17 = __asm_movsd(*(int64_t *)(a3 + 0x3e80 + 0x3e80 * v4));
        v15 = 1;
        v6 = 8 * v15;
        v7 = v6 + 0x3e80 * v5 + a3;
        v8 = __asm_addsd_2(__asm_movsd(*(int64_t *)(v7 - 0x3e88)), *(int64_t *)(v7 - 0x3e80));
        v9 = __asm_addsd(__asm_addsd_2(v8, *(int64_t *)(v7 - 0x3e78)), v17);
        v10 = (int64_t *)v7;
        v11 = __asm_addsd_2(__asm_addsd_2(v9, *v10), *(int64_t *)(v7 + 8));
        v12 = 0x3e80 * v16 + a3 + v6;
        v13 = __asm_addsd_2(__asm_addsd_2(v11, *(int64_t *)(v12 - 8)), *(int64_t *)v12);
        v14 = __asm_divsd(__asm_addsd_2(v13, *(int64_t *)(v12 + 8)), v2);
        *v10 = __asm_movsd_1(v14);
        v15++;
        v17 = __asm_movapd(v14);
        while (v15 != result2) {
            // 0x60
            v6 = 8 * v15;
            v7 = v6 + 0x3e80 * v5 + a3;
            v8 = __asm_addsd_2(__asm_movsd(*(int64_t *)(v7 - 0x3e88)), *(int64_t *)(v7 - 0x3e80));
            v9 = __asm_addsd(__asm_addsd_2(v8, *(int64_t *)(v7 - 0x3e78)), v17);
            v10 = (int64_t *)v7;
            v11 = __asm_addsd_2(__asm_addsd_2(v9, *v10), *(int64_t *)(v7 + 8));
            v12 = 0x3e80 * v16 + a3 + v6;
            v13 = __asm_addsd_2(__asm_addsd_2(v11, *(int64_t *)(v12 - 8)), *(int64_t *)v12);
            v14 = __asm_divsd(__asm_addsd_2(v13, *(int64_t *)(v12 + 8)), v2);
            *v10 = __asm_movsd_1(v14);
            v15++;
            v17 = __asm_movapd(v14);
        }
        // 0xd1
        v4++;
        v5 = v16;
        while (v16 != result2) {
            // 0x40
            v16 = v5 + 1;
            v17 = __asm_movsd(*(int64_t *)(a3 + 0x3e80 + 0x3e80 * v4));
            v15 = 1;
            v6 = 8 * v15;
            v7 = v6 + 0x3e80 * v5 + a3;
            v8 = __asm_addsd_2(__asm_movsd(*(int64_t *)(v7 - 0x3e88)), *(int64_t *)(v7 - 0x3e80));
            v9 = __asm_addsd(__asm_addsd_2(v8, *(int64_t *)(v7 - 0x3e78)), v17);
            v10 = (int64_t *)v7;
            v11 = __asm_addsd_2(__asm_addsd_2(v9, *v10), *(int64_t *)(v7 + 8));
            v12 = 0x3e80 * v16 + a3 + v6;
            v13 = __asm_addsd_2(__asm_addsd_2(v11, *(int64_t *)(v12 - 8)), *(int64_t *)v12);
            v14 = __asm_divsd(__asm_addsd_2(v13, *(int64_t *)(v12 + 8)), v2);
            *v10 = __asm_movsd_1(v14);
            v15++;
            v17 = __asm_movapd(v14);
            while (v15 != result2) {
                // 0x60
                v6 = 8 * v15;
                v7 = v6 + 0x3e80 * v5 + a3;
                v8 = __asm_addsd_2(__asm_movsd(*(int64_t *)(v7 - 0x3e88)), *(int64_t *)(v7 - 0x3e80));
                v9 = __asm_addsd(__asm_addsd_2(v8, *(int64_t *)(v7 - 0x3e78)), v17);
                v10 = (int64_t *)v7;
                v11 = __asm_addsd_2(__asm_addsd_2(v9, *v10), *(int64_t *)(v7 + 8));
                v12 = 0x3e80 * v16 + a3 + v6;
                v13 = __asm_addsd_2(__asm_addsd_2(v11, *(int64_t *)(v12 - 8)), *(int64_t *)v12);
                v14 = __asm_divsd(__asm_addsd_2(v13, *(int64_t *)(v12 + 8)), v2);
                *v10 = __asm_movsd_1(v14);
                v15++;
                v17 = __asm_movapd(v14);
            }
            // 0xd1
            v4++;
            v5 = v16;
        }
    }
    while ((int32_t)v3 != v1) {
        // 0x2a
        v3 &= 0xffffffff;
        v4 = 0;
        v5 = 1;
        if ((int32_t)a2 >= 3) {
            v16 = v5 + 1;
            v17 = __asm_movsd(*(int64_t *)(a3 + 0x3e80 + 0x3e80 * v4));
            v15 = 1;
            v6 = 8 * v15;
            v7 = v6 + 0x3e80 * v5 + a3;
            v8 = __asm_addsd_2(__asm_movsd(*(int64_t *)(v7 - 0x3e88)), *(int64_t *)(v7 - 0x3e80));
            v9 = __asm_addsd(__asm_addsd_2(v8, *(int64_t *)(v7 - 0x3e78)), v17);
            v10 = (int64_t *)v7;
            v11 = __asm_addsd_2(__asm_addsd_2(v9, *v10), *(int64_t *)(v7 + 8));
            v12 = 0x3e80 * v16 + a3 + v6;
            v13 = __asm_addsd_2(__asm_addsd_2(v11, *(int64_t *)(v12 - 8)), *(int64_t *)v12);
            v14 = __asm_divsd(__asm_addsd_2(v13, *(int64_t *)(v12 + 8)), v2);
            *v10 = __asm_movsd_1(v14);
            v15++;
            v17 = __asm_movapd(v14);
            while (v15 != result2) {
                // 0x60
                v6 = 8 * v15;
                v7 = v6 + 0x3e80 * v5 + a3;
                v8 = __asm_addsd_2(__asm_movsd(*(int64_t *)(v7 - 0x3e88)), *(int64_t *)(v7 - 0x3e80));
                v9 = __asm_addsd(__asm_addsd_2(v8, *(int64_t *)(v7 - 0x3e78)), v17);
                v10 = (int64_t *)v7;
                v11 = __asm_addsd_2(__asm_addsd_2(v9, *v10), *(int64_t *)(v7 + 8));
                v12 = 0x3e80 * v16 + a3 + v6;
                v13 = __asm_addsd_2(__asm_addsd_2(v11, *(int64_t *)(v12 - 8)), *(int64_t *)v12);
                v14 = __asm_divsd(__asm_addsd_2(v13, *(int64_t *)(v12 + 8)), v2);
                *v10 = __asm_movsd_1(v14);
                v15++;
                v17 = __asm_movapd(v14);
            }
            // 0xd1
            v4++;
            v5 = v16;
            while (v16 != result2) {
                // 0x40
                v16 = v5 + 1;
                v17 = __asm_movsd(*(int64_t *)(a3 + 0x3e80 + 0x3e80 * v4));
                v15 = 1;
                v6 = 8 * v15;
                v7 = v6 + 0x3e80 * v5 + a3;
                v8 = __asm_addsd_2(__asm_movsd(*(int64_t *)(v7 - 0x3e88)), *(int64_t *)(v7 - 0x3e80));
                v9 = __asm_addsd(__asm_addsd_2(v8, *(int64_t *)(v7 - 0x3e78)), v17);
                v10 = (int64_t *)v7;
                v11 = __asm_addsd_2(__asm_addsd_2(v9, *v10), *(int64_t *)(v7 + 8));
                v12 = 0x3e80 * v16 + a3 + v6;
                v13 = __asm_addsd_2(__asm_addsd_2(v11, *(int64_t *)(v12 - 8)), *(int64_t *)v12);
                v14 = __asm_divsd(__asm_addsd_2(v13, *(int64_t *)(v12 + 8)), v2);
                *v10 = __asm_movsd_1(v14);
                v15++;
                v17 = __asm_movapd(v14);
                while (v15 != result2) {
                    // 0x60
                    v6 = 8 * v15;
                    v7 = v6 + 0x3e80 * v5 + a3;
                    v8 = __asm_addsd_2(__asm_movsd(*(int64_t *)(v7 - 0x3e88)), *(int64_t *)(v7 - 0x3e80));
                    v9 = __asm_addsd(__asm_addsd_2(v8, *(int64_t *)(v7 - 0x3e78)), v17);
                    v10 = (int64_t *)v7;
                    v11 = __asm_addsd_2(__asm_addsd_2(v9, *v10), *(int64_t *)(v7 + 8));
                    v12 = 0x3e80 * v16 + a3 + v6;
                    v13 = __asm_addsd_2(__asm_addsd_2(v11, *(int64_t *)(v12 - 8)), *(int64_t *)v12);
                    v14 = __asm_divsd(__asm_addsd_2(v13, *(int64_t *)(v12 + 8)), v2);
                    *v10 = __asm_movsd_1(v14);
                    v15++;
                    v17 = __asm_movapd(v14);
                }
                // 0xd1
                v4++;
                v5 = v16;
            }
        }
    }
    // 0xe5
    return result2;
}
