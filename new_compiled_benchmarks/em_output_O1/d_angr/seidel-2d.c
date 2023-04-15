long long kernel_seidel_2d(unsigned int a0, unsigned int a1, unsigned long a2)
{
    unsigned long long v1;  // rsi
    unsigned long long v2;  // rax
    int v3;  // xmm0
    unsigned long v4;  // rax
    unsigned long long v5;  // cc_op
    unsigned long long v6;  // cc_dep1
    unsigned long long v7;  // cc_dep2
    unsigned long long v8;  // r11
    unsigned long long v9;  // r10
    uint128_t v10;  // xmm1
    unsigned long long v11;  // rbx
    uint128_t v12;  // xmm2
    uint128_t v13;  // xmm2
    unsigned long long v14;  // r14
    unsigned long v15;  // cc_ndep
    unsigned long long v16;  // r8
    unsigned long long v17;  // r9
    unsigned long long v18;  // cc_op
    unsigned long long v19;  // cc_dep1
    unsigned long long v20;  // cc_dep2
    unsigned long v21;  // cc_ndep

    if (a0 > 0)
    {
        v2 = v1 - 1;
        v3 = 0;
        *((unsigned long long *)&v3) = 0x4022000000000000;
        do
        {
            v5 = 7;
            v6 = v1;
            v7 = 3;
            if ((unsigned int)v1 >= 3)
            {
                v17 = 1;
                v16 = 0;
                do
                {
                    v8 = v17 - 1;
                    v9 = v17 + 1;
                    v10 = 0;
                    *((unsigned long long *)&v10) = *((long long *)(v16 * 16000 + a2 + 16000));
                    v11 = 1;
                    do
                    {
                        v12 = 0;
                        *((unsigned long long *)&v12) = *((long long *)(v8 * 16000 + a2 + v11 * 8 - 8));
                        xmm2<16> = (((((((((xmm2<16> + Conv(64->128, Load(addr=(((r11<8> * 0x3e80<64>) + rdx<8>) + (rbx<8> * 0x8<64>)), size=8, endness=Iend_LE))) + Conv(64->128, Load(addr=((((r11<8> * 0x3e80<64>) + rdx<8>) + (rbx<8> * 0x8<64>)) + 0x8<64>), size=8, endness=Iend_LE))) + xmm1<16>) + Conv(64->128, Load(addr=(((r9<8> * 0x3e80<64>) + rdx<8>) + (rbx<8> * 0x8<64>)), size=8, endness=Iend_LE))) + Conv(64->128, Load(addr=((((r9<8> * 0x3e80<64>) + rdx<8>) + (rbx<8> * 0x8<64>)) + 0x8<64>), size=8, endness=Iend_LE))) + Conv(64->128, Load(addr=((((r10<8> * 0x3e80<64>) + rdx<8>) + (rbx<8> * 0x8<64>)) - 0x8<64>), size=8, endness=Iend_LE))) + Conv(64->128, Load(addr=(((r10<8> * 0x3e80<64>) + rdx<8>) + (rbx<8> * 0x8<64>)), size=8, endness=Iend_LE))) + Conv(64->128, Load(addr=((((r10<8> * 0x3e80<64>) + rdx<8>) + (rbx<8> * 0x8<64>)) + 0x8<64>), size=8, endness=Iend_LE))) / xmm0<16>)
                        *((unsigned long long *)(v17 * 16000 + a2 + v11 * 8)) = v13;
                        v14 = v11 + 1;
                        v10 = v13;
                        v11 += 1;
                    }
                    while (v14 != v1 - 1);
                    v15 = v14 < v1 - 1;
                    v16 = 1;
                    v17 = v9;
                    v18 = 8;
                    v19 = v9;
                    v20 = v2;
                }
                while (v9 != v2);
            }
            v21 = [D] amd64g_calculate_rflags_c(cc_op<8>, cc_dep1<8>, cc_dep2<8>, cc_ndep<8>);
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
    int v6;  // xmm0
    int v7;  // xmm1
    int v8;  // xmm2
    uint128_t v9;  // xmm3
    void* v10;  // rcx
    unsigned long long v11;  // rax
    int v12;  // xmm0
    unsigned long long v13;  // rdx
    unsigned long long v14;  // rcx
    unsigned long long v15;  // rdi
    uint128_t v16;  // xmm1
    unsigned long long v17;  // r8
    uint128_t v18;  // xmm2
    uint128_t v19;  // xmm2
    unsigned long long v20;  // r9
    unsigned long long v22;  // r12
    unsigned long long v24;  // r13
    void* v25;  // rbp

    v0 = v2;
    v5 = polybench_alloc_data(0x3d0900, 0x8);
    v11 = 0;
    v6 = 0;
    *((unsigned long long *)&v6) = 0x4000000000000000;
    v7 = 0;
    *((unsigned long long *)&v7) = 0x409f400000000000;
    do
    {
        v8 = 0;
        *((unsigned long long *)&v8) = v11;
        v10 = 0;
        do
        {
            v9 = 0;
            *((unsigned long long *)&v9) = v10 + 2;
            *((unsigned long long *)&v9) = (unsigned long long)((v9 * v8 + v6) / v7);
            *((unsigned long long *)(&((char *)v5)[16000 * v11] + 0x8 * v10)) = v9;
            v10 += 1;
        }
        while (v10 != 2000);
        v11 = 1;
    }
    while (true);
    v12 = 0;
    *((unsigned long long *)&v12) = 0x4022000000000000;
    do
    {
        v13 = 1;
        v14 = 0;
        do
        {
            v15 = v13 - 1;
            v16 = 0;
            *((unsigned long long *)&v16) = *((long long *)&((char *)v5)[16000 + 16000 * v14]);
            v17 = 1;
            do
            {
                v18 = 0;
                *((unsigned long long *)&v18) = *((long long *)&((char *)v5)[8 + 16000 * v15 + 8 * v17]);
                xmm2<16> = (((((((((xmm2<16> + Conv(64->128, Load(addr=(((rdi<8> * 0x3e80<64>) + rbx<8>) + (r8<8> * 0x8<64>)), size=8, endness=Iend_LE))) + Conv(64->128, Load(addr=((((rdi<8> * 0x3e80<64>) + rbx<8>) + (r8<8> * 0x8<64>)) + 0x8<64>), size=8, endness=Iend_LE))) + xmm1<16>) + Conv(64->128, Load(addr=(((rdx<8> * 0x3e80<64>) + rbx<8>) + (r8<8> * 0x8<64>)), size=8, endness=Iend_LE))) + Conv(64->128, Load(addr=((((rdx<8> * 0x3e80<64>) + rbx<8>) + (r8<8> * 0x8<64>)) + 0x8<64>), size=8, endness=Iend_LE))) + Conv(64->128, Load(addr=((((rdx<8> * 0x3e80<64>) + rbx<8>) + (r8<8> * 0x8<64>)) - 0x8<64>), size=8, endness=Iend_LE))) + Conv(64->128, Load(addr=(((rdx<8> * 0x3e80<64>) + rbx<8>) + (r8<8> * 0x8<64>)), size=8, endness=Iend_LE))) + Conv(64->128, Load(addr=((((rdx<8> * 0x3e80<64>) + rbx<8>) + (r8<8> * 0x8<64>)) + 0x8<64>), size=8, endness=Iend_LE))) / xmm0<16>)
                *((unsigned long long *)&((char *)v5)[16000 * v13 + 8 * v17]) = v19;
                v20 = v17 + 1;
                v16 = v19;
                v17 += 1;
            }
            while (v20 != 1999);
            v14 = 1;
            v13 = 2;
        }
        while (true);
    }
    while (true);
    if (a0 >= 43)
    {
        if (*((char *)*((long long *)a1)) != 0)
        {
            free(v5);
            return 0;
        }
        fwrite("==BEGIN DUMP_ARRAYS==\n", 0x16, 0x1, *((long long *)got.stderr));
        v22 = 0;
        fprintf(*((long long *)got.stderr), "begin dump: %s", &.L.str.3);
        do
        {
            v24 = v22 * 2000;
            v25 = 0;
            while (true)
            {
                if (((unsigned int)(v25 + v24) * 3435973837 >> 2 | (unsigned int)(v25 + v24) * 3435973837 << 30) <= 214748364)
                {
                    fputc(0xa, *((long long *)got.stderr));
                }
                fprintf(*((long long *)got.stderr), "%0.2lf ");
                v25 += 1;
                if (v25 == 2000)
                {
                    break;
                }
            }
            v22 = 1;
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

