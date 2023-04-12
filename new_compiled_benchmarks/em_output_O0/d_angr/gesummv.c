extern char .L.str;

long long submain(unsigned int a0, unsigned long long *a1)
{
    void* v0;  // [bp-0x58]
    void* v1;  // [bp-0x50]
    void* v2;  // [bp-0x48]
    void* v3;  // [bp-0x40]
    void* v4;  // [bp-0x38]
    char v5;  // [bp-0x30]
    char v6;  // [bp-0x28]
    unsigned int v7;  // [bp-0x1c]
    unsigned int v8;  // [bp-0xc]
    void* v11;  // rdi
    void* v12;  // rdi
    void* v13;  // rdi
    void* v14;  // rdi

    v8 = a0;
    v7 = 1300;
    v4 = polybench_alloc_data(0x19c990, 0x8);
    v3 = polybench_alloc_data(0x19c990, 0x8);
    v2 = polybench_alloc_data(0x514, 0x8);
    v1 = polybench_alloc_data(0x514, 0x8);
    v0 = polybench_alloc_data(0x514, 0x8);
    init_array(v7, &v6, &v5, v4, v3, v1);
    kernel_gesummv(v7, v4, v3, v2, v1, v0);
    if (v8 > 42)
    {
        if (strcmp(*(a1), &.L.str) == 0)
        {
            print_array(v7, v0);
            free(v4);
            v11 = v3;
            free(rdi<8>);
            v12 = v2;
            free(rdi<8>);
            v13 = v1;
            free(rdi<8>);
            v14 = v0;
            free(rdi<8>);
            return 0;
        }
        free(v4);
        v11 = v3;
        free(rdi<8>);
        v12 = v2;
        free(rdi<8>);
        v13 = v1;
        free(rdi<8>);
        v14 = v0;
        free(rdi<8>);
        return 0;
    }
    free(v4);
    v11 = v3;
    free(rdi<8>);
    v12 = v2;
    free(rdi<8>);
    v13 = v1;
    free(rdi<8>);
    v14 = v0;
    free(rdi<8>);
    return 0;
}

int init_array(unsigned int a0, unsigned long long *a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long long *a5)
{
    unsigned int v0;  // [bp-0x40]
    unsigned int v1;  // [bp-0x3c]
    unsigned long long *v2;  // [bp-0x20]
    unsigned int v3;  // [bp-0xc]
    unsigned long v5;  // rdi
    uint128_t v6;  // rdx
    unsigned long long v7;  // xmm1lq
    uint128_t v8;  // xmm1
    uint128_t v9;  // rdx

    v3 = v5;
    v2 = a2;
    *(a1) = 0x3ff8000000000000;
    *(v2) = 4608083138725491507;
    for (v1 = 0; v1 < v3; v1 += 1)
    {
        *((unsigned long long *)&v6) = (v1 >> 31 CONCAT v1) /m v3 >> 32;
        v7 = v3;
        a5[v1] = ((v1 >> 31 CONCAT v1) /m v3 >> 32) / xmm1<16>;
        for (v0 = 0; v0 < v3; v0 += 1)
        {
            *((unsigned long long *)&v8) = v3;
            *((unsigned long long *)(a3 + v1 * 10400 + v0 * 8)) = ((v0 * v1 + 1 >> 31 CONCAT v0 * v1 + 1) /m v3 >> 32) / v8;
            *((unsigned long long *)&v9) = (v0 * v1 + 2 >> 31 CONCAT v0 * v1 + 2) /m v3 >> 32;
            *((unsigned long long *)&v8) = v3;
            *((unsigned long long *)(a4 + v1 * 10400 + v0 * 8)) = ((v0 * v1 + 2 >> 31 CONCAT v0 * v1 + 2) /m v3 >> 32) / v8;
        }
    }
    return;
}

int kernel_gesummv(unsigned int a0, unsigned long a1, unsigned long a2, unsigned long long *a3, unsigned long long *a4, unsigned long long *a5)
{
    unsigned int v0;  // [bp-0x50]
    unsigned int v1;  // [bp-0x4c]
    uint128_t v2;  // [bp-0x20]
    uint128_t v3;  // [bp-0x18]
    uint128_t v5;  // xmm0lq
    uint128_t v6;  // xmm1lq
    uint128_t v7;  // xmm0
    uint128_t v8;  // xmm2
    uint128_t v9;  // xmm1
    uint128_t v10;  // xmm0
    uint128_t v11;  // xmm2
    uint128_t v12;  // xmm1
    uint128_t v13;  // xmm0
    uint128_t v14;  // xmm2
    uint128_t v15;  // xmm1
    uint128_t v16;  // xmm1

    v3 = v5;
    v2 = v6;
    for (v1 = 0; v1 < a0; v1 += 1)
    {
        a3[v1] = 0;
        a5[v1] = 0;
        for (v0 = 0; v0 < a0; v0 += 1)
        {
            v7 = 0;
            *((unsigned long long *)&v7) = *((long long *)(a1 + v1 * 10400 + v0 * 8));
            v8 = 0;
            *((unsigned long long *)&v8) = a4[v0];
            v9 = 0;
            *((unsigned long long *)&v9) = a3[v1];
            *((unsigned long long *)&v7) = v7 * v8 + v9;
            a3[v1] = v7;
            v10 = 0;
            *((unsigned long long *)&v10) = *((long long *)(a2 + v1 * 10400 + v0 * 8));
            v11 = 0;
            *((unsigned long long *)&v11) = a4[v0];
            v12 = 0;
            *((unsigned long long *)&v12) = a5[v1];
            *((unsigned long long *)&v10) = v10 * v11 + v12;
            a5[v1] = v10;
        }
        v13 = 0;
        *((unsigned long long *)&v13) = v3;
        v14 = 0;
        *((unsigned long long *)&v14) = a3[v1];
        v15 = 0;
        *((unsigned long long *)&v15) = v2;
        xmm1<16> = (xmm1<16> * Conv(64->128, Load(addr=(r9<8> + (Conv(32->s64, Load(addr=stack_base-76, size=4, endness=Iend_LE)) * 0x8<64>)), size=8, endness=Iend_LE)))
        *((unsigned long long *)&v13) = v13 * v14 + v16;
        a5[v1] = v13;
    }
    return;
}

