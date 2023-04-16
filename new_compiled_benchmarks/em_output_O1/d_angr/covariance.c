long long kernel_covariance(unsigned int a0, unsigned long long a1, void* a2, unsigned long long a3, void* a4)
{
    unsigned long long v1;  // rdi
    void* v2;  // r10
    unsigned long long v3;  // cc_op
    unsigned long long v4;  // cc_dep1
    void* v5;  // cc_dep2
    unsigned long v6;  // cc_ndep
    void* v7;  // r11
    unsigned long long v8;  // cc_op
    void* v9;  // cc_dep1
    unsigned long long v10;  // cc_dep2
    uint128_t v11;  // xmm1
    uint128_t v12;  // xmm1
    int v13;  // xmm0
    unsigned long v14;  // cc_ndep
    void* v15;  // r10, Other Possible Types: unsigned long long
    unsigned long long v16;  // cc_op
    unsigned long long v17;  // cc_dep1
    void* v18;  // cc_dep2
    void* v19;  // r11
    uint128_t v20;  // xmm1
    unsigned long v21;  // cc_ndep
    unsigned long long v22;  // cc_op
    void* v23;  // cc_dep1
    unsigned long long v24;  // cc_dep2
    unsigned long v25;  // cc_ndep
    unsigned long long v27;  // r8
    unsigned long long v28;  // r10
    unsigned long long *v29;  // r11
    uint128_t v30;  // xmm1
    void* v31;  // rbx
    uint128_t v32;  // xmm2
    uint128_t v33;  // xmm2
    uint128_t v34;  // xmm1

    if ((unsigned int)v1 > 0)
    {
        v2 = 0;
        do
        {
            *((long long *)((char *)a4 + 0x8 * v2)) = 0;
            v3 = 19;
            v4 = a1;
            v5 = 0;
            if ((unsigned int)a1 > 0)
            {
                v11 = 0;
                *((unsigned long long *)&v11) = *((long long *)((char *)a4 + 0x8 * v2));
                v7 = 0;
                do
                {
                    xmm1<16> = (xmm1<16> + Conv(64->128, Load(addr=((r11<8> * 0x2580<64>) + rdx<8>), size=8, endness=Iend_LE)))
                    *((unsigned long long *)a4) = v11;
                    v6 = (v7 * 9600 + a2 <= v7 * 9600? 1 : 0);
                    v7 += 1;
                    v8 = 8;
                    v9 = v7;
                    v10 = a1;
                }
                while (v7 != a1);
            }
            v12 = 0;
            *((unsigned long long *)&v12) = *((long long *)((char *)a4 + 0x8 * v2));
            *((unsigned long long *)&v12) = (unsigned long long)(v12 / v13);
            *((unsigned long long *)((char *)a4 + 0x8 * v2)) = v12;
            v14 = [D] amd64g_calculate_rflags_c(cc_op<8>, cc_dep1<8>, cc_dep2<8>, cc_ndep<8>);
            v2 += 1;
        }
        while (v2 != v1);
    }
    if ((unsigned int)a1 > 0)
    {
        v15 = 0;
        do
        {
            v16 = 19;
            v17 = v1;
            v18 = 0;
            if ((unsigned int)v1 > 0)
            {
                v19 = 0;
                do
                {
                    v20 = 0;
                    *((unsigned long long *)&v20) = *((long long *)((char *)a2 + 0x8 * v19));
                    xmm1lq<8> = Conv(128->64, (xmm1<16> - Conv(64->128, Load(addr=(r8<8> + (r11<8> * 0x8<64>)), size=8, endness=Iend_LE))))
                    *((unsigned long long *)((char *)a2 + 0x8 * v19)) = v20;
                    v21 = (0 * 9600 + a2 <= 0 * 9600? 1 : 0);
                    v19 += 1;
                    v22 = 8;
                    v23 = v19;
                    v24 = v1;
                }
                while (v19 != v1);
            }
            v25 = [D] amd64g_calculate_rflags_c(cc_op<8>, cc_dep1<8>, cc_dep2<8>, cc_ndep<8>);
            v15 += 1;
        }
        while (v15 != a1);
    }
    if ((unsigned int)v1 > 0)
    {
        v27 = 0;
        do
        {
            v28 = v27;
            do
            {
                v29 = v27 * 9600 + a3 + v28 * 8;
                *((long long *)(v27 * 9600 + a3 + v28 * 8)) = 0;
                if ((unsigned int)a1 > 0)
                {
                    v30 = 0;
                    *((unsigned long long *)&v30) = *((long long *)(0 * 9600 + a3 + v28 * 8));
                    v31 = 0;
                    do
                    {
                        v32 = 0;
                        *((unsigned long long *)&v32) = *((long long *)(0x2580 * v31 + (char *)a2));
                        xmm2<16> = (xmm2<16> * Conv(64->128, Load(addr=((rbx<8> * 0x2580<64>) + rdx<8>), size=8, endness=Iend_LE)))
                        v30 += v33;
                        *(v29) = v30;
                        v31 += 1;
                    }
                    while (v31 != a1);
                }
                v34 = 0;
                *((unsigned long long *)&v34) = *(v29);
                *((unsigned long long *)&v34) = (unsigned long long)(v34 / (v13 + 0xbff0000000000000));
                *(v29) = v34;
                *((unsigned long long *)(v28 * 9600 + a3)) = v34;
                v28 += 1;
            }
            while (v28 < v1);
            v27 = 1;
        }
        while (v1 != 1);
        return v1;
    }
    return v1;
}

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

