extern char .L.str.3;
extern char .L.str.8;
extern char .L.str.9;
extern char got.stderr;

long long submain(unsigned int a0, unsigned long long a1)
{
    void* v0;  // [bp-0x40]
    unsigned long long v1;  // [bp-0x38]
    void* v5;  // rbx
    void* v6;  // r14
    void* v7;  // r15
    void* v8;  // r12
    unsigned long long v9;  // cc_op
    void* v10;  // cc_dep1
    void* v11;  // cc_dep2
    void* v12;  // rax
    unsigned long v13;  // cc_ndep
    unsigned long long v14;  // cc_op
    void* v15;  // cc_dep1
    unsigned long long v16;  // cc_dep2
    int v18;  // xmm0
    int v19;  // xmm1
    int v20;  // xmm2
    void* v21;  // rdx
    unsigned long long v22;  // rsi
    uint128_t v23;  // xmm3
    uint128_t v24;  // xmm3
    uint128_t v25;  // xmm3
    unsigned long v26;  // cc_ndep
    unsigned long long v27;  // rcx
    int v28;  // xmm0
    int v29;  // xmm1
    unsigned long long v30;  // cc_op
    void* v31;  // cc_dep1
    void* v32;  // cc_dep2
    void* v33;  // rcx
    unsigned long v34;  // cc_ndep
    unsigned long long v35;  // cc_op
    void* v36;  // cc_dep1
    unsigned long long v37;  // cc_dep2
    unsigned long long v38;  // rcx
    unsigned long long v39;  // rdx
    void* v40;  // rsi
    uint128_t v41;  // xmm2
    void* v42;  // rcx
    unsigned long long v43;  // rdx
    uint128_t v44;  // xmm2
    unsigned long long v45;  // rcx
    void* v46;  // rcx
    void* v47;  // rsi
    uint128_t v48;  // xmm2
    unsigned long long v49;  // rdi
    unsigned long long v50;  // rcx
    unsigned long v51;  // cc_ndep
    unsigned long long v52;  // rax
    void* v53;  // r13
    unsigned long long v55;  // rbp
    void* v58;  // r13
    unsigned long long v61;  // rbp
    void* v65;  // r13
    unsigned long long v68;  // rbp
    void* v71;  // r13

    v5 = polybench_alloc_data(0x124f80, 0x8);
    v6 = polybench_alloc_data(0x124f80, 0x8);
    v7 = polybench_alloc_data(0x124f80, 0x8);
    v8 = polybench_alloc_data(0x1f4, 0x8);
    v27 = 0;
    v9 = 19;
    v10 = 0;
    v11 = 0;
    v12 = 0;
    do
    {
        *((void* *)((char *)v8 + 0x8 * v12)) = v12;
        v13 = [D] amd64g_calculate_rflags_c(cc_op<8>, cc_dep1<8>, cc_dep2<8>, cc_ndep<8>);
        v12 += 1;
        v14 = 8;
        v15 = v12;
        v16 = 500;
    }
    while (v12 != 500);
    v18 = 0;
    *((unsigned long long *)&v18) = 0x408f400000000000;
    v19 = 0;
    *((unsigned long long *)&v19) = 0x4092c00000000000;
    do
    {
        v20 = 0;
        *((unsigned long long *)&v20) = v27;
        v21 = 0;
        do
        {
            v22 = v21 + 1;
            v23 = 0;
            *((unsigned long long *)&v23) = v21 + 1;
            *((unsigned long long *)&v23) = (unsigned long long)(v23 * v20 / v18);
            *((unsigned long long *)(&((char *)v5)[9600 * v27] + 0x8 * v21)) = v23;
            v24 = 0;
            *((unsigned long long *)&v24) = v21 + 2;
            *((unsigned long long *)&v24) = (unsigned long long)(v24 * v20 / v19);
            *((unsigned long long *)(&((char *)v6)[9600 * v27] + 0x8 * v21)) = v24;
            v25 = 0;
            *((unsigned long long *)&v25) = v21 + 3;
            *((unsigned long long *)&v25) = (unsigned long long)(v25 * v20 / v18);
            *((unsigned long long *)(&((char *)v7)[9600 * v27] + 0x8 * v21)) = v25;
            v21 += 1;
        }
        while (v22 != 1200);
        v26 = 1200 < 1200;
        v27 = 1;
    }
    while (true);
    v28 = 0;
    *((unsigned long long *)&v28) = 0xbfe0000000000000;
    v29 = 0;
    *((unsigned long long *)&v29) = 13827852295878370918;
    do
    {
        v30 = 19;
        v31 = 0;
        v32 = 0;
        v33 = 0;
        do
        {
            *((long long *)((char *)v6 + 0x8 * v33)) = *((long long *)v8);
            v34 = [D] amd64g_calculate_rflags_c(cc_op<8>, cc_dep1<8>, cc_dep2<8>, cc_ndep<8>);
            v33 += 1;
            v35 = 8;
            v36 = v33;
            v37 = 1200;
        }
        while (v33 != 1200);
        v38 = 1;
        do
        {
            v39 = v38 - 1;
            v40 = 0;
            do
            {
                v41 = 0;
                *((unsigned long long *)&v41) = *((long long *)(&((char *)v7)[9600 * v38] + 0x8 * v40));
                xmm2lq<8> = Conv(128->64, (((xmm2<16> - Conv(64->128, Load(addr=(((rdx<8> * 0x2580<64>) + r15<8>) + (rsi<8> * 0x8<64>)), size=8, endness=Iend_LE))) * xmm0<16>) + Conv(64->128, Load(addr=((r14<8> + (rcx<8> * 0x2580<64>)) + (rsi<8> * 0x8<64>)), size=8, endness=Iend_LE))))
                *((unsigned long long *)(&((char *)v6)[9600 * v38] + 0x8 * v40)) = v41;
                v40 += 1;
            }
            while (v40 != 1200);
            v38 = 2;
        }
        while (true);
        v42 = 0;
        do
        {
            v43 = 1;
            do
            {
                v44 = 0;
                *((unsigned long long *)&v44) = *((long long *)&(0x2580 * v42 + (char *)v7)[8 * v43]);
                xmm2lq<8> = Conv(128->64, (((xmm2<16> - Conv(64->128, Load(addr=((((rcx<8> * 0x2580<64>) + r15<8>) + (rdx<8> * 0x8<64>)) - 0x8<64>), size=8, endness=Iend_LE))) * xmm0<16>) + Conv(64->128, Load(addr=((rbx<8> + (rcx<8> * 0x2580<64>)) + (rdx<8> * 0x8<64>)), size=8, endness=Iend_LE))))
                *((unsigned long long *)&((char *)v5 + 0x2580 * v42)[8 * v43]) = v44;
                v43 += 1;
            }
            while (v43 != 1200);
            v45 = 1;
        }
        while (true);
        v46 = 0;
        do
        {
            v47 = 0;
            do
            {
                v48 = 0;
                *((unsigned long long *)&v48) = *((long long *)&((char *)v5 + 0x2580 * v46 + 0x8 * v47)[8]);
                xmm2lq<8> = Conv(128->64, (((((xmm2<16> - Conv(64->128, Load(addr=((rbx<8> + (rcx<8> * 0x2580<64>)) + (rsi<8> * 0x8<64>)), size=8, endness=Iend_LE))) + Conv(64->128, Load(addr=(((rcx<8> * 0x2580<64>) + r14<8>) + (rsi<8> * 0x8<64>)), size=8, endness=Iend_LE))) - Conv(64->128, Load(addr=(((rcx<8> * 0x2580<64>) + r14<8>) + (rsi<8> * 0x8<64>)), size=8, endness=Iend_LE))) * xmm1<16>) + Conv(64->128, Load(addr=((r15<8> + (rcx<8> * 0x2580<64>)) + (rsi<8> * 0x8<64>)), size=8, endness=Iend_LE))))
                *((unsigned long long *)((char *)v7 + 0x2580 * v46 + 0x8 * v47)) = v48;
                v49 = v47 + 1;
                v47 += 1;
            }
            while (v49 != 1199);
            v50 = 1;
        }
        while (true);
        v51 = 999 < 999;
        v52 = 1;
    }
    while (true);
    if (a0 >= 43)
    {
        if (*((char *)*((long long *)a1)) != 0)
        {
            free(v5);
            free(v6);
            free(v7);
            free(v8);
            return 0;
        }
        v53 = *((long long *)got.stderr);
        fwrite("==BEGIN DUMP_ARRAYS==\n", 0x16, 0x1, *((long long *)got.stderr));
        v55 = 0;
        v0 = v53;
        fprintf(v53, "begin dump: %s", &.L.str.3);
        do
        {
            v1 = v55 * 1000;
            v58 = 0;
            while (true)
            {
                if (((unsigned int)(v1 + v58) * 3435973837 >> 2 | (unsigned int)(v1 + v58) * 3435973837 << 30) <= 214748364)
                {
                    fputc(0xa, v0);
                }
                fprintf(v0, "%0.2lf ");
                v58 += 1;
                if (v58 == 1200)
                {
                    break;
                }
            }
            v55 = 1;
        }
        while (true);
        v61 = 0;
        fprintf(v0, "\nend   dump: %s\n", &.L.str.3);
        fwrite("==END   DUMP_ARRAYS==\n", 0x16, 0x1, v0);
        fprintf(v0, "begin dump: %s", &.L.str.8);
        do
        {
            v1 = v61 * 1000;
            v65 = 0;
            while (true)
            {
                if (((unsigned int)(v1 + v65) * 3435973837 >> 2 | (unsigned int)(v1 + v65) * 3435973837 << 30) <= 214748364)
                {
                    fputc(0xa, v0);
                }
                fprintf(v0, "%0.2lf ");
                v65 += 1;
                if (v65 == 1200)
                {
                    break;
                }
            }
            v61 = 1;
        }
        while (true);
        v68 = 0;
        fprintf(v0, "\nend   dump: %s\n", &.L.str.8);
        fprintf(v0, "begin dump: %s", &.L.str.9);
        do
        {
            v1 = v68 * 1000;
            v71 = 0;
            while (true)
            {
                if (((unsigned int)(v1 + v71) * 3435973837 >> 2 | (unsigned int)(v1 + v71) * 3435973837 << 30) <= 214748364)
                {
                    fputc(0xa, v0);
                }
                fprintf(v0, "%0.2lf ");
                v71 += 1;
                if (v71 == 1200)
                {
                    break;
                }
            }
            v68 = 1;
        }
        while (true);
        fprintf(v0, "\nend   dump: %s\n", &.L.str.9);
        free(v5);
        free(v6);
        free(v7);
        free(v8);
        return 0;
    }
    free(v5);
    free(v6);
    free(v7);
    free(v8);
    return 0;
}

