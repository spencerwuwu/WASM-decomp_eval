long long kernel_gramschmidt(unsigned int a0, unsigned int a1, unsigned long long a2, unsigned long a3, unsigned long long a4)
{
    unsigned long long v0;  // [bp-0x48]
    int tmp_4;  // tmp #4
    int tmp_2;  // tmp #2
    unsigned long long v1;  // [bp-0x40]
    unsigned long v2;  // [bp-0x38]
    unsigned long long v4;  // rsi
    void* v5;  // rbx
    void* v6;  // r15
    unsigned long long v7;  // rdi
    unsigned long long v8;  // rbp
    unsigned long long v9;  // r13
    unsigned long long v10;  // r14
    unsigned long v11;  // rax
    void* v12;  // r12
    uint128_t v13;  // xmm0
    void* v14;  // rax
    uint128_t v15;  // xmm1
    uint128_t v16;  // xmm1
    unsigned long v17;  // cc_ndep
    unsigned long long v18;  // rcx
    unsigned long long v19;  // rax
    void* v21;  // rdx
    uint128_t v22;  // xmm0
    unsigned long v23;  // cc_ndep
    unsigned long long v24;  // rdx
    unsigned long long *v25;  // rsi
    uint128_t v26;  // xmm0
    void* v27;  // rdi
    uint128_t v28;  // xmm1
    uint128_t v29;  // xmm1
    unsigned long v30;  // cc_ndep
    unsigned long long v31;  // cc_op
    unsigned long long v32;  // cc_dep1
    void* v33;  // cc_dep2
    void* v34;  // rdi
    uint128_t v35;  // xmm0
    uint128_t v36;  // xmm1
    uint128_t v37;  // xmm1
    unsigned long v38;  // cc_ndep
    unsigned long long v39;  // cc_op
    void* v40;  // cc_dep1
    unsigned long long v41;  // cc_dep2
    unsigned long v42;  // cc_ndep
    unsigned long long v43;  // r9
    void* v44;  // r10

    v2 = a3;
    if ((unsigned int)v4 > 0)
    {
        v5 = a4;
        v6 = a2;
        v8 = v7;
        v18 = v4;
        v9 = v4;
        v10 = v7;
        v43 = 1;
        v44 = 0;
        v0 = v4;
        do
        {
            v12 = v44;
            v13 = 0;
            if ((unsigned int)v8 > 0)
            {
                v14 = 0;
                do
                {
                    v15 = 0;
                    *((unsigned long long *)&v15) = *((long long *)(0x2580 * v14 + (char *)v6));
                    v16 = v15 * v15;
                    v13 += v16;
                    v17 = (v14 * 9600 + v6 <= v14 * 9600? 1 : 0);
                    v14 += 1;
                }
                while (v14 != v10);
            }
            if ((BinaryOp CmpF & 1) == 0)
            {
                tmp_4 = UnaryOp Sqrt;
                *((unsigned long long *)&v13) = tmp_4;
            }
            else
            {
                v1 = v43;
                sqrt((unsigned long long)v13);
                v43 = v1;
                v18 = v0;
            }
            v19 = v12 * 9600 + v2;
            *((unsigned long long *)(v12 * 9600 + v2 + v12 * 8)) = v13;
            if ((unsigned int)v8 > 0)
            {
                v21 = 0;
                do
                {
                    v22 = 0;
                    *((unsigned long long *)&v22) = *((long long *)((char *)v6 + 0x2580 * v21));
                    xmm0lq<8> = Conv(128->64, (xmm0<16> / Conv(64->128, Load(addr=(((r12<8> * 0x2580<64>) + Load(addr=stack_base-56, size=8, endness=Iend_LE)) + (r12<8> * 0x8<64>)), size=8, endness=Iend_LE))))
                    *((unsigned long long *)(0x2580 * v21 + (char *)v5)) = v22;
                    v23 = (v21 * 9600 + v5 <= v21 * 9600? 1 : 0);
                    v21 += 1;
                }
                while (v21 != v10);
            }
            v44 = v12 + 1;
            v24 = v43;
            if (v12 + 1 < v18)
            {
                do
                {
                    v25 = v19 + v24 * 8;
                    *((long long *)(v19 + v24 * 8)) = 0;
                    if ((unsigned int)v8 > 0)
                    {
                        v26 = 0;
                        *((unsigned long long *)&v26) = *((long long *)(0 * 9600 + v2 + v24 * 8));
                        v27 = 0;
                        do
                        {
                            v28 = 0;
                            *((unsigned long long *)&v28) = *((long long *)((char *)v5 + 0x2580 * v27));
                            xmm1<16> = (xmm1<16> * Conv(64->128, Load(addr=(((rdi<8> * 0x2580<64>) + r15<8>) + (rdx<8> * 0x8<64>)), size=8, endness=Iend_LE)))
                            v26 += v29;
                            *(v25) = v26;
                            v30 = (v27 * 9600 + v6 <= v27 * 9600? 1 : 0);
                            v27 += 1;
                        }
                        while (v27 != v10);
                    }
                    v31 = 19;
                    v32 = v8;
                    v33 = 0;
                    if ((unsigned int)v8 > 0)
                    {
                        v34 = 0;
                        do
                        {
                            v35 = 0;
                            *((unsigned long long *)&v35) = *((long long *)&((char *)v6 + 0x2580 * v34)[8 * v24]);
                            v36 = 0;
                            *((unsigned long long *)&v36) = *((long long *)(0x2580 * v34 + (char *)v5));
                            xmm1<16> = (xmm1<16> * Conv(64->128, Load(addr=(((0x0<64> * 0x2580<64>) + Load(addr=stack_base-56, size=8, endness=Iend_LE)) + (rdx<8> * 0x8<64>)), size=8, endness=Iend_LE)))
                            *((unsigned long long *)&v35) = v35 - v37;
                            *((unsigned long long *)&((char *)v6 + 0x2580 * v34)[8 * v24]) = v35;
                            v38 = (v34 * 9600 + v5 <= v34 * 9600? 1 : 0);
                            v34 += 1;
                            v39 = 8;
                            v40 = v34;
                            v41 = v10;
                        }
                        while (v34 != v10);
                    }
                    v42 = [D] amd64g_calculate_rflags_c(cc_op<8>, cc_dep1<8>, cc_dep2<8>, cc_ndep<8>);
                    v24 += 1;
                }
                while (v24 != v9);
            }
            v43 += 1;
        }
        while (v44 != v9);
        return v19;
    }
    return v11;
}

extern char .L.str.3;
extern char .L.str.7;
extern char got.stderr;

long long submain(unsigned int a0, unsigned long long a1)
{
    unsigned long long *v0;  // [bp-0x40]
    int tmp_4;  // tmp #4
    int tmp_2;  // tmp #2
    unsigned int v1;  // [bp-0x34]
    void* v4;  // rbx
    void* v5;  // r15
    void* v6;  // rax
    int v7;  // xmm0
    int v8;  // xmm1
    int v9;  // xmm2
    uint128_t v10;  // xmm3
    void* v11;  // rcx
    unsigned long long v12;  // rax
    unsigned long long v13;  // rbp
    unsigned long long v15;  // r12
    void* v16;  // rax
    uint128_t v17;  // xmm0
    uint128_t v18;  // xmm1
    uint128_t v19;  // xmm1
    unsigned long long v20;  // rax
    void* v21;  // rdx
    uint128_t v22;  // xmm0
    unsigned long long v23;  // rcx
    unsigned long long *v24;  // rdx
    uint128_t v25;  // xmm0
    void* v26;  // rsi
    uint128_t v27;  // xmm1
    uint128_t v28;  // xmm1
    void* v29;  // rsi
    uint128_t v30;  // xmm0
    uint128_t v31;  // xmm1
    uint128_t v32;  // xmm1
    unsigned long long *v34;  // rdi
    unsigned long long v35;  // rbp
    unsigned long long v37;  // r14
    void* v38;  // r13
    unsigned long long v43;  // r14
    void* v46;  // r13
    unsigned long long v47;  // rbp

    v1 = a0;
    v4 = polybench_alloc_data(0x124f80, 0x8);
    v0 = polybench_alloc_data(0x15f900, 0x8);
    v5 = polybench_alloc_data(0x124f80, 0x8);
    v6 = 0;
    v7 = 0;
    *((unsigned long long *)&v7) = 0x408f400000000000;
    v8 = 0;
    *((unsigned long long *)&v8) = 0x4059000000000000;
    v9 = 0;
    *((unsigned long long *)&v9) = 0x4024000000000000;
    do
    {
        v11 = 0;
        do
        {
            v10 = 0;
            *((unsigned long long *)&v10) = (unsigned int)v6 * (unsigned int)v11 - (unsigned int)(v6 * v11 / 1000) * 1000;
            *((unsigned long long *)&v10) = (unsigned long long)(v10 / v7 * v8 + v9);
            *((unsigned long long *)((char *)v4 + 0x2580 * v6 + 0x8 * v11)) = v10;
            *((long long *)(0x2580 * v6 + (char *)v5 + 0x8 * v11)) = 0;
            v11 += 1;
        }
        while (v11 != 1200);
        v12 = 1;
    }
    while (true);
    v13 = 0;
    memset(v0, 0x0, 0xafc800);
    do
    {
        v15 = v13;
        v16 = 0;
        v17 = 0;
        do
        {
            v18 = 0;
            *((unsigned long long *)&v18) = *((long long *)&(0x2580 * v16 + (char *)v4)[8 * v15]);
            v19 = v18 * v18;
            v17 += v19;
            v16 += 1;
        }
        while (v16 != 1000);
        if ((BinaryOp CmpF & 1) == 0)
        {
            tmp_4 = UnaryOp Sqrt;
            *((unsigned long long *)&v17) = tmp_4;
        }
        else
        {
            sqrt((unsigned long long)v17);
        }
        v20 = v0;
        *(v0) = v17;
        v21 = 0;
        do
        {
            v22 = 0;
            *((unsigned long long *)&v22) = *((long long *)((char *)v4 + 0x2580 * v21));
            xmm0lq<8> = Conv(128->64, (xmm0<16> / Conv(64->128, Load(addr=((0x0<64> * 0x2580<64>) + Load(addr=stack_base-64, size=8, endness=Iend_LE)), size=8, endness=Iend_LE))))
            *((unsigned long long *)(0x2580 * v21 + (char *)v5)) = v22;
            v21 += 1;
        }
        while (v21 != 1000);
        v13 = 1;
        v23 = 1;
        do
        {
            v24 = v20 + v23 * 8;
            *((long long *)(v20 + v23 * 8)) = 0;
            v25 = 0;
            v26 = 0;
            do
            {
                v27 = 0;
                *((unsigned long long *)&v27) = *((long long *)((char *)v5 + 0x2580 * v26));
                xmm1<16> = (xmm1<16> * Conv(64->128, Load(addr=(((rsi<8> * 0x2580<64>) + rbx<8>) + (rcx<8> * 0x8<64>)), size=8, endness=Iend_LE)))
                v25 += v28;
                *(v24) = v25;
                v26 += 1;
            }
            while (v26 != 1000);
            v29 = 0;
            do
            {
                v30 = 0;
                *((unsigned long long *)&v30) = *((long long *)&((char *)v4 + 0x2580 * v29)[8]);
                v31 = 0;
                *((unsigned long long *)&v31) = *((long long *)(0x2580 * v29 + (char *)v5));
                xmm1<16> = (xmm1<16> * Conv(64->128, Load(addr=rdx<8>, size=8, endness=Iend_LE)))
                *((unsigned long long *)&v30) = v30 - v32;
                *((unsigned long long *)&((char *)v4 + 0x2580 * v29)[8]) = v30;
                v29 += 1;
            }
            while (v29 != 1000);
            v23 = 2;
        }
        while (true);
    }
    while (true);
    if (v1 >= 43)
    {
        if (*((char *)*((long long *)a1)) != 0)
        {
            free(v4);
            v34 = v0;
            free(v34);
            free(v5);
            return 0;
        }
        fwrite("==BEGIN DUMP_ARRAYS==\n", 0x16, 0x1, *((long long *)got.stderr));
        v35 = 0;
        fprintf(*((long long *)got.stderr), "begin dump: %s", &.L.str.3);
        do
        {
            v37 = v35 * 1200;
            v38 = 0;
            while (true)
            {
                if (((unsigned int)(v37 + v38) * 3435973837 >> 2 | (unsigned int)(v37 + v38) * 3435973837 << 30) <= 214748364)
                {
                    fputc(0xa, *((long long *)got.stderr));
                }
                fprintf(*((long long *)got.stderr), "%0.2lf ");
                v38 += 1;
                if (v38 == 1200)
                {
                    break;
                }
            }
            v35 = 1;
        }
        while (true);
        v47 = 0;
        fprintf(*((long long *)got.stderr), "\nend   dump: %s\n", &.L.str.3);
        fprintf(*((long long *)got.stderr), "begin dump: %s", &.L.str.7);
        do
        {
            v43 = v47 * 1200;
            v46 = 0;
            while (true)
            {
                if (((unsigned int)(v43 + v46) * 3435973837 >> 2 | (unsigned int)(v43 + v46) * 3435973837 << 30) <= 214748364)
                {
                    fputc(0xa, *((long long *)got.stderr));
                }
                fprintf(*((long long *)got.stderr), "%0.2lf ");
                v46 += 1;
                if (v46 == 1200)
                {
                    break;
                }
            }
            v47 = 1;
        }
        while (true);
        fprintf(*((long long *)got.stderr), "\nend   dump: %s\n", &.L.str.7);
        fwrite("==END   DUMP_ARRAYS==\n", 0x16, 0x1, *((long long *)got.stderr));
        free(v4);
        v34 = v0;
        free(v34);
        free(v5);
        return 0;
    }
    free(v4);
    v34 = v0;
    free(v34);
    free(v5);
    return 0;
}

