int kernel_bicg(unsigned int a0, unsigned int a1, unsigned long a2, unsigned long long *a3, unsigned long long *a4, unsigned long long *a5, unsigned long long *v2)
{
    unsigned int v0;  // [bp-0x38]
    unsigned int v1;  // [bp-0x34]
    uint128_t v3;  // xmm1
    uint128_t v4;  // xmm0
    uint128_t v5;  // xmm2
    uint128_t v6;  // xmm1
    uint128_t v7;  // xmm0
    uint128_t v8;  // xmm2

    for (v1 = 0; v1 < a0; v1 += 1)
    {
        a3[v1] = 0;
    }
    for (v1 = 0; v1 < a1; v1 += 1)
    {
        a4[v1] = 0;
        for (v0 = 0; v0 < a0; v0 += 1)
        {
            v3 = 0;
            *((unsigned long long *)&v3) = a3[v0];
            v4 = 0;
            *((unsigned long long *)&v4) = v2[v1];
            v5 = 0;
            *((unsigned long long *)&v5) = *((long long *)(a2 + v1 * 15200 + v0 * 8));
            *((unsigned long long *)&v4) = v4 * v5 + v3;
            a3[v0] = v4;
            v6 = 0;
            *((unsigned long long *)&v6) = a4[v1];
            v7 = 0;
            *((unsigned long long *)&v7) = *((long long *)(a2 + v1 * 15200 + v0 * 8));
            v8 = 0;
            *((unsigned long long *)&v8) = a5[v0];
            *((unsigned long long *)&v7) = v7 * v8 + v6;
            a4[v1] = v7;
        }
    }
    return;
}

extern char .L.str;

long long submain(unsigned int a0, unsigned long long *a1)
{
    unsigned long long *v0;  // [bp-0x58]
    void* v1;  // [bp-0x48]
    void* v2;  // [bp-0x40]
    void* v3;  // [bp-0x38]
    void* v4;  // [bp-0x30]
    unsigned long v5;  // [bp-0x28]
    unsigned int v6;  // [bp-0x20]
    unsigned int v7;  // [bp-0x1c]
    unsigned int v8;  // [bp-0xc]
    void* v13;  // rdi
    void* v14;  // rdi
    void* v15;  // rdi
    void* v16;  // rdi

    v8 = a0;
    v7 = 2100;
    v6 = 1900;
    v5 = polybench_alloc_data(0x3ce1f0, 0x8);
    v4 = polybench_alloc_data(0x76c, 0x8);
    v3 = polybench_alloc_data(0x834, 0x8);
    v2 = polybench_alloc_data(0x76c, 0x8);
    v1 = polybench_alloc_data(0x834, 0x8);
    init_array(v6, v7, v5, v1, v2);
    v0 = v1;
    kernel_bicg(v6, v7, v5, v4, v3, v2, v0);
    if (v8 > 42)
    {
        if (strcmp(*(a1), &.L.str) == 0)
        {
            print_array(v6, v7, v4, v3);
            free(v5);
            v13 = v4;
            free(rdi<8>);
            v14 = v3;
            free(rdi<8>);
            v15 = v2;
            free(rdi<8>);
            v16 = v1;
            free(rdi<8>);
            return 0;
        }
        free(v5);
        v13 = v4;
        free(rdi<8>);
        v14 = v3;
        free(rdi<8>);
        v15 = v2;
        free(rdi<8>);
        v16 = v1;
        free(rdi<8>);
        return 0;
    }
    free(v5);
    v13 = v4;
    free(rdi<8>);
    v14 = v3;
    free(rdi<8>);
    v15 = v2;
    free(rdi<8>);
    v16 = v1;
    free(rdi<8>);
    return 0;
}

int init_array(unsigned int a0, unsigned int a1, unsigned long a2, unsigned long long *a3, unsigned long long *a4)
{
    unsigned int v0;  // [bp-0x30]
    unsigned int v1;  // [bp-0x2c]
    unsigned long v2;  // [bp-0x18]
    unsigned int v3;  // [bp-0xc]
    unsigned long v5;  // rdi
    unsigned long long v6;  // xmm1lq
    uint128_t v7;  // xmm1
    uint128_t v8;  // rdx
    uint128_t v9;  // rdx

    v3 = v5;
    v2 = a2;
    for (v1 = 0; v1 < v3; v1 += 1)
    {
        v6 = v3;
        a4[v1] = ((v1 >> 31 CONCAT v1) /m v3 >> 32) / xmm1<16>;
    }
    for (v1 = 0; v1 < a1; v1 += 1)
    {
        *((unsigned long long *)&v8) = (v1 >> 31 CONCAT v1) /m a1 >> 32;
        *((unsigned long long *)&v7) = a1;
        a3[v1] = ((v1 >> 31 CONCAT v1) /m a1 >> 32) / v7;
        for (v0 = 0; v0 < v3; v0 += 1)
        {
            *((unsigned long long *)&v9) = ((v0 + 1) * v1 >> 31 CONCAT (v0 + 1) * v1) /m a1 >> 32;
            *((unsigned long long *)&v7) = a1;
            *((unsigned long long *)(v2 + v1 * 15200 + v0 * 8)) = (((v0 + 1) * v1 >> 31 CONCAT (v0 + 1) * v1) /m a1 >> 32) / v7;
        }
    }
    return v1;
}

