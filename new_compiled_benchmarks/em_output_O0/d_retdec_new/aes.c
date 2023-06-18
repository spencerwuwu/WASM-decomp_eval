
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "aes.h"
int64_t encrypt(int64_t a1, int64_t a2, int64_t a3) {
    int32_t v1 = a3; // 0x10
    __asm_movaps_1(__asm_movaps(g5));
    __asm_movaps_1(__asm_movaps(g4));
    __asm_movaps_1(__asm_movaps(g3));
    __asm_movaps_1(__asm_movaps(g2));
    KeySchedule(v1, (int32_t *)a2);
    switch (v1) {
        case 0x1f480: {
            // 0xf9
            *(int32_t *)*(int64_t *)256 = 0;
            int64_t result = *(int64_t *)269; // 0x106
            *(int32_t *)result = 4;
            // 0x1ae
            return result;
        }
        case 0x1f4c0: {
        }
        case 0x2eec0: {
            // 0x156
            *(int32_t *)*(int64_t *)349 = 2;
            int64_t result2 = *(int64_t *)362; // 0x163
            *(int32_t *)result2 = 6;
            // 0x1ae
            return result2;
        }
        case 0x2ee80: {
            // 0x118
            *(int32_t *)*(int64_t *)287 = 2;
            int64_t result3 = *(int64_t *)300; // 0x125
            *(int32_t *)result3 = 4;
            // 0x1ae
            return result3;
        }
        case 0x3e880: {
            // 0x137
            *(int32_t *)*(int64_t *)318 = 4;
            int64_t result4 = *(int64_t *)331; // 0x144
            *(int32_t *)result4 = 4;
            // 0x1ae
            return result4;
        }
        case 0x3e8c0: {
            // 0x175
            *(int32_t *)*(int64_t *)380 = 4;
            int64_t result5 = *(int64_t *)393; // 0x182
            *(int32_t *)result5 = 6;
            // 0x1ae
            return result5;
        }
        default: {
            uint32_t result6 = v1 - 0x3e900; // 0xe9
            if (result6 != 0) {
                // 0x1ae
                return result6;
            }
        }
        case 0x1f500: {
        }
        case 0x2ef00: {
            // 0x194
            *(int32_t *)*(int64_t *)411 = 4;
            int64_t result7 = *(int64_t *)424; // 0x1a1
            *(int32_t *)result7 = 8;
            // 0x1ae
            return result7;
        }
    }
}
int32_t KeySchedule(int32_t type, int32_t * key) {
    int32_t v1 = 4; // 0x290
    int32_t v2 = 4; // 0x290
    int32_t v3 = 11; // 0x290
    int64_t v4; // 0x290
    int64_t v5; // 0x467
    int64_t v6; // 0x290
    switch (type) {
        case 0x1f4c0: {
            // 0x367
            v1 = 4;
            v2 = 6;
            v3 = 13;
        }
        case 0x1f480: {
          lab_0x443:
            // 0x443
            v5 = 0x100000000 * (int64_t)key >> 32;
            v6 = v1;
            v4 = 0;
            // break -> 0x45d
            break;
        }
        case 0x1f500: {
            // 0x381
            v1 = 4;
            v2 = 8;
            v3 = 15;
            // branch (via goto) -> 0x443
            goto lab_0x443;
        }
        case 0x2ee80: {
            // 0x39b
            v1 = 6;
            v2 = 4;
            v3 = 13;
            // branch (via goto) -> 0x443
            goto lab_0x443;
        }
        case 0x2eec0: {
            // 0x3b5
            v1 = 6;
            v2 = 6;
            v3 = 13;
            // branch (via goto) -> 0x443
            goto lab_0x443;
        }
        case 0x2ef00: {
            // 0x3cf
            v1 = 6;
            v2 = 8;
            v3 = 15;
            // branch (via goto) -> 0x443
            goto lab_0x443;
        }
        case 0x3e880: {
            // 0x3e9
            v1 = 8;
            v2 = 4;
            v3 = 15;
            // branch (via goto) -> 0x443
            goto lab_0x443;
        }
        case 0x3e8c0: {
            // 0x403
            v1 = 8;
            v2 = 6;
            v3 = 15;
            // branch (via goto) -> 0x443
            goto lab_0x443;
        }
        case 0x3e900: {
            // 0x41d
            v1 = 8;
            v2 = 8;
            v3 = 15;
            // branch (via goto) -> 0x443
            goto lab_0x443;
        }
        default: {
            // 0x6c4
            return -1;
        }
    }
    int64_t v7 = 4 * v4;
    int32_t v8; // 0x479
    for (int64_t i = 0; i < 4; i++) {
        // 0x467
        v8 = *(int32_t *)(4 * (i + v7) + v5);
        *(int32_t *)(480 * i + v7 + *(int64_t *)1159) = v8;
    }
    int64_t v9 = v4 + 1;
    while (v9 != v6) {
        // 0x45d
        v7 = 4 * v9;
        for (int64_t i = 0; i < 4; i++) {
            // 0x467
            v8 = *(int32_t *)(4 * (i + v7) + v5);
            *(int32_t *)(480 * i + v7 + *(int64_t *)1159) = v8;
        }
        // 0x4ab
        v9++;
    }
    uint32_t v10 = v3 * v2;
    if (v1 >= v10) {
        // 0x6c4
        return 0;
    }
    // 0x4d6
    int64_t v11; // bp-8, 0x290
    int64_t v12 = (int64_t)&v11 - 64;
    int64_t v13 = v6;
    int32_t v14 = (0x100000000 * (int64_t)((int32_t)v13 >> 31) | v13) % v6; // 0x4da
    int64_t v15; // 0x290
    if (v14 == 0) {
        // 0x4e6
        v15 = 4 * v13;
        SubByte(*(int32_t *)(v15 + 476 + *(int64_t *)1270));
        SubByte(*(int32_t *)(v15 + 956 + *(int64_t *)1332));
        SubByte(*(int32_t *)(v15 + 1436 + *(int64_t *)1363));
        SubByte(*(int32_t *)(v15 - 4 + *(int64_t *)1394));
    }
    int64_t v16 = 0; // 0x5f5
    int64_t v17; // 0x290
    int32_t * v18; // 0x620
    if (v1 >= 7 && v14 == 4) {
        v18 = (int32_t *)(4 * v16 + v12);
        *v18 = SubByte(*v18);
        v17 = v16 + 1;
        v16 = v17;
        while (v17 != 4) {
            // 0x61c
            v18 = (int32_t *)(4 * v16 + v12);
            *v18 = SubByte(*v18);
            v17 = v16 + 1;
            v16 = v17;
        }
    }
    int64_t v19; // 0x65b
    int64_t v20; // 0x662
    int32_t v21; // 0x675
    int32_t v22; // 0x67c
    for (int64_t i = 0; i < 4; i++) {
        // 0x657
        v19 = *(int64_t *)1634;
        v20 = 480 * i;
        v21 = *(int32_t *)(v20 + 4 * (v13 - v6) + v19);
        v22 = *(int32_t *)(4 * i + v12);
        *(int32_t *)(v20 + 4 * v13 + *(int64_t *)1675) = v22 ^ v21;
    }
    int64_t v23 = v13 + 1;
    while (v23 != (int64_t)v10) {
        // 0x4d6
        v13 = v23;
        v14 = (0x100000000 * (int64_t)((int32_t)v13 >> 31) | v13) % v6;
        if (v14 == 0) {
            // 0x4e6
            v15 = 4 * v13;
            SubByte(*(int32_t *)(v15 + 476 + *(int64_t *)1270));
            SubByte(*(int32_t *)(v15 + 956 + *(int64_t *)1332));
            SubByte(*(int32_t *)(v15 + 1436 + *(int64_t *)1363));
            SubByte(*(int32_t *)(v15 - 4 + *(int64_t *)1394));
        }
        // 0x57d
        v16 = 0;
        if (v1 >= 7 && v14 == 4) {
            v18 = (int32_t *)(4 * v16 + v12);
            *v18 = SubByte(*v18);
            v17 = v16 + 1;
            v16 = v17;
            while (v17 != 4) {
                // 0x61c
                v18 = (int32_t *)(4 * v16 + v12);
                *v18 = SubByte(*v18);
                v17 = v16 + 1;
                v16 = v17;
            }
        }
        for (int64_t i = 0; i < 4; i++) {
            // 0x657
            v19 = *(int64_t *)1634;
            v20 = 480 * i;
            v21 = *(int32_t *)(v20 + 4 * (v13 - v6) + v19);
            v22 = *(int32_t *)(4 * i + v12);
            *(int32_t *)(v20 + 4 * v13 + *(int64_t *)1675) = v22 ^ v21;
        }
        // 0x6af
        v23 = v13 + 1;
    }
    // 0x6c4
    return 0;
}
int32_t AddRoundKey(int32_t * statemt, int32_t type, int32_t n) {
    int32_t v1 = 4; // 0x6d0
    int64_t v2; // 0x6d0
    int64_t v3; // 0x7d7
    switch (type) {
        case 0x1f4c0: {
        }
        case 0x2eec0: {
        }
        case 0x3e8c0: {
            // 0x798
            v1 = 6;
        }
        case 0x1f480: {
        }
        case 0x2ee80: {
        }
        case 0x3e880: {
          lab_0x7be:
            // 0x7be
            v3 = (int64_t)statemt;
            v2 = 0;
            // break -> 0x7be
            break;
        }
        case 0x1f500: {
        }
        case 0x2ef00: {
        }
        case 0x3e900: {
            // 0x7a4
            v1 = 8;
            // branch (via goto) -> 0x7be
            goto lab_0x7be;
        }
        default: {
            int32_t v4; // 0x6d0
            if ((uint32_t)v4 <= 0) {
                // 0x891
                return 0;
            }
            // branch (via goto) -> 0x7be
            goto lab_0x7be;
        }
    }
    int32_t v5 = v2;
    int64_t v6 = 4 * (int64_t)(v1 * n + v5); // 0x7d4
    int32_t v7 = 4 * v5; // 0x7de
    int32_t * v8 = (int32_t *)(4 * (int64_t)v7 + v3); // 0x7e4
    *v8 = *v8 ^ *(int32_t *)(v6 + *(int64_t *)2004);
    int32_t * v9 = (int32_t *)(4 * (int64_t)(v7 | 1) + v3); // 0x817
    *v9 = *v9 ^ *(int32_t *)(v6 + 480 + *(int64_t *)2048);
    int32_t * v10 = (int32_t *)(4 * (int64_t)(v7 | 2) + v3); // 0x84a
    *v10 = *v10 ^ *(int32_t *)(v6 + 960 + *(int64_t *)2099);
    int32_t * v11 = (int32_t *)(4 * (int64_t)(v7 | 3) + v3); // 0x87d
    *v11 = *v11 ^ *(int32_t *)(v6 + 1440 + *(int64_t *)2150);
    int64_t v12 = v2 + 1;
    while (v12 != (int64_t)v1) {
        // 0x7be
        v5 = v12;
        v6 = 4 * (int64_t)(v1 * n + v5);
        v7 = 4 * v5;
        v8 = (int32_t *)(4 * (int64_t)v7 + v3);
        *v8 = *v8 ^ *(int32_t *)(v6 + *(int64_t *)2004);
        v9 = (int32_t *)(4 * (int64_t)(v7 | 1) + v3);
        *v9 = *v9 ^ *(int32_t *)(v6 + 480 + *(int64_t *)2048);
        v10 = (int32_t *)(4 * (int64_t)(v7 | 2) + v3);
        *v10 = *v10 ^ *(int32_t *)(v6 + 960 + *(int64_t *)2099);
        v11 = (int32_t *)(4 * (int64_t)(v7 | 3) + v3);
        *v11 = *v11 ^ *(int32_t *)(v6 + 1440 + *(int64_t *)2150);
        v12++;
    }
    // 0x891
    return 0;
}
void ByteSub_ShiftRow(int32_t * statemt, int32_t nb) {
    int64_t v1 = (int64_t)statemt;
    int64_t v2; // 0x8a0
    switch (nb) {
        case 4: {
            int64_t v3 = 0x100000000 * v1 >> 32; // 0x8e1
            int32_t * v4 = (int32_t *)(v3 + 4); // 0x8e5
            int32_t v5 = *v4; // 0x8e5
            int64_t v6 = *(int64_t *)2293; // 0x8ee
            int32_t v7 = *(int32_t *)(64 * (int64_t)(v5 >> 4) + v6 + (int64_t)(4 * v5 & 60)); // 0x909
            int32_t * v8 = (int32_t *)(v3 + 20); // 0x913
            int32_t v9 = *v8; // 0x913
            int64_t v10 = *(int64_t *)2339; // 0x91c
            int32_t v11 = *(int32_t *)(64 * (int64_t)(v9 >> 4) + v10 + (int64_t)(4 * v9 & 60)); // 0x937
            *v4 = v11;
            int32_t * v12 = (int32_t *)(v3 + 36); // 0x945
            int32_t v13 = *v12; // 0x945
            int64_t v14 = *(int64_t *)2389; // 0x94e
            int32_t v15 = *(int32_t *)(64 * (int64_t)(v13 >> 4) + v14 + (int64_t)(4 * v13 & 60)); // 0x969
            *v8 = v15;
            int32_t * v16 = (int32_t *)(v3 + 52); // 0x977
            int32_t v17 = *v16; // 0x977
            int64_t v18 = *(int64_t *)2439; // 0x980
            int32_t v19 = *(int32_t *)(64 * (int64_t)(v17 >> 4) + v18 + (int64_t)(4 * v17 & 60)); // 0x99b
            *v12 = v19;
            *v16 = v7;
            int32_t * v20 = (int32_t *)(v3 + 8); // 0x9b3
            int32_t v21 = *v20; // 0x9b3
            int64_t v22 = *(int64_t *)2499; // 0x9bc
            int32_t v23 = *(int32_t *)(64 * (int64_t)(v21 >> 4) + v22 + (int64_t)(4 * v21 & 60)); // 0x9d7
            int32_t * v24 = (int32_t *)(v3 + 40); // 0x9e1
            int32_t v25 = *v24; // 0x9e1
            int64_t v26 = *(int64_t *)2545; // 0x9ea
            int32_t v27 = *(int32_t *)(64 * (int64_t)(v25 >> 4) + v26 + (int64_t)(4 * v25 & 60)); // 0xa05
            *v20 = v27;
            *v24 = v23;
            int32_t * v28 = (int32_t *)(v3 + 24); // 0xa1d
            int32_t v29 = *v28; // 0xa1d
            int64_t v30 = *(int64_t *)2605; // 0xa26
            int32_t v31 = *(int32_t *)(64 * (int64_t)(v29 >> 4) + v30 + (int64_t)(4 * v29 & 60)); // 0xa41
            int32_t * v32 = (int32_t *)(v3 + (int64_t)&g1); // 0xa4b
            int32_t v33 = *v32; // 0xa4b
            int64_t v34 = *(int64_t *)2651; // 0xa54
            int32_t v35 = *(int32_t *)(64 * (int64_t)(v33 >> 4) + v34 + (int64_t)(4 * v33 & 60)); // 0xa6f
            *v28 = v35;
            *v32 = v31;
            int32_t * v36 = (int32_t *)(v3 + 12); // 0xa87
            int32_t v37 = *v36; // 0xa87
            int64_t v38 = *(int64_t *)2711; // 0xa90
            int32_t v39 = *(int32_t *)(64 * (int64_t)(v37 >> 4) + v38 + (int64_t)(4 * v37 & 60)); // 0xaab
            int32_t * v40 = (int32_t *)(v3 + 60); // 0xab5
            int32_t v41 = *v40; // 0xab5
            int64_t v42 = *(int64_t *)2757; // 0xabe
            int32_t v43 = *(int32_t *)(64 * (int64_t)(v41 >> 4) + v42 + (int64_t)(4 * v41 & 60)); // 0xad9
            *v36 = v43;
            int32_t * v44 = (int32_t *)(v3 + 44); // 0xae7
            int32_t v45 = *v44; // 0xae7
            int64_t v46 = *(int64_t *)2807; // 0xaf0
            int32_t v47 = *(int32_t *)(64 * (int64_t)(v45 >> 4) + v46 + (int64_t)(4 * v45 & 60)); // 0xb0b
            *v40 = v47;
            int32_t * v48 = (int32_t *)(v3 + 28); // 0xb19
            int32_t v49 = *v48; // 0xb19
            int64_t v50 = *(int64_t *)2857; // 0xb22
            int32_t v51 = *(int32_t *)(64 * (int64_t)(v49 >> 4) + v50 + (int64_t)(4 * v49 & 60)); // 0xb3d
            *v44 = v51;
            *v48 = v39;
            int32_t v52 = *(int32_t *)&v2; // 0xb55
            int64_t v53 = *(int64_t *)2916; // 0xb5d
            int32_t v54 = *(int32_t *)(64 * (int64_t)(v52 >> 4) + v53 + (int64_t)(4 * v52 & 60)); // 0xb77
            *(int32_t *)v3 = v54;
            int32_t * v55 = (int32_t *)(v3 + 16); // 0xb84
            int32_t v56 = *v55; // 0xb84
            int64_t v57 = *(int64_t *)2964; // 0xb8d
            int32_t v58 = *(int32_t *)(64 * (int64_t)(v56 >> 4) + v57 + (int64_t)(4 * v56 & 60)); // 0xba8
            *v55 = v58;
            int32_t * v59 = (int32_t *)(v3 + 32); // 0xbb6
            int32_t v60 = *v59; // 0xbb6
            int64_t v61 = *(int64_t *)3014; // 0xbbf
            int32_t v62 = *(int32_t *)(64 * (int64_t)(v60 >> 4) + v61 + (int64_t)(4 * v60 & 60)); // 0xbda
            *v59 = v62;
            int32_t * v63 = (int32_t *)(v3 + 48); // 0xbe8
            int32_t v64 = *v63; // 0xbe8
            int64_t v65 = *(int64_t *)3064; // 0xbf1
            int32_t v66 = *(int32_t *)(64 * (int64_t)(v64 >> 4) + v65 + (int64_t)(4 * v64 & 60)); // 0xc0c
            *v63 = v66;
            // break -> 0x1752
            break;
        }
        case 6: {
            int64_t v67 = 0x100000000 * v1 >> 32; // 0xc1b
            int32_t * v68 = (int32_t *)(v67 + 4); // 0xc1f
            int32_t v69 = *v68; // 0xc1f
            int64_t v70 = *(int64_t *)3119; // 0xc28
            int32_t v71 = *(int32_t *)(64 * (int64_t)(v69 >> 4) + v70 + (int64_t)(4 * v69 & 60)); // 0xc43
            int32_t * v72 = (int32_t *)(v67 + 20); // 0xc4d
            int32_t v73 = *v72; // 0xc4d
            int64_t v74 = *(int64_t *)3165; // 0xc56
            int32_t v75 = *(int32_t *)(64 * (int64_t)(v73 >> 4) + v74 + (int64_t)(4 * v73 & 60)); // 0xc71
            *v68 = v75;
            int32_t * v76 = (int32_t *)(v67 + 36); // 0xc7f
            int32_t v77 = *v76; // 0xc7f
            int64_t v78 = *(int64_t *)3215; // 0xc88
            int32_t v79 = *(int32_t *)(64 * (int64_t)(v77 >> 4) + v78 + (int64_t)(4 * v77 & 60)); // 0xca3
            *v72 = v79;
            int32_t * v80 = (int32_t *)(v67 + 52); // 0xcb1
            int32_t v81 = *v80; // 0xcb1
            int64_t v82 = *(int64_t *)3265; // 0xcba
            int32_t v83 = *(int32_t *)(64 * (int64_t)(v81 >> 4) + v82 + (int64_t)(4 * v81 & 60)); // 0xcd5
            *v76 = v83;
            int32_t * v84 = (int32_t *)(v67 + 68); // 0xce3
            int32_t v85 = *v84; // 0xce3
            int64_t v86 = *(int64_t *)3315; // 0xcec
            int32_t v87 = *(int32_t *)(64 * (int64_t)(v85 >> 4) + v86 + (int64_t)(4 * v85 & 60)); // 0xd07
            *v80 = v87;
            int32_t * v88 = (int32_t *)(v67 + 84); // 0xd15
            int32_t v89 = *v88; // 0xd15
            int64_t v90 = *(int64_t *)3365; // 0xd1e
            int32_t v91 = *(int32_t *)(64 * (int64_t)(v89 >> 4) + v90 + (int64_t)(4 * v89 & 60)); // 0xd39
            *v84 = v91;
            *v88 = v71;
            int32_t * v92 = (int32_t *)(v67 + 8); // 0xd51
            int32_t v93 = *v92; // 0xd51
            int64_t v94 = *(int64_t *)3425; // 0xd5a
            int32_t v95 = *(int32_t *)(64 * (int64_t)(v93 >> 4) + v94 + (int64_t)(4 * v93 & 60)); // 0xd75
            int32_t * v96 = (int32_t *)(v67 + 40); // 0xd7f
            int32_t v97 = *v96; // 0xd7f
            int64_t v98 = *(int64_t *)3471; // 0xd88
            int32_t v99 = *(int32_t *)(64 * (int64_t)(v97 >> 4) + v98 + (int64_t)(4 * v97 & 60)); // 0xda3
            *v92 = v99;
            int32_t * v100 = (int32_t *)(v67 + 72); // 0xdb1
            int32_t v101 = *v100; // 0xdb1
            int64_t v102 = *(int64_t *)3521; // 0xdba
            int32_t v103 = *(int32_t *)(64 * (int64_t)(v101 >> 4) + v102 + (int64_t)(4 * v101 & 60)); // 0xdd5
            *v96 = v103;
            *v100 = v95;
            int32_t * v104 = (int32_t *)(v67 + 24); // 0xded
            int32_t v105 = *v104; // 0xded
            int64_t v106 = *(int64_t *)3581; // 0xdf6
            int32_t v107 = *(int32_t *)(64 * (int64_t)(v105 >> 4) + v106 + (int64_t)(4 * v105 & 60)); // 0xe11
            int32_t * v108 = (int32_t *)(v67 + (int64_t)&g1); // 0xe1b
            int32_t v109 = *v108; // 0xe1b
            int64_t v110 = *(int64_t *)3627; // 0xe24
            int32_t v111 = *(int32_t *)(64 * (int64_t)(v109 >> 4) + v110 + (int64_t)(4 * v109 & 60)); // 0xe3f
            *v104 = v111;
            int32_t * v112 = (int32_t *)(v67 + 88); // 0xe4d
            int32_t v113 = *v112; // 0xe4d
            int64_t v114 = *(int64_t *)3677; // 0xe56
            int32_t v115 = *(int32_t *)(64 * (int64_t)(v113 >> 4) + v114 + (int64_t)(4 * v113 & 60)); // 0xe71
            *v108 = v115;
            *v112 = v107;
            int32_t * v116 = (int32_t *)(v67 + 12); // 0xe89
            int32_t v117 = *v116; // 0xe89
            int64_t v118 = *(int64_t *)3737; // 0xe92
            int32_t v119 = *(int32_t *)(64 * (int64_t)(v117 >> 4) + v118 + (int64_t)(4 * v117 & 60)); // 0xead
            int32_t * v120 = (int32_t *)(v67 + 60); // 0xeb7
            int32_t v121 = *v120; // 0xeb7
            int64_t v122 = *(int64_t *)3783; // 0xec0
            int32_t v123 = *(int32_t *)(64 * (int64_t)(v121 >> 4) + v122 + (int64_t)(4 * v121 & 60)); // 0xedb
            *v116 = v123;
            *v120 = v119;
            int32_t * v124 = (int32_t *)(v67 + 28); // 0xef3
            int32_t v125 = *v124; // 0xef3
            int64_t v126 = *(int64_t *)3843; // 0xefc
            int32_t v127 = *(int32_t *)(64 * (int64_t)(v125 >> 4) + v126 + (int64_t)(4 * v125 & 60)); // 0xf17
            int32_t * v128 = (int32_t *)(v67 + 76); // 0xf21
            int32_t v129 = *v128; // 0xf21
            int64_t v130 = *(int64_t *)3889; // 0xf2a
            int32_t v131 = *(int32_t *)(64 * (int64_t)(v129 >> 4) + v130 + (int64_t)(4 * v129 & 60)); // 0xf45
            *v124 = v131;
            *v128 = v127;
            int32_t * v132 = (int32_t *)(v67 + 44); // 0xf5d
            int32_t v133 = *v132; // 0xf5d
            int64_t v134 = *(int64_t *)3949; // 0xf66
            int32_t v135 = *(int32_t *)(64 * (int64_t)(v133 >> 4) + v134 + (int64_t)(4 * v133 & 60)); // 0xf81
            int32_t * v136 = (int32_t *)(v67 + 92); // 0xf8b
            int32_t v137 = *v136; // 0xf8b
            int64_t v138 = *(int64_t *)3995; // 0xf94
            int32_t v139 = *(int32_t *)(64 * (int64_t)(v137 >> 4) + v138 + (int64_t)(4 * v137 & 60)); // 0xfaf
            *v132 = v139;
            *v136 = v135;
            int32_t v140 = *(int32_t *)&v2; // 0xfc7
            int64_t v141 = *(int64_t *)4054; // 0xfcf
            int32_t v142 = *(int32_t *)(64 * (int64_t)(v140 >> 4) + v141 + (int64_t)(4 * v140 & 60)); // 0xfe9
            *(int32_t *)v67 = v142;
            int32_t * v143 = (int32_t *)(v67 + 16); // 0xff6
            int32_t v144 = *v143; // 0xff6
            int64_t v145 = *(int64_t *)0x1006; // 0xfff
            int32_t v146 = *(int32_t *)(64 * (int64_t)(v144 >> 4) + v145 + (int64_t)(4 * v144 & 60)); // 0x101a
            *v143 = v146;
            int32_t * v147 = (int32_t *)(v67 + 32); // 0x1028
            int32_t v148 = *v147; // 0x1028
            int64_t v149 = *(int64_t *)0x1038; // 0x1031
            int32_t v150 = *(int32_t *)(64 * (int64_t)(v148 >> 4) + v149 + (int64_t)(4 * v148 & 60)); // 0x104c
            *v147 = v150;
            int32_t * v151 = (int32_t *)(v67 + 48); // 0x105a
            int32_t v152 = *v151; // 0x105a
            int64_t v153 = *(int64_t *)0x106a; // 0x1063
            int32_t v154 = *(int32_t *)(64 * (int64_t)(v152 >> 4) + v153 + (int64_t)(4 * v152 & 60)); // 0x107e
            *v151 = v154;
            int32_t * v155 = (int32_t *)(v67 + 64); // 0x108c
            int32_t v156 = *v155; // 0x108c
            int64_t v157 = *(int64_t *)0x109c; // 0x1095
            int32_t v158 = *(int32_t *)(64 * (int64_t)(v156 >> 4) + v157 + (int64_t)(4 * v156 & 60)); // 0x10b0
            *v155 = v158;
            int32_t * v159 = (int32_t *)(v67 + 80); // 0x10be
            int32_t v160 = *v159; // 0x10be
            int64_t v161 = *(int64_t *)0x10ce; // 0x10c7
            int32_t v162 = *(int32_t *)(64 * (int64_t)(v160 >> 4) + v161 + (int64_t)(4 * v160 & 60)); // 0x10e2
            *v159 = v162;
            // break -> 0x1752
            break;
        }
        case 8: {
            int64_t v163 = 0x100000000 * v1 >> 32; // 0x10f1
            int32_t * v164 = (int32_t *)(v163 + 4); // 0x10f5
            int32_t v165 = *v164; // 0x10f5
            int64_t v166 = *(int64_t *)0x1105; // 0x10fe
            int32_t v167 = *(int32_t *)(64 * (int64_t)(v165 >> 4) + v166 + (int64_t)(4 * v165 & 60)); // 0x1119
            int32_t * v168 = (int32_t *)(v163 + 20); // 0x1123
            int32_t v169 = *v168; // 0x1123
            int64_t v170 = *(int64_t *)0x1133; // 0x112c
            int32_t v171 = *(int32_t *)(64 * (int64_t)(v169 >> 4) + v170 + (int64_t)(4 * v169 & 60)); // 0x1147
            *v164 = v171;
            int32_t * v172 = (int32_t *)(v163 + 36); // 0x1155
            int32_t v173 = *v172; // 0x1155
            int64_t v174 = *(int64_t *)0x1165; // 0x115e
            int32_t v175 = *(int32_t *)(64 * (int64_t)(v173 >> 4) + v174 + (int64_t)(4 * v173 & 60)); // 0x1179
            *v168 = v175;
            int32_t * v176 = (int32_t *)(v163 + 52); // 0x1187
            int32_t v177 = *v176; // 0x1187
            int64_t v178 = *(int64_t *)0x1197; // 0x1190
            int32_t v179 = *(int32_t *)(64 * (int64_t)(v177 >> 4) + v178 + (int64_t)(4 * v177 & 60)); // 0x11ab
            *v172 = v179;
            int32_t * v180 = (int32_t *)(v163 + 68); // 0x11b9
            int32_t v181 = *v180; // 0x11b9
            int64_t v182 = *(int64_t *)0x11c9; // 0x11c2
            int32_t v183 = *(int32_t *)(64 * (int64_t)(v181 >> 4) + v182 + (int64_t)(4 * v181 & 60)); // 0x11dd
            *v176 = v183;
            int32_t * v184 = (int32_t *)(v163 + 84); // 0x11eb
            int32_t v185 = *v184; // 0x11eb
            int64_t v186 = *(int64_t *)0x11fb; // 0x11f4
            int32_t v187 = *(int32_t *)(64 * (int64_t)(v185 >> 4) + v186 + (int64_t)(4 * v185 & 60)); // 0x120f
            *v180 = v187;
            int32_t * v188 = (int32_t *)(v163 + 100); // 0x121d
            int32_t v189 = *v188; // 0x121d
            int64_t v190 = *(int64_t *)0x122d; // 0x1226
            int32_t v191 = *(int32_t *)(64 * (int64_t)(v189 >> 4) + v190 + (int64_t)(4 * v189 & 60)); // 0x1241
            *v184 = v191;
            int32_t * v192 = (int32_t *)(v163 + 116); // 0x124f
            int32_t v193 = *v192; // 0x124f
            int64_t v194 = *(int64_t *)0x125f; // 0x1258
            int32_t v195 = *(int32_t *)(64 * (int64_t)(v193 >> 4) + v194 + (int64_t)(4 * v193 & 60)); // 0x1273
            *v188 = v195;
            *v192 = v167;
            int32_t * v196 = (int32_t *)(v163 + 8); // 0x128b
            int32_t v197 = *v196; // 0x128b
            int64_t v198 = *(int64_t *)0x129b; // 0x1294
            int32_t v199 = *(int32_t *)(64 * (int64_t)(v197 >> 4) + v198 + (int64_t)(4 * v197 & 60)); // 0x12af
            int32_t * v200 = (int32_t *)(v163 + (int64_t)&g1); // 0x12b9
            int32_t v201 = *v200; // 0x12b9
            int64_t v202 = *(int64_t *)0x12c9; // 0x12c2
            int32_t v203 = *(int32_t *)(64 * (int64_t)(v201 >> 4) + v202 + (int64_t)(4 * v201 & 60)); // 0x12dd
            *v196 = v203;
            int32_t * v204 = (int32_t *)(v163 + 104); // 0x12eb
            int32_t v205 = *v204; // 0x12eb
            int64_t v206 = *(int64_t *)0x12fb; // 0x12f4
            int32_t v207 = *(int32_t *)(64 * (int64_t)(v205 >> 4) + v206 + (int64_t)(4 * v205 & 60)); // 0x130f
            *v200 = v207;
            int32_t * v208 = (int32_t *)(v163 + 24); // 0x131d
            int32_t v209 = *v208; // 0x131d
            int64_t v210 = *(int64_t *)0x132d; // 0x1326
            int32_t v211 = *(int32_t *)(64 * (int64_t)(v209 >> 4) + v210 + (int64_t)(4 * v209 & 60)); // 0x1341
            *v204 = v211;
            int32_t * v212 = (int32_t *)(v163 + 72); // 0x134f
            int32_t v213 = *v212; // 0x134f
            int64_t v214 = *(int64_t *)0x135f; // 0x1358
            int32_t v215 = *(int32_t *)(64 * (int64_t)(v213 >> 4) + v214 + (int64_t)(4 * v213 & 60)); // 0x1373
            *v208 = v215;
            int32_t * v216 = (int32_t *)(v163 + 120); // 0x1381
            int32_t v217 = *v216; // 0x1381
            int64_t v218 = *(int64_t *)0x1391; // 0x138a
            int32_t v219 = *(int32_t *)(64 * (int64_t)(v217 >> 4) + v218 + (int64_t)(4 * v217 & 60)); // 0x13a5
            *v212 = v219;
            int32_t * v220 = (int32_t *)(v163 + 40); // 0x13b3
            int32_t v221 = *v220; // 0x13b3
            int64_t v222 = *(int64_t *)0x13c3; // 0x13bc
            int32_t v223 = *(int32_t *)(64 * (int64_t)(v221 >> 4) + v222 + (int64_t)(4 * v221 & 60)); // 0x13d7
            *v216 = v223;
            int32_t * v224 = (int32_t *)(v163 + 88); // 0x13e5
            int32_t v225 = *v224; // 0x13e5
            int64_t v226 = *(int64_t *)0x13f5; // 0x13ee
            int32_t v227 = *(int32_t *)(64 * (int64_t)(v225 >> 4) + v226 + (int64_t)(4 * v225 & 60)); // 0x1409
            *v220 = v227;
            *v224 = v199;
            int32_t * v228 = (int32_t *)(v163 + 12); // 0x1421
            int32_t v229 = *v228; // 0x1421
            int64_t v230 = *(int64_t *)0x1431; // 0x142a
            int32_t v231 = *(int32_t *)(64 * (int64_t)(v229 >> 4) + v230 + (int64_t)(4 * v229 & 60)); // 0x1445
            int32_t * v232 = (int32_t *)(v163 + 76); // 0x144f
            int32_t v233 = *v232; // 0x144f
            int64_t v234 = *(int64_t *)0x145f; // 0x1458
            int32_t v235 = *(int32_t *)(64 * (int64_t)(v233 >> 4) + v234 + (int64_t)(4 * v233 & 60)); // 0x1473
            *v228 = v235;
            *v232 = v231;
            int32_t * v236 = (int32_t *)(v163 + 28); // 0x148b
            int32_t v237 = *v236; // 0x148b
            int64_t v238 = *(int64_t *)0x149b; // 0x1494
            int32_t v239 = *(int32_t *)(64 * (int64_t)(v237 >> 4) + v238 + (int64_t)(4 * v237 & 60)); // 0x14af
            int32_t * v240 = (int32_t *)(v163 + 92); // 0x14b9
            int32_t v241 = *v240; // 0x14b9
            int64_t v242 = *(int64_t *)0x14c9; // 0x14c2
            int32_t v243 = *(int32_t *)(64 * (int64_t)(v241 >> 4) + v242 + (int64_t)(4 * v241 & 60)); // 0x14dd
            *v236 = v243;
            *v240 = v239;
            int32_t * v244 = (int32_t *)(v163 + 44); // 0x14f5
            int32_t v245 = *v244; // 0x14f5
            int64_t v246 = *(int64_t *)0x1505; // 0x14fe
            int32_t v247 = *(int32_t *)(64 * (int64_t)(v245 >> 4) + v246 + (int64_t)(4 * v245 & 60)); // 0x1519
            int32_t * v248 = (int32_t *)(v163 + 108); // 0x1523
            int32_t v249 = *v248; // 0x1523
            int64_t v250 = *(int64_t *)0x1533; // 0x152c
            int32_t v251 = *(int32_t *)(64 * (int64_t)(v249 >> 4) + v250 + (int64_t)(4 * v249 & 60)); // 0x1547
            *v244 = v251;
            *v248 = v247;
            int32_t * v252 = (int32_t *)(v163 + 60); // 0x155f
            int32_t v253 = *v252; // 0x155f
            int64_t v254 = *(int64_t *)0x156f; // 0x1568
            int32_t v255 = *(int32_t *)(64 * (int64_t)(v253 >> 4) + v254 + (int64_t)(4 * v253 & 60)); // 0x1583
            int32_t * v256 = (int32_t *)(v163 + 124); // 0x158d
            int32_t v257 = *v256; // 0x158d
            int64_t v258 = *(int64_t *)0x159d; // 0x1596
            int32_t v259 = *(int32_t *)(64 * (int64_t)(v257 >> 4) + v258 + (int64_t)(4 * v257 & 60)); // 0x15b1
            *v252 = v259;
            *v256 = v255;
            int32_t v260 = *(int32_t *)&v2; // 0x15c9
            int64_t v261 = *(int64_t *)0x15d8; // 0x15d1
            int32_t v262 = *(int32_t *)(64 * (int64_t)(v260 >> 4) + v261 + (int64_t)(4 * v260 & 60)); // 0x15eb
            *(int32_t *)v163 = v262;
            int32_t * v263 = (int32_t *)(v163 + 16); // 0x15f8
            int32_t v264 = *v263; // 0x15f8
            int64_t v265 = *(int64_t *)0x1608; // 0x1601
            int32_t v266 = *(int32_t *)(64 * (int64_t)(v264 >> 4) + v265 + (int64_t)(4 * v264 & 60)); // 0x161c
            *v263 = v266;
            int32_t * v267 = (int32_t *)(v163 + 32); // 0x162a
            int32_t v268 = *v267; // 0x162a
            int64_t v269 = *(int64_t *)0x163a; // 0x1633
            int32_t v270 = *(int32_t *)(64 * (int64_t)(v268 >> 4) + v269 + (int64_t)(4 * v268 & 60)); // 0x164e
            *v267 = v270;
            int32_t * v271 = (int32_t *)(v163 + 48); // 0x165c
            int32_t v272 = *v271; // 0x165c
            int64_t v273 = *(int64_t *)0x166c; // 0x1665
            int32_t v274 = *(int32_t *)(64 * (int64_t)(v272 >> 4) + v273 + (int64_t)(4 * v272 & 60)); // 0x1680
            *v271 = v274;
            int32_t * v275 = (int32_t *)(v163 + 64); // 0x168e
            int32_t v276 = *v275; // 0x168e
            int64_t v277 = *(int64_t *)0x169e; // 0x1697
            int32_t v278 = *(int32_t *)(64 * (int64_t)(v276 >> 4) + v277 + (int64_t)(4 * v276 & 60)); // 0x16b2
            *v275 = v278;
            int32_t * v279 = (int32_t *)(v163 + 80); // 0x16c0
            int32_t v280 = *v279; // 0x16c0
            int64_t v281 = *(int64_t *)0x16d0; // 0x16c9
            int32_t v282 = *(int32_t *)(64 * (int64_t)(v280 >> 4) + v281 + (int64_t)(4 * v280 & 60)); // 0x16e4
            *v279 = v282;
            int32_t * v283 = (int32_t *)(v163 + 96); // 0x16f2
            int32_t v284 = *v283; // 0x16f2
            int64_t v285 = *(int64_t *)0x1702; // 0x16fb
            int32_t v286 = *(int32_t *)(64 * (int64_t)(v284 >> 4) + v285 + (int64_t)(4 * v284 & 60)); // 0x1716
            *v283 = v286;
            int32_t * v287 = (int32_t *)(v163 + 112); // 0x1724
            int32_t v288 = *v287; // 0x1724
            int64_t v289 = *(int64_t *)0x1734; // 0x172d
            int32_t v290 = *(int32_t *)(64 * (int64_t)(v288 >> 4) + v289 + (int64_t)(4 * v288 & 60)); // 0x1748
            *v287 = v290;
            // break -> 0x1752
            break;
        }
    }
}
int32_t MixColumn_AddRoundKey(int32_t * statemt, uint32_t nb, int32_t n) {
    if (nb <= 0) {
        // 0x1dfc
        return 0;
    }
    int64_t v1 = (int64_t)statemt; // 0x178b
    int64_t v2; // bp-8, 0x1760
    int64_t v3 = (int64_t)&v2 - 144; // 0x17ac
    int64_t v4 = nb;
    int64_t v5 = 0;
    int32_t v6 = v5;
    int32_t v7 = 4 * v6; // 0x1795
    int64_t v8 = 4 * (int64_t)v7; // 0x179b
    int32_t * v9 = (int32_t *)(v8 + v1); // 0x179b
    int32_t v10 = *v9; // 0x179b
    int32_t v11 = 2 * v10; // 0x179e
    int32_t * v12 = (int32_t *)(v8 + v3); // 0x17ac
    int32_t v13 = (v10 & 0x7fffff80) != 128 ? v11 : v11 ^ 283;
    *v12 = v13;
    int64_t v14 = 4 * (int64_t)(v7 | 1); // 0x1803
    int32_t * v15 = (int32_t *)(v14 + v1); // 0x1803
    int32_t v16 = *v15; // 0x1803
    int32_t v17 = 2 * v16 ^ v16; // 0x1815
    int32_t v18 = ((v17 & -256) != 256 ? v17 : v17 ^ 283) ^ v13;
    *v12 = v18;
    int64_t v19 = 4 * (int64_t)(v7 | 2); // 0x188f
    int32_t * v20 = (int32_t *)(v19 + v1); // 0x188f
    int64_t v21 = 4 * (int64_t)(v7 | 3); // 0x18a5
    int32_t * v22 = (int32_t *)(v21 + v1); // 0x18a5
    int64_t v23 = 4 * (int64_t)(n * nb + v6); // 0x18c1
    *v12 = *v22 ^ *v20 ^ *(int32_t *)(*(int64_t *)0x18c1 + v23) ^ v18;
    int32_t v24 = *v15; // 0x18f0
    int32_t v25 = 2 * v24; // 0x18f3
    int32_t * v26 = (int32_t *)(v14 + v3); // 0x1904
    int32_t v27 = (v24 & 0x7fffff80) != 128 ? v25 : v25 ^ 283;
    *v26 = v27;
    int32_t v28 = *v20; // 0x1961
    int32_t v29 = 2 * v28 ^ v28; // 0x1973
    int32_t v30 = ((v29 & -256) != 256 ? v29 : v29 ^ 283) ^ v27;
    *v26 = v30;
    int32_t v31 = *(int32_t *)(v23 + 480 + *(int64_t *)0x1a22); // 0x1a22
    *v26 = *v9 ^ *v22 ^ v31 ^ v30;
    int32_t v32 = *v20; // 0x1a58
    int32_t v33 = 2 * v32; // 0x1a5b
    int32_t * v34 = (int32_t *)(v19 + v3); // 0x1a6c
    int32_t v35 = (v32 & 0x7fffff80) != 128 ? v33 : v33 ^ 283;
    *v34 = v35;
    int32_t v36 = *v22; // 0x1ac9
    int32_t v37 = 2 * v36 ^ v36; // 0x1adb
    int32_t v38 = ((v37 & -256) != 256 ? v37 : v37 ^ 283) ^ v35;
    *v34 = v38;
    int32_t v39 = *(int32_t *)(v23 + 960 + *(int64_t *)0x1b8a); // 0x1b8a
    *v34 = *v15 ^ *v9 ^ v39 ^ v38;
    int32_t v40 = *v22; // 0x1bc0
    int32_t v41 = 2 * v40; // 0x1bc3
    int32_t * v42 = (int32_t *)(v21 + v3); // 0x1bd4
    int32_t v43 = (v40 & 0x7fffff80) != 128 ? v41 : v41 ^ 283;
    *v42 = v43;
    int32_t v44 = *v9; // 0x1c2e
    int32_t v45 = 2 * v44 ^ v44; // 0x1c40
    int32_t v46 = ((v45 & -256) != 256 ? v45 : v45 ^ 283) ^ v43;
    *v42 = v46;
    int32_t v47 = *(int32_t *)(v23 + 1440 + *(int64_t *)0x1cf2); // 0x1cf2
    *v42 = *v20 ^ *v15 ^ v47 ^ v46;
    v5++;
    int64_t v48 = 0; // 0x1785
    while (v5 != v4) {
        // 0x178b
        v6 = v5;
        v7 = 4 * v6;
        v8 = 4 * (int64_t)v7;
        v9 = (int32_t *)(v8 + v1);
        v10 = *v9;
        v11 = 2 * v10;
        v12 = (int32_t *)(v8 + v3);
        v13 = (v10 & 0x7fffff80) != 128 ? v11 : v11 ^ 283;
        *v12 = v13;
        v14 = 4 * (int64_t)(v7 | 1);
        v15 = (int32_t *)(v14 + v1);
        v16 = *v15;
        v17 = 2 * v16 ^ v16;
        v18 = ((v17 & -256) != 256 ? v17 : v17 ^ 283) ^ v13;
        *v12 = v18;
        v19 = 4 * (int64_t)(v7 | 2);
        v20 = (int32_t *)(v19 + v1);
        v21 = 4 * (int64_t)(v7 | 3);
        v22 = (int32_t *)(v21 + v1);
        v23 = 4 * (int64_t)(n * nb + v6);
        *v12 = *v22 ^ *v20 ^ *(int32_t *)(*(int64_t *)0x18c1 + v23) ^ v18;
        v24 = *v15;
        v25 = 2 * v24;
        v26 = (int32_t *)(v14 + v3);
        v27 = (v24 & 0x7fffff80) != 128 ? v25 : v25 ^ 283;
        *v26 = v27;
        v28 = *v20;
        v29 = 2 * v28 ^ v28;
        v30 = ((v29 & -256) != 256 ? v29 : v29 ^ 283) ^ v27;
        *v26 = v30;
        v31 = *(int32_t *)(v23 + 480 + *(int64_t *)0x1a22);
        *v26 = *v9 ^ *v22 ^ v31 ^ v30;
        v32 = *v20;
        v33 = 2 * v32;
        v34 = (int32_t *)(v19 + v3);
        v35 = (v32 & 0x7fffff80) != 128 ? v33 : v33 ^ 283;
        *v34 = v35;
        v36 = *v22;
        v37 = 2 * v36 ^ v36;
        v38 = ((v37 & -256) != 256 ? v37 : v37 ^ 283) ^ v35;
        *v34 = v38;
        v39 = *(int32_t *)(v23 + 960 + *(int64_t *)0x1b8a);
        *v34 = *v15 ^ *v9 ^ v39 ^ v38;
        v40 = *v22;
        v41 = 2 * v40;
        v42 = (int32_t *)(v21 + v3);
        v43 = (v40 & 0x7fffff80) != 128 ? v41 : v41 ^ 283;
        *v42 = v43;
        v44 = *v9;
        v45 = 2 * v44 ^ v44;
        v46 = ((v45 & -256) != 256 ? v45 : v45 ^ 283) ^ v43;
        *v42 = v46;
        v47 = *(int32_t *)(v23 + 1440 + *(int64_t *)0x1cf2);
        *v42 = *v20 ^ *v15 ^ v47 ^ v46;
        v5++;
        v48 = 0;
    }
    int32_t v49 = 4 * (int32_t)v48; // 0x1d48
    int64_t v50 = 4 * (int64_t)v49; // 0x1d4d
    *(int32_t *)(v50 + v1) = *(int32_t *)(v50 + v3);
    int64_t v51 = 4 * (int64_t)(v49 | 1); // 0x1d75
    *(int32_t *)(v51 + v1) = *(int32_t *)(v51 + v3);
    int64_t v52 = 4 * (int64_t)(v49 | 2); // 0x1da0
    *(int32_t *)(v52 + v1) = *(int32_t *)(v52 + v3);
    int64_t v53 = 4 * (int64_t)(v49 | 3); // 0x1dcb
    *(int32_t *)(v53 + v1) = *(int32_t *)(v53 + v3);
    int64_t v54 = v48 + 1;
    v48 = v54;
    while (v54 != v4) {
        // 0x1d42
        v49 = 4 * (int32_t)v48;
        v50 = 4 * (int64_t)v49;
        *(int32_t *)(v50 + v1) = *(int32_t *)(v50 + v3);
        v51 = 4 * (int64_t)(v49 | 1);
        *(int32_t *)(v51 + v1) = *(int32_t *)(v51 + v3);
        v52 = 4 * (int64_t)(v49 | 2);
        *(int32_t *)(v52 + v1) = *(int32_t *)(v52 + v3);
        v53 = 4 * (int64_t)(v49 | 3);
        *(int32_t *)(v53 + v1) = *(int32_t *)(v53 + v3);
        v54 = v48 + 1;
        v48 = v54;
    }
    // 0x1dfc
    return 0;
}
int32_t SubByte(uint32_t in) {
    int64_t v1 = in; // 0x3700
    int64_t v2 = *(int64_t *)0x370c; // 0x3705
    int32_t result = *(int32_t *)((0x100000000 * (0x100000000 * (int64_t)(in / 0x80000000) | v1) / 16 >> 26) + 4 * ((0x100000000 * v1 | v1) % 16) + v2); // 0x3729
    return result;
}
int32_t decrypt(int32_t * statemt, int32_t * key, int32_t type) {
    // 0x1e10
    __asm_movaps_1(__asm_movaps(g9));
    __asm_movaps_1(__asm_movaps(g8));
    __asm_movaps_1(__asm_movaps(g7));
    __asm_movaps_1(__asm_movaps(g6));
    KeySchedule(type, key);
    switch (type) {
        case 0x1f480: {
            // 0x1f09
            *(int32_t *)*(int64_t *)0x1f10 = 10;
            int64_t result = *(int64_t *)0x1f1d; // 0x1f16
            *(int32_t *)result = 4;
            // 0x1fdd
            return result;
        }
        case 0x1f4c0: {
        }
        case 0x2eec0: {
            // 0x1f28
            *(int32_t *)*(int64_t *)0x1f2f = 12;
            int64_t result2 = *(int64_t *)0x1f3c; // 0x1f35
            *(int32_t *)result2 = 6;
            // 0x1fdd
            return result2;
        }
        case 0x1f500: {
        }
        case 0x2ef00: {
            // 0x1f66
            *(int32_t *)*(int64_t *)0x1f6d = 14;
            int64_t result3 = *(int64_t *)0x1f7a; // 0x1f73
            *(int32_t *)result3 = 8;
            // 0x1fdd
            return result3;
        }
        case 0x2ee80: {
            // 0x1f47
            *(int32_t *)*(int64_t *)0x1f4e = 12;
            int64_t result4 = *(int64_t *)0x1f5b; // 0x1f54
            *(int32_t *)result4 = 4;
            // 0x1fdd
            return result4;
        }
        case 0x3e880: {
            // 0x1f85
            *(int32_t *)*(int64_t *)0x1f8c = 14;
            int64_t result5 = *(int64_t *)0x1f99; // 0x1f92
            *(int32_t *)result5 = 4;
            // 0x1fdd
            return result5;
        }
        case 0x3e8c0: {
            // 0x1fa4
            *(int32_t *)*(int64_t *)0x1fab = 14;
            int64_t result6 = *(int64_t *)0x1fb8; // 0x1fb1
            *(int32_t *)result6 = 6;
            // 0x1fdd
            return result6;
        }
    }
    uint32_t v1 = type - 0x3e900; // 0x1ef9
    int64_t result7 = v1; // 0x1efe
    if (v1 == 0) {
        // 0x1fc3
        *(int32_t *)*(int64_t *)0x1fca = 14;
        result7 = *(int64_t *)0x1fd7;
        *(int32_t *)result7 = 8;
    }
    // 0x1fdd
    return result7;
}
void InversShiftRow_ByteSub(int32_t * statemt, int32_t nb) {
    int64_t v1 = (int64_t)statemt;
    int64_t v2; // 0x20c0
    switch (nb) {
        case 4: {
            int64_t v3 = 0x100000000 * v1 >> 32; // 0x2101
            int32_t * v4 = (int32_t *)(v3 + 52); // 0x2105
            int32_t v5 = *v4; // 0x2105
            int64_t v6 = *(int64_t *)0x2115; // 0x210e
            int32_t v7 = *(int32_t *)(64 * (int64_t)(v5 >> 4) + v6 + (int64_t)(4 * v5 & 60)); // 0x2129
            int32_t * v8 = (int32_t *)(v3 + 36); // 0x2133
            int32_t v9 = *v8; // 0x2133
            int64_t v10 = *(int64_t *)0x2143; // 0x213c
            int32_t v11 = *(int32_t *)(64 * (int64_t)(v9 >> 4) + v10 + (int64_t)(4 * v9 & 60)); // 0x2157
            *v4 = v11;
            int32_t * v12 = (int32_t *)(v3 + 20); // 0x2165
            int32_t v13 = *v12; // 0x2165
            int64_t v14 = *(int64_t *)0x2175; // 0x216e
            int32_t v15 = *(int32_t *)(64 * (int64_t)(v13 >> 4) + v14 + (int64_t)(4 * v13 & 60)); // 0x2189
            *v8 = v15;
            int32_t * v16 = (int32_t *)(v3 + 4); // 0x2197
            int32_t v17 = *v16; // 0x2197
            int64_t v18 = *(int64_t *)0x21a7; // 0x21a0
            int32_t v19 = *(int32_t *)(64 * (int64_t)(v17 >> 4) + v18 + (int64_t)(4 * v17 & 60)); // 0x21bb
            *v12 = v19;
            *v16 = v7;
            int32_t * v20 = (int32_t *)(v3 + (int64_t)&g1); // 0x21d3
            int32_t v21 = *v20; // 0x21d3
            int64_t v22 = *(int64_t *)0x21e3; // 0x21dc
            int32_t v23 = *(int32_t *)(64 * (int64_t)(v21 >> 4) + v22 + (int64_t)(4 * v21 & 60)); // 0x21f7
            int32_t * v24 = (int32_t *)(v3 + 24); // 0x2201
            int32_t v25 = *v24; // 0x2201
            int64_t v26 = *(int64_t *)0x2211; // 0x220a
            int32_t v27 = *(int32_t *)(64 * (int64_t)(v25 >> 4) + v26 + (int64_t)(4 * v25 & 60)); // 0x2225
            *v20 = v27;
            *v24 = v23;
            int32_t * v28 = (int32_t *)(v3 + 8); // 0x223d
            int32_t v29 = *v28; // 0x223d
            int64_t v30 = *(int64_t *)0x224d; // 0x2246
            int32_t v31 = *(int32_t *)(64 * (int64_t)(v29 >> 4) + v30 + (int64_t)(4 * v29 & 60)); // 0x2261
            int32_t * v32 = (int32_t *)(v3 + 40); // 0x226b
            int32_t v33 = *v32; // 0x226b
            int64_t v34 = *(int64_t *)0x227b; // 0x2274
            int32_t v35 = *(int32_t *)(64 * (int64_t)(v33 >> 4) + v34 + (int64_t)(4 * v33 & 60)); // 0x228f
            *v28 = v35;
            *v32 = v31;
            int32_t * v36 = (int32_t *)(v3 + 60); // 0x22a7
            int32_t v37 = *v36; // 0x22a7
            int64_t v38 = *(int64_t *)0x22b7; // 0x22b0
            int32_t v39 = *(int32_t *)(64 * (int64_t)(v37 >> 4) + v38 + (int64_t)(4 * v37 & 60)); // 0x22cb
            int32_t * v40 = (int32_t *)(v3 + 12); // 0x22d5
            int32_t v41 = *v40; // 0x22d5
            int64_t v42 = *(int64_t *)0x22e5; // 0x22de
            int32_t v43 = *(int32_t *)(64 * (int64_t)(v41 >> 4) + v42 + (int64_t)(4 * v41 & 60)); // 0x22f9
            *v36 = v43;
            int32_t * v44 = (int32_t *)(v3 + 28); // 0x2307
            int32_t v45 = *v44; // 0x2307
            int64_t v46 = *(int64_t *)0x2317; // 0x2310
            int32_t v47 = *(int32_t *)(64 * (int64_t)(v45 >> 4) + v46 + (int64_t)(4 * v45 & 60)); // 0x232b
            *v40 = v47;
            int32_t * v48 = (int32_t *)(v3 + 44); // 0x2339
            int32_t v49 = *v48; // 0x2339
            int64_t v50 = *(int64_t *)0x2349; // 0x2342
            int32_t v51 = *(int32_t *)(64 * (int64_t)(v49 >> 4) + v50 + (int64_t)(4 * v49 & 60)); // 0x235d
            *v44 = v51;
            *v48 = v39;
            int32_t v52 = *(int32_t *)&v2; // 0x2375
            int64_t v53 = *(int64_t *)0x2384; // 0x237d
            int32_t v54 = *(int32_t *)(64 * (int64_t)(v52 >> 4) + v53 + (int64_t)(4 * v52 & 60)); // 0x2397
            *(int32_t *)v3 = v54;
            int32_t * v55 = (int32_t *)(v3 + 16); // 0x23a4
            int32_t v56 = *v55; // 0x23a4
            int64_t v57 = *(int64_t *)0x23b4; // 0x23ad
            int32_t v58 = *(int32_t *)(64 * (int64_t)(v56 >> 4) + v57 + (int64_t)(4 * v56 & 60)); // 0x23c8
            *v55 = v58;
            int32_t * v59 = (int32_t *)(v3 + 32); // 0x23d6
            int32_t v60 = *v59; // 0x23d6
            int64_t v61 = *(int64_t *)0x23e6; // 0x23df
            int32_t v62 = *(int32_t *)(64 * (int64_t)(v60 >> 4) + v61 + (int64_t)(4 * v60 & 60)); // 0x23fa
            *v59 = v62;
            int32_t * v63 = (int32_t *)(v3 + 48); // 0x2408
            int32_t v64 = *v63; // 0x2408
            int64_t v65 = *(int64_t *)0x2418; // 0x2411
            int32_t v66 = *(int32_t *)(64 * (int64_t)(v64 >> 4) + v65 + (int64_t)(4 * v64 & 60)); // 0x242c
            *v63 = v66;
            // break -> 0x2f72
            break;
        }
        case 6: {
            int64_t v67 = 0x100000000 * v1 >> 32; // 0x243b
            int32_t * v68 = (int32_t *)(v67 + 84); // 0x243f
            int32_t v69 = *v68; // 0x243f
            int64_t v70 = *(int64_t *)0x244f; // 0x2448
            int32_t v71 = *(int32_t *)(64 * (int64_t)(v69 >> 4) + v70 + (int64_t)(4 * v69 & 60)); // 0x2463
            int32_t * v72 = (int32_t *)(v67 + 68); // 0x246d
            int32_t v73 = *v72; // 0x246d
            int64_t v74 = *(int64_t *)0x247d; // 0x2476
            int32_t v75 = *(int32_t *)(64 * (int64_t)(v73 >> 4) + v74 + (int64_t)(4 * v73 & 60)); // 0x2491
            *v68 = v75;
            int32_t * v76 = (int32_t *)(v67 + 52); // 0x249f
            int32_t v77 = *v76; // 0x249f
            int64_t v78 = *(int64_t *)0x24af; // 0x24a8
            int32_t v79 = *(int32_t *)(64 * (int64_t)(v77 >> 4) + v78 + (int64_t)(4 * v77 & 60)); // 0x24c3
            *v72 = v79;
            int32_t * v80 = (int32_t *)(v67 + 36); // 0x24d1
            int32_t v81 = *v80; // 0x24d1
            int64_t v82 = *(int64_t *)0x24e1; // 0x24da
            int32_t v83 = *(int32_t *)(64 * (int64_t)(v81 >> 4) + v82 + (int64_t)(4 * v81 & 60)); // 0x24f5
            *v76 = v83;
            int32_t * v84 = (int32_t *)(v67 + 20); // 0x2503
            int32_t v85 = *v84; // 0x2503
            int64_t v86 = *(int64_t *)0x2513; // 0x250c
            int32_t v87 = *(int32_t *)(64 * (int64_t)(v85 >> 4) + v86 + (int64_t)(4 * v85 & 60)); // 0x2527
            *v80 = v87;
            int32_t * v88 = (int32_t *)(v67 + 4); // 0x2535
            int32_t v89 = *v88; // 0x2535
            int64_t v90 = *(int64_t *)0x2545; // 0x253e
            int32_t v91 = *(int32_t *)(64 * (int64_t)(v89 >> 4) + v90 + (int64_t)(4 * v89 & 60)); // 0x2559
            *v84 = v91;
            *v88 = v71;
            int32_t * v92 = (int32_t *)(v67 + 88); // 0x2571
            int32_t v93 = *v92; // 0x2571
            int64_t v94 = *(int64_t *)0x2581; // 0x257a
            int32_t v95 = *(int32_t *)(64 * (int64_t)(v93 >> 4) + v94 + (int64_t)(4 * v93 & 60)); // 0x2595
            int32_t * v96 = (int32_t *)(v67 + (int64_t)&g1); // 0x259f
            int32_t v97 = *v96; // 0x259f
            int64_t v98 = *(int64_t *)0x25af; // 0x25a8
            int32_t v99 = *(int32_t *)(64 * (int64_t)(v97 >> 4) + v98 + (int64_t)(4 * v97 & 60)); // 0x25c3
            *v92 = v99;
            int32_t * v100 = (int32_t *)(v67 + 24); // 0x25d1
            int32_t v101 = *v100; // 0x25d1
            int64_t v102 = *(int64_t *)0x25e1; // 0x25da
            int32_t v103 = *(int32_t *)(64 * (int64_t)(v101 >> 4) + v102 + (int64_t)(4 * v101 & 60)); // 0x25f5
            *v96 = v103;
            *v100 = v95;
            int32_t * v104 = (int32_t *)(v67 + 72); // 0x260d
            int32_t v105 = *v104; // 0x260d
            int64_t v106 = *(int64_t *)0x261d; // 0x2616
            int32_t v107 = *(int32_t *)(64 * (int64_t)(v105 >> 4) + v106 + (int64_t)(4 * v105 & 60)); // 0x2631
            int32_t * v108 = (int32_t *)(v67 + 40); // 0x263b
            int32_t v109 = *v108; // 0x263b
            int64_t v110 = *(int64_t *)0x264b; // 0x2644
            int32_t v111 = *(int32_t *)(64 * (int64_t)(v109 >> 4) + v110 + (int64_t)(4 * v109 & 60)); // 0x265f
            *v104 = v111;
            int32_t * v112 = (int32_t *)(v67 + 8); // 0x266d
            int32_t v113 = *v112; // 0x266d
            int64_t v114 = *(int64_t *)0x267d; // 0x2676
            int32_t v115 = *(int32_t *)(64 * (int64_t)(v113 >> 4) + v114 + (int64_t)(4 * v113 & 60)); // 0x2691
            *v108 = v115;
            *v112 = v107;
            int32_t * v116 = (int32_t *)(v67 + 60); // 0x26a9
            int32_t v117 = *v116; // 0x26a9
            int64_t v118 = *(int64_t *)0x26b9; // 0x26b2
            int32_t v119 = *(int32_t *)(64 * (int64_t)(v117 >> 4) + v118 + (int64_t)(4 * v117 & 60)); // 0x26cd
            int32_t * v120 = (int32_t *)(v67 + 12); // 0x26d7
            int32_t v121 = *v120; // 0x26d7
            int64_t v122 = *(int64_t *)0x26e7; // 0x26e0
            int32_t v123 = *(int32_t *)(64 * (int64_t)(v121 >> 4) + v122 + (int64_t)(4 * v121 & 60)); // 0x26fb
            *v116 = v123;
            *v120 = v119;
            int32_t * v124 = (int32_t *)(v67 + 76); // 0x2713
            int32_t v125 = *v124; // 0x2713
            int64_t v126 = *(int64_t *)0x2723; // 0x271c
            int32_t v127 = *(int32_t *)(64 * (int64_t)(v125 >> 4) + v126 + (int64_t)(4 * v125 & 60)); // 0x2737
            int32_t * v128 = (int32_t *)(v67 + 28); // 0x2741
            int32_t v129 = *v128; // 0x2741
            int64_t v130 = *(int64_t *)0x2751; // 0x274a
            int32_t v131 = *(int32_t *)(64 * (int64_t)(v129 >> 4) + v130 + (int64_t)(4 * v129 & 60)); // 0x2765
            *v124 = v131;
            *v128 = v127;
            int32_t * v132 = (int32_t *)(v67 + 92); // 0x277d
            int32_t v133 = *v132; // 0x277d
            int64_t v134 = *(int64_t *)0x278d; // 0x2786
            int32_t v135 = *(int32_t *)(64 * (int64_t)(v133 >> 4) + v134 + (int64_t)(4 * v133 & 60)); // 0x27a1
            int32_t * v136 = (int32_t *)(v67 + 44); // 0x27ab
            int32_t v137 = *v136; // 0x27ab
            int64_t v138 = *(int64_t *)0x27bb; // 0x27b4
            int32_t v139 = *(int32_t *)(64 * (int64_t)(v137 >> 4) + v138 + (int64_t)(4 * v137 & 60)); // 0x27cf
            *v132 = v139;
            *v136 = v135;
            int32_t v140 = *(int32_t *)&v2; // 0x27e7
            int64_t v141 = *(int64_t *)0x27f6; // 0x27ef
            int32_t v142 = *(int32_t *)(64 * (int64_t)(v140 >> 4) + v141 + (int64_t)(4 * v140 & 60)); // 0x2809
            *(int32_t *)v67 = v142;
            int32_t * v143 = (int32_t *)(v67 + 16); // 0x2816
            int32_t v144 = *v143; // 0x2816
            int64_t v145 = *(int64_t *)0x2826; // 0x281f
            int32_t v146 = *(int32_t *)(64 * (int64_t)(v144 >> 4) + v145 + (int64_t)(4 * v144 & 60)); // 0x283a
            *v143 = v146;
            int32_t * v147 = (int32_t *)(v67 + 32); // 0x2848
            int32_t v148 = *v147; // 0x2848
            int64_t v149 = *(int64_t *)0x2858; // 0x2851
            int32_t v150 = *(int32_t *)(64 * (int64_t)(v148 >> 4) + v149 + (int64_t)(4 * v148 & 60)); // 0x286c
            *v147 = v150;
            int32_t * v151 = (int32_t *)(v67 + 48); // 0x287a
            int32_t v152 = *v151; // 0x287a
            int64_t v153 = *(int64_t *)0x288a; // 0x2883
            int32_t v154 = *(int32_t *)(64 * (int64_t)(v152 >> 4) + v153 + (int64_t)(4 * v152 & 60)); // 0x289e
            *v151 = v154;
            int32_t * v155 = (int32_t *)(v67 + 64); // 0x28ac
            int32_t v156 = *v155; // 0x28ac
            int64_t v157 = *(int64_t *)0x28bc; // 0x28b5
            int32_t v158 = *(int32_t *)(64 * (int64_t)(v156 >> 4) + v157 + (int64_t)(4 * v156 & 60)); // 0x28d0
            *v155 = v158;
            int32_t * v159 = (int32_t *)(v67 + 80); // 0x28de
            int32_t v160 = *v159; // 0x28de
            int64_t v161 = *(int64_t *)0x28ee; // 0x28e7
            int32_t v162 = *(int32_t *)(64 * (int64_t)(v160 >> 4) + v161 + (int64_t)(4 * v160 & 60)); // 0x2902
            *v159 = v162;
            // break -> 0x2f72
            break;
        }
        case 8: {
            int64_t v163 = 0x100000000 * v1 >> 32; // 0x2911
            int32_t * v164 = (int32_t *)(v163 + 116); // 0x2915
            int32_t v165 = *v164; // 0x2915
            int64_t v166 = *(int64_t *)0x2925; // 0x291e
            int32_t v167 = *(int32_t *)(64 * (int64_t)(v165 >> 4) + v166 + (int64_t)(4 * v165 & 60)); // 0x2939
            int32_t * v168 = (int32_t *)(v163 + 100); // 0x2943
            int32_t v169 = *v168; // 0x2943
            int64_t v170 = *(int64_t *)0x2953; // 0x294c
            int32_t v171 = *(int32_t *)(64 * (int64_t)(v169 >> 4) + v170 + (int64_t)(4 * v169 & 60)); // 0x2967
            *v164 = v171;
            int32_t * v172 = (int32_t *)(v163 + 84); // 0x2975
            int32_t v173 = *v172; // 0x2975
            int64_t v174 = *(int64_t *)0x2985; // 0x297e
            int32_t v175 = *(int32_t *)(64 * (int64_t)(v173 >> 4) + v174 + (int64_t)(4 * v173 & 60)); // 0x2999
            *v168 = v175;
            int32_t * v176 = (int32_t *)(v163 + 68); // 0x29a7
            int32_t v177 = *v176; // 0x29a7
            int64_t v178 = *(int64_t *)0x29b7; // 0x29b0
            int32_t v179 = *(int32_t *)(64 * (int64_t)(v177 >> 4) + v178 + (int64_t)(4 * v177 & 60)); // 0x29cb
            *v172 = v179;
            int32_t * v180 = (int32_t *)(v163 + 52); // 0x29d9
            int32_t v181 = *v180; // 0x29d9
            int64_t v182 = *(int64_t *)0x29e9; // 0x29e2
            int32_t v183 = *(int32_t *)(64 * (int64_t)(v181 >> 4) + v182 + (int64_t)(4 * v181 & 60)); // 0x29fd
            *v176 = v183;
            int32_t * v184 = (int32_t *)(v163 + 36); // 0x2a0b
            int32_t v185 = *v184; // 0x2a0b
            int64_t v186 = *(int64_t *)0x2a1b; // 0x2a14
            int32_t v187 = *(int32_t *)(64 * (int64_t)(v185 >> 4) + v186 + (int64_t)(4 * v185 & 60)); // 0x2a2f
            *v180 = v187;
            int32_t * v188 = (int32_t *)(v163 + 20); // 0x2a3d
            int32_t v189 = *v188; // 0x2a3d
            int64_t v190 = *(int64_t *)0x2a4d; // 0x2a46
            int32_t v191 = *(int32_t *)(64 * (int64_t)(v189 >> 4) + v190 + (int64_t)(4 * v189 & 60)); // 0x2a61
            *v184 = v191;
            int32_t * v192 = (int32_t *)(v163 + 4); // 0x2a6f
            int32_t v193 = *v192; // 0x2a6f
            int64_t v194 = *(int64_t *)0x2a7f; // 0x2a78
            int32_t v195 = *(int32_t *)(64 * (int64_t)(v193 >> 4) + v194 + (int64_t)(4 * v193 & 60)); // 0x2a93
            *v188 = v195;
            *v192 = v167;
            int32_t * v196 = (int32_t *)(v163 + 120); // 0x2aab
            int32_t v197 = *v196; // 0x2aab
            int64_t v198 = *(int64_t *)0x2abb; // 0x2ab4
            int32_t v199 = *(int32_t *)(64 * (int64_t)(v197 >> 4) + v198 + (int64_t)(4 * v197 & 60)); // 0x2acf
            int32_t * v200 = (int32_t *)(v163 + 72); // 0x2ad9
            int32_t v201 = *v200; // 0x2ad9
            int64_t v202 = *(int64_t *)0x2ae9; // 0x2ae2
            int32_t v203 = *(int32_t *)(64 * (int64_t)(v201 >> 4) + v202 + (int64_t)(4 * v201 & 60)); // 0x2afd
            *v196 = v203;
            int32_t * v204 = (int32_t *)(v163 + 24); // 0x2b0b
            int32_t v205 = *v204; // 0x2b0b
            int64_t v206 = *(int64_t *)0x2b1b; // 0x2b14
            int32_t v207 = *(int32_t *)(64 * (int64_t)(v205 >> 4) + v206 + (int64_t)(4 * v205 & 60)); // 0x2b2f
            *v200 = v207;
            int32_t * v208 = (int32_t *)(v163 + 104); // 0x2b3d
            int32_t v209 = *v208; // 0x2b3d
            int64_t v210 = *(int64_t *)0x2b4d; // 0x2b46
            int32_t v211 = *(int32_t *)(64 * (int64_t)(v209 >> 4) + v210 + (int64_t)(4 * v209 & 60)); // 0x2b61
            *v204 = v211;
            int32_t * v212 = (int32_t *)(v163 + (int64_t)&g1); // 0x2b6f
            int32_t v213 = *v212; // 0x2b6f
            int64_t v214 = *(int64_t *)0x2b7f; // 0x2b78
            int32_t v215 = *(int32_t *)(64 * (int64_t)(v213 >> 4) + v214 + (int64_t)(4 * v213 & 60)); // 0x2b93
            *v208 = v215;
            int32_t * v216 = (int32_t *)(v163 + 8); // 0x2ba1
            int32_t v217 = *v216; // 0x2ba1
            int64_t v218 = *(int64_t *)0x2bb1; // 0x2baa
            int32_t v219 = *(int32_t *)(64 * (int64_t)(v217 >> 4) + v218 + (int64_t)(4 * v217 & 60)); // 0x2bc5
            *v212 = v219;
            int32_t * v220 = (int32_t *)(v163 + 88); // 0x2bd3
            int32_t v221 = *v220; // 0x2bd3
            int64_t v222 = *(int64_t *)0x2be3; // 0x2bdc
            int32_t v223 = *(int32_t *)(64 * (int64_t)(v221 >> 4) + v222 + (int64_t)(4 * v221 & 60)); // 0x2bf7
            *v216 = v223;
            int32_t * v224 = (int32_t *)(v163 + 40); // 0x2c05
            int32_t v225 = *v224; // 0x2c05
            int64_t v226 = *(int64_t *)0x2c15; // 0x2c0e
            int32_t v227 = *(int32_t *)(64 * (int64_t)(v225 >> 4) + v226 + (int64_t)(4 * v225 & 60)); // 0x2c29
            *v220 = v227;
            *v224 = v199;
            int32_t * v228 = (int32_t *)(v163 + 124); // 0x2c41
            int32_t v229 = *v228; // 0x2c41
            int64_t v230 = *(int64_t *)0x2c51; // 0x2c4a
            int32_t v231 = *(int32_t *)(64 * (int64_t)(v229 >> 4) + v230 + (int64_t)(4 * v229 & 60)); // 0x2c65
            int32_t * v232 = (int32_t *)(v163 + 60); // 0x2c6f
            int32_t v233 = *v232; // 0x2c6f
            int64_t v234 = *(int64_t *)0x2c7f; // 0x2c78
            int32_t v235 = *(int32_t *)(64 * (int64_t)(v233 >> 4) + v234 + (int64_t)(4 * v233 & 60)); // 0x2c93
            *v228 = v235;
            *v232 = v231;
            int32_t * v236 = (int32_t *)(v163 + 108); // 0x2cab
            int32_t v237 = *v236; // 0x2cab
            int64_t v238 = *(int64_t *)0x2cbb; // 0x2cb4
            int32_t v239 = *(int32_t *)(64 * (int64_t)(v237 >> 4) + v238 + (int64_t)(4 * v237 & 60)); // 0x2ccf
            int32_t * v240 = (int32_t *)(v163 + 44); // 0x2cd9
            int32_t v241 = *v240; // 0x2cd9
            int64_t v242 = *(int64_t *)0x2ce9; // 0x2ce2
            int32_t v243 = *(int32_t *)(64 * (int64_t)(v241 >> 4) + v242 + (int64_t)(4 * v241 & 60)); // 0x2cfd
            *v236 = v243;
            *v240 = v239;
            int32_t * v244 = (int32_t *)(v163 + 92); // 0x2d15
            int32_t v245 = *v244; // 0x2d15
            int64_t v246 = *(int64_t *)0x2d25; // 0x2d1e
            int32_t v247 = *(int32_t *)(64 * (int64_t)(v245 >> 4) + v246 + (int64_t)(4 * v245 & 60)); // 0x2d39
            int32_t * v248 = (int32_t *)(v163 + 28); // 0x2d43
            int32_t v249 = *v248; // 0x2d43
            int64_t v250 = *(int64_t *)0x2d53; // 0x2d4c
            int32_t v251 = *(int32_t *)(64 * (int64_t)(v249 >> 4) + v250 + (int64_t)(4 * v249 & 60)); // 0x2d67
            *v244 = v251;
            *v248 = v247;
            int32_t * v252 = (int32_t *)(v163 + 76); // 0x2d7f
            int32_t v253 = *v252; // 0x2d7f
            int64_t v254 = *(int64_t *)0x2d8f; // 0x2d88
            int32_t v255 = *(int32_t *)(64 * (int64_t)(v253 >> 4) + v254 + (int64_t)(4 * v253 & 60)); // 0x2da3
            int32_t * v256 = (int32_t *)(v163 + 12); // 0x2dad
            int32_t v257 = *v256; // 0x2dad
            int64_t v258 = *(int64_t *)0x2dbd; // 0x2db6
            int32_t v259 = *(int32_t *)(64 * (int64_t)(v257 >> 4) + v258 + (int64_t)(4 * v257 & 60)); // 0x2dd1
            *v252 = v259;
            *v256 = v255;
            int32_t v260 = *(int32_t *)&v2; // 0x2de9
            int64_t v261 = *(int64_t *)0x2df8; // 0x2df1
            int32_t v262 = *(int32_t *)(64 * (int64_t)(v260 >> 4) + v261 + (int64_t)(4 * v260 & 60)); // 0x2e0b
            *(int32_t *)v163 = v262;
            int32_t * v263 = (int32_t *)(v163 + 16); // 0x2e18
            int32_t v264 = *v263; // 0x2e18
            int64_t v265 = *(int64_t *)0x2e28; // 0x2e21
            int32_t v266 = *(int32_t *)(64 * (int64_t)(v264 >> 4) + v265 + (int64_t)(4 * v264 & 60)); // 0x2e3c
            *v263 = v266;
            int32_t * v267 = (int32_t *)(v163 + 32); // 0x2e4a
            int32_t v268 = *v267; // 0x2e4a
            int64_t v269 = *(int64_t *)0x2e5a; // 0x2e53
            int32_t v270 = *(int32_t *)(64 * (int64_t)(v268 >> 4) + v269 + (int64_t)(4 * v268 & 60)); // 0x2e6e
            *v267 = v270;
            int32_t * v271 = (int32_t *)(v163 + 48); // 0x2e7c
            int32_t v272 = *v271; // 0x2e7c
            int64_t v273 = *(int64_t *)0x2e8c; // 0x2e85
            int32_t v274 = *(int32_t *)(64 * (int64_t)(v272 >> 4) + v273 + (int64_t)(4 * v272 & 60)); // 0x2ea0
            *v271 = v274;
            int32_t * v275 = (int32_t *)(v163 + 64); // 0x2eae
            int32_t v276 = *v275; // 0x2eae
            int64_t v277 = *(int64_t *)0x2ebe; // 0x2eb7
            int32_t v278 = *(int32_t *)(64 * (int64_t)(v276 >> 4) + v277 + (int64_t)(4 * v276 & 60)); // 0x2ed2
            *v275 = v278;
            int32_t * v279 = (int32_t *)(v163 + 80); // 0x2ee0
            int32_t v280 = *v279; // 0x2ee0
            int64_t v281 = *(int64_t *)0x2ef0; // 0x2ee9
            int32_t v282 = *(int32_t *)(64 * (int64_t)(v280 >> 4) + v281 + (int64_t)(4 * v280 & 60)); // 0x2f04
            *v279 = v282;
            int32_t * v283 = (int32_t *)(v163 + 96); // 0x2f12
            int32_t v284 = *v283; // 0x2f12
            int64_t v285 = *(int64_t *)0x2f22; // 0x2f1b
            int32_t v286 = *(int32_t *)(64 * (int64_t)(v284 >> 4) + v285 + (int64_t)(4 * v284 & 60)); // 0x2f36
            *v283 = v286;
            int32_t * v287 = (int32_t *)(v163 + 112); // 0x2f44
            int32_t v288 = *v287; // 0x2f44
            int64_t v289 = *(int64_t *)0x2f54; // 0x2f4d
            int32_t v290 = *(int32_t *)(64 * (int64_t)(v288 >> 4) + v289 + (int64_t)(4 * v288 & 60)); // 0x2f68
            *v287 = v290;
            // break -> 0x2f72
            break;
        }
    }
}
int32_t AddRoundKey_InversMixColumn(int32_t * statemt, uint32_t nb, int32_t n) {
    if (nb <= 0) {
        // 0x36e6
        return 0;
    }
    int64_t v1 = (int64_t)statemt; // 0x2fc7
    int64_t v2 = nb;
    int64_t v3 = 0;
    int32_t v4 = v3;
    int64_t v5 = 4 * (int64_t)(n * nb + v4); // 0x2fc4
    int32_t v6 = 4 * v4; // 0x2fd1
    int32_t * v7 = (int32_t *)(4 * (int64_t)v6 + v1); // 0x2fd7
    *v7 = *v7 ^ *(int32_t *)(v5 + *(int64_t *)0x2fc4);
    int32_t * v8 = (int32_t *)(4 * (int64_t)(v6 | 1) + v1); // 0x3010
    *v8 = *v8 ^ *(int32_t *)(v5 + 480 + *(int64_t *)0x2ff6);
    int32_t * v9 = (int32_t *)(4 * (int64_t)(v6 | 2) + v1); // 0x3049
    *v9 = *v9 ^ *(int32_t *)(v5 + 960 + *(int64_t *)0x302f);
    int32_t * v10 = (int32_t *)(4 * (int64_t)(v6 | 3) + v1); // 0x3082
    *v10 = *v10 ^ *(int32_t *)(v5 + 1440 + *(int64_t *)0x3068);
    v3++;
    while (v3 != v2) {
        // 0x2fab
        v4 = v3;
        v5 = 4 * (int64_t)(n * nb + v4);
        v6 = 4 * v4;
        v7 = (int32_t *)(4 * (int64_t)v6 + v1);
        *v7 = *v7 ^ *(int32_t *)(v5 + *(int64_t *)0x2fc4);
        v8 = (int32_t *)(4 * (int64_t)(v6 | 1) + v1);
        *v8 = *v8 ^ *(int32_t *)(v5 + 480 + *(int64_t *)0x2ff6);
        v9 = (int32_t *)(4 * (int64_t)(v6 | 2) + v1);
        *v9 = *v9 ^ *(int32_t *)(v5 + 960 + *(int64_t *)0x302f);
        v10 = (int32_t *)(4 * (int64_t)(v6 | 3) + v1);
        *v10 = *v10 ^ *(int32_t *)(v5 + 1440 + *(int64_t *)0x3068);
        v3++;
    }
    // 0x30bf
    int64_t v11; // bp-8, 0x2f80
    int64_t v12 = (int64_t)&v11 - 144; // 0x31de
    int64_t v13 = 0;
    int32_t v14 = 4 * (int32_t)v13; // 0x30dc
    int64_t v15 = 0;
    int64_t v16 = 4 * (v15 + (int64_t)v14); // 0x30e4
    int32_t v17 = *(int32_t *)(v16 + v1); // 0x30e4
    int32_t v18 = 2 * v17; // 0x30e7
    int32_t v19 = ((v17 & 0x7fffff80) != 128 ? v18 : v18 ^ 283) ^ v17; // 0x312e
    int32_t v20 = 2 * v19; // 0x3140
    int32_t v21 = ((v19 & 0x7fffff80) != 128 ? v20 : v20 ^ 283) ^ v17; // 0x3187
    int32_t v22 = 2 * v21; // 0x3199
    int32_t v23 = (v21 & 0x7fffff80) != 128 ? v22 : v22 ^ 283;
    int32_t * v24 = (int32_t *)(v16 + v12); // 0x31de
    *v24 = v23;
    int64_t v25 = v15 + 1;
    int32_t v26 = *(int32_t *)(4 * (int64_t)(v14 + (int32_t)((0x100000000 * v25 | v25) % 4)) + v1); // 0x3216
    int32_t v27 = 2 * v26; // 0x3219
    int32_t v28 = (v26 & 0x7fffff80) != 128 ? v27 : v27 ^ 283;
    int32_t v29 = 2 * v28; // 0x324b
    int32_t v30 = ((v28 & 0x7fffff80) != 128 ? v29 : v29 ^ 283) ^ v26; // 0x32ab
    int32_t v31 = 2 * v30; // 0x32bd
    int32_t v32 = v23 ^ v26 ^ ((v30 & 0x7fffff80) != 128 ? v31 : v31 ^ 283); // 0x3342
    *v24 = v32;
    int64_t v33 = v15 + 2;
    int32_t v34 = *(int32_t *)(4 * (int64_t)(v14 + (int32_t)((0x100000000 * v33 | v33) % 4)) + v1); // 0x3381
    int32_t v35 = 2 * v34; // 0x3384
    int32_t v36 = ((v34 & 0x7fffff80) != 128 ? v35 : v35 ^ 283) ^ v34; // 0x33e4
    int32_t v37 = 2 * v36; // 0x33f6
    int32_t v38 = (v36 & 0x7fffff80) != 128 ? v37 : v37 ^ 283;
    int32_t v39 = 2 * v38; // 0x3428
    int32_t v40 = v32 ^ v34 ^ ((v38 & 0x7fffff80) != 128 ? v39 : v39 ^ 283); // 0x34ad
    *v24 = v40;
    int64_t v41 = v15 + 3;
    int32_t v42 = *(int32_t *)(4 * (int64_t)(v14 + (int32_t)((0x100000000 * v41 | v41) % 4)) + v1); // 0x34ec
    int32_t v43 = 2 * v42; // 0x34ef
    int32_t v44 = (v42 & 0x7fffff80) != 128 ? v43 : v43 ^ 283;
    int32_t v45 = 2 * v44; // 0x3521
    int32_t v46 = (v44 & 0x7fffff80) != 128 ? v45 : v45 ^ 283;
    int32_t v47 = 2 * v46; // 0x3553
    *v24 = ((v46 & 0x7fffff80) != 128 ? v47 : v47 ^ 283) ^ v42 ^ v40;
    while (v25 != 4) {
        // 0x30cc
        v15 = v25;
        v16 = 4 * (v15 + (int64_t)v14);
        v17 = *(int32_t *)(v16 + v1);
        v18 = 2 * v17;
        v19 = ((v17 & 0x7fffff80) != 128 ? v18 : v18 ^ 283) ^ v17;
        v20 = 2 * v19;
        v21 = ((v19 & 0x7fffff80) != 128 ? v20 : v20 ^ 283) ^ v17;
        v22 = 2 * v21;
        v23 = (v21 & 0x7fffff80) != 128 ? v22 : v22 ^ 283;
        v24 = (int32_t *)(v16 + v12);
        *v24 = v23;
        v25 = v15 + 1;
        v26 = *(int32_t *)(4 * (int64_t)(v14 + (int32_t)((0x100000000 * v25 | v25) % 4)) + v1);
        v27 = 2 * v26;
        v28 = (v26 & 0x7fffff80) != 128 ? v27 : v27 ^ 283;
        v29 = 2 * v28;
        v30 = ((v28 & 0x7fffff80) != 128 ? v29 : v29 ^ 283) ^ v26;
        v31 = 2 * v30;
        v32 = v23 ^ v26 ^ ((v30 & 0x7fffff80) != 128 ? v31 : v31 ^ 283);
        *v24 = v32;
        v33 = v15 + 2;
        v34 = *(int32_t *)(4 * (int64_t)(v14 + (int32_t)((0x100000000 * v33 | v33) % 4)) + v1);
        v35 = 2 * v34;
        v36 = ((v34 & 0x7fffff80) != 128 ? v35 : v35 ^ 283) ^ v34;
        v37 = 2 * v36;
        v38 = (v36 & 0x7fffff80) != 128 ? v37 : v37 ^ 283;
        v39 = 2 * v38;
        v40 = v32 ^ v34 ^ ((v38 & 0x7fffff80) != 128 ? v39 : v39 ^ 283);
        *v24 = v40;
        v41 = v15 + 3;
        v42 = *(int32_t *)(4 * (int64_t)(v14 + (int32_t)((0x100000000 * v41 | v41) % 4)) + v1);
        v43 = 2 * v42;
        v44 = (v42 & 0x7fffff80) != 128 ? v43 : v43 ^ 283;
        v45 = 2 * v44;
        v46 = (v44 & 0x7fffff80) != 128 ? v45 : v45 ^ 283;
        v47 = 2 * v46;
        *v24 = ((v46 & 0x7fffff80) != 128 ? v47 : v47 ^ 283) ^ v42 ^ v40;
    }
    // 0x35ff
    v13++;
    int64_t v48 = 0; // 0x30af
    while (v13 != v2) {
        // 0x30bf
        v14 = 4 * (int32_t)v13;
        v15 = 0;
        v16 = 4 * (v15 + (int64_t)v14);
        v17 = *(int32_t *)(v16 + v1);
        v18 = 2 * v17;
        v19 = ((v17 & 0x7fffff80) != 128 ? v18 : v18 ^ 283) ^ v17;
        v20 = 2 * v19;
        v21 = ((v19 & 0x7fffff80) != 128 ? v20 : v20 ^ 283) ^ v17;
        v22 = 2 * v21;
        v23 = (v21 & 0x7fffff80) != 128 ? v22 : v22 ^ 283;
        v24 = (int32_t *)(v16 + v12);
        *v24 = v23;
        v25 = v15 + 1;
        v26 = *(int32_t *)(4 * (int64_t)(v14 + (int32_t)((0x100000000 * v25 | v25) % 4)) + v1);
        v27 = 2 * v26;
        v28 = (v26 & 0x7fffff80) != 128 ? v27 : v27 ^ 283;
        v29 = 2 * v28;
        v30 = ((v28 & 0x7fffff80) != 128 ? v29 : v29 ^ 283) ^ v26;
        v31 = 2 * v30;
        v32 = v23 ^ v26 ^ ((v30 & 0x7fffff80) != 128 ? v31 : v31 ^ 283);
        *v24 = v32;
        v33 = v15 + 2;
        v34 = *(int32_t *)(4 * (int64_t)(v14 + (int32_t)((0x100000000 * v33 | v33) % 4)) + v1);
        v35 = 2 * v34;
        v36 = ((v34 & 0x7fffff80) != 128 ? v35 : v35 ^ 283) ^ v34;
        v37 = 2 * v36;
        v38 = (v36 & 0x7fffff80) != 128 ? v37 : v37 ^ 283;
        v39 = 2 * v38;
        v40 = v32 ^ v34 ^ ((v38 & 0x7fffff80) != 128 ? v39 : v39 ^ 283);
        *v24 = v40;
        v41 = v15 + 3;
        v42 = *(int32_t *)(4 * (int64_t)(v14 + (int32_t)((0x100000000 * v41 | v41) % 4)) + v1);
        v43 = 2 * v42;
        v44 = (v42 & 0x7fffff80) != 128 ? v43 : v43 ^ 283;
        v45 = 2 * v44;
        v46 = (v44 & 0x7fffff80) != 128 ? v45 : v45 ^ 283;
        v47 = 2 * v46;
        *v24 = ((v46 & 0x7fffff80) != 128 ? v47 : v47 ^ 283) ^ v42 ^ v40;
        while (v25 != 4) {
            // 0x30cc
            v15 = v25;
            v16 = 4 * (v15 + (int64_t)v14);
            v17 = *(int32_t *)(v16 + v1);
            v18 = 2 * v17;
            v19 = ((v17 & 0x7fffff80) != 128 ? v18 : v18 ^ 283) ^ v17;
            v20 = 2 * v19;
            v21 = ((v19 & 0x7fffff80) != 128 ? v20 : v20 ^ 283) ^ v17;
            v22 = 2 * v21;
            v23 = (v21 & 0x7fffff80) != 128 ? v22 : v22 ^ 283;
            v24 = (int32_t *)(v16 + v12);
            *v24 = v23;
            v25 = v15 + 1;
            v26 = *(int32_t *)(4 * (int64_t)(v14 + (int32_t)((0x100000000 * v25 | v25) % 4)) + v1);
            v27 = 2 * v26;
            v28 = (v26 & 0x7fffff80) != 128 ? v27 : v27 ^ 283;
            v29 = 2 * v28;
            v30 = ((v28 & 0x7fffff80) != 128 ? v29 : v29 ^ 283) ^ v26;
            v31 = 2 * v30;
            v32 = v23 ^ v26 ^ ((v30 & 0x7fffff80) != 128 ? v31 : v31 ^ 283);
            *v24 = v32;
            v33 = v15 + 2;
            v34 = *(int32_t *)(4 * (int64_t)(v14 + (int32_t)((0x100000000 * v33 | v33) % 4)) + v1);
            v35 = 2 * v34;
            v36 = ((v34 & 0x7fffff80) != 128 ? v35 : v35 ^ 283) ^ v34;
            v37 = 2 * v36;
            v38 = (v36 & 0x7fffff80) != 128 ? v37 : v37 ^ 283;
            v39 = 2 * v38;
            v40 = v32 ^ v34 ^ ((v38 & 0x7fffff80) != 128 ? v39 : v39 ^ 283);
            *v24 = v40;
            v41 = v15 + 3;
            v42 = *(int32_t *)(4 * (int64_t)(v14 + (int32_t)((0x100000000 * v41 | v41) % 4)) + v1);
            v43 = 2 * v42;
            v44 = (v42 & 0x7fffff80) != 128 ? v43 : v43 ^ 283;
            v45 = 2 * v44;
            v46 = (v44 & 0x7fffff80) != 128 ? v45 : v45 ^ 283;
            v47 = 2 * v46;
            *v24 = ((v46 & 0x7fffff80) != 128 ? v47 : v47 ^ 283) ^ v42 ^ v40;
        }
        // 0x35ff
        v13++;
        v48 = 0;
    }
    int32_t v49 = 4 * (int32_t)v48; // 0x3632
    int64_t v50 = 4 * (int64_t)v49; // 0x3637
    *(int32_t *)(v50 + v1) = *(int32_t *)(v50 + v12);
    int64_t v51 = 4 * (int64_t)(v49 | 1); // 0x365f
    *(int32_t *)(v51 + v1) = *(int32_t *)(v51 + v12);
    int64_t v52 = 4 * (int64_t)(v49 | 2); // 0x368a
    *(int32_t *)(v52 + v1) = *(int32_t *)(v52 + v12);
    int64_t v53 = 4 * (int64_t)(v49 | 3); // 0x36b5
    *(int32_t *)(v53 + v1) = *(int32_t *)(v53 + v12);
    int64_t v54 = v48 + 1;
    v48 = v54;
    while (v54 != v2) {
        // 0x362c
        v49 = 4 * (int32_t)v48;
        v50 = 4 * (int64_t)v49;
        *(int32_t *)(v50 + v1) = *(int32_t *)(v50 + v12);
        v51 = 4 * (int64_t)(v49 | 1);
        *(int32_t *)(v51 + v1) = *(int32_t *)(v51 + v12);
        v52 = 4 * (int64_t)(v49 | 2);
        *(int32_t *)(v52 + v1) = *(int32_t *)(v52 + v12);
        v53 = 4 * (int64_t)(v49 | 3);
        *(int32_t *)(v53 + v1) = *(int32_t *)(v53 + v12);
        v54 = v48 + 1;
        v48 = v54;
    }
    // 0x36e6
    return 0;
}
int32_t aes_main(void) {
    // 0x3730
    *(int32_t *)*(int64_t *)0x373b = 50;
    *(int32_t *)(*(int64_t *)0x3748 + 4) = 67;
    *(int32_t *)(*(int64_t *)0x3756 + 8) = 246;
    *(int32_t *)(*(int64_t *)0x3764 + 12) = 168;
    *(int32_t *)(*(int64_t *)0x3772 + 16) = 136;
    *(int32_t *)(*(int64_t *)0x3780 + 20) = 90;
    *(int32_t *)(*(int64_t *)0x378e + 24) = 48;
    *(int32_t *)(*(int64_t *)0x379c + 28) = 141;
    *(int32_t *)(*(int64_t *)0x37aa + 32) = 49;
    *(int32_t *)(*(int64_t *)0x37b8 + 36) = 49;
    *(int32_t *)(*(int64_t *)0x37c6 + 40) = 152;
    *(int32_t *)(*(int64_t *)0x37d4 + 44) = 162;
    *(int32_t *)(*(int64_t *)0x37e2 + 48) = 224;
    *(int32_t *)(*(int64_t *)0x37f0 + 52) = 55;
    *(int32_t *)(*(int64_t *)0x37fe + 56) = 7;
    *(int32_t *)(*(int64_t *)0x380c + 60) = 52;
    *(int32_t *)*(int64_t *)0x381a = 43;
    *(int32_t *)(*(int64_t *)0x3827 + 4) = 126;
    *(int32_t *)(*(int64_t *)0x3835 + 8) = 21;
    *(int32_t *)(*(int64_t *)0x3843 + 12) = 22;
    *(int32_t *)(*(int64_t *)0x3851 + 16) = 40;
    *(int32_t *)(*(int64_t *)0x385f + 20) = 174;
    *(int32_t *)(*(int64_t *)0x386d + 24) = 210;
    *(int32_t *)(*(int64_t *)0x387b + 28) = 166;
    *(int32_t *)(*(int64_t *)0x3889 + 32) = 171;
    *(int32_t *)(*(int64_t *)0x3897 + 36) = 247;
    *(int32_t *)(*(int64_t *)0x38a5 + 40) = 21;
    *(int32_t *)(*(int64_t *)0x38b3 + 44) = 136;
    *(int32_t *)(*(int64_t *)0x38c1 + 48) = 9;
    *(int32_t *)(*(int64_t *)0x38cf + 52) = 207;
    *(int32_t *)(*(int64_t *)0x38dd + 56) = 79;
    *(int32_t *)(*(int64_t *)0x38eb + 60) = 60;
    int64_t v1 = *(int64_t *)0x3918; // 0x3911
    decrypt((int32_t *)*(int64_t *)0x3911, (int32_t *)v1, 0x1f480);
    return 0;
}
