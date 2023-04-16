int kernel_heat_3d(unsigned int a0, unsigned int a1, unsigned long a2, unsigned long a3)
{
    unsigned int v0;  // [bp-0x30]
    int tmp_238;  // tmp #238
    int tmp_323;  // tmp #323
    int tmp_97;  // tmp #97
    unsigned int v1;  // [bp-0x2c]
    unsigned int v2;  // [bp-0x28]
    unsigned int v3;  // [bp-0x24]
    unsigned long v4;  // [bp-0x20]
    unsigned long v5;  // [bp-0x18]
    unsigned int v6;  // [bp-0xc]
    uint128_t v8;  // xmm1
    uint128_t v9;  // xmm0
    uint128_t v10;  // xmm2
    uint128_t v11;  // xmm0
    int v12;  // xmm0
    int v13;  // xmm2
    uint128_t v14;  // xmm1
    uint128_t v15;  // xmm0
    uint128_t v16;  // xmm2
    int v17;  // xmm2
    uint128_t v18;  // xmm1
    uint128_t v19;  // xmm0
    uint128_t v20;  // xmm2
    uint128_t v21;  // xmm0
    int v22;  // xmm0
    int v23;  // xmm2
    uint128_t v24;  // xmm1
    uint128_t v25;  // xmm0
    uint128_t v26;  // xmm2
    int v27;  // xmm2

    v6 = a0;
    v5 = a2;
    v4 = a3;
    for (v3 = 1; v3 <= 500; v3 += 1)
    {
        for (v2 = 1; v2 < a1 - 1; v2 += 1)
        {
            for (v1 = 1; v1 < a1 - 1; v1 += 1)
            {
                for (v0 = 1; v0 < a1 - 1; v0 += 1)
                {
                    v8 = 0;
                    *((unsigned long long *)&v8) = *((long long *)(a2 + (v2 + 1) * 0x1c200 + v1 * 960 + v0 * 8));
                    v9 = 0;
                    *((unsigned long long *)&v9) = *((long long *)(a2 + v2 * 0x1c200 + v1 * 960 + v0 * 8));
                    t238 = ((xmm1<16> - (xmm0<16> * 0x2<8>)) + Conv(64->128, Load(addr=(((rdx<8> + (Conv(32->s64, (Load(addr=stack_base-40, size=4, endness=Iend_LE) - 0x1<32>)) * 0x1c200<64>)) + (Conv(32->s64, Load(addr=stack_base-44, size=4, endness=Iend_LE)) * 0x3c0<64>)) + (Conv(32->s64, Load(addr=stack_base-48, size=4, endness=Iend_LE)) * 0x8<64>)), size=8, endness=Iend_LE)))
                    v10 = 0;
                    *((unsigned long long *)&v10) = *((long long *)(a2 + v2 * 0x1c200 + (v1 + 1) * 960 + v0 * 8));
                    v11 = 0;
                    *((unsigned long long *)&v11) = *((long long *)(a2 + v2 * 0x1c200 + v1 * 960 + v0 * 8));
                    t323 = ((xmm2<16> - (xmm0<16> * 0x2<8>)) + Conv(64->128, Load(addr=(((rdx<8> + (Conv(32->s64, Load(addr=stack_base-40, size=4, endness=Iend_LE)) * 0x1c200<64>)) + (Conv(32->s64, (Load(addr=stack_base-44, size=4, endness=Iend_LE) - 0x1<32>)) * 0x3c0<64>)) + (Conv(32->s64, Load(addr=stack_base-48, size=4, endness=Iend_LE)) * 0x8<64>)), size=8, endness=Iend_LE)))
                    v12 = 0;
                    *((unsigned long long *)&v12) = 0x3fc0000000000000;
                    v13 = 0;
                    *((unsigned long long *)&v13) = 0x3fc0000000000000;
                    v14 = tmp_238 * v13 + v12 * tmp_323;
                    v15 = 0;
                    *((unsigned long long *)&v15) = *((long long *)(a2 + v2 * 0x1c200 + v1 * 960 + (v0 + 1) * 8));
                    v16 = 0;
                    *((unsigned long long *)&v16) = *((long long *)(a2 + v2 * 0x1c200 + v1 * 960 + v0 * 8));
                    t97 = ((xmm0<16> - (xmm2<16> * 0x2<8>)) + Conv(64->128, Load(addr=(((rdx<8> + (Conv(32->s64, Load(addr=stack_base-40, size=4, endness=Iend_LE)) * 0x1c200<64>)) + (Conv(32->s64, Load(addr=stack_base-44, size=4, endness=Iend_LE)) * 0x3c0<64>)) + (Conv(32->s64, (Load(addr=stack_base-48, size=4, endness=Iend_LE) - 0x1<32>)) * 0x8<64>)), size=8, endness=Iend_LE)))
                    v17 = 0;
                    *((unsigned long long *)&v17) = 0x3fc0000000000000;
                    xmm0lq<8> = Conv(128->64, (((t97 * xmm2<16>) + xmm1<16>) + Conv(64->128, Load(addr=(((rdx<8> + (Conv(32->s64, Load(addr=stack_base-40, size=4, endness=Iend_LE)) * 0x1c200<64>)) + (Conv(32->s64, Load(addr=stack_base-44, size=4, endness=Iend_LE)) * 0x3c0<64>)) + (Conv(32->s64, Load(addr=stack_base-48, size=4, endness=Iend_LE)) * 0x8<64>)), size=8, endness=Iend_LE))))
                    *((unsigned long long *)(a3 + v2 * 0x1c200 + v1 * 960 + v0 * 8)) = v15;
                }
            }
        }
        for (v2 = 1; v2 < a1 - 1; v2 += 1)
        {
            for (v1 = 1; v1 < a1 - 1; v1 += 1)
            {
                for (v0 = 1; v0 < a1 - 1; v0 += 1)
                {
                    v18 = 0;
                    *((unsigned long long *)&v18) = *((long long *)(a3 + (v2 + 1) * 0x1c200 + v1 * 960 + v0 * 8));
                    v19 = 0;
                    *((unsigned long long *)&v19) = *((long long *)(a3 + v2 * 0x1c200 + v1 * 960 + v0 * 8));
                    t238 = ((xmm1<16> - (xmm0<16> * 0x2<8>)) + Conv(64->128, Load(addr=(((rcx<8> + (Conv(32->s64, (Load(addr=stack_base-40, size=4, endness=Iend_LE) - 0x1<32>)) * 0x1c200<64>)) + (Conv(32->s64, Load(addr=stack_base-44, size=4, endness=Iend_LE)) * 0x3c0<64>)) + (Conv(32->s64, Load(addr=stack_base-48, size=4, endness=Iend_LE)) * 0x8<64>)), size=8, endness=Iend_LE)))
                    v20 = 0;
                    *((unsigned long long *)&v20) = *((long long *)(a3 + v2 * 0x1c200 + (v1 + 1) * 960 + v0 * 8));
                    v21 = 0;
                    *((unsigned long long *)&v21) = *((long long *)(a3 + v2 * 0x1c200 + v1 * 960 + v0 * 8));
                    t323 = ((xmm2<16> - (xmm0<16> * 0x2<8>)) + Conv(64->128, Load(addr=(((rcx<8> + (Conv(32->s64, Load(addr=stack_base-40, size=4, endness=Iend_LE)) * 0x1c200<64>)) + (Conv(32->s64, (Load(addr=stack_base-44, size=4, endness=Iend_LE) - 0x1<32>)) * 0x3c0<64>)) + (Conv(32->s64, Load(addr=stack_base-48, size=4, endness=Iend_LE)) * 0x8<64>)), size=8, endness=Iend_LE)))
                    v22 = 0;
                    *((unsigned long long *)&v22) = 0x3fc0000000000000;
                    v23 = 0;
                    *((unsigned long long *)&v23) = 0x3fc0000000000000;
                    v24 = tmp_238 * v23 + v22 * tmp_323;
                    v25 = 0;
                    *((unsigned long long *)&v25) = *((long long *)(a3 + v2 * 0x1c200 + v1 * 960 + (v0 + 1) * 8));
                    v26 = 0;
                    *((unsigned long long *)&v26) = *((long long *)(a3 + v2 * 0x1c200 + v1 * 960 + v0 * 8));
                    t97 = ((xmm0<16> - (xmm2<16> * 0x2<8>)) + Conv(64->128, Load(addr=(((rcx<8> + (Conv(32->s64, Load(addr=stack_base-40, size=4, endness=Iend_LE)) * 0x1c200<64>)) + (Conv(32->s64, Load(addr=stack_base-44, size=4, endness=Iend_LE)) * 0x3c0<64>)) + (Conv(32->s64, (Load(addr=stack_base-48, size=4, endness=Iend_LE) - 0x1<32>)) * 0x8<64>)), size=8, endness=Iend_LE)))
                    v27 = 0;
                    *((unsigned long long *)&v27) = 0x3fc0000000000000;
                    xmm0lq<8> = Conv(128->64, (((t97 * xmm2<16>) + xmm1<16>) + Conv(64->128, Load(addr=(((rcx<8> + (Conv(32->s64, Load(addr=stack_base-40, size=4, endness=Iend_LE)) * 0x1c200<64>)) + (Conv(32->s64, Load(addr=stack_base-44, size=4, endness=Iend_LE)) * 0x3c0<64>)) + (Conv(32->s64, Load(addr=stack_base-48, size=4, endness=Iend_LE)) * 0x8<64>)), size=8, endness=Iend_LE))))
                    *((unsigned long long *)(a2 + v2 * 0x1c200 + v1 * 960 + v0 * 8)) = v25;
                }
            }
        }
    }
    return;
}

extern char .L.str;

long long submain(unsigned int a0, unsigned long long *a1)
{
    unsigned long v0;  // [bp-0x30]
    unsigned long v1;  // [bp-0x28]
    unsigned int v2;  // [bp-0x20]
    unsigned int v3;  // [bp-0x1c]

    v3 = 120;
    v2 = 500;
    v1 = polybench_alloc_data(0x1a5e00, 0x8);
    v0 = polybench_alloc_data(0x1a5e00, 0x8);
    init_array(v3, v1, v0);
    kernel_heat_3d(v2, v3, v1, v0);
    if (a0 > 42)
    {
        if (strcmp(*(a1), &.L.str) == 0)
        {
            print_array(v3, v1);
            free(v1);
            return 0;
        }
        free(v1);
        return 0;
    }
    free(v1);
    return 0;
}

int init_array(unsigned int a0, unsigned long a1, unsigned long a2)
{
    unsigned int v0;  // [bp-0x2c]
    int tmp_89;  // tmp #89
    unsigned int v1;  // [bp-0x28]
    unsigned int v2;  // [bp-0x24]
    unsigned long long v4;  // xmm0lq
    int v5;  // xmm1
    int v7;  // xmm0

    for (v2 = 0; v2 < a0; v2 += 1)
    {
        for (v1 = 0; v1 < a0; v1 += 1)
        {
            for (v0 = 0; v0 < a0; v0 += 1)
            {
                v4 = v2 + v1 + a0 - v0;
                v5 = 0;
                *((unsigned long long *)&v5) = 0x4024000000000000;
                tmp_89 = xmm0<16> * v5;
                *((unsigned long long *)&v5) = a0;
                v7 = tmp_89 / v5;
                *((unsigned long long *)(a2 + v2 * 0x1c200 + v1 * 960 + v0 * 8)) = (unsigned long long)v7;
                *((unsigned long long *)(a1 + v2 * 0x1c200 + v1 * 960 + v0 * 8)) = (unsigned long long)v7;
            }
        }
    }
    return;
}

extern char .L.str.3;
extern char got.stderr;

int print_array(unsigned int a0, unsigned long a1)
{
    unsigned int v0;  // [bp-0x24]
    unsigned int v1;  // [bp-0x20]
    unsigned int v2;  // [bp-0x1c]
    unsigned long v3;  // [bp-0x18]

    v3 = a1;
    fprintf(*((long long *)got.stderr), "==BEGIN DUMP_ARRAYS==\n");
    fprintf(*((long long *)got.stderr), "begin dump: %s", &.L.str.3);
    for (v2 = 0; v2 < a0; v2 += 1)
    {
        for (v1 = 0; v1 < a0; v1 += 1)
        {
            for (v0 = 0; v0 < a0; v0 += 1)
            {
                if ((a0 * a0 * v2 + a0 * v1 + v0 >> 31 CONCAT a0 * a0 * v2 + a0 * v1 + v0) /m 20 >> 32 == 0)
                {
                    fprintf(*((long long *)got.stderr), "\n");
                }
                fprintf(*((long long *)got.stderr), "%0.2lf ");
            }
        }
    }
    fprintf(*((long long *)got.stderr), "\nend   dump: %s\n", &.L.str.3);
    fprintf(*((long long *)got.stderr), "==END   DUMP_ARRAYS==\n");
    return;
}

