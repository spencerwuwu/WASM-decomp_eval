
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "sha_driver.h"
int64_t local_memset(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if ((int32_t)a3 < 4) {
        // 0x40
        int64_t result; // 0x0
        return result;
    }
    int32_t v1 = a4; // 0xb
    int64_t v2 = (v1 >= 0 == (v1 != 0) ? (4 * a4 + 0x3fffffffc & 0x3fffffffc) + 4 : 0) + a1; // 0x27
    int64_t v3 = a3 / 4 & 0x3fffffff;
    *(int32_t *)v2 = (int32_t)a2;
    int64_t result2 = v3 + 0xffffffff & 0xffffffff; // 0x3c
    v2 += 4;
    while ((int32_t)v3 > 1) {
        // 0x30
        v3 = result2;
        *(int32_t *)v2 = (int32_t)a2;
        result2 = v3 + 0xffffffff & 0xffffffff;
        v2 += 4;
    }
    // 0x40
    return result2;
}
