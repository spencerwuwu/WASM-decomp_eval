extern char .L.str;

long long submain(unsigned int a0, unsigned long long *a1)
{
    void* v0;  // [bp-0x38]
    void* v1;  // [bp-0x30]
    void* v2;  // [bp-0x28]
    unsigned int v3;  // [bp-0x20]
    unsigned int v4;  // [bp-0x1c]
    unsigned int v5;  // [bp-0xc]
    void* v8;  // rdi
    void* v9;  // rdi

    v5 = a0;
    v4 = 1000;
    v3 = 1200;
    v2 = polybench_alloc_data(0x124f80, 0x8);
    v1 = polybench_alloc_data(0x15f900, 0x8);
    v0 = polybench_alloc_data(0x124f80, 0x8);
    init_array(v4, v3, v2, v1, v0);
    kernel_gramschmidt(v4, v3, v2, v1, v0);
    if (v5 > 42)
    {
        if (strcmp(*(a1), &.L.str) == 0)
        {
            print_array(v4, v3, v2, v1, v0);
            free(v2);
            v8 = v1;
            free(rdi<8>);
            v9 = v0;
            free(rdi<8>);
            return 0;
        }
        free(v2);
        v8 = v1;
        free(rdi<8>);
        v9 = v0;
        free(rdi<8>);
        return 0;
    }
    free(v2);
    v8 = v1;
    free(rdi<8>);
    v9 = v0;
    free(rdi<8>);
    return 0;
}

int init_array(unsigned int a0, unsigned int a1, unsigned long a2, unsigned long a3, unsigned long a4)
{
    unsigned int v0;  // [bp-0x30]
    int tmp_72;  // tmp #72
    int tmp_76;  // tmp #76
    unsigned int v1;  // [bp-0x2c]
    unsigned int v2;  // [bp-0xc]
    unsigned long v4;  // rdi
    unsigned long long v5;  // xmm1lq
    int v7;  // xmm1
    int v8;  // xmm1
    unsigned long long v9;  // xmm0lq

    v2 = v4;
    for (v1 = 0; v1 < v2; v1 += 1)
    {
        for (v0 = 0; v0 < a1; v0 += 1)
        {
            v5 = v2;
            tmp_72 = ((v0 * v1 >> 31 CONCAT v0 * v1) /m v2 >> 32) / xmm1<16>;
            v7 = 0;
            *((unsigned long long *)&v7) = 0x4059000000000000;
            tmp_76 = tmp_72 * v7;
            v8 = 0;
            *((unsigned long long *)&v8) = 0x4024000000000000;
            v9 = (unsigned long long)(tmp_76 + v8);
            *((unsigned long long *)(a2 + v1 * 9600 + v0 * 8)) = v9;
            *((long long *)(a4 + v1 * 9600 + v0 * 8)) = 0;
        }
    }
    for (v1 = 0; v1 < a1; v1 += 1)
    {
        for (v0 = 0; v0 < a1; v0 += 1)
        {
            *((long long *)(a3 + v1 * 9600 + v0 * 8)) = 0;
        }
    }
    return;
}

int kernel_gramschmidt(unsigned int a0, unsigned int a1, unsigned long a2, unsigned long a3, unsigned long a4)
{
    void* v0;  // [bp-0x40]
    unsigned int v1;  // [bp-0x34]
    unsigned int v2;  // [bp-0x30]
    unsigned int v3;  // [bp-0x2c]
    uint128_t v5;  // xmm0
    uint128_t v6;  // xmm2
    int v7;  // xmm1
    uint128_t v8;  // xmm0
    uint128_t v9;  // xmm0
    uint128_t v10;  // xmm2
    uint128_t v11;  // xmm1
    uint128_t v12;  // xmm1
    uint128_t v13;  // xmm2

    for (v1 = 0; v1 < a1; v1 += 1)
    {
        v0 = 0;
        for (v3 = 0; v3 < a0; v3 += 1)
        {
            v5 = 0;
            *((unsigned long long *)&v5) = *((long long *)(a2 + v3 * 9600 + v1 * 8));
            v6 = 0;
            *((unsigned long long *)&v6) = *((long long *)(a2 + v3 * 9600 + v1 * 8));
            v7 = 0;
            *((unsigned long long *)&v7) = v0;
            *((unsigned long long *)&v5) = (unsigned long long)(v5 * v6 + v7);
            v0 = (unsigned long long)v5;
        }
        sqrt(v0);
        *((void* *)(a3 + v1 * 9600 + v1 * 8)) = v0;
        for (v3 = 0; v3 < a0; v3 += 1)
        {
            v8 = 0;
            *((unsigned long long *)&v8) = *((long long *)(a2 + v3 * 9600 + v1 * 8));
            xmm0lq<8> = Conv(128->64, (xmm0<16> / Conv(64->128, Load(addr=((rcx<8> + (Conv(32->s64, Load(addr=stack_base-52, size=4, endness=Iend_LE)) * 0x2580<64>)) + (Conv(32->s64, Load(addr=stack_base-52, size=4, endness=Iend_LE)) * 0x8<64>)), size=8, endness=Iend_LE))))
            *((unsigned long long *)(a4 + v3 * 9600 + v1 * 8)) = v8;
        }
        for (v2 = v1 + 1; v2 < a1; v2 += 1)
        {
            *((long long *)(a3 + v1 * 9600 + v2 * 8)) = 0;
            for (v3 = 0; v3 < a0; v3 += 1)
            {
                v9 = 0;
                *((unsigned long long *)&v9) = *((long long *)(a4 + v3 * 9600 + v1 * 8));
                v10 = 0;
                *((unsigned long long *)&v10) = *((long long *)(a2 + v3 * 9600 + v2 * 8));
                v11 = 0;
                *((unsigned long long *)&v11) = *((long long *)(a3 + v1 * 9600 + v2 * 8));
                *((unsigned long long *)&v9) = v9 * v10 + v11;
                *((unsigned long long *)(a3 + v1 * 9600 + v2 * 8)) = v9;
            }
            for (v3 = 0; v3 < a0; v3 += 1)
            {
                v12 = 0;
                *((unsigned long long *)&v12) = *((long long *)(a2 + v3 * 9600 + v2 * 8));
                v13 = 0;
                *((unsigned long long *)&v13) = *((long long *)(a3 + v1 * 9600 + v2 * 8));
                STORE(addr=((rdx<8> + (Conv(32->s64, Load(addr=stack_base-44, size=4, endness=Iend_LE)) * 0x2580<64>)) + (Conv(32->s64, Load(addr=stack_base-48, size=4, endness=Iend_LE)) * 0x8<64>)), data=Conv(128->64, ((Conv(64->128, (Load(addr=((r8<8> + (Conv(32->s64, Load(addr=stack_base-44, size=4, endness=Iend_LE)) * 0x2580<64>)) + (Conv(32->s64, Load(addr=stack_base-52, size=4, endness=Iend_LE)) * 0x8<64>)), size=8, endness=Iend_LE) ^ 0x8000000000000000<64>)) * xmm2<16>) + xmm1<16>)), size=8, endness=Iend_LE, guard=None)
            }
        }
    }
    return;
}

extern char .L.str.3;
extern char .L.str.7;
extern char got.stderr;

int print_array(unsigned int a0, unsigned int a1, unsigned long a2, unsigned long a3, unsigned long a4)
{
    unsigned int v0;  // [bp-0x30]
    unsigned int v1;  // [bp-0x2c]
    unsigned long v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x20]
    unsigned long v4;  // [bp-0x18]

    v4 = a2;
    v3 = a3;
    v2 = a4;
    fprintf(*((long long *)got.stderr), "==BEGIN DUMP_ARRAYS==\n");
    fprintf(*((long long *)got.stderr), "begin dump: %s", &.L.str.3);
    for (v1 = 0; v1 < a1; v1 += 1)
    {
        for (v0 = 0; v0 < a1; v0 += 1)
        {
            if ((a1 * v1 + v0 >> 31 CONCAT a1 * v1 + v0) /m 20 >> 32 == 0)
            {
                fprintf(*((long long *)got.stderr), "\n");
            }
            fprintf(*((long long *)got.stderr), "%0.2lf ");
        }
    }
    fprintf(*((long long *)got.stderr), "\nend   dump: %s\n", &.L.str.3);
    fprintf(*((long long *)got.stderr), "begin dump: %s", &.L.str.7);
    for (v1 = 0; v1 < a0; v1 += 1)
    {
        for (v0 = 0; v0 < a1; v0 += 1)
        {
            if ((a1 * v1 + v0 >> 31 CONCAT a1 * v1 + v0) /m 20 >> 32 == 0)
            {
                fprintf(*((long long *)got.stderr), "\n");
            }
            fprintf(*((long long *)got.stderr), "%0.2lf ");
        }
    }
    fprintf(*((long long *)got.stderr), "\nend   dump: %s\n", &.L.str.7);
    fprintf(*((long long *)got.stderr), "==END   DUMP_ARRAYS==\n");
    return;
}

