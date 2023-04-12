extern char .L.str.3;
extern char got.stderr;

long long submain(unsigned int a0, unsigned long long a1)
{
    void* v0;  // [bp-0x38], Other Possible Types: unsigned long
    unsigned long v2;  // rax
    void* v5;  // rbx
    unsigned long long *v6;  // r14
    void* v7;  // r15
    int v8;  // xmm0
    unsigned long long v9;  // rdx
    void* v10;  // rsi
    uint128_t v11;  // xmm1
    uint128_t v12;  // xmm1
    unsigned long long v13;  // rax
    unsigned long long v15;  // rax
    unsigned long long v16;  // rdi
    void* v17;  // rcx
    uint128_t v18;  // xmm1
    unsigned long long v19;  // rcx
    unsigned long long v20;  // r9
    unsigned long long v21;  // rdx
    int v22;  // xmm0
    int v23;  // xmm1
    void* v24;  // rcx
    void* v25;  // rsi
    uint128_t v26;  // xmm2
    unsigned long long *v27;  // rdi
    void* v28;  // r8
    uint128_t v29;  // xmm3
    uint128_t v30;  // xmm3
    uint128_t v31;  // xmm3
    uint128_t v32;  // xmm3
    uint128_t v33;  // xmm3
    uint128_t v34;  // xmm4
    uint128_t v35;  // xmm4
    void* v36;  // r12
    unsigned long long v38;  // rbp
    unsigned long long v41;  // r13
    void* v42;  // r12

    v0 = v2;
    v5 = polybench_alloc_data(0x124f80, 0x8);
    v6 = polybench_alloc_data(0xf4240, 0x8);
    v7 = polybench_alloc_data(0x124f80, 0x8);
    v19 = 0;
    v8 = 0;
    *((unsigned long long *)&v8) = 0x408f400000000000;
    v13 = 0;
    do
    {
        v9 = v13 + 1200;
        v10 = 0;
        do
        {
            v11 = 0;
            *((unsigned long long *)&v11) = (unsigned int)(v10 + v13) - (unsigned int)((v10 + v13) / 100) * 100;
            *((unsigned long long *)&v11) = (unsigned long long)(v11 / v8);
            *((unsigned long long *)(&((char *)v5)[9600 * v13] + 0x8 * v10)) = v11;
            v12 = 0;
            *((unsigned long long *)&v12) = (unsigned int)(v9 - v10) - (unsigned int)((v9 - v10) / 100) * 100;
            *((unsigned long long *)&v12) = (unsigned long long)(v12 / v8);
            *((unsigned long long *)(&((char *)v7)[9600 * v13] + 0x8 * v10)) = v12;
            v10 += 1;
        }
        while (v10 != 1200);
        v13 = 1;
    }
    while (true);
    v15 = 0;
    do
    {
        v16 = v19;
        v17 = 0;
        do
        {
            v18 = 0;
            *((unsigned long long *)&v18) = (unsigned int)(v17 + v16) - (unsigned int)((v17 + v16) / 100) * 100;
            *((unsigned long long *)&v18) = (unsigned long long)(v18 / v8);
            *((unsigned long long *)(&((char *)v6)[8000 * v16] + 0x8 * v17)) = v18;
            v17 += 1;
        }
        while (v17 != 1);
        v19 = 1;
        v20 = 1;
        do
        {
            v6[v20] = 0xc08f380000000000;
            v20 += 1;
        }
        while (v20 != 1000);
        v21 = 2;
    }
    while (true);
    v22 = 0;
    *((unsigned long long *)&v22) = 0x3ff8000000000000;
    v23 = 0;
    *((unsigned long long *)&v23) = 4608083138725491507;
    do
    {
        v24 = &v6[1000 * v15];
        v25 = 0;
        do
        {
            v26 = 0;
            if (false)
            {
                v27 = 0 * 9600 + v7 + v25 * 8;
                v26 = 0;
                v28 = 0;
                do
                {
                    v29 = 0;
                    *((unsigned long long *)&v29) = *(v27);
                    xmm3lq<8> = Conv(128->64, (((xmm3<16> * xmm0<16>) * Conv(64->128, Load(addr=(rcx<8> + (r8<8> * 0x8<64>)), size=8, endness=Iend_LE))) + Conv(64->128, Load(addr=(rbx<8> + (r8<8> * 0x2580<64>)), size=8, endness=Iend_LE))))
                    *((unsigned long long *)((char *)v5 + 0x2580 * v28)) = v29;
                    v30 = 0;
                    *((unsigned long long *)&v30) = *((long long *)(0x2580 * v28 + (char *)v7));
                    xmm3<16> = (xmm3<16> * Conv(64->128, Load(addr=(rcx<8> + (r8<8> * 0x8<64>)), size=8, endness=Iend_LE)))
                    v26 += v31;
                    v28 += 1;
                }
                while (v28 != 0);
            }
            v32 = 0;
            *((unsigned long long *)&v32) = *((long long *)((char *)v7 + 0x8 * v25));
            xmm3<16> = ((xmm3<16> * xmm0<16>) * Conv(64->128, Load(addr=((0x0<64> * 0x1f40<64>) + r14<8>), size=8, endness=Iend_LE)))
            v34 = 0;
            *((unsigned long long *)&v34) = *((long long *)((char *)v5 + 0x8 * v25));
            v35 = v34 * v23 + v33;
            *((unsigned long long *)&v26) = (unsigned long long)(v26 * v22 + v35);
            *((unsigned long long *)((char *)v5 + 0x8 * v25)) = v26;
            v25 += 1;
        }
        while (v25 != 1200);
        v15 = 1;
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
        v36 = *((long long *)got.stderr);
        fwrite("==BEGIN DUMP_ARRAYS==\n", 0x16, 0x1, *((long long *)got.stderr));
        v38 = 0;
        v0 = v36;
        fprintf(v36, "begin dump: %s", &.L.str.3);
        do
        {
            v41 = v38 * 1000;
            v42 = 0;
            while (true)
            {
                if (((unsigned int)(v42 + v41) * 3435973837 >> 2 | (unsigned int)(v42 + v41) * 3435973837 << 30) <= 214748364)
                {
                    fputc(0xa, v0);
                }
                fprintf(v0, "%0.2lf ");
                v42 += 1;
                if (v42 == 1200)
                {
                    break;
                }
            }
            v38 = 1;
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

