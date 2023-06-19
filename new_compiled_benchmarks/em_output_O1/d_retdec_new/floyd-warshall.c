
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "floyd-warshall.h"
int64_t kernel_floyd_warshall(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    if ((int32_t)a1 < 1) {
        // 0x78
        int64_t result; // 0x0
        return result;
    }
    int64_t result2 = a1 & 0xffffffff; // 0x4
    int64_t v1 = 0; // 0x8
    int64_t v2 = 0; // 0x12
    int64_t v3 = 0x2bc0 * v2 + a2; // 0x27
    int64_t v4 = 0; // 0x31
    int64_t v5 = 4 * v4; // 0x4a
    int32_t v6 = *(int32_t *)(v3 + 4 * v1) + *(int32_t *)(0x2bc0 * v1 + a2 + v5); // 0x4e
    int32_t * v7 = (int32_t *)(v5 + v3); // 0x51
    int32_t v8 = *v7; // 0x51
    int32_t v9 = v8 - v6; // 0x55
    *v7 = v9 < 0 == ((v9 ^ v8) & (v8 ^ v6)) < 0 ? v6 : v8;
    v4++;
    while (v4 != result2) {
        // 0x40
        v5 = 4 * v4;
        v6 = *(int32_t *)(v3 + 4 * v1) + *(int32_t *)(0x2bc0 * v1 + a2 + v5);
        v7 = (int32_t *)(v5 + v3);
        v8 = *v7;
        v9 = v8 - v6;
        *v7 = v9 < 0 == ((v9 ^ v8) & (v8 ^ v6)) < 0 ? v6 : v8;
        v4++;
    }
    // 0x68
    v2++;
    while (v2 != result2) {
        // 0x20
        v3 = 0x2bc0 * v2 + a2;
        v4 = 0;
        v5 = 4 * v4;
        v6 = *(int32_t *)(v3 + 4 * v1) + *(int32_t *)(0x2bc0 * v1 + a2 + v5);
        v7 = (int32_t *)(v5 + v3);
        v8 = *v7;
        v9 = v8 - v6;
        *v7 = v9 < 0 == ((v9 ^ v8) & (v8 ^ v6)) < 0 ? v6 : v8;
        v4++;
        while (v4 != result2) {
            // 0x40
            v5 = 4 * v4;
            v6 = *(int32_t *)(v3 + 4 * v1) + *(int32_t *)(0x2bc0 * v1 + a2 + v5);
            v7 = (int32_t *)(v5 + v3);
            v8 = *v7;
            v9 = v8 - v6;
            *v7 = v9 < 0 == ((v9 ^ v8) & (v8 ^ v6)) < 0 ? v6 : v8;
            v4++;
        }
        // 0x68
        v2++;
    }
    // 0x70
    v1++;
    while (v1 != result2) {
        // 0x10
        v2 = 0;
        v3 = 0x2bc0 * v2 + a2;
        v4 = 0;
        v5 = 4 * v4;
        v6 = *(int32_t *)(v3 + 4 * v1) + *(int32_t *)(0x2bc0 * v1 + a2 + v5);
        v7 = (int32_t *)(v5 + v3);
        v8 = *v7;
        v9 = v8 - v6;
        *v7 = v9 < 0 == ((v9 ^ v8) & (v8 ^ v6)) < 0 ? v6 : v8;
        v4++;
        while (v4 != result2) {
            // 0x40
            v5 = 4 * v4;
            v6 = *(int32_t *)(v3 + 4 * v1) + *(int32_t *)(0x2bc0 * v1 + a2 + v5);
            v7 = (int32_t *)(v5 + v3);
            v8 = *v7;
            v9 = v8 - v6;
            *v7 = v9 < 0 == ((v9 ^ v8) & (v8 ^ v6)) < 0 ? v6 : v8;
            v4++;
        }
        // 0x68
        v2++;
        while (v2 != result2) {
            // 0x20
            v3 = 0x2bc0 * v2 + a2;
            v4 = 0;
            v5 = 4 * v4;
            v6 = *(int32_t *)(v3 + 4 * v1) + *(int32_t *)(0x2bc0 * v1 + a2 + v5);
            v7 = (int32_t *)(v5 + v3);
            v8 = *v7;
            v9 = v8 - v6;
            *v7 = v9 < 0 == ((v9 ^ v8) & (v8 ^ v6)) < 0 ? v6 : v8;
            v4++;
            while (v4 != result2) {
                // 0x40
                v5 = 4 * v4;
                v6 = *(int32_t *)(v3 + 4 * v1) + *(int32_t *)(0x2bc0 * v1 + a2 + v5);
                v7 = (int32_t *)(v5 + v3);
                v8 = *v7;
                v9 = v8 - v6;
                *v7 = v9 < 0 == ((v9 ^ v8) & (v8 ^ v6)) < 0 ? v6 : v8;
                v4++;
            }
            // 0x68
            v2++;
        }
        // 0x70
        v1++;
    }
    // 0x78
    return result2;
}
