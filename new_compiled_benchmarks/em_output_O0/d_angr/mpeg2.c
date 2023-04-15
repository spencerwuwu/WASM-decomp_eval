int read(unsigned long a0, unsigned long a1, unsigned int a2)
{
    unsigned int v0;  // [bp-0x34]
    char *v1;  // [bp-0x30]
    char *v2;  // [bp-0x28]
    unsigned int v4;  // eax

    v2 = a0;
    v1 = a1;
    v0 = a2;
    while (true)
    {
        v4 = v0;
        v0 -= 1;
        if (v4 <= 0)
        {
            break;
        }
        *(v2) = *(v1);
        v2 = &v2[1];
        v1 = &v1[1];
    }
    return a2;
}

extern char got.System_Stream_Flag;
extern char got.inRdbfr;
extern char got.ld_Rdbfr;
extern char got.ld_Rdmax;
extern char got.ld_Rdptr;

int Fill_Buffer()
{
    void* v0;  // [bp-0x18]
    int tmp_102;  // tmp #102
    int tmp_30;  // tmp #30
    int tmp_54;  // tmp #54
    int tmp_78;  // tmp #78
    unsigned int v1;  // [bp-0xc]
    unsigned int v3;  // eax
    unsigned int v4;  // eax
    char *v5;  // cc_dep1

    v0 = got.ld_Rdbfr;
    v1 = read(got.ld_Rdbfr, got.inRdbfr, 0x800);
    *((long long *)got.ld_Rdptr) = got.ld_Rdbfr;
    v3 = got.System_Stream_Flag;
    if (*((int *)got.System_Stream_Flag) != 0)
    {
        v3 = got.ld_Rdmax;
        *((long long *)got.ld_Rdmax) = *((long long *)got.ld_Rdmax) - 0x800;
    }
    if (v1 < 0x800)
    {
        if (v1 < 0)
        {
            v1 = 0;
        }
        while (true)
        {
            v4 = v1 & 3;
            if (((char)v1 & 3) == 0)
            {
                break;
            }
            v5 = v1;
            v1 += 1;
            v5[got.ld_Rdbfr] = 0;
        }
        for (; v1 < 0x800; *((char *)(got.ld_Rdbfr + tmp_102)) = 183)
        {
            tmp_30 = v1;
            v1 += 1;
            *((char *)(got.ld_Rdbfr + tmp_30)) = 0;
            tmp_54 = v1;
            v1 += 1;
            *((char *)(got.ld_Rdbfr + tmp_54)) = 0;
            tmp_78 = v1;
            v1 += 1;
            *((char *)(got.ld_Rdbfr + tmp_78)) = 1;
            tmp_102 = v1;
            v1 += 1;
            v4 = got.ld_Rdbfr;
        }
        return v4;
    }
    return v3;
}

extern char got.ld_Bfr;

int Show_Bits(unsigned int a0)
{
    return *((int *)got.ld_Bfr) >> ((char)(32 - a0 & 31) & 31);
}

int Get_Bits1()
{
    return Get_Bits(0x1);
}

int Get_Bits(unsigned int a0)
{
    unsigned int v0;  // [bp-0x10]

    v0 = Show_Bits(a0);
    Flush_Buffer(a0);
    return v0;
}

extern char got.ld_Bfr;
extern char got.ld_Incnt;
extern char got.ld_Rdbfr;
extern char got.ld_Rdptr;

int Flush_Buffer(unsigned int a0)
{
    unsigned int v0;  // [bp-0x10]
    int tmp_36;  // tmp #36
    unsigned int v2;  // eax

    *((unsigned int *)got.ld_Bfr) = *((int *)got.ld_Bfr) << ((char)a0 & 31);
    v2 = *((int *)got.ld_Incnt) - a0;
    *((unsigned int *)got.ld_Incnt) = *((int *)got.ld_Incnt) - a0;
    v0 = v2;
    if (v0 <= 24)
    {
        if (*((long long *)got.ld_Rdptr) < got.ld_Rdbfr + 2044)
        {
            do
            {
                tmp_36 = *((long long *)got.ld_Rdptr);
                *((long long *)got.ld_Rdptr) = *((long long *)got.ld_Rdptr) + 1;
                *((unsigned int *)got.ld_Bfr) = (unsigned int)(*((char *)tmp_36) << ((char)(24 - v0) & 31)) | *((int *)got.ld_Bfr);
                v0 += 8;
            }
            while (v0 <= 24);
            *((unsigned int *)got.ld_Incnt) = v0;
            return;
        }
        do
        {
            if (*((long long *)got.ld_Rdptr) >= got.ld_Rdbfr + 0x800)
            {
                Fill_Buffer();
            }
            tmp_36 = *((long long *)got.ld_Rdptr);
            *((long long *)got.ld_Rdptr) = *((long long *)got.ld_Rdptr) + 1;
            *((unsigned int *)got.ld_Bfr) = (unsigned int)(*((char *)tmp_36) << ((char)(24 - v0) & 31)) | *((int *)got.ld_Bfr);
            v0 += 8;
        }
        while (v0 <= 24);
        *((unsigned int *)got.ld_Incnt) = v0;
        return;
    }
    return;
}

extern char got.MVtab0;
extern char got.MVtab1;
extern char got.MVtab2;

int Get_motion_code()
{
    unsigned int v0;  // [bp-0x1c]
    unsigned int v1;  // [bp-0x18]
    unsigned int v2;  // [bp-0x14]
    unsigned int v3;  // [bp-0x10]
    unsigned int v4;  // [bp-0xc]
    unsigned long long v6;  // rax

    (unsigned int)v6 = Get_Bits1();
    if ((unsigned int)v6 != 0)
    {
        v4 = 0;
        return v4;
    }
    v3 = Show_Bits(0x9);
    if (v3 >= 64)
    {
        v3 >>= 6;
        Flush_Buffer(*((char *)(got.MVtab0 + v3 * 2 + 1)));
        if (Get_Bits1() != 0)
        {
            v2 = 0 - *((char *)(got.MVtab0 + v3 * 2));
            v4 = v2;
            return v4;
        }
        v2 = *((char *)(got.MVtab0 + v3 * 2));
        v4 = v2;
        return v4;
    }
    if (v3 >= 24)
    {
        v3 >>= 3;
        Flush_Buffer(*((char *)(got.MVtab1 + v3 * 2 + 1)));
        if (Get_Bits1() != 0)
        {
            v1 = 0 - *((char *)(got.MVtab1 + v3 * 2));
            v4 = v1;
            return v4;
        }
        v1 = *((char *)(got.MVtab1 + v3 * 2));
        v4 = v1;
        return v4;
    }
    *((unsigned int *)&v6) = v3 - 12;
    v3 -= 12;
    if ((unsigned int)v6 < 0)
    {
        v4 = 0;
        return v4;
    }
    Flush_Buffer(*((char *)(got.MVtab2 + v3 * 2 + 1)));
    if (Get_Bits1() != 0)
    {
        v0 = 0 - *((char *)(got.MVtab2 + v3 * 2));
        v4 = v0;
        return v4;
    }
    v0 = *((char *)(got.MVtab2 + v3 * 2));
    v4 = v0;
    return v4;
}

int Get_dmvector()
{
    unsigned int v0;  // [bp-0xc]

    if (Get_Bits(0x1) != 0)
    {
        v0 = (Get_Bits(0x1) != 0? -1 : 1);
        return v0;
    }
    v0 = 0;
    return v0;
}

int motion_vectors(unsigned int *a0, unsigned long long a1, unsigned int *a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int v1, unsigned int a6, unsigned int a7, unsigned int a8)
{
    unsigned int v0;  // [bp-0x38]
    unsigned long long v4;  // rax

    if (a4 == 1)
    {
        if (a5 == 0)
        {
            if (a7 == 0)
            {
                (unsigned int)v4 = Get_Bits(0x1);
                a2[a3] = v4;
                a2[2 + a3] = v4;
                v0 = 0;
                motion_vector(&a0[2 * a3], a1, v1, a6, a7, a8, v0);
                *((int *)((long long)(stack_base)[16] + (int)(stack_base)[36] * 8 + 16)) = *((int *)((long long)(stack_base)[16] + (int)(stack_base)[36] * 8));
                *((int *)((long long)(stack_base)[16] + (int)(stack_base)[36] * 8 + 20)) = *((int *)((long long)(stack_base)[16] + (int)(stack_base)[36] * 8 + 4));
                return;
            }
            v0 = 0;
            motion_vector(&a0[2 * a3], a1, v1, a6, a7, a8, v0);
            a0[4 + 2 * a3] = a0[2 * a3];
            a0[5 + 2 * a3] = a0[1 + 2 * a3];
            return;
        }
        v0 = 0;
        motion_vector(&a0[2 * a3], a1, v1, a6, a7, a8, v0);
        a0[4 + 2 * a3] = a0[2 * a3];
        a0[5 + 2 * a3] = a0[1 + 2 * a3];
        return;
    }
    a2[a3] = Get_Bits(0x1);
    v0 = 0;
    motion_vector(&a0[2 * a3], a1, v1, a6, a7, a8, v0);
    a2[2 + a3] = Get_Bits(0x1);
    v0 = 0;
    motion_vector(&a0[4 + 2 * a3], a1, v1, a6, a7, a8, v0);
    return;
}

typedef struct struct_0 {
    char padding_0[4];
    unsigned int field_4;
} struct_0;

int motion_vector(struct_0 *a0, unsigned int a1[2], unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int v4)
{
    unsigned int v0;  // [bp-0x38]
    unsigned int v1;  // [bp-0x34]
    unsigned int v2;  // [bp-0x30]
    unsigned int v3;  // [bp-0x2c]
    unsigned long long v5;  // rax

    v3 = Get_motion_code();
    if (a2 != 0 && v3 != 0)
    {
        v1 = Get_Bits(a2);
    }
    if (v3 == 0 || a2 == 0)
    {
        v1 = 0;
    }
    v2 = v1;
    decode_motion_vector(a0, a2, v3, v2, v4);
    if (a4 != 0)
    {
        a1[0] = Get_dmvector();
    }
    v3 = Get_motion_code();
    if (a3 != 0 && v3 != 0)
    {
        v0 = Get_Bits(a3);
    }
    if (v3 == 0 || a3 == 0)
    {
        v0 = 0;
    }
    v2 = v0;
    if (a5 != 0)
    {
        a0->field_4 = a0->field_4 >> 1;
    }
    (unsigned int)v5 = decode_motion_vector(&a0->field_4, a3, v3, v2, v4);
    if (a5 != 0)
    {
        *((unsigned int *)&v5) = (unsigned int)a0;
        a0->field_4 = a0->field_4 * 2;
    }
    if (a4 != 0)
    {
        a1[1] = Get_dmvector();
        return (unsigned int)a1;
    }
    return v5;
}

int decode_motion_vector(unsigned int *a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
    unsigned int v0;  // [bp-0x30]
    unsigned int v1;  // [bp-0x2c]
    unsigned int v2;  // [bp-0x28]
    unsigned int v3;  // [bp-0x24]
    unsigned int v4;  // [bp-0x14]

    v4 = a1;
    v4 = (v4 >> 31 CONCAT v4) /m 32 >> 32;
    v3 = 16 << ((char)v4 & 31);
    if (a4 != 0)
    {
        v1 = *(a0) >> 1;
    }
    else
    {
        v1 = *(a0);
    }
    v2 = v1;
    if (a2 > 0)
    {
        v2 = (unsigned int)(a2 - 1 << ((char)v4 & 31)) + a3 + 1 + v2;
        if (v2 >= v3)
        {
            v2 -= v3 + v3;
        }
    }
    else if (a2 < 0)
    {
        v2 -= (unsigned int)(0 - a2 - 1 << ((char)v4 & 31)) + a3 + 1;
        if (v2 < 0 - v3)
        {
            v2 = v3 + v3 + v2;
        }
    }
    if (a4 != 0)
    {
        v0 = v2 * 2;
        *(a0) = v0;
        return;
    }
    v0 = v2;
    *(a0) = v0;
    return;
}

extern char got.ld_Bfr;
extern char got.ld_Incnt;
extern char got.ld_Rdbfr;
extern char got.ld_Rdmax;
extern char got.ld_Rdptr;

int Initialize_Buffer()
{
    *((int *)got.ld_Incnt) = 0;
    *((long long *)got.ld_Rdptr) = got.ld_Rdbfr + 0x800;
    *((long long *)got.ld_Rdmax) = *((long long *)got.ld_Rdptr);
    *((int *)got.ld_Bfr) = 0x4100000;
    return Flush_Buffer(0x0);
}

extern char got.System_Stream_Flag;
extern char got.endTimer;
extern char got.evalue;
extern char got.inPMV;
extern char got.inmvfs;
extern char got.outPMV;
extern char got.outmvfs;
extern char got.startTimer;

long long submain()
{
    unsigned int v0;  // [bp-0xa8]
    unsigned int v1;  // [bp-0xa0]
    unsigned int v2;  // [bp-0x98]
    unsigned int v3;  // [bp-0x90]
    unsigned int v4;  // [bp-0x84]
    unsigned int v5;  // [bp-0x80]
    unsigned int v6;  // [bp-0x7c]
    unsigned int v7;  // [bp-0x78]
    unsigned int v8;  // [bp-0x74]
    unsigned int v9;  // [bp-0x70]
    unsigned int v10;  // [bp-0x6c]
    unsigned int v11;  // [bp-0x68]
    unsigned int v12;  // [bp-0x50]
    unsigned int v13;  // [bp-0x48]
    unsigned int v14;  // [bp-0x20]
    unsigned int v15;  // [bp-0x1c]
    unsigned int v16;  // [bp-0x18]
    unsigned int v17;  // [bp-0x14]
    unsigned long v20;  // xmm0lq

    rtclock();
    *((unsigned long *)got.startTimer) = v20;
    v14 = 0;
    *((int *)got.evalue) = 0;
    *((int *)got.System_Stream_Flag) = 0;
    v10 = 0;
    v9 = 1;
    v8 = 0;
    v7 = 200;
    v6 = 200;
    v5 = 0;
    v4 = 1;
    for (v17 = 0; v17 < 2; v17 += 1)
    {
        v12 = 0;
        for (v16 = 0; v16 < 2; v16 += 1)
        {
            v11 = *((int *)(got.inmvfs + v17 * 8 + v16 * 4));
            for (v15 = 0; v15 < 2; v15 += 1)
            {
                v13 = *((int *)(got.inPMV + v17 * 16 + v16 * 8 + v15 * 4));
            }
        }
    }
    Initialize_Buffer();
    v0 = v7;
    v1 = v6;
    v2 = v5;
    v3 = v4;
    motion_vectors(&v13, &v12, &v11, v10, v9, v8, v0, v1, v2, v3);
    for (v17 = 0; v17 < 2; v17 += 1)
    {
        for (v16 = 0; v16 < 2; v16 += 1)
        {
            v14 = (v11 != *((int *)(got.outmvfs + (v17 << 3) + (v16 << 2)))) + v14;
            for (v15 = 0; v15 < 2; v15 += 1)
            {
                v14 = (v13 != *((int *)(got.outPMV + (v17 << 4) + (v16 << 3) + (v15 << 2)))) + v14;
            }
        }
    }
    rtclock();
    *((unsigned long *)got.endTimer) = v20;
    printf("%0.6f\n");
    return v14;
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

