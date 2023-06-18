
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "floyd-warshall.h"
int64_t kernel_floyd_warshall(int64_t a1, int64_t a2) {
    // 0x0
    if ((int32_t)a1 <= 0) {
        // 0x13d
        return 0;
    }
    int64_t result = a1 & 0xffffffff;
    int64_t v1 = 0;
    int64_t v2 = 0;
    int64_t v3 = 0x2bc0 * v2 + a2; // 0x53
    int64_t v4 = 0;
    int64_t v5 = 4 * v4; // 0x5a
    int32_t * v6 = (int32_t *)(v5 + v3); // 0x5a
    uint32_t v7 = *v6; // 0x5a
    int32_t v8 = *(int32_t *)(0x2bc0 * v1 + a2 + v5); // 0x8c
    uint32_t v9 = v8 + *(int32_t *)(v3 + 4 * v1); // 0x8c
    *v6 = v7 < v9 ? v7 : v9;
    v4++;
    while (v4 != result) {
        // 0x44
        v5 = 4 * v4;
        v6 = (int32_t *)(v5 + v3);
        v7 = *v6;
        v8 = *(int32_t *)(0x2bc0 * v1 + a2 + v5);
        v9 = v8 + *(int32_t *)(v3 + 4 * v1);
        *v6 = v7 < v9 ? v7 : v9;
        v4++;
    }
    // 0x11c
    v2++;
    while (v2 != result) {
        // 0x44
        v3 = 0x2bc0 * v2 + a2;
        v4 = 0;
        v5 = 4 * v4;
        v6 = (int32_t *)(v5 + v3);
        v7 = *v6;
        v8 = *(int32_t *)(0x2bc0 * v1 + a2 + v5);
        v9 = v8 + *(int32_t *)(v3 + 4 * v1);
        *v6 = v7 < v9 ? v7 : v9;
        v4++;
        while (v4 != result) {
            // 0x44
            v5 = 4 * v4;
            v6 = (int32_t *)(v5 + v3);
            v7 = *v6;
            v8 = *(int32_t *)(0x2bc0 * v1 + a2 + v5);
            v9 = v8 + *(int32_t *)(v3 + 4 * v1);
            *v6 = v7 < v9 ? v7 : v9;
            v4++;
        }
        // 0x11c
        v2++;
    }
    // 0x12f
    v1++;
    while (v1 != result) {
        // 0x38
        v2 = 0;
        v3 = 0x2bc0 * v2 + a2;
        v4 = 0;
        v5 = 4 * v4;
        v6 = (int32_t *)(v5 + v3);
        v7 = *v6;
        v8 = *(int32_t *)(0x2bc0 * v1 + a2 + v5);
        v9 = v8 + *(int32_t *)(v3 + 4 * v1);
        *v6 = v7 < v9 ? v7 : v9;
        v4++;
        while (v4 != result) {
            // 0x44
            v5 = 4 * v4;
            v6 = (int32_t *)(v5 + v3);
            v7 = *v6;
            v8 = *(int32_t *)(0x2bc0 * v1 + a2 + v5);
            v9 = v8 + *(int32_t *)(v3 + 4 * v1);
            *v6 = v7 < v9 ? v7 : v9;
            v4++;
        }
        // 0x11c
        v2++;
        while (v2 != result) {
            // 0x44
            v3 = 0x2bc0 * v2 + a2;
            v4 = 0;
            v5 = 4 * v4;
            v6 = (int32_t *)(v5 + v3);
            v7 = *v6;
            v8 = *(int32_t *)(0x2bc0 * v1 + a2 + v5);
            v9 = v8 + *(int32_t *)(v3 + 4 * v1);
            *v6 = v7 < v9 ? v7 : v9;
            v4++;
            while (v4 != result) {
                // 0x44
                v5 = 4 * v4;
                v6 = (int32_t *)(v5 + v3);
                v7 = *v6;
                v8 = *(int32_t *)(0x2bc0 * v1 + a2 + v5);
                v9 = v8 + *(int32_t *)(v3 + 4 * v1);
                *v6 = v7 < v9 ? v7 : v9;
                v4++;
            }
            // 0x11c
            v2++;
        }
        // 0x12f
        v1++;
    }
    // 0x13d
    return result;
}
