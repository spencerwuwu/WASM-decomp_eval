extern char .L.str.3;
extern char got.stderr;

long long submain(unsigned int a0, unsigned long long a1)
{
    unsigned long v0;  // [bp-0x38]
    unsigned long v2;  // rax
    void* v5;  // rbx
    void* v6;  // r14
    int v7;  // xmm0
    int v8;  // xmm1
    uint128_t v9;  // xmm2
    void* v10;  // rsi
    unsigned long long v11;  // rsi
    void* v12;  // rdi
    uint128_t v13;  // xmm2
    unsigned long v14;  // cc_ndep
    unsigned long long v15;  // rdx
    int v16;  // xmm0
    void* v17;  // rcx
    unsigned long long v18;  // cc_op
    unsigned long long v19;  // cc_dep1
    void* v20;  // cc_dep2
    unsigned long long *v21;  // rdx
    uint128_t v22;  // xmm1
    void* v23;  // rsi
    unsigned long v24;  // cc_ndep
    uint128_t v25;  // xmm2
    uint128_t v26;  // xmm2
    unsigned long long v27;  // cc_op
    void* v28;  // cc_dep1
    unsigned long long v29;  // cc_dep2
    uint128_t v30;  // xmm1
    unsigned long v31;  // cc_ndep
    unsigned long long v33;  // r13
    unsigned long long v35;  // rbp
    void* v36;  // r12

    v0 = v2;
    v5 = polybench_alloc_data(0xf4240, 0x8);
    v6 = polybench_alloc_data(0x124f80, 0x8);
    v7 = 0;
    *((unsigned long long *)&v7) = 0x4092c00000000000;
    v8 = 0;
    *((unsigned long long *)&v8) = 0x408f400000000000;
    v15 = 0;
    do
    {
        if (v15 != 0)
        {
            v10 = 0;
            do
            {
                v9 = 0;
                *((unsigned long long *)&v9) = (unsigned int)v10 % 1000;
                *((unsigned long long *)&v9) = (unsigned long long)(v9 / v8);
                *((unsigned long long *)((char *)v5 + 0x8 * v10)) = v9;
                v10 += 1;
            }
            while (v10 != 0);
        }
        *((long long *)&((char *)v5)[8000 * v15 + 8 * v15]) = 0x3ff0000000000000;
        v11 = v15 + 1200;
        v12 = 0;
        do
        {
            v13 = 0;
            *((unsigned long long *)&v13) = (unsigned int)(v11 - v12) - (unsigned int)((v11 - v12) / 1200) * 1200;
            *((unsigned long long *)&v13) = (unsigned long long)(v13 / v7);
            *((unsigned long long *)(&((char *)v6)[9600 * v15] + 0x8 * v12)) = v13;
            v12 += 1;
        }
        while (v12 != 1200);
        v14 = 1200 < 1200;
        v15 = 1;
    }
    while (true);
    v16 = 0;
    *((unsigned long long *)&v16) = 0x3ff8000000000000;
    do
    {
        v17 = 0;
        do
        {
            v18 = 4;
            v19 = 0 * 9600;
            v20 = v6;
            v21 = 0 * 9600 + v6 + v17 * 8;
            v22 = 0;
            *((unsigned long long *)&v22) = *((long long *)((char *)v6 + 0x8 * v17));
            v23 = 0;
            do
            {
                v24 = [D] amd64g_calculate_rflags_c(cc_op<8>, cc_dep1<8>, cc_dep2<8>, cc_ndep<8>);
                v23 += 1;
                v25 = 0;
                *((unsigned long long *)&v25) = *((long long *)(0x1f40 * v23 + (char *)v5));
                xmm2<16> = (xmm2<16> * Conv(64->128, Load(addr=((rsi<8> * 0x2580<64>) + r14<8>), size=8, endness=Iend_LE)))
                v22 += v26;
                *(v21) = v22;
                v27 = 8;
                v28 = v23;
                v29 = 999;
            }
            while (v23 != 999);
            v30 = 0;
            *((unsigned long long *)&v30) = *((long long *)((char *)v6 + 0x8 * v17));
            *((unsigned long long *)&v30) = (unsigned long long)(v30 * v16);
            *((unsigned long long *)((char *)v6 + 0x8 * v17)) = v30;
            v31 = (0 * 9600 + v6 <= 0 * 9600? 1 : 0);
            v17 += 1;
        }
        while (v17 != 1200);
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
        v33 = 0;
        fprintf(*((long long *)got.stderr), "begin dump: %s", &.L.str.3);
        do
        {
            v35 = v33 * 1000;
            v36 = 0;
            while (true)
            {
                if (((unsigned int)(v36 + v35) * 3435973837 >> 2 | (unsigned int)(v36 + v35) * 3435973837 << 30) <= 214748364)
                {
                    fputc(0xa, *((long long *)got.stderr));
                }
                fprintf(*((long long *)got.stderr), "%0.2lf ");
                v36 += 1;
                if (v36 == 1200)
                {
                    break;
                }
            }
            v33 = 1;
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

