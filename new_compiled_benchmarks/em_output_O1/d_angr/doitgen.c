long long kernel_doitgen(unsigned int a0, unsigned long long a1, unsigned int a2, unsigned long a3, unsigned long a4, unsigned long long a5)
{
    unsigned long v1;  // rdi
    void* v2;  // r11, Other Possible Types: unsigned long long
    unsigned long v3;  // rax
    unsigned long long v4;  // cc_op
    unsigned long long v5;  // cc_dep1
    void* v6;  // cc_dep2
    uint128_t v7;  // xmm0
    void* v8;  // r15
    uint128_t v9;  // xmm1
    uint128_t v10;  // xmm1
    unsigned long v11;  // cc_ndep
    unsigned long long v12;  // r14
    unsigned long long v13;  // cc_op
    unsigned long long v14;  // cc_dep1
    void* v15;  // cc_dep2
    unsigned long long v16;  // r14
    unsigned long v17;  // cc_ndep
    unsigned long long v18;  // cc_op
    unsigned long long v19;  // cc_dep1
    unsigned long long v20;  // cc_dep2
    unsigned long v21;  // cc_ndep
    void* v22;  // rbx, Other Possible Types: unsigned long long
    unsigned long long v23;  // cc_op
    unsigned long long v24;  // cc_dep1
    unsigned long long v25;  // cc_dep2
    unsigned long v26;  // cc_ndep

    if ((unsigned int)v1 > 0)
    {
        v2 = 0;
        do
        {
            v4 = 19;
            v5 = a1;
            v6 = 0;
            if ((unsigned int)a1 > 0)
            {
                v22 = 0;
                do
                {
                    if ((unsigned int)a2 > 0)
                    {
                        v12 = 0;
                        do
                        {
                            *((long long *)(a5 + v12 * 8)) = 0;
                            v7 = 0;
                            v8 = 0;
                            do
                            {
                                v9 = 0;
                                *((unsigned long long *)&v9) = *((long long *)(0 + a3 + 0 * 0x2bc00 + v8 * 8));
                                xmm1<16> = (xmm1<16> * Conv(64->128, Load(addr=(((r15<8> * 0x500<64>) + r8<8>) + (r14<8> * 0x8<64>)), size=8, endness=Iend_LE)))
                                v7 += v10;
                                *((unsigned long long *)(a5 + v12 * 8)) = v7;
                                v8 += 1;
                            }
                            while (v8 != a2);
                            v11 = v8 < a2;
                            v12 = 1;
                        }
                        while (a2 != 1);
                    }
                    v13 = 19;
                    v14 = a2;
                    v15 = 0;
                    if ((unsigned int)a2 > 0)
                    {
                        v16 = 0;
                        do
                        {
                            *((long long *)(0 + a3 + 0 * 0x2bc00 + v16 * 8)) = *((long long *)(a5 + v16 * 8));
                            v17 = (0 + a3 + 0 * 0x2bc00 <= 0 + a3? 1 : 0);
                            v16 += 1;
                            v18 = 8;
                            v19 = v16;
                            v20 = a2;
                        }
                        while (v16 != a2);
                    }
                    v21 = [D] amd64g_calculate_rflags_c(cc_op<8>, cc_dep1<8>, cc_dep2<8>, cc_ndep<8>);
                    v22 += 1;
                    v23 = 8;
                    v24 = v22;
                    v25 = a1;
                }
                while (v22 != a1);
            }
            v26 = [D] amd64g_calculate_rflags_c(cc_op<8>, cc_dep1<8>, cc_dep2<8>, cc_ndep<8>);
            v2 += 1;
        }
        while (v2 != v1);
        return v1;
    }
    return v3;
}

extern char .L.str.3;
extern char got.stderr;

long long submain(unsigned int a0, unsigned long long a1)
{
    void* v0;  // [bp-0x50]
    void* v1;  // [bp-0x48]
    unsigned long long v2;  // [bp-0x40]
    unsigned long long v3;  // [bp-0x38]
    void* v7;  // rbx
    unsigned long long v8;  // r14
    void* v9;  // rax
    void* v10;  // r15
    void* v11;  // rcx
    int v12;  // xmm0
    unsigned long long v13;  // rdi
    void* v14;  // r8
    uint128_t v15;  // xmm1
    unsigned long long v16;  // rsi
    void* v17;  // rsi
    uint128_t v18;  // xmm1
    unsigned long long v19;  // rcx
    unsigned long long v20;  // rsi
    uint128_t v21;  // xmm0
    void* v22;  // rdi
    uint128_t v23;  // xmm1
    uint128_t v24;  // xmm1
    unsigned long v25;  // cc_ndep
    unsigned long long v26;  // cc_op
    void* v27;  // cc_dep1
    void* v28;  // cc_dep2
    unsigned long long v29;  // rsi
    unsigned long v30;  // cc_ndep
    unsigned long long v31;  // cc_op
    unsigned long long v32;  // cc_dep1
    unsigned long long v33;  // cc_dep2
    void* v34;  // r12
    void* v36;  // r13
    unsigned long long v39;  // r13
    unsigned long long v40;  // rbp
    void* v41;  // r12

    v7 = polybench_alloc_data(0x334500, 0x8);
    v8 = polybench_alloc_data(0xa0, 0x8);
    (unsigned int)v9 = polybench_alloc_data(0x6400, 0x8);
    v10 = v9;
    v11 = 0;
    v12 = 0;
    *((unsigned long long *)&v12) = 0x4064000000000000;
    do
    {
        v16 = 0;
        do
        {
            v13 = 0 * v16;
            v14 = 0;
            do
            {
                v15 = 0;
                *((unsigned long long *)&v15) = v14 + v13 - (3435973837 * (v14 + v13) >> 39) * 160;
                *((unsigned long long *)&v15) = (unsigned long long)(v15 / v12);
                *((unsigned long long *)(&((char *)v7)[0x500 * v16] + 0x8 * v14)) = v15;
                v14 += 1;
            }
            while (v14 != 160);
            v16 = 1;
        }
        while (true);
    }
    while (true);
    do
    {
        v17 = 0;
        do
        {
            v18 = 0;
            *((unsigned long long *)&v18) = (unsigned int)v11 * (unsigned int)v17 - (unsigned int)((3435973837 * v11 * v17 >> 39) * 160);
            *((unsigned long long *)&v18) = (unsigned long long)(v18 / v12);
            *((unsigned long long *)(0x500 * v11 + (char *)v9 + 0x8 * v17)) = v18;
            v17 += 1;
        }
        while (v17 != 160);
        v19 = 1;
    }
    while (true);
    do
    {
        do
        {
            v20 = 0;
            do
            {
                *((long long *)(v8 + v20 * 8)) = 0;
                v21 = 0;
                v22 = 0;
                do
                {
                    v23 = 0;
                    *((unsigned long long *)&v23) = *((long long *)((char *)v7 + 0x8 * v22));
                    xmm1<16> = (xmm1<16> * Conv(64->128, Load(addr=(((rdi<8> * 0x500<64>) + rax<8>) + (rsi<8> * 0x8<64>)), size=8, endness=Iend_LE)))
                    v21 += v24;
                    *((unsigned long long *)(v8 + v20 * 8)) = v21;
                    v22 += 1;
                }
                while (v22 != 160);
                v25 = 160 < 160;
                v20 = 1;
            }
            while (true);
            v26 = 19;
            v27 = 0;
            v28 = 0;
            v29 = 0;
            do
            {
                *((long long *)&((char *)v7)[8 * v29]) = *((long long *)(v8 + v29 * 8));
                v30 = [D] amd64g_calculate_rflags_c(cc_op<8>, cc_dep1<8>, cc_dep2<8>, cc_ndep<8>);
                v29 += 1;
                v31 = 8;
                v32 = v29;
                v33 = 160;
            }
            while (v29 != 160);
        }
        while (true);
    }
    while (true);
    if (a0 >= 43)
    {
        if (*((char *)*((long long *)a1)) != 0)
        {
            free(v7);
            free(v8);
            free(v10);
            return 0;
        }
        v34 = *((long long *)got.stderr);
        fwrite("==BEGIN DUMP_ARRAYS==\n", 0x16, 0x1, *((long long *)got.stderr));
        v36 = 0;
        v0 = v34;
        fprintf(v34, "begin dump: %s", &.L.str.3);
        do
        {
            v1 = v36;
            v2 = v36 * 22400;
            v39 = 0;
            do
            {
                v3 = v39 * 5;
                v40 = v39 * 160 + v2;
                v41 = 0;
                while (true)
                {
                    if (((unsigned int)(v41 + v40) * 3435973837 >> 2 | (unsigned int)(v41 + v40) * 3435973837 << 30) <= 214748364)
                    {
                        fputc(0xa, v0);
                    }
                    fprintf(v0, "%0.2lf ");
                    v41 += 1;
                    if (v41 == 160)
                    {
                        break;
                    }
                }
                v39 = 1;
            }
            while (true);
            v36 = v1 + 1;
        }
        while (v1 + 1 != 150);
        fprintf(v0, "\nend   dump: %s\n", &.L.str.3);
        fwrite("==END   DUMP_ARRAYS==\n", 0x16, 0x1, v0);
        free(v7);
        free(v8);
        free(v10);
        return 0;
    }
    free(v7);
    free(v8);
    free(v10);
    return 0;
}

