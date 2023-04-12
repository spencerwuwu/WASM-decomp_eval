extern char .L.str.3;
extern char got.stderr;

long long submain(unsigned int a0, unsigned long long a1)
{
    unsigned long v0;  // [bp-0x38], Other Possible Types: void*
    unsigned long v2;  // rax
    void* v5;  // rbx
    void* v6;  // r14
    void* v7;  // r15
    void* v8;  // rax
    int v9;  // xmm0
    void* v10;  // rcx
    uint128_t v11;  // xmm1
    void* v12;  // rdx
    unsigned long long v13;  // rcx
    void* v14;  // rcx
    int v15;  // xmm0
    void* v16;  // rdx
    unsigned long long v17;  // rsi
    uint128_t v18;  // xmm1
    unsigned long long v19;  // rax
    void* v20;  // rax
    int v21;  // xmm0
    void* v22;  // rdx
    uint128_t v23;  // xmm1
    unsigned long long v24;  // rcx
    int v25;  // xmm0
    int v26;  // xmm1
    void* v27;  // rdx
    void* v28;  // rcx
    uint128_t v29;  // xmm2
    unsigned long long v30;  // rdx
    unsigned long long *v31;  // rsi
    void* v32;  // rdi
    uint128_t v33;  // xmm2
    unsigned long long v34;  // rax
    void* v35;  // r12
    unsigned long long v37;  // rbp
    unsigned long long v40;  // r13
    void* v41;  // r12

    v0 = v2;
    v5 = polybench_alloc_data(0x10c8e0, 0x8);
    v6 = polybench_alloc_data(0x124f80, 0x8);
    v7 = polybench_alloc_data(0x142440, 0x8);
    v8 = 0;
    v9 = 0;
    *((unsigned long long *)&v9) = 0x408f400000000000;
    v10 = 0;
    do
    {
        v12 = 0;
        do
        {
            v11 = 0;
            *((unsigned long long *)&v11) = (unsigned int)v10 * (unsigned int)v12 + 1 - (unsigned int)(((unsigned int)v10 * (unsigned int)v12 + 1) * 274877907 >> 38) * 1000;
            *((unsigned long long *)&v11) = (unsigned long long)(v11 / v9);
            *((unsigned long long *)(0x2260 * v10 + (char *)v5 + 0x8 * v12)) = v11;
            v12 += 1;
        }
        while (v12 != 1100);
        v13 = 1;
    }
    while (true);
    v14 = 0;
    v15 = 0;
    *((unsigned long long *)&v15) = 0x4092c00000000000;
    do
    {
        v16 = 0;
        do
        {
            v17 = v16 + 1;
            v18 = 0;
            *((unsigned long long *)&v18) = (unsigned int)v8 * ((unsigned int)v16 + 1) - (unsigned int)((unsigned int)v8 * ((unsigned int)v16 + 1) * 458129845 >> 39) * 1200;
            *((unsigned long long *)&v18) = (unsigned long long)(v18 / v15);
            *((unsigned long long *)(0x2580 * v8 + (char *)v6 + 0x8 * v16)) = v18;
            v16 += 1;
        }
        while (v17 != 1200);
        v19 = 1;
    }
    while (true);
    v20 = 0;
    v21 = 0;
    *((unsigned long long *)&v21) = 0x4091300000000000;
    do
    {
        v22 = 0;
        do
        {
            v23 = 0;
            *((unsigned long long *)&v23) = ((unsigned int)v22 + 2) * (unsigned int)v14 - (unsigned int)((((unsigned int)v22 + 2) * (unsigned int)v14 >> 2) * 499778013 >> 37) * 1100;
            *((unsigned long long *)&v23) = (unsigned long long)(v23 / v21);
            *((unsigned long long *)(0x2260 * v14 + (char *)v7 + 0x8 * v22)) = v23;
            v22 += 1;
        }
        while (v22 != 1100);
        v24 = 1;
    }
    while (true);
    v25 = 0;
    *((unsigned long long *)&v25) = 4608083138725491507;
    v26 = 0;
    *((unsigned long long *)&v26) = 0x3ff8000000000000;
    do
    {
        v27 = 0;
        do
        {
            v28 = v20 * 8800 + v5;
            v29 = 0;
            *((unsigned long long *)&v29) = *((long long *)(0x2260 * v20 + (char *)v5 + 0x8 * v27));
            *((unsigned long long *)&v29) = (unsigned long long)(v29 * v25);
            *((unsigned long long *)(0x2260 * v20 + (char *)v5 + 0x8 * v27)) = v29;
            v27 += 1;
        }
        while (v27 != 1100);
        v30 = 0;
        do
        {
            v31 = 0 * 9600 + v6 + v30 * 8;
            v32 = 0;
            do
            {
                v33 = 0;
                *((unsigned long long *)&v33) = *(v31);
                xmm2lq<8> = Conv(128->64, (((xmm2<16> * xmm1<16>) * Conv(64->128, Load(addr=(((rdx<8> * 0x2260<64>) + r15<8>) + (rdi<8> * 0x8<64>)), size=8, endness=Iend_LE))) + Conv(64->128, Load(addr=(rcx<8> + (rdi<8> * 0x8<64>)), size=8, endness=Iend_LE))))
                *((unsigned long long *)((char *)v28 + 0x8 * v32)) = v33;
                v32 += 1;
            }
            while (v32 != 1100);
            v30 = 1;
        }
        while (true);
        v34 = 1;
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
            v40 = v37 * 1000;
            v41 = 0;
            while (true)
            {
                if (((unsigned int)(v41 + v40) * 3435973837 >> 2 | (unsigned int)(v41 + v40) * 3435973837 << 30) <= 214748364)
                {
                    fputc(0xa, v0);
                }
                fprintf(v0, "%0.2lf ");
                v41 += 1;
                if (v41 == 1100)
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

