int abs(unsigned int a0)
{
    unsigned int v0;  // [bp-0x10]

    if (a0 >= 0)
    {
        v0 = a0;
        return v0;
    }
    v0 = 0 - a0;
    return v0;
}

extern char got.ah1;
extern char got.ah2;
extern char got.al1;
extern char got.al2;
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
extern char got.xh;
extern char got.xl;
extern char got.yh;

int encode(unsigned int a0, unsigned int a1)
{
    int tmp_65;  // tmp #65
    int tmp_74;  // tmp #74
    int tmp_86;  // tmp #86
    int tmp_95;  // tmp #95
    int tmp_47;  // tmp #47
    int tmp_56;  // tmp #56
    int tmp_70;  // tmp #70
    int tmp_79;  // tmp #79
    int tmp_44;  // tmp #44
    int tmp_53;  // tmp #53
    int tmp_72;  // tmp #72
    int tmp_19;  // tmp #19
    int tmp_28;  // tmp #28
    int tmp_48;  // tmp #48
    unsigned int v0;  // [bp-0x44]
    unsigned long v1;  // [bp-0x40]
    unsigned long v2;  // [bp-0x38]
    unsigned int *v3;  // [bp-0x30]
    unsigned int *v4;  // [bp-0x28]
    unsigned int *v5;  // [bp-0x20], Other Possible Types: unsigned long
    unsigned int v6;  // [bp-0x14]

    v5 = got.h;
    v4 = got.tqmf;
    tmp_65 = v4;
    v4 = &v4[1];
    tmp_74 = v5;
    v5 = &v5[1];
    v2 = *((int *)tmp_74) * *((int *)tmp_65);
    tmp_86 = v4;
    v4 = &v4[1];
    tmp_95 = v5;
    v5 = &v5[1];
    v1 = *((int *)tmp_95) * *((int *)tmp_86);
    for (v6 = 0; v6 < 10; v6 += 1)
    {
        tmp_47 = v4;
        v4 = &v4[1];
        tmp_56 = v5;
        v5 = &v5[1];
        v2 = *((int *)tmp_56) * *((int *)tmp_47) + v2;
        tmp_70 = v4;
        v4 = &v4[1];
        tmp_79 = v5;
        v5 = &v5[1];
        v1 = *((int *)tmp_79) * *((int *)tmp_70) + v1;
    }
    tmp_44 = v4;
    v4 = &v4[1];
    tmp_53 = v5;
    v5 = &v5[1];
    v2 = *((int *)tmp_53) * *((int *)tmp_44) + v2;
    tmp_72 = v5;
    v5 = &v5[1];
    v1 = *((int *)tmp_72) * *(v4) + v1;
    v3 = &v4[2];
    for (v6 = 0; v6 < 22; v6 += 1)
    {
        tmp_19 = v3;
        v3 = &v3[1];
        tmp_28 = v4;
        v4 = &v4[1];
        *((int *)tmp_28) = *((int *)tmp_19);
    }
    tmp_48 = v4;
    v4 = &v4[1];
    *((unsigned int *)tmp_48) = a0;
    *(v4) = a1;
    *((unsigned int *)got.xl) = v2 + v1 >> 15;
    *((unsigned int *)got.xh) = v2 - v1 >> 15;
    *((int *)got.szl) = filtez(got.delay_bpl, got.delay_dltx);
    *((int *)got.spl) = filtep(*((int *)got.rlt1), *((int *)got.al1), *((int *)got.rlt2), *((int *)got.al2));
    *((int *)got.sl) = *((int *)got.szl) + *((int *)got.spl);
    *((int *)got.el) = *((int *)got.xl) - *((int *)got.sl);
    *((int *)got.il) = quantl(*((int *)got.el), *((int *)got.detl));
    *((unsigned int *)got.dlt) = *((int *)(got.qq4_code4_table + (*((int *)got.il) >> 2) * 4)) * *((int *)got.detl) >> 15;
    *((int *)got.nbl) = logscl(*((int *)got.il), *((int *)got.nbl));
    *((int *)got.detl) = scalel(*((int *)got.nbl), 0x8);
    *((int *)got.plt) = *((int *)got.dlt) + *((int *)got.szl);
    upzero(*((int *)got.dlt), got.delay_dltx, got.delay_bpl);
    *((int *)got.al2) = uppol2(*((int *)got.al1), *((int *)got.al2), *((int *)got.plt), *((int *)got.plt1), *((int *)got.plt2));
    *((int *)got.al1) = uppol1(*((int *)got.al1), *((int *)got.al2), *((int *)got.plt), *((int *)got.plt1));
    *((int *)got.rlt) = *((int *)got.sl) + *((int *)got.dlt);
    *((int *)got.rlt2) = *((int *)got.rlt1);
    *((int *)got.rlt1) = *((int *)got.rlt);
    *((int *)got.plt2) = *((int *)got.plt1);
    *((int *)got.plt1) = *((int *)got.plt);
    *((int *)got.szh) = filtez(got.delay_bph, got.delay_dhx);
    *((int *)got.sph) = filtep(*((int *)got.rh1), *((int *)got.ah1), *((int *)got.rh2), *((int *)got.ah2));
    *((int *)got.sh) = *((int *)got.sph) + *((int *)got.szh);
    *((int *)got.eh) = *((int *)got.xh) - *((int *)got.sh);
    if (*((int *)got.eh) >= 0)
    {
        *((int *)*((long long *)&got.ih)) = 3;
    }
    else
    {
        *((int *)*((long long *)&got.ih)) = 1;
    }
    v0 = *((int *)got.deth) * 564 >> 12;
    if (abs(*((int *)got.eh)) > v0)
    {
        *((int *)*((long long *)&got.ih)) = *((int *)*((long long *)&got.ih)) - 1;
        *((unsigned int *)*((long long *)&got.dh)) = *((int *)(*((long long *)&got.qq2_code2_table) + *((int *)*((long long *)&got.ih)) * 4)) * *((int *)got.deth) >> 15;
        logsch(*((int *)*((long long *)&got.ih)), *((int *)*((long long *)&got.nbh)));
        *((int *)*((long long *)&got.nbh)) = logsch(*((int *)*((long long *)&got.ih)), *((int *)*((long long *)&got.nbh)));
        scalel(*((int *)*((long long *)&got.nbh)), 0xa);
        *((int *)got.deth) = scalel(*((int *)*((long long *)&got.nbh)), 0xa);
        *((int *)*((long long *)&got.ph)) = *((int *)*((long long *)&got.dh)) + *((int *)got.szh);
        upzero(*((int *)*((long long *)&got.dh)), got.delay_dhx, got.delay_bph);
        uppol2(*((int *)got.ah1), *((int *)got.ah2), *((int *)*((long long *)&got.ph)), *((int *)*((long long *)&got.ph1)), *((int *)*((long long *)&got.ph2)));
        *((int *)got.ah2) = uppol2(*((int *)got.ah1), *((int *)got.ah2), *((int *)*((long long *)&got.ph)), *((int *)*((long long *)&got.ph1)), *((int *)*((long long *)&got.ph2)));
        uppol1(*((int *)got.ah1), *((int *)got.ah2), *((int *)*((long long *)&got.ph)), *((int *)*((long long *)&got.ph1)));
        *((int *)got.ah1) = uppol1(*((int *)got.ah1), *((int *)got.ah2), *((int *)*((long long *)&got.ph)), *((int *)*((long long *)&got.ph1)));
        *((int *)*((long long *)&got.yh)) = *((int *)got.sh) + *((int *)*((long long *)&got.dh));
        *((int *)got.rh2) = *((int *)got.rh1);
        *((int *)got.rh1) = *((int *)*((long long *)&got.yh));
        *((int *)*((long long *)&got.ph2)) = *((int *)*((long long *)&got.ph1));
        *((int *)*((long long *)&got.ph1)) = *((int *)*((long long *)&got.ph));
        return *((int *)got.il) | (unsigned int)(*((int *)*((long long *)&got.ih)) * 64);
    }
    *((unsigned int *)*((long long *)&got.dh)) = *((int *)(*((long long *)&got.qq2_code2_table) + *((int *)*((long long *)&got.ih)) * 4)) * *((int *)got.deth) >> 15;
    logsch(*((int *)*((long long *)&got.ih)), *((int *)*((long long *)&got.nbh)));
    *((int *)*((long long *)&got.nbh)) = logsch(*((int *)*((long long *)&got.ih)), *((int *)*((long long *)&got.nbh)));
    scalel(*((int *)*((long long *)&got.nbh)), 0xa);
    *((int *)got.deth) = scalel(*((int *)*((long long *)&got.nbh)), 0xa);
    *((int *)*((long long *)&got.ph)) = *((int *)*((long long *)&got.dh)) + *((int *)got.szh);
    upzero(*((int *)*((long long *)&got.dh)), got.delay_dhx, got.delay_bph);
    uppol2(*((int *)got.ah1), *((int *)got.ah2), *((int *)*((long long *)&got.ph)), *((int *)*((long long *)&got.ph1)), *((int *)*((long long *)&got.ph2)));
    *((int *)got.ah2) = uppol2(*((int *)got.ah1), *((int *)got.ah2), *((int *)*((long long *)&got.ph)), *((int *)*((long long *)&got.ph1)), *((int *)*((long long *)&got.ph2)));
    uppol1(*((int *)got.ah1), *((int *)got.ah2), *((int *)*((long long *)&got.ph)), *((int *)*((long long *)&got.ph1)));
    *((int *)got.ah1) = uppol1(*((int *)got.ah1), *((int *)got.ah2), *((int *)*((long long *)&got.ph)), *((int *)*((long long *)&got.ph1)));
    *((int *)*((long long *)&got.yh)) = *((int *)got.sh) + *((int *)*((long long *)&got.dh));
    *((int *)got.rh2) = *((int *)got.rh1);
    *((int *)got.rh1) = *((int *)*((long long *)&got.yh));
    *((int *)*((long long *)&got.ph2)) = *((int *)*((long long *)&got.ph1));
    *((int *)*((long long *)&got.ph1)) = *((int *)*((long long *)&got.ph));
    return *((int *)got.il) | (unsigned int)(*((int *)*((long long *)&got.ih)) * 64);
}

int filtez(unsigned long a0, unsigned long a1)
{
    int tmp_32;  // tmp #32
    int tmp_41;  // tmp #41
    unsigned long v0;  // [bp-0x28]
    int tmp_27;  // tmp #27
    int tmp_36;  // tmp #36
    unsigned int v1;  // [bp-0x1c]
    unsigned int *v2;  // [bp-0x18]
    unsigned int *v3;  // [bp-0x10]

    v3 = a0;
    v2 = a1;
    tmp_32 = v3;
    v3 = &v3[1];
    tmp_41 = v2;
    v2 = &v2[1];
    v0 = *((int *)tmp_41) * *((int *)tmp_32);
    for (v1 = 1; v1 < 6; v1 += 1)
    {
        tmp_27 = v3;
        v3 = &v3[1];
        tmp_36 = v2;
        v2 = &v2[1];
        v0 = *((int *)tmp_36) * *((int *)tmp_27) + v0;
    }
    return v0 >> 14;
}

int filtep(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
    unsigned long v0;  // [bp-0x28]
    unsigned long v1;  // [bp-0x20]

    v1 = a0 * 2;
    v1 *= a1;
    v0 = a2 * 2;
    v1 = v0 * a3 + v1;
    return v1 >> 15;
}

extern char got.decis_levl;
extern char got.quant26bt_neg;
extern char got.quant26bt_pos;

int quantl(unsigned int a0, unsigned int a1)
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long v1;  // [bp-0x20]
    unsigned int v2;  // [bp-0x18]
    unsigned int v3;  // [bp-0x14]

    v1 = abs(a0);
    for (v2 = 0; v2 < 30; v2 += 1)
    {
        v0 = a1 * *((int *)(got.decis_levl + v2 * 4)) >> 15;
        if (v1 <= v0)
        {
            break;
        }
    }
    if (a0 >= 0)
    {
        v3 = *((int *)(got.quant26bt_pos + v2 * 4));
        return v3;
    }
    v3 = *((int *)(got.quant26bt_neg + v2 * 4));
    return v3;
}

extern char got.wl_code_table;

int logscl(unsigned int a0, unsigned int a1)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned int v1;  // [bp-0x10]

    v1 = a1;
    v0 = v1 * 127 >> 7;
    v1 = (unsigned int)v0 + *((int *)(got.wl_code_table + (a0 >> 2) * 4));
    if (v1 < 0)
    {
        v1 = 0;
    }
    if (v1 > 0x4800)
    {
        v1 = 0x4800;
        return v1;
    }
    return v1;
}

extern char got.ilb_table;

int scalel(unsigned int a0, unsigned int a1)
{
    unsigned int v0;  // [bp-0x1c]
    unsigned int v1;  // [bp-0x18]
    unsigned int v2;  // [bp-0x14]

    v2 = (unsigned int)(a0 >> 6) & 31;
    v1 = a0 >> 11;
    v0 = *((int *)(got.ilb_table + v2 * 4)) >> ((char)(a1 + 1 - v1) & 31);
    return v0 * 8;
}

int upzero(unsigned int a0, unsigned int a1[6], unsigned int *a2)
{
    unsigned int v0;  // [bp-0x2c]
    unsigned int v1;  // [bp-0x28]
    unsigned int v2;  // [bp-0x24]

    if (a0 == 0)
    {
        for (v2 = 0; v2 < 6; v2 += 1)
        {
            a2[v2] = a2[v2] * 255 >> 8;
        }
        a1[5] = a1[4];
        a1[4] = a1[3];
        a1[3] = a1[2];
        a1[2] = a1[1];
        a1[1] = a1[0];
        a1[0] = a0;
        return (unsigned int)a1;
    }
    for (v2 = 0; v2 < 6; v2 += 1)
    {
        if (a1[v2] * a0 >= 0)
        {
            v1 = 128;
        }
        else
        {
            v1 = -128;
        }
        v0 = a2[v2] * 255 >> 8;
        a2[v2] = v1 + v0;
    }
    a1[5] = a1[4];
    a1[4] = a1[3];
    a1[3] = a1[2];
    a1[2] = a1[1];
    a1[1] = a1[0];
    a1[0] = a0;
    return (unsigned int)a1;
}

int uppol2(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
    unsigned int v0;  // [bp-0x34]
    unsigned long v1;  // [bp-0x30]
    unsigned long v2;  // [bp-0x28], Other Possible Types: unsigned long long

    v2 = a0 * 4;
    if (a3 * a2 >= 0)
    {
        v2 = 0 - v2;
    }
    v2 >>= 7;
    if (a4 * a2 >= 0)
    {
        v1 = v2 + 128;
    }
    else
    {
        v1 = v2 - 128;
    }
    v0 = v1 + (a1 * 127 >> 7);
    if (v0 > 0x3000)
    {
        v0 = 0x3000;
    }
    if (v0 < -0x3000)
    {
        v0 = -0x3000;
        return v0;
    }
    return v0;
}

int uppol1(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
    unsigned int v0;  // [bp-0x28]
    unsigned int v1;  // [bp-0x24]
    unsigned long long v2;  // [bp-0x20]

    v2 = a0 * 255 >> 8;
    if (a3 * a2 >= 0)
    {
        v0 = (unsigned int)v2 + 192;
    }
    else
    {
        v0 = (unsigned int)v2 - 192;
    }
    v1 = 0x3c00 - a1;
    if (v0 > v1)
    {
        v0 = v1;
    }
    if (v0 < 0 - v1)
    {
        v0 = 0 - v1;
        return v0;
    }
    return v0;
}

extern char got.wh_code_table;

int logsch(unsigned int a0, unsigned int a1)
{
    unsigned int v0;  // [bp-0x14]
    unsigned int v1;  // [bp-0x10]

    v1 = a1;
    v0 = v1 * 127 >> 7;
    v1 = v0 + *((int *)(got.wh_code_table + a0 * 4));
    if (v1 < 0)
    {
        v1 = 0;
    }
    if (v1 > 0x5800)
    {
        v1 = 0x5800;
        return v1;
    }
    return v1;
}

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
extern char got.ilr;
extern char got.qq2_code2_table;
extern char got.qq4_code4_table;
extern char got.qq6_code6_table;
extern char got.rh;
extern char got.rl;
extern char got.xd;
extern char got.xout1;
extern char got.xout2;
extern char got.xs;

int decode(unsigned int a0)
{
    int tmp_159;  // tmp #159
    int tmp_174;  // tmp #174
    int tmp_47;  // tmp #47
    int tmp_56;  // tmp #56
    int tmp_70;  // tmp #70
    int tmp_79;  // tmp #79
    int tmp_89;  // tmp #89
    unsigned int *v0;  // [bp-0x48]
    int tmp_31;  // tmp #31
    int tmp_40;  // tmp #40
    int tmp_49;  // tmp #49
    int tmp_58;  // tmp #58
    unsigned int *v1;  // [bp-0x40]
    unsigned int *v2;  // [bp-0x38]
    unsigned int *v3;  // [bp-0x30]
    unsigned int *v4;  // [bp-0x28], Other Possible Types: unsigned long
    unsigned long v5;  // [bp-0x20]
    unsigned long v6;  // [bp-0x18]
    unsigned int v7;  // [bp-0x10]

    *((unsigned int *)got.ilr) = a0 & 63;
    *((unsigned int *)got.ih) = a0 >> 6;
    *((int *)got.dec_szl) = filtez(got.dec_del_bpl, got.dec_del_dltx);
    *((int *)got.dec_spl) = filtep(*((int *)got.dec_rlt1), *((int *)got.dec_al1), *((int *)got.dec_rlt2), *((int *)got.dec_al2));
    *((int *)got.dec_sl) = *((int *)got.dec_spl) + *((int *)got.dec_szl);
    *((unsigned int *)got.dec_dlt) = *((int *)(got.qq4_code4_table + (*((int *)got.ilr) >> 2) * 4)) * *((int *)got.dec_detl) >> 15;
    *((unsigned int *)got.dl) = *((int *)(got.qq6_code6_table + *((int *)got.il) * 4)) * *((int *)got.dec_detl) >> 15;
    *((int *)got.rl) = *((int *)got.dl) + *((int *)got.dec_sl);
    *((int *)got.dec_nbl) = logscl(*((int *)got.ilr), *((int *)got.dec_nbl));
    *((int *)got.dec_detl) = scalel(*((int *)got.dec_nbl), 0x8);
    *((int *)got.dec_plt) = *((int *)got.dec_dlt) + *((int *)got.dec_szl);
    upzero(*((int *)got.dec_dlt), got.dec_del_dltx, got.dec_del_bpl);
    *((int *)got.dec_al2) = uppol2(*((int *)got.dec_al1), *((int *)got.dec_al2), *((int *)got.dec_plt), *((int *)got.dec_plt1), *((int *)got.dec_plt2));
    *((int *)got.dec_al1) = uppol1(*((int *)got.dec_al1), *((int *)got.dec_al2), *((int *)got.dec_plt), *((int *)got.dec_plt1));
    *((int *)got.dec_rlt) = *((int *)got.dec_sl) + *((int *)got.dec_dlt);
    *((int *)got.dec_rlt2) = *((int *)got.dec_rlt1);
    *((int *)got.dec_rlt1) = *((int *)got.dec_rlt);
    *((int *)got.dec_plt2) = *((int *)got.dec_plt1);
    *((int *)got.dec_plt1) = *((int *)got.dec_plt);
    *((int *)got.dec_szh) = filtez(got.dec_del_bph, got.dec_del_dhx);
    *((int *)got.dec_sph) = filtep(*((int *)got.dec_rh1), *((int *)got.dec_ah1), *((int *)got.dec_rh2), *((int *)got.dec_ah2));
    *((int *)got.dec_sh) = *((int *)got.dec_sph) + *((int *)got.dec_szh);
    *((unsigned int *)got.dec_dh) = *((int *)(got.qq2_code2_table + *((int *)got.ih) * 4)) * *((int *)got.dec_deth) >> 15;
    *((int *)got.dec_nbh) = logsch(*((int *)got.ih), *((int *)got.dec_nbh));
    *((int *)got.dec_deth) = scalel(*((int *)got.dec_nbh), 0xa);
    *((int *)got.dec_ph) = *((int *)got.dec_dh) + *((int *)got.dec_szh);
    upzero(*((int *)got.dec_dh), got.dec_del_dhx, got.dec_del_bph);
    *((int *)got.dec_ah2) = uppol2(*((int *)got.dec_ah1), *((int *)got.dec_ah2), *((int *)got.dec_ph), *((int *)got.dec_ph1), *((int *)got.dec_ph2));
    *((int *)got.dec_ah1) = uppol1(*((int *)got.dec_ah1), *((int *)got.dec_ah2), *((int *)got.dec_ph), *((int *)got.dec_ph1));
    *((int *)got.rh) = *((int *)got.dec_sh) + *((int *)got.dec_dh);
    *((int *)got.dec_rh2) = *((int *)got.dec_rh1);
    *((int *)got.dec_rh1) = *((int *)got.rh);
    *((int *)got.dec_ph2) = *((int *)got.dec_ph1);
    *((int *)got.dec_ph1) = *((int *)got.dec_ph);
    *((int *)got.xd) = *((int *)got.rl) - *((int *)got.rh);
    *((int *)got.xs) = *((int *)got.rl) + *((int *)got.rh);
    v4 = got.h;
    v3 = got.accumc;
    v1 = got.accumd;
    tmp_159 = v4;
    v4 = &v4[1];
    v6 = *((int *)tmp_159) * *((int *)got.xd);
    tmp_174 = v4;
    v4 = &v4[1];
    v5 = *((int *)tmp_174) * *((int *)got.xs);
    for (v7 = 0; v7 < 10; v7 += 1)
    {
        tmp_47 = v3;
        v3 = &v3[1];
        tmp_56 = v4;
        v4 = &v4[1];
        v6 = *((int *)tmp_56) * *((int *)tmp_47) + v6;
        tmp_70 = v1;
        v1 = &v1[1];
        tmp_79 = v4;
        v4 = &v4[1];
        v5 = *((int *)tmp_79) * *((int *)tmp_70) + v5;
    }
    tmp_70 = v4;
    v4 = &v4[1];
    v6 = *((int *)tmp_70) * *(v3) + v6;
    tmp_89 = v4;
    v4 = &v4[1];
    v5 = *((int *)tmp_89) * *(v1) + v5;
    *((unsigned int *)got.xout1) = v6 >> 14;
    *((unsigned int *)got.xout2) = v5 >> 14;
    v2 = &v3[1];
    v0 = &v1[1];
    for (v7 = 0; v7 < 10; v7 += 1)
    {
        tmp_31 = v2;
        v2 = &v2[1];
        tmp_40 = v3;
        v3 = &v3[1];
        *((int *)tmp_40) = *((int *)tmp_31);
        tmp_49 = v0;
        v0 = &v0[1];
        tmp_58 = v1;
        v1 = &v1[1];
        *((int *)tmp_58) = *((int *)tmp_49);
    }
    *(v3) = *((int *)got.xd);
    *(v1) = *((int *)got.xs);
    return (unsigned int)v1;
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

int reset()
{
    unsigned int v0;  // [bp-0xc]

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
    for (v0 = 0; v0 < 6; v0 += 1)
    {
        *((int *)(got.delay_dltx + v0 * 4)) = 0;
        *((int *)(got.delay_dhx + v0 * 4)) = 0;
        *((int *)(got.dec_del_dltx + v0 * 4)) = 0;
        *((int *)(got.dec_del_dhx + v0 * 4)) = 0;
    }
    for (v0 = 0; v0 < 6; v0 += 1)
    {
        *((int *)(got.delay_bpl + v0 * 4)) = 0;
        *((int *)(got.delay_bph + v0 * 4)) = 0;
        *((int *)(got.dec_del_bpl + v0 * 4)) = 0;
        *((int *)(got.dec_del_bph + v0 * 4)) = 0;
    }
    for (v0 = 0; v0 < 24; v0 += 1)
    {
        *((int *)(got.tqmf + v0 * 4)) = 0;
    }
    for (v0 = 0; v0 < 11; v0 += 1)
    {
        *((int *)(got.accumc + v0 * 4)) = 0;
        *((int *)(got.accumd + v0 * 4)) = 0;
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
    unsigned int v0;  // [bp-0x10]
    unsigned int v1;  // [bp-0xc]
    unsigned long v4;  // xmm0lq

    v0 = 0;
    rtclock();
    *((unsigned long *)got.startTimer) = v4;
    adpcm_main();
    for (v1 = 0; v1 < 50; v1 += 1)
    {
        if (*((int *)(got.compressed + (v1 << 2))) != *((int *)(got.test_compressed + (v1 << 2))))
        {
            v0 += 1;
        }
    }
    for (v1 = 0; v1 < 100; v1 += 1)
    {
        if (*((int *)(got.result + (v1 << 2))) != *((int *)(got.test_result + (v1 << 2))))
        {
            v0 += 1;
        }
    }
    rtclock();
    *((unsigned long *)got.endTimer) = v4;
    printf("%0.6f\n");
    return v0;
}

int rtclock()
{
    unsigned int v0;  // [bp-0x1c]
    char v1;  // [bp-0x18]

    v0 = gettimeofday(&v1, NULL);
    if (v0 != 0)
    {
        return printf("Error return from gettimeofday: %d", v0);
    }
    return v0;
}

