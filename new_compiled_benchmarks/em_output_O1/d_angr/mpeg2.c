long long read(char *a0, char *a1, unsigned int a2)
{
    unsigned long long v1;  // cc_op
    unsigned long long v2;  // rdx
    unsigned long long v3;  // cc_dep1
    void* v4;  // cc_dep2
    unsigned long v5;  // cc_ndep
    unsigned long long v6;  // cc_op
    unsigned long long v7;  // cc_dep1
    unsigned long long v8;  // cc_dep2
    unsigned long long v9;  // rcx

    v1 = 19;
    v3 = v2;
    v4 = 0;
    if ((unsigned int)v2 > 0)
    {
        v9 = v2;
        do
        {
            *(a0) = *(a1);
            a0 = &a0[1];
            v5 = [D] amd64g_calculate_rflags_c(cc_op<8>, cc_dep1<8>, cc_dep2<8>, cc_ndep<8>);
            a1 = &a1[1];
            v6 = 7;
            v7 = v9;
            v8 = 1;
            v9 -= 1;
        }
        while ((unsigned int)v7 > 1);
        return v2;
    }
    return v2;
}

extern char got.System_Stream_Flag;
extern char got.inRdbfr;
extern char got.ld_Rdbfr;
extern char got.ld_Rdmax;
extern char got.ld_Rdptr;

long long Fill_Buffer()
{
    memcpy(got.ld_Rdbfr, got.inRdbfr, 0x800);
    *((long long *)got.ld_Rdptr) = got.ld_Rdbfr;
    if (*((int *)got.System_Stream_Flag) != 0)
    {
        *((long long *)got.ld_Rdmax) = *((long long *)got.ld_Rdmax) - 0x800;
        return got.ld_Rdmax;
    }
    return got.System_Stream_Flag;
}

extern char got.ld_Bfr;

long long Show_Bits(unsigned int a0)
{
    return *((int *)got.ld_Bfr) >> (0 - (char)a0 & 31);
}

extern char got.System_Stream_Flag;
extern char got.inRdbfr;
extern char got.ld_Bfr;
extern char got.ld_Incnt;
extern char got.ld_Rdbfr;
extern char got.ld_Rdmax;
extern char got.ld_Rdptr;

long long Get_Bits1()
{
    unsigned int v0;  // [bp-0x44]
    unsigned long v1;  // [bp-0x40]
    unsigned long v2;  // [bp-0x38]
    unsigned int v4;  // ebp
    unsigned long long v5;  // rcx
    unsigned int v7;  // cc_dep1
    unsigned long long v8;  // r13
    void* v10;  // rax
    unsigned int v11;  // cc_dep1

    v4 = v2 * 2;
    *((unsigned int *)got.ld_Bfr) = v2 * 2;
    v5 = *((int *)got.ld_Incnt);
    v8 = v5 - 1;
    *((unsigned int *)got.ld_Incnt) = (unsigned int)v5 - 1;
    if ((unsigned int)v5 <= 25)
    {
        v2 = *((int *)got.ld_Bfr);
        v10 = *((long long *)got.ld_Rdptr);
        if (*((long long *)got.ld_Rdptr) < 2044 + got.ld_Rdbfr)
        {
            do
            {
                *((void* *)got.ld_Rdptr) = v10 + 1;
                v4 |= (unsigned int)(*((char *)v10) << (24 - (char)v8 & 31));
                *((unsigned int *)got.ld_Bfr) = v4;
                *((unsigned int *)&v5) = (unsigned int)v8 + 8;
                v10 += 1;
                v7 = v8;
                v8 += 8;
            }
            while (v7 < 17);
            *((unsigned int *)got.ld_Incnt) = v5;
            return v2 >> 31;
        }
        v1 = *((long long *)got.ld_Rdmax);
        v0 = *((int *)got.System_Stream_Flag);
        do
        {
            if (v10 >= got.ld_Rdbfr + 0x800)
            {
                memcpy(got.ld_Rdbfr, got.inRdbfr, 0x800);
                *((long long *)got.ld_Rdptr) = got.ld_Rdbfr;
                if (v0 != 0)
                {
                    v5 = v1 - 0x800;
                    v1 -= 0x800;
                    *((unsigned long long *)got.ld_Rdmax) = v5;
                }
                v10 = got.ld_Rdbfr;
            }
            *((void* *)got.ld_Rdptr) = v10 + 1;
            v4 |= (unsigned int)(*((char *)v10) << (24 - (char)v8 & 31));
            *((unsigned int *)got.ld_Bfr) = v4;
            *((unsigned int *)&v5) = (unsigned int)v8 + 8;
            v10 += 1;
            v11 = v8;
            v8 += 8;
        }
        while (v11 < 17);
        *((unsigned int *)got.ld_Incnt) = v5;
        return v2 >> 31;
    }
    return v2 >> 31;
}

extern char got.System_Stream_Flag;
extern char got.inRdbfr;
extern char got.ld_Bfr;
extern char got.ld_Incnt;
extern char got.ld_Rdbfr;
extern char got.ld_Rdmax;
extern char got.ld_Rdptr;

long long Get_Bits(unsigned int a0)
{
    unsigned int v0;  // [bp-0x40]
    unsigned int v1;  // [bp-0x3c]
    unsigned long v2;  // [bp-0x38]
    unsigned long v4;  // rdi
    unsigned int v5;  // r13d
    unsigned int v6;  // ecx
    unsigned int v7;  // cc_dep1
    unsigned long long v8;  // r15
    unsigned long long v9;  // rax
    unsigned long long v11;  // rcx
    void* v12;  // rax
    unsigned int v13;  // cc_dep1
    unsigned long long v14;  // rax

    v5 = v0 << ((char)v4 & 31);
    *((unsigned int *)got.ld_Bfr) = v0 << ((char)v4 & 31);
    v8 = *((int *)got.ld_Incnt) - (unsigned int)v4;
    *((unsigned int *)got.ld_Incnt) = *((int *)got.ld_Incnt) - (unsigned int)v4;
    if ((unsigned int)v8 <= 24)
    {
        v0 = *((int *)got.ld_Bfr);
        v12 = *((long long *)got.ld_Rdptr);
        if (*((long long *)got.ld_Rdptr) < 2044 + got.ld_Rdbfr)
        {
            do
            {
                *((void* *)got.ld_Rdptr) = v12 + 1;
                v5 |= (unsigned int)(*((char *)v12) << (24 - (char)v8 & 31));
                *((unsigned int *)got.ld_Bfr) = v5;
                v6 = (unsigned int)v8 + 8;
                v12 += 1;
                v7 = v8;
                v8 += 8;
            }
            while (v7 < 17);
            *((int *)got.ld_Incnt) = ecx<4>;
            v9 = v0;
            v14 = v9 >> (0 - (char)v4 & 31);
            return v14;
        }
        v2 = *((long long *)got.ld_Rdmax);
        v1 = *((int *)got.System_Stream_Flag);
        do
        {
            if (v12 >= got.ld_Rdbfr + 0x800)
            {
                memcpy(got.ld_Rdbfr, got.inRdbfr, 0x800);
                *((long long *)got.ld_Rdptr) = got.ld_Rdbfr;
                if (v1 != 0)
                {
                    v11 = v2 - 0x800;
                    v2 -= 0x800;
                    *((unsigned long long *)got.ld_Rdmax) = v11;
                }
                v12 = got.ld_Rdbfr;
            }
            *((void* *)got.ld_Rdptr) = v12 + 1;
            v5 |= (unsigned int)(*((char *)v12) << (24 - (char)v8 & 31));
            *((unsigned int *)got.ld_Bfr) = v5;
            *((unsigned int *)&v11) = (unsigned int)v8 + 8;
            v12 += 1;
            v13 = v8;
            v8 += 8;
        }
        while (v13 < 17);
        *((int *)got.ld_Incnt) = ecx<4>;
        v9 = v0;
        v14 = v9 >> (0 - (char)v4 & 31);
        return rax<8>;
    }
    return v0 >> (0 - (char)v4 & 31);
}

extern char got.System_Stream_Flag;
extern char got.inRdbfr;
extern char got.ld_Bfr;
extern char got.ld_Incnt;
extern char got.ld_Rdbfr;
extern char got.ld_Rdmax;
extern char got.ld_Rdptr;

long long Flush_Buffer(unsigned int a0)
{
    unsigned int v0;  // [bp-0x3c]
    unsigned long v1;  // [bp-0x38]
    unsigned long v3;  // rdi
    unsigned long long v4;  // r13
    unsigned int v5;  // ecx
    unsigned int v6;  // cc_dep1
    void* v7;  // rax
    unsigned int v8;  // edx
    unsigned long long v10;  // rcx
    unsigned int v11;  // r14d
    unsigned int v12;  // cc_dep1

    *((unsigned int *)got.ld_Bfr) = *((int *)got.ld_Bfr) << ((char)v3 & 31);
    v4 = *((int *)got.ld_Incnt) - (unsigned int)v3;
    *((unsigned int *)got.ld_Incnt) = *((int *)got.ld_Incnt) - (unsigned int)v3;
    if ((unsigned int)v4 <= 24)
    {
        v7 = *((long long *)got.ld_Rdptr);
        if (*((long long *)got.ld_Rdptr) < 2044 + got.ld_Rdbfr)
        {
            v8 = *((int *)got.ld_Bfr);
            do
            {
                *((void* *)got.ld_Rdptr) = v7 + 1;
                v8 |= (unsigned int)(*((char *)v7) << (24 - (char)v4 & 31));
                *((unsigned int *)got.ld_Bfr) = v8;
                v5 = (unsigned int)v4 + 8;
                v7 += 1;
                v6 = v4;
                v4 += 8;
            }
            while (v6 < 17);
            *((int *)got.ld_Incnt) = ecx<4>;
            return got.ld_Incnt;
        }
        v1 = *((long long *)got.ld_Rdmax);
        v11 = *((int *)got.ld_Bfr);
        v0 = *((int *)got.System_Stream_Flag);
        do
        {
            if (v7 >= got.ld_Rdbfr + 0x800)
            {
                memcpy(got.ld_Rdbfr, got.inRdbfr, 0x800);
                *((long long *)got.ld_Rdptr) = got.ld_Rdbfr;
                if (v0 != 0)
                {
                    v10 = v1 - 0x800;
                    v1 -= 0x800;
                    *((unsigned long long *)got.ld_Rdmax) = v10;
                }
                v7 = got.ld_Rdbfr;
            }
            *((void* *)got.ld_Rdptr) = v7 + 1;
            v11 |= (unsigned int)(*((char *)v7) << (24 - (char)v4 & 31));
            *((unsigned int *)got.ld_Bfr) = v11;
            *((unsigned int *)&v10) = (unsigned int)v4 + 8;
            v7 += 1;
            v12 = v4;
            v4 += 8;
        }
        while (v12 < 17);
        *((int *)got.ld_Incnt) = ecx<4>;
        return got.ld_Incnt;
    }
    return got.ld_Incnt;
}

extern char g_800000;
extern char got.MVtab0;
extern char got.MVtab1;
extern char got.MVtab2;
extern char got.System_Stream_Flag;
extern char got.inRdbfr;
extern char got.ld_Bfr;
extern char got.ld_Incnt;
extern char got.ld_Rdbfr;
extern char got.ld_Rdmax;
extern char got.ld_Rdptr;

int Get_motion_code(unsigned long a0, unsigned long a1, unsigned long a2, unsigned int a3)
{
    unsigned int v0;  // [bp-0x48], Other Possible Types: unsigned long
    unsigned long long v1;  // [bp-0x40], Other Possible Types: unsigned int
    unsigned long long v2;  // [bp-0x38]
    void* v4;  // rsi
    unsigned long long v5;  // rcx
    unsigned long long v6;  // rax
    unsigned long long v7;  // rax
    unsigned int v8;  // cc_dep1
    unsigned long long v9;  // r15
    unsigned int v10;  // ebp
    unsigned long long v12;  // r12
    unsigned int v13;  // cc_dep1
    unsigned long long v14;  // r13
    unsigned long long v15;  // r13
    unsigned long long v16;  // rax
    unsigned int v17;  // cc_dep1
    unsigned int v18;  // cc_dep1
    unsigned int v20;  // cc_dep1
    unsigned int v21;  // ebp
    unsigned long long v22;  // r15
    unsigned long long v23;  // r12
    unsigned long long v24;  // rax
    unsigned int v25;  // cc_dep1
    unsigned long long v26;  // r15
    unsigned long long v28;  // r12
    unsigned long long v29;  // rax
    unsigned int v30;  // cc_dep1
    unsigned long long v31;  // r15
    unsigned long long v32;  // rcx
    void* v33;  // rdx
    void* v34;  // rdi, Other Possible Types: unsigned long long
    unsigned int v36;  // cc_dep1
    unsigned long long v37;  // rdi, Other Possible Types: char *
    void* v38;  // r8, Other Possible Types: char *
    unsigned long long v39;  // r8
    void* v40;  // rax, Other Possible Types: unsigned long long
    unsigned long long v41;  // rbp
    unsigned long long v42;  // r9
    unsigned long long v43;  // rax, Other Possible Types: void*
    unsigned long long v44;  // rbp
    unsigned long long v45;  // r9
    unsigned long long v46;  // r13
    unsigned int v47;  // cc_dep1
    unsigned long long v48;  // r12
    unsigned int v49;  // cc_dep1
    unsigned int v51;  // cc_dep1
    unsigned long long v52;  // r12
    unsigned int v53;  // cc_dep1
    unsigned int v55;  // cc_dep1
    unsigned long long v56;  // r8
    unsigned int v58;  // cc_dep1
    unsigned long long v59;  // r9

    v4 = got.ld_Bfr;
    v5 = *((int *)got.ld_Bfr);
    v10 = (unsigned int)v5 * 2;
    *((unsigned int *)got.ld_Bfr) = (unsigned int)v5 * 2;
    v33 = got.ld_Incnt;
    v6 = *((int *)got.ld_Incnt);
    v9 = v6 - 1;
    *((unsigned int *)got.ld_Incnt) = (unsigned int)v6 - 1;
    if ((unsigned int)v6 <= 25)
    {
        v1 = v5;
        v7 = *((long long *)got.ld_Rdptr);
        if (*((long long *)got.ld_Rdptr) < 2044 + got.ld_Rdbfr)
        {
            do
            {
                *((unsigned long long *)got.ld_Rdptr) = v7 + 1;
                v10 |= (unsigned int)(*((char *)v7) << (24 - (char)v9 & 31));
                *((unsigned int *)got.ld_Bfr) = v10;
                *((unsigned int *)&v5) = (unsigned int)v9 + 8;
                v7 += 1;
                v8 = v9;
                v9 += 8;
            }
            while (v8 < 17);
        }
        else
        {
            v12 = *((long long *)got.ld_Rdmax);
            v0 = *((int *)got.System_Stream_Flag);
            v5 = 0x800;
            do
            {
                if (v7 >= got.ld_Rdbfr + 0x800)
                {
                    memcpy(got.ld_Rdbfr, got.inRdbfr, 0x800);
                    *((long long *)got.ld_Rdptr) = got.ld_Rdbfr;
                    if (v0 != 0)
                    {
                        v12 -= 0x800;
                        *((unsigned long long *)got.ld_Rdmax) = v12;
                    }
                    v7 = got.ld_Rdbfr;
                    v4 = got.ld_Bfr;
                }
                *((unsigned long long *)got.ld_Rdptr) = v7 + 1;
                v10 |= (unsigned int)(*((char *)v7) << (24 - (char)v9 & 31));
                *((unsigned int *)v4) = v10;
                *((unsigned int *)&v5) = (unsigned int)v9 + 8;
                v7 += 1;
                v13 = v9;
                v9 += 8;
            }
            while (v13 < 17);
        }
        v33 = got.ld_Incnt;
        *((unsigned int *)got.ld_Incnt) = v5;
        *((unsigned int *)&v5) = v1;
    }
    if ((unsigned int)v5 >= 0)
    {
        v14 = *((int *)v4);
        if (*((int *)v4) >= 0x20000000)
        {
            v15 = *((int *)v4) >> 29;
            v34 = got.MVtab0;
            v32 = *((char *)(got.MVtab0 + (*((int *)v4) >> 29) * 2 + 1));
            v21 = *((int *)v4) << ((char)v32 & 31);
            *((unsigned int *)v4) = *((int *)v4) << ((char)v32 & 31);
            v22 = *((int *)v33) - (unsigned int)v32;
            *((unsigned int *)v33) = *((int *)v33) - (unsigned int)v32;
            if ((unsigned int)v22 <= 24)
            {
                v16 = *((long long *)got.ld_Rdptr);
                if (*((long long *)got.ld_Rdptr) < 2044 + got.ld_Rdbfr)
                {
                    do
                    {
                        *((unsigned long long *)got.ld_Rdptr) = v16 + 1;
                        v21 |= (unsigned int)(*((char *)v16) << (24 - (char)v22 & 31));
                        *((unsigned int *)v4) = v21;
                        *((unsigned int *)&v32) = (unsigned int)v22 + 8;
                        v16 += 1;
                        v17 = v22;
                        v22 += 8;
                    }
                    while (v17 < 17);
                }
                else
                {
                    v0 = *((long long *)got.ld_Rdmax);
                    v1 = *((int *)got.System_Stream_Flag);
                    v32 = 0x800;
                    do
                    {
                        if (v16 >= got.ld_Rdbfr + 0x800)
                        {
                            memcpy(got.ld_Rdbfr, got.inRdbfr, 0x800);
                            *((long long *)got.ld_Rdptr) = got.ld_Rdbfr;
                            if (v1 != 0)
                            {
                                v32 = v0 - 0x800;
                                v0 -= 0x800;
                                *((unsigned long long *)got.ld_Rdmax) = v32;
                            }
                            v16 = got.ld_Rdbfr;
                            v4 = got.ld_Bfr;
                        }
                        *((unsigned long long *)got.ld_Rdptr) = v16 + 1;
                        v21 |= (unsigned int)(*((char *)v16) << (24 - (char)v22 & 31));
                        *((unsigned int *)v4) = v21;
                        *((unsigned int *)&v32) = (unsigned int)v22 + 8;
                        v16 += 1;
                        v20 = v22;
                        v22 += 8;
                    }
                    while (v20 < 17);
                }
                v33 = got.ld_Incnt;
                *((unsigned int *)got.ld_Incnt) = v32;
                v34 = got.MVtab0;
            }
            v39 = *((int *)v4);
            *((unsigned int *)&v22) = (unsigned int)v39 * 2;
            *((unsigned int *)v4) = (unsigned int)v39 * 2;
            v40 = *((int *)v33);
            v41 = v40 - 1;
            *((unsigned int *)v33) = (unsigned int)v40 - 1;
            if ((unsigned int)v40 <= 25)
            {
                v40 = *((long long *)got.ld_Rdptr);
                v2 = v39;
                if (*((long long *)got.ld_Rdptr) < 2044 + got.ld_Rdbfr)
                {
                    do
                    {
                        *((void* *)got.ld_Rdptr) = v40 + 1;
                        *((unsigned int *)&v22) = (unsigned int)v22 | (unsigned int)(*((char *)v40) << (24 - (char)v41 & 31));
                        *((unsigned int *)v4) = v22;
                        *((unsigned int *)&v32) = (unsigned int)v41 + 8;
                        v40 += 1;
                        v47 = v41;
                        v41 += 8;
                    }
                    while (v47 < 17);
                }
                else
                {
                    v0 = *((long long *)got.ld_Rdmax);
                    v1 = *((int *)got.System_Stream_Flag);
                    v32 = 0x800;
                    do
                    {
                        if (v40 >= got.ld_Rdbfr + 0x800)
                        {
                            memcpy(got.ld_Rdbfr, got.inRdbfr, 0x800);
                            *((long long *)got.ld_Rdptr) = got.ld_Rdbfr;
                            if (v1 != 0)
                            {
                                v32 = v0 - 0x800;
                                v0 -= 0x800;
                                *((unsigned long long *)got.ld_Rdmax) = v32;
                            }
                            v40 = got.ld_Rdbfr;
                            v4 = got.ld_Bfr;
                        }
                        *((void* *)got.ld_Rdptr) = v40 + 1;
                        *((unsigned int *)&v22) = (unsigned int)v22 | (unsigned int)(*((char *)v40) << (24 - (char)v41 & 31));
                        *((unsigned int *)v4) = v22;
                        *((unsigned int *)&v32) = (unsigned int)v41 + 8;
                        v40 += 1;
                        v51 = v41;
                        v41 += 8;
                    }
                    while (v51 < 17);
                }
                *((unsigned int *)got.ld_Incnt) = v32;
                v34 = got.MVtab0;
                v56 = v2;
            }
            *((unsigned int *)&v32) = *((char *)(v34 + v15 * 2));
            *((unsigned int *)&v40) = 0 - *((char *)(v34 + v15 * 2));
            *((unsigned int *)&v40) = ((char)[D] amd64g_calculate_condition(0x9<64>, 0x13<64>, r8<8>, 0x0<64>, cc_ndep<8>)? (unsigned int)v5 : rax<8>);
            return eax<4>;
        }
        if (*((int *)v4) >= 0xc000000)
        {
            v37 = v14 / 0x4000000;
            v38 = got.MVtab1;
            *((unsigned int *)&v5) = *((char *)(got.MVtab1 + v14 / 0x4000000 * 2 + 1));
            *((unsigned int *)&v14) = v14 << (*((char *)(got.MVtab1 + v14 / 0x4000000 * 2 + 1)) & 31);
            *((unsigned int *)v4) = v14;
            v31 = *((int *)v33) - (unsigned int)v5;
            *((unsigned int *)v33) = *((int *)v33) - (unsigned int)v5;
            v1 = v37;
            if ((unsigned int)v31 <= 24)
            {
                v29 = *((long long *)got.ld_Rdptr);
                if (*((long long *)got.ld_Rdptr) < 2044 + got.ld_Rdbfr)
                {
                    do
                    {
                        *((unsigned long long *)got.ld_Rdptr) = v29 + 1;
                        *((unsigned int *)&v14) = (unsigned int)v14 | (unsigned int)(*((char *)v29) << (24 - (char)v31 & 31));
                        *((unsigned int *)v4) = v14;
                        *((unsigned int *)&v5) = (unsigned int)v31 + 8;
                        v29 += 1;
                        v18 = v31;
                        v31 += 8;
                    }
                    while (v18 < 17);
                }
                else
                {
                    v28 = *((long long *)got.ld_Rdmax);
                    v0 = *((int *)got.System_Stream_Flag);
                    v5 = 0x800;
                    do
                    {
                        if (v29 >= got.ld_Rdbfr + 0x800)
                        {
                            memcpy(got.ld_Rdbfr, got.inRdbfr, 0x800);
                            *((long long *)got.ld_Rdptr) = got.ld_Rdbfr;
                            if (v0 != 0)
                            {
                                v28 -= 0x800;
                                *((unsigned long long *)got.ld_Rdmax) = v28;
                            }
                            v29 = got.ld_Rdbfr;
                            v4 = got.ld_Bfr;
                        }
                        *((unsigned long long *)got.ld_Rdptr) = v29 + 1;
                        *((unsigned int *)&v14) = (unsigned int)v14 | (unsigned int)(*((char *)v29) << (24 - (char)v31 & 31));
                        *((unsigned int *)v4) = v14;
                        *((unsigned int *)&v5) = (unsigned int)v31 + 8;
                        v29 += 1;
                        v30 = v31;
                        v31 += 8;
                    }
                    while (v30 < 17);
                }
                v33 = got.ld_Incnt;
                *((unsigned int *)got.ld_Incnt) = v5;
                v37 = v1;
                v38 = got.MVtab1;
            }
            v42 = *((int *)v4);
            *((unsigned int *)&v31) = (unsigned int)v42 * 2;
            *((unsigned int *)v4) = (unsigned int)v42 * 2;
            v43 = *((int *)v33);
            v44 = v43 - 1;
            *((unsigned int *)v33) = (unsigned int)v43 - 1;
            if ((unsigned int)v43 <= 25)
            {
                v43 = *((long long *)got.ld_Rdptr);
                v2 = v42;
                if (*((long long *)got.ld_Rdptr) < 2044 + got.ld_Rdbfr)
                {
                    do
                    {
                        *((unsigned long long *)got.ld_Rdptr) = v43 + 1;
                        *((unsigned int *)&v31) = (unsigned int)v31 | (unsigned int)(*((char *)v43) << (24 - (char)v44 & 31));
                        *((unsigned int *)v4) = v31;
                        *((unsigned int *)&v5) = (unsigned int)v44 + 8;
                        v43 += 1;
                        v49 = v44;
                        v44 += 8;
                    }
                    while (v49 < 17);
                }
                else
                {
                    v48 = *((long long *)got.ld_Rdmax);
                    v0 = *((int *)got.System_Stream_Flag);
                    v5 = 0x800;
                    do
                    {
                        if (v43 >= got.ld_Rdbfr + 0x800)
                        {
                            memcpy(got.ld_Rdbfr, got.inRdbfr, 0x800);
                            *((long long *)got.ld_Rdptr) = got.ld_Rdbfr;
                            if (v0 != 0)
                            {
                                v48 -= 0x800;
                                *((unsigned long long *)got.ld_Rdmax) = v48;
                            }
                            v43 = got.ld_Rdbfr;
                            v4 = got.ld_Bfr;
                        }
                        *((unsigned long long *)got.ld_Rdptr) = v43 + 1;
                        *((unsigned int *)&v31) = (unsigned int)v31 | (unsigned int)(*((char *)v43) << (24 - (char)v44 & 31));
                        *((unsigned int *)v4) = v31;
                        *((unsigned int *)&v5) = (unsigned int)v44 + 8;
                        v43 += 1;
                        v55 = v44;
                        v44 += 8;
                    }
                    while (v55 < 17);
                }
                *((unsigned int *)got.ld_Incnt) = v5;
                v37 = v1;
                v38 = got.MVtab1;
            }
        }
        else if (*((int *)v4) >= 0x6000000)
        {
            v37 = (unsigned int)v14 / &g_800000 - 12;
            v38 = got.MVtab2;
            *((unsigned int *)&v5) = *((char *)(got.MVtab2 + ((unsigned int)v14 / &g_800000 - 12) * 2 + 1));
            *((unsigned int *)&v14) = v14 << (*((char *)(got.MVtab2 + ((unsigned int)v14 / &g_800000 - 12) * 2 + 1)) & 31);
            *((unsigned int *)v4) = v14;
            v26 = *((int *)v33) - (unsigned int)v5;
            *((unsigned int *)v33) = *((int *)v33) - (unsigned int)v5;
            v1 = v37;
            if ((unsigned int)v26 <= 24)
            {
                v24 = *((long long *)got.ld_Rdptr);
                if (*((long long *)got.ld_Rdptr) < 2044 + got.ld_Rdbfr)
                {
                    do
                    {
                        *((unsigned long long *)got.ld_Rdptr) = v24 + 1;
                        *((unsigned int *)&v14) = (unsigned int)v14 | (unsigned int)(*((char *)v24) << (24 - (char)v26 & 31));
                        *((unsigned int *)v4) = v14;
                        *((unsigned int *)&v5) = (unsigned int)v26 + 8;
                        v24 += 1;
                        v25 = v26;
                        v26 += 8;
                    }
                    while (v25 < 17);
                }
                else
                {
                    v23 = *((long long *)got.ld_Rdmax);
                    v0 = *((int *)got.System_Stream_Flag);
                    v5 = 0x800;
                    do
                    {
                        if (v24 >= got.ld_Rdbfr + 0x800)
                        {
                            memcpy(got.ld_Rdbfr, got.inRdbfr, 0x800);
                            *((long long *)got.ld_Rdptr) = got.ld_Rdbfr;
                            if (v0 != 0)
                            {
                                v23 -= 0x800;
                                *((unsigned long long *)got.ld_Rdmax) = v23;
                            }
                            v24 = got.ld_Rdbfr;
                            v4 = got.ld_Bfr;
                        }
                        *((unsigned long long *)got.ld_Rdptr) = v24 + 1;
                        *((unsigned int *)&v14) = (unsigned int)v14 | (unsigned int)(*((char *)v24) << (24 - (char)v26 & 31));
                        *((unsigned int *)v4) = v14;
                        *((unsigned int *)&v5) = (unsigned int)v26 + 8;
                        v24 += 1;
                        v36 = v26;
                        v26 += 8;
                    }
                    while (v36 < 17);
                }
                v33 = got.ld_Incnt;
                *((unsigned int *)got.ld_Incnt) = v5;
                v37 = v1;
                v38 = got.MVtab2;
            }
            v45 = *((int *)v4);
            *((unsigned int *)&v26) = (unsigned int)v45 * 2;
            *((unsigned int *)v4) = (unsigned int)v45 * 2;
            v43 = *((int *)v33);
            v46 = v43 - 1;
            *((unsigned int *)v33) = (unsigned int)v43 - 1;
            if ((unsigned int)v43 <= 25)
            {
                v2 = v45;
                v43 = *((long long *)got.ld_Rdptr);
                if (*((long long *)got.ld_Rdptr) < 2044 + got.ld_Rdbfr)
                {
                    do
                    {
                        *((void* *)got.ld_Rdptr) = v43 + 1;
                        *((unsigned int *)&v26) = (unsigned int)v26 | (unsigned int)(*((char *)v43) << (24 - (char)v46 & 31));
                        *((unsigned int *)v4) = v26;
                        *((unsigned int *)&v5) = (unsigned int)v46 + 8;
                        v43 += 1;
                        v53 = v46;
                        v46 += 8;
                    }
                    while (v53 < 17);
                }
                else
                {
                    v52 = *((long long *)got.ld_Rdmax);
                    v0 = *((int *)got.System_Stream_Flag);
                    v5 = 0x800;
                    do
                    {
                        if (v43 >= got.ld_Rdbfr + 0x800)
                        {
                            memcpy(got.ld_Rdbfr, got.inRdbfr, 0x800);
                            *((long long *)got.ld_Rdptr) = got.ld_Rdbfr;
                            if (v0 != 0)
                            {
                                v52 -= 0x800;
                                *((unsigned long long *)got.ld_Rdmax) = v52;
                            }
                            v43 = got.ld_Rdbfr;
                            v4 = got.ld_Bfr;
                        }
                        *((void* *)got.ld_Rdptr) = v43 + 1;
                        *((unsigned int *)&v26) = (unsigned int)v26 | (unsigned int)(*((char *)v43) << (24 - (char)v46 & 31));
                        *((unsigned int *)v4) = v26;
                        *((unsigned int *)&v5) = (unsigned int)v46 + 8;
                        v43 += 1;
                        v58 = v46;
                        v46 += 8;
                    }
                    while (v58 < 17);
                }
                *((unsigned int *)got.ld_Incnt) = v5;
                v37 = v1;
                v38 = got.MVtab2;
            }
        }
        else
        {
            return 0;
        }
        if (*((int *)v4) >= 0xc000000 || *((int *)v4) >= 0x6000000)
        {
            if (((unsigned int)v43 <= 25 || *((int *)v4) < 0xc000000) && ((unsigned int)v43 <= 25 || *((int *)v4) >= 0xc000000))
            {
                v59 = v2;
            }
            *((unsigned int *)&v5) = *(v38 + 0x2 * v37);
            *((unsigned int *)&v43) = 0 - *(v38 + 0x2 * v37);
            *((unsigned int *)&v40) = ((char)[D] amd64g_calculate_condition(0x9<64>, 0x13<64>, r9<8>, 0x0<64>, cc_ndep<8>)? (unsigned int)v5 : rax<8>);
            return eax<4>;
        }
    }
    else
    {
        return 0;
    }
}

extern char got.System_Stream_Flag;
extern char got.inRdbfr;
extern char got.ld_Bfr;
extern char got.ld_Incnt;
extern char got.ld_Rdbfr;
extern char got.ld_Rdmax;
extern char got.ld_Rdptr;

int Get_dmvector()
{
    unsigned int v0;  // [bp-0x3c]
    unsigned long v1;  // [bp-0x38]
    void* v3;  // rsi
    unsigned long v4;  // rdx
    void* v5;  // rcx
    unsigned long long v6;  // rax
    unsigned int v7;  // cc_dep1
    unsigned long long v8;  // r13
    void* v9;  // rax
    unsigned int v10;  // ebp
    unsigned long long v11;  // r14
    unsigned int v13;  // cc_dep1
    unsigned int v14;  // ebp
    unsigned long long v15;  // rdx
    unsigned long long v16;  // r13
    void* v17;  // rax
    unsigned int v18;  // cc_dep1
    unsigned long long v19;  // r14
    unsigned int v21;  // cc_dep1

    v3 = got.ld_Bfr;
    v4 = *((int *)got.ld_Bfr);
    v10 = (unsigned int)v4 * 2;
    *((unsigned int *)got.ld_Bfr) = (unsigned int)v4 * 2;
    v5 = got.ld_Incnt;
    v6 = *((int *)got.ld_Incnt);
    v8 = v6 - 1;
    *((unsigned int *)got.ld_Incnt) = (unsigned int)v6 - 1;
    if ((unsigned int)v6 <= 25)
    {
        v1 = v4;
        v9 = *((long long *)got.ld_Rdptr);
        if (*((long long *)got.ld_Rdptr) < 2044 + got.ld_Rdbfr)
        {
            do
            {
                *((void* *)got.ld_Rdptr) = v9 + 1;
                v10 |= (unsigned int)(*((char *)v9) << (24 - (char)v8 & 31));
                *((unsigned int *)got.ld_Bfr) = v10;
                *((unsigned int *)&v5) = (unsigned int)v8 + 8;
                v9 += 1;
                v7 = v8;
                v8 += 8;
            }
            while (v7 < 17);
        }
        else
        {
            v11 = *((long long *)got.ld_Rdmax);
            v0 = *((int *)got.System_Stream_Flag);
            do
            {
                if (v9 >= got.ld_Rdbfr + 0x800)
                {
                    memcpy(got.ld_Rdbfr, got.inRdbfr, 0x800);
                    *((long long *)got.ld_Rdptr) = got.ld_Rdbfr;
                    if (v0 != 0)
                    {
                        v11 -= 0x800;
                        *((unsigned long long *)got.ld_Rdmax) = v11;
                    }
                    v9 = got.ld_Rdbfr;
                    v3 = got.ld_Bfr;
                }
                *((void* *)got.ld_Rdptr) = v9 + 1;
                v10 |= (unsigned int)(*((char *)v9) << (24 - (char)v8 & 31));
                *((unsigned int *)v3) = v10;
                *((unsigned int *)&v5) = (unsigned int)v8 + 8;
                v9 += 1;
                v13 = v8;
                v8 += 8;
            }
            while (v13 < 17);
        }
        *((unsigned int *)got.ld_Incnt) = (unsigned int)v5;
        v5 = got.ld_Incnt;
        *((unsigned int *)&v4) = v1;
    }
    if ((unsigned int)v4 < 0)
    {
        v14 = v1 * 2;
        *((unsigned int *)v3) = v1 * 2;
        v15 = *((int *)v5);
        v16 = v15 - 1;
        *((unsigned int *)v5) = (unsigned int)v15 - 1;
        if ((unsigned int)v15 <= 25)
        {
            v1 = *((int *)v3);
            v17 = *((long long *)got.ld_Rdptr);
            if (*((long long *)got.ld_Rdptr) < 2044 + got.ld_Rdbfr)
            {
                do
                {
                    *((void* *)got.ld_Rdptr) = v17 + 1;
                    v14 |= (unsigned int)(*((char *)v17) << (24 - (char)v16 & 31));
                    *((unsigned int *)v3) = v14;
                    *((unsigned int *)&v5) = (unsigned int)v16 + 8;
                    v17 += 1;
                    v18 = v16;
                    v16 += 8;
                }
                while (v18 < 17);
            }
            else
            {
                v19 = *((long long *)got.ld_Rdmax);
                v0 = *((int *)got.System_Stream_Flag);
                do
                {
                    if (v17 >= got.ld_Rdbfr + 0x800)
                    {
                        memcpy(got.ld_Rdbfr, got.inRdbfr, 0x800);
                        *((long long *)got.ld_Rdptr) = got.ld_Rdbfr;
                        if (v0 != 0)
                        {
                            v19 -= 0x800;
                            *((unsigned long long *)got.ld_Rdmax) = v19;
                        }
                        v17 = got.ld_Rdbfr;
                        v3 = got.ld_Bfr;
                    }
                    *((void* *)got.ld_Rdptr) = v17 + 1;
                    v14 |= (unsigned int)(*((char *)v17) << (24 - (char)v16 & 31));
                    *((unsigned int *)v3) = v14;
                    *((unsigned int *)&v5) = (unsigned int)v16 + 8;
                    v17 += 1;
                    v21 = v16;
                    v16 += 8;
                }
                while (v21 < 17);
            }
            *((unsigned int *)got.ld_Incnt) = (unsigned int)v5;
            return (unsigned int)(v1 >> 31) | 1;
        }
        return (unsigned int)(v1 >> 31) | 1;
    }
    return 0;
}

extern char got.System_Stream_Flag;
extern char got.inRdbfr;
extern char got.ld_Bfr;
extern char got.ld_Incnt;
extern char got.ld_Rdbfr;
extern char got.ld_Rdmax;
extern char got.ld_Rdptr;

long long motion_vectors(unsigned long a0, unsigned long long a1, unsigned long a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int v10, unsigned int a6, unsigned int a7, unsigned int a8)
{
    unsigned int v0;  // [bp-0x78]
    unsigned long v1;  // [bp-0x68], Other Possible Types: unsigned int
    unsigned int v2;  // [bp-0x60], Other Possible Types: unsigned long
    unsigned int v3;  // [bp-0x58], Other Possible Types: unsigned long long, void*
    void* v4;  // [bp-0x50]
    unsigned long long v5;  // [bp-0x48]
    void* v6;  // [bp-0x40]
    unsigned long long v7;  // [bp-0x38]
    char v8;  // [bp-0x10]
    char v9;  // [bp+0x0]
    void* v11;  // rcx, Other Possible Types: unsigned long long
    void* v12;  // r11
    unsigned long long v13;  // rbp
    unsigned long long v14;  // rdx
    void* v15;  // rbx
    unsigned long long v16;  // rax
    unsigned long long v17;  // r14
    void* v18;  // rax
    unsigned long long v19;  // rax
    unsigned long long v20;  // r14
    void* v21;  // rbx
    unsigned int v23;  // r12d
    unsigned int v24;  // cc_dep1
    unsigned long long v25;  // r15
    void* v26;  // rax
    unsigned long long v27;  // rax
    void* v29;  // rdi
    unsigned int v30;  // cc_dep1
    unsigned int v31;  // cc_dep1
    unsigned long long v32;  // r8
    unsigned int v34;  // cc_dep1
    void* v35;  // r12
    unsigned long long v37;  // rdi
    unsigned int v38;  // r9d
    void* v39;  // rdi
    unsigned long long v40;  // rdx
    unsigned long long v41;  // rax
    void* v42;  // r8
    unsigned long long v43;  // r13
    void* v44;  // r10
    void* v45;  // r13
    void* v46;  // rax
    unsigned long long v47;  // rdi
    unsigned int v49;  // cc_dep1
    unsigned long long v50;  // r15
    unsigned int v52;  // cc_dep1

    v12 = v11;
    v44 = a2;
    v45 = a0;
    v25 = a8;
    v13 = a7;
    *((unsigned int *)&v11) = a6;
    v14 = v10;
    if (a4 == 1)
    {
        if (a5 == 0 && a7 == 0)
        {
            v37 = *((int *)*((long long *)&got.ld_Bfr));
            *((unsigned int *)&v13) = (unsigned int)v37 * 2;
            *((unsigned int *)*((long long *)&got.ld_Bfr)) = (unsigned int)v37 * 2;
            v19 = *((int *)*((long long *)&got.ld_Incnt));
            v20 = v19 - 1;
            *((unsigned int *)*((long long *)&got.ld_Incnt)) = (unsigned int)v19 - 1;
            if ((unsigned int)v19 <= 25)
            {
                v26 = *((long long *)*((long long *)&got.ld_Rdptr));
                v6 = v45;
                v5 = a1;
                v4 = v44;
                v2 = (unsigned int)v12;
                v7 = v37;
                if (*((long long *)*((long long *)&got.ld_Rdptr)) < 2044 + *((long long *)&got.ld_Rdbfr))
                {
                    do
                    {
                        *((void* *)*((long long *)&got.ld_Rdptr)) = v26 + 1;
                        *((unsigned int *)&v13) = (unsigned int)v13 | (unsigned int)(*((char *)v26) << (24 - (char)v20 & 31));
                        *((unsigned int *)*((long long *)&got.ld_Bfr)) = v13;
                        *((unsigned int *)&v11) = (unsigned int)v20 + 8;
                        v26 += 1;
                        v31 = v20;
                        v20 += 8;
                    }
                    while (v31 < 17);
                }
                else
                {
                    v1 = *((long long *)*((long long *)&got.ld_Rdmax));
                    v3 = *((int *)*((long long *)&got.System_Stream_Flag));
                    do
                    {
                        if (v26 >= *((long long *)&got.ld_Rdbfr) + 0x800)
                        {
                            memcpy(*((long long *)&got.ld_Rdbfr), *((long long *)&got.inRdbfr), 0x800);
                            *((long long *)*((long long *)&got.ld_Rdptr)) = *((long long *)&got.ld_Rdbfr);
                            if (v3 != 0)
                            {
                                v11 = v1 - 0x800;
                                v1 -= 0x800;
                                *((unsigned long long *)*((long long *)&got.ld_Rdmax)) = v11;
                            }
                            v26 = *((long long *)&got.ld_Rdbfr);
                        }
                        *((void* *)*((long long *)&got.ld_Rdptr)) = v26 + 1;
                        *((unsigned int *)&v13) = (unsigned int)v13 | (unsigned int)(*((char *)v26) << (24 - (char)v20 & 31));
                        *((unsigned int *)*((long long *)&got.ld_Bfr)) = v13;
                        *((unsigned int *)&v11) = (unsigned int)v20 + 8;
                        v26 += 1;
                        v34 = v20;
                        v20 += 8;
                    }
                    while (v34 < 17);
                }
                *((unsigned int *)*((long long *)&got.ld_Incnt)) = (unsigned int)v11;
                *((unsigned int *)&v25) = a8;
                v45 = v6;
                *((unsigned int *)&v11) = a6;
                *((unsigned int *)&v14) = v10;
                v44 = v4;
                v12 = v2;
                v37 = v7;
            }
            *((unsigned int *)((char *)v44 + 0x4 * v12)) = (unsigned int)v37 / 0x80000000;
            *((unsigned int *)&((char *)v44 + 0x4 * v12)[8]) = (unsigned int)v37 / 0x80000000;
            v21 = v12;
            v0 = 0;
            motion_vector(v12 * 8 + v45, v5, v14, (unsigned int)v11, a7, v25, v0);
            v27 = *((long long *)((char *)v45 + 0x8 * v21));
            *((long long *)&((char *)v45 + 0x8 * v21)[16]) = *((long long *)((char *)v45 + 0x8 * v21));
            return rax<8>;
        }
        v21 = v12;
        v0 = 0;
        motion_vector(v12 * 8 + v45, a1, v10, a6, a7, a8, v0);
        v27 = *((long long *)((char *)v45 + 0x8 * v21));
        *((long long *)&((char *)v45 + 0x8 * v21)[16]) = *((long long *)((char *)v45 + 0x8 * v21));
        return v27;
    }
    v29 = *((long long *)&got.ld_Bfr);
    v32 = *((int *)*((long long *)&got.ld_Bfr));
    v23 = (unsigned int)v32 * 2;
    *((unsigned int *)*((long long *)&got.ld_Bfr)) = (unsigned int)v32 * 2;
    v15 = *((long long *)&got.ld_Incnt);
    v16 = *((int *)*((long long *)&got.ld_Incnt));
    v17 = v16 - 1;
    *((unsigned int *)*((long long *)&got.ld_Incnt)) = (unsigned int)v16 - 1;
    v6 = v45;
    v5 = a1;
    v4 = v44;
    if ((unsigned int)v16 <= 25)
    {
        v3 = v32;
        v2 = (unsigned int)v12;
        v18 = *((long long *)*((long long *)&got.ld_Rdptr));
        if (*((long long *)*((long long *)&got.ld_Rdptr)) < 2044 + *((long long *)&got.ld_Rdbfr))
        {
            do
            {
                *((void* *)*((long long *)&got.ld_Rdptr)) = v18 + 1;
                v23 |= (unsigned int)(*((char *)v18) << (24 - (char)v17 & 31));
                *((unsigned int *)*((long long *)&got.ld_Bfr)) = v23;
                *((unsigned int *)&v11) = (unsigned int)v17 + 8;
                v18 += 1;
                v24 = v17;
                v17 += 8;
            }
            while (v24 < 17);
        }
        else
        {
            v25 = *((long long *)*((long long *)&got.ld_Rdmax));
            v1 = *((int *)*((long long *)&got.System_Stream_Flag));
            do
            {
                if (v18 >= *((long long *)&got.ld_Rdbfr) + 0x800)
                {
                    memcpy(*((long long *)&got.ld_Rdbfr), *((long long *)&got.inRdbfr), 0x800);
                    *((long long *)*((long long *)&got.ld_Rdptr)) = *((long long *)&got.ld_Rdbfr);
                    if (v1 != 0)
                    {
                        v25 -= 0x800;
                        *((unsigned long long *)*((long long *)&got.ld_Rdmax)) = v25;
                    }
                    v18 = *((long long *)&got.ld_Rdbfr);
                    v29 = *((long long *)&got.ld_Bfr);
                }
                *((void* *)*((long long *)&got.ld_Rdptr)) = v18 + 1;
                v23 |= (unsigned int)(*((char *)v18) << (24 - (char)v17 & 31));
                *((unsigned int *)v29) = v23;
                *((unsigned int *)&v11) = (unsigned int)v17 + 8;
                v18 += 1;
                v30 = v17;
                v17 += 8;
            }
            while (v30 < 17);
        }
        v15 = *((long long *)&got.ld_Incnt);
        *((unsigned int *)*((long long *)&got.ld_Incnt)) = (unsigned int)v11;
        *((unsigned int *)&v25) = a8;
        *((unsigned int *)&v13) = a7;
        v45 = v6;
        *((unsigned int *)&v11) = a6;
        *((unsigned int *)&v14) = v10;
        v44 = v4;
        v12 = v2;
        v32 = v3;
    }
    v35 = v12;
    *((unsigned int *)((char *)v44 + 0x4 * v12)) = (unsigned int)v32 / 0x80000000;
    v0 = 0;
    *((unsigned int *)&v17) = v25;
    *((unsigned int *)&v25) = v14;
    motion_vector(v12 * 8 + v45, v5, v14, (unsigned int)v11, v13, a5, v0);
    a5 = v17;
    v39 = *((long long *)&got.ld_Bfr);
    v40 = *((int *)*((long long *)&got.ld_Bfr));
    *((unsigned int *)&v17) = *((long long *)&v2) * 2;
    *((unsigned int *)*((long long *)&got.ld_Bfr)) = *((long long *)&v2) * 2;
    v41 = *((int *)v15);
    v42 = v45;
    v43 = v41 - 1;
    *((unsigned int *)v15) = (unsigned int)v41 - 1;
    if ((unsigned int)v41 <= 25)
    {
        v2 = v40;
        v3 = v35;
        v46 = *((long long *)*((long long *)&got.ld_Rdptr));
        if (*((long long *)*((long long *)&got.ld_Rdptr)) < 2044 + *((long long *)&got.ld_Rdbfr))
        {
            do
            {
                *((void* *)*((long long *)&got.ld_Rdptr)) = v46 + 1;
                *((unsigned int *)&v17) = (unsigned int)v17 | (unsigned int)(*((char *)v46) << (24 - (char)v43 & 31));
                *((unsigned int *)*((long long *)&got.ld_Bfr)) = v17;
                *((unsigned int *)&v11) = (unsigned int)v43 + 8;
                v46 += 1;
                v49 = v43;
                v43 += 8;
            }
            while (v49 < 17);
        }
        else
        {
            v50 = *((long long *)*((long long *)&got.ld_Rdmax));
            v1 = *((int *)*((long long *)&got.System_Stream_Flag));
            do
            {
                if (v46 >= *((long long *)&got.ld_Rdbfr) + 0x800)
                {
                    memcpy(*((long long *)&got.ld_Rdbfr), *((long long *)&got.inRdbfr), 0x800);
                    *((long long *)*((long long *)&got.ld_Rdptr)) = *((long long *)&got.ld_Rdbfr);
                    if (v1 != 0)
                    {
                        v50 -= 0x800;
                        *((unsigned long long *)*((long long *)&got.ld_Rdmax)) = v50;
                    }
                    v46 = *((long long *)&got.ld_Rdbfr);
                    v39 = *((long long *)&got.ld_Bfr);
                }
                *((void* *)*((long long *)&got.ld_Rdptr)) = v46 + 1;
                *((unsigned int *)&v17) = (unsigned int)v17 | (unsigned int)(*((char *)v46) << (24 - (char)v43 & 31));
                *((unsigned int *)v39) = v17;
                *((unsigned int *)&v11) = (unsigned int)v43 + 8;
                v46 += 1;
                v52 = v43;
                v43 += 8;
            }
            while (v52 < 17);
        }
        *((unsigned int *)*((long long *)&got.ld_Incnt)) = (unsigned int)v11;
        *((unsigned int *)&((char *)v4 + 0x4 * v3)[8]) = v2 >> 31;
        v0 = 0;
        motion_vector(v6 + v3 * 8 + 16, v5, v10, a6, a7, a8, v0);
        return motion_vector(v6 + v3 * 8 + 16, v5, v10, a6, a7, a8, v0);
    }
    *((unsigned int *)&((char *)v4 + 0x4 * v3)[8]) = v2 >> 31;
    v47 = v42 + v3 * 8 + 16;
    v0 = 0;
    motion_vector(v47, v5, v25, a6, v13, v38, v0);
    return motion_vector(v47, v5, *((long long *)&v8), a6, &v9, v38, v0);
}

extern char got.System_Stream_Flag;
extern char got.inRdbfr;
extern char got.ld_Bfr;
extern char got.ld_Incnt;
extern char got.ld_Rdbfr;
extern char got.ld_Rdmax;
extern char got.ld_Rdptr;

long long Initialize_Buffer()
{
    unsigned int v0;  // [bp-0x3c]
    int tmp_31;  // tmp #31
    int tmp_54;  // tmp #54
    unsigned long v1;  // [bp-0x38]
    void* v3;  // r14, Other Possible Types: unsigned long long
    unsigned long long v4;  // r15
    unsigned long long v6;  // rcx
    unsigned long v7;  // cc_ndep
    unsigned int v8;  // cc_dep1
    void* v9;  // rax

    *((int *)got.ld_Incnt) = 0;
    *((long long *)got.ld_Rdptr) = got.ld_Rdbfr + 0x800;
    *((long long *)got.ld_Rdmax) = got.ld_Rdbfr + 0x800;
    *((int *)got.ld_Bfr) = 0x4100000;
    v0 = *((int *)got.System_Stream_Flag);
    v3 = 0;
    v4 = 0x4100000;
    v1 = got.ld_Rdbfr + 0x800;
    v9 = got.ld_Rdbfr + 0x800;
    do
    {
        if (v9 >= got.ld_Rdbfr + 0x800)
        {
            memcpy(got.ld_Rdbfr, got.inRdbfr, 0x800);
            *((long long *)got.ld_Rdptr) = got.ld_Rdbfr;
            if (v0 != 0)
            {
                v6 = v1 - 0x800;
                v1 -= 0x800;
                *((unsigned long long *)got.ld_Rdmax) = v6;
            }
            v9 = got.ld_Rdbfr;
        }
        tmp_31 = *((char *)v9);
        v7 = [D] amd64g_calculate_rflags_c((((((0x18<8> - r14b<1>) & 0x1f<8>) != 0x0<8>)) ? (0x1f<64>) : (0x5<64>)), (((((0x18<8> - r14b<1>) & 0x1f<8>) != 0x0<8>)) ? ((Conv(8->64, Load(addr=rax<8>, size=1, endness=Iend_LE)) << ((0x18<8> - r14b<1>) & 0x1f<8>))) : (0x18<64>)), (((((0x18<8> - r14b<1>) & 0x1f<8>) != 0x0<8>)) ? ((Conv(8->64, Load(addr=rax<8>, size=1, endness=Iend_LE)) << ((((0x18<8> - r14b<1>) & 0x1f<8>) - 0x1<8>) & 0x1f<8>))) : (Conv(8->64, r14b<1>))), cc_ndep<8>);
        v9 += 1;
        *((void* *)got.ld_Rdptr) = v9;
        tmp_54 = (unsigned int)v4 | (unsigned int)(tmp_31 << (24 - (char)v3 & 31));
        v4 = (unsigned int)v4 | (unsigned int)(tmp_31 << (24 - (char)v3 & 31));
        *((unsigned int *)got.ld_Bfr) = tmp_54;
        v8 = (unsigned int)v3;
        v3 += 8;
    }
    while (v8 < 17);
    *((int *)got.ld_Incnt) = 32;
    return got.ld_Incnt;
}

typedef struct struct_0 {
    char field_0;
    char padding_1[15];
    uint128_t field_10;
} struct_0;

extern char got.System_Stream_Flag;
extern char got.endTimer;
extern char got.evalue;
extern char got.inPMV;
extern char got.inRdbfr;
extern char got.inmvfs;
extern char got.ld_Bfr;
extern char got.ld_Incnt;
extern char got.ld_Rdbfr;
extern char got.ld_Rdmax;
extern char got.ld_Rdptr;
extern char got.outPMV;
extern char got.outmvfs;
extern char got.startTimer;

long long submain()
{
    int tmp_31;  // tmp #31
    int tmp_56;  // tmp #56
    unsigned int v0;  // [bp-0x88]
    char v1;  // [bp-0x78], Other Possible Types: int
    unsigned int v2;  // [bp-0x70]
    int v3;  // [bp-0x68], Other Possible Types: unsigned long long
    int v4;  // [bp-0x58], Other Possible Types: unsigned int
    unsigned int v5;  // [bp-0x50]
    void* v6;  // [bp-0x48]
    char v7;  // [bp-0x40]
    unsigned int v8;  // [bp-0x38]
    void* v10;  // r12, Other Possible Types: unsigned long long
    unsigned long long v11;  // rax
    unsigned long long v13;  // xmm0lq
    unsigned long long v14;  // xmm1lq
    uint128_t v15;  // xmm1
    uint128_t v16;  // xmm0
    unsigned long long v17;  // xmm1
    struct_0 *v18;  // rbx
    struct_0 *v19;  // rax
    unsigned long v21;  // cc_ndep
    unsigned long long v22;  // r15
    unsigned int v23;  // cc_dep1
    void* v26;  // rbx
    unsigned long long v27;  // rdx
    void* v28;  // r8
    void* v29;  // rsi
    void* v30;  // r9
    unsigned long long v31;  // r14
    unsigned long long v32;  // rax
    void* v35;  // rax

    v10 = 0;
    (unsigned int)v11 = gettimeofday(&v1, NULL);
    if ((unsigned int)v11 != 0)
    {
        printf("Error return from gettimeofday: %d", (unsigned int)v11);
    }
    v13 = *((long long *)&v1);
    v14 = v2;
    *((unsigned long long *)&v15) = v15 * 4517329193108106637 + v16;
    *((unsigned long long *)got.startTimer) = v15;
    *((int *)got.evalue) = 0;
    *((int *)got.System_Stream_Flag) = 0;
    v6 = 0;
    *((int128_t *)&v4) = *((int128_t *)got.inmvfs);
    v17 = *((int128_t *)(got.inPMV + 16));
    *((int128_t *)&v1) = *((int128_t *)got.inPMV);
    *((int128_t *)&v3) = *((int128_t *)(got.inPMV + 16));
    *((int *)got.ld_Incnt) = 0;
    *((long long *)got.ld_Rdptr) = got.ld_Rdbfr + 0x800;
    *((long long *)got.ld_Rdmax) = got.ld_Rdbfr + 0x800;
    *((int *)got.ld_Bfr) = 0x4100000;
    v22 = 0x4100000;
    v18 = got.ld_Rdbfr;
    v19 = got.ld_Rdbfr + 0x800;
    do
    {
        if (v19 >= got.ld_Rdbfr + 0x800)
        {
            memcpy(got.ld_Rdbfr, got.inRdbfr, 0x800);
            *((struct_0 **)got.ld_Rdptr) = v18;
            v19 = v18;
        }
        tmp_31 = v19->field_0;
        v21 = [D] amd64g_calculate_rflags_c((((((0x18<8> - r12b<1>) & 0x1f<8>) != 0x0<8>)) ? (0x1f<64>) : (0x5<64>)), (((((0x18<8> - r12b<1>) & 0x1f<8>) != 0x0<8>)) ? ((Conv(8->64, Load(addr=rax<8>, size=1, endness=Iend_LE)) << ((0x18<8> - r12b<1>) & 0x1f<8>))) : (0x18<64>)), (((((0x18<8> - r12b<1>) & 0x1f<8>) != 0x0<8>)) ? ((Conv(8->64, Load(addr=rax<8>, size=1, endness=Iend_LE)) << ((((0x18<8> - r12b<1>) & 0x1f<8>) - 0x1<8>) & 0x1f<8>))) : (Conv(8->64, r12b<1>))), cc_ndep<8>);
        v19 = &v19->padding_1;
        *((struct_0 **)got.ld_Rdptr) = v19;
        tmp_56 = (unsigned int)v22 | (unsigned int)(tmp_31 << (24 - (char)v10 & 31));
        v22 = (unsigned int)v22 | (unsigned int)(tmp_31 << (24 - (char)v10 & 31));
        *((unsigned int *)got.ld_Bfr) = tmp_56;
        v23 = (unsigned int)v10;
        v10 += 8;
    }
    while (v23 < 17);
    *((unsigned int *)got.ld_Bfr) = (unsigned int)v22 * 2;
    *((int *)got.ld_Incnt) = 31;
    *((unsigned int *)&v22) = (unsigned int)v22 / 0x80000000;
    v4 = v22;
    v5 = v4;
    v0 = 0;
    motion_vector(&v1, &v6, 0xc8, 0xc8, 0x0, 0x1, v0);
    v3 = (long long)v1;
    v26 = 0;
    do
    {
        v27 = 0;
        do
        {
            v28 = 0;
            *((char *)&v28) = v4 != *((int *)((0 << 3) + got.outmvfs + (v27 << 2)));
            v26 += v28;
            v29 = 0;
            do
            {
                v30 = 0;
                *((char *)&v30) = (int)v1 != *((int *)(0 + got.outPMV + (v27 << 3) + (v29 << 2)));
                v26 += v30;
                v29 += 1;
            }
            while (v29 == 0);
            v27 = 1;
        }
        while (true);
        v31 = 1;
    }
    while (true);
    (unsigned int)v32 = gettimeofday(&v7, NULL);
    if ((unsigned int)v32 != 0)
    {
        printf("Error return from gettimeofday: %d", (unsigned int)v32);
        v17 = *((long long *)&v7);
        *((unsigned long long *)&v16) = v8;
        *((unsigned long long *)&v16) = v16 * 4517329193108106637 + v17;
        *((unsigned long long *)*((long long *)&got.endTimer)) = v16;
        printf("%0.6f\n");
        v35 = v26;
        return v35;
    }
    v17 = *((long long *)&v7);
    *((unsigned long long *)&v16) = v8;
    *((unsigned long long *)&v16) = v16 * 4517329193108106637 + v17;
    *((unsigned long long *)*((long long *)&got.endTimer)) = v16;
    printf("%0.6f\n");
    v35 = v26;
    return v35;
}

