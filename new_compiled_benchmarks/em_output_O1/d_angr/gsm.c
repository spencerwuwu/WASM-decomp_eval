long long gsm_add(unsigned long a0, unsigned long a1)
{
    int tmp_45;  // tmp #45
    unsigned long v2;  // rax

    tmp_45 = (unsigned int)(a0 + a1 >> 15) ^ -0x8000;
    *((unsigned short *)&a0) = (unsigned short)a0 + (unsigned short)a1;
    v2 = ((char)[D] amd64g_calculate_condition(0x1<64>, 0x2<64>, Conv(16->64, di<2>), Conv(16->64, si<2>), cc_ndep<8>)? (unsigned int)a0 : (unsigned int)tmp_45);
    return v2;
}

long long gsm_mult(unsigned int a0, unsigned int a1)
{
    int tmp_37;  // tmp #37
    unsigned long long v1;  // rdi
    unsigned long v2;  // rsi

    tmp_37 = v1 * v2;
    *((unsigned short *)&v1) = (unsigned int)v1 ^ 0x8000;
    return ((unsigned short)v1 != 0 || (unsigned short)((unsigned int)v2 ^ 0x8000) != 0? (unsigned int)(tmp_37 >> 15) : 32767);
}

long long gsm_mult_r(unsigned int a0, unsigned short a1)
{
    unsigned short v1;  // ax
    unsigned long v2;  // rax

    if (a0 == -0x8000)
    {
        v1 = 32767;
        if (a1 == 0x8000)
        {
            return v2;
        }
        return a0 * a1 + 0x4000 >> 15;
    }
    return a0 * a1 + 0x4000 >> 15;
}

long long gsm_abs(unsigned int a0)
{
    unsigned long v1;  // rdi

    return ((char)[D] amd64g_calculate_condition(0x9<64>, 0x12<64>, Conv(16->64, di<2>), 0x0<64>, cc_ndep<8>)? (unsigned int)v1 : ((unsigned int)v1 != -0x8000? 0 - (unsigned int)v1 : 32767));
}

extern char got.bitoff;

long long gsm_norm(unsigned long long a0)
{
    unsigned long v1;  // rcx
    void* v3;  // rcx
    unsigned long v4;  // rdi
    unsigned int v5;  // eax

    if (a0 < 0)
    {
        if (a0 < -1073741823)
        {
            return 0;
        }
        a0 = !(a0);
    }
    if (a0 >= 0 || a0 >= -1073741823)
    {
        v1 = a0 / 0x10000;
        if ((unsigned short)(a0 >> 16) != 0)
        {
            if (a0 / 0x1000000 != 0)
            {
                return 65535 + *((char *)(*((long long *)&got.bitoff) + dil<1>));
            }
            ecx<4> = *((char *)(*((long long *)&got.bitoff) + rcx<8>));
            return 7 + ecx<4>;
        }
        v3 = 0;
        *((char *)&v3) = ((unsigned int)a0 & 0xff00) == 0;
        v4 = (((unsigned int)a0 & 0xff00) != 0? a0 >> 8 : a0);
        v5 = v3 * 8 + 15;
        return v5 + *((char *)(*((long long *)&got.bitoff) + dil<1>));
    }
}

long long gsm_div(unsigned short a0, unsigned int a1)
{
    unsigned int v1;  // rsi
    unsigned int v2;  // rcx
    unsigned long long v3;  // rdx
    void* v4;  // rax
    void* v5;  // rdi
    unsigned int v6;  // cc_dep1

    if (a0 != 0)
    {
        v2 = v1;
        v3 = a0;
        v1 = 15;
        v4 = 0;
        do
        {
            v5 = 0;
            *((char *)&v5) = v2 <= v3 << 1;
            v3 = v3 * 2 - (v2 <= v3 << 1? v2 : 0);
            v4 = v5 + v4 * 2;
            v6 = v1 - 1;
            v1 -= 1;
        }
        while (v6 != 0);
        return v4;
    }
    return 0;
}

extern char got.bitoff;

int Autocorrelation(void* a0, unsigned long a1)
{
    int tmp_70;  // tmp #70
    int tmp_27;  // tmp #27
    int tmp_158;  // tmp #158
    int tmp_14;  // tmp #14
    int tmp_21;  // tmp #21
    int tmp_191;  // tmp #191
    int tmp_30;  // tmp #30
    int tmp_44;  // tmp #44
    int tmp_53;  // tmp #53
    unsigned long v0;  // [bp-0x70]
    int tmp_75;  // tmp #75
    int tmp_84;  // tmp #84
    int tmp_113;  // tmp #113
    int tmp_0;  // tmp #0
    int tmp_135;  // tmp #135
    int tmp_182;  // tmp #182
    int tmp_72;  // tmp #72
    int tmp_78;  // tmp #78
    int tmp_90;  // tmp #90
    int tmp_110;  // tmp #110
    int tmp_118;  // tmp #118
    void* v1;  // [bp-0x68], Other Possible Types: unsigned long
    unsigned long v2;  // [bp-0x60]
    unsigned long v3;  // [bp-0x58]
    unsigned long v4;  // [bp-0x50]
    unsigned long v5;  // [bp-0x48]
    void* v6;  // [bp-0x40]
    unsigned long v7;  // [bp-0x38]
    void* v9;  // rax
    void* v10;  // rcx
    unsigned long long v11;  // r9
    unsigned long v12;  // cc_ndep
    unsigned long v13;  // cc_ndep
    unsigned long long v14;  // rcx
    void* v15;  // rax
    void* v16;  // rcx
    unsigned long v17;  // cc_ndep
    unsigned long long v18;  // rdx
    unsigned long long v19;  // r8
    unsigned long long v20;  // r9
    unsigned long long v21;  // r10
    unsigned long long v22;  // rax
    unsigned long long v23;  // rcx
    unsigned long long v24;  // r11
    unsigned long long v25;  // r14
    unsigned long long v26;  // r15
    unsigned long long v27;  // r12
    unsigned long long v28;  // r13
    unsigned long long v29;  // r14
    unsigned long long v30;  // rbx
    unsigned long long v31;  // r15
    unsigned long long v32;  // rax
    unsigned long long v33;  // rdx
    unsigned short v34[2];  // r12
    unsigned long long v35;  // rdi
    unsigned long long v36;  // r11
    unsigned int v37;  // ebp
    unsigned long long v38;  // r8
    unsigned long long v39;  // r9
    unsigned long long v40;  // r10
    unsigned long v41;  // rax
    void* v42;  // rsi
    unsigned int v43;  // cc_dep1

    v9 = 0;
    v10 = 0;
    do
    {
        v11 = *((short *)((char *)a0 + 0x2 * v9));
        tmp_70 = (unsigned short)v10;
        v10 = (((char)[D] amd64g_calculate_condition(0x9<64>, 0x12<64>, r9<8>, 0x0<64>, cc_ndep<8>)? *((short *)((char *)a0 + 0x2 * v9)) : (*((short *)((char *)a0 + 0x2 * v9)) == 0x8000? 32767 : 0 - *((short *)((char *)a0 + 0x2 * v9)))) <= (unsigned short)v10? (unsigned int)v10 : ((char)[D] amd64g_calculate_condition(0x9<64>, 0x12<64>, r9<8>, 0x0<64>, cc_ndep<8>)? *((short *)((char *)a0 + 0x2 * v9)) : (*((short *)((char *)a0 + 0x2 * v9)) == 0x8000? 32767 : 0 - *((short *)((char *)a0 + 0x2 * v9)))));
        v12 = ((char)[D] amd64g_calculate_condition(0x9<64>, 0x12<64>, r9<8>, 0x0<64>, cc_ndep<8>)? *((short *)((char *)a0 + 0x2 * v9)) : (*((short *)((char *)a0 + 0x2 * v9)) == 0x8000? 32767 : 0 - *((short *)((char *)a0 + 0x2 * v9)))) < tmp_70;
        v9 += 1;
    }
    while (v9 != 160);
    if ((unsigned short)v10 != 0)
    {
        v13 = (unsigned short)v10 < 0x100;
        v14 = 4 - (*((char *)(got.bitoff + (0x100 <= (unsigned short)v10? (unsigned short)v10 >> 8 : (unsigned short)v10))) + (-1 + ((unsigned short)v10 < 0x100) | 7));
        v15 = (unsigned short)v14;
    }
    else
    {
        v15 = 0;
    }
    v6 = v15;
    if ((unsigned int)(v15 - 1) <= 3)
    {
        *((unsigned int *)&v15) = 0x4000 >> ((char)v15 - 1 & 31);
        v16 = 0;
        do
        {
            tmp_27 = *((short *)((char *)a0 + 0x2 * v16));
            *((unsigned short *)((char *)a0 + 0x2 * v16)) = (unsigned int)v15 * *((short *)((char *)a0 + 0x2 * v16)) + 0x4000 >> 15;
            v17 = [D] amd64g_calculate_rflags_c(0x23<64>, Shr(Conv(32->64, ((eax<4> * t27) + 0x4000<32>)), 0xf<8>), Shr(Conv(32->64, ((eax<4> * t27) + 0x4000<32>)), 0xe<8>), cc_ndep<8>);
            v16 += 1;
        }
        while (v16 != 160);
    }
    tmp_158 = *((short *)a0);
    *((int128_t *)a1) = 0;
    *((int128_t *)(a1 + 48)) = 0;
    *((int128_t *)(a1 + 32)) = 0;
    *((int128_t *)(a1 + 16)) = 0;
    *((long long *)(a1 + 64)) = 0;
    *((long long *)a1) = tmp_158 * tmp_158;
    v18 = (short)a0[2];
    tmp_14 = (short)a0[2] * (short)a0[2] + tmp_158 * tmp_158;
    *((long long *)a1) = (short)a0[2] * (short)a0[2] + tmp_158 * tmp_158;
    tmp_21 = tmp_158 * v18 + *((long long *)(a1 + 8));
    *((unsigned long long *)(a1 + 8)) = tmp_158 * v18 + *((long long *)(a1 + 8));
    tmp_191 = (short)a0[4];
    tmp_30 = (short)a0[4] * (short)a0[4] + tmp_14;
    *((long long *)a1) = (short)a0[4] * (short)a0[4] + tmp_14;
    *((unsigned long long *)(a1 + 8)) = v18 * tmp_191 + tmp_21;
    tmp_44 = tmp_158 * tmp_191 + *((long long *)(a1 + 16));
    *((long long *)(a1 + 16)) = tmp_158 * tmp_191 + *((long long *)(a1 + 16));
    v19 = (short)a0[6];
    tmp_53 = (short)a0[6] * (short)a0[6] + tmp_30;
    *((long long *)a1) = (short)a0[6] * (short)a0[6] + tmp_30;
    v0 = tmp_191;
    *((unsigned long long *)(a1 + 8)) = tmp_191 * v19 + v18 * tmp_191 + tmp_21;
    *((unsigned long long *)(a1 + 16)) = v18 * v19 + tmp_44;
    tmp_75 = tmp_158 * v19 + *((long long *)(a1 + 24));
    *((unsigned long long *)(a1 + 24)) = tmp_158 * v19 + *((long long *)(a1 + 24));
    v20 = (short)a0[8];
    tmp_84 = (short)a0[8] * (short)a0[8] + tmp_53;
    *((long long *)a1) = (short)a0[8] * (short)a0[8] + tmp_53;
    *((unsigned long long *)(a1 + 8)) = v19 * v20 + tmp_191 * v19 + v18 * tmp_191 + tmp_21;
    *((unsigned long long *)(a1 + 16)) = tmp_191 * v20 + v18 * v19 + tmp_44;
    *((unsigned long long *)(a1 + 24)) = v18 * v20 + tmp_75;
    v1 = tmp_158;
    tmp_113 = tmp_158 * v20 + *((long long *)(a1 + 32));
    *((unsigned long long *)(a1 + 32)) = tmp_158 * v20 + *((long long *)(a1 + 32));
    v21 = (short)a0[10];
    v22 = (short)a0[10] * (short)a0[10] + tmp_84;
    *((long long *)a1) = (short)a0[10] * (short)a0[10] + tmp_84;
    v23 = v20 * v21 + v19 * v20 + tmp_191 * v19 + v18 * tmp_191 + tmp_21;
    *((unsigned long long *)(a1 + 8)) = v20 * v21 + v19 * v20 + tmp_191 * v19 + v18 * tmp_191 + tmp_21;
    v24 = v19 * v21 + tmp_191 * v20 + v18 * v19 + tmp_44;
    *((unsigned long long *)(a1 + 16)) = v19 * v21 + tmp_191 * v20 + v18 * v19 + tmp_44;
    v25 = v0 * v21 + v18 * v20 + tmp_75;
    *((unsigned long long *)(a1 + 24)) = v0 * v21 + v18 * v20 + tmp_75;
    v26 = v18 * v21 + tmp_113;
    *((unsigned long long *)(a1 + 32)) = v18 * v21 + tmp_113;
    v27 = tmp_158 * v21;
    tmp_0 = v27 + *((long long *)(a1 + 40));
    *((unsigned long long *)(a1 + 40)) = v27 + *((long long *)(a1 + 40));
    tmp_135 = (short)a0[12];
    v3 = (short)a0[12] * (short)a0[12] + v22;
    *((unsigned long long *)a1) = (short)a0[12] * (short)a0[12] + v22;
    *((unsigned long long *)(a1 + 8)) = v21 * tmp_135 + v23;
    *((unsigned long long *)(a1 + 16)) = v20 * tmp_135 + v24;
    *((unsigned long long *)(a1 + 24)) = v19 * tmp_135 + v25;
    *((unsigned long long *)(a1 + 32)) = v0 * tmp_135 + v26;
    v4 = v18 * tmp_135 + tmp_0;
    *((unsigned long long *)(a1 + 40)) = v18 * tmp_135 + tmp_0;
    v2 = v1 * tmp_135 + *((long long *)(a1 + 48));
    *((unsigned long *)(a1 + 48)) = v1 * tmp_135 + *((long long *)(a1 + 48));
    tmp_182 = (short)a0[14];
    tmp_72 = (short)a0[14] * tmp_135 + v21 * tmp_135 + v23;
    tmp_78 = (short)a0[14] * v21 + v20 * tmp_135 + v24;
    tmp_84 = (short)a0[14] * v20 + v19 * tmp_135 + v25;
    tmp_90 = (short)a0[14] * v19 + v0 * tmp_135 + v26;
    v28 = (short)a0[14] * v19 + v0 * tmp_135 + v26;
    v29 = (short)a0[14] * (short)a0[14] + v3;
    *((unsigned long *)a1) = (short)a0[14] * (short)a0[14] + v3;
    v30 = tmp_72;
    *((long long *)(a1 + 8)) = tmp_72;
    v31 = tmp_78;
    *((long long *)(a1 + 16)) = tmp_78;
    v5 = tmp_84;
    *((long long *)(a1 + 24)) = tmp_84;
    *((long long *)(a1 + 32)) = tmp_90;
    v32 = tmp_182 * v0 + v4;
    *((unsigned long *)(a1 + 40)) = tmp_182 * v0 + v4;
    tmp_110 = tmp_182 * v18 + v2;
    v33 = tmp_182 * v18 + v2;
    *((long long *)(a1 + 48)) = tmp_110;
    tmp_118 = v1 * tmp_182 + *((long long *)(a1 + 56));
    v1 = a0;
    v34 = a0 + 14;
    v35 = tmp_118;
    *((long long *)(a1 + 56)) = tmp_118;
    v7 = a1;
    v36 = *((long long *)(a1 + 64));
    v37 = 8;
    do
    {
        v2 = v35;
        v3 = v33;
        v4 = v28;
        v0 = v32;
        v38 = v34[1] * v34[2 + 1];
        v39 = v34[1] * v34[3];
        v40 = v34[1] * v34[3 + 1];
        v29 += v34[1] * v34[1];
        v30 += v34[1] * v34[0];
        v31 += v34[1] * v34[1];
        v5 += v34[1] * v34[1];
        v28 = v4 + v34[1] * v34[1 + 1];
        v32 = v0 + v34[1] * v34[2];
        v34 = &v34[1];
        v33 = v3 + v38;
        v35 = v2 + v39;
        v36 += v40;
        v37 += 1;
    }
    while (v37 != 160);
    *((unsigned long long *)v7) = v29;
    *((unsigned long long *)(v7 + 8)) = v30;
    *((unsigned long long *)(v7 + 16)) = v31;
    *((unsigned long *)(v7 + 24)) = v5;
    *((unsigned long long *)(v7 + 32)) = v28;
    *((unsigned long long *)(v7 + 40)) = v32;
    *((unsigned long long *)(v7 + 48)) = v3 + v38;
    *((unsigned long long *)(v7 + 56)) = v2 + v39;
    *((unsigned long long *)(v7 + 64)) = v36;
    v41 = 8;
    do
    {
        *((long long *)(v7 + v41 * 8)) = *((long long *)(v7 + v41 * 8)) * 2;
        v41 -= 1;
    }
    while (v41 >= 1);
    v42 = v1;
    if ((unsigned int)v6 > 0)
    {
        *((unsigned int *)&v41) = 159;
        do
        {
            *((unsigned short *)v42) = *((short *)v42) << ((char)v6 & 31);
            v42 += 2;
            v43 = v41;
            *((unsigned int *)&v41) = (unsigned int)v41 - 1;
        }
        while (v43 >= 1);
        return;
    }
    return;
}

extern char got.bitoff;

int Reflection_coefficients(void* a0, void* a1)
{
    int tmp_37;  // tmp #37
    unsigned short v0;  // [bp-0x88], Other Possible Types: uint128_t
    int tmp_0;  // tmp #0
    int tmp_27;  // tmp #27
    int tmp_135;  // tmp #135
    int tmp_4;  // tmp #4
    int v1;  // [bp-0x86], Other Possible Types: unsigned short
    unsigned short v2;  // [bp-0x78]
    unsigned short v3;  // [bp-0x68]
    unsigned long v4;  // [bp-0x66]
    unsigned long v5;  // [bp-0x60]
    unsigned short v6;  // [bp-0x58]
    unsigned short v8;  // [bp-0x46], Other Possible Types: unsigned long
    unsigned long v9;  // [bp-0x40]
    unsigned long long v11;  // rax
    void* v12;  // rcx
    unsigned long long v13;  // rdx
    void* v14;  // rdx
    unsigned long long v15;  // rcx
    unsigned long long v16;  // rax
    unsigned long v17;  // rax
    void* v18;  // rax
    unsigned long long v19;  // rdx
    unsigned long v20;  // cc_ndep
    unsigned long long v21;  // rax
    unsigned long long v22;  // r8
    unsigned long v23;  // r9b, Other Possible Types: char, unsigned long long
    unsigned long v24;  // r10
    unsigned long long v25;  // rdx
    void* v26;  // rdi, Other Possible Types: unsigned long long
    unsigned long v27;  // r11
    unsigned long long v28;  // rbx
    unsigned int v29;  // ebp
    unsigned long v30;  // cc_ndep
    unsigned int v31;  // cc_dep1
    unsigned long v32;  // r11
    unsigned long v33;  // r8
    unsigned long long v34;  // r11
    unsigned long v35;  // r15
    unsigned long v36;  // r13
    unsigned int v37;  // ebp
    unsigned long v38;  // cc_ndep
    unsigned long long v39;  // rdi

    v11 = *((long long *)a0);
    if (*((long long *)a0) != 0)
    {
        if (*((long long *)a0) < 0)
        {
            if (*((long long *)a0) < -1073741823)
            {
                v12 = 0;
            }
            else
            {
                v11 = !(*((long long *)a0));
            }
        }
        if (*((long long *)a0) >= -1073741823 || *((long long *)a0) >= 0)
        {
            v13 = v11 / 0x10000;
            if ((unsigned short)(v11 >> 16) != 0)
            {
                v16 = v11 / 0x1000000;
                if ((char)v16 != 0)
                {
                    v15 = -1;
                }
                else
                {
                    v15 = 7;
                    v16 = v13;
                }
            }
            else
            {
                v14 = 0;
                *((char *)&v14) = ((unsigned int)v11 & 0xff00) == 0;
                v16 = (((unsigned int)v11 & 0xff00) != 0? v11 >> 8 : v11);
                v15 = v14 * 8 + 15;
            }
            v17 = *((char *)(got.bitoff + (char)v16));
            v12 = v15 + v17;
        }
        v18 = 0;
        do
        {
            tmp_37 = *((long long *)((char *)a0 + 0x8 * v18)) << ((char)v12 & 63) >> 15;
            v19 = *((long long *)((char *)a0 + 0x8 * v18)) << ((char)v12 & 63) >> 16;
            v3 = *((long long *)((char *)a0 + 0x8 * v18)) << ((char)v12 & 63) >> 16;
            v20 = [D] amd64g_calculate_rflags_c(0x24<64>, rdx<8>, t37, cc_ndep<8>);
            v18 += 1;
        }
        while (v18 != 9);
        v9 = v5;
        v8 = v4;
        v0 = *((int128_t *)&v3);
        v2 = v6;
        v21 = (unsigned short)v0;
        v22 = *((short *)&((char *)&v0)[2]);
        v23 = *((short *)&((char *)&v0)[2]) == 0x8000;
        v24 = ((char)[D] amd64g_calculate_condition(0x9<64>, 0x12<64>, Conv(16->64, Load(addr=stack_base-134, size=2, endness=Iend_LE)), 0x0<64>, cc_ndep<8>)? *((short *)&((char *)&v0)[2]) : (*((short *)&((char *)&v0)[2]) == 0x8000? 32767 : 0 - *((short *)&((char *)&v0)[2])));
        if ((unsigned short)v0 < ((char)[D] amd64g_calculate_condition(0x9<64>, 0x12<64>, Conv(16->64, Load(addr=stack_base-134, size=2, endness=Iend_LE)), 0x0<64>, cc_ndep<8>)? *((short *)&((char *)&v0)[2]) : (*((short *)&((char *)&v0)[2]) == 0x8000? 32767 : 0 - *((short *)&((char *)&v0)[2]))))
        {
            v0 = v0;
            if (false)
            {
                return;
            }
            memset(rsi<8>, 0x0, 0x10);
            return;
        }
        v25 = 1;
        v26 = 0;
        while (true)
        {
            if ((unsigned short)v24 != 0)
            {
                v27 = (short)v21;
                v28 = (short)v24;
                v29 = 15;
                v24 = 0;
                do
                {
                    tmp_0 = v28 * 2;
                    v24 = 0;
                    tmp_27 = v27 <= v28 << 1;
                    *((char *)&v24) = v27 <= v28 << 1;
                    v28 = v28 * 2 - (v27 <= v28 << 1? v27 : 0);
                    v24 += v24 * 2;
                    v30 = tmp_0 < (tmp_27? v27 : 0);
                    v31 = v29 - 1;
                    v29 -= 1;
                }
                while (v31 != 0);
            }
            else
            {
                *((unsigned int *)&v24) = 0;
            }
            *(a1) = ((unsigned short)v22 <= 0? (unsigned int)v24 : 0 - (unsigned int)v24);
            if (v25 != 8)
            {
                *((unsigned int *)&v24) = *(a1);
                v32 = (((char)v23 & 1) == 0? (unsigned int)(*(a1) * (unsigned short)v22 + 0x4000 >> 15) : (*(a1) == -0x8000? 32767 : (unsigned int)(*(a1) * (unsigned short)v22 + 0x4000 >> 15)));
                v33 = v21 + (((char)v23 & 1) == 0? (unsigned int)(*(a1) * (unsigned short)v22 + 0x4000 >> 15) : (*(a1) == -0x8000? 32767 : (unsigned int)(*(a1) * (unsigned short)v22 + 0x4000 >> 15)));
                *((unsigned int *)&v33) = (unsigned int)((unsigned short)v33 >> 15) ^ -0x8000;
                tmp_135 = (unsigned short)v21;
                *((unsigned short *)&v21) = (unsigned short)v21 + (unsigned short)v32;
                v21 = ((char)[D] amd64g_calculate_condition(0x0<64>, 0x2<64>, t135, Conv(16->64, r11w<2>), cc_ndep<8>)? (unsigned int)v33 : rax<8>);
                if (v25 <= 7)
                {
                    v23 = 8 - v25;
                    v34 = 1;
                    do
                    {
                        *((unsigned int *)&v28) = (unsigned short)v8;
                        *((unsigned int *)&v24) = (short)v1;
                        v35 = ((unsigned int)v24 != -0x8000? (unsigned int)((unsigned int)v24 * (unsigned short)v8 + 0x4000 >> 15) : ((unsigned short)v8 == -0x8000? 32767 : (unsigned int)((unsigned int)v24 * (unsigned short)v8 + 0x4000 >> 15)));
                        v36 = ((unsigned int)v24 != -0x8000? (unsigned int)((unsigned int)v24 * (short)v1 + 0x4000 >> 15) : ((short)v1 == -0x8000? 32767 : (unsigned int)((unsigned int)v24 * (short)v1 + 0x4000 >> 15)));
                        *((unsigned short *)&v28) = (short)v8 + (unsigned short)v36;
                        *((unsigned short *)&v28) = ((char)[D] amd64g_calculate_condition(0x0<64>, 0x2<64>, Conv(16->64, Load(addr=((stack_base-48 + (r11<8> << 0x1<8>)) - 0x18<64>), size=2, endness=Iend_LE)), Conv(16->64, r13w<2>), cc_ndep<8>)? ... : rbx<8>);
                        v37 = ...;
                        *((unsigned short *)&v24) = (short)v1 + (unsigned short)v35;
                        *((unsigned short *)&v24) = ((char)[D] amd64g_calculate_condition(0x0<64>, 0x2<64>, Conv(16->64, Load(addr=((stack_base-48 + (r11<8> << 0x1<8>)) - 0x56<64>), size=2, endness=Iend_LE)), Conv(16->64, r15w<2>), cc_ndep<8>)? (unsigned int)*((unsigned long long *)&v37) : r14<8>);
                        v1 = v24;
                        v8 = v28;
                        v34 += 1;
                    }
                    while (v34 < v23);
                }
                v25 += 1;
                tmp_4 = a1;
                a1 = &a1[1];
                v38 = (tmp_4 + 2 <= tmp_4? 1 : 0);
                v26 += 1;
                v22 = *((short *)&((char *)&v0)[2]);
                *((char *)&v23) = (short)v1 == 0x8000;
                v24 = ((char)[D] amd64g_calculate_condition(0x9<64>, 0x12<64>, Conv(16->64, r8w<2>), 0x0<64>, ((((t4 + 0x2<64>) <= t4)) ? (0x1<64>) : (0x0<64>)))? *((short *)&((char *)&v0)[2]) : ((short)v1 == 0x8000? 32767 : 0 - *((short *)&((char *)&v0)[2])));
                if ((unsigned short)v21 >= (unsigned short)v24)
                {
                    continue;
                }
                v39 = v26 * 2;
                break;
            }
            else
            {
                v0 = v21;
                return;
            }
        }
        v0 = v21;
        if ((unsigned int)v25 < 9)
        {
            memset(rsi<8>, 0x0, 16 - v39);
            return;
        }
        return;
    }
    *((int128_t *)a1) = 0;
    return;
}

long long Transformation_to_Log_Area_Ratios(unsigned short *a0)
{
    unsigned int v1;  // eax, Other Possible Types: unsigned long long
    unsigned long v2;  // rsi
    unsigned long long v3;  // r8

    v1 = 1;
    do
    {
        v2 = ((char)[D] amd64g_calculate_condition(0x9<64>, 0x12<64>, Conv(16->64, Load(addr=rdi<8>, size=2, endness=Iend_LE)), 0x0<64>, 0x0<64>)? *(a0) : (*(a0) == 0x8000? 32767 : 0 - *(a0)));
        v3 = (unsigned short)v2;
        if ((unsigned short)v2 <= 22117)
        {
            *((unsigned int *)&v3) = (unsigned int)v3 / 2;
        }
        else if ((unsigned int)v3 <= 31129)
        {
            *((unsigned int *)&v3) = ((char)[D] amd64g_calculate_condition(0x9<64>, 0x12<64>, Conv(16->64, Load(addr=rdi<8>, size=2, endness=Iend_LE)), 0x0<64>, 0x0<64>)? *(a0) : (*(a0) == 0x8000? 32767 : 0 - *(a0))) - 11059;
        }
        else
        {
            *((unsigned int *)&v3) = ((char)[D] amd64g_calculate_condition(0x9<64>, 0x12<64>, Conv(16->64, Load(addr=rdi<8>, size=2, endness=Iend_LE)), 0x0<64>, 0x0<64>)? *(a0) : (*(a0) == 0x8000? 32767 : 0 - *(a0))) * 4 + 0x6800;
        }
        *(a0) = ((char)[D] amd64g_calculate_condition(0x9<64>, 0x12<64>, Conv(16->64, Load(addr=rdi<8>, size=2, endness=Iend_LE)), 0x0<64>, 0x0<64>)? (unsigned int)v3 : 0 - (unsigned int)v3);
        v1 += 1;
        a0 = &a0[1];
    }
    while ((unsigned int)v1 != 9);
    return v1;
}

int Quantization_and_coding(unsigned short a0[8])
{
    unsigned int v1;  // eax
    unsigned long v3;  // rax
    unsigned int v4;  // ecx
    unsigned long v6;  // rcx
    unsigned int v7;  // edx
    unsigned long v9;  // rdx
    unsigned int v10;  // esi
    unsigned long v11;  // rsi
    unsigned int v12;  // r8d
    unsigned long v14;  // r8
    unsigned int v15;  // r10d
    unsigned long v16;  // r10
    unsigned int v17;  // r11d
    unsigned long v18;  // r11
    unsigned int v19;  // r9d

    v1 = a0[7] * 9036 >> 15;
    *((unsigned short *)&v1) = (unsigned short)(a0[7] * 9036 >> 15) - 1144;
    v3 = ((char)[D] amd64g_calculate_condition(0x0<64>, 0x2<64>, Shr(Conv(32->64, (Conv(16->32, Load(addr=(rdi<8> + 0xe<64>), size=2, endness=Iend_LE)) * 0x234c<32>)), 0xf<8>), 0xfb88<64>, cc_ndep<8>)? (unsigned int)((a0[7] * 9036 >> 15) - 1144 >> 15) ^ -0x8000 : rax<8>);
    v4 = a0[6] * 8534 >> 15;
    *((unsigned short *)&v4) = (unsigned short)(a0[6] * 8534 >> 15) - 341;
    v6 = ((char)[D] amd64g_calculate_condition(0x0<64>, 0x2<64>, Shr(Conv(32->64, (Conv(16->32, Load(addr=(rdi<8> + 0xc<64>), size=2, endness=Iend_LE)) * 0x2156<32>)), 0xf<8>), 0xfeab<64>, cc_ndep<8>)? (unsigned int)((a0[6] * 8534 >> 15) - 341 >> 15) ^ -0x8000 : rcx<8>);
    v7 = a0[5] * 0x3c00 >> 15;
    *((unsigned short *)&v7) = (unsigned short)(a0[5] * 0x3c00 >> 15) - 0x700;
    v9 = ((char)[D] amd64g_calculate_condition(0x0<64>, 0x2<64>, Shr(Conv(32->64, (Conv(16->32, Load(addr=(rdi<8> + 0xa<64>), size=2, endness=Iend_LE)) * 0x3c00<32>)), 0xf<8>), 0xf900<64>, cc_ndep<8>)? (unsigned int)((a0[5] * 0x3c00 >> 15) - 0x700 >> 15) ^ -0x8000 : rdx<8>);
    v10 = a0[4] * 13964 >> 15;
    *((unsigned short *)&v10) = (unsigned short)(a0[4] * 13964 >> 15) + 350;
    *((unsigned int *)&v11) = ((char)[D] amd64g_calculate_condition(0x0<64>, 0x2<64>, Shr(Conv(32->64, (Conv(16->32, Load(addr=(rdi<8> + 0x8<64>), size=2, endness=Iend_LE)) * 0x368c<32>)), 0xf<8>), 0x15e<64>, cc_ndep<8>)? (unsigned int)((a0[4] * 13964 >> 15) + 350 >> 15) ^ -0x8000 : rsi<8>);
    v12 = a0[3] * 0x5000 >> 15;
    *((unsigned short *)&v12) = (unsigned short)(a0[3] * 0x5000 >> 15) - 0xa00;
    v14 = ((char)[D] amd64g_calculate_condition(0x0<64>, 0x2<64>, Shr(((Conv(16->64, Load(addr=(rdi<8> + 0x6<64>), size=2, endness=Iend_LE)) << 0xc<8>) + ((Conv(16->64, Load(addr=(rdi<8> + 0x6<64>), size=2, endness=Iend_LE)) << 0xc<8>) << 0x2<8>)), 0xf<8>), 0xf600<64>, cc_ndep<8>)? (unsigned int)(((a0[3] << 12) + (a0[3] << 12 << 2) >> 15) - 0xa00 >> 15) ^ -0x8000 : r8<8>);
    v15 = a0[2] * 0x5000 >> 15;
    *((unsigned short *)&v15) = (unsigned short)(a0[2] * 0x5000 >> 15) + 0x900;
    *((unsigned int *)&v16) = ((char)[D] amd64g_calculate_condition(0x0<64>, 0x2<64>, Shr(((Conv(16->64, Load(addr=(rdi<8> + 0x4<64>), size=2, endness=Iend_LE)) << 0xc<8>) + ((Conv(16->64, Load(addr=(rdi<8> + 0x4<64>), size=2, endness=Iend_LE)) << 0xc<8>) << 0x2<8>)), 0xf<8>), 0x900<64>, cc_ndep<8>)? (unsigned int)(((a0[2] << 12) + (a0[2] << 12 << 2) >> 15) + 0x900 >> 15) ^ -0x8000 : r10<8>);
    v17 = a0[1] * 0x5000 >> 15;
    *((unsigned short *)&v17) = (unsigned short)(a0[1] * 0x5000 >> 15) + 0x100;
    *((unsigned int *)&v18) = ((char)[D] amd64g_calculate_condition(0x0<64>, 0x2<64>, Shr(((Conv(16->64, Load(addr=(rdi<8> + 0x2<64>), size=2, endness=Iend_LE)) << 0xc<8>) + ((Conv(16->64, Load(addr=(rdi<8> + 0x2<64>), size=2, endness=Iend_LE)) << 0xc<8>) << 0x2<8>)), 0xf<8>), 0x100<64>, cc_ndep<8>)? (unsigned int)(((a0[1] << 12) + (a0[1] << 12 << 2) >> 15) + 0x100 >> 15) ^ -0x8000 : r11<8>);
    v19 = a0[0] * 0x5000 >> 15;
    *((unsigned short *)&v19) = (unsigned short)(a0[0] * 0x5000 >> 15) + 0x100;
    a0[0] = (0x4000 <= ((char)[D] amd64g_calculate_condition(0x0<64>, 0x2<64>, Shr(((Conv(16->64, Load(addr=rdi<8>, size=2, endness=Iend_LE)) << 0xc<8>) + ((Conv(16->64, Load(addr=rdi<8>, size=2, endness=Iend_LE)) << 0xc<8>) << 0x2<8>)), 0xf<8>), 0x100<64>, cc_ndep<8>)? (unsigned int)(((a0[0] << 12) + (a0[0] << 12 << 2) >> 15) + 0x100 >> 15) ^ -0x8000 : r9<8>)? 63 : (r9w<2> < -0x4000? 0 : (unsigned int)(r9w<2> >> 9) + 32));
    a0[1] = (0x4000 <= (unsigned int)v18? 63 : ((unsigned int)v18 < -0x4000? 0 : (unsigned int)(r11w<2> >> 9) + 32));
    a0[2] = (0x2000 <= (unsigned int)v16? 31 : (r10w<2> < -0x2000? 0 : (unsigned int)(r10w<2> >> 9) + 16));
    a0[3] = (0x1f00 <= (unsigned short)v14? 31 : ((unsigned short)v14 < -0x2100? 0 : (unsigned int)(r8<8> + 0x100 >> 9) + 16));
    a0[4] = (0x1000 <= (unsigned int)v11? 15 : (si<2> < -0x1000? 0 : (unsigned int)(si<2> >> 9) + 8));
    a0[5] = (0xf00 <= (unsigned short)v9? 15 : ((unsigned short)v9 < -0x1100? 0 : (unsigned int)(rdx<8> + 0x100 >> 9) + 8));
    a0[6] = (0x700 <= (unsigned short)v6? 7 : ((unsigned short)v6 < -0x900? 0 : (unsigned int)(rcx<8> + 0x100 >> 9) + 4));
    a0[7] = (0x700 <= (unsigned short)v3? 7 : ((unsigned short)v3 < -0x900? 0 : (unsigned int)(rax<8> + 0x100 >> 9) + 4));
    return;
}

long long Gsm_LPC_Analysis(void* a0, void* a1)
{
    char v0;  // [bp-0x58]
    void* v4;  // rdx
    unsigned int v5;  // rax
    unsigned long long v6;  // rsi
    unsigned long v7;  // rdi
    unsigned long long v8;  // r8
    unsigned short *v9;  // rdx

    Autocorrelation(a0, &v0);
    Reflection_coefficients(&v0, v4);
    v5 = 1;
    v4 = a1;
    do
    {
        v6 = *(v9);
        v7 = ((char)[D] amd64g_calculate_condition(0x9<64>, 0x12<64>, Conv(16->64, Load(addr=rdx<8>, size=2, endness=Iend_LE)), 0x0<64>, 0x0<64>)? *(v9) : (*(v9) == 0x8000? 32767 : 0 - *(v9)));
        v8 = (unsigned short)v7;
        if ((unsigned short)v7 <= 22117)
        {
            *((unsigned int *)&v8) = (unsigned int)v8 / 2;
        }
        else if ((unsigned int)v8 <= 31129)
        {
            *((unsigned int *)&v8) = ((char)[D] amd64g_calculate_condition(0x9<64>, 0x12<64>, Conv(16->64, Load(addr=rdx<8>, size=2, endness=Iend_LE)), 0x0<64>, 0x0<64>)? *(v9) : (*(v9) == 0x8000? 32767 : 0 - *(v9))) - 11059;
        }
        else
        {
            *((unsigned int *)&v8) = ((char)[D] amd64g_calculate_condition(0x9<64>, 0x12<64>, Conv(16->64, Load(addr=rdx<8>, size=2, endness=Iend_LE)), 0x0<64>, 0x0<64>)? *(v9) : (*(v9) == 0x8000? 32767 : 0 - *(v9))) * 4 + 0x6800;
        }
        *(v9) = ((char)[D] amd64g_calculate_condition(0x9<64>, 0x12<64>, Conv(16->64, si<2>), 0x0<64>, 0x0<64>)? (unsigned int)v8 : 0 - (unsigned int)v8);
        v5 += 1;
        v9 = &v9[1];
    }
    while (v5 != 9);
    return Quantization_and_coding(v4);
}

extern char got.endTimer;
extern char got.inData;
extern char got.outData;
extern char got.outLARc;
extern char got.startTimer;

long long submain()
{
    unsigned short v0;  // [bp-0x1b8], Other Possible Types: char
    char v1;  // [bp-0x1b6]
    char v2;  // [bp-0x1a8]
    unsigned int v3;  // [bp-0x1a0]
    char v4;  // [bp-0x158]
    unsigned int v5;  // [bp-0x150]
    unsigned long long v7;  // rax
    unsigned long long v9;  // xmm0lq
    unsigned long long v10;  // xmm1lq
    int v11;  // xmm1
    uint128_t v12;  // xmm0
    unsigned long long v13;  // xmm1
    unsigned short *v16;  // rbx
    unsigned int v17;  // rax
    unsigned long long v18;  // rdx
    unsigned long v19;  // rsi
    unsigned long long v20;  // rdi
    void* v22;  // rax
    void* v23;  // rdx
    void* v24;  // rbx
    void* v25;  // rdi
    void* v26;  // rsi
    unsigned long long v27;  // rax
    void* v30;  // rax

    (unsigned int)v7 = gettimeofday(&v4, NULL);
    if ((unsigned int)v7 != 0)
    {
        printf("Error return from gettimeofday: %d", (unsigned int)v7);
    }
    v9 = *((long long *)&v4);
    v10 = v5;
    v13 = v11 * 4517329193108106637 + v12;
    *((unsigned long long *)got.startTimer) = v13;
    memcpy(&v4, got.inData, 0x140);
    Autocorrelation(&v4, &v2);
    v16 = &v0;
    Reflection_coefficients(&v2, &v0);
    v17 = 1;
    do
    {
        v18 = *((short *)&v0);
        v19 = ((char)[D] amd64g_calculate_condition(0x9<64>, 0x12<64>, Conv(16->64, Load(addr=rbx<8>, size=2, endness=Iend_LE)), 0x0<64>, 0x0<64>)? *((short *)&v0) : (*((short *)&v0) == 0x8000? 32767 : 0 - *((short *)&v0)));
        v20 = (unsigned short)v19;
        if ((unsigned short)v19 <= 22117)
        {
            *((unsigned int *)&v20) = (unsigned int)v20 / 2;
        }
        else if ((unsigned int)v20 <= 31129)
        {
            *((unsigned int *)&v20) = ((char)[D] amd64g_calculate_condition(0x9<64>, 0x12<64>, Conv(16->64, Load(addr=rbx<8>, size=2, endness=Iend_LE)), 0x0<64>, 0x0<64>)? *((short *)&v0) : (*((short *)&v0) == 0x8000? 32767 : 0 - *((short *)&v0))) - 11059;
        }
        else
        {
            *((unsigned int *)&v20) = ((char)[D] amd64g_calculate_condition(0x9<64>, 0x12<64>, Conv(16->64, Load(addr=rbx<8>, size=2, endness=Iend_LE)), 0x0<64>, 0x0<64>)? *((short *)&v0) : (*((short *)&v0) == 0x8000? 32767 : 0 - *((short *)&v0))) * 4 + 0x6800;
        }
        v0 = ((char)[D] amd64g_calculate_condition(0x9<64>, 0x12<64>, Conv(16->64, dx<2>), 0x0<64>, 0x0<64>)? (unsigned int)v20 : 0 - (unsigned int)v20);
        v17 += 1;
        v16 = &v1;
    }
    while (v17 != 9);
    Quantization_and_coding(&v0);
    v22 = 0;
    v23 = 0;
    v24 = 0;
    do
    {
        v25 = 0;
        *((char *)&v25) = *((short *)&v4) != *((short *)(got.outData + (v23 << 1)));
        v24 += v25;
        v23 += 1;
    }
    while (v23 != 160);
    do
    {
        v26 = 0;
        *((char *)&v26) = v0 != *((short *)(got.outLARc + (v22 << 1)));
        v24 += v26;
        v22 += 1;
    }
    while (v22 != 8);
    (unsigned int)v27 = gettimeofday(&v2, NULL);
    if ((unsigned int)v27 != 0)
    {
        printf("Error return from gettimeofday: %d", (unsigned int)v27);
        v13 = *((long long *)&v2);
        *((unsigned long long *)&v12) = v3;
        *((unsigned long long *)&v12) = v12 * 4517329193108106637 + v13;
        *((unsigned long long *)*((long long *)&got.endTimer)) = v12;
        printf("%0.6f\n");
        v30 = v24;
        return v30;
    }
    v13 = *((long long *)&v2);
    *((unsigned long long *)&v12) = v3;
    *((unsigned long long *)&v12) = v12 * 4517329193108106637 + v13;
    *((unsigned long long *)*((long long *)&got.endTimer)) = v12;
    printf("%0.6f\n");
    v30 = v24;
    return v30;
}

