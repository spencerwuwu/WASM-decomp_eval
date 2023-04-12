extern char .L.str;

long long submain(unsigned int a0, unsigned long long *a1)
{
    void* v0;  // [bp-0x30]
    void* v1;  // [bp-0x28]
    unsigned int v2;  // [bp-0x1c]
    unsigned int v3;  // [bp-0xc]
    void* v6;  // rdi

    v3 = a0;
    v2 = 2000;
    v1 = polybench_alloc_data(0x7d0, 0x8);
    v0 = polybench_alloc_data(0x7d0, 0x8);
    init_array(v2, v1);
    kernel_durbin(v2, v1, v0);
    if (v3 > 42)
    {
        if (strcmp(*(a1), &.L.str) == 0)
        {
            print_array(v2, v0);
            free(v1);
            v6 = v0;
            free(rdi<8>);
            return 0;
        }
        free(v1);
        v6 = v0;
        free(rdi<8>);
        return 0;
    }
    free(v1);
    v6 = v0;
    free(rdi<8>);
    return 0;
}

int init_array(unsigned int a0, unsigned long long *a1)
{
    unsigned int v0;  // [bp-0x1c]

    for (v0 = 0; v0 < a0; v0 += 1)
    {
        a1[v0] = a0 + 1 - v0;
    }
    return;
}

int kernel_durbin(unsigned int a0, unsigned long long *a1, unsigned long long *a2)
{
    unsigned int v0;  // [bp-0x3ec8]
    int tmp_20;  // tmp #20
    unsigned int v1;  // [bp-0x3ec4]
    void* v2;  // [bp-0x3ec0]
    unsigned long long v3;  // [bp-0x3eb8]
    uint128_t v4;  // [bp-0x3eb0]
    unsigned long v5;  // [bp-0x3ea8]
    uint128_t v7;  // xmm1
    int v8;  // xmm1
    unsigned long long v9;  // xmm0lq
    uint128_t v10;  // xmm0
    uint128_t v11;  // xmm2
    int v12;  // xmm1
    uint128_t v13;  // xmm0
    uint128_t v14;  // xmm0
    uint128_t v15;  // xmm1
    uint128_t v16;  // xmm0
    uint128_t v17;  // xmm2

    *(a2) = *(a1) ^ 0x8000000000000000;
    v3 = 0x3ff0000000000000;
    *((unsigned long long *)&v4) = *(a1) ^ 0x8000000000000000;
    for (v0 = 1; v0 < a0; v0 += 1)
    {
        v7 = 0;
        *((unsigned long long *)&v7) = v4;
        t20 = (Conv(64->128, (Load(addr=stack_base-16048, size=8, endness=Iend_LE) ^ 0x8000000000000000<64>)) * xmm1<16>)
        v8 = 0;
        *((unsigned long long *)&v8) = 0x3ff0000000000000;
        xmm0lq<8> = Conv(128->64, ((t20 + xmm1<16>) * Conv(64->128, Load(addr=stack_base-16056, size=8, endness=Iend_LE))))
        v3 = v9;
        v2 = 0;
        for (v1 = 0; v1 < v0; v1 += 1)
        {
            v10 = 0;
            *((unsigned long long *)&v10) = a1[v0 - v1 - 1];
            v11 = 0;
            *((unsigned long long *)&v11) = a2[v1];
            v12 = 0;
            *((unsigned long long *)&v12) = v2;
            *((unsigned long long *)&v10) = (unsigned long long)(v10 * v11 + v12);
            v2 = (unsigned long long)v10;
        }
        v13 = 0;
        *((unsigned long long *)&v13) = a1[v0];
        xmm0<16> = (xmm0<16> + Conv(64->128, Load(addr=stack_base-16064, size=8, endness=Iend_LE)))
        *((unsigned long long *)&v14) = ((unsigned long long)v14 ^ 0x8000000000000000) / v3;
        *((unsigned long long *)&v4) = v14;
        for (v1 = 0; v1 < v0; v1 += 1)
        {
            v15 = 0;
            *((unsigned long long *)&v15) = a2[v1];
            v16 = 0;
            *((unsigned long long *)&v16) = v4;
            v17 = 0;
            *((unsigned long long *)&v17) = a2[v0 - v1 - 1];
            *((unsigned long long *)&v16) = v16 * v17 + v15;
            v5 = v16;
        }
        for (v1 = 0; v1 < v0; v1 += 1)
        {
            a2[v1] = v5;
        }
        a2[v0] = v4;
    }
    return;
}

