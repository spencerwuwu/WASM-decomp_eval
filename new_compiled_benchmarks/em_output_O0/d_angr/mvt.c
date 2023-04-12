extern char .L.str;

long long submain(unsigned int a0, unsigned long long *a1)
{
    void* v0;  // [bp-0x48]
    void* v1;  // [bp-0x40]
    void* v2;  // [bp-0x38]
    void* v3;  // [bp-0x30]
    void* v4;  // [bp-0x28]
    unsigned int v5;  // [bp-0x1c]
    unsigned int v6;  // [bp-0xc]
    void* v9;  // rdi
    void* v10;  // rdi
    void* v11;  // rdi
    void* v12;  // rdi

    v6 = a0;
    v5 = 2000;
    v4 = polybench_alloc_data(0x3d0900, 0x8);
    v3 = polybench_alloc_data(0x7d0, 0x8);
    v2 = polybench_alloc_data(0x7d0, 0x8);
    v1 = polybench_alloc_data(0x7d0, 0x8);
    v0 = polybench_alloc_data(0x7d0, 0x8);
    init_array(v5, v3, v2, v1, v0, v4);
    kernel_mvt(v5, v3, v2, v1, v0, v4);
    if (v6 > 42)
    {
        if (strcmp(*(a1), &.L.str) == 0)
        {
            print_array(v5, v3, v2);
            free(v4);
            v9 = v3;
            free(rdi<8>);
            v10 = v2;
            free(rdi<8>);
            v11 = v1;
            free(rdi<8>);
            v12 = v0;
            free(rdi<8>);
            return 0;
        }
        free(v4);
        v9 = v3;
        free(rdi<8>);
        v10 = v2;
        free(rdi<8>);
        v11 = v1;
        free(rdi<8>);
        v12 = v0;
        free(rdi<8>);
        return 0;
    }
    free(v4);
    v9 = v3;
    free(rdi<8>);
    v10 = v2;
    free(rdi<8>);
    v11 = v1;
    free(rdi<8>);
    v12 = v0;
    free(rdi<8>);
    return 0;
}

int init_array(unsigned int a0, unsigned long long *a1, unsigned long a2, unsigned long long *a3, unsigned long long *a4, unsigned long a5)
{
    unsigned int v0;  // [bp-0x40]
    unsigned int v1;  // [bp-0x3c]
    unsigned long long *v2;  // [bp-0x20]
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
        a1[v1] = ((v1 >> 31 CONCAT v1) /m v3 >> 32) / xmm1<16>;
        *((unsigned long long *)&v7) = v3;
        v2[v1] = ((v1 + 1 >> 31 CONCAT v1 + 1) /m v3 >> 32) / v7;
        *((unsigned long long *)&v7) = v3;
        a3[v1] = ((v1 + 3 >> 31 CONCAT v1 + 3) /m v3 >> 32) / v7;
        *((unsigned long long *)&v8) = (v1 + 4 >> 31 CONCAT v1 + 4) /m v3 >> 32;
        *((unsigned long long *)&v7) = v3;
        a4[v1] = ((v1 + 4 >> 31 CONCAT v1 + 4) /m v3 >> 32) / v7;
        for (v0 = 0; v0 < v3; v0 += 1)
        {
            *((unsigned long long *)&v9) = (v0 * v1 >> 31 CONCAT v0 * v1) /m v3 >> 32;
            *((unsigned long long *)&v7) = v3;
            *((unsigned long long *)(a5 + v1 * 16000 + v0 * 8)) = ((v0 * v1 >> 31 CONCAT v0 * v1) /m v3 >> 32) / v7;
        }
    }
    return;
}

int kernel_mvt(unsigned int a0, unsigned long long *a1, unsigned long long *a2, unsigned long long *a3, unsigned long long *a4, unsigned long a5)
{
    unsigned int v0;  // [bp-0x40]
    unsigned int v1;  // [bp-0x3c]
    uint128_t v3;  // xmm1
    uint128_t v4;  // xmm0
    uint128_t v5;  // xmm2
    uint128_t v6;  // xmm1
    uint128_t v7;  // xmm0
    uint128_t v8;  // xmm2

    for (v1 = 0; v1 < a0; v1 += 1)
    {
        for (v0 = 0; v0 < a0; v0 += 1)
        {
            v3 = 0;
            *((unsigned long long *)&v3) = a1[v1];
            v4 = 0;
            *((unsigned long long *)&v4) = *((long long *)(a5 + v1 * 16000 + v0 * 8));
            v5 = 0;
            *((unsigned long long *)&v5) = a3[v0];
            *((unsigned long long *)&v4) = v4 * v5 + v3;
            a1[v1] = v4;
        }
    }
    for (v1 = 0; v1 < a0; v1 += 1)
    {
        for (v0 = 0; v0 < a0; v0 += 1)
        {
            v6 = 0;
            *((unsigned long long *)&v6) = a2[v1];
            v7 = 0;
            *((unsigned long long *)&v7) = *((long long *)(a5 + v0 * 16000 + v1 * 8));
            v8 = 0;
            *((unsigned long long *)&v8) = a4[v0];
            *((unsigned long long *)&v7) = v7 * v8 + v6;
            a2[v1] = v7;
        }
    }
    return;
}

