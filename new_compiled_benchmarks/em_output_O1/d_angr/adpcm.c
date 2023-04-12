long long abs(unsigned int a0)
{
    unsigned long v1;  // rdi

    return ((unsigned int)(0 - v1) < 0? (unsigned int)v1 : 0 - (unsigned int)v1);
}

extern char got.ah1;
extern char got.ah2;
extern char got.al1;
extern char got.al2;
extern char got.decis_levl;
extern char got.delay_bph;
extern char got.delay_bpl;
extern char got.delay_dhx;
extern char got.delay_dltx;
extern char got.deth;
extern char got.detl;
extern char got.dh;
extern char got.dlt;
extern char got.eh;
extern char got.el;
extern char got.h;
extern char got.ih;
extern char got.il;
extern char got.ilb_table;
extern char got.nbh;
extern char got.nbl;
extern char got.ph;
extern char got.ph1;
extern char got.ph2;
extern char got.plt;
extern char got.plt1;
extern char got.plt2;
extern char got.qq2_code2_table;
extern char got.qq4_code4_table;
extern char got.quant26bt_neg;
extern char got.quant26bt_pos;
extern char got.rh1;
extern char got.rh2;
extern char got.rlt;
extern char got.rlt1;
extern char got.rlt2;
extern char got.sh;
extern char got.sl;
extern char got.sph;
extern char got.spl;
extern char got.szh;
extern char got.szl;
extern char got.tqmf;
extern char got.wh_code_table;
extern char got.wl_code_table;
extern char got.xh;
extern char got.xl;
extern char got.yh;

int encode(unsigned int a0, unsigned int a1)
{
    int tmp_37;  // tmp #37
    int tmp_56;  // tmp #56
    int tmp_60;  // tmp #60
    int tmp_25;  // tmp #25
    int tmp_13;  // tmp #13
    int tmp_30;  // tmp #30
    int tmp_116;  // tmp #116
    int tmp_112;  // tmp #112
    unsigned int v0;  // [bp-0x34]
    int tmp_19;  // tmp #19
    int tmp_203;  // tmp #203
    int tmp_207;  // tmp #207
    int tmp_218;  // tmp #218
    int tmp_224;  // tmp #224
    int tmp_291;  // tmp #291
    int tmp_317;  // tmp #317
    int tmp_113;  // tmp #113
    int tmp_40;  // tmp #40
    int tmp_15;  // tmp #15
    int tmp_172;  // tmp #172
    int tmp_179;  // tmp #179
    int tmp_162;  // tmp #162
    int tmp_166;  // tmp #166
    int tmp_177;  // tmp #177
    int tmp_183;  // tmp #183
    int tmp_250;  // tmp #250
    int tmp_7;  // tmp #7
    int tmp_161;  // tmp #161
    int tmp_190;  // tmp #190
    int tmp_247;  // tmp #247
    int tmp_272;  // tmp #272
    int tmp_278;  // tmp #278
    unsigned long v2;  // rcx
    unsigned long long v3;  // rdx
    unsigned long long v4;  // r11
    unsigned int v5[2];  // rax
    unsigned long long v6;  // r8
    unsigned long v7;  // r9
    uint128_t v8;  // xmm1
    uint128_t v9;  // xmm2
    uint128_t v10;  // xmm3
    uint128_t v11;  // xmm0
    unsigned long long v12;  // r10
    unsigned long long v13;  // rcx
    unsigned long long v14;  // rax
    unsigned long v15;  // rdx
    unsigned long v16;  // r8
    unsigned int v17;  // edi
    unsigned long long v18;  // rsi
    unsigned long long v19;  // r10
    unsigned long v20;  // cc_ndep
    unsigned long v21;  // rsi
    unsigned long long v22;  // r13
    unsigned long long v23;  // r12
    unsigned long long v24;  // r14
    unsigned long long v25;  // r8
    unsigned long v26;  // r11
    unsigned long v27;  // rdx
    unsigned long v28;  // cc_ndep
    unsigned long v29;  // rcx
    unsigned long long v30;  // rbp
    unsigned long v31;  // r8
    unsigned long long v33;  // rsi
    unsigned long v34;  // rcx
    unsigned long v35;  // rdx
    unsigned long v36;  // r9
    unsigned long long v37;  // r9
    unsigned long v38;  // cc_ndep
    void* v39;  // rbx
    void* v40;  // rbx
    unsigned long v41;  // cc_ndep
    unsigned long v42;  // rcx
    unsigned long v43;  // rdx
    unsigned int v44;  // edi
    unsigned long long v45;  // rsi
    unsigned long long v46;  // r9
    unsigned long v47;  // cc_ndep
    unsigned long v48;  // rsi
    unsigned long long v49;  // r9
    unsigned long long v50;  // r13
    unsigned long long v51;  // r14
    unsigned long v53;  // cc_ndep
    unsigned int *v54;  // rax
    unsigned long long v55;  // rbp
    unsigned long v56;  // r8
    unsigned long long v58;  // rsi
    unsigned long v59;  // rcx
    unsigned long v60;  // rdx
    unsigned long v61;  // r12
    unsigned long long v62;  // r11
    unsigned long v63;  // cc_ndep
    void* v64;  // rbx
    void* v65;  // rbx
    unsigned long v66;  // cc_ndep

    v2 = got.tqmf;
    v3 = *((int *)got.tqmf) * 12;
    v5 = got.h + 8;
    v7 = got.tqmf + 8;
    v6 = *((int *)(got.tqmf + 4)) * -44;
    do
    {
        v3 += *((int *)v7) * v5[0];
        v4 = *((int *)(v7 + 4));
        v7 += 8;
        tmp_37 = v5[1];
        v5 = &v5[1];
        v6 += v4 * tmp_37;
    }
    while (true);
    tmp_56 = *((int *)(v2 + 88));
    tmp_60 = *((int *)(v2 + 92));
    v8 = *((int128_t *)(v2 + 16));
    v9 = *((int128_t *)(v2 + 32));
    v10 = *((int128_t *)(v2 + 48));
    *((int128_t *)(v2 + 8)) = *((int128_t *)v2);
    *((uint128_t *)(v2 + 24)) = v8;
    *((uint128_t *)(v2 + 40)) = v9;
    v11 = *((int128_t *)(v2 + 64));
    *((uint128_t *)(v2 + 56)) = v10;
    v12 = *((long long *)(v2 + 80));
    *((uint128_t *)(v2 + 72)) = v11;
    *((unsigned long long *)(v2 + 88)) = v12;
    *((unsigned int *)(v2 + 4)) = a0;
    *((unsigned int *)v2) = a1;
    v13 = v6 + (tmp_60 + tmp_60 * 2) * 4 + tmp_56 * -44 + v3 >> 15;
    *((unsigned int *)got.xl) = v6 + (tmp_60 + tmp_60 * 2) * 4 + tmp_56 * -44 + v3 >> 15;
    v14 = tmp_56 * -44 + v3 - (v6 + (tmp_60 + tmp_60 * 2) * 4) >> 15;
    *((unsigned int *)got.xh) = tmp_56 * -44 + v3 - (v6 + (tmp_60 + tmp_60 * 2) * 4) >> 15;
    v15 = got.delay_bpl;
    v16 = got.delay_dltx;
    v17 = *((int *)got.delay_dltx);
    v18 = *((int *)got.delay_dltx) * *((int *)got.delay_bpl);
    *((unsigned int *)&v7) = 1;
    do
    {
        v19 = *((int *)(v15 + 4));
        v15 += 4;
        tmp_25 = *((int *)(v16 + 4));
        v16 += 4;
        tmp_13 = v18;
        v18 += v19 * tmp_25;
        v20 = (tmp_13 + v19 * tmp_25 <= tmp_13? 1 : 0);
        *((unsigned int *)&v7) = (unsigned int)v7 + 1;
    }
    while ((unsigned int)v7 != 6);
    v21 = v18 / 0x4000;
    *((unsigned int *)got.szl) = v21;
    *((unsigned int *)&v19) = *((int *)got.rlt1);
    v22 = *((int *)got.al1);
    v23 = *((int *)got.al2);
    tmp_30 = *((int *)got.al1) * *((int *)got.rlt1) * 2 + *((int *)got.al2) * *((int *)got.rlt2) * 2 >> 15;
    *((unsigned int *)got.spl) = *((int *)got.al1) * *((int *)got.rlt1) * 2 + *((int *)got.al2) * *((int *)got.rlt2) * 2 >> 15;
    v24 = tmp_30 + v21;
    *((unsigned int *)got.sl) = tmp_30 + v21;
    tmp_116 = v13 - (tmp_30 + v21);
    *((unsigned int *)&v13) = v13 - (tmp_30 + v21);
    *((unsigned int *)got.el) = tmp_116;
    v25 = *((int *)got.detl);
    v26 = ((unsigned int)(0 - tmp_116) < 0? (unsigned int)tmp_116 : 0 - (unsigned int)tmp_116);
    v27 = 0;
    while (*((int *)got.detl) * *((int *)(got.decis_levl + (v27 << 2))) >> 15 < v26)
    {
        v28 = *((int *)got.detl) * *((int *)(got.decis_levl + v27 * 4)) >> 15 < v26;
        v27 += 1;
        if (v27 != 30)
        {
            continue;
        }
        v27 = 30;
        break;
    }
    if ((unsigned int)v13 < 0)
    {
        v29 = got.quant26bt_neg;
    }
    else
    {
        v29 = got.quant26bt_pos;
    }
    tmp_112 = *((int *)(v29 + v27 * 4));
    *((int *)got.il) = *((int *)(v29 + v27 * 4));
    v0 = tmp_112;
    tmp_19 = v25 * *((int *)(got.qq4_code4_table + (tmp_112 >> 2) * 4)) >> 15;
    v30 = v25 * *((int *)(got.qq4_code4_table + (tmp_112 >> 2) * 4)) >> 15;
    v31 = 0;
    tmp_203 = (unsigned int)(*((int *)got.nbl) * 127 >> 7) + *((int *)(got.wl_code_table + (tmp_112 >> 2) * 4));
    tmp_207 = (unsigned int)(*((int *)got.nbl) * 127 >> 7) + *((int *)(got.wl_code_table + (tmp_112 >> 2 << 2))) <= 0;
    tmp_218 = ((unsigned int)(*((int *)got.nbl) * 127 >> 7) + *((int *)(got.wl_code_table + (tmp_112 >> 2 << 2))) <= 0? 0 : (unsigned int)(*((int *)got.nbl) * 127 >> 7) + *((int *)(got.wl_code_table + (tmp_112 >> 2 << 2))));
    tmp_224 = ((unsigned int)(*((int *)got.nbl) * 127 >> 7) + *((int *)(got.wl_code_table + (tmp_112 >> 2 << 2))) <= 0? 0 : (unsigned int)(*((int *)got.nbl) * 127 >> 7) + *((int *)(got.wl_code_table + (tmp_112 >> 2 << 2)))) < 0x4800;
    *((int *)got.nbl) = (((unsigned int)(*((int *)got.nbl) * 127 >> 7) + *((int *)(got.wl_code_table + (tmp_112 >> 2 << 2))) <= 0? 0 : (unsigned int)(*((int *)got.nbl) * 127 >> 7) + *((int *)(got.wl_code_table + (tmp_112 >> 2 << 2)))) < 0x4800? ((unsigned int)(*((int *)got.nbl) * 127 >> 7) + *((int *)(got.wl_code_table + (tmp_112 >> 2 << 2))) <= 0? 0 : (unsigned int)(*((int *)got.nbl) * 127 >> 7) + *((int *)(got.wl_code_table + (tmp_112 >> 2 << 2)))) : 0x4800);
    tmp_291 = *((int *)(got.ilb_table + ((unsigned int)(((tmp_207? 0 : tmp_203) < 0x4800? (tmp_207? 0 : tmp_203) : 0x4800) >> 6) & 31) * 4)) >> (9 - ((tmp_224? tmp_218 : 0x4800) >> 11) & 31);
    *((unsigned int *)got.dlt) = tmp_19;
    *((unsigned int *)got.detl) = tmp_291 * 8;
    tmp_317 = v21 + tmp_19;
    v33 = v21 + tmp_19;
    *((unsigned int *)got.plt) = tmp_317;
    if ((unsigned int)tmp_19 != 0)
    {
        v35 = 0;
        v36 = got.delay_bpl;
        do
        {
            v39 = 0;
            *((char *)&v39) = [D] amd64g_calculate_condition(0x9<64>, 0x14<64>, Mul(rbp<8>, Conv(32->s64, Load(addr=(Load(addr=0x500028<64>, size=8, endness=Iend_LE) + (rdx<8> << 0x2<8>)), size=4, endness=Iend_LE))), 0x0<64>, cc_ndep<8>);
            v40 = v39 * 0x100;
            tmp_113 = v40 + (*((int *)(v36 + v35 * 4)) * 255 >> 8);
            *((unsigned int *)(v36 + v35 * 4)) = (unsigned int)(v40 + (*((int *)(v36 + v35 * 4)) * 255 >> 8)) - 128;
            v41 = (tmp_113 + 4294967168 <= tmp_113? 1 : 0);
            v35 += 1;
        }
        while (v35 != 6);
    }
    else
    {
        v34 = got.delay_bpl;
        do
        {
            tmp_40 = *((int *)(v34 + v31 * 4)) * 255 >> 7;
            v37 = *((int *)(v34 + v31 * 4)) * 255 >> 8;
            *((unsigned int *)(v34 + v31 * 4)) = *((int *)(v34 + v31 * 4)) * 255 >> 8;
            v38 = [D] amd64g_calculate_rflags_c(0x24<64>, r9<8>, t40, cc_ndep<8>);
            v31 += 1;
        }
        while (v31 != 6);
    }
    tmp_15 = v33 * *((int *)got.plt1);
    tmp_172 = v33 * *((int *)got.plt1) < 0;
    tmp_179 = *((int *)got.plt2);
    *((int *)got.plt2) = *((int *)got.plt1);
    *((int *)got.al2) = (-12287 <= ((v33 * tmp_179 < 0? -128 : 128) + (unsigned int)(v23 * 127 >> 7) + ((tmp_15 < 0? v22 << 2 : 0 - (v22 << 2)) >> 7) < 0x3000? (v33 * tmp_179 < 0? -128 : 128) + (unsigned int)(v23 * 127 >> 7) + ((tmp_15 < 0? v22 << 2 : 0 - (v22 << 2)) >> 7) : 0x3000)? ((v33 * tmp_179 < 0? -128 : 128) + (unsigned int)(v23 * 127 >> 7) + ((tmp_15 < 0? v22 << 2 : 0 - (v22 << 2)) >> 7) < 0x3000? (v33 * tmp_179 < 0? -128 : 128) + (unsigned int)(v23 * 127 >> 7) + ((tmp_15 < 0? v22 << 2 : 0 - (v22 << 2)) >> 7) : 0x3000) : -0x3000);
    *((int *)got.al1) = ((((char)[D] amd64g_calculate_condition(0x9<64>, 0x14<64>, t15, 0x0<64>, cc_ndep<8>)? (unsigned int)((v22 * 255 >> 8) + 192) : (unsigned int)(v22 * 255 >> 8) - 192) < 0x3c00 - (-12287 <= ((v33 * tmp_179 < 0? -128 : 128) + (unsigned int)(v23 * 127 >> 7) + ((tmp_15 < 0? v22 << 2 : 0 - (v22 << 2)) >> 7) < 0x3000? (v33 * tmp_179 < 0? -128 : 128) + (unsigned int)(v23 * 127 >> 7) + ((tmp_15 < 0? v22 << 2 : 0 - (v22 << 2)) >> 7) : 0x3000)? ((v33 * tmp_179 < 0? -128 : 128) + (unsigned int)(v23 * 127 >> 7) + ((tmp_15 < 0? v22 << 2 : 0 - (v22 << 2)) >> 7) < 0x3000? (v33 * tmp_179 < 0? -128 : 128) + (unsigned int)(v23 * 127 >> 7) + ((tmp_15 < 0? v22 << 2 : 0 - (v22 << 2)) >> 7) : 0x3000) : -0x3000)? ((char)[D] amd64g_calculate_condition(0x9<64>, 0x14<64>, t15, 0x0<64>, cc_ndep<8>)? (unsigned int)((v22 * 255 >> 8) + 192) : (unsigned int)(v22 * 255 >> 8) - 192) : 0x3c00 - (-12287 <= ((v33 * tmp_179 < 0? -128 : 128) + (unsigned int)(v23 * 127 >> 7) + ((tmp_15 < 0? v22 << 2 : 0 - (v22 << 2)) >> 7) < 0x3000? (v33 * tmp_179 < 0? -128 : 128) + (unsigned int)(v23 * 127 >> 7) + ((tmp_15 < 0? v22 << 2 : 0 - (v22 << 2)) >> 7) : 0x3000)? ((v33 * tmp_179 < 0? -128 : 128) + (unsigned int)(v23 * 127 >> 7) + ((tmp_15 < 0? v22 << 2 : 0 - (v22 << 2)) >> 7) < 0x3000? (v33 * tmp_179 < 0? -128 : 128) + (unsigned int)(v23 * 127 >> 7) + ((tmp_15 < 0? v22 << 2 : 0 - (v22 << 2)) >> 7) : 0x3000) : -0x3000)) <= (-12287 <= ((v33 * tmp_179 < 0? -128 : 128) + (unsigned int)(v23 * 127 >> 7) + ((tmp_172? v22 << 2 : 0 - (v22 << 2)) >> 7) < 0x3000? (v33 * tmp_179 < 0? -128 : 128) + (unsigned int)(v23 * 127 >> 7) + ((tmp_172? v22 << 2 : 0 - (v22 << 2)) >> 7) : 0x3000)? ((v33 * tmp_179 < 0? -128 : 128) + (unsigned int)(v23 * 127 >> 7) + ((tmp_172? v22 << 2 : 0 - (v22 << 2)) >> 7) < 0x3000? (v33 * tmp_179 < 0? -128 : 128) + (unsigned int)(v23 * 127 >> 7) + ((tmp_172? v22 << 2 : 0 - (v22 << 2)) >> 7) : 0x3000) : -0x3000) - 0x3c00? (-12287 <= ((v33 * tmp_179 < 0? -128 : 128) + (unsigned int)(v23 * 127 >> 7) + ((tmp_172? v22 << 2 : 0 - (v22 << 2)) >> 7) < 0x3000? (v33 * tmp_179 < 0? -128 : 128) + (unsigned int)(v23 * 127 >> 7) + ((tmp_172? v22 << 2 : 0 - (v22 << 2)) >> 7) : 0x3000)? ((v33 * tmp_179 < 0? -128 : 128) + (unsigned int)(v23 * 127 >> 7) + ((tmp_172? v22 << 2 : 0 - (v22 << 2)) >> 7) < 0x3000? (v33 * tmp_179 < 0? -128 : 128) + (unsigned int)(v23 * 127 >> 7) + ((tmp_172? v22 << 2 : 0 - (v22 << 2)) >> 7) : 0x3000) : -0x3000) - 0x3c00 : (((char)[D] amd64g_calculate_condition(0x9<64>, 0x14<64>, t15, 0x0<64>, cc_ndep<8>)? (unsigned int)((v22 * 255 >> 8) + 192) : (unsigned int)(v22 * 255 >> 8) - 192) < 0x3c00 - (-12287 <= ((v33 * tmp_179 < 0? -128 : 128) + (unsigned int)(v23 * 127 >> 7) + ((tmp_15 < 0? v22 << 2 : 0 - (v22 << 2)) >> 7) < 0x3000? (v33 * tmp_179 < 0? -128 : 128) + (unsigned int)(v23 * 127 >> 7) + ((tmp_15 < 0? v22 << 2 : 0 - (v22 << 2)) >> 7) : 0x3000)? ((v33 * tmp_179 < 0? -128 : 128) + (unsigned int)(v23 * 127 >> 7) + ((tmp_15 < 0? v22 << 2 : 0 - (v22 << 2)) >> 7) < 0x3000? (v33 * tmp_179 < 0? -128 : 128) + (unsigned int)(v23 * 127 >> 7) + ((tmp_15 < 0? v22 << 2 : 0 - (v22 << 2)) >> 7) : 0x3000) : -0x3000)? ((char)[D] amd64g_calculate_condition(0x9<64>, 0x14<64>, t15, 0x0<64>, cc_ndep<8>)? (unsigned int)((v22 * 255 >> 8) + 192) : (unsigned int)(v22 * 255 >> 8) - 192) : 0x3c00 - (-12287 <= ((v33 * tmp_179 < 0? -128 : 128) + (unsigned int)(v23 * 127 >> 7) + ((tmp_15 < 0? v22 << 2 : 0 - (v22 << 2)) >> 7) < 0x3000? (v33 * tmp_179 < 0? -128 : 128) + (unsigned int)(v23 * 127 >> 7) + ((tmp_15 < 0? v22 << 2 : 0 - (v22 << 2)) >> 7) : 0x3000)? ((v33 * tmp_179 < 0? -128 : 128) + (unsigned int)(v23 * 127 >> 7) + ((tmp_15 < 0? v22 << 2 : 0 - (v22 << 2)) >> 7) < 0x3000? (v33 * tmp_179 < 0? -128 : 128) + (unsigned int)(v23 * 127 >> 7) + ((tmp_15 < 0? v22 << 2 : 0 - (v22 << 2)) >> 7) : 0x3000) : -0x3000)));
    *((unsigned int *)got.rlt2) = v19;
    *((int128_t *)(got.delay_dltx + 8)) = *((int128_t *)(got.delay_dltx + 4));
    *((unsigned int *)(got.delay_dltx + 4)) = v17;
    *((unsigned int *)got.delay_dltx) = v30;
    *((unsigned int *)&v24) = v24 + v30;
    *((unsigned int *)got.rlt) = v24;
    *((unsigned int *)got.rlt1) = v24;
    *((unsigned int *)got.plt1) = v33;
    v42 = got.delay_bph;
    v43 = got.delay_dhx;
    v44 = *((int *)got.delay_dhx);
    v45 = *((int *)got.delay_dhx) * *((int *)got.delay_bph);
    *((unsigned int *)&v31) = 1;
    do
    {
        v46 = *((int *)(v42 + 4));
        v42 += 4;
        tmp_25 = *((int *)(v43 + 4));
        v43 += 4;
        tmp_13 = v45;
        v45 += v46 * tmp_25;
        v47 = (tmp_13 + v46 * tmp_25 <= tmp_13? 1 : 0);
        *((unsigned int *)&v31) = (unsigned int)v31 + 1;
    }
    while ((unsigned int)v31 != 6);
    v48 = v45 / 0x4000;
    *((unsigned int *)got.szh) = v48;
    *((unsigned int *)&v19) = *((int *)got.rh1);
    v49 = *((int *)got.ah1);
    v50 = *((int *)got.ah2);
    tmp_30 = *((int *)got.ah1) * *((int *)got.rh1) * 2 + *((int *)got.ah2) * *((int *)got.rh2) * 2 >> 15;
    *((unsigned int *)got.sph) = *((int *)got.ah1) * *((int *)got.rh1) * 2 + *((int *)got.ah2) * *((int *)got.rh2) * 2 >> 15;
    v51 = tmp_30 + v48;
    *((unsigned int *)got.eh) = v14 - (tmp_30 + v48);
    *((unsigned int *)&v42) = (unsigned int)(!((unsigned int)(v14 - (tmp_30 + v48))) >> 30) | 1;
    *((unsigned int *)&v31) = *((int *)got.deth) * 564 >> 12;
    *((unsigned int *)got.sh) = tmp_30 + v48;
    *((unsigned int *)got.ih) = (unsigned int)(!((unsigned int)(v14 - (tmp_30 + v48))) >> 30) | 1;
    if (((unsigned int)(0 - (v14 - (tmp_30 + v48))) < 0? (unsigned int)(v14 - (tmp_30 + v48)) : 0 - (unsigned int)(v14 - (tmp_30 + v48))) > (unsigned int)v31)
    {
        v53 = ((unsigned int)(0 - (v14 - (tmp_30 + v48))) < 0? (unsigned int)(v14 - (tmp_30 + v48)) : 0 - (unsigned int)(v14 - (tmp_30 + v48))) < *((int *)got.deth) * 564 >> 12;
        *((unsigned int *)got.ih) = (unsigned int)v42 - 1;
    }
    v54 = *((int *)got.ih);
    v55 = *((int *)got.deth) * *((int *)(got.qq2_code2_table + v54 * 4)) >> 15;
    v56 = 0;
    tmp_162 = (unsigned int)(*((int *)got.nbh) * 127 >> 7) + *((int *)(got.wh_code_table + v54 * 4));
    tmp_166 = (unsigned int)(*((int *)got.nbh) * 127 >> 7) + *((int *)(got.wh_code_table + (v54 << 2))) <= 0;
    tmp_177 = ((unsigned int)(*((int *)got.nbh) * 127 >> 7) + *((int *)(got.wh_code_table + (v54 << 2))) <= 0? 0 : (unsigned int)(*((int *)got.nbh) * 127 >> 7) + *((int *)(got.wh_code_table + (v54 << 2))));
    tmp_183 = ((unsigned int)(*((int *)got.nbh) * 127 >> 7) + *((int *)(got.wh_code_table + (v54 << 2))) <= 0? 0 : (unsigned int)(*((int *)got.nbh) * 127 >> 7) + *((int *)(got.wh_code_table + (v54 << 2)))) < 0x5800;
    *((int *)got.nbh) = (((unsigned int)(*((int *)got.nbh) * 127 >> 7) + *((int *)(got.wh_code_table + (v54 << 2))) <= 0? 0 : (unsigned int)(*((int *)got.nbh) * 127 >> 7) + *((int *)(got.wh_code_table + (v54 << 2)))) < 0x5800? ((unsigned int)(*((int *)got.nbh) * 127 >> 7) + *((int *)(got.wh_code_table + (v54 << 2))) <= 0? 0 : (unsigned int)(*((int *)got.nbh) * 127 >> 7) + *((int *)(got.wh_code_table + (v54 << 2)))) : 0x5800);
    tmp_250 = *((int *)(got.ilb_table + ((unsigned int)(((tmp_166? 0 : tmp_162) < 0x5800? (tmp_166? 0 : tmp_162) : 0x5800) >> 6) & 31) * 4)) >> (11 - ((tmp_183? tmp_177 : 0x5800) >> 11) & 31);
    *((unsigned int *)got.dh) = v55;
    *((unsigned int *)got.deth) = tmp_250 * 8;
    v58 = v48 + v55;
    *((unsigned int *)got.ph) = v58;
    if ((unsigned int)v55 != 0)
    {
        v60 = 0;
        v61 = got.delay_bph;
        do
        {
            v64 = 0;
            *((char *)&v64) = [D] amd64g_calculate_condition(0x9<64>, 0x14<64>, Mul(((Conv(32->s64, Load(addr=Load(addr=0x500128<64>, size=8, endness=Iend_LE), size=4, endness=Iend_LE)) * Conv(32->s64, Load(addr=(Load(addr=0x500140<64>, size=8, endness=Iend_LE) + (Conv(32->s64, Load(addr=Load(addr=0x500138<64>, size=8, endness=Iend_LE), size=4, endness=Iend_LE)) << 0x2<8>)), size=4, endness=Iend_LE))) >> 0xf<8>), Conv(32->s64, Load(addr=(Load(addr=0x5000e8<64>, size=8, endness=Iend_LE) + (rdx<8> << 0x2<8>)), size=4, endness=Iend_LE))), 0x0<64>, cc_ndep<8>);
            v65 = v64 * 0x100;
            tmp_116 = (*((int *)(v61 + v60 * 4)) * 255 >> 8) + v65;
            *((unsigned int *)(v61 + v60 * 4)) = (unsigned int)((*((int *)(v61 + v60 * 4)) * 255 >> 8) + v65) - 128;
            v66 = (tmp_116 + 4294967168 <= tmp_116? 1 : 0);
            v60 += 1;
        }
        while (v60 != 6);
        tmp_7 = v49 * 255;
        tmp_161 = v49 * 4;
        *((unsigned int *)&v49) = *((int *)*((long long *)&got.ph1));
        tmp_15 = v58 * *((int *)*((long long *)&got.ph1));
        tmp_190 = v58 * *((int *)*((long long *)&got.ph1)) < 0;
        tmp_247 = v58 * *((int *)*((long long *)&got.ph2)) < 0;
        tmp_272 = (v58 * *((int *)*((long long *)&got.ph2)) < 0? -128 : 128) + (unsigned int)(v50 * 127 >> 7) + ((v58 * *((int *)*((long long *)&got.ph1)) < 0? *((int *)got.ah1) << 2 : 0 - (*((int *)got.ah1) << 2)) >> 7);
        tmp_278 = (v58 * *((int *)*((long long *)&got.ph2)) < 0? -128 : 128) + (unsigned int)(v50 * 127 >> 7) + ((v58 * *((int *)*((long long *)&got.ph1)) < 0? *((int *)got.ah1) << 2 : 0 - (*((int *)got.ah1) << 2)) >> 7) < 0x3000;
        *((int *)got.ah2) = (-12287 <= ((v58 * *((int *)*((long long *)&got.ph2)) < 0? -128 : 128) + (unsigned int)(v50 * 127 >> 7) + ((v58 * *((int *)*((long long *)&got.ph1)) < 0? *((int *)got.ah1) << 2 : 0 - (*((int *)got.ah1) << 2)) >> 7) < 0x3000? (v58 * *((int *)*((long long *)&got.ph2)) < 0? -128 : 128) + (unsigned int)(v50 * 127 >> 7) + ((v58 * *((int *)*((long long *)&got.ph1)) < 0? *((int *)got.ah1) << 2 : 0 - (*((int *)got.ah1) << 2)) >> 7) : 0x3000)? ((v58 * *((int *)*((long long *)&got.ph2)) < 0? -128 : 128) + (unsigned int)(v50 * 127 >> 7) + ((v58 * *((int *)*((long long *)&got.ph1)) < 0? *((int *)got.ah1) << 2 : 0 - (*((int *)got.ah1) << 2)) >> 7) < 0x3000? (v58 * *((int *)*((long long *)&got.ph2)) < 0? -128 : 128) + (unsigned int)(v50 * 127 >> 7) + ((v58 * *((int *)*((long long *)&got.ph1)) < 0? *((int *)got.ah1) << 2 : 0 - (*((int *)got.ah1) << 2)) >> 7) : 0x3000) : -0x3000);
        *((unsigned int *)*((long long *)&got.ph2)) = v49;
        *((int *)got.ah1) = ((((char)[D] amd64g_calculate_condition(0x9<64>, 0x14<64>, t15, 0x0<64>, cc_ndep<8>)? (unsigned int)((tmp_7 >> 8) + 192) : (unsigned int)(tmp_7 >> 8) - 192) < 0x3c00 - (-12287 <= (tmp_278? tmp_272 : 0x3000)? (tmp_278? tmp_272 : 0x3000) : -0x3000)? ((char)[D] amd64g_calculate_condition(0x9<64>, 0x14<64>, t15, 0x0<64>, cc_ndep<8>)? (unsigned int)((tmp_7 >> 8) + 192) : (unsigned int)(tmp_7 >> 8) - 192) : 0x3c00 - (-12287 <= (tmp_278? tmp_272 : 0x3000)? (tmp_278? tmp_272 : 0x3000) : -0x3000)) <= (-12287 <= ((tmp_247? -128 : 128) + (unsigned int)(v50 * 127 >> 7) + ((tmp_190? tmp_161 : 0 - tmp_161) >> 7) < 0x3000? (tmp_247? -128 : 128) + (unsigned int)(v50 * 127 >> 7) + ((tmp_190? tmp_161 : 0 - tmp_161) >> 7) : 0x3000)? ((tmp_247? -128 : 128) + (unsigned int)(v50 * 127 >> 7) + ((tmp_190? tmp_161 : 0 - tmp_161) >> 7) < 0x3000? (tmp_247? -128 : 128) + (unsigned int)(v50 * 127 >> 7) + ((tmp_190? tmp_161 : 0 - tmp_161) >> 7) : 0x3000) : -0x3000) - 0x3c00? (-12287 <= ((tmp_247? -128 : 128) + (unsigned int)(v50 * 127 >> 7) + ((tmp_190? tmp_161 : 0 - tmp_161) >> 7) < 0x3000? (tmp_247? -128 : 128) + (unsigned int)(v50 * 127 >> 7) + ((tmp_190? tmp_161 : 0 - tmp_161) >> 7) : 0x3000)? ((tmp_247? -128 : 128) + (unsigned int)(v50 * 127 >> 7) + ((tmp_190? tmp_161 : 0 - tmp_161) >> 7) < 0x3000? (tmp_247? -128 : 128) + (unsigned int)(v50 * 127 >> 7) + ((tmp_190? tmp_161 : 0 - tmp_161) >> 7) : 0x3000) : -0x3000) - 0x3c00 : (((char)[D] amd64g_calculate_condition(0x9<64>, 0x14<64>, t15, 0x0<64>, cc_ndep<8>)? (unsigned int)((tmp_7 >> 8) + 192) : (unsigned int)(tmp_7 >> 8) - 192) < 0x3c00 - (-12287 <= (tmp_278? tmp_272 : 0x3000)? (tmp_278? tmp_272 : 0x3000) : -0x3000)? ((char)[D] amd64g_calculate_condition(0x9<64>, 0x14<64>, t15, 0x0<64>, cc_ndep<8>)? (unsigned int)((tmp_7 >> 8) + 192) : (unsigned int)(tmp_7 >> 8) - 192) : 0x3c00 - (-12287 <= (tmp_278? tmp_272 : 0x3000)? (tmp_278? tmp_272 : 0x3000) : -0x3000)));
        *((unsigned int *)got.rh2) = v19;
        *((int128_t *)(got.delay_dhx + 8)) = *((int128_t *)(got.delay_dhx + 4));
        *((unsigned int *)(got.delay_dhx + 4)) = v44;
        *((unsigned int *)got.delay_dhx) = v55;
        *((unsigned int *)*((long long *)&got.yh)) = v51 + v55;
        *((unsigned int *)got.rh1) = v51 + v55;
        *((unsigned int *)*((long long *)&got.ph1)) = v58;
        *((unsigned int *)&v54) = (unsigned int)v54 * 64 | v0;
        return (unsigned int)v54;
    }
    v59 = got.delay_bph;
    do
    {
        tmp_40 = *((int *)(v59 + v56 * 4)) * 255 >> 7;
        v62 = *((int *)(v59 + v56 * 4)) * 255 >> 8;
        *((unsigned int *)(v59 + v56 * 4)) = *((int *)(v59 + v56 * 4)) * 255 >> 8;
        v63 = [D] amd64g_calculate_rflags_c(0x24<64>, r11<8>, t40, cc_ndep<8>);
        v56 += 1;
    }
    while (v56 != 6);
    tmp_7 = v49 * 255;
    tmp_161 = v49 * 4;
    *((unsigned int *)&v49) = *((int *)*((long long *)&got.ph1));
    tmp_15 = v58 * *((int *)*((long long *)&got.ph1));
    tmp_190 = v58 * *((int *)*((long long *)&got.ph1)) < 0;
    tmp_247 = v58 * *((int *)*((long long *)&got.ph2)) < 0;
    tmp_272 = (v58 * *((int *)*((long long *)&got.ph2)) < 0? -128 : 128) + (unsigned int)(v50 * 127 >> 7) + ((v58 * *((int *)*((long long *)&got.ph1)) < 0? *((int *)got.ah1) << 2 : 0 - (*((int *)got.ah1) << 2)) >> 7);
    tmp_278 = (v58 * *((int *)*((long long *)&got.ph2)) < 0? -128 : 128) + (unsigned int)(v50 * 127 >> 7) + ((v58 * *((int *)*((long long *)&got.ph1)) < 0? *((int *)got.ah1) << 2 : 0 - (*((int *)got.ah1) << 2)) >> 7) < 0x3000;
    *((int *)got.ah2) = (-12287 <= ((v58 * *((int *)*((long long *)&got.ph2)) < 0? -128 : 128) + (unsigned int)(v50 * 127 >> 7) + ((v58 * *((int *)*((long long *)&got.ph1)) < 0? *((int *)got.ah1) << 2 : 0 - (*((int *)got.ah1) << 2)) >> 7) < 0x3000? (v58 * *((int *)*((long long *)&got.ph2)) < 0? -128 : 128) + (unsigned int)(v50 * 127 >> 7) + ((v58 * *((int *)*((long long *)&got.ph1)) < 0? *((int *)got.ah1) << 2 : 0 - (*((int *)got.ah1) << 2)) >> 7) : 0x3000)? ((v58 * *((int *)*((long long *)&got.ph2)) < 0? -128 : 128) + (unsigned int)(v50 * 127 >> 7) + ((v58 * *((int *)*((long long *)&got.ph1)) < 0? *((int *)got.ah1) << 2 : 0 - (*((int *)got.ah1) << 2)) >> 7) < 0x3000? (v58 * *((int *)*((long long *)&got.ph2)) < 0? -128 : 128) + (unsigned int)(v50 * 127 >> 7) + ((v58 * *((int *)*((long long *)&got.ph1)) < 0? *((int *)got.ah1) << 2 : 0 - (*((int *)got.ah1) << 2)) >> 7) : 0x3000) : -0x3000);
    *((unsigned int *)*((long long *)&got.ph2)) = v49;
    *((int *)got.ah1) = ((((char)[D] amd64g_calculate_condition(0x9<64>, 0x14<64>, t15, 0x0<64>, cc_ndep<8>)? (unsigned int)((tmp_7 >> 8) + 192) : (unsigned int)(tmp_7 >> 8) - 192) < 0x3c00 - (-12287 <= (tmp_278? tmp_272 : 0x3000)? (tmp_278? tmp_272 : 0x3000) : -0x3000)? ((char)[D] amd64g_calculate_condition(0x9<64>, 0x14<64>, t15, 0x0<64>, cc_ndep<8>)? (unsigned int)((tmp_7 >> 8) + 192) : (unsigned int)(tmp_7 >> 8) - 192) : 0x3c00 - (-12287 <= (tmp_278? tmp_272 : 0x3000)? (tmp_278? tmp_272 : 0x3000) : -0x3000)) <= (-12287 <= ((tmp_247? -128 : 128) + (unsigned int)(v50 * 127 >> 7) + ((tmp_190? tmp_161 : 0 - tmp_161) >> 7) < 0x3000? (tmp_247? -128 : 128) + (unsigned int)(v50 * 127 >> 7) + ((tmp_190? tmp_161 : 0 - tmp_161) >> 7) : 0x3000)? ((tmp_247? -128 : 128) + (unsigned int)(v50 * 127 >> 7) + ((tmp_190? tmp_161 : 0 - tmp_161) >> 7) < 0x3000? (tmp_247? -128 : 128) + (unsigned int)(v50 * 127 >> 7) + ((tmp_190? tmp_161 : 0 - tmp_161) >> 7) : 0x3000) : -0x3000) - 0x3c00? (-12287 <= ((tmp_247? -128 : 128) + (unsigned int)(v50 * 127 >> 7) + ((tmp_190? tmp_161 : 0 - tmp_161) >> 7) < 0x3000? (tmp_247? -128 : 128) + (unsigned int)(v50 * 127 >> 7) + ((tmp_190? tmp_161 : 0 - tmp_161) >> 7) : 0x3000)? ((tmp_247? -128 : 128) + (unsigned int)(v50 * 127 >> 7) + ((tmp_190? tmp_161 : 0 - tmp_161) >> 7) < 0x3000? (tmp_247? -128 : 128) + (unsigned int)(v50 * 127 >> 7) + ((tmp_190? tmp_161 : 0 - tmp_161) >> 7) : 0x3000) : -0x3000) - 0x3c00 : (((char)[D] amd64g_calculate_condition(0x9<64>, 0x14<64>, t15, 0x0<64>, cc_ndep<8>)? (unsigned int)((tmp_7 >> 8) + 192) : (unsigned int)(tmp_7 >> 8) - 192) < 0x3c00 - (-12287 <= (tmp_278? tmp_272 : 0x3000)? (tmp_278? tmp_272 : 0x3000) : -0x3000)? ((char)[D] amd64g_calculate_condition(0x9<64>, 0x14<64>, t15, 0x0<64>, cc_ndep<8>)? (unsigned int)((tmp_7 >> 8) + 192) : (unsigned int)(tmp_7 >> 8) - 192) : 0x3c00 - (-12287 <= (tmp_278? tmp_272 : 0x3000)? (tmp_278? tmp_272 : 0x3000) : -0x3000)));
    *((unsigned int *)got.rh2) = v19;
    *((int128_t *)(got.delay_dhx + 8)) = *((int128_t *)(got.delay_dhx + 4));
    *((unsigned int *)(got.delay_dhx + 4)) = v44;
    *((unsigned int *)got.delay_dhx) = v55;
    *((unsigned int *)*((long long *)&got.yh)) = v51 + v55;
    *((unsigned int *)got.rh1) = v51 + v55;
    *((unsigned int *)*((long long *)&got.ph1)) = v58;
    *((unsigned int *)&v54) = (unsigned int)v54 * 64 | v0;
    return (unsigned int)v54;
}

long long filtez(unsigned int a0[2], unsigned int a1[2])
{
    int tmp_25;  // tmp #25
    unsigned long long v1;  // rax
    unsigned int v2;  // ecx
    unsigned long v4;  // rax

    v1 = a0[0] * a1[0];
    v2 = 1;
    do
    {
        a0 = &a0[1];
        tmp_25 = a1[1];
        a1 = &a1[1];
        v1 += a0[1] * tmp_25;
        v2 += 1;
    }
    while (v2 != 6);
    v4 = v1 / 0x4000;
    return v4;
}

long long filtep(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
    unsigned long v2;  // rsi
    unsigned long long v3;  // rsi
    unsigned long v5;  // rcx

    v3 = a0 * 2 * v2;
    return a2 * 2 * v5 + v3 >> 15;
}

extern char got.decis_levl;
extern char got.quant26bt_neg;
extern char got.quant26bt_pos;

long long quantl(unsigned int a0, unsigned int a1)
{
    void* v1;  // rax
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax

    v1 = 0;
    while (a1 * *((int *)(got.decis_levl + (v1 << 2))) >> 15 < ((unsigned int)(0 - a0) < 0? (unsigned int)a0 : 0 - (unsigned int)a0))
    {
        v1 += 1;
        if (v1 != 30)
        {
            continue;
        }
        if ((unsigned int)a0 < 0)
        {
            return *((int *)(*((long long *)&got.quant26bt_neg) + 120));
        }
        return *((int *)(*((long long *)&got.quant26bt_pos) + 120));
    }
    if ((unsigned int)a0 < 0)
    {
        v2 = *((int *)(*((long long *)&got.quant26bt_neg) + v1 * 4));
        return v2;
    }
    v3 = *((int *)(*((long long *)&got.quant26bt_pos) + v1 * 4));
    return v3;
}

extern char got.wl_code_table;

long long logscl(unsigned int a0, unsigned int a1)
{
    unsigned long v1;  // rdi
    unsigned long v3;  // rsi

    return (((unsigned int)(v3 * 127 >> 7) + *((int *)(got.wl_code_table + (v1 >> 2 << 2))) > 0? (unsigned int)(v3 * 127 >> 7) + *((int *)(got.wl_code_table + (v1 >> 2 << 2))) : 0) < 0x4800? ((unsigned int)(v3 * 127 >> 7) + *((int *)(got.wl_code_table + (v1 >> 2 << 2))) > 0? (unsigned int)(v3 * 127 >> 7) + *((int *)(got.wl_code_table + (v1 >> 2 << 2))) : 0) : 0x4800);
}

extern char got.ilb_table;

long long scalel(unsigned int a0, unsigned int a1)
{
    int tmp_60;  // tmp #60
    unsigned long v1;  // rdi
    unsigned long v3;  // rsi
    unsigned long long v4;  // rsi
    unsigned long v5;  // rax

    tmp_60 = (unsigned int)v1 / 64 & 31;
    v4 = v3 - v1 / 0x800;
    v5 = (*((int *)(got.ilb_table + tmp_60 * 4)) >> ((char)v4 + 1 & 31)) * 8;
    return v5;
}

typedef struct struct_0 {
    char field_0;
    char padding_1[3];
    unsigned long long field_4;
    unsigned long long field_8;
    unsigned long long field_c;
    unsigned int field_10;
    unsigned int field_14;
} struct_0;

long long upzero(unsigned int a0, struct_0 *a1, void* a2)
{
    int tmp_113;  // tmp #113
    int tmp_40;  // tmp #40
    unsigned long v1;  // rdi
    void* v2;  // rax
    unsigned long long v3;  // r8
    unsigned long v4;  // cc_ndep
    void* v5;  // r9
    void* v6;  // r9
    unsigned long v7;  // cc_ndep
    void* v8;  // rcx
    unsigned long long v9;  // rax

    if ((unsigned int)v1 != 0)
    {
        v8 = 0;
        do
        {
            v5 = 0;
            *((char *)&v5) = [D] amd64g_calculate_condition(0x9<64>, 0x14<64>, Mul(rdi<8>, Conv(32->s64, Load(addr=(rsi<8> + (rcx<8> << 0x2<8>)), size=4, endness=Iend_LE))), 0x0<64>, cc_ndep<8>);
            v6 = v5 * 0x100;
            tmp_113 = v6 + (*((int *)((char *)a2 + 0x4 * v8)) * 255 >> 8);
            *((unsigned int *)((char *)a2 + 0x4 * v8)) = (unsigned int)(v6 + (*((int *)((char *)a2 + 0x4 * v8)) * 255 >> 8)) - 128;
            v7 = (tmp_113 + 4294967168 <= tmp_113? 1 : 0);
            v8 += 1;
        }
        while (v8 != 6);
        *((int *)&((char *)&a1->field_8)[4]) = a1->field_8;
        v9 = *((long long *)&a1->field_0);
        *((unsigned long long *)&((char *)&a1->field_4)[4]) = a1->field_4;
        *((unsigned long long *)&(&a1->padding_1)[1]) = v9;
        *((unsigned int *)&a1->field_0) = v1;
        return v9;
    }
    v2 = 0;
    do
    {
        tmp_40 = *((int *)((char *)a2 + 0x4 * v2)) * 255 >> 7;
        v3 = *((int *)((char *)a2 + 0x4 * v2)) * 255 >> 8;
        *((unsigned int *)((char *)a2 + 0x4 * v2)) = *((int *)((char *)a2 + 0x4 * v2)) * 255 >> 8;
        v4 = [D] amd64g_calculate_rflags_c(0x24<64>, r8<8>, t40, cc_ndep<8>);
        v2 += 1;
    }
    while (v2 != 6);
    *((int *)&((char *)&a1->field_8)[4]) = a1->field_8;
    v9 = *((long long *)&a1->field_0);
    *((unsigned long long *)&((char *)&a1->field_4)[4]) = a1->field_4;
    *((unsigned long long *)&(&a1->padding_1)[1]) = v9;
    *((unsigned int *)&a1->field_0) = v1;
    return v9;
}

long long uppol2(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
    int tmp_9;  // tmp #9
    unsigned long v1;  // rdx
    unsigned long v2;  // rcx
    void* v3;  // rcx
    unsigned long v4;  // rdi
    unsigned long v5;  // rsi
    unsigned long v6;  // rax

    tmp_9 = v1 * v2;
    v3 = 0;
    *((char *)&v3) = [D] amd64g_calculate_condition(0x9<64>, 0x14<64>, Mul(rdx<8>, r8<8>), 0x0<64>, cc_ndep<8>);
    v6 = (-12287 <= ((unsigned int)(((tmp_9 < 0? v4 << 2 : 0 - (v4 << 2)) >> 7) + (v3 << 8) + (v5 * 127 >> 7)) - 128 < 0x3000? (unsigned int)(((tmp_9 < 0? v4 << 2 : 0 - (v4 << 2)) >> 7) + (v3 << 8) + (v5 * 127 >> 7)) - 128 : 0x3000)? ((unsigned int)(((tmp_9 < 0? v4 << 2 : 0 - (v4 << 2)) >> 7) + (v3 << 8) + (v5 * 127 >> 7)) - 128 < 0x3000? (unsigned int)(((tmp_9 < 0? v4 << 2 : 0 - (v4 << 2)) >> 7) + (v3 << 8) + (v5 * 127 >> 7)) - 128 : 0x3000) : -0x3000);
    return v6;
}

long long uppol1(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
    unsigned long v1;  // rdi
    unsigned long v2;  // rsi

    return ((((char)[D] amd64g_calculate_condition(0x9<64>, 0x14<64>, Mul(rdx<8>, rcx<8>), 0x0<64>, cc_ndep<8>)? (unsigned int)((v1 * 255 >> 8) + 192) : (unsigned int)(v1 * 255 >> 8) - 192) < 0x3c00 - esi<4>? ((char)[D] amd64g_calculate_condition(0x9<64>, 0x14<64>, Mul(rdx<8>, rcx<8>), 0x0<64>, cc_ndep<8>)? (unsigned int)((v1 * 255 >> 8) + 192) : (unsigned int)(v1 * 255 >> 8) - 192) : 0x3c00 - esi<4>) <= (unsigned int)(v2 - 0x3c00)? (unsigned int)(v2 - 0x3c00) : (((char)[D] amd64g_calculate_condition(0x9<64>, 0x14<64>, Mul(rdx<8>, rcx<8>), 0x0<64>, cc_ndep<8>)? (unsigned int)((v1 * 255 >> 8) + 192) : (unsigned int)(v1 * 255 >> 8) - 192) < 0x3c00 - esi<4>? ((char)[D] amd64g_calculate_condition(0x9<64>, 0x14<64>, Mul(rdx<8>, rcx<8>), 0x0<64>, cc_ndep<8>)? (unsigned int)((v1 * 255 >> 8) + 192) : (unsigned int)(v1 * 255 >> 8) - 192) : 0x3c00 - esi<4>));
}

extern char got.wh_code_table;

long long logsch(unsigned int a0, unsigned int a1)
{
    unsigned long v1;  // rsi
    unsigned long v2;  // rdi

    return (((unsigned int)(v1 * 127 >> 7) + *((int *)(got.wh_code_table + (v2 << 2))) > 0? (unsigned int)(v1 * 127 >> 7) + *((int *)(got.wh_code_table + (v2 << 2))) : 0) < 0x5800? ((unsigned int)(v1 * 127 >> 7) + *((int *)(got.wh_code_table + (v2 << 2))) > 0? (unsigned int)(v1 * 127 >> 7) + *((int *)(got.wh_code_table + (v2 << 2))) : 0) : 0x5800);
}

typedef struct struct_0 {
    char field_0;
    char padding_1[3];
    char field_4;
    char padding_5[3];
    uint128_t field_8;
    uint128_t field_10;
    uint128_t field_14;
    unsigned long long field_20;
    unsigned long long field_24;
    unsigned int field_28;
} struct_0;

extern char got.accumc;
extern char got.accumd;
extern char got.dec_ah1;
extern char got.dec_ah2;
extern char got.dec_al1;
extern char got.dec_al2;
extern char got.dec_del_bph;
extern char got.dec_del_bpl;
extern char got.dec_del_dhx;
extern char got.dec_del_dltx;
extern char got.dec_deth;
extern char got.dec_detl;
extern char got.dec_dh;
extern char got.dec_dlt;
extern char got.dec_nbh;
extern char got.dec_nbl;
extern char got.dec_ph;
extern char got.dec_ph1;
extern char got.dec_ph2;
extern char got.dec_plt;
extern char got.dec_plt1;
extern char got.dec_plt2;
extern char got.dec_rh1;
extern char got.dec_rh2;
extern char got.dec_rlt;
extern char got.dec_rlt1;
extern char got.dec_rlt2;
extern char got.dec_sh;
extern char got.dec_sl;
extern char got.dec_sph;
extern char got.dec_spl;
extern char got.dec_szh;
extern char got.dec_szl;
extern char got.dl;
extern char got.h;
extern char got.ih;
extern char got.il;
extern char got.ilb_table;
extern char got.ilr;
extern char got.qq2_code2_table;
extern char got.qq4_code4_table;
extern char got.qq6_code6_table;
extern char got.rh;
extern char got.rl;
extern char got.wh_code_table;
extern char got.wl_code_table;
extern char got.xd;
extern char got.xout1;
extern char got.xout2;
extern char got.xs;

int decode(unsigned int a0)
{
    unsigned long v0;  // [bp-0x38]
    int tmp_25;  // tmp #25
    int tmp_13;  // tmp #13
    int tmp_28;  // tmp #28
    int tmp_64;  // tmp #64
    int tmp_307;  // tmp #307
    int tmp_311;  // tmp #311
    int tmp_322;  // tmp #322
    int tmp_328;  // tmp #328
    int tmp_113;  // tmp #113
    int tmp_40;  // tmp #40
    int tmp_15;  // tmp #15
    int tmp_173;  // tmp #173
    int tmp_180;  // tmp #180
    int tmp_190;  // tmp #190
    int tmp_255;  // tmp #255
    int tmp_259;  // tmp #259
    int tmp_270;  // tmp #270
    int tmp_276;  // tmp #276
    int tmp_117;  // tmp #117
    int tmp_195;  // tmp #195
    int tmp_42;  // tmp #42
    int tmp_252;  // tmp #252
    int tmp_277;  // tmp #277
    int tmp_283;  // tmp #283
    int tmp_30;  // tmp #30
    int tmp_38;  // tmp #38
    int tmp_73;  // tmp #73
    int tmp_108;  // tmp #108
    int tmp_114;  // tmp #114
    unsigned long v2;  // rdi
    unsigned long long v3;  // rcx
    unsigned long long v4;  // rdi
    unsigned long long v5;  // rdx
    unsigned long v6;  // cc_ndep
    unsigned int v7;  // r8d
    void* v8;  // rax
    void* v9;  // rsi
    unsigned int v10;  // r10d
    unsigned int v11;  // r8
    unsigned long long v12;  // r12
    unsigned long long v13;  // r14
    unsigned long long v14;  // r13
    unsigned long v15;  // rax
    void* v16;  // r11
    unsigned long long v18;  // rdx
    void* v19;  // rcx
    void* v20;  // rsi
    unsigned long long v21;  // r9
    unsigned long v22;  // cc_ndep
    void* v23;  // r15
    void* v24;  // r15
    unsigned long v25;  // cc_ndep
    void* v26;  // rcx
    void* v27;  // rdx
    unsigned long long v28;  // rsi
    unsigned long long v29;  // r10
    unsigned long v30;  // cc_ndep
    unsigned long long v31;  // r10
    unsigned long long v32;  // r13
    unsigned long v33;  // rdx
    unsigned long long v34;  // rdi
    void* v35;  // r8
    unsigned long long v37;  // rsi
    void* v38;  // rcx
    void* v39;  // r8
    void* v40;  // r12
    unsigned long long v41;  // r12
    unsigned long v42;  // cc_ndep
    void* v43;  // r14
    void* v44;  // r14
    unsigned long v45;  // cc_ndep
    unsigned long long v46;  // rcx
    unsigned long long v47;  // rdx
    unsigned long long v48;  // r11
    unsigned long long v49;  // rax
    unsigned long long v50;  // rsi
    unsigned int v51[2];  // rdi
    void* v52;  // r9
    struct_0 *v53;  // r10
    uint128_t v54;  // xmm1
    unsigned long long v55;  // rax

    v3 = (unsigned int)v2 & 63;
    *((unsigned int *)got.ilr) = (unsigned int)v2 & 63;
    v4 = v2 >> 6;
    *((unsigned int *)got.ih) = v4;
    v8 = got.dec_del_bpl;
    v9 = got.dec_del_dltx;
    v0 = *((int *)got.dec_del_dltx);
    v5 = *((int *)got.dec_del_dltx) * *((int *)got.dec_del_bpl);
    v7 = 1;
    do
    {
        v21 = (int)v8[4];
        v8 += 4;
        tmp_25 = (int)v9[4];
        v9 += 4;
        tmp_13 = v5;
        v5 += v21 * tmp_25;
        v6 = (tmp_13 + v21 * tmp_25 <= tmp_13? 1 : 0);
        v7 += 1;
    }
    while (v7 != 6);
    v10 = *((int *)got.dec_rlt1);
    v11 = *((int *)got.dec_al1);
    v12 = *((int *)got.dec_al2);
    tmp_28 = *((int *)got.dec_al1) * *((int *)got.dec_rlt1) * 2 + *((int *)got.dec_al2) * *((int *)got.dec_rlt2) * 2 >> 15;
    *((unsigned int *)got.dec_spl) = *((int *)got.dec_al1) * *((int *)got.dec_rlt1) * 2 + *((int *)got.dec_al2) * *((int *)got.dec_rlt2) * 2 >> 15;
    v13 = tmp_28 + v5 / 0x4000;
    v14 = *((int *)got.dec_detl) * *((int *)(got.qq4_code4_table + ((unsigned int)v3 & -0x4))) >> 15;
    tmp_64 = *((int *)got.dec_detl) * *((int *)(got.qq6_code6_table + *((int *)got.il) * 4)) >> 15;
    *((unsigned int *)got.dl) = *((int *)got.dec_detl) * *((int *)(got.qq6_code6_table + *((int *)got.il) * 4)) >> 15;
    v15 = tmp_64 + tmp_28 + v5 / 0x4000;
    v16 = 0;
    tmp_307 = (unsigned int)(*((int *)got.dec_nbl) * 127 >> 7) + *((int *)(got.wl_code_table + ((unsigned int)v3 & -0x4)));
    tmp_311 = (unsigned int)(*((int *)got.dec_nbl) * 127 >> 7) + *((int *)(got.wl_code_table + ((unsigned int)v3 & -0x4))) <= 0;
    tmp_322 = ((unsigned int)(*((int *)got.dec_nbl) * 127 >> 7) + *((int *)(got.wl_code_table + ((unsigned int)v3 & -0x4))) <= 0? 0 : (unsigned int)(*((int *)got.dec_nbl) * 127 >> 7) + *((int *)(got.wl_code_table + ((unsigned int)v3 & -0x4))));
    tmp_328 = ((unsigned int)(*((int *)got.dec_nbl) * 127 >> 7) + *((int *)(got.wl_code_table + ((unsigned int)v3 & -0x4))) <= 0? 0 : (unsigned int)(*((int *)got.dec_nbl) * 127 >> 7) + *((int *)(got.wl_code_table + ((unsigned int)v3 & -0x4)))) < 0x4800;
    *((int *)got.dec_nbl) = (((unsigned int)(*((int *)got.dec_nbl) * 127 >> 7) + *((int *)(got.wl_code_table + ((unsigned int)v3 & -0x4))) <= 0? 0 : (unsigned int)(*((int *)got.dec_nbl) * 127 >> 7) + *((int *)(got.wl_code_table + ((unsigned int)v3 & -0x4)))) < 0x4800? ((unsigned int)(*((int *)got.dec_nbl) * 127 >> 7) + *((int *)(got.wl_code_table + ((unsigned int)v3 & -0x4))) <= 0? 0 : (unsigned int)(*((int *)got.dec_nbl) * 127 >> 7) + *((int *)(got.wl_code_table + ((unsigned int)v3 & -0x4)))) : 0x4800);
    *((unsigned int *)got.dec_detl) = (*((int *)(got.ilb_table + ((unsigned int)(((tmp_311? 0 : tmp_307) < 0x4800? (tmp_311? 0 : tmp_307) : 0x4800) >> 6) & 31) * 4)) >> (9 - ((tmp_328? tmp_322 : 0x4800) >> 11) & 31)) * 8;
    *((unsigned int *)got.dec_szl) = (unsigned int)v5 / 0x4000;
    *((unsigned int *)got.dec_sl) = tmp_28 + v5 / 0x4000;
    *((unsigned int *)got.dec_dlt) = v14;
    *((unsigned int *)got.rl) = tmp_64 + tmp_28 + v5 / 0x4000;
    v18 = v5 / 0x4000 + v14;
    *((unsigned int *)got.dec_plt) = v18;
    if ((unsigned int)v14 != 0)
    {
        v20 = 0;
        v16 = got.dec_del_bpl;
        do
        {
            v23 = 0;
            *((char *)&v23) = [D] amd64g_calculate_condition(0x9<64>, 0x14<64>, Mul(((Conv(32->s64, Load(addr=Load(addr=0x5001c0<64>, size=8, endness=Iend_LE), size=4, endness=Iend_LE)) * Conv(32->s64, Load(addr=(Load(addr=0x500098<64>, size=8, endness=Iend_LE) + Conv(32->64, (Conv(64->32, rcx<8>) & 0xfffffffc<32>))), size=4, endness=Iend_LE))) >> 0xf<8>), Conv(32->s64, Load(addr=(Load(addr=0x500190<64>, size=8, endness=Iend_LE) + (rsi<8> << 0x2<8>)), size=4, endness=Iend_LE))), 0x0<64>, cc_ndep<8>);
            v24 = v23 * 0x100;
            tmp_113 = v24 + (*((int *)((char *)v16 + 0x4 * v20)) * 255 >> 8);
            *((unsigned int *)((char *)v16 + 0x4 * v20)) = (unsigned int)(v24 + (*((int *)((char *)v16 + 0x4 * v20)) * 255 >> 8)) - 128;
            v25 = (tmp_113 + 4294967168 <= tmp_113? 1 : 0);
            v20 += 1;
        }
        while (v20 != 6);
    }
    else
    {
        v19 = got.dec_del_bpl;
        do
        {
            tmp_40 = *((int *)((char *)v19 + 0x4 * v16)) * 255 >> 7;
            v21 = *((int *)((char *)v19 + 0x4 * v16)) * 255 >> 8;
            *((unsigned int *)((char *)v19 + 0x4 * v16)) = *((int *)((char *)v19 + 0x4 * v16)) * 255 >> 8;
            v22 = [D] amd64g_calculate_rflags_c(0x24<64>, r9<8>, t40, cc_ndep<8>);
            v16 += 1;
        }
        while (v16 != 6);
    }
    tmp_15 = v18 * *((int *)got.dec_plt1);
    tmp_173 = v18 * *((int *)got.dec_plt1) < 0;
    tmp_180 = *((int *)got.dec_plt2);
    *((int *)got.dec_plt2) = *((int *)got.dec_plt1);
    *((int *)got.dec_al2) = (-12287 <= ((v18 * tmp_180 < 0? -128 : 128) + (unsigned int)(v12 * 127 >> 7) + ((tmp_15 < 0? v11 << 2 : 0 - (v11 << 2)) >> 7) < 0x3000? (v18 * tmp_180 < 0? -128 : 128) + (unsigned int)(v12 * 127 >> 7) + ((tmp_15 < 0? v11 << 2 : 0 - (v11 << 2)) >> 7) : 0x3000)? ((v18 * tmp_180 < 0? -128 : 128) + (unsigned int)(v12 * 127 >> 7) + ((tmp_15 < 0? v11 << 2 : 0 - (v11 << 2)) >> 7) < 0x3000? (v18 * tmp_180 < 0? -128 : 128) + (unsigned int)(v12 * 127 >> 7) + ((tmp_15 < 0? v11 << 2 : 0 - (v11 << 2)) >> 7) : 0x3000) : -0x3000);
    *((int *)got.dec_al1) = ((((char)[D] amd64g_calculate_condition(0x9<64>, 0x14<64>, t15, 0x0<64>, cc_ndep<8>)? (unsigned int)((v11 * 255 >> 8) + 192) : (unsigned int)(v11 * 255 >> 8) - 192) < 0x3c00 - (-12287 <= ((v18 * tmp_180 < 0? -128 : 128) + (unsigned int)(v12 * 127 >> 7) + ((tmp_15 < 0? v11 << 2 : 0 - (v11 << 2)) >> 7) < 0x3000? (v18 * tmp_180 < 0? -128 : 128) + (unsigned int)(v12 * 127 >> 7) + ((tmp_15 < 0? v11 << 2 : 0 - (v11 << 2)) >> 7) : 0x3000)? ((v18 * tmp_180 < 0? -128 : 128) + (unsigned int)(v12 * 127 >> 7) + ((tmp_15 < 0? v11 << 2 : 0 - (v11 << 2)) >> 7) < 0x3000? (v18 * tmp_180 < 0? -128 : 128) + (unsigned int)(v12 * 127 >> 7) + ((tmp_15 < 0? v11 << 2 : 0 - (v11 << 2)) >> 7) : 0x3000) : -0x3000)? ((char)[D] amd64g_calculate_condition(0x9<64>, 0x14<64>, t15, 0x0<64>, cc_ndep<8>)? (unsigned int)((v11 * 255 >> 8) + 192) : (unsigned int)(v11 * 255 >> 8) - 192) : 0x3c00 - (-12287 <= ((v18 * tmp_180 < 0? -128 : 128) + (unsigned int)(v12 * 127 >> 7) + ((tmp_15 < 0? v11 << 2 : 0 - (v11 << 2)) >> 7) < 0x3000? (v18 * tmp_180 < 0? -128 : 128) + (unsigned int)(v12 * 127 >> 7) + ((tmp_15 < 0? v11 << 2 : 0 - (v11 << 2)) >> 7) : 0x3000)? ((v18 * tmp_180 < 0? -128 : 128) + (unsigned int)(v12 * 127 >> 7) + ((tmp_15 < 0? v11 << 2 : 0 - (v11 << 2)) >> 7) < 0x3000? (v18 * tmp_180 < 0? -128 : 128) + (unsigned int)(v12 * 127 >> 7) + ((tmp_15 < 0? v11 << 2 : 0 - (v11 << 2)) >> 7) : 0x3000) : -0x3000)) <= (-12287 <= ((v18 * tmp_180 < 0? -128 : 128) + (unsigned int)(v12 * 127 >> 7) + ((tmp_173? v11 << 2 : 0 - (v11 << 2)) >> 7) < 0x3000? (v18 * tmp_180 < 0? -128 : 128) + (unsigned int)(v12 * 127 >> 7) + ((tmp_173? v11 << 2 : 0 - (v11 << 2)) >> 7) : 0x3000)? ((v18 * tmp_180 < 0? -128 : 128) + (unsigned int)(v12 * 127 >> 7) + ((tmp_173? v11 << 2 : 0 - (v11 << 2)) >> 7) < 0x3000? (v18 * tmp_180 < 0? -128 : 128) + (unsigned int)(v12 * 127 >> 7) + ((tmp_173? v11 << 2 : 0 - (v11 << 2)) >> 7) : 0x3000) : -0x3000) - 0x3c00? (-12287 <= ((v18 * tmp_180 < 0? -128 : 128) + (unsigned int)(v12 * 127 >> 7) + ((tmp_173? v11 << 2 : 0 - (v11 << 2)) >> 7) < 0x3000? (v18 * tmp_180 < 0? -128 : 128) + (unsigned int)(v12 * 127 >> 7) + ((tmp_173? v11 << 2 : 0 - (v11 << 2)) >> 7) : 0x3000)? ((v18 * tmp_180 < 0? -128 : 128) + (unsigned int)(v12 * 127 >> 7) + ((tmp_173? v11 << 2 : 0 - (v11 << 2)) >> 7) < 0x3000? (v18 * tmp_180 < 0? -128 : 128) + (unsigned int)(v12 * 127 >> 7) + ((tmp_173? v11 << 2 : 0 - (v11 << 2)) >> 7) : 0x3000) : -0x3000) - 0x3c00 : (((char)[D] amd64g_calculate_condition(0x9<64>, 0x14<64>, t15, 0x0<64>, cc_ndep<8>)? (unsigned int)((v11 * 255 >> 8) + 192) : (unsigned int)(v11 * 255 >> 8) - 192) < 0x3c00 - (-12287 <= ((v18 * tmp_180 < 0? -128 : 128) + (unsigned int)(v12 * 127 >> 7) + ((tmp_15 < 0? v11 << 2 : 0 - (v11 << 2)) >> 7) < 0x3000? (v18 * tmp_180 < 0? -128 : 128) + (unsigned int)(v12 * 127 >> 7) + ((tmp_15 < 0? v11 << 2 : 0 - (v11 << 2)) >> 7) : 0x3000)? ((v18 * tmp_180 < 0? -128 : 128) + (unsigned int)(v12 * 127 >> 7) + ((tmp_15 < 0? v11 << 2 : 0 - (v11 << 2)) >> 7) < 0x3000? (v18 * tmp_180 < 0? -128 : 128) + (unsigned int)(v12 * 127 >> 7) + ((tmp_15 < 0? v11 << 2 : 0 - (v11 << 2)) >> 7) : 0x3000) : -0x3000)? ((char)[D] amd64g_calculate_condition(0x9<64>, 0x14<64>, t15, 0x0<64>, cc_ndep<8>)? (unsigned int)((v11 * 255 >> 8) + 192) : (unsigned int)(v11 * 255 >> 8) - 192) : 0x3c00 - (-12287 <= ((v18 * tmp_180 < 0? -128 : 128) + (unsigned int)(v12 * 127 >> 7) + ((tmp_15 < 0? v11 << 2 : 0 - (v11 << 2)) >> 7) < 0x3000? (v18 * tmp_180 < 0? -128 : 128) + (unsigned int)(v12 * 127 >> 7) + ((tmp_15 < 0? v11 << 2 : 0 - (v11 << 2)) >> 7) : 0x3000)? ((v18 * tmp_180 < 0? -128 : 128) + (unsigned int)(v12 * 127 >> 7) + ((tmp_15 < 0? v11 << 2 : 0 - (v11 << 2)) >> 7) < 0x3000? (v18 * tmp_180 < 0? -128 : 128) + (unsigned int)(v12 * 127 >> 7) + ((tmp_15 < 0? v11 << 2 : 0 - (v11 << 2)) >> 7) : 0x3000) : -0x3000)));
    *((unsigned int *)got.dec_rlt2) = v10;
    *((int128_t *)(got.dec_del_dltx + 8)) = *((int128_t *)(got.dec_del_dltx + 4));
    *((unsigned int *)(got.dec_del_dltx + 4)) = v0;
    *((unsigned int *)got.dec_del_dltx) = v14;
    *((unsigned int *)&v13) = v13 + v14;
    *((unsigned int *)got.dec_rlt) = v13;
    *((unsigned int *)got.dec_rlt1) = v13;
    *((unsigned int *)got.dec_plt1) = v18;
    v26 = got.dec_del_bph;
    v27 = got.dec_del_dhx;
    *((unsigned int *)&v21) = *((int *)got.dec_del_dhx);
    v28 = *((int *)got.dec_del_dhx) * *((int *)got.dec_del_bph);
    v11 = 1;
    do
    {
        v29 = (int)v26[4];
        v26 += 4;
        tmp_25 = (int)v27[4];
        v27 += 4;
        tmp_13 = v28;
        v28 += v29 * tmp_25;
        v30 = (tmp_13 + v29 * tmp_25 <= tmp_13? 1 : 0);
        v11 += 1;
    }
    while (v11 != 6);
    *((unsigned int *)&v16) = *((int *)got.dec_rh1);
    v31 = *((int *)got.dec_ah1);
    v32 = *((int *)got.dec_ah2);
    tmp_28 = *((int *)got.dec_ah1) * *((int *)got.dec_rh1) * 2 + *((int *)got.dec_ah2) * *((int *)got.dec_rh2) * 2 >> 15;
    *((unsigned int *)got.dec_sph) = *((int *)got.dec_ah1) * *((int *)got.dec_rh1) * 2 + *((int *)got.dec_ah2) * *((int *)got.dec_rh2) * 2 >> 15;
    v33 = tmp_28 + v28 / 0x4000;
    tmp_190 = v4;
    v34 = *((int *)got.dec_deth) * *((int *)(got.qq2_code2_table + v4 * 4)) >> 15;
    v35 = 0;
    tmp_255 = (unsigned int)(*((int *)got.dec_nbh) * 127 >> 7) + *((int *)(got.wh_code_table + tmp_190 * 4));
    tmp_259 = (unsigned int)(*((int *)got.dec_nbh) * 127 >> 7) + *((int *)(got.wh_code_table + (tmp_190 << 2))) <= 0;
    tmp_270 = ((unsigned int)(*((int *)got.dec_nbh) * 127 >> 7) + *((int *)(got.wh_code_table + (tmp_190 << 2))) <= 0? 0 : (unsigned int)(*((int *)got.dec_nbh) * 127 >> 7) + *((int *)(got.wh_code_table + (tmp_190 << 2))));
    tmp_276 = ((unsigned int)(*((int *)got.dec_nbh) * 127 >> 7) + *((int *)(got.wh_code_table + (tmp_190 << 2))) <= 0? 0 : (unsigned int)(*((int *)got.dec_nbh) * 127 >> 7) + *((int *)(got.wh_code_table + (tmp_190 << 2)))) < 0x5800;
    *((int *)got.dec_nbh) = (((unsigned int)(*((int *)got.dec_nbh) * 127 >> 7) + *((int *)(got.wh_code_table + (tmp_190 << 2))) <= 0? 0 : (unsigned int)(*((int *)got.dec_nbh) * 127 >> 7) + *((int *)(got.wh_code_table + (tmp_190 << 2)))) < 0x5800? ((unsigned int)(*((int *)got.dec_nbh) * 127 >> 7) + *((int *)(got.wh_code_table + (tmp_190 << 2))) <= 0? 0 : (unsigned int)(*((int *)got.dec_nbh) * 127 >> 7) + *((int *)(got.wh_code_table + (tmp_190 << 2)))) : 0x5800);
    *((unsigned int *)got.dec_deth) = (*((int *)(got.ilb_table + ((unsigned int)(((tmp_259? 0 : tmp_255) < 0x5800? (tmp_259? 0 : tmp_255) : 0x5800) >> 6) & 31) * 4)) >> (11 - ((tmp_276? tmp_270 : 0x5800) >> 11) & 31)) * 8;
    *((unsigned int *)got.dec_szh) = (unsigned int)v28 / 0x4000;
    *((unsigned int *)got.dec_sh) = tmp_28 + v28 / 0x4000;
    *((unsigned int *)got.dec_dh) = v34;
    v37 = v28 / 0x4000 + v34;
    *((unsigned int *)got.dec_ph) = v37;
    if ((unsigned int)v34 != 0)
    {
        v39 = 0;
        v40 = got.dec_del_bph;
        do
        {
            v43 = 0;
            *((char *)&v43) = [D] amd64g_calculate_condition(0x9<64>, 0x14<64>, Mul(rdi<8>, Conv(32->s64, Load(addr=(Load(addr=0x500228<64>, size=8, endness=Iend_LE) + (r8<8> << 0x2<8>)), size=4, endness=Iend_LE))), 0x0<64>, cc_ndep<8>);
            v44 = v43 * 0x100;
            tmp_117 = (*((int *)((char *)v40 + 0x4 * v39)) * 255 >> 8) + v44;
            *((unsigned int *)((char *)v40 + 0x4 * v39)) = (unsigned int)((*((int *)((char *)v40 + 0x4 * v39)) * 255 >> 8) + v44) - 128;
            v45 = (tmp_117 + 4294967168 <= tmp_117? 1 : 0);
            v39 += 1;
        }
        while (v39 != 6);
    }
    else
    {
        v38 = got.dec_del_bph;
        do
        {
            tmp_40 = *((int *)((char *)v38 + 0x4 * v35)) * 255 >> 7;
            v41 = *((int *)((char *)v38 + 0x4 * v35)) * 255 >> 8;
            *((unsigned int *)((char *)v38 + 0x4 * v35)) = *((int *)((char *)v38 + 0x4 * v35)) * 255 >> 8;
            v42 = [D] amd64g_calculate_rflags_c(0x24<64>, r12<8>, t40, cc_ndep<8>);
            v35 += 1;
        }
        while (v35 != 6);
    }
    tmp_15 = v37 * *((int *)got.dec_ph1);
    tmp_195 = v37 * *((int *)got.dec_ph1) < 0;
    tmp_42 = v37 * *((int *)got.dec_ph2);
    tmp_252 = v37 * *((int *)got.dec_ph2) < 0;
    tmp_277 = (v37 * *((int *)got.dec_ph2) < 0? -128 : 128) + (unsigned int)(v32 * 127 >> 7) + ((v37 * *((int *)got.dec_ph1) < 0? v31 << 2 : 0 - (v31 << 2)) >> 7);
    tmp_283 = (v37 * *((int *)got.dec_ph2) < 0? -128 : 128) + (unsigned int)(v32 * 127 >> 7) + ((v37 * *((int *)got.dec_ph1) < 0? v31 << 2 : 0 - (v31 << 2)) >> 7) < 0x3000;
    *((int *)got.dec_ph2) = *((int *)got.dec_ph1);
    *((int *)got.dec_ah2) = (-12287 <= ((tmp_42 < 0? -128 : 128) + (unsigned int)(v32 * 127 >> 7) + ((tmp_15 < 0? v31 << 2 : 0 - (v31 << 2)) >> 7) < 0x3000? (tmp_42 < 0? -128 : 128) + (unsigned int)(v32 * 127 >> 7) + ((tmp_15 < 0? v31 << 2 : 0 - (v31 << 2)) >> 7) : 0x3000)? ((tmp_42 < 0? -128 : 128) + (unsigned int)(v32 * 127 >> 7) + ((tmp_15 < 0? v31 << 2 : 0 - (v31 << 2)) >> 7) < 0x3000? (tmp_42 < 0? -128 : 128) + (unsigned int)(v32 * 127 >> 7) + ((tmp_15 < 0? v31 << 2 : 0 - (v31 << 2)) >> 7) : 0x3000) : -0x3000);
    *((int *)got.dec_ah1) = ((((char)[D] amd64g_calculate_condition(0x9<64>, 0x14<64>, t15, 0x0<64>, cc_ndep<8>)? (unsigned int)((v31 * 255 >> 8) + 192) : (unsigned int)(v31 * 255 >> 8) - 192) < 0x3c00 - (-12287 <= (tmp_283? tmp_277 : 0x3000)? (tmp_283? tmp_277 : 0x3000) : -0x3000)? ((char)[D] amd64g_calculate_condition(0x9<64>, 0x14<64>, t15, 0x0<64>, cc_ndep<8>)? (unsigned int)((v31 * 255 >> 8) + 192) : (unsigned int)(v31 * 255 >> 8) - 192) : 0x3c00 - (-12287 <= (tmp_283? tmp_277 : 0x3000)? (tmp_283? tmp_277 : 0x3000) : -0x3000)) <= (-12287 <= ((tmp_252? -128 : 128) + (unsigned int)(v32 * 127 >> 7) + ((tmp_195? v31 << 2 : 0 - (v31 << 2)) >> 7) < 0x3000? (tmp_252? -128 : 128) + (unsigned int)(v32 * 127 >> 7) + ((tmp_195? v31 << 2 : 0 - (v31 << 2)) >> 7) : 0x3000)? ((tmp_252? -128 : 128) + (unsigned int)(v32 * 127 >> 7) + ((tmp_195? v31 << 2 : 0 - (v31 << 2)) >> 7) < 0x3000? (tmp_252? -128 : 128) + (unsigned int)(v32 * 127 >> 7) + ((tmp_195? v31 << 2 : 0 - (v31 << 2)) >> 7) : 0x3000) : -0x3000) - 0x3c00? (-12287 <= ((tmp_252? -128 : 128) + (unsigned int)(v32 * 127 >> 7) + ((tmp_195? v31 << 2 : 0 - (v31 << 2)) >> 7) < 0x3000? (tmp_252? -128 : 128) + (unsigned int)(v32 * 127 >> 7) + ((tmp_195? v31 << 2 : 0 - (v31 << 2)) >> 7) : 0x3000)? ((tmp_252? -128 : 128) + (unsigned int)(v32 * 127 >> 7) + ((tmp_195? v31 << 2 : 0 - (v31 << 2)) >> 7) < 0x3000? (tmp_252? -128 : 128) + (unsigned int)(v32 * 127 >> 7) + ((tmp_195? v31 << 2 : 0 - (v31 << 2)) >> 7) : 0x3000) : -0x3000) - 0x3c00 : (((char)[D] amd64g_calculate_condition(0x9<64>, 0x14<64>, t15, 0x0<64>, cc_ndep<8>)? (unsigned int)((v31 * 255 >> 8) + 192) : (unsigned int)(v31 * 255 >> 8) - 192) < 0x3c00 - (-12287 <= (tmp_283? tmp_277 : 0x3000)? (tmp_283? tmp_277 : 0x3000) : -0x3000)? ((char)[D] amd64g_calculate_condition(0x9<64>, 0x14<64>, t15, 0x0<64>, cc_ndep<8>)? (unsigned int)((v31 * 255 >> 8) + 192) : (unsigned int)(v31 * 255 >> 8) - 192) : 0x3c00 - (-12287 <= (tmp_283? tmp_277 : 0x3000)? (tmp_283? tmp_277 : 0x3000) : -0x3000)));
    *((int128_t *)(got.dec_del_dhx + 8)) = *((int128_t *)(got.dec_del_dhx + 4));
    *((unsigned int *)(got.dec_del_dhx + 4)) = v21;
    *((unsigned int *)got.dec_del_dhx) = v34;
    *((unsigned int *)got.rh) = v33 + v34;
    *((unsigned int *)got.dec_rh2) = (unsigned int)v16;
    *((unsigned int *)got.dec_rh1) = v33 + v34;
    *((unsigned int *)got.dec_ph1) = v37;
    v46 = v15 - (v33 + v34);
    *((unsigned int *)got.xd) = v15 - (v33 + v34);
    v47 = v33 + v34 + v15;
    *((unsigned int *)got.xs) = v47;
    v50 = v46 * 12;
    v49 = v47 * -44;
    v51 = got.h + 8;
    v52 = got.accumc;
    v53 = got.accumd;
    do
    {
        tmp_30 = *((int *)v52);
        v52 += 4;
        v50 += tmp_30 * v51[0];
        v48 = *((int *)&v53->field_0);
        v53 = &v53->field_4;
        tmp_38 = v51[1];
        v51 = &v51[1];
        v49 += v48 * tmp_38;
    }
    while (true);
    tmp_73 = v49 + *((int *)(got.accumd + 40)) * 12;
    *((unsigned int *)got.xout1) = *((int *)(got.accumc + 40)) * 70368744177620 + v50 >> 14;
    *((unsigned int *)got.xout2) = tmp_73 >> 14;
    tmp_108 = *((int128_t *)(got.accumc + 16));
    *((int128_t *)(got.accumc + 4)) = *((int128_t *)got.accumc);
    tmp_114 = *((long long *)(got.accumc + 32));
    *((int128_t *)(got.accumc + 20)) = tmp_108;
    *((long long *)(got.accumc + 36)) = tmp_114;
    v54 = *((int128_t *)(got.accumd + 16));
    *((int128_t *)(got.accumd + 4)) = *((int128_t *)got.accumd);
    v55 = *((long long *)(got.accumd + 32));
    *((uint128_t *)(got.accumd + 20)) = v54;
    *((unsigned long long *)(got.accumd + 36)) = v55;
    *((unsigned int *)got.accumc) = v46;
    *((unsigned int *)got.accumd) = v47;
    return v55;
}

extern char got.accumc;
extern char got.accumd;
extern char got.ah1;
extern char got.ah2;
extern char got.al1;
extern char got.al2;
extern char got.dec_ah1;
extern char got.dec_ah2;
extern char got.dec_al1;
extern char got.dec_al2;
extern char got.dec_del_bph;
extern char got.dec_del_bpl;
extern char got.dec_del_dhx;
extern char got.dec_del_dltx;
extern char got.dec_deth;
extern char got.dec_detl;
extern char got.dec_nbh;
extern char got.dec_nbl;
extern char got.dec_ph1;
extern char got.dec_ph2;
extern char got.dec_plt1;
extern char got.dec_plt2;
extern char got.dec_rh1;
extern char got.dec_rh2;
extern char got.dec_rlt1;
extern char got.dec_rlt2;
extern char got.delay_bph;
extern char got.delay_bpl;
extern char got.delay_dhx;
extern char got.delay_dltx;
extern char got.deth;
extern char got.detl;
extern char got.nbh;
extern char got.nbl;
extern char got.ph1;
extern char got.ph2;
extern char got.plt1;
extern char got.plt2;
extern char got.rh1;
extern char got.rh2;
extern char got.rlt1;
extern char got.rlt2;
extern char got.tqmf;

long long reset()
{
    *((int *)got.dec_detl) = 32;
    *((int *)got.detl) = 32;
    *((int *)got.dec_deth) = 8;
    *((int *)got.deth) = 8;
    *((int *)got.rlt2) = 0;
    *((int *)got.rlt1) = 0;
    *((int *)got.plt2) = 0;
    *((int *)got.plt1) = 0;
    *((int *)got.al2) = 0;
    *((int *)got.al1) = 0;
    *((int *)got.nbl) = 0;
    *((int *)got.rh2) = 0;
    *((int *)got.rh1) = 0;
    *((int *)got.ph2) = 0;
    *((int *)got.ph1) = 0;
    *((int *)got.ah2) = 0;
    *((int *)got.ah1) = 0;
    *((int *)got.nbh) = 0;
    *((int *)got.dec_rlt2) = 0;
    *((int *)got.dec_rlt1) = 0;
    *((int *)got.dec_plt2) = 0;
    *((int *)got.dec_plt1) = 0;
    *((int *)got.dec_al2) = 0;
    *((int *)got.dec_al1) = 0;
    *((int *)got.dec_nbl) = 0;
    *((int *)got.dec_rh2) = 0;
    *((int *)got.dec_rh1) = 0;
    *((int *)got.dec_ph2) = 0;
    *((int *)got.dec_ph1) = 0;
    *((int *)got.dec_ah2) = 0;
    *((int *)got.dec_ah1) = 0;
    *((int *)got.dec_nbh) = 0;
    *((int128_t *)got.delay_dltx) = 0;
    *((long long *)(got.delay_dltx + 16)) = 0;
    *((int128_t *)got.delay_dhx) = 0;
    *((long long *)(got.delay_dhx + 16)) = 0;
    *((int128_t *)got.dec_del_dltx) = 0;
    *((long long *)(got.dec_del_dltx + 16)) = 0;
    *((int128_t *)got.dec_del_dhx) = 0;
    *((long long *)(got.dec_del_dhx + 16)) = 0;
    *((int128_t *)got.delay_bpl) = 0;
    *((long long *)(got.delay_bpl + 16)) = 0;
    *((int128_t *)got.delay_bph) = 0;
    *((long long *)(got.delay_bph + 16)) = 0;
    *((int128_t *)got.dec_del_bpl) = 0;
    *((long long *)(got.dec_del_bpl + 16)) = 0;
    *((int128_t *)got.dec_del_bph) = 0;
    *((long long *)(got.dec_del_bph + 16)) = 0;
    *((int128_t *)(got.tqmf + 80)) = 0;
    *((int128_t *)(got.tqmf + 64)) = 0;
    *((int128_t *)(got.tqmf + 48)) = 0;
    *((int128_t *)(got.tqmf + 32)) = 0;
    *((int128_t *)(got.tqmf + 16)) = 0;
    *((int128_t *)got.tqmf) = 0;
    *((int128_t *)(got.accumc + 28)) = 0;
    *((int128_t *)(got.accumc + 16)) = 0;
    *((int128_t *)got.accumc) = 0;
    *((int128_t *)(got.accumd + 28)) = 0;
    *((int128_t *)(got.accumd + 16)) = 0;
    *((int128_t *)got.accumd) = 0;
    return got.accumd;
}

extern char got.accumc;
extern char got.accumd;
extern char got.ah1;
extern char got.ah2;
extern char got.al1;
extern char got.al2;
extern char got.compressed;
extern char got.dec_ah1;
extern char got.dec_ah2;
extern char got.dec_al1;
extern char got.dec_al2;
extern char got.dec_del_bph;
extern char got.dec_del_bpl;
extern char got.dec_del_dhx;
extern char got.dec_del_dltx;
extern char got.dec_deth;
extern char got.dec_detl;
extern char got.dec_nbh;
extern char got.dec_nbl;
extern char got.dec_ph1;
extern char got.dec_ph2;
extern char got.dec_plt1;
extern char got.dec_plt2;
extern char got.dec_rh1;
extern char got.dec_rh2;
extern char got.dec_rlt1;
extern char got.dec_rlt2;
extern char got.delay_bph;
extern char got.delay_bpl;
extern char got.delay_dhx;
extern char got.delay_dltx;
extern char got.deth;
extern char got.detl;
extern char got.nbh;
extern char got.nbl;
extern char got.ph1;
extern char got.ph2;
extern char got.plt1;
extern char got.plt2;
extern char got.result;
extern char got.rh1;
extern char got.rh2;
extern char got.rlt1;
extern char got.rlt2;
extern char got.test_data;
extern char got.tqmf;
extern char got.xout1;
extern char got.xout2;

int adpcm_main()
{
    void* v1;  // rbx
    void* v2;  // r12
    void* v3;  // r12

    *((int *)got.dec_detl) = 32;
    *((int *)got.detl) = 32;
    *((int *)got.dec_deth) = 8;
    *((int *)got.deth) = 8;
    *((int *)got.rlt2) = 0;
    *((int *)got.rlt1) = 0;
    *((int *)got.plt2) = 0;
    *((int *)got.plt1) = 0;
    *((int *)got.al2) = 0;
    *((int *)got.al1) = 0;
    *((int *)got.nbl) = 0;
    *((int *)got.rh2) = 0;
    *((int *)got.rh1) = 0;
    *((int *)got.ph2) = 0;
    *((int *)got.ph1) = 0;
    *((int *)got.ah2) = 0;
    *((int *)got.ah1) = 0;
    *((int *)got.nbh) = 0;
    *((int *)got.dec_rlt2) = 0;
    *((int *)got.dec_rlt1) = 0;
    *((int *)got.dec_plt2) = 0;
    *((int *)got.dec_plt1) = 0;
    *((int *)got.dec_al2) = 0;
    *((int *)got.dec_al1) = 0;
    *((int *)got.dec_nbl) = 0;
    *((int *)got.dec_rh2) = 0;
    *((int *)got.dec_rh1) = 0;
    *((int *)got.dec_ph2) = 0;
    *((int *)got.dec_ph1) = 0;
    *((int *)got.dec_ah2) = 0;
    *((int *)got.dec_ah1) = 0;
    *((int *)got.dec_nbh) = 0;
    *((int128_t *)got.delay_dltx) = 0;
    *((long long *)(got.delay_dltx + 16)) = 0;
    *((int128_t *)got.delay_dhx) = 0;
    *((long long *)(got.delay_dhx + 16)) = 0;
    *((int128_t *)got.dec_del_dltx) = 0;
    *((long long *)(got.dec_del_dltx + 16)) = 0;
    *((int128_t *)got.dec_del_dhx) = 0;
    *((long long *)(got.dec_del_dhx + 16)) = 0;
    *((int128_t *)got.delay_bpl) = 0;
    *((long long *)(got.delay_bpl + 16)) = 0;
    *((int128_t *)got.delay_bph) = 0;
    *((long long *)(got.delay_bph + 16)) = 0;
    *((int128_t *)got.dec_del_bpl) = 0;
    *((long long *)(got.dec_del_bpl + 16)) = 0;
    *((int128_t *)got.dec_del_bph) = 0;
    *((long long *)(got.dec_del_bph + 16)) = 0;
    *((int128_t *)(got.tqmf + 80)) = 0;
    *((int128_t *)(got.tqmf + 64)) = 0;
    *((int128_t *)(got.tqmf + 48)) = 0;
    *((int128_t *)(got.tqmf + 32)) = 0;
    *((int128_t *)(got.tqmf + 16)) = 0;
    *((int128_t *)got.tqmf) = 0;
    *((int128_t *)(got.accumc + 28)) = 0;
    *((int128_t *)(got.accumc + 16)) = 0;
    *((int128_t *)got.accumc) = 0;
    *((int128_t *)(got.accumd + 28)) = 0;
    *((int128_t *)(got.accumd + 16)) = 0;
    *((int128_t *)got.accumd) = 0;
    v1 = 0;
    v2 = 0;
    while (true)
    {
        *((int *)(got.compressed + v2 * 2)) = encode(*((int *)(got.test_data + v2 * 4)), *((int *)(got.test_data + (v2 * 4 | 4))));
        v2 += 2;
        if (v2 >= 98)
        {
            break;
        }
    }
    v3 = got.result;
    while (true)
    {
        decode(*((int *)(got.compressed + v1 * 2)));
        *((int *)((char *)v3 + 0x4 * v1)) = *((int *)got.xout1);
        *((int *)&((char *)v3)[v1 * 4 | 4]) = *((int *)got.xout2);
        v1 += 2;
        if (v1 >= 98)
        {
            break;
        }
    }
    return;
}

extern char got.compressed;
extern char got.endTimer;
extern char got.result;
extern char got.startTimer;
extern char got.test_compressed;
extern char got.test_result;

long long submain()
{
    char v0;  // [bp-0x28]
    unsigned int v1;  // [bp-0x20]
    void* v3;  // r15
    unsigned long long v4;  // rax
    unsigned long long v6;  // xmm0lq
    unsigned long long v7;  // xmm1lq
    uint128_t v8;  // xmm1
    int v9;  // xmm0
    void* v11;  // rbx
    void* v12;  // rdi
    void* v13;  // rdx
    void* v14;  // rsi
    unsigned long long v15;  // rax
    int v17;  // xmm1
    uint128_t v18;  // xmm0
    void* v20;  // rax

    v3 = 0;
    (unsigned int)v4 = gettimeofday(&v0, NULL);
    if ((unsigned int)v4 != 0)
    {
        printf("Error return from gettimeofday: %d", (unsigned int)v4);
    }
    v6 = *((long long *)&v0);
    v7 = v1;
    *((unsigned long long *)&v8) = (unsigned long long)(v8 * 4517329193108106637 + v9);
    *((unsigned long long *)got.startTimer) = v8;
    adpcm_main();
    v13 = 0;
    v11 = 0;
    do
    {
        v12 = 0;
        *((char *)&v12) = *((int *)(got.compressed + (v13 << 2))) != *((int *)(got.test_compressed + (v13 << 2)));
        v11 += v12;
        v13 += 1;
    }
    while (v13 != 50);
    do
    {
        v14 = 0;
        *((char *)&v14) = *((int *)(got.result + (v3 << 2))) != *((int *)(got.test_result + (v3 << 2)));
        v11 += v14;
        v3 += 1;
    }
    while (v3 != 100);
    (unsigned int)v15 = gettimeofday(&v0, NULL);
    if ((unsigned int)v15 != 0)
    {
        printf("Error return from gettimeofday: %d", (unsigned int)v15);
        v17 = 0;
        *((unsigned long long *)&v17) = *((long long *)&v0);
        v18 = 0;
        *((unsigned long long *)&v18) = v1;
        *((unsigned long long *)&v18) = (unsigned long long)(v18 * 4517329193108106637 + v17);
        *((unsigned long long *)*((long long *)&got.endTimer)) = v18;
        printf("%0.6f\n");
        v20 = v11;
        return v20;
    }
    v17 = 0;
    *((unsigned long long *)&v17) = *((long long *)&v0);
    v18 = 0;
    *((unsigned long long *)&v18) = v1;
    *((unsigned long long *)&v18) = (unsigned long long)(v18 * 4517329193108106637 + v17);
    *((unsigned long long *)*((long long *)&got.endTimer)) = v18;
    printf("%0.6f\n");
    v20 = v11;
    return v20;
}

