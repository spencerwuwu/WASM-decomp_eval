extern char .L.str.3;
extern char got.stderr;

long long submain(unsigned int a0, unsigned long a1)
{
    void* v0;  // [bp-0x40], Other Possible Types: unsigned int
    int tmp_4;  // tmp #4
    int tmp_2;  // tmp #2
    int tmp_11;  // tmp #11
    unsigned long long v1;  // [bp-0x38], Other Possible Types: char **
    void* v3;  // rbx
    unsigned long long v4[1440000];  // r14
    unsigned long long v5;  // r15
    unsigned long long v6;  // r12
    int v7;  // xmm0
    int v8;  // xmm1
    int v9;  // xmm2
    void* v10;  // rdx
    unsigned long long v11;  // rcx
    unsigned long long v12;  // r13
    int v13;  // xmm2
    uint128_t v14;  // xmm0
    void* v15;  // rcx
    unsigned long long v16;  // rax
    void* v17;  // rbp
    int v18;  // xmm4
    int v19;  // xmm5
    void* v20;  // rax
    uint128_t v21;  // xmm0
    uint128_t v22;  // xmm0
    uint128_t v23;  // xmm0
    uint128_t v24;  // xmm0
    unsigned long long v25;  // rax
    int v26;  // xmm0
    unsigned long long v27;  // rcx
    uint128_t v28;  // xmm1
    uint128_t v29;  // xmm1
    uint128_t v30;  // xmm2
    uint128_t v31;  // xmm2
    unsigned long long v32;  // rbp
    unsigned long long v33;  // rcx
    unsigned long long v34;  // rsi
    unsigned long long v35;  // rdi
    unsigned long long *v36;  // r8
    uint128_t v37;  // xmm0
    void* v38;  // r9
    uint128_t v39;  // xmm1
    uint128_t v40;  // xmm1
    void* v41;  // r13
    void* v45;  // r13
    unsigned long long v48;  // rbp

    v1 = a1;
    v0 = a0;
    v3 = polybench_alloc_data(0x19a280, 0x8);
    v4 = polybench_alloc_data(0x15f900, 0x8);
    v5 = polybench_alloc_data(0x4b0, 0x8);
    v6 = polybench_alloc_data(0x4b0, 0x8);
    v16 = 0;
    v7 = 0;
    *((unsigned long long *)&v7) = 0x4092c00000000000;
    v11 = 0;
    do
    {
        v8 = 0;
        *((unsigned long long *)&v8) = v11;
        v10 = 0;
        do
        {
            v9 = 0;
            *((unsigned long long *)&v9) = v11 * v10;
            *((unsigned long long *)&v9) = (unsigned long long)(v9 / v7 + v8);
            *((unsigned long long *)(&((char *)v3)[9600 * v11] + 0x8 * v10)) = (unsigned long long)v9;
            v10 += 1;
        }
        while (v10 != 1200);
        v11 = 1;
    }
    while (true);
    v12 = 0;
    v13 = 0;
    *((unsigned long long *)&v13) = 0x4095e00000000000;
    do
    {
        *((long long *)(v5 + v16 * 8)) = 0;
        v14 = 0;
        v15 = 0;
        do
        {
            xmm0<16> = (xmm0<16> + Conv(64->128, Load(addr=(((rcx<8> * 0x2580<64>) + rbx<8>) + (rax<8> * 0x8<64>)), size=8, endness=Iend_LE)))
            *((unsigned long long *)(v5 + v16 * 8)) = v14;
            v15 += 1;
        }
        while (v15 != 1400);
        *((unsigned long long *)&v14) = (unsigned long long)(v14 / v13);
        *((unsigned long long *)v5) = v14;
        v16 = 1;
    }
    while (true);
    v17 = 0;
    v18 = 0;
    *((unsigned long long *)&v18) = 4591870180066957722;
    v19 = 0;
    *((unsigned long long *)&v19) = 0x3ff0000000000000;
    do
    {
        *((long long *)(v6 + v12 * 8)) = 0;
        v20 = 0;
        do
        {
            v21 = 0;
            *((unsigned long long *)&v21) = *((long long *)&(0x2580 * v20 + (char *)v3)[8 * v12]);
            xmm0<16> = (((xmm0<16> - Conv(64->128, Load(addr=(r15<8> + (r13<8> * 0x8<64>)), size=8, endness=Iend_LE))) * (xmm0<16> - Conv(64->128, Load(addr=(r15<8> + (r13<8> * 0x8<64>)), size=8, endness=Iend_LE)))) + Conv(64->128, Load(addr=(r12<8> + (r13<8> * 0x8<64>)), size=8, endness=Iend_LE)))
            *((unsigned long long *)(v6 + v12 * 8)) = v22;
            v20 += 1;
        }
        while (v20 != 1400);
        v23 = v22 / v13;
        if ((BinaryOp CmpF & 1) != 0)
        {
            sqrt((unsigned long long)v23);
            v19 = 0;
            *((unsigned long long *)&v19) = 0x3ff0000000000000;
            v18 = 0;
            *((unsigned long long *)&v18) = 4591870180066957722;
        }
        else
        {
            tmp_4 = UnaryOp Sqrt;
            v23 = tmp_4;
        }
        tmp_11 = v23 <= v18 ^ 18446744073709551615;
        v24 = v23 & (v23 <= v18 ^ 18446744073709551615);
        *((unsigned long long *)&v8) = (unsigned long long)(!(tmp_11) & v19 | v24);
        *((unsigned long long *)v6) = (unsigned long long)v8;
        v12 = 1;
    }
    while (true);
    v25 = 0;
    v26 = 0;
    *((unsigned long long *)&v26) = 4630462731938506638;
    do
    {
        v27 = 0;
        do
        {
            v28 = 0;
            *((unsigned long long *)&v28) = *((long long *)&(0x2580 * v17 + (char *)v3)[8 * v27]);
            xmm1<16> = (xmm1<16> - Conv(64->128, Load(addr=(r15<8> + (rcx<8> * 0x8<64>)), size=8, endness=Iend_LE)))
            *((unsigned long long *)&(0x2580 * v17 + (char *)v3)[8 * v27]) = v29;
            v30 = 0;
            *((unsigned long long *)&v30) = *((long long *)(v6 + v27 * 8));
            v31 = v30 * v26;
            *((unsigned long long *)&v29) = v29 / v31;
            *((unsigned long long *)&(0x2580 * v17 + (char *)v3)[8 * v27]) = v29;
            v27 += 1;
        }
        while (v27 != 1200);
        v32 = 1;
    }
    while (true);
    v33 = 1;
    do
    {
        v34 = &v4[1200 * v25];
        v4[1200 * v25 + v25] = 0x3ff0000000000000;
        v35 = v33;
        do
        {
            v36 = v34 + v35 * 8;
            *((long long *)(v34 + v35 * 8)) = 0;
            v37 = 0;
            v38 = 0;
            do
            {
                v39 = 0;
                *((unsigned long long *)&v39) = *((long long *)(0x2580 * v38 + (char *)v3));
                xmm1<16> = (xmm1<16> * Conv(64->128, Load(addr=(((r9<8> * 0x2580<64>) + rbx<8>) + (rdi<8> * 0x8<64>)), size=8, endness=Iend_LE)))
                v37 += v40;
                *(v36) = v37;
                v38 += 1;
            }
            while (v38 != 1400);
            v4[1200] = v37;
            v35 = 2;
        }
        while (true);
        v25 = 1;
        v33 = 2;
    }
    while (true);
    v4[1439999] = 0x3ff0000000000000;
    if (v0 >= 43)
    {
        if (*(*(v1)) != 0)
        {
            free(v3);
            free(v4);
            free(v5);
            free(v6);
            return 0;
        }
        v41 = *((long long *)got.stderr);
        fwrite("==BEGIN DUMP_ARRAYS==\n", 0x16, 0x1, *((long long *)got.stderr));
        v48 = 0;
        v0 = v41;
        fprintf(v41, "begin dump: %s", &.L.str.3);
        do
        {
            v1 = v48 * 1200;
            v45 = 0;
            while (true)
            {
                if (((unsigned int)(v1 + v45) * 3435973837 >> 2 | (unsigned int)(v1 + v45) * 3435973837 << 30) <= 214748364)
                {
                    fputc(0xa, v0);
                }
                fprintf(v0, "%0.2lf ");
                v45 += 1;
                if (v45 == 1200)
                {
                    break;
                }
            }
            v48 = 1;
        }
        while (true);
        fprintf(v0, "\nend   dump: %s\n", &.L.str.3);
        fwrite("==END   DUMP_ARRAYS==\n", 0x16, 0x1, v0);
        free(v3);
        free(v4);
        free(v5);
        free(v6);
        return 0;
    }
    free(v3);
    free(v4);
    free(v5);
    free(v6);
    return 0;
}

