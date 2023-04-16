int kernel_heat_3d(unsigned long a0, unsigned int a1, unsigned long a2, unsigned long a3)
{
    unsigned int v0;  // [bp-0x3c]
    unsigned int v1;  // [bp-0x38]
    unsigned long long v3;  // rax
    int v4;  // xmm0
    int v5;  // xmm1
    unsigned long long v6;  // r14
    uint128_t v7;  // xmm3
    uint128_t v8;  // xmm4
    uint128_t v9;  // xmm5
    uint128_t v10;  // xmm5
    uint128_t v11;  // xmm4
    unsigned long long v12;  // r15
    unsigned long long v13;  // r11
    unsigned long long v14;  // r8
    unsigned long long v15;  // cc_op
    unsigned long long v16;  // cc_dep1
    unsigned long long v17;  // cc_dep2
    unsigned long long v18;  // r9
    unsigned long long v19;  // r11
    unsigned long long v20;  // r14
    unsigned long long v21;  // r15
    uint128_t v22;  // xmm3
    uint128_t v23;  // xmm4
    uint128_t v24;  // xmm5
    uint128_t v25;  // xmm5
    uint128_t v26;  // xmm4
    unsigned long long v27;  // cc_op
    unsigned long long v28;  // cc_dep1
    unsigned long long v29;  // cc_dep2
    unsigned long v30;  // cc_ndep

    v1 = a1;
    v3 = a1 - 1;
    a1 = 1;
    v4 = 0;
    *((unsigned long long *)&v4) = 0xc000000000000000;
    v5 = 0;
    *((unsigned long long *)&v5) = 0x3fc0000000000000;
    do
    {
        v0 = a1;
        if (v1 > 2)
        {
            do
            {
                v13 = 1;
                do
                {
                    v6 = v13 - 1;
                    v12 = 1;
                    do
                    {
                        v7 = 0;
                        *((unsigned long long *)&v7) = *((long long *)(a2 + 1 * 0x1c200 + v13 * 960 + v12 * 8));
                        v8 = 0;
                        *((unsigned long long *)&v8) = *((long long *)(2 * 0x1c200 + a2 + v13 * 960 + v12 * 8));
                        v9 = 0;
                        *((unsigned long long *)&v9) = *((long long *)(v13 * 960 + a2 + 1 * 0x1c200 + v12 * 8));
                        xmm5<16> = (((xmm5<16> + (xmm3<16> * xmm0<16>)) + Conv(64->128, Load(addr=(((r14<8> * 0x3c0<64>) + (rdx<8> + (0x1<64> * 0x1c200<64>))) + (r15<8> * 0x8<64>)), size=8, endness=Iend_LE))) * xmm1<16>)
                        xmm4<16> = ((((xmm4<16> + (xmm3<16> * xmm0<16>)) + Conv(64->128, Load(addr=((((0x0<64> * 0x1c200<64>) + rdx<8>) + (r11<8> * 0x3c0<64>)) + (r15<8> * 0x8<64>)), size=8, endness=Iend_LE))) * xmm1<16>) + xmm5<16>)
                        STORE(addr=((((0x1<64> * 0x1c200<64>) + rcx<8>) + (r11<8> * 0x3c0<64>)) + (r15<8> * 0x8<64>)), data=Conv(128->64, ((((((xmm3<16> * xmm0<16>) + Conv(64->128, Load(addr=((((rdx<8> + (0x1<64> * 0x1c200<64>)) + (r11<8> * 0x3c0<64>)) + (r15<8> * 0x8<64>)) + 0x8<64>), size=8, endness=Iend_LE))) + Conv(64->128, Load(addr=((((rdx<8> + (0x1<64> * 0x1c200<64>)) + (r11<8> * 0x3c0<64>)) + (r15<8> * 0x8<64>)) - 0x8<64>), size=8, endness=Iend_LE))) * xmm1<16>) + xmm4<16>) + xmm3<16>)), size=8, endness=Iend_LE, guard=None)
                        a1 = v12 + 1;
                        v12 += 1;
                    }
                    while (a1 != v3);
                    v13 = 2;
                }
                while (v3 != 2);
            }
            while (v3 != 2);
        }
        v14 = 1;
        v15 = 7;
        v16 = v1;
        v17 = 2;
        if (v1 > 2)
        {
            do
            {
                v18 = v14 + 1;
                v19 = 1;
                do
                {
                    v20 = v19 - 1;
                    v21 = 1;
                    do
                    {
                        v22 = 0;
                        *((unsigned long long *)&v22) = *((long long *)(a3 + 1 * 0x1c200 + v19 * 960 + v21 * 8));
                        v23 = 0;
                        *((unsigned long long *)&v23) = *((long long *)(2 * 0x1c200 + a3 + v19 * 960 + v21 * 8));
                        v24 = 0;
                        *((unsigned long long *)&v24) = *((long long *)(v19 * 960 + a3 + 1 * 0x1c200 + v21 * 8));
                        xmm5<16> = (((xmm5<16> + (xmm3<16> * xmm0<16>)) + Conv(64->128, Load(addr=(((r14<8> * 0x3c0<64>) + (rcx<8> + (0x1<64> * 0x1c200<64>))) + (r15<8> * 0x8<64>)), size=8, endness=Iend_LE))) * xmm1<16>)
                        xmm4<16> = ((((xmm4<16> + (xmm3<16> * xmm0<16>)) + Conv(64->128, Load(addr=((((0x0<64> * 0x1c200<64>) + rcx<8>) + (r11<8> * 0x3c0<64>)) + (r15<8> * 0x8<64>)), size=8, endness=Iend_LE))) * xmm1<16>) + xmm5<16>)
                        STORE(addr=((((0x1<64> * 0x1c200<64>) + rdx<8>) + (r11<8> * 0x3c0<64>)) + (r15<8> * 0x8<64>)), data=Conv(128->64, ((((((xmm3<16> * xmm0<16>) + Conv(64->128, Load(addr=((((rcx<8> + (0x1<64> * 0x1c200<64>)) + (r11<8> * 0x3c0<64>)) + (r15<8> * 0x8<64>)) + 0x8<64>), size=8, endness=Iend_LE))) + Conv(64->128, Load(addr=((((rcx<8> + (0x1<64> * 0x1c200<64>)) + (r11<8> * 0x3c0<64>)) + (r15<8> * 0x8<64>)) - 0x8<64>), size=8, endness=Iend_LE))) * xmm1<16>) + xmm4<16>) + xmm3<16>)), size=8, endness=Iend_LE, guard=None)
                        a1 = v21 + 1;
                        v21 += 1;
                    }
                    while (a1 != v3);
                    v19 = 2;
                }
                while (v3 != 2);
                v14 = v18;
                v27 = 8;
                v28 = v18;
                v29 = v3;
            }
            while (v18 != v3);
        }
        v30 = [D] amd64g_calculate_rflags_c(cc_op<8>, cc_dep1<8>, cc_dep2<8>, cc_ndep<8>);
        a1 = v0 + 1;
    }
    while (v0 + 1 != 501);
    return;
}

extern char .L.str.3;
extern char got.stderr;

long long submain(unsigned int a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x38], Other Possible Types: unsigned long
    unsigned long v2;  // rax
    unsigned long v5;  // rbx
    unsigned long v6;  // rax
    int v7;  // xmm0
    int v8;  // xmm1
    unsigned long long v9;  // rdx
    unsigned long v10;  // rdi
    void* v11;  // r8
    uint128_t v12;  // xmm2
    unsigned long long v13;  // rsi
    unsigned long long v14;  // rcx
    unsigned long long v17;  // r12
    unsigned long long v19;  // rbp
    unsigned long long v20;  // r13
    void* v21;  // r15

    v0 = v2;
    v5 = polybench_alloc_data(0x1a5e00, 0x8);
    (unsigned int)v6 = polybench_alloc_data(0x1a5e00, 0x8);
    v14 = 0;
    v7 = 0;
    *((unsigned long long *)&v7) = 0x4024000000000000;
    v8 = 0;
    *((unsigned long long *)&v8) = 0x405e000000000000;
    do
    {
        v9 = v14 + 120;
        v13 = 0;
        do
        {
            v10 = v9 + v13;
            v11 = 0;
            do
            {
                v12 = 0;
                *((unsigned long long *)&v12) = v10 - v11;
                *((unsigned long long *)&v12) = (unsigned long long)(v12 * v7 / v8);
                *((unsigned long long *)(v6 + 0 * 0x1c200 + v13 * 960 + v11 * 8)) = v12;
                *((unsigned long long *)(0 * 0x1c200 + v5 + v13 * 960 + v11 * 8)) = v12;
                v11 += 1;
            }
            while (v11 != 120);
            v13 = 1;
        }
        while (true);
        v14 = 1;
    }
    while (true);
    kernel_heat_3d(v10, 0x78, v5, v6);
    if (a0 >= 43)
    {
        if (*((char *)*((long long *)a1)) != 0)
        {
            free(v5);
            return 0;
        }
        fwrite("==BEGIN DUMP_ARRAYS==\n", 0x16, 0x1, *((long long *)got.stderr));
        v17 = 0;
        fprintf(*((long long *)got.stderr), "begin dump: %s", &.L.str.3);
        do
        {
            v0 = v17 * 14400;
            v19 = 0;
            do
            {
                v20 = v19 * 120 + v0;
                v21 = 0;
                while (true)
                {
                    if (((unsigned int)(v21 + v20) * 3435973837 >> 2 | (unsigned int)(v21 + v20) * 3435973837 << 30) <= 214748364)
                    {
                        fputc(0xa, *((long long *)got.stderr));
                    }
                    fprintf(*((long long *)got.stderr), "%0.2lf ");
                    v21 += 1;
                    if (v21 == 120)
                    {
                        break;
                    }
                }
                v19 = 1;
            }
            while (true);
            v17 = 1;
        }
        while (true);
        fprintf(*((long long *)got.stderr), "\nend   dump: %s\n", &.L.str.3);
        fwrite("==END   DUMP_ARRAYS==\n", 0x16, 0x1, *((long long *)got.stderr));
        free(v5);
        return 0;
    }
    free(v5);
    return 0;
}

