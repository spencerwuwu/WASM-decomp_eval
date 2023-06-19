
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "gramschmidt.h"
int64_t kernel_gramschmidt(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x0
    int128_t v1; // 0x0
    int128_t v2 = v1;
    int64_t result; // 0x0
    if ((int32_t)a2 < 1) {
        // 0x1a5
        return result;
    }
    int64_t v3 = a2 & 0xffffffff; // 0x26
    uint64_t v4 = a1 & 0xffffffff; // 0x29
    int128_t v5 = __asm_xorpd(v2, v2); // 0x3d
    int64_t v6 = 1; // 0x3d
    int64_t v7 = 0; // 0x3d
    int64_t v8; // 0x0
    int64_t v9; // 0x0
    int64_t v10; // 0x0
    int64_t v11; // 0x0
    int128_t v12; // 0x0
    int128_t v13; // 0x0
    int128_t v14; // 0x0
    int128_t v15; // 0x0
    int128_t v16; // 0x0
    while (true) {
      lab_0x4f:
        // 0x4f
        v10 = v7;
        v11 = v6;
        v15 = v5;
        int128_t v17 = v12;
        int128_t v18 = __asm_xorpd(v17, v17); // 0x52
        if ((int32_t)a1 < 1) {
            // 0x80
            __asm_ucomisd(v18, v15);
            v9 = 8 * v10;
            v13 = v18;
            goto lab_0x86;
        } else {
            int64_t v19 = 8 * v10;
            int64_t v20 = 0; // 0x0
            int128_t v21 = __asm_movsd(*(int64_t *)(v19 + a3 + 0x2580 * v20)); // 0x6a
            int128_t v22 = __asm_addsd(v18, __asm_mulsd(v21, v21)); // 0x74
            int64_t v23 = v20 + 1; // 0x78
            int128_t v24 = v22; // 0x7e
            v20 = v23;
            while (v23 != v4) {
                // 0x60
                v21 = __asm_movsd(*(int64_t *)(v19 + a3 + 0x2580 * v20));
                v22 = __asm_addsd(v24, __asm_mulsd(v21, v21));
                v23 = v20 + 1;
                v24 = v22;
                v20 = v23;
            }
            // 0x80
            __asm_ucomisd(v22, v15);
            v9 = v19;
            v13 = v22;
            if (v23 < v4) {
                // 0x90
                sqrt();
                v8 = v19;
                v14 = v22;
                v16 = __asm_xorpd(v15, v15);
                goto lab_0xa7;
            } else {
                goto lab_0x86;
            }
        }
    }
  lab_0x1a5:
    // 0x1a5
    return result;
  lab_0x170:;
    // 0x170
    int64_t v25; // 0x0
    int64_t v26 = v25;
    int64_t v27 = 0x2580 * v26; // 0x170
    int64_t v28; // 0x0
    int64_t * v29 = (int64_t *)(v27 + v28); // 0x17b
    int64_t v30 = *v29; // 0x17b
    int128_t v31 = __asm_movsd(v30); // 0x17b
    int64_t v32; // 0x0
    int64_t v33 = *(int64_t *)(v27 + v32); // 0x184
    int128_t v34 = __asm_movsd(v33); // 0x184
    int64_t * v35; // 0x120
    int64_t v36 = *v35; // 0x18a
    int64_t v37 = __asm_movsd_1(__asm_subsd(v31, __asm_mulsd_3(v34, v36))); // 0x192
    *v29 = v37;
    int64_t v38 = v26 + 1; // 0x198
    v25 = v38;
    if (v38 != v4) {
        goto lab_0x170;
    } else {
        goto lab_0x110;
    }
  lab_0x110:;
    // 0x110
    int64_t v39; // 0x0
    int64_t v40 = v39 + 1; // 0x110
    int128_t v41; // 0x0
    int128_t v42 = v41; // 0x116
    v39 = v40;
    if (v40 == v3) {
        // break -> 0x40
        goto lab_0x40;
    }
    goto lab_0x11c;
  lab_0x86:
    // 0x86
    v8 = v9;
    v14 = __asm_sqrtsd(v13);
    v16 = v15;
    goto lab_0xa7;
  lab_0xa7:
    // 0xa7
    v5 = v16;
    int64_t v55 = v8;
    int64_t v43 = 0x2580 * v10 + a4; // 0xae
    int64_t v56 = __asm_movsd_1(v14); // 0xb3
    int64_t * v57 = (int64_t *)(v55 + v43); // 0xb3
    *v57 = v56;
    int128_t v58 = v14; // 0xbb
    if ((int32_t)a1 >= 1) {
        int64_t v59 = 0; // 0xef
        int64_t v60 = 0x2580 * v59; // 0xd0
        int128_t v61 = __asm_divsd_2(__asm_movsd(*(int64_t *)(v60 + v55 + a3)), *v57); // 0xe1
        *(int64_t *)(v55 + a5 + v60) = __asm_movsd_1(v61);
        v59++;
        v58 = v61;
        while (v59 != v4) {
            // 0xd0
            v60 = 0x2580 * v59;
            v61 = __asm_divsd_2(__asm_movsd(*(int64_t *)(v60 + v55 + a3)), *v57);
            *(int64_t *)(v55 + a5 + v60) = __asm_movsd_1(v61);
            v59++;
            v58 = v61;
        }
    }
    int128_t v62 = v58;
    v7 = v10 + 1;
    v42 = v62;
    if (v7 < 0x100000000 * a2 >> 32) {
        // 0x11c
        v41 = v62;
        v39 = v11;
        while (true) {
          lab_0x11c:
            // 0x11c
            *(int64_t *)(8 * v39 + v43) = 0;
            if ((int32_t)a1 >= 1) {
                // 0x12c
                __asm_movsd(0);
                while (true) {
                    // 0x140
                    int64_t v44; // 0x0
                    int64_t v45 = v44;
                    int128_t v46; // 0x0
                    int128_t v47 = v46;
                    int64_t v48 = 0x2580 * v45; // 0x140
                    int64_t v49 = *(int64_t *)(v48 + v32); // 0x14b
                    int128_t v50 = __asm_movsd(v49); // 0x14b
                    int64_t v51 = *(int64_t *)(v48 + v28); // 0x154
                    int128_t v52 = __asm_addsd(v47, __asm_mulsd_3(v50, v51)); // 0x15a
                    int64_t v53 = __asm_movsd_1(v52); // 0x15e
                    *v35 = v53;
                    int64_t v54 = v45 + 1; // 0x162
                    v46 = v52;
                    v44 = v54;
                    v25 = 0;
                    if (v54 == v4) {
                        goto lab_0x170;
                    }
                }
            }
            goto lab_0x110;
        }
    }
  lab_0x40:
    // 0x40
    v12 = v42;
    v6 = v11 + 1;
    result = v43;
    if (v7 == v3) {
        // break -> 0x1a5
        goto lab_0x1a5;
    }
    goto lab_0x4f;
}
