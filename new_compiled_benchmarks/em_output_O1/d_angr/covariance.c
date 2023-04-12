extern char .L.str.3;
extern char got.stderr;

long long submain(unsigned int a0, unsigned long long a1)
{
    unsigned long v0;  // [bp-0x38], Other Possible Types: void*
    unsigned long v2;  // rax
    void* v5;  // rbx
    unsigned long long *v6;  // r14
    unsigned long long v7;  // r15
    int v8;  // xmm0
    int v9;  // xmm1
    void* v10;  // rdx
    int v11;  // xmm2
    unsigned long long v12;  // rcx
    void* v13;  // rcx
    int v14;  // xmm0
    uint128_t v15;  // xmm1
    void* v16;  // rdx
    unsigned long long v17;  // rax
    unsigned long long v18;  // rax
    unsigned long long v19;  // rdx
    uint128_t v20;  // xmm0
    unsigned long long v21;  // rcx
    int v22;  // xmm0
    unsigned long long v23;  // rcx
    unsigned long long *v24;  // rdx
    uint128_t v25;  // xmm1
    void* v26;  // rsi
    uint128_t v27;  // xmm2
    uint128_t v28;  // xmm2
    void* v29;  // r12
    unsigned long long v31;  // rbp
    unsigned long long v34;  // r13
    void* v35;  // r12

    v0 = v2;
    v5 = polybench_alloc_data(0x19a280, 0x8);
    v6 = polybench_alloc_data(0x15f900, 0x8);
    v7 = polybench_alloc_data(0x4b0, 0x8);
    v17 = 0;
    v8 = 0;
    *((unsigned long long *)&v8) = 0x4092c00000000000;
    v12 = 0;
    do
    {
        v9 = 0;
        *((unsigned long long *)&v9) = v12;
        v10 = 0;
        do
        {
            v11 = 0;
            *((unsigned long long *)&v11) = v10;
            *((unsigned long long *)&v11) = (unsigned long long)(v11 * v9 / v8);
            *((unsigned long long *)(&((char *)v5)[9600 * v12] + 0x8 * v10)) = (unsigned long long)v11;
            v10 += 1;
        }
        while (v10 != 1200);
        v12 = 1;
    }
    while (true);
    v13 = 0;
    v14 = 0;
    *((unsigned long long *)&v14) = 0x4095e00000000000;
    do
    {
        *((long long *)(v7 + v17 * 8)) = 0;
        v15 = 0;
        v16 = 0;
        do
        {
            xmm1<16> = (xmm1<16> + Conv(64->128, Load(addr=(((rdx<8> * 0x2580<64>) + rbx<8>) + (rax<8> * 0x8<64>)), size=8, endness=Iend_LE)))
            *((unsigned long long *)(v7 + v17 * 8)) = v15;
            v16 += 1;
        }
        while (v16 != 1400);
        *((unsigned long long *)&v15) = (unsigned long long)(v15 / v14);
        *((unsigned long long *)v7) = v15;
        v17 = 1;
    }
    while (true);
    v18 = 0;
    do
    {
        v19 = 0;
        do
        {
            v20 = 0;
            *((unsigned long long *)&v20) = *((long long *)&(0x2580 * v13 + (char *)v5)[8 * v19]);
            xmm0lq<8> = Conv(128->64, (xmm0<16> - Conv(64->128, Load(addr=(r15<8> + (rdx<8> * 0x8<64>)), size=8, endness=Iend_LE))))
            *((unsigned long long *)&(0x2580 * v13 + (char *)v5)[8 * v19]) = v20;
            v19 += 1;
        }
        while (v19 != 1200);
        v21 = 1;
    }
    while (true);
    v22 = 0;
    *((unsigned long long *)&v22) = 0x4095dc0000000000;
    do
    {
        v23 = v18;
        do
        {
            v24 = &v6[v23];
            v6[v23] = 0;
            v25 = 0;
            v26 = 0;
            do
            {
                v27 = 0;
                *((unsigned long long *)&v27) = *((long long *)(0x2580 * v26 + (char *)v5));
                xmm2<16> = (xmm2<16> * Conv(64->128, Load(addr=(((rsi<8> * 0x2580<64>) + rbx<8>) + (rcx<8> * 0x8<64>)), size=8, endness=Iend_LE)))
                v25 += v28;
                *(v24) = v25;
                v26 += 1;
            }
            while (v26 != 1400);
            *((unsigned long long *)&v25) = (unsigned long long)(v25 / v22);
            *(v24) = v25;
            *(v6) = v25;
            v23 = 1;
        }
        while (true);
        v18 = 1;
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
        v29 = *((long long *)got.stderr);
        fwrite("==BEGIN DUMP_ARRAYS==\n", 0x16, 0x1, *((long long *)got.stderr));
        v31 = 0;
        v0 = v29;
        fprintf(v29, "begin dump: %s", &.L.str.3);
        do
        {
            v34 = v31 * 1200;
            v35 = 0;
            while (true)
            {
                if (((unsigned int)(v35 + v34) * 3435973837 >> 2 | (unsigned int)(v35 + v34) * 3435973837 << 30) <= 214748364)
                {
                    fputc(0xa, v0);
                }
                fprintf(v0, "%0.2lf ");
                v35 += 1;
                if (v35 == 1200)
                {
                    break;
                }
            }
            v31 = 1;
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

