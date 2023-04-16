int init_array(unsigned int a0, unsigned int a1, unsigned long a2, unsigned long long *a3)
{
    unsigned int v0;  // [bp-0x28]
    unsigned int v1;  // [bp-0x24]
    unsigned long long v3;  // xmm1lq
    uint128_t v5;  // xmm1
    int v6;  // xmm0

    for (v1 = 0; v1 < a1; v1 += 1)
    {
        v3 = v1;
        xmm1<16> = (xmm1<16> / Conv(32->128, esi<4>))
        v6 = 0;
        *((unsigned long long *)&v6) = 0x3ff0000000000000;
        *((unsigned long long *)&v6) = (unsigned long long)(v6 + v5);
        a3[v1] = (unsigned long long)v6;
    }
    for (v1 = 0; v1 < a0; v1 += 1)
    {
        for (v0 = 0; v0 < a1; v0 += 1)
        {
            *((unsigned long long *)&v5) = a0 * 5;
            *((unsigned long long *)(a2 + v1 * 16800 + v0 * 8)) = ((v1 + v0 >> 31 CONCAT v1 + v0) /m a1 >> 32) / v5;
        }
    }
    return;
}

int kernel_atax(unsigned int a0, unsigned int a1, unsigned long a2, unsigned long long *a3, unsigned long long *a4, unsigned long long *a5)
{
    unsigned int v0;  // [bp-0x38]
    unsigned int v1;  // [bp-0x34]
    uint128_t v3;  // xmm1
    uint128_t v4;  // xmm0
    uint128_t v5;  // xmm2
    uint128_t v6;  // xmm1
    uint128_t v7;  // xmm0
    uint128_t v8;  // xmm2

    for (v1 = 0; v1 < a1; v1 += 1)
    {
        a4[v1] = 0;
    }
    for (v1 = 0; v1 < a0; v1 += 1)
    {
        a5[v1] = 0;
        for (v0 = 0; v0 < a1; v0 += 1)
        {
            v3 = 0;
            *((unsigned long long *)&v3) = a5[v1];
            v4 = 0;
            *((unsigned long long *)&v4) = *((long long *)(a2 + v1 * 16800 + v0 * 8));
            v5 = 0;
            *((unsigned long long *)&v5) = a3[v0];
            *((unsigned long long *)&v4) = v4 * v5 + v3;
            a5[v1] = v4;
        }
        for (v0 = 0; v0 < a1; v0 += 1)
        {
            v6 = 0;
            *((unsigned long long *)&v6) = a4[v0];
            v7 = 0;
            *((unsigned long long *)&v7) = *((long long *)(a2 + v1 * 16800 + v0 * 8));
            v8 = 0;
            *((unsigned long long *)&v8) = a5[v1];
            *((unsigned long long *)&v7) = v7 * v8 + v6;
            a4[v0] = v7;
        }
    }
    return;
}

extern char .L.str.7;

long long submain(unsigned int a0, unsigned long long *a1)
{
    void* v0;  // [bp-0x40]
    void* v1;  // [bp-0x38]
    void* v2;  // [bp-0x30]
    unsigned long v3;  // [bp-0x28]
    unsigned int v4;  // [bp-0x20]
    unsigned int v5;  // [bp-0x1c]
    unsigned int v6;  // [bp-0xc]
    void* v11;  // rdi
    void* v12;  // rdi
    void* v13;  // rdi

    v6 = a0;
    v5 = 1900;
    v4 = 2100;
    v3 = polybench_alloc_data(0x3ce1f0, 0x8);
    v2 = polybench_alloc_data(0x834, 0x8);
    v1 = polybench_alloc_data(0x834, 0x8);
    v0 = polybench_alloc_data(0x76c, 0x8);
    init_array(v5, v4, v3, v2);
    kernel_atax(v5, v4, v3, v2, v1, v0);
    if (v6 > 42)
    {
        if (strcmp(*(a1), &.L.str.7) == 0)
        {
            print_array(v4, v1);
            free(v3);
            v11 = v2;
            free(rdi<8>);
            v12 = v1;
            free(rdi<8>);
            v13 = v0;
            free(rdi<8>);
            return 0;
        }
        free(v3);
        v11 = v2;
        free(rdi<8>);
        v12 = v1;
        free(rdi<8>);
        v13 = v0;
        free(rdi<8>);
        return 0;
    }
    free(v3);
    v11 = v2;
    free(rdi<8>);
    v12 = v1;
    free(rdi<8>);
    v13 = v0;
    free(rdi<8>);
    return 0;
}

