
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "durbin.h"
int64_t kernel_durbin(int64_t a1, int64_t a2, int64_t a3) {
    // 0x0
    __asm_movlpd(a3, __asm_xorpd(__asm_movsd_1(a2), g1));
    if ((int32_t)a1 < 2) {
        // 0x117
        int64_t result; // 0x0
        return result;
    }
    int128_t v1 = __asm_xorpd(__asm_movsd_1(a2), g1); // 0x57
    int128_t v2 = __asm_movsd_1(0x3ff0000000000000); // 0x57
    int64_t v3 = 0; // 0x57
    int64_t v4 = 1; // 0x57
    int128_t v5; // 0x0
    int128_t v6 = v5;
    int128_t v7 = v1;
    int128_t v8 = __asm_subsd(__asm_movsd_1(0x3ff0000000000000), __asm_mulsd_2(v7, v7)); // 0x74
    int128_t v9 = __asm_xorpd(v6, v6); // 0x7e
    int64_t v10 = 0; // 0x7e
    int128_t v11 = __asm_movsd_1(*(int64_t *)(8 * ((v10 ^ 0x1fffffffffffffff) + v4) + a2)); // 0x89
    int128_t v12 = __asm_addsd(v9, __asm_mulsd(v11, *(int64_t *)(8 * v10 + a3))); // 0x94
    v10++;
    v9 = v12;
    while (v10 != v4) {
        // 0x80
        v11 = __asm_movsd_1(*(int64_t *)(8 * ((v10 ^ 0x1fffffffffffffff) + v4) + a2));
        v12 = __asm_addsd(v9, __asm_mulsd(v11, *(int64_t *)(8 * v10 + a3)));
        v10++;
        v9 = v12;
    }
    int64_t v13 = 8 * v4; // 0xa0
    int128_t v14 = __asm_addsd_3(v12, *(int64_t *)(v13 + a2)); // 0xa0
    int128_t v15 = __asm_mulsd_2(v2, v8); // 0xa6
    int128_t v16 = __asm_xorpd(v14, g1); // 0xaa
    int64_t v17 = __asm_movsd(v15); // 0xb2
    int128_t v18 = __asm_divsd(v16, v15); // 0xb8
    int64_t v19 = 0; // 0xbe
    int64_t v20 = *(int64_t *)(8 * ((v19 ^ 0x1fffffffffffffff) + v4) + a3); // 0xc9
    int128_t v21 = __asm_mulsd_2(__asm_movsd_1(v20), v18); // 0xce
    int64_t v22 = 8 * v19; // 0xd2
    int64_t v23 = __asm_movsd(__asm_addsd_3(v21, *(int64_t *)(v22 + a3))); // 0xd7
    int64_t v24; // bp-16088, 0x0
    *(int64_t *)((int64_t)&v24 + 32 + v22) = v23;
    v19++;
    while (v19 != v4) {
        // 0xc0
        v20 = *(int64_t *)(8 * ((v19 ^ 0x1fffffffffffffff) + v4) + a3);
        v21 = __asm_mulsd_2(__asm_movsd_1(v20), v18);
        v22 = 8 * v19;
        v23 = __asm_movsd(__asm_addsd_3(v21, *(int64_t *)(v22 + a3)));
        *(int64_t *)((int64_t)&v24 + 32 + v22) = v23;
        v19++;
    }
    int64_t v25 = __asm_movapd_4(v18); // 0xeb
    int64_t dest_mem = memcpy(); // 0xf1
    v1 = __asm_movapd((int128_t)v25);
    *(int64_t *)(v13 + a3) = __asm_movsd(v1);
    v3++;
    v2 = __asm_movsd_1(v17);
    v4++;
    while (v3 != (a1 + 0xffffffff & 0xffffffff)) {
        // 0x60
        v6 = v18;
        v7 = v1;
        v8 = __asm_subsd(__asm_movsd_1(0x3ff0000000000000), __asm_mulsd_2(v7, v7));
        v9 = __asm_xorpd(v6, v6);
        v10 = 0;
        v11 = __asm_movsd_1(*(int64_t *)(8 * ((v10 ^ 0x1fffffffffffffff) + v4) + a2));
        v12 = __asm_addsd(v9, __asm_mulsd(v11, *(int64_t *)(8 * v10 + a3)));
        v10++;
        v9 = v12;
        while (v10 != v4) {
            // 0x80
            v11 = __asm_movsd_1(*(int64_t *)(8 * ((v10 ^ 0x1fffffffffffffff) + v4) + a2));
            v12 = __asm_addsd(v9, __asm_mulsd(v11, *(int64_t *)(8 * v10 + a3)));
            v10++;
            v9 = v12;
        }
        // 0xa0
        v13 = 8 * v4;
        v14 = __asm_addsd_3(v12, *(int64_t *)(v13 + a2));
        v15 = __asm_mulsd_2(v2, v8);
        v16 = __asm_xorpd(v14, g1);
        v17 = __asm_movsd(v15);
        v18 = __asm_divsd(v16, v15);
        v19 = 0;
        v20 = *(int64_t *)(8 * ((v19 ^ 0x1fffffffffffffff) + v4) + a3);
        v21 = __asm_mulsd_2(__asm_movsd_1(v20), v18);
        v22 = 8 * v19;
        v23 = __asm_movsd(__asm_addsd_3(v21, *(int64_t *)(v22 + a3)));
        *(int64_t *)((int64_t)&v24 + 32 + v22) = v23;
        v19++;
        while (v19 != v4) {
            // 0xc0
            v20 = *(int64_t *)(8 * ((v19 ^ 0x1fffffffffffffff) + v4) + a3);
            v21 = __asm_mulsd_2(__asm_movsd_1(v20), v18);
            v22 = 8 * v19;
            v23 = __asm_movsd(__asm_addsd_3(v21, *(int64_t *)(v22 + a3)));
            *(int64_t *)((int64_t)&v24 + 32 + v22) = v23;
            v19++;
        }
        // 0xe5
        v25 = __asm_movapd_4(v18);
        dest_mem = memcpy();
        v1 = __asm_movapd((int128_t)v25);
        *(int64_t *)(v13 + a3) = __asm_movsd(v1);
        v3++;
        v2 = __asm_movsd_1(v17);
        v4++;
    }
    // 0x117
    return dest_mem;
}
