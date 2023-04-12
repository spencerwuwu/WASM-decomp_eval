extern char .L.str.3;
extern char got.stderr;

long long submain(unsigned int a0, unsigned long a1)
{
    unsigned long long v0;  // [bp-0x40], Other Possible Types: unsigned int
    char **v1;  // [bp-0x38]
    void* v3;  // rbx
    unsigned long long v4;  // rax
    int v5;  // xmm0
    int v6;  // xmm1
    unsigned long long v7;  // rdx
    unsigned long long v8;  // rdi
    uint128_t v9;  // xmm2
    void* v10;  // r8
    unsigned long long v11;  // rsi
    unsigned long long v12;  // rcx
    int v13;  // xmm0
    int v14;  // xmm1
    unsigned long long v15;  // r8
    unsigned long long v16;  // r10
    unsigned long long v17;  // r11
    uint128_t v18;  // xmm3
    uint128_t v19;  // xmm4
    uint128_t v20;  // xmm5
    uint128_t v21;  // xmm5
    uint128_t v22;  // xmm4
    unsigned long long v23;  // r14
    unsigned long long v24;  // r8
    unsigned long long v25;  // r10
    unsigned long long v26;  // r11
    uint128_t v27;  // xmm3
    uint128_t v28;  // xmm4
    uint128_t v29;  // xmm5
    uint128_t v30;  // xmm5
    uint128_t v31;  // xmm4
    unsigned long long v32;  // r14
    unsigned long long v34;  // r12
    unsigned long long v36;  // rbp
    unsigned long long v37;  // r13
    void* v38;  // r15

    v1 = a1;
    v0 = a0;
    v3 = polybench_alloc_data(0x1a5e00, 0x8);
    (unsigned int)v4 = polybench_alloc_data(0x1a5e00, 0x8);
    v12 = 0;
    v5 = 0;
    *((unsigned long long *)&v5) = 0x4024000000000000;
    v6 = 0;
    *((unsigned long long *)&v6) = 0x405e000000000000;
    do
    {
        v7 = v12 + 120;
        v11 = 0;
        do
        {
            v8 = v7 + v11;
            v10 = 0;
            do
            {
                v9 = 0;
                *((unsigned long long *)&v9) = v8 - v10;
                *((unsigned long long *)&v9) = (unsigned long long)(v9 * v5 / v6);
                *((unsigned long long *)(v4 + 0 * 0x1c200 + v11 * 960 + v10 * 8)) = v9;
                *((unsigned long long *)(&((char *)v3)[960 * v11] + 0x8 * v10)) = v9;
                v10 += 1;
            }
            while (v10 != 120);
            v11 = 1;
        }
        while (true);
        v12 = 1;
    }
    while (true);
    v13 = 0;
    *((unsigned long long *)&v13) = 0xc000000000000000;
    v14 = 0;
    *((unsigned long long *)&v14) = 0x3fc0000000000000;
    do
    {
        do
        {
            v15 = 1;
            do
            {
                v16 = v15 - 1;
                v17 = 1;
                do
                {
                    v18 = 0;
                    *((unsigned long long *)&v18) = *((long long *)&((char *)v3)[0x1c200 + 960 * v15 + 8 * v17]);
                    v19 = 0;
                    *((unsigned long long *)&v19) = *((long long *)&((char *)v3)[0x38400 + 960 * v15 + 8 * v17]);
                    v20 = 0;
                    *((unsigned long long *)&v20) = *((long long *)&((char *)v3)[0x1c200 + 960 * v15 + 8 * v17]);
                    xmm5<16> = (((xmm5<16> + (xmm3<16> * xmm0<16>)) + Conv(64->128, Load(addr=(((r10<8> * 0x3c0<64>) + (rbx<8> + (0x1<64> * 0x1c200<64>))) + (r11<8> * 0x8<64>)), size=8, endness=Iend_LE))) * xmm1<16>)
                    xmm4<16> = ((((xmm4<16> + (xmm3<16> * xmm0<16>)) + Conv(64->128, Load(addr=((((0x0<64> * 0x1c200<64>) + rbx<8>) + (r8<8> * 0x3c0<64>)) + (r11<8> * 0x8<64>)), size=8, endness=Iend_LE))) * xmm1<16>) + xmm5<16>)
                    STORE(addr=((((0x1<64> * 0x1c200<64>) + rax<8>) + (r8<8> * 0x3c0<64>)) + (r11<8> * 0x8<64>)), data=Conv(128->64, ((((((xmm3<16> * xmm0<16>) + Conv(64->128, Load(addr=((((r8<8> * 0x3c0<64>) + (rbx<8> + (0x1<64> * 0x1c200<64>))) + (r11<8> * 0x8<64>)) + 0x8<64>), size=8, endness=Iend_LE))) + Conv(64->128, Load(addr=((((r8<8> * 0x3c0<64>) + (rbx<8> + (0x1<64> * 0x1c200<64>))) + (r11<8> * 0x8<64>)) - 0x8<64>), size=8, endness=Iend_LE))) * xmm1<16>) + xmm4<16>) + xmm3<16>)), size=8, endness=Iend_LE, guard=None)
                    v23 = v17 + 1;
                    v17 += 1;
                }
                while (v23 != 119);
                v15 = 2;
            }
            while (true);
        }
        while (true);
        do
        {
            v24 = 1;
            do
            {
                v25 = v24 - 1;
                v26 = 1;
                do
                {
                    v27 = 0;
                    *((unsigned long long *)&v27) = *((long long *)(v24 * 960 + v4 + 1 * 0x1c200 + v26 * 8));
                    v28 = 0;
                    *((unsigned long long *)&v28) = *((long long *)(2 * 0x1c200 + v4 + v24 * 960 + v26 * 8));
                    v29 = 0;
                    *((unsigned long long *)&v29) = *((long long *)(v24 * 960 + v4 + 1 * 0x1c200 + v26 * 8));
                    xmm5<16> = (((xmm5<16> + (xmm3<16> * xmm0<16>)) + Conv(64->128, Load(addr=(((r10<8> * 0x3c0<64>) + (rax<8> + (0x1<64> * 0x1c200<64>))) + (r11<8> * 0x8<64>)), size=8, endness=Iend_LE))) * xmm1<16>)
                    xmm4<16> = ((((xmm4<16> + (xmm3<16> * xmm0<16>)) + Conv(64->128, Load(addr=((((0x0<64> * 0x1c200<64>) + rax<8>) + (r8<8> * 0x3c0<64>)) + (r11<8> * 0x8<64>)), size=8, endness=Iend_LE))) * xmm1<16>) + xmm5<16>)
                    STORE(addr=((((0x1<64> * 0x1c200<64>) + rbx<8>) + (r8<8> * 0x3c0<64>)) + (r11<8> * 0x8<64>)), data=Conv(128->64, ((((((xmm3<16> * xmm0<16>) + Conv(64->128, Load(addr=((((r8<8> * 0x3c0<64>) + (rax<8> + (0x1<64> * 0x1c200<64>))) + (r11<8> * 0x8<64>)) + 0x8<64>), size=8, endness=Iend_LE))) + Conv(64->128, Load(addr=((((r8<8> * 0x3c0<64>) + (rax<8> + (0x1<64> * 0x1c200<64>))) + (r11<8> * 0x8<64>)) - 0x8<64>), size=8, endness=Iend_LE))) * xmm1<16>) + xmm4<16>) + xmm3<16>)), size=8, endness=Iend_LE, guard=None)
                    v32 = v26 + 1;
                    v26 += 1;
                }
                while (v32 != 119);
                v24 = 2;
            }
            while (true);
        }
        while (true);
    }
    while (true);
    if (v0 >= 43)
    {
        if (*(*(v1)) != 0)
        {
            free(v3);
            return 0;
        }
        fwrite("==BEGIN DUMP_ARRAYS==\n", 0x16, 0x1, *((long long *)got.stderr));
        v34 = 0;
        fprintf(*((long long *)got.stderr), "begin dump: %s", &.L.str.3);
        do
        {
            v0 = v34 * 14400;
            v36 = 0;
            do
            {
                v37 = v36 * 120 + v0;
                v38 = 0;
                while (true)
                {
                    if (((unsigned int)(v38 + v37) * 3435973837 >> 2 | (unsigned int)(v38 + v37) * 3435973837 << 30) <= 214748364)
                    {
                        fputc(0xa, *((long long *)got.stderr));
                    }
                    fprintf(*((long long *)got.stderr), "%0.2lf ");
                    v38 += 1;
                    if (v38 == 120)
                    {
                        break;
                    }
                }
                v36 = 1;
            }
            while (true);
            v34 = 1;
        }
        while (true);
        fprintf(*((long long *)got.stderr), "\nend   dump: %s\n", &.L.str.3);
        fwrite("==END   DUMP_ARRAYS==\n", 0x16, 0x1, *((long long *)got.stderr));
        free(v3);
        return 0;
    }
    free(v3);
    return 0;
}

