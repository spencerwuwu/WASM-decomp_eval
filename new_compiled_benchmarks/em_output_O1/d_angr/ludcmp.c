int kernel_ludcmp(unsigned int a0, void* a1, void* a2, void* a3, void* a4)
{
    unsigned long long v1;  // rdi
    void* v2;  // rax
    unsigned long long v3;  // r9
    uint128_t v4;  // xmm1
    uint128_t v5;  // xmm1
    void* v6;  // rbx
    uint128_t v7;  // xmm0
    unsigned long v8;  // cc_ndep
    void* v9;  // r10
    unsigned long long v10;  // r10
    uint128_t v11;  // xmm0
    unsigned long long v12;  // cc_op
    void* v13;  // rbx
    uint128_t v14;  // xmm1
    uint128_t v15;  // xmm1
    unsigned long v16;  // cc_ndep
    unsigned long long v17;  // cc_op
    unsigned long v18;  // cc_ndep
    unsigned long v19;  // cc_ndep
    void* v20;  // r9
    uint128_t v21;  // xmm0
    unsigned long long v22;  // cc_op
    void* v23;  // r10
    uint128_t v24;  // xmm1
    uint128_t v25;  // xmm1
    unsigned long v26;  // cc_ndep
    unsigned long long v27;  // cc_op
    unsigned long v28;  // cc_ndep
    unsigned long long v29;  // cc_op
    void* v30;  // cc_dep1
    void* v31;  // cc_dep2
    void* v32;  // r11
    unsigned long v33;  // cc_ndep
    void* v34;  // r10
    uint128_t v35;  // xmm1
    uint128_t v36;  // xmm1
    unsigned long v37;  // cc_ndep
    uint128_t v38;  // xmm0
    unsigned long long v39;  // cc_op
    void* v40;  // cc_dep1
    unsigned long long v41;  // cc_dep2
    void* v42;  // r9

    v2 = v1;
    if ((unsigned int)v1 > 0)
    {
        v3 = 0;
        do
        {
            v10 = v3;
            if (v3 != 0)
            {
                v9 = 0;
                do
                {
                    v7 = 0;
                    *((unsigned long long *)&v7) = *((long long *)((char *)a1 + 0x8 * v9));
                    if (v9 != 0)
                    {
                        v6 = 0;
                        do
                        {
                            v4 = 0;
                            *((unsigned long long *)&v4) = *((long long *)((char *)a1 + 0x8 * v6));
                            xmm1<16> = (xmm1<16> * Conv(64->128, Load(addr=((rbx<8> * 0x3e80<64>) + rsi<8>), size=8, endness=Iend_LE)))
                            v7 -= v5;
                            v6 += 1;
                        }
                        while (v6 != 0);
                    }
                    xmm0lq<8> = Conv(128->64, (xmm0<16> / Conv(64->128, Load(addr=(((r10<8> * 0x3e80<64>) + rsi<8>) + (r10<8> * 0x8<64>)), size=8, endness=Iend_LE))))
                    *((unsigned long long *)((char *)a1 + 0x8 * v9)) = v7;
                    v8 = (v9 * 16000 + a1 <= v9 * 16000? 1 : 0);
                    v9 += 1;
                }
                while (v9 != 0);
                v10 = 0;
            }
            do
            {
                v11 = 0;
                *((unsigned long long *)&v11) = *((long long *)&((char *)a1)[16000 * v3 + 8 * v10]);
                v12 = 20;
                if (v3 != 0)
                {
                    v13 = 0;
                    do
                    {
                        v14 = 0;
                        *((unsigned long long *)&v14) = *((long long *)((char *)a1 + 0x8 * v13));
                        xmm1<16> = (xmm1<16> * Conv(64->128, Load(addr=((rbx<8> * 0x3e80<64>) + rsi<8>), size=8, endness=Iend_LE)))
                        v11 -= v15;
                        v16 = (v13 * 16000 + a1 <= v13 * 16000? 1 : 0);
                        v13 += 1;
                        v17 = 8;
                    }
                    while (v13 != 0);
                }
                *((unsigned long long *)&((char *)a1)[8 * v10]) = v11;
                v18 = [D] amd64g_calculate_rflags_c(cc_op<8>, 0x0<64>, 0x0<64>, cc_ndep<8>);
                v10 += 1;
            }
            while (v10 != v1);
            v19 = v10 < v1;
            v3 = 1;
        }
        while (v1 != 1);
    }
    if ((unsigned int)v1 > 0)
    {
        v20 = 0;
        do
        {
            v21 = 0;
            *((unsigned long long *)&v21) = *((long long *)((char *)a2 + 0x8 * v20));
            v22 = 20;
            if (v20 != 0)
            {
                v23 = 0;
                do
                {
                    v24 = 0;
                    *((unsigned long long *)&v24) = *((long long *)((char *)a1 + 0x8 * v23));
                    xmm1<16> = (xmm1<16> * Conv(64->128, Load(addr=(r8<8> + (r10<8> * 0x8<64>)), size=8, endness=Iend_LE)))
                    v21 -= v25;
                    v26 = (0 * 16000 + a1 <= 0 * 16000? 1 : 0);
                    v23 += 1;
                    v27 = 8;
                }
                while (v23 != 0);
            }
            *((unsigned long long *)((char *)a4 + 0x8 * v20)) = v21;
            v28 = [D] amd64g_calculate_rflags_c(cc_op<8>, 0x0<64>, 0x0<64>, cc_ndep<8>);
            v20 += 1;
        }
        while (v20 != v1);
    }
    v29 = 19;
    v30 = v1;
    v31 = 0;
    if ((unsigned int)v1 > 0)
    {
        v42 = v1;
        do
        {
            v32 = v42;
            v33 = [D] amd64g_calculate_rflags_c(cc_op<8>, cc_dep1<8>, cc_dep2<8>, cc_ndep<8>);
            v42 -= 1;
            v34 = v42;
            v38 = 0;
            *((unsigned long long *)&v38) = *((long long *)((char *)a4 + 0x8 * v42));
            if (v2 < v1)
            {
                do
                {
                    v35 = 0;
                    *((unsigned long long *)&v35) = *((long long *)(0x3e80 * v34 + (char *)a1 + 0x8 * v32));
                    xmm1<16> = (xmm1<16> * Conv(64->128, Load(addr=(rcx<8> + (r11<8> * 0x8<64>)), size=8, endness=Iend_LE)))
                    v38 -= v36;
                    v37 = (v34 * 16000 + a1 <= v34 * 16000? 1 : 0);
                    v32 += 1;
                }
                while ((unsigned int)v32 != (unsigned int)v1);
            }
            xmm0lq<8> = Conv(128->64, (xmm0<16> / Conv(64->128, Load(addr=(((r10<8> * 0x3e80<64>) + rsi<8>) + (r10<8> * 0x8<64>)), size=8, endness=Iend_LE))))
            *((unsigned long long *)((char *)a3 + 0x8 * v34)) = v38;
            v39 = 8;
            v40 = v2;
            v41 = 1;
            v2 -= 1;
        }
        while (v40 > 1);
        return;
    }
    return;
}

extern char .L.str.3;
extern char got.stderr;

long long submain(unsigned int a0, unsigned long a1)
{
    unsigned int v0;  // [bp-0x54]
    void* v1;  // [bp-0x50]
    char **v2;  // [bp-0x48]
    void* v3;  // [bp-0x40]
    void* v4;  // [bp-0x38]
    void* v6;  // rbx
    int v10;  // xmm3
    int v11;  // xmm0
    int v12;  // xmm1
    unsigned long long v13;  // rcx
    uint128_t v14;  // xmm2
    void* v15;  // rdx
    int v17;  // xmm1
    unsigned long long v18;  // r12
    void* v19;  // rax
    uint128_t v20;  // xmm0
    unsigned long long v21;  // r15
    int v23;  // xmm1
    int v24;  // xmm3
    unsigned long long v25;  // r13
    void* v26;  // rax
    void* v27;  // r13
    void* v31;  // r15
    void* v32;  // r12
    unsigned long long v33;  // rcx
    unsigned long long v34;  // rdx
    unsigned long long *v35;  // rsi
    void* v36;  // rdi
    uint128_t v37;  // xmm0
    unsigned long long v38;  // rax
    void* v39;  // rax
    unsigned long long v40;  // rbp
    void* v41;  // r14
    void* v44;  // r14

    v2 = a1;
    v0 = a0;
    v6 = polybench_alloc_data(0x3d0900, 0x8);
    v21 = 0;
    v10 = 0;
    *((unsigned long long *)&v10) = 0x409f400000000000;
    v11 = 0;
    *((unsigned long long *)&v11) = 0x3fe0000000000000;
    v12 = 0;
    *((unsigned long long *)&v12) = 0x4010000000000000;
    v15 = 0;
    do
    {
        *((long long *)((char *)v3 + 0x8 * v15)) = 0;
        *((long long *)((char *)v1 + 0x8 * v15)) = 0;
        v13 = v15 + 1;
        v14 = 0;
        *((unsigned long long *)&v14) = v15 + 1;
        *((unsigned long long *)&v14) = (unsigned long long)(v14 / v10 * v11 + v12);
        *((unsigned long long *)((char *)v4 + 0x8 * v15)) = v14;
        v15 += 1;
    }
    while (v13 != 2000);
    *((int *)&v1) = polybench_alloc_data(0x7d0, 0x8);
    v3 = polybench_alloc_data(0x7d0, 0x8);
    v4 = polybench_alloc_data(0x7d0, 0x8);
    v17 = 0;
    *((unsigned long long *)&v17) = 0x3ff0000000000000;
    do
    {
        v18 = v21;
        v19 = 0;
        do
        {
            v20 = 0;
            *((unsigned long long *)&v20) = 0 - (unsigned int)v19;
            *((unsigned long long *)&v20) = (unsigned long long)(v20 / v10 + v17);
            *((unsigned long long *)(&((char *)v6)[16000 * v18] + 0x8 * v19)) = v20;
            v19 += 1;
        }
        while (v19 != 1);
        v21 = 1;
        memset(0 * 16008 + 8 + v6, 0x0, 0x3e78);
        v23 = 0;
        *((unsigned long long *)&v23) = 0x3ff0000000000000;
        v24 = 0;
        *((unsigned long long *)&v24) = 0x409f400000000000;
        *((long long *)v6) = 0x3ff0000000000000;
        v25 = 2;
    }
    while (true);
    (unsigned int)v26 = polybench_alloc_data(0x3d0900, 0x8);
    v27 = v26;
    memset(v26, 0x0, 0x1e84800);
    v31 = v4;
    v32 = v3;
    do
    {
        v33 = 0;
        do
        {
            v34 = v33 * 16000;
            v35 = v6 + v33 * 16000 + 0 * 8;
            v36 = 0;
            do
            {
                v37 = 0;
                *((unsigned long long *)&v37) = *(v35);
                xmm0lq<8> = Conv(128->64, ((xmm0<16> * Conv(64->128, Load(addr=((rdi<8> * 0x3e80<64>) + rbx<8>), size=8, endness=Iend_LE))) + Conv(64->128, Load(addr=((rdx<8> + r13<8>) + (rdi<8> * 0x8<64>)), size=8, endness=Iend_LE))))
                *((unsigned long long *)(&((char *)v27)[v34] + 0x8 * v36)) = v37;
                v36 += 1;
            }
            while (v36 != 2000);
            v33 = 1;
        }
        while (true);
        v38 = 1;
    }
    while (true);
    do
    {
        v39 = 0;
        do
        {
            *((long long *)((char *)v6 + 0x8 * v39)) = *((long long *)((char *)v27 + 0x8 * v39));
            v39 += 1;
        }
        while (v39 != 2000);
        v40 = 1;
    }
    while (true);
    free(v27);
    v41 = v1;
    kernel_ludcmp(0x7d0, v6, v4, v3, v1);
    if (v0 >= 43)
    {
        if (*(*(v2)) != 0)
        {
            free(v6);
            free(v31);
            free(v32);
            free(v41);
            return 0;
        }
        fwrite("==BEGIN DUMP_ARRAYS==\n", 0x16, 0x1, *((long long *)got.stderr));
        v44 = 0;
        fprintf(*((long long *)got.stderr), "begin dump: %s", &.L.str.3);
        while (true)
        {
            if (((unsigned int)v44 * 3435973837 >> 2 | (unsigned int)v44 * 3435973837 << 30) <= 214748364)
            {
                fputc(0xa, *((long long *)got.stderr));
            }
            fprintf(*((long long *)got.stderr), "%0.2lf ");
            v44 += 1;
            if (v44 == 2000)
            {
                break;
            }
        }
        fprintf(*((long long *)got.stderr), "\nend   dump: %s\n", &.L.str.3);
        fwrite("==END   DUMP_ARRAYS==\n", 0x16, 0x1, *((long long *)got.stderr));
        free(v6);
        free(v31);
        free(v32);
        free(v41);
        return 0;
    }
    free(v6);
    free(v31);
    free(v32);
    free(v41);
    return 0;
}

