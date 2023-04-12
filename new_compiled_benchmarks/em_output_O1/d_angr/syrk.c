extern char .L.str.3;
extern char got.stderr;

long long submain(unsigned int a0, unsigned long long a1)
{
    unsigned long v0;  // [bp-0x38]
    unsigned long v2;  // rax
    void* v5;  // rbx
    void* v6;  // r14
    void* v7;  // rcx
    int v8;  // xmm0
    void* v9;  // rax
    uint128_t v10;  // xmm1
    void* v11;  // rdx
    unsigned long long v12;  // rax
    void* v13;  // rax
    int v14;  // xmm0
    void* v15;  // rdx
    uint128_t v16;  // xmm1
    unsigned long long v17;  // rcx
    int v19;  // xmm0
    int v20;  // xmm1
    void* v21;  // rsi
    void* v22;  // rdx
    uint128_t v23;  // xmm2
    unsigned long long v24;  // rsi
    unsigned long long *v25;  // rdi
    void* v26;  // r8
    uint128_t v27;  // xmm2
    unsigned long long v28;  // rax
    unsigned long long v29;  // rcx
    unsigned long long v31;  // r13
    unsigned long long v33;  // rbp
    void* v34;  // r12

    v0 = v2;
    v5 = polybench_alloc_data(0x15f900, 0x8);
    v6 = polybench_alloc_data(0x124f80, 0x8);
    v7 = 0;
    v8 = 0;
    *((unsigned long long *)&v8) = 0x4092c00000000000;
    v9 = 0;
    do
    {
        v11 = 0;
        do
        {
            v10 = 0;
            *((unsigned long long *)&v10) = (unsigned int)v9 * (unsigned int)v11 + 1 - (unsigned int)(((unsigned int)v9 * (unsigned int)v11 + 1) * 458129845 >> 39) * 1200;
            *((unsigned long long *)&v10) = (unsigned long long)(v10 / v8);
            *((unsigned long long *)(0x1f40 * v9 + (char *)v6 + 0x8 * v11)) = v10;
            v11 += 1;
        }
        while (v11 != 1000);
        v12 = 1;
    }
    while (true);
    v13 = 0;
    v14 = 0;
    *((unsigned long long *)&v14) = 0x408f400000000000;
    do
    {
        v15 = 0;
        do
        {
            v16 = 0;
            *((unsigned long long *)&v16) = (unsigned int)v7 * (unsigned int)v15 + 2 - (unsigned int)(((unsigned int)v7 * (unsigned int)v15 + 2) * 274877907 >> 38) * 1000;
            *((unsigned long long *)&v16) = (unsigned long long)(v16 / v14);
            *((unsigned long long *)(0x2580 * v7 + (char *)v5 + 0x8 * v15)) = v16;
            v15 += 1;
        }
        while (v15 != 1200);
        v17 = 1;
    }
    while (true);
    v19 = 0;
    *((unsigned long long *)&v19) = 4608083138725491507;
    v20 = 0;
    *((unsigned long long *)&v20) = 0x3ff8000000000000;
    do
    {
        v21 = 0;
        do
        {
            v22 = v13 * 9600 + v5;
            v23 = 0;
            *((unsigned long long *)&v23) = *((long long *)(0x2580 * v13 + (char *)v5 + 0x8 * v21));
            *((unsigned long long *)&v23) = (unsigned long long)(v23 * v19);
            *((unsigned long long *)(0x2580 * v13 + (char *)v5 + 0x8 * v21)) = v23;
            v21 += 1;
        }
        while (v21 != 1);
        v24 = 0;
        do
        {
            v25 = 0 * 8000 + v6 + v24 * 8;
            v26 = 0;
            do
            {
                v27 = 0;
                *((unsigned long long *)&v27) = *(v25);
                xmm2lq<8> = Conv(128->64, (((xmm2<16> * xmm1<16>) * Conv(64->128, Load(addr=(((r8<8> * 0x1f40<64>) + r14<8>) + (rsi<8> * 0x8<64>)), size=8, endness=Iend_LE))) + Conv(64->128, Load(addr=(rdx<8> + (r8<8> * 0x8<64>)), size=8, endness=Iend_LE))))
                *((unsigned long long *)((char *)v22 + 0x8 * v26)) = v27;
                v26 += 1;
            }
            while (v26 != 1);
            v24 = 1;
        }
        while (true);
        v28 = 1;
        v29 = 2;
    }
    while (true);
    if (a0 >= 43)
    {
        if (*((char *)*((long long *)a1)) != 0)
        {
            free(v5);
            free(v6);
            return 0;
        }
        fwrite("==BEGIN DUMP_ARRAYS==\n", 0x16, 0x1, *((long long *)got.stderr));
        v31 = 0;
        fprintf(*((long long *)got.stderr), "begin dump: %s", &.L.str.3);
        do
        {
            v33 = v31 * 1200;
            v34 = 0;
            while (true)
            {
                if (((unsigned int)(v34 + v33) * 3435973837 >> 2 | (unsigned int)(v34 + v33) * 3435973837 << 30) <= 214748364)
                {
                    fputc(0xa, *((long long *)got.stderr));
                }
                fprintf(*((long long *)got.stderr), "%0.2lf ");
                v34 += 1;
                if (v34 == 1200)
                {
                    break;
                }
            }
            v31 = 1;
        }
        while (true);
        fprintf(*((long long *)got.stderr), "\nend   dump: %s\n", &.L.str.3);
        fwrite("==END   DUMP_ARRAYS==\n", 0x16, 0x1, *((long long *)got.stderr));
        free(v5);
        free(v6);
        return 0;
    }
    free(v5);
    free(v6);
    return 0;
}

