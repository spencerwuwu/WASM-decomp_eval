long long kernel_trmm(unsigned int a0, unsigned int a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long v1;  // rdi
    unsigned long long v2;  // r9
    void* v3;  // r10
    unsigned long v4;  // rax
    unsigned long long v5;  // cc_op
    unsigned long long v6;  // cc_dep1
    void* v7;  // cc_dep2
    unsigned long long v8;  // r11
    unsigned long long *v9;  // r14
    uint128_t v10;  // xmm1
    unsigned long long v11;  // r15
    uint128_t v12;  // xmm2
    uint128_t v13;  // xmm2
    uint128_t v14;  // xmm1
    int v15;  // xmm0
    unsigned long v16;  // cc_ndep
    void* v17;  // rbx
    unsigned long long v18;  // cc_op
    void* v19;  // cc_dep1
    unsigned long long v20;  // cc_dep2
    unsigned long v21;  // cc_ndep

    if ((unsigned int)v1 > 0)
    {
        v2 = 1;
        v3 = 0;
        do
        {
            v5 = 19;
            v6 = a1;
            v7 = 0;
            if ((unsigned int)a1 > 0)
            {
                v8 = v3 + 1;
                v17 = 0;
                do
                {
                    if (v8 < v1)
                    {
                        v9 = 0 * 9600 + a3 + v17 * 8;
                        v10 = 0;
                        *((unsigned long long *)&v10) = *((long long *)(0 * 9600 + a3 + v17 * 8));
                        v11 = 1;
                        do
                        {
                            v12 = 0;
                            *((unsigned long long *)&v12) = *((long long *)(v11 * 8000 + a2));
                            xmm2<16> = (xmm2<16> * Conv(64->128, Load(addr=((r15<8> * 0x2580<64>) + rcx<8>), size=8, endness=Iend_LE)))
                            v10 += v13;
                            *(v9) = v10;
                            v11 += 1;
                        }
                        while (v11 != v1);
                    }
                    v14 = 0;
                    *((unsigned long long *)&v14) = *((long long *)(0 * 9600 + a3 + v17 * 8));
                    *((unsigned long long *)&v14) = (unsigned long long)(v14 * v15);
                    *((unsigned long long *)(0 * 9600 + a3 + v17 * 8)) = v14;
                    v16 = (0 * 9600 + a3 <= 0 * 9600? 1 : 0);
                    v17 += 1;
                    v18 = 8;
                    v19 = v17;
                    v20 = a1;
                }
                while (v17 != a1);
            }
            v3 += 1;
            v21 = [D] amd64g_calculate_rflags_c(cc_op<8>, cc_dep1<8>, cc_dep2<8>, cc_ndep<8>);
            v2 += 1;
        }
        while (v3 != v1);
        return v1;
    }
    return v4;
}

extern char .L.str.3;
extern char got.stderr;

long long submain(unsigned int a0, unsigned long long a1)
{
    unsigned long v0;  // [bp-0x38]
    unsigned long v2;  // rax
    unsigned long long v5;  // rbx
    unsigned long long v6;  // r14
    int v7;  // xmm0
    int v8;  // xmm1
    uint128_t v9;  // xmm2
    void* v10;  // rsi
    unsigned long long v11;  // rsi
    void* v12;  // rdi
    uint128_t v13;  // xmm2
    unsigned long long v14;  // rdx
    int v15;  // xmm0
    void* v16;  // rdx
    unsigned long long *v17;  // rsi
    uint128_t v18;  // xmm1
    unsigned long long v19;  // rdi
    uint128_t v20;  // xmm2
    uint128_t v21;  // xmm2
    uint128_t v22;  // xmm1
    unsigned long long v24;  // r13
    unsigned long long v26;  // rbp
    void* v27;  // r12

    v0 = v2;
    v5 = polybench_alloc_data(0xf4240, 0x8);
    v6 = polybench_alloc_data(0x124f80, 0x8);
    v7 = 0;
    *((unsigned long long *)&v7) = 0x4092c00000000000;
    v8 = 0;
    *((unsigned long long *)&v8) = 0x408f400000000000;
    v14 = 0;
    do
    {
        if (v14 != 0)
        {
            v10 = 0;
            do
            {
                v9 = 0;
                *((unsigned long long *)&v9) = (unsigned int)v10 % 1000;
                *((unsigned long long *)&v9) = (unsigned long long)(v9 / v8);
                *((unsigned long long *)(0 * 8000 + v5 + v10 * 8)) = v9;
                v10 += 1;
            }
            while (v10 != 0);
        }
        *((long long *)(v14 * 8000 + v5 + v14 * 8)) = 0x3ff0000000000000;
        v11 = v14 + 1200;
        v12 = 0;
        do
        {
            v13 = 0;
            *((unsigned long long *)&v13) = (unsigned int)(v11 - v12) - (unsigned int)((v11 - v12) / 1200) * 1200;
            *((unsigned long long *)&v13) = (unsigned long long)(v13 / v7);
            *((unsigned long long *)(v14 * 9600 + v6 + v12 * 8)) = v13;
            v12 += 1;
        }
        while (v12 != 1200);
        v14 = 1;
    }
    while (true);
    v15 = 0;
    *((unsigned long long *)&v15) = 0x3ff8000000000000;
    do
    {
        v16 = 0;
        do
        {
            v17 = 0 * 9600 + v6 + v16 * 8;
            v18 = 0;
            *((unsigned long long *)&v18) = *((long long *)(0 * 9600 + v6 + v16 * 8));
            v19 = 1;
            do
            {
                v20 = 0;
                *((unsigned long long *)&v20) = *((long long *)(v19 * 8000 + v5));
                xmm2<16> = (xmm2<16> * Conv(64->128, Load(addr=((rdi<8> * 0x2580<64>) + r14<8>), size=8, endness=Iend_LE)))
                v18 += v21;
                *(v17) = v18;
                v19 += 1;
            }
            while (v19 != 1000);
            v22 = 0;
            *((unsigned long long *)&v22) = *((long long *)(0 * 9600 + v6 + v16 * 8));
            *((unsigned long long *)&v22) = (unsigned long long)(v22 * v15);
            *((unsigned long long *)(0 * 9600 + v6 + v16 * 8)) = v22;
            v16 += 1;
        }
        while (v16 != 1200);
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
        v24 = 0;
        fprintf(*((long long *)got.stderr), "begin dump: %s", &.L.str.3);
        do
        {
            v26 = v24 * 1000;
            v27 = 0;
            while (true)
            {
                if (((unsigned int)(v27 + v26) * 3435973837 >> 2 | (unsigned int)(v27 + v26) * 3435973837 << 30) <= 214748364)
                {
                    fputc(0xa, *((long long *)got.stderr));
                }
                fprintf(*((long long *)got.stderr), "%0.2lf ");
                v27 += 1;
                if (v27 == 1200)
                {
                    break;
                }
            }
            v24 = 1;
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

