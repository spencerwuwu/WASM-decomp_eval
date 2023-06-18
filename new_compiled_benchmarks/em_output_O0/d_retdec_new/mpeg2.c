
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "mpeg2.h"
int64_t read(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a3 >> 32; // 0xc
    int64_t v2 = v1; // 0x33
    int64_t v3 = a2; // 0x33
    if ((int32_t)v1 < 1) {
        // 0x62
        return v1 & 0xffffffff;
    }
    int64_t v4 = a1; // 0x33
    v2 = 0x100000000 * v2 - 0x100000000 >> 32;
    *(char *)v4 = *(char *)v3;
    v3++;
    v4++;
    while ((int32_t)v2 >= 1) {
        // 0x39
        v2 = 0x100000000 * v2 - 0x100000000 >> 32;
        *(char *)v4 = *(char *)v3;
        v3++;
        v4++;
    }
    // 0x62
    return v1 & 0xffffffff;
}
void Fill_Buffer(void) {
    // 0x70
    *(int64_t *)*(int64_t *)165 = *(int64_t *)172;
    if (*(int32_t *)*(int64_t *)182 != 0) {
        int64_t v1 = *(int64_t *)*(int64_t *)198; // 0xc6
        *(int64_t *)*(int64_t *)215 = v1 - 2048;
    }
}
int32_t Show_Bits(int32_t N) {
    // 0x1b0
    return *(int32_t *)*(int64_t *)446 >> (-N & 31);
}
int32_t Get_Bits1(void) {
    // 0x1d0
    return Get_Bits(1);
}
int32_t Get_Bits(int32_t N) {
    int32_t result = Show_Bits(N); // 0x1ee
    Flush_Buffer(N);
    return result;
}
void Flush_Buffer(int32_t N) {
    int32_t v1 = *(int32_t *)*(int64_t *)549; // 0x225
    *(int32_t *)*(int64_t *)562 = v1 << (N & 31);
    int32_t v2 = *(int32_t *)*(int64_t *)574 - N; // 0x240
    *(int32_t *)*(int64_t *)585 = v2;
    if (v2 > 24) {
        // 0x357
        return;
    }
    int32_t v3 = v2; // 0x270
    int32_t v4 = v2; // 0x270
    if (*(int64_t *)*(int64_t *)621 < *(int64_t *)607 + 2044) {
        int64_t v5 = *(int64_t *)*(int64_t *)642; // 0x282
        *(int64_t *)*(int64_t *)659 = v5 + 1;
        int32_t v6 = *(int32_t *)*(int64_t *)684; // 0x2ac
        int64_t v7 = *(int64_t *)693; // 0x2ae
        *(int32_t *)v7 = v6 | (int32_t)*(char *)v5 << (24 - v3 & 31);
        v3 += 8;
        while (v3 < 25) {
            // 0x27b
            v5 = *(int64_t *)*(int64_t *)642;
            *(int64_t *)*(int64_t *)659 = v5 + 1;
            v6 = *(int32_t *)*(int64_t *)684;
            v7 = *(int64_t *)693;
            *(int32_t *)v7 = v6 | (int32_t)*(char *)v5 << (24 - v3 & 31);
            v3 += 8;
        }
        // 0x34b
        *(int32_t *)*(int64_t *)853 = v3;
        // 0x357
        return;
    }
    if (*(int64_t *)*(int64_t *)745 >= *(int64_t *)731 + 2048) {
        // 0x2f2
        Fill_Buffer();
    }
    int64_t v8 = *(int64_t *)*(int64_t *)766; // 0x2fe
    *(int64_t *)*(int64_t *)783 = v8 + 1;
    int32_t v9 = *(int32_t *)*(int64_t *)808; // 0x328
    int64_t v10 = *(int64_t *)817; // 0x32a
    *(int32_t *)v10 = v9 | (int32_t)*(char *)v8 << (24 - v4 & 31);
    v4 += 8;
    while (v4 < 25) {
        // 0x2d4
        if (*(int64_t *)*(int64_t *)745 >= *(int64_t *)731 + 2048) {
            // 0x2f2
            Fill_Buffer();
        }
        // 0x2f7
        v8 = *(int64_t *)*(int64_t *)766;
        *(int64_t *)*(int64_t *)783 = v8 + 1;
        v9 = *(int32_t *)*(int64_t *)808;
        v10 = *(int64_t *)817;
        *(int32_t *)v10 = v9 | (int32_t)*(char *)v8 << (24 - v4 & 31);
        v4 += 8;
    }
    // 0x34b
    *(int32_t *)*(int64_t *)853 = v4;
}
int32_t Get_motion_code(void) {
    // 0x360
    if (Get_Bits1() != 0) {
        // 0x3f1
        return 0;
    }
    uint32_t v1 = Show_Bits(9); // 0x387
    int32_t result; // 0x360
    if (v1 >= 64) {
        int64_t v2 = 2 * v1 / 64; // 0x3ac
        Flush_Buffer((int32_t)*(char *)(*(int64_t *)940 + (v2 | 1)));
        if (Get_Bits1() == 0) {
            // 0x3df
            result = (int32_t)*(char *)(*(int64_t *)1002 + v2);
        } else {
            // 0x3c4
            result = -(int32_t)*(char *)(*(int64_t *)975 + v2);
        }
        // 0x3f1
        return result;
    }
    if (v1 >= 24) {
        int64_t v3 = 2 * v1 / 8; // 0x41a
        Flush_Buffer((int32_t)*(char *)(*(int64_t *)1050 + (v3 | 1)));
        if (Get_Bits1() == 0) {
            // 0x44d
            result = (int32_t)*(char *)(*(int64_t *)1112 + v3);
        } else {
            // 0x432
            result = -(int32_t)*(char *)(*(int64_t *)1085 + v3);
        }
        // 0x3f1
        return result;
    }
    int32_t v4 = v1 - 12; // 0x46d
    if (v4 < 0) {
        // 0x3f1
        return 0;
    }
    int64_t v5 = 2 * (int64_t)v4; // 0x493
    Flush_Buffer((int32_t)*(char *)(*(int64_t *)1171 + (v5 | 1)));
    if (Get_Bits1() == 0) {
        // 0x4c6
        result = (int32_t)*(char *)(*(int64_t *)1233 + v5);
    } else {
        // 0x4ab
        result = -(int32_t)*(char *)(*(int64_t *)1206 + v5);
    }
    // 0x3f1
    return result;
}
int32_t Get_dmvector(void) {
    int32_t result = 0; // 0x505
    if (Get_Bits(1) != 0) {
        // 0x50b
        result = Get_Bits(1) != 0 ? -1 : 1;
    }
    // 0x536
    return result;
}
void motion_vectors(int32_t (*PMV)[1][1], int32_t * dmvector, int32_t (*motion_vertical_field_select)[1], int32_t s, int32_t motion_vector_count, int32_t mv_format, int32_t h_r_size, int32_t v_r_size, int32_t dmv, int32_t mvscale) {
    if (motion_vector_count != 1) {
        int32_t v1 = Get_Bits(1); // 0x614
        int64_t v2 = s; // 0x61f
        int64_t v3 = 4 * v2 + (int64_t)motion_vertical_field_select;
        *(int32_t *)v3 = v1;
        int64_t v4 = 8 * v2 + (int64_t)PMV;
        motion_vector((int32_t *)v4, dmvector, h_r_size, v_r_size, dmv, mvscale, 0);
        *(int32_t *)(v3 + 8) = Get_Bits(1);
        motion_vector((int32_t *)(v4 + 16), dmvector, h_r_size, v_r_size, dmv, mvscale, 0);
        // 0x6a0
        return;
    }
    int64_t v5; // 0x540
    if ((dmv || mv_format) == 0) {
        int32_t v6 = Get_Bits(1); // 0x58e
        int64_t v7 = s;
        int64_t v8 = 4 * v7 + (int64_t)motion_vertical_field_select;
        *(int32_t *)v8 = v6;
        *(int32_t *)(v8 + 8) = v6;
        v5 = v7;
    } else {
        // 0x575
        v5 = s;
    }
    int64_t v9 = 8 * v5 + (int64_t)PMV;
    int32_t * v10 = (int32_t *)v9; // 0x5d6
    motion_vector(v10, dmvector, h_r_size, v_r_size, dmv, mvscale, 0);
    *(int32_t *)(v9 + 16) = *v10;
    *(int32_t *)(v9 + 20) = *(int32_t *)(v9 + 4);
}
void motion_vector(int32_t * PMV, int32_t * dmvector, int32_t h_r_size, int32_t v_r_size, int32_t dmv, int32_t mvscale, int32_t full_pel_vector) {
    int32_t v1 = Get_motion_code(); // 0x6d1
    int32_t v2 = 0; // 0x6dd
    if (h_r_size != 0 && v1 != 0) {
        // 0x6ed
        v2 = Get_Bits(h_r_size);
    }
    // 0x707
    decode_motion_vector(PMV, h_r_size, v1, v2, full_pel_vector);
    if (dmv != 0) {
        // 0x72d
        *dmvector = Get_dmvector();
    }
    int32_t v3 = Get_motion_code(); // 0x73a
    int32_t v4 = 0; // 0x746
    if (v_r_size != 0 && v3 != 0) {
        // 0x756
        v4 = Get_Bits(v_r_size);
    }
    int32_t * v5 = (int32_t *)((int64_t)PMV + 4);
    if (mvscale == 0) {
        // 0x78d
        decode_motion_vector(v5, v_r_size, v3, v4, full_pel_vector);
    } else {
        // 0x7b1
        *v5 = *v5 >> 1;
        decode_motion_vector(v5, v_r_size, v3, v4, full_pel_vector);
        *v5 = 2 * *v5;
    }
    if (dmv != 0) {
        // 0x7c8
        *(int32_t *)((int64_t)dmvector + 4) = Get_dmvector();
    }
}
void decode_motion_vector(int32_t * pred, int32_t r_size, uint32_t motion_code, int32_t motion_residual, int32_t full_pel_vector) {
    uint32_t v1 = r_size & 31; // 0x80b
    uint32_t v2 = 16 << v1;
    uint32_t v3 = (int32_t)(full_pel_vector != 0);
    int64_t v4; // 0x7e0
    int32_t v5 = (int32_t)v4 >> v3;
    int32_t v6; // 0x7e0
    if (motion_code >= 1) {
        int32_t v7 = motion_residual + 1 + (motion_code - 1 << v1) + v5; // 0x855
        v6 = v7;
        if (v7 >= v2) {
            // 0x867
            v6 = v7 - 2 * v2;
        }
        // 0x8c7
        *pred = v6 << v3;
        return;
    }
    // 0x87a
    if (motion_code == 0) {
        // 0x8c7
        *pred = v5 << v3;
        return;
    }
    int32_t v8 = v5 + -1 - ((-1 - motion_code << v1) + motion_residual); // 0x89c
    v6 = v8;
    if (v8 < -v2) {
        // 0x8b1
        v6 = v8 + 2 * v2;
    }
    // 0x8c7
    *pred = v6 << v3;
}
