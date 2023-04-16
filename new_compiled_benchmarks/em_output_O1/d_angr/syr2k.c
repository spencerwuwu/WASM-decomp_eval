long long kernel_syr2k(unsigned int a0, unsigned int a1, unsigned long a2, unsigned long a3, unsigned long a4)
{
    unsigned long v1;  // rdi
    void* v3;  // r10
    unsigned long v4;  // rax
    void* v5;  // rbx
    void* v6;  // r11
    uint128_t v7;  // xmm2
    int v8;  // xmm1
    unsigned long v9;  // rsi
    unsigned long long v10;  // rbx
    unsigned long long *v11;  // r14
    unsigned long long *v12;  // r15
    void* v13;  // r12
    uint128_t v14;  // xmm2
    uint128_t v15;  // xmm3
    int v16;  // xmm0
    uint128_t v17;  // xmm3
    unsigned long long v18;  // r10
    unsigned long long v19;  // r9

    if ((unsigned int)v1 > 0)
    {
        v3 = 0;
        do
        {
            v5 = 0;
            do
            {
                v6 = v3 * 9600 + a2;
                v7 = 0;
                *((unsigned long long *)&v7) = *((long long *)(v3 * 9600 + a2 + v5 * 8));
                *((unsigned long long *)&v7) = (unsigned long long)(v7 * v8);
                *((unsigned long long *)(v3 * 9600 + a2 + v5 * 8)) = v7;
                v5 += 1;
            }
            while (v5 != 1);
            if ((unsigned int)v9 > 0)
            {
                v10 = 0;
                do
                {
                    v11 = a4 + 0 * 8000 + v10 * 8;
                    v12 = 0 * 8000 + a3 + v10 * 8;
                    v13 = 0;
                    do
                    {
                        v14 = 0;
                        *((unsigned long long *)&v14) = *((long long *)(a3 + v13 * 8000 + v10 * 8));
                        v15 = 0;
                        *((unsigned long long *)&v15) = *((long long *)(v13 * 8000 + a4 + v10 * 8));
                        xmm3<16> = ((xmm3<16> * xmm0<16>) * Conv(64->128, Load(addr=r15<8>, size=8, endness=Iend_LE)))
                        xmm2lq<8> = Conv(128->64, ((((xmm2<16> * xmm0<16>) * Conv(64->128, Load(addr=r14<8>, size=8, endness=Iend_LE))) + xmm3<16>) + Conv(64->128, Load(addr=(r11<8> + (r12<8> * 0x8<64>)), size=8, endness=Iend_LE))))
                        *((unsigned long long *)((char *)v6 + 0x8 * v13)) = v14;
                        v13 += 1;
                    }
                    while (v13 != 1);
                    v10 = 1;
                }
                while (v9 != 1);
            }
            v18 = 1;
            v19 = 2;
        }
        while (v1 != 1);
        return v1;
    }
    return v4;
}

extern char .L.str.3;
extern char got.stderr;

long long submain(unsigned int a0, unsigned long long a1)
{
    unsigned long v0;  // [bp-0x38], Other Possible Types: void*
    unsigned long v2;  // rax
    void* v5;  // rbx
    void* v6;  // r14
    void* v7;  // r15
    void* v8;  // rcx
    int v9;  // xmm1
    int v10;  // xmm0
    void* v11;  // rax
    void* v12;  // rdx
    uint128_t v13;  // xmm2
    uint128_t v14;  // xmm2
    unsigned long long v15;  // rax
    void* v16;  // rax
    void* v17;  // rdx
    uint128_t v18;  // xmm1
    unsigned long long v19;  // rcx
    int v21;  // xmm0
    int v22;  // xmm1
    void* v23;  // rsi
    void* v24;  // rdx
    uint128_t v25;  // xmm2
    unsigned long long v26;  // rsi
    unsigned long long *v27;  // rdi
    unsigned long long *v28;  // r8
    void* v29;  // r9
    uint128_t v30;  // xmm2
    uint128_t v31;  // xmm3
    uint128_t v32;  // xmm3
    unsigned long long v33;  // rax
    unsigned long long v34;  // rcx
    void* v35;  // r12
    unsigned long long v37;  // rbp
    unsigned long long v40;  // r13
    void* v41;  // r12

    v0 = v2;
    v5 = polybench_alloc_data(0x15f900, 0x8);
    v6 = polybench_alloc_data(0x124f80, 0x8);
    v7 = polybench_alloc_data(0x124f80, 0x8);
    v8 = 0;
    v9 = 0;
    *((unsigned long long *)&v9) = 0x4092c00000000000;
    v10 = 0;
    *((unsigned long long *)&v10) = 0x408f400000000000;
    v11 = 0;
    do
    {
        v12 = 0;
        do
        {
            v13 = 0;
            *((unsigned long long *)&v13) = 0 - (unsigned int)((v11 * v12 + 1) / 1200) * 1200 + (unsigned int)v11 * (unsigned int)v12 + 1;
            *((unsigned long long *)&v13) = (unsigned long long)(v13 / v9);
            *((unsigned long long *)((char *)v6 + 0x1f40 * v11 + 0x8 * v12)) = v13;
            v14 = 0;
            *((unsigned long long *)&v14) = (unsigned int)v11 * (unsigned int)v12 + 0 - (unsigned int)(((unsigned int)v11 * (unsigned int)v12 + 2) * 274877907 >> 38) * 1000 + 2;
            *((unsigned long long *)&v14) = (unsigned long long)(v14 / v10);
            *((unsigned long long *)(0x1f40 * v11 + (char *)v7 + 0x8 * v12)) = v14;
            v12 += 1;
        }
        while (v12 != 1000);
        v15 = 1;
    }
    while (true);
    v16 = 0;
    do
    {
        v17 = 0;
        do
        {
            v18 = 0;
            *((unsigned long long *)&v18) = (unsigned int)v8 * (unsigned int)v17 + 3 - (unsigned int)(((unsigned int)v8 * (unsigned int)v17 + 3) * 458129845 >> 39) * 1200;
            *((unsigned long long *)&v18) = (unsigned long long)(v18 / v10);
            *((unsigned long long *)(0x2580 * v8 + (char *)v5 + 0x8 * v17)) = v18;
            v17 += 1;
        }
        while (v17 != 1200);
        v19 = 1;
    }
    while (true);
    v21 = 0;
    *((unsigned long long *)&v21) = 4608083138725491507;
    v22 = 0;
    *((unsigned long long *)&v22) = 0x3ff8000000000000;
    do
    {
        v23 = 0;
        do
        {
            v24 = v16 * 9600 + v5;
            v25 = 0;
            *((unsigned long long *)&v25) = *((long long *)(0x2580 * v16 + (char *)v5 + 0x8 * v23));
            *((unsigned long long *)&v25) = (unsigned long long)(v25 * v21);
            *((unsigned long long *)(0x2580 * v16 + (char *)v5 + 0x8 * v23)) = v25;
            v23 += 1;
        }
        while (v23 != 1);
        v26 = 0;
        do
        {
            v27 = v7 + 0 * 8000 + v26 * 8;
            v28 = 0 * 8000 + v6 + v26 * 8;
            v29 = 0;
            do
            {
                v30 = 0;
                *((unsigned long long *)&v30) = *((long long *)&((char *)v6 + 0x1f40 * v29)[8 * v26]);
                v31 = 0;
                *((unsigned long long *)&v31) = *((long long *)&(0x1f40 * v29 + (char *)v7)[8 * v26]);
                xmm3<16> = ((xmm3<16> * xmm1<16>) * Conv(64->128, Load(addr=r8<8>, size=8, endness=Iend_LE)))
                xmm2lq<8> = Conv(128->64, ((((xmm2<16> * xmm1<16>) * Conv(64->128, Load(addr=rdi<8>, size=8, endness=Iend_LE))) + xmm3<16>) + Conv(64->128, Load(addr=(rdx<8> + (r9<8> * 0x8<64>)), size=8, endness=Iend_LE))))
                *((unsigned long long *)((char *)v24 + 0x8 * v29)) = v30;
                v29 += 1;
            }
            while (v29 != 1);
            v26 = 1;
        }
        while (true);
        v33 = 1;
        v34 = 2;
    }
    while (true);
    if (a0 >= 43)
    {
        if (*((char *)*((long long *)a1)) != 0)
        {
            free(v5);
            free(v6);
            free(v7);
            return 0;
        }
        v35 = *((long long *)got.stderr);
        fwrite("==BEGIN DUMP_ARRAYS==\n", 0x16, 0x1, *((long long *)got.stderr));
        v37 = 0;
        v0 = v35;
        fprintf(v35, "begin dump: %s", &.L.str.3);
        do
        {
            v40 = v37 * 1200;
            v41 = 0;
            while (true)
            {
                if (((unsigned int)(v41 + v40) * 3435973837 >> 2 | (unsigned int)(v41 + v40) * 3435973837 << 30) <= 214748364)
                {
                    fputc(0xa, v0);
                }
                fprintf(v0, "%0.2lf ");
                v41 += 1;
                if (v41 == 1200)
                {
                    break;
                }
            }
            v37 = 1;
        }
        while (true);
        fprintf(v0, "\nend   dump: %s\n", &.L.str.3);
        fwrite("==END   DUMP_ARRAYS==\n", 0x16, 0x1, v0);
        free(v5);
        free(v6);
        free(v7);
        return 0;
    }
    free(v5);
    free(v6);
    free(v7);
    return 0;
}

