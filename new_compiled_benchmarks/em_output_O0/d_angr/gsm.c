int gsm_add(unsigned short a0, unsigned short a1)
{
    unsigned long v0;  // [bp-0x28], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x20], Other Possible Types: unsigned long
    unsigned long v2;  // [bp-0x18]

    v2 = a0 + a1;
    if (v2 < -0x8000)
    {
        v1 = -0x8000;
        return v1;
    }
    if (v2 > 32767)
    {
        v0 = 32767;
        v1 = v0;
        return v1;
    }
    v0 = v2;
    v1 = v0;
    return v1;
}

int gsm_mult(unsigned short a0, unsigned short a1)
{
    unsigned short v0;  // [bp-0xa]
    unsigned int v2;  // eax

    if (a0 == -0x8000)
    {
        if (a1 == -0x8000)
        {
            v0 = 32767;
            v2 = v0;
            return v2;
        }
        v0 = a1 * a0 >> 15;
        v2 = v0;
        return eax<4>;
    }
    v0 = a1 * a0 >> 15;
    v2 = v0;
    return v2;
}

int gsm_mult_r(unsigned short a0, unsigned short a1)
{
    unsigned long v0;  // [bp-0x18], Other Possible Types: unsigned long long
    unsigned short v1;  // [bp-0xa]
    unsigned int v3;  // eax

    if (a1 == -0x8000)
    {
        if (a0 == -0x8000)
        {
            v1 = 32767;
            v3 = v1;
            return v3;
        }
        v0 = a1 * a0 + 0x4000;
        v0 >>= 15;
        v1 = v0 & 65535;
        v3 = v1;
        return eax<4>;
    }
    v0 = a1 * a0 + 0x4000;
    v0 >>= 15;
    v1 = v0 & 65535;
    v3 = v1;
    return v3;
}

int gsm_abs(unsigned short a0)
{
    unsigned int v0;  // [bp-0x14]
    unsigned int v1;  // [bp-0x10]

    if (a0 < 0)
    {
        if (a0 == -0x8000)
        {
            v1 = 32767;
            v0 = v1;
            return v0;
        }
        v1 = 0 - a0;
        v0 = v1;
        return v0;
    }
    v0 = a0;
    return v0;
}

extern char got.bitoff;

int gsm_norm(unsigned long a0)
{
    unsigned int v0;  // [bp-0x24]
    unsigned int v1;  // [bp-0x20]
    unsigned int v2;  // [bp-0x1c]
    char *v3;  // [bp-0x18]
    unsigned short v4;  // [bp-0xa]
    unsigned int v6;  // eax

    v3 = a0;
    if (v3 < 0)
    {
        if (v3 <= -0x40000000)
        {
            v4 = 0;
            v6 = v4;
            return v6;
        }
        v3 ^= -1;
    }
    if (v3 >= 0 || v3 > -0x40000000)
    {
        if ((0xffff0000 & v3) != 0)
        {
            if ((0xff000000 & v3) != 0)
            {
                v2 = *((char *)(*((long long *)&got.bitoff) + (v3 >> 24 & 255))) - 1;
            }
            else
            {
                v2 = *((char *)(*((long long *)&got.bitoff) + (v3 >> 16 & 255))) + 7;
            }
            v1 = v2;
            v4 = v1;
            v6 = v4;
            return eax<4>;
        }
        if (((unsigned short)v3 & 0xff00) != 0)
        {
            v0 = *((char *)(*((long long *)&got.bitoff) + (v3 >> 8 & 255))) + 15;
        }
        else
        {
            v0 = *((char *)(*((long long *)&got.bitoff) + (v3 & 255))) + 23;
        }
        v1 = v0;
        v4 = v1;
        v6 = v4;
        return v6;
    }
}

int gsm_div(unsigned short a0, unsigned short a1)
{
    unsigned int v0;  // [bp-0x28]
    int tmp_11;  // tmp #11
    unsigned short v1;  // [bp-0x22]
    unsigned long v2;  // [bp-0x18]
    unsigned short v3;  // [bp-0xa]
    unsigned int v5;  // eax

    v2 = a0;
    v1 = 0;
    v0 = 15;
    if (a0 == 0)
    {
        v3 = 0;
        v5 = v3;
        return v5;
    }
    while (true)
    {
        tmp_11 = v0;
        v0 -= 1;
        if (tmp_11 == 0)
        {
            break;
        }
        v1 *= 2;
        v2 *= 2;
        if (v2 >= a1)
        {
            v2 -= a1;
            v1 += 1;
        }
    }
    v3 = v1;
    v5 = v3;
    return v5;
}

int Autocorrelation(unsigned long a0, unsigned long long a1[9])
{
    unsigned short v0;  // [bp-0x34]
    int tmp_169;  // tmp #169
    int tmp_214;  // tmp #214
    int tmp_278;  // tmp #278
    int tmp_361;  // tmp #361
    int tmp_240;  // tmp #240
    int tmp_263;  // tmp #263
    int tmp_122;  // tmp #122
    int tmp_27;  // tmp #27
    unsigned short v1;  // [bp-0x32]
    unsigned short v2[2];  // [bp-0x30]
    unsigned short v3;  // [bp-0x28]
    unsigned short v4;  // [bp-0x26]
    unsigned short v5;  // [bp-0x24]
    unsigned short v6;  // [bp-0x22]
    unsigned int v7;  // [bp-0x20]
    unsigned int v8;  // [bp-0x1c]
    unsigned short *v9;  // [bp-0x10]

    v9 = a0;
    v5 = 0;
    for (v8 = 0; v8 <= 159; v8 += 1)
    {
        v6 = gsm_abs(v9[v8]);
        if (v6 > v5)
        {
            v5 = v6;
        }
    }
    if (v5 == 0)
    {
        v4 = 0;
    }
    else
    {
        v4 = 4 - gsm_norm(v5 * 0x10000);
    }
    if (v4 > 0 && v4 <= 4)
    {
        v3 = v4;
        for (v8 = 0; v8 <= 159; v8 += 1)
        {
            v0 = v9[v8];
            v9[v8] = gsm_mult_r(v0, 0x4000 >> ((char)(v3 - 1) & 31));
        }
    }
    *((unsigned short **)&v2) = v9;
    v1 = v2[0];
    for (v8 = 8; v8 >= 0; v8 -= 1)
    {
        a1[v8] = 0;
    }
    a1[0] = v2[0] * v1 + a1[0];
    tmp_169 = v2;
    *(&v2) = &v2[1];
    v1 = *((short *)(tmp_169 + 2));
    a1[0] = v2[0] * v1 + a1[0];
    a1[1] = v2[1] * v1 + a1[1];
    tmp_214 = v2;
    *(&v2) = &v2[1];
    v1 = *((short *)(tmp_214 + 2));
    a1[0] = v2[0] * v1 + a1[0];
    a1[1] = v2[1] * v1 + a1[1];
    a1[2] = v2[1] * v1 + a1[2];
    tmp_278 = v2;
    *(&v2) = &v2[1];
    v1 = *((short *)(tmp_278 + 2));
    a1[0] = v2[0] * v1 + a1[0];
    a1[1] = v2[1] * v1 + a1[1];
    a1[2] = v2[1] * v1 + a1[2];
    a1[3] = v2[1 + 1] * v1 + a1[3];
    tmp_361 = v2;
    *(&v2) = &v2[1];
    v1 = *((short *)(tmp_361 + 2));
    a1[0] = v2[0] * v1 + a1[0];
    a1[1] = v2[1] * v1 + a1[1];
    a1[2] = v2[1] * v1 + a1[2];
    a1[3] = v2[1 + 1] * v1 + a1[3];
    a1[4] = v2[2] * v1 + a1[4];
    tmp_240 = v2;
    *(&v2) = &v2[1];
    v1 = *((short *)(tmp_240 + 2));
    a1[0] = v2[0] * v1 + a1[0];
    a1[1] = v2[1] * v1 + a1[1];
    a1[2] = v2[1] * v1 + a1[2];
    a1[3] = v2[1 + 1] * v1 + a1[3];
    a1[4] = v2[2] * v1 + a1[4];
    a1[5] = v2[2 + 1] * v1 + a1[5];
    tmp_361 = v2;
    *(&v2) = &v2[1];
    v1 = *((short *)(tmp_361 + 2));
    a1[0] = v2[0] * v1 + a1[0];
    a1[1] = v2[1] * v1 + a1[1];
    a1[2] = v2[1] * v1 + a1[2];
    a1[3] = v2[1 + 1] * v1 + a1[3];
    a1[4] = v2[2] * v1 + a1[4];
    a1[5] = v2[2 + 1] * v1 + a1[5];
    a1[6] = v2[3] * v1 + a1[6];
    tmp_263 = v2;
    *(&v2) = &v2[1];
    v1 = *((short *)(tmp_263 + 2));
    a1[0] = v2[0] * v1 + a1[0];
    a1[1] = v2[1] * v1 + a1[1];
    a1[2] = v2[1] * v1 + a1[2];
    a1[3] = v2[1 + 1] * v1 + a1[3];
    a1[4] = v2[2] * v1 + a1[4];
    a1[5] = v2[2 + 1] * v1 + a1[5];
    a1[6] = v2[3] * v1 + a1[6];
    a1[7] = v2[3 + 1] * v1 + a1[7];
    for (v7 = 8; v7 <= 159; v7 += 1)
    {
        tmp_122 = v2;
        *(&v2) = &v2[1];
        v1 = *((short *)(tmp_122 + 2));
        a1[0] = v2[0] * v1 + a1[0];
        a1[1] = v2[1] * v1 + a1[1];
        a1[2] = v2[1] * v1 + a1[2];
        a1[3] = v2[1 + 1] * v1 + a1[3];
        a1[4] = v2[2] * v1 + a1[4];
        a1[5] = v2[2 + 1] * v1 + a1[5];
        a1[6] = v2[3] * v1 + a1[6];
        a1[7] = v2[3 + 1] * v1 + a1[7];
        a1[8] = v2[4] * v1 + a1[8];
    }
    for (v8 = 8; v8 >= 0; v8 -= 1)
    {
        a1[v8] = a1[v8] * 2;
    }
    if (v4 > 0)
    {
        for (v8 = 159; v8 >= 0; v8 -= 1)
        {
            tmp_27 = v9;
            v9 = &v9[1];
            *((unsigned short *)tmp_27) = *((short *)tmp_27) << ((char)v4 & 31);
        }
        return;
    }
    return;
}

int Reflection_coefficients(unsigned long long *a0, unsigned long a1)
{
    int tmp_13;  // tmp #13
    unsigned short v0;  // [bp-0x78]
    unsigned short v1;  // [bp-0x58]
    unsigned short v2;  // [bp-0x56]
    unsigned short v3;  // [bp-0x38]
    unsigned short v4;  // [bp-0x26]
    unsigned int v5;  // [bp-0x24]
    unsigned int v6;  // [bp-0x20]
    unsigned int v7;  // [bp-0x1c]
    unsigned short *v8;  // [bp-0x18]

    v8 = a1;
    if (*(a0) == 0)
    {
        for (v7 = 8; v7 > 0; v7 -= 1)
        {
            tmp_13 = v8;
            v8 = &v8[1];
            *((short *)tmp_13) = 0;
        }
        return;
    }
    v4 = gsm_norm(*(a0));
    for (v7 = 0; v7 <= 8; v7 += 1)
    {
        v3 = a0[v7] << ((char)v4 & 63) >> 16;
    }
    for (v7 = 1; v7 <= 7; v7 += 1)
    {
        v0 = v3;
    }
    for (v7 = 0; v7 <= 8; v7 += 1)
    {
        v1 = v3;
    }
    v5 = 1;
    while (true)
    {
        if (v5 <= 8)
        {
            v4 = v2;
            v4 = gsm_abs(v4);
            if (v1 < v4)
            {
                for (v7 = v5; v7 <= 8; v7 += 1)
                {
                    tmp_13 = v8;
                    v8 = &v8[1];
                    *((short *)tmp_13) = 0;
                }
                return;
            }
            *((unsigned short *)&a1) = v1;
            *(v8) = gsm_div(v4, a1);
            if (v2 > 0)
            {
                *(v8) = 0 - *(v8);
            }
            if (v5 != 8)
            {
                v4 = gsm_mult_r(v2, *(v8));
                *((unsigned short *)&a0) = v1;
                v1 = gsm_add((unsigned short)a0, v4);
                for (v6 = 1; v6 <= 8 - v5; v6 += 1)
                {
                    v4 = gsm_mult_r(v0, *(v8));
                    v1 = gsm_add(v1, v4);
                    v4 = gsm_mult_r(v1, *(v8));
                    v0 = gsm_add(v0, v4);
                }
                v5 += 1;
                v8 = &v8[1];
            }
            else
            {
                return;
            }
        }
        else
        {
            return;
        }
    }
}

int Transformation_to_Log_Area_Ratios(unsigned long a0)
{
    unsigned int v0;  // [bp-0x1c]
    unsigned int v1;  // [bp-0x18]
    unsigned short v2;  // [bp-0x12]
    unsigned short *v3;  // [bp-0x10]

    v3 = a0;
    for (v1 = 1; v1 <= 8; v3 = &v3[1])
    {
        v2 = *(v3);
        v2 = gsm_abs(v2);
        if (v2 < 22118)
        {
            v2 >>= 1;
        }
        else if (v2 < 31130)
        {
            v2 -= 11059;
        }
        else
        {
            v2 -= 0x6600;
            v2 *= 4;
        }
        if (*(v3) < 0)
        {
            v0 = 0 - v2;
        }
        else
        {
            v0 = v2;
        }
        *(v3) = v0;
        v1 += 1;
    }
    return;
}

int Quantization_and_coding(unsigned long a0)
{
    unsigned int v0;  // [bp-0x54]
    unsigned int v1;  // [bp-0x50]
    unsigned int v2;  // [bp-0x4c]
    unsigned int v3;  // [bp-0x48]
    unsigned int v4;  // [bp-0x44]
    unsigned int v5;  // [bp-0x40]
    unsigned int v6;  // [bp-0x3c]
    unsigned int v7;  // [bp-0x38]
    unsigned int v8;  // [bp-0x34]
    unsigned int v9;  // [bp-0x30]
    unsigned int v10;  // [bp-0x2c]
    unsigned int v11;  // [bp-0x28]
    unsigned int v12;  // [bp-0x24]
    unsigned int v13;  // [bp-0x20]
    unsigned int v14;  // [bp-0x1c]
    unsigned int v15;  // [bp-0x18]
    unsigned short v16;  // [bp-0x12]
    unsigned short *v17;  // [bp-0x10], Other Possible Types: unsigned long

    v17 = a0;
    v16 = gsm_mult(0x5000, *(v17));
    v16 = gsm_add(v16, 0x0);
    v16 = gsm_add(v16, 0x100);
    v16 >>= 9;
    if (v16 > 31)
    {
        v15 = 63;
    }
    else
    {
        if (v16 < -32)
        {
            v14 = 0;
        }
        else
        {
            v14 = v16 - -32;
        }
        v15 = v14;
    }
    *(v17) = v15;
    v17 = &v17[1];
    v16 = gsm_mult(0x5000, *(v17));
    v16 = gsm_add(v16, 0x0);
    v16 = gsm_add(v16, 0x100);
    v16 >>= 9;
    if (v16 > 31)
    {
        v13 = 63;
    }
    else
    {
        if (v16 < -32)
        {
            v12 = 0;
        }
        else
        {
            v12 = v16 - -32;
        }
        v13 = v12;
    }
    *(v17) = v13;
    v17 = &v17[1];
    v16 = gsm_mult(0x5000, *(v17));
    v16 = gsm_add(v16, 0x800);
    v16 = gsm_add(v16, 0x100);
    v16 >>= 9;
    if (v16 > 15)
    {
        v11 = 31;
    }
    else
    {
        if (v16 < -0x10)
        {
            v10 = 0;
        }
        else
        {
            v10 = v16 - -0x10;
        }
        v11 = v10;
    }
    *(v17) = v11;
    v17 = &v17[1];
    v16 = gsm_mult(0x5000, *(v17));
    v16 = gsm_add(v16, 0xf600);
    v16 = gsm_add(v16, 0x100);
    v16 >>= 9;
    if (v16 > 15)
    {
        v9 = 31;
    }
    else
    {
        if (v16 < -0x10)
        {
            v8 = 0;
        }
        else
        {
            v8 = v16 - -0x10;
        }
        v9 = v8;
    }
    *(v17) = v9;
    v17 = &v17[1];
    v16 = gsm_mult(0x368c, *(v17));
    v16 = gsm_add(v16, 0x5e);
    v16 = gsm_add(v16, 0x100);
    v16 >>= 9;
    if (v16 > 7)
    {
        v7 = 15;
    }
    else
    {
        if (v16 < -8)
        {
            v6 = 0;
        }
        else
        {
            v6 = v16 - -8;
        }
        v7 = v6;
    }
    *(v17) = v7;
    v17 = &v17[1];
    v16 = gsm_mult(0x3c00, *(v17));
    v16 = gsm_add(v16, 0xf900);
    v16 = gsm_add(v16, 0x100);
    v16 >>= 9;
    if (v16 > 7)
    {
        v5 = 15;
    }
    else
    {
        if (v16 < -8)
        {
            v4 = 0;
        }
        else
        {
            v4 = v16 - -8;
        }
        v5 = v4;
    }
    *(v17) = v5;
    v17 = &v17[1];
    v16 = gsm_mult(0x2156, *(v17));
    v16 = gsm_add(v16, 0xfeab);
    v16 = gsm_add(v16, 0x100);
    v16 >>= 9;
    if (v16 > 3)
    {
        v3 = 7;
    }
    else
    {
        if (v16 < -0x4)
        {
            v2 = 0;
        }
        else
        {
            v2 = v16 - -0x4;
        }
        v3 = v2;
    }
    *(v17) = v3;
    v17 = &v17[1];
    v16 = gsm_mult(0x234c, *(v17));
    v16 = gsm_add(v16, 0xfb88);
    v16 = gsm_add(v16, 0x100);
    v16 >>= 9;
    if (v16 > 3)
    {
        v1 = 7;
        *(v17) = v1;
        v17 = &v17[1];
        return;
    }
    if (v16 < -0x4)
    {
        v0 = 0;
        v1 = v0;
        *(v17) = v1;
        v17 = &v17[1];
        return;
    }
    v0 = v16 - -0x4;
    v1 = v0;
    *(v17) = v1;
    v17 = &v17[1];
    return;
}

int Gsm_LPC_Analysis(unsigned int a0, unsigned int a1)
{
    char v0;  // [bp-0x68]

    Autocorrelation(a0, &v0);
    Reflection_coefficients(&v0, a1);
    Transformation_to_Log_Area_Ratios(a1);
    Quantization_and_coding(a1);
    return;
}

extern char got.endTimer;
extern char got.inData;
extern char got.outData;
extern char got.outLARc;
extern char got.startTimer;

long long submain()
{
    char v0;  // [bp-0x168]
    unsigned short v1;  // [bp-0x158]
    unsigned int v2;  // [bp-0x10]
    unsigned int v3;  // [bp-0xc]
    unsigned long v6;  // xmm0lq

    v2 = 0;
    rtclock();
    *((unsigned long *)got.startTimer) = v6;
    for (v3 = 0; v3 < 160; v3 += 1)
    {
        v1 = *((short *)(got.inData + v3 * 2));
    }
    Gsm_LPC_Analysis((unsigned int)&v1, (unsigned int)&v0);
    for (v3 = 0; v3 < 160; v3 += 1)
    {
        v2 = (v1 != *((short *)(got.outData + (v3 << 1)))) + v2;
    }
    for (v3 = 0; v3 < 8; v3 += 1)
    {
        v2 = (*((short *)&v0) != *((short *)(got.outLARc + (v3 << 1)))) + v2;
    }
    rtclock();
    *((unsigned long *)got.endTimer) = v6;
    printf("%0.6f\n");
    return v2;
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

