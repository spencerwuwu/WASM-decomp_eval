
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>
#include <math.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "gramschmidt.h"
int64_t kernel_gramschmidt(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint32_t v1 = (int32_t)a2; // 0x24
    if (v1 <= 0) {
        // 0x2b9
        return 0;
    }
    int64_t v2 = a1 & 0xffffffff;
    int64_t result = a2 & 0xffffffff;
    int64_t v3 = 0;
    int64_t v4 = 1; // 0x0
    int64_t v5; // 0x0
    int64_t v6; // 0x0
    int64_t v7; // 0x0
    int64_t * v8; // 0x163
    int64_t v9; // 0x0
    int128_t v10; // 0x0
    int128_t v11; // 0x0
    int128_t v12; // 0x0
    while (true) {
        // 0x2d
        int128_t v13; // 0x0
        int128_t v14 = v13;
        int64_t v15 = v4;
        int64_t v16 = __asm_movsd_1(__asm_xorps(v14, v14)); // 0x30
        int64_t v17 = 8 * v3;
        int64_t v18 = v16; // 0x42
        if ((int32_t)a1 > 0) {
            int64_t v19 = 0;
            int64_t v20 = v16; // 0x8b
            int64_t * v21 = (int64_t *)(v17 + a3 + 0x2580 * v19); // 0x5e
            v20 = __asm_movsd_1(__asm_addsd(__asm_mulsd(__asm_movsd(*v21), __asm_movsd(*v21)), __asm_movsd(v20)));
            v19++;
            v18 = v20;
            while (v19 != v2) {
                // 0x48
                v21 = (int64_t *)(v17 + a3 + 0x2580 * v19);
                v20 = __asm_movsd_1(__asm_addsd(__asm_mulsd(__asm_movsd(*v21), __asm_movsd(*v21)), __asm_movsd(v20)));
                v19++;
                v18 = v20;
            }
        }
        int128_t v22 = __asm_movsd(v18); // 0x9e
        sqrt(v22);
        int64_t v23 = 0x2580 * v3 + a4; // 0xb7
        int64_t v24 = __asm_movsd_1(v22); // 0xbe
        int64_t * v25 = (int64_t *)(v23 + v17); // 0xbe
        *v25 = v24;
        int128_t v26 = v22; // 0xd0
        if ((int32_t)a1 > 0) {
            int64_t v27 = 0;
            int64_t v28 = 0x2580 * v27; // 0xde
            int128_t v29 = __asm_divsd_2(__asm_movsd(*(int64_t *)(v17 + a3 + v28)), *v25); // 0x107
            *(int64_t *)(v17 + a5 + v28) = __asm_movsd_1(v29);
            v27++;
            v26 = v29;
            while (v27 != v2) {
                // 0xd6
                v28 = 0x2580 * v27;
                v29 = __asm_divsd_2(__asm_movsd(*(int64_t *)(v17 + a3 + v28)), *v25);
                *(int64_t *)(v17 + a5 + v28) = __asm_movsd_1(v29);
                v27++;
                v26 = v29;
            }
        }
        int128_t v30 = v26;
        v3++;
        v11 = v30;
        if (v3 < 0x100000000 * a2 >> 32) {
            // 0x14a
            v7 = v17 + a5;
            v6 = v15;
            v10 = v30;
            while (true) {
              lab_0x14a:;
                int128_t v31 = v10;
                int128_t v32 = __asm_xorps(v31, v31); // 0x160
                int64_t v33 = __asm_movsd_1(v32); // 0x163
                int64_t v34 = 8 * v6; // 0x163
                v8 = (int64_t *)(v34 + v23);
                *v8 = v33;
                v12 = v32;
                if ((int32_t)a1 > 0) {
                    // 0x17b
                    v9 = v34 + a3;
                    int64_t v35 = 0;
                    while (true) {
                        int64_t v36 = 0x2580 * v35; // 0x183
                        int128_t v37 = __asm_movsd(*(int64_t *)(v36 + v7)); // 0x191
                        int128_t v38 = __asm_movsd(*(int64_t *)(v36 + v9)); // 0x1ac
                        *v8 = __asm_movsd_1(__asm_addsd(__asm_mulsd(v37, v38), __asm_movsd(*v8)));
                        v35++;
                        v5 = 0;
                        if (v35 == v2) {
                            goto lab_0x1fa;
                        }
                    }
                }
                goto lab_0x13e;
            }
        }
      lab_0x2ab:
        // 0x2ab
        v4 = v15 + 1;
        v13 = v11;
        if (v3 == result) {
            // break -> 0x2b9
            break;
        }
    }
    // 0x2b9
    return result;
  lab_0x1fa:;
    int64_t v39 = 0x2580 * v5; // 0x202
    int64_t * v40 = (int64_t *)(v39 + v9); // 0x210
    int128_t v41 = __asm_movsd(*v40); // 0x210
    int128_t v42 = __asm_movsd(*(int64_t *)(v39 + v7)); // 0x22b
    int128_t v43 = __asm_addsd(__asm_mulsd(__asm_movq_3(__asm_movq(v42) ^ -0x8000000000000000), __asm_movsd(*v8)), v41); // 0x266
    *v40 = __asm_movsd_1(v43);
    int64_t v44 = v5 + 1;
    v12 = v43;
    v5 = v44;
    if (v44 == v2) {
        goto lab_0x13e;
    } else {
        goto lab_0x1fa;
    }
  lab_0x13e:;
    int64_t v45 = v6 + 1;
    v6 = v45;
    v10 = v12;
    v11 = v12;
    if ((int32_t)v45 == v1) {
        // break -> 0x2ab
        goto lab_0x2ab;
    }
    goto lab_0x14a;
}
