long long kernel_jacobi_2d(unsigned int a0, unsigned int a1, unsigned long a2, unsigned long a3)
{
    unsigned long long v1;  // rsi
    unsigned long long v2;  // rax
    int v3;  // xmm0
    unsigned long v4;  // rax
    unsigned long long v5;  // r11
    uint128_t v6;  // xmm1
    unsigned long long v7;  // r14
    unsigned long long v8;  // rbx
    unsigned long long v9;  // r9
    unsigned long long v10;  // r9
    unsigned long long v11;  // cc_op
    unsigned long long v12;  // cc_dep1
    unsigned long long v13;  // cc_dep2
    unsigned long long v14;  // r10
    unsigned long long v15;  // r11
    unsigned long long v16;  // rbx
    uint128_t v17;  // xmm1
    unsigned long long v18;  // r14
    unsigned long long v19;  // cc_op
    unsigned long long v20;  // cc_dep1
    unsigned long long v21;  // cc_dep2
    unsigned long v22;  // cc_ndep

    if (a0 > 0)
    {
        v2 = v1 - 1;
        v3 = 0;
        *((unsigned long long *)&v3) = 4596373779694328218;
        do
        {
            v9 = 1;
            if ((unsigned int)v1 > 2)
            {
                do
                {
                    v5 = v9 - 1;
                    v8 = 1;
                    do
                    {
                        v6 = 0;
                        *((unsigned long long *)&v6) = *((long long *)(a2 + v9 * 10400 + v8 * 8));
                        xmm1lq<8> = Conv(128->64, (((((xmm1<16> + Conv(64->128, Load(addr=(((rdx<8> + (r9<8> * 0x28a0<64>)) + (rbx<8> * 0x8<64>)) - 0x8<64>), size=8, endness=Iend_LE))) + Conv(64->128, Load(addr=(((rdx<8> + (r9<8> * 0x28a0<64>)) + (rbx<8> * 0x8<64>)) + 0x8<64>), size=8, endness=Iend_LE))) + Conv(64->128, Load(addr=(((r9<8> * 0x28a0<64>) + rdx<8>) + (rbx<8> * 0x8<64>)), size=8, endness=Iend_LE))) + Conv(64->128, Load(addr=(((r11<8> * 0x28a0<64>) + rdx<8>) + (rbx<8> * 0x8<64>)), size=8, endness=Iend_LE))) * xmm0<16>))
                        *((unsigned long long *)(v9 * 10400 + a3 + v8 * 8)) = v6;
                        v7 = v8 + 1;
                        v8 += 1;
                    }
                    while (v7 != v1 - 1);
                    v9 = 2;
                }
                while (v1 - 1 != 2);
            }
            v10 = 1;
            v11 = 7;
            v12 = v1;
            v13 = 2;
            if ((unsigned int)v1 > 2)
            {
                do
                {
                    v14 = v10 + 1;
                    v15 = v10 - 1;
                    v16 = 1;
                    do
                    {
                        v17 = 0;
                        *((unsigned long long *)&v17) = *((long long *)(a3 + v10 * 10400 + v16 * 8));
                        xmm1lq<8> = Conv(128->64, (((((xmm1<16> + Conv(64->128, Load(addr=(((rcx<8> + (r9<8> * 0x28a0<64>)) + (rbx<8> * 0x8<64>)) - 0x8<64>), size=8, endness=Iend_LE))) + Conv(64->128, Load(addr=(((rcx<8> + (r9<8> * 0x28a0<64>)) + (rbx<8> * 0x8<64>)) + 0x8<64>), size=8, endness=Iend_LE))) + Conv(64->128, Load(addr=(((r10<8> * 0x28a0<64>) + rcx<8>) + (rbx<8> * 0x8<64>)), size=8, endness=Iend_LE))) + Conv(64->128, Load(addr=(((r11<8> * 0x28a0<64>) + rcx<8>) + (rbx<8> * 0x8<64>)), size=8, endness=Iend_LE))) * xmm0<16>))
                        *((unsigned long long *)(v10 * 10400 + a2 + v16 * 8)) = v17;
                        v18 = v16 + 1;
                        v16 += 1;
                    }
                    while (v18 != v1 - 1);
                    v10 = v14;
                    v19 = 8;
                    v20 = v14;
                    v21 = v2;
                }
                while (v14 != v2);
            }
            v22 = [D] amd64g_calculate_rflags_c(cc_op<8>, cc_dep1<8>, cc_dep2<8>, cc_ndep<8>);
        }
        while (a0 != 1);
        return v1 - 1;
    }
    return v4;
}

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
    int v9;  // xmm2
    int v10;  // xmm3
    void* v11;  // rcx
    uint128_t v12;  // xmm4
    uint128_t v13;  // xmm5
    unsigned long long v14;  // rax
    int v15;  // xmm0
    unsigned long long v16;  // rdx
    unsigned long long v17;  // rcx
    unsigned long long v18;  // rdi
    uint128_t v19;  // xmm1
    unsigned long long v20;  // r8
    unsigned long long v21;  // rcx
    unsigned long long v22;  // rsi
    unsigned long long v23;  // rdi
    uint128_t v24;  // xmm1
    unsigned long long v25;  // r8
    unsigned long long v27;  // r13
    unsigned long long v29;  // rbp
    void* v30;  // r12

    v0 = v2;
    v5 = polybench_alloc_data(0x19c990, 0x8);
    v6 = polybench_alloc_data(0x19c990, 0x8);
    v14 = 0;
    v7 = 0;
    *((unsigned long long *)&v7) = 0x4000000000000000;
    v8 = 0;
    *((unsigned long long *)&v8) = 0x4094500000000000;
    v9 = 0;
    *((unsigned long long *)&v9) = 0x4008000000000000;
    do
    {
        v10 = 0;
        *((unsigned long long *)&v10) = v14;
        v11 = 0;
        do
        {
            v12 = 0;
            *((unsigned long long *)&v12) = v11 + 2;
            *((unsigned long long *)&v12) = (unsigned long long)((v12 * v10 + v7) / v8);
            v13 = 0;
            *((unsigned long long *)&v13) = v11 + 3;
            *((unsigned long long *)(&((char *)v5)[10400 * v14] + 0x8 * v11)) = v12;
            *((unsigned long long *)&v13) = (unsigned long long)((v13 * v10 + v9) / v8);
            *((unsigned long long *)(&((char *)v6)[10400 * v14] + 0x8 * v11)) = v13;
            v11 += 1;
        }
        while (v11 != 1300);
        v14 = 1;
    }
    while (true);
    v15 = 0;
    *((unsigned long long *)&v15) = 4596373779694328218;
    do
    {
        v16 = 1;
        do
        {
            v17 = v16 - 1;
            v18 = 1;
            do
            {
                v19 = 0;
                *((unsigned long long *)&v19) = *((long long *)&((char *)v5)[10400 * v16 + 8 * v18]);
                xmm1lq<8> = Conv(128->64, (((((xmm1<16> + Conv(64->128, Load(addr=(((rbx<8> + (rdx<8> * 0x28a0<64>)) + (rdi<8> * 0x8<64>)) - 0x8<64>), size=8, endness=Iend_LE))) + Conv(64->128, Load(addr=(((rbx<8> + (rdx<8> * 0x28a0<64>)) + (rdi<8> * 0x8<64>)) + 0x8<64>), size=8, endness=Iend_LE))) + Conv(64->128, Load(addr=(((rdx<8> * 0x28a0<64>) + rbx<8>) + (rdi<8> * 0x8<64>)), size=8, endness=Iend_LE))) + Conv(64->128, Load(addr=(((rcx<8> * 0x28a0<64>) + rbx<8>) + (rdi<8> * 0x8<64>)), size=8, endness=Iend_LE))) * xmm0<16>))
                *((unsigned long long *)&((char *)v6)[10400 * v16 + 8 * v18]) = v19;
                v20 = v18 + 1;
                v18 += 1;
            }
            while (v20 != 1299);
            v21 = 1;
            v16 = 2;
        }
        while (true);
        do
        {
            v22 = v21 - 1;
            v23 = 1;
            do
            {
                v24 = 0;
                *((unsigned long long *)&v24) = *((long long *)&((char *)v6)[10400 * v21 + 8 * v23]);
                xmm1lq<8> = Conv(128->64, (((((xmm1<16> + Conv(64->128, Load(addr=(((r14<8> + (rcx<8> * 0x28a0<64>)) + (rdi<8> * 0x8<64>)) - 0x8<64>), size=8, endness=Iend_LE))) + Conv(64->128, Load(addr=(((r14<8> + (rcx<8> * 0x28a0<64>)) + (rdi<8> * 0x8<64>)) + 0x8<64>), size=8, endness=Iend_LE))) + Conv(64->128, Load(addr=(((rcx<8> * 0x28a0<64>) + r14<8>) + (rdi<8> * 0x8<64>)), size=8, endness=Iend_LE))) + Conv(64->128, Load(addr=(((rsi<8> * 0x28a0<64>) + r14<8>) + (rdi<8> * 0x8<64>)), size=8, endness=Iend_LE))) * xmm0<16>))
                *((unsigned long long *)&((char *)v5)[10400 * v21 + 8 * v23]) = v24;
                v25 = v23 + 1;
                v23 += 1;
            }
            while (v25 != 1299);
            v21 = 2;
        }
        while (true);
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
        v27 = 0;
        fprintf(*((long long *)got.stderr), "begin dump: %s", &.L.str.3);
        do
        {
            v29 = v27 * 1300;
            v30 = 0;
            while (true)
            {
                if (((unsigned int)(v30 + v29) * 3435973837 >> 2 | (unsigned int)(v30 + v29) * 3435973837 << 30) <= 214748364)
                {
                    fputc(0xa, *((long long *)got.stderr));
                }
                fprintf(*((long long *)got.stderr), "%0.2lf ");
                v30 += 1;
                if (v30 == 1300)
                {
                    break;
                }
            }
            v27 = 1;
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

