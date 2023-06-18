
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
    *(int64_t *)a3 = __asm_movsd(__asm_movq_2(__asm_movq(__asm_movsd_1(a2)) ^ -0x8000000000000000));
    int64_t v1 = __asm_movsd(__asm_movsd_1(0x3ff0000000000000)); // 0x45
    int64_t v2 = __asm_movsd(__asm_movq_2(__asm_movq(__asm_movsd_1(a2)) ^ -0x8000000000000000)); // 0x6c
    if ((int32_t)a1 <= 1) {
        // 0x288
        return 1;
    }
    // 0x8d
    int64_t v3; // bp-8, 0x0
    int64_t v4 = (int64_t)&v3 - 0x3ea0;
    int64_t result = a1 & 0xffffffff;
    int64_t v5 = 1;
    int64_t v6 = v2; // 0x189
    int64_t v7 = v1; // 0xcc
    int64_t v8; // 0x0
    int64_t v9; // 0x15d
    while (true) {
      lab_0xfb:;
        int128_t v10 = __asm_mulsd(__asm_movq_2(__asm_movq(__asm_movsd_1(v6)) ^ -0x8000000000000000), __asm_movsd_1(v6)); // 0xb4
        int128_t v11 = __asm_mulsd_3(__asm_addsd(v10, __asm_movsd_1(0x3ff0000000000000)), v7); // 0xc4
        v7 = __asm_movsd(v11);
        int64_t v12 = 0;
        int64_t v13 = __asm_movsd(__asm_xorps(v11, v11)); // 0x0
        int64_t v14 = *(int64_t *)((v5 + -1 - v12) * (int64_t)&g3 + a2); // 0x111
        int128_t v15 = __asm_movsd_1(v14); // 0x111
        int128_t v16 = __asm_movsd_1(*(int64_t *)(v12 * (int64_t)&g3 + a3)); // 0x121
        int64_t v17 = __asm_movsd(__asm_addsd(__asm_mulsd(v15, v16), __asm_movsd_1(v13))); // 0x136
        v12++;
        v13 = v17;
        while (v12 != v5) {
            // 0xfb
            v14 = *(int64_t *)((v5 + -1 - v12) * (int64_t)&g3 + a2);
            v15 = __asm_movsd_1(v14);
            v16 = __asm_movsd_1(*(int64_t *)(v12 * (int64_t)&g3 + a3));
            v17 = __asm_movsd(__asm_addsd(__asm_mulsd(v15, v16), __asm_movsd_1(v13)));
            v12++;
            v13 = v17;
        }
        // 0x1ad
        v9 = v5 * (int64_t)&g3;
        int128_t v18 = __asm_addsd_4(__asm_movsd_1(*(int64_t *)(v9 + a2)), v17); // 0x162
        v6 = __asm_movsd(__asm_divsd(__asm_movq_2(__asm_movq(v18) ^ -0x8000000000000000), v7));
        int64_t v19 = 0;
        while (true) {
            int64_t v20 = v19 * (int64_t)&g3; // 0x1b8
            int128_t v21 = __asm_movsd_1(*(int64_t *)(v20 + a3)); // 0x1b8
            int128_t v22 = __asm_movsd_1(v6); // 0x1bd
            int64_t v23 = *(int64_t *)((v5 + -1 - v19) * (int64_t)&g3 + a3); // 0x1db
            *(int64_t *)(v20 + v4) = __asm_movsd(__asm_addsd(__asm_mulsd(v22, __asm_movsd_1(v23)), v21));
            v19++;
            v8 = 0;
            if (v19 == v5) {
                goto lab_0x228;
            }
        }
        goto lab_0x25c;
    }
    // 0x288
    return result;
  lab_0x228:;
    int64_t v24 = v8 * (int64_t)&g3; // 0x22f
    *(int64_t *)(v24 + a3) = __asm_movsd(__asm_movsd_1(*(int64_t *)(v24 + v4)));
    int64_t v25 = v8 + 1;
    v8 = v25;
    if (v25 == v5) {
        goto lab_0x25c;
    } else {
        goto lab_0x228;
    }
  lab_0x25c:
    // 0x25c
    *(int64_t *)(v9 + a3) = __asm_movsd(__asm_movsd_1(v6));
    v5++;
    if (v5 == result) {
        return result;
    }
    goto lab_0xfb;
}
