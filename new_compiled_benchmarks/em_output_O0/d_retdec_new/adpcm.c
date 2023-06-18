
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "retdec_base.h"
    #include "adpcm.h"
int32_t abs(int32_t a1) {
    // 0x0
    return (uint32_t)(a1 < 0 ? -a1 : a1);
}
int32_t encode(int32_t xin1, int32_t xin2) {
    int64_t v1 = *(int64_t *)69; // 0x3e
    int64_t v2 = *(int64_t *)80; // 0x49
    int32_t v3 = *(int32_t *)(v1 + 4); // 0xa1
    int64_t v4 = v1; // 0xac
    int64_t v5 = v2; // 0xac
    int64_t v6 = (int64_t)*(int32_t *)v1 * (int64_t)*(int32_t *)v2; // 0xac
    int64_t v7 = (int64_t)v3 * (int64_t)*(int32_t *)(v2 + 4); // 0xac
    for (int32_t i = 0; i < 11; i++) {
        int64_t v8 = v5;
        int64_t v9 = v4;
        v5 = v8 + 8;
        v4 = v9 + 8;
        int32_t v10 = *(int32_t *)v4;
        v6 += (int64_t)v10 * (int64_t)*(int32_t *)v5;
        int32_t v11 = *(int32_t *)(v8 + 12);
        int32_t v12 = *(int32_t *)(v9 + 12);
        v7 += (int64_t)v12 * (int64_t)v11;
    }
    int32_t v13 = 0; // 0x1c2
    int64_t v14 = v2 + 84; // 0x30
    int64_t v15 = v2 + 92;
    int64_t v16 = v15 - 4; // 0x1b5
    *(int32_t *)v15 = *(int32_t *)v14;
    v13++;
    v14 -= 4;
    while (v13 != 22) {
        // 0x19d
        v15 = v16;
        v16 = v15 - 4;
        *(int32_t *)v15 = *(int32_t *)v14;
        v13++;
        v14 -= 4;
    }
    // 0x1cd
    *(int32_t *)v16 = xin1;
    *(int32_t *)(v15 - 8) = xin2;
    *(int32_t *)*(int64_t *)511 = (int32_t)((v7 + v6) / 0x8000);
    *(int32_t *)*(int64_t *)534 = (int32_t)((v6 - v7) / 0x8000);
    int64_t v17 = *(int64_t *)550; // 0x21f
    int32_t v18 = filtez((int32_t *)*(int64_t *)543, (int32_t *)v17); // 0x226
    *(int32_t *)*(int64_t *)564 = v18;
    int32_t v19 = *(int32_t *)*(int64_t *)582; // 0x246
    int32_t v20 = *(int32_t *)*(int64_t *)591; // 0x24f
    int32_t v21 = *(int32_t *)*(int64_t *)600; // 0x258
    int32_t v22 = filtep(*(int32_t *)*(int64_t *)573, v19, v20, v21); // 0x25a
    *(int32_t *)*(int64_t *)616 = v22;
    int32_t v23 = *(int32_t *)*(int64_t *)625; // 0x271
    int32_t v24 = *(int32_t *)*(int64_t *)634; // 0x27a
    *(int32_t *)*(int64_t *)643 = v24 + v23;
    int32_t v25 = *(int32_t *)*(int64_t *)652; // 0x28c
    int32_t v26 = *(int32_t *)*(int64_t *)661; // 0x295
    *(int32_t *)*(int64_t *)670 = v25 - v26;
    int32_t v27 = *(int32_t *)*(int64_t *)688; // 0x2b0
    int32_t v28 = quantl(*(int32_t *)*(int64_t *)679, v27); // 0x2b2
    *(int32_t *)*(int64_t *)704 = v28;
    int32_t v29 = *(int32_t *)*(int64_t *)723; // 0x2d3
    int32_t v30 = *(int32_t *)(4 * (int64_t)(v29 >> 2) + *(int64_t *)738); // 0x2e2
    int64_t v31 = *(int64_t *)759; // 0x2f0
    *(int32_t *)v31 = (int32_t)(0x6348 * (int64_t)v30 / 0x8000);
    int32_t v32 = *(int32_t *)*(int64_t *)777; // 0x309
    int32_t v33 = logscl(*(int32_t *)*(int64_t *)768, v32); // 0x30b
    *(int32_t *)*(int64_t *)793 = v33;
    int32_t v34 = scalel(*(int32_t *)*(int64_t *)802, 8); // 0x329
    *(int32_t *)*(int64_t *)823 = v34;
    int32_t v35 = *(int32_t *)*(int64_t *)832; // 0x340
    int32_t v36 = *(int32_t *)*(int64_t *)841; // 0x349
    *(int32_t *)*(int64_t *)850 = v36 + v35;
    int32_t v37 = *(int32_t *)*(int64_t *)859; // 0x35b
    int64_t v38 = *(int64_t *)875; // 0x364
    upzero(v37, (int32_t *)*(int64_t *)868, (int32_t *)v38);
    int32_t v39 = *(int32_t *)*(int64_t *)896; // 0x380
    int32_t v40 = *(int32_t *)*(int64_t *)905; // 0x389
    int32_t v41 = *(int32_t *)*(int64_t *)914; // 0x392
    int32_t v42 = *(int32_t *)*(int64_t *)923; // 0x39b
    int32_t v43 = uppol2(*(int32_t *)*(int64_t *)887, v39, v40, v41, v42); // 0x39e
    *(int32_t *)*(int64_t *)940 = v43;
    int32_t v44 = *(int32_t *)*(int64_t *)958; // 0x3be
    int32_t v45 = *(int32_t *)*(int64_t *)967; // 0x3c7
    int32_t v46 = *(int32_t *)*(int64_t *)976; // 0x3d0
    int32_t v47 = uppol1(*(int32_t *)*(int64_t *)949, v44, v45, v46); // 0x3d2
    *(int32_t *)*(int64_t *)992 = v47;
    int32_t v48 = *(int32_t *)*(int64_t *)1001; // 0x3e9
    int32_t v49 = *(int32_t *)*(int64_t *)1010; // 0x3f2
    *(int32_t *)*(int64_t *)1019 = v49 + v48;
    *(int32_t *)*(int64_t *)1037 = *(int32_t *)*(int64_t *)1028;
    *(int32_t *)*(int64_t *)1055 = *(int32_t *)*(int64_t *)1046;
    *(int32_t *)*(int64_t *)1073 = *(int32_t *)*(int64_t *)1064;
    *(int32_t *)*(int64_t *)1091 = *(int32_t *)*(int64_t *)1082;
    int64_t v50 = *(int64_t *)1107; // 0x44c
    int32_t v51 = filtez((int32_t *)*(int64_t *)1100, (int32_t *)v50); // 0x453
    *(int32_t *)*(int64_t *)1121 = v51;
    int32_t v52 = *(int32_t *)*(int64_t *)1139; // 0x473
    int32_t v53 = *(int32_t *)*(int64_t *)1148; // 0x47c
    int32_t v54 = *(int32_t *)*(int64_t *)1157; // 0x485
    int32_t v55 = filtep(*(int32_t *)*(int64_t *)1130, v52, v53, v54); // 0x487
    *(int32_t *)*(int64_t *)1173 = v55;
    int32_t v56 = *(int32_t *)*(int64_t *)1182; // 0x49e
    int32_t v57 = *(int32_t *)*(int64_t *)1191; // 0x4a7
    *(int32_t *)*(int64_t *)1200 = v57 + v56;
    int32_t v58 = *(int32_t *)*(int64_t *)1209; // 0x4b9
    int32_t v59 = *(int32_t *)*(int64_t *)1218; // 0x4c2
    *(int32_t *)*(int64_t *)1227 = v58 - v59;
    int64_t result; // 0x30
    if (*(int32_t *)*(int64_t *)1236 < 0) {
        int64_t v60 = *(int64_t *)1270; // 0x4ef
        *(int32_t *)v60 = 1;
        result = v60;
    } else {
        int64_t v61 = *(int64_t *)1252; // 0x4dd
        *(int32_t *)v61 = 3;
        result = v61;
    }
    // 0x4fc
    return result;
}
int32_t filtez(int32_t * bpl, int32_t * dlt) {
    int64_t v1 = (int64_t)bpl;
    int64_t v2 = (int64_t)dlt;
    int64_t v3; // 0x6e0
    int64_t v4 = (0x100000000 * v3 >> 32) * (0x100000000 * v3 >> 32); // 0x751
    for (int32_t i = 1; i < 6; i++) {
        // 0x729
        v2 += 4;
        v1 += 4;
        int32_t v5 = *(int32_t *)v2; // 0x74a
        v4 += (int64_t)v5 * (int64_t)*(int32_t *)v1;
    }
    // 0x767
    return v4 / 0x4000;
}
int32_t filtep(int32_t rlt1, int32_t al1, int32_t rlt2, int32_t al2) {
    // 0x780
    return (uint64_t)((int64_t)al2 * (int64_t)(2 * rlt2) + (int64_t)al1 * (int64_t)(2 * rlt1)) / 0x8000;
}
int32_t quantl(int32_t el, int32_t detl) {
    int32_t v1 = 0;
    int64_t v2 = v1;
    int32_t v3 = *(int32_t *)(4 * v2 + *(int64_t *)2056); // 0x808
    int64_t v4 = v2; // 0x824
    int64_t v5; // 0x7d0
    while (0x100000000 * v5 >> 32 > (int64_t)v3 * (int64_t)detl >> 15) {
        int32_t v6 = v1 + 1; // 0x837
        if (v1 > 28) {
            // 0x834
            v4 = v6;
            goto lab_0x842;
        }
        v1 = v6;
        v2 = v1;
        v3 = *(int32_t *)(4 * v2 + *(int64_t *)2056);
        v4 = v2;
    }
    goto lab_0x842;
  lab_0x842:;
    // 0x842
    int64_t v7; // 0x7d0
    if (el < 0) {
        // 0x862
        v7 = *(int64_t *)2157 + 4 * v4;
    } else {
        // 0x84c
        v7 = *(int64_t *)2135 + 4 * v4;
    }
    // 0x873
    return *(int32_t *)v7;
}
int32_t logscl(int32_t il, int32_t nbl) {
    int32_t v1 = *(int32_t *)(*(int64_t *)2222 + 4 * (int64_t)(il >> 2)); // 0x8ae
    int32_t v2 = v1 + (int32_t)(127 * (int64_t)nbl / 128); // 0x8ae
    int32_t v3 = v2 >= 0 ? v2 : 0; // 0x8c5
    return v3 < 0x4800 ? v3 : 0x4800;
}
int32_t scalel(uint32_t nbl, int32_t shift_constant) {
    int32_t v1 = *(int32_t *)(*(int64_t *)2314 + (int64_t)(nbl / 16 & 124)); // 0x90a
    return 8 * (v1 >> (shift_constant + 1 - nbl / 2048 & 31));
}
void upzero(int32_t dlt, int32_t * dlti, int32_t * bli) {
    int64_t v1 = (int64_t)bli;
    int64_t v2; // 0x930
    if (dlt != 0) {
        int64_t v3 = (int64_t)dlti;
        int64_t v4 = 0;
        int64_t v5 = 4 * v4; // 0x9ae
        int32_t v6 = (int64_t)*(int32_t *)(v5 + v3) * (int64_t)dlt < 0 ? -128 : 128;
        int32_t * v7 = (int32_t *)(v5 + (0x100000000 * v1 >> 32)); // 0x9db
        *v7 = v6 + (int32_t)(255 * (int64_t)*v7 / 256);
        v4++;
        v2 = v3;
        while (v4 != 6) {
            // 0x9a2
            v5 = 4 * v4;
            v6 = (int64_t)*(int32_t *)(v5 + v3) * (int64_t)dlt < 0 ? -128 : 128;
            v7 = (int32_t *)(v5 + (0x100000000 * v1 >> 32));
            *v7 = v6 + (int32_t)(255 * (int64_t)*v7 / 256);
            v4++;
            v2 = v3;
        }
    } else {
        for (int64_t i = 0; i < 6; i++) {
            int32_t * v8 = (int32_t *)(4 * i + (0x100000000 * v1 >> 32)); // 0x962
            *v8 = (int32_t)(255 * (int64_t)*v8 / 256);
        }
        // 0xa11
        v2 = (int64_t)dlti;
    }
    int32_t * v9 = (int32_t *)(v2 + 16); // 0xa15
    *(int32_t *)(v2 + 20) = *v9;
    int32_t * v10 = (int32_t *)(v2 + 12); // 0xa23
    *v9 = *v10;
    int32_t * v11 = (int32_t *)(v2 + 8); // 0xa31
    *v10 = *v11;
    int32_t * v12 = (int32_t *)(v2 + 4); // 0xa3f
    *v11 = *v12;
    int64_t v13; // 0x930
    *v12 = *(int32_t *)&v13;
    *dlti = dlt;
}
int32_t uppol2(int32_t al1, int32_t al2, int32_t plt, int32_t plt1, int32_t plt2) {
    int64_t v1 = 4 * (int64_t)al1; // 0xa88
    int64_t v2 = plt; // 0xa98
    uint64_t v3 = (int64_t)plt1 * v2 < 0 ? v1 : -v1;
    int64_t v4 = (int64_t)plt2 * v2 < 0 ? 0xffffff80 : 128;
    int32_t v5 = v4 + 127 * (int64_t)al2 / 128 + v3 / 128; // 0xb06
    int32_t v6 = v5 < 0x3000 ? v5 : 0x3000;
    return v6 > -0x3000 ? v6 : -0x3000;
}
int32_t uppol1(int32_t al1, int32_t apl2, int32_t plt, int32_t plt1) {
    int32_t v1 = (int64_t)plt1 * (int64_t)plt < 0 ? -192 : 192;
    int32_t v2 = v1 + (int32_t)(255 * (int64_t)al1 / 256);
    int32_t v3 = 0x3c00 - apl2; // 0xb9b
    uint32_t v4 = v2 > v3 ? v3 : v2;
    uint32_t v5 = -v3; // 0xbb8
    return v4 < v5 ? v5 : v4;
}
int32_t logsch(int32_t ih, int32_t nbh) {
    int32_t v1 = *(int32_t *)(*(int64_t *)3063 + 4 * (int64_t)ih); // 0xbf7
    int32_t v2 = v1 + (int32_t)(127 * (int64_t)nbh / 128); // 0xbf7
    int32_t v3 = v2 >= 0 ? v2 : 0;
    return v3 < 0x5800 ? v3 : 0x5800;
}
void decode(int32_t input) {
    // 0xc30
    *(int32_t *)*(int64_t *)3144 = input & 63;
    *(int32_t *)*(int64_t *)3159 = input >> 6;
    int64_t v1 = *(int64_t *)3175; // 0xc60
    int32_t v2 = filtez((int32_t *)*(int64_t *)3168, (int32_t *)v1); // 0xc67
    *(int32_t *)*(int64_t *)3189 = v2;
    int32_t v3 = *(int32_t *)*(int64_t *)3198; // 0xc7e
    int64_t v4 = *(int64_t *)3207; // 0xc80
    int32_t v5 = *(int32_t *)*(int64_t *)3225; // 0xc99
    int32_t v6 = filtep(v3, *(int32_t *)v4, *(int32_t *)*(int64_t *)3216, v5); // 0xc9b
    *(int32_t *)*(int64_t *)3241 = v6;
    int32_t v7 = *(int32_t *)*(int64_t *)3250; // 0xcb2
    int32_t v8 = *(int32_t *)*(int64_t *)3259; // 0xcbb
    *(int32_t *)*(int64_t *)3268 = v8 + v7;
    int32_t v9 = *(int32_t *)*(int64_t *)3287; // 0xcd7
    int32_t v10 = *(int32_t *)(4 * (int64_t)(v9 >> 2) + *(int64_t *)3302); // 0xce6
    int64_t v11 = *(int64_t *)3323; // 0xcf4
    *(int32_t *)v11 = (int32_t)(0x6348 * (int64_t)v10 / 0x8000);
    int32_t v12 = *(int32_t *)*(int64_t *)3342; // 0xd0e
    int32_t v13 = *(int32_t *)(4 * (int64_t)v12 + *(int64_t *)3352); // 0xd18
    int64_t v14 = *(int64_t *)3373; // 0xd26
    *(int32_t *)v14 = (int32_t)(0x6348 * (int64_t)v13 / 0x8000);
    int32_t v15 = *(int32_t *)*(int64_t *)3382; // 0xd36
    int32_t v16 = *(int32_t *)*(int64_t *)3391; // 0xd3f
    *(int32_t *)*(int64_t *)3400 = v16 + v15;
    int32_t v17 = *(int32_t *)*(int64_t *)3418; // 0xd5a
    int32_t v18 = logscl(*(int32_t *)*(int64_t *)3409, v17); // 0xd5c
    *(int32_t *)*(int64_t *)3434 = v18;
    int32_t v19 = scalel(*(int32_t *)*(int64_t *)3443, 8); // 0xd7a
    *(int32_t *)*(int64_t *)3464 = v19;
    int32_t v20 = *(int32_t *)*(int64_t *)3473; // 0xd91
    int32_t v21 = *(int32_t *)*(int64_t *)3482; // 0xd9a
    *(int32_t *)*(int64_t *)3491 = v21 + v20;
    int32_t v22 = *(int32_t *)*(int64_t *)3500; // 0xdac
    int64_t v23 = *(int64_t *)3516; // 0xdb5
    upzero(v22, (int32_t *)*(int64_t *)3509, (int32_t *)v23);
    int32_t v24 = *(int32_t *)*(int64_t *)3537; // 0xdd1
    int32_t v25 = *(int32_t *)*(int64_t *)3546; // 0xdda
    int32_t v26 = *(int32_t *)*(int64_t *)3555; // 0xde3
    int32_t v27 = *(int32_t *)*(int64_t *)3564; // 0xdec
    int32_t v28 = uppol2(*(int32_t *)*(int64_t *)3528, v24, v25, v26, v27); // 0xdef
    *(int32_t *)*(int64_t *)3581 = v28;
    int32_t v29 = *(int32_t *)*(int64_t *)3599; // 0xe0f
    int32_t v30 = *(int32_t *)*(int64_t *)3608; // 0xe18
    int32_t v31 = *(int32_t *)*(int64_t *)3617; // 0xe21
    int32_t v32 = uppol1(*(int32_t *)*(int64_t *)3590, v29, v30, v31); // 0xe23
    *(int32_t *)*(int64_t *)3633 = v32;
    int32_t v33 = *(int32_t *)*(int64_t *)3642; // 0xe3a
    int32_t v34 = *(int32_t *)*(int64_t *)3651; // 0xe43
    *(int32_t *)*(int64_t *)3660 = v34 + v33;
    *(int32_t *)*(int64_t *)3678 = *(int32_t *)*(int64_t *)3669;
    *(int32_t *)*(int64_t *)3696 = *(int32_t *)*(int64_t *)3687;
    *(int32_t *)*(int64_t *)3714 = *(int32_t *)*(int64_t *)3705;
    *(int32_t *)*(int64_t *)3732 = *(int32_t *)*(int64_t *)3723;
    int64_t v35 = *(int64_t *)3748; // 0xe9d
    int32_t v36 = filtez((int32_t *)*(int64_t *)3741, (int32_t *)v35); // 0xea4
    *(int32_t *)*(int64_t *)3762 = v36;
    int32_t v37 = *(int32_t *)*(int64_t *)3780; // 0xec4
    int32_t v38 = *(int32_t *)*(int64_t *)3789; // 0xecd
    int32_t v39 = *(int32_t *)*(int64_t *)3798; // 0xed6
    int32_t v40 = filtep(*(int32_t *)*(int64_t *)3771, v37, v38, v39); // 0xed8
    *(int32_t *)*(int64_t *)3814 = v40;
    int32_t v41 = *(int32_t *)*(int64_t *)3823; // 0xeef
    int32_t v42 = *(int32_t *)*(int64_t *)3832; // 0xef8
    *(int32_t *)*(int64_t *)3841 = v42 + v41;
    int32_t v43 = *(int32_t *)*(int64_t *)3860; // 0xf14
    int32_t v44 = *(int32_t *)(4 * (int64_t)v43 + *(int64_t *)3870); // 0xf1e
    int64_t v45 = *(int64_t *)3891; // 0xf2c
    *(int32_t *)v45 = (int32_t)(0x6348 * (int64_t)v44 / 0x8000);
    int32_t v46 = *(int32_t *)*(int64_t *)3909; // 0xf45
    int32_t v47 = logsch(*(int32_t *)*(int64_t *)3900, v46); // 0xf47
    *(int32_t *)*(int64_t *)3925 = v47;
    int32_t v48 = scalel(*(int32_t *)*(int64_t *)3934, 10); // 0xf65
    *(int32_t *)*(int64_t *)3955 = v48;
    int32_t v49 = *(int32_t *)*(int64_t *)3964; // 0xf7c
    int32_t v50 = *(int32_t *)*(int64_t *)3973; // 0xf85
    *(int32_t *)*(int64_t *)3982 = v50 + v49;
    int32_t v51 = *(int32_t *)*(int64_t *)3991; // 0xf97
    int64_t v52 = *(int64_t *)4007; // 0xfa0
    upzero(v51, (int32_t *)*(int64_t *)4000, (int32_t *)v52);
    int32_t v53 = *(int32_t *)*(int64_t *)4028; // 0xfbc
    int32_t v54 = *(int32_t *)*(int64_t *)4037; // 0xfc5
    int32_t v55 = *(int32_t *)*(int64_t *)4046; // 0xfce
    int32_t v56 = *(int32_t *)*(int64_t *)4055; // 0xfd7
    int32_t v57 = uppol2(*(int32_t *)*(int64_t *)4019, v53, v54, v55, v56); // 0xfda
    *(int32_t *)*(int64_t *)4072 = v57;
    int32_t v58 = *(int32_t *)*(int64_t *)4090; // 0xffa
    int32_t v59 = *(int32_t *)*(int64_t *)0x1003; // 0x1003
    int32_t v60 = *(int32_t *)*(int64_t *)0x100c; // 0x100c
    int32_t v61 = uppol1(*(int32_t *)*(int64_t *)4081, v58, v59, v60); // 0x100e
    *(int32_t *)*(int64_t *)0x101c = v61;
    int32_t v62 = *(int32_t *)*(int64_t *)0x1025; // 0x1025
    int32_t v63 = *(int32_t *)*(int64_t *)0x102e; // 0x102e
    *(int32_t *)*(int64_t *)0x1037 = v63 + v62;
    *(int32_t *)*(int64_t *)0x1049 = *(int32_t *)*(int64_t *)0x1040;
    *(int32_t *)*(int64_t *)0x105b = *(int32_t *)*(int64_t *)0x1052;
    *(int32_t *)*(int64_t *)0x106d = *(int32_t *)*(int64_t *)0x1064;
    *(int32_t *)*(int64_t *)0x107f = *(int32_t *)*(int64_t *)0x1076;
    int32_t v64 = *(int32_t *)*(int64_t *)0x1088; // 0x1088
    int32_t v65 = *(int32_t *)*(int64_t *)0x1091; // 0x1091
    *(int32_t *)*(int64_t *)0x109a = v64 - v65;
    int32_t v66 = *(int32_t *)*(int64_t *)0x10a3; // 0x10a3
    int32_t v67 = *(int32_t *)*(int64_t *)0x10ac; // 0x10ac
    *(int32_t *)*(int64_t *)0x10b5 = v67 + v66;
    int64_t v68 = *(int64_t *)0x10be; // 0x10b7
    int64_t v69 = *(int64_t *)0x10c9; // 0x10c2
    int64_t v70 = *(int64_t *)0x10d4; // 0x10cd
    int32_t v71 = 0; // 0x1194
    int64_t v72 = 0x6348 * (int64_t)*(int32_t *)(v68 + 4); // 0x1189
    int64_t v73 = 0x6348 * (int64_t)*(int32_t *)v68; // 0x1159
    int64_t v74 = v70; // 0xc30
    int64_t v75 = v69; // 0xc30
    int64_t v76 = v68 + 8;
    int32_t v77 = *(int32_t *)v75; // 0x1140
    v73 += (int64_t)*(int32_t *)v76 * (int64_t)v77;
    int32_t v78 = *(int32_t *)v74; // 0x1170
    v72 += (int64_t)*(int32_t *)(v68 + 12) * (int64_t)v78;
    v71++;
    v74 += 4;
    v75 += 4;
    while (v71 != 10) {
        int64_t v79 = v76;
        v76 = v79 + 8;
        v77 = *(int32_t *)v75;
        v73 += (int64_t)*(int32_t *)v76 * (int64_t)v77;
        v78 = *(int32_t *)v74;
        int32_t v80 = *(int32_t *)(v79 + 12); // 0x1182
        v72 += (int64_t)v80 * (int64_t)v78;
        v71++;
        v74 += 4;
        v75 += 4;
    }
    int32_t * v81 = (int32_t *)(v70 + 40);
    int32_t * v82 = (int32_t *)(v69 + 40);
    int32_t v83 = *v82; // 0x11a3
    int32_t v84 = *(int32_t *)(v68 + 88); // 0x11b5
    int32_t v85 = *v81; // 0x11c8
    int32_t v86 = *(int32_t *)(v68 + 92); // 0x11da
    int64_t v87 = *(int64_t *)0x11fa; // 0x11f3
    *(int32_t *)v87 = (int32_t)(((int64_t)v84 * (int64_t)v83 + v73) / 0x4000);
    int64_t v88 = *(int64_t *)0x120d; // 0x1206
    *(int32_t *)v88 = (int32_t)(((int64_t)v86 * (int64_t)v85 + v72) / 0x4000);
    int64_t v89 = v70 + 36; // 0xc30
    int64_t v90 = v69 + 36; // 0xc30
    int32_t v91 = 0; // 0x127f
    int32_t * v92 = (int32_t *)((int64_t)v82 - 4);
    *v82 = *(int32_t *)v90;
    int32_t * v93 = (int32_t *)((int64_t)v81 - 4);
    *v81 = *(int32_t *)v89;
    v91++;
    v89 -= 4;
    v90 -= 4;
    while (v91 != 10) {
        int32_t * v94 = v92;
        int32_t * v95 = v93;
        v92 = (int32_t *)((int64_t)v94 - 4);
        *v94 = *(int32_t *)v90;
        v93 = (int32_t *)((int64_t)v95 - 4);
        *v95 = *(int32_t *)v89;
        v91++;
        v89 -= 4;
        v90 -= 4;
    }
    // 0x128a
    *v92 = *(int32_t *)*(int64_t *)0x1291;
    *v93 = *(int32_t *)*(int64_t *)0x12a0;
}
