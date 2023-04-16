int kernel_trmm(unsigned int a0, unsigned int a1, unsigned long a2, unsigned long a3)
{
    unsigned int v0;  // [bp-0x34]
    unsigned int v1;  // [bp-0x30]
    unsigned int v2;  // [bp-0x2c]
    uint128_t v3;  // [bp-0x18]
    uint128_t v5;  // xmm0lq
    uint128_t v6;  // xmm0
    uint128_t v7;  // xmm2
    uint128_t v8;  // xmm1
    uint128_t v9;  // xmm0

    v3 = v5;
    for (v2 = 0; v2 < a0; v2 += 1)
    {
        for (v1 = 0; v1 < a1; v1 += 1)
        {
            for (v0 = v2 + 1; v0 < a0; v0 += 1)
            {
                v6 = 0;
                *((unsigned long long *)&v6) = *((long long *)(a2 + v0 * 8000 + v2 * 8));
                v7 = 0;
                *((unsigned long long *)&v7) = *((long long *)(a3 + v0 * 9600 + v1 * 8));
                v8 = 0;
                *((unsigned long long *)&v8) = *((long long *)(a3 + v2 * 9600 + v1 * 8));
                *((unsigned long long *)&v6) = v6 * v7 + v8;
                *((unsigned long long *)(a3 + v2 * 9600 + v1 * 8)) = v6;
            }
            v9 = 0;
            *((unsigned long long *)&v9) = v3;
            xmm0lq<8> = Conv(128->64, (xmm0<16> * Conv(64->128, Load(addr=((rcx<8> + (Conv(32->s64, Load(addr=stack_base-44, size=4, endness=Iend_LE)) * 0x2580<64>)) + (Conv(32->s64, Load(addr=stack_base-48, size=4, endness=Iend_LE)) * 0x8<64>)), size=8, endness=Iend_LE))))
            *((unsigned long long *)(a3 + v2 * 9600 + v1 * 8)) = v9;
        }
    }
    return;
}

extern char .L.str;

long long submain(unsigned int a0, unsigned long long *a1)
{
    unsigned long v0;  // [bp-0x38]
    unsigned long v1;  // [bp-0x30]
    char v2;  // [bp-0x28]
    unsigned int v3;  // [bp-0x20]
    unsigned int v4;  // [bp-0x1c]
    unsigned int v5;  // [bp-0xc]
    void* v9;  // rdi

    v5 = a0;
    v4 = 1000;
    v3 = 1200;
    v1 = polybench_alloc_data(0xf4240, 0x8);
    v0 = polybench_alloc_data(0x124f80, 0x8);
    init_array(v4, v3, &v2, v1, v0);
    kernel_trmm(v4, v3, v1, v0);
    if (v5 > 42)
    {
        if (strcmp(*(a1), &.L.str) == 0)
        {
            print_array(v4, v3, v0);
            free(v1);
            v9 = v0;
            free(rdi<8>);
            return 0;
        }
        free(v1);
        v9 = v0;
        free(rdi<8>);
        return 0;
    }
    free(v1);
    v9 = v0;
    free(rdi<8>);
    return 0;
}

int init_array(unsigned int a0, unsigned int a1, unsigned long long *a2, unsigned long a3, unsigned long a4)
{
    unsigned int v0;  // [bp-0x30]
    unsigned int v1;  // [bp-0x2c]
    unsigned int v2;  // [bp-0xc]
    unsigned long v4;  // rdi
    unsigned long long v5;  // xmm1lq

    v2 = v4;
    *(a2) = 0x3ff8000000000000;
    for (v1 = 0; v1 < v2; v1 += 1)
    {
        for (v0 = 0; v0 < v1; v0 += 1)
        {
            v5 = v2;
            *((unsigned long long *)(a3 + v1 * 8000 + v0 * 8)) = ((v1 + v0 >> 31 CONCAT v1 + v0) /m v2 >> 32) / xmm1<16>;
        }
        *((long long *)(a3 + v1 * 8000 + v1 * 8)) = 0x3ff0000000000000;
        for (v0 = 0; v0 < a1; v0 += 1)
        {
            *((unsigned long long *)(a4 + v1 * 9600 + v0 * 8)) = ((a1 + v1 - v0 >> 31 CONCAT a1 + v1 - v0) /m a1 >> 32) / a1;
        }
    }
    return;
}

extern char .L.str.3;
extern char got.stderr;

int print_array(unsigned int a0, unsigned int a1, unsigned long a2)
{
    unsigned int v0;  // [bp-0x20]
    unsigned int v1;  // [bp-0x1c]
    unsigned long v2;  // [bp-0x18]

    v2 = a2;
    fprintf(*((long long *)got.stderr), "==BEGIN DUMP_ARRAYS==\n");
    fprintf(*((long long *)got.stderr), "begin dump: %s", &.L.str.3);
    for (v1 = 0; v1 < a0; v1 += 1)
    {
        for (v0 = 0; v0 < a1; v0 += 1)
        {
            if ((a0 * v1 + v0 >> 31 CONCAT a0 * v1 + v0) /m 20 >> 32 == 0)
            {
                fprintf(*((long long *)got.stderr), "\n");
            }
            fprintf(*((long long *)got.stderr), "%0.2lf ");
        }
    }
    fprintf(*((long long *)got.stderr), "\nend   dump: %s\n", &.L.str.3);
    fprintf(*((long long *)got.stderr), "==END   DUMP_ARRAYS==\n");
    return;
}

