
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "sha_driver.h"
int64_t local_memset(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a1; // 0x3b
    if ((int32_t)a4 >= 1) {
        int64_t v2 = a1; // 0x45
        int64_t v3 = 0x100000000 * a4;
        v3 -= 0x100000000;
        v2 += 4;
        v1 = v2;
        while ((int32_t)(v3 / 0x100000000) >= 1) {
            // 0x41
            v3 -= 0x100000000;
            v2 += 4;
            v1 = v2;
        }
    }
    int64_t v4 = (0x100000000 * (int64_t)((int32_t)a3 >> 31) | a3 & 0xffffffff) / 4; // 0x1a
    int32_t v5 = v4; // 0x1a
    if (v5 < 1) {
        // 0x84
        return v4 & 0xffffffff;
    }
    int64_t v6 = v1; // 0x0
    for (int32_t i = v5; i >= 1; i--) {
        // 0x6b
        *(int32_t *)v6 = (int32_t)a2;
        v6 += 4;
    }
    // 0x84
    return 0;
}
