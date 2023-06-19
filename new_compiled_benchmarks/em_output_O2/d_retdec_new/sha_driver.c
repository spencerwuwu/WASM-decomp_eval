
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "sha_driver.h"
int64_t local_memset(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t v1 = a3; // 0x3
    int64_t v2 = v1 >= 0 ? a3 : a3 + 3; // 0x5
    if (v1 < 4) {
        // 0x90
        return v2 & 0xffffffff;
    }
    int32_t v3 = a4; // 0xf
    uint32_t v4 = (int32_t)v2 >> 2; // 0x22
    int64_t v5 = v4; // 0x22
    int64_t v6 = (v3 >= 0 == (v3 != 0) ? (4 * a4 + 0x3fffffffc & 0x3fffffffc) + 4 : 0) + a1; // 0x25
    uint32_t v7 = v4 - 1; // 0x28
    int32_t v8; // 0x0
    int64_t v9; // 0x0
    int64_t v10; // 0x0
    if (v7 >= 7) {
        int64_t v11 = (int64_t)v7 + 1; // 0x35
        int64_t v12 = v11 & 0x1fffffff8; // 0x3b
        int32_t v13 = a2;
        int128_t v14 = __asm_pshufd(__asm_movd(v13), 0); // 0x4a
        int64_t v15 = 0; // 0x52
        int64_t v16 = __asm_movdqu(v14); // 0x60
        int64_t v17 = 4 * v15 + v6;
        *(int128_t *)v17 = (int128_t)v16;
        *(int128_t *)(v17 + 16) = (int128_t)__asm_movdqu(v14);
        v15 += 8;
        while (v15 != v12) {
            // 0x60
            v16 = __asm_movdqu(v14);
            v17 = 4 * v15 + v6;
            *(int128_t *)v17 = (int128_t)v16;
            *(int128_t *)(v17 + 16) = (int128_t)__asm_movdqu(v14);
            v15 += 8;
        }
        int64_t result = v5 - v12 & 0xffffffff; // 0x3f
        v8 = v13;
        v9 = result;
        v10 = 4 * v12 + v6;
        if (v11 == v12) {
            // 0x90
            return result;
        }
    } else {
        // 0x22
        v8 = a2;
        v9 = v5;
        v10 = v6;
    }
    int64_t v18 = v10; // 0x0
    int64_t v19 = v9;
    *(int32_t *)v18 = v8;
    int64_t result2 = v19 + 0xffffffff & 0xffffffff; // 0x8c
    v18 += 4;
    while ((int32_t)v19 > 1) {
        // 0x80
        v19 = result2;
        *(int32_t *)v18 = v8;
        result2 = v19 + 0xffffffff & 0xffffffff;
        v18 += 4;
    }
    // 0x90
    return result2;
}
