extern char .L.str.3;
extern char got.stderr;

long long submain(unsigned int a0, unsigned long a1)
{
    unsigned int v0;  // [bp-0x3c]
    int tmp_4;  // tmp #4
    int tmp_2;  // tmp #2
    char **v1;  // [bp-0x38]
    void* v3;  // rbx
    int v5;  // xmm1
    int v6;  // xmm2
    unsigned long long v7;  // r14
    void* v8;  // rax
    uint128_t v9;  // xmm0
    unsigned long long v10;  // rbp
    int v12;  // xmm2
    int v13;  // xmm1
    unsigned long long v14;  // r15
    void* v15;  // rax
    void* v16;  // r15
    unsigned long long v19;  // rcx
    unsigned long long v20;  // rdx
    unsigned long long *v21;  // rsi
    void* v22;  // rdi
    void* v23;  // rax
    unsigned long long v24;  // r12
    void* v25;  // rax
    unsigned long long *v26;  // rdx
    uint128_t v27;  // xmm0
    void* v28;  // rsi
    uint128_t v29;  // xmm1
    uint128_t v30;  // xmm1
    uint128_t v31;  // xmm0
    unsigned long v32;  // cc_ndep
    void* v33;  // rax
    unsigned long long v34;  // cc_op
    void* v35;  // cc_dep1
    void* v36;  // rdx
    uint128_t v37;  // xmm1
    uint128_t v38;  // xmm1
    unsigned long v39;  // cc_ndep
    unsigned long long v40;  // cc_op
    void* v41;  // cc_dep1
    uint128_t v42;  // xmm0
    void* v43;  // r14
    unsigned long v44;  // cc_dep1
    unsigned long v45;  // cc_ndep
    void* v46;  // r15
    unsigned long long v48;  // r13
    unsigned long long v50;  // rbp
    void* v51;  // r15

    v1 = a1;
    v0 = a0;
    v3 = polybench_alloc_data(0x3d0900, 0x8);
    v10 = 0;
    v5 = 0;
    *((unsigned long long *)&v5) = 0x409f400000000000;
    v6 = 0;
    *((unsigned long long *)&v6) = 0x3ff0000000000000;
    do
    {
        v7 = v10;
        v8 = 0;
        do
        {
            v9 = 0;
            *((unsigned long long *)&v9) = 0 - (unsigned int)v8;
            *((unsigned long long *)&v9) = (unsigned long long)(v9 / v5 + v6);
            *((unsigned long long *)(&((char *)v3)[16000 * v7] + 0x8 * v8)) = v9;
            v8 += 1;
        }
        while (v8 != 1);
        v10 = 1;
        memset(0 * 16008 + 8 + v3, 0x0, 0x3e78);
        v12 = 0;
        *((unsigned long long *)&v12) = 0x3ff0000000000000;
        v13 = 0;
        *((unsigned long long *)&v13) = 0x409f400000000000;
        *((long long *)v3) = 0x3ff0000000000000;
        v14 = 2;
    }
    while (true);
    (unsigned int)v15 = polybench_alloc_data(0x3d0900, 0x8);
    v16 = v15;
    memset(v15, 0x0, 0x1e84800);
    do
    {
        v19 = 0;
        do
        {
            v20 = v19 * 16000;
            v21 = v3 + v19 * 16000;
            v22 = 0;
            do
            {
                v42 = 0;
                *((unsigned long long *)&v42) = *(v21);
                xmm0lq<8> = Conv(128->64, ((xmm0<16> * Conv(64->128, Load(addr=((rdi<8> * 0x3e80<64>) + rbx<8>), size=8, endness=Iend_LE))) + Conv(64->128, Load(addr=((r15<8> + rdx<8>) + (rdi<8> * 0x8<64>)), size=8, endness=Iend_LE))))
                *((unsigned long long *)(&((char *)v16)[v20] + 0x8 * v22)) = v42;
                v22 += 1;
            }
            while (v22 != 2000);
            v19 = 1;
        }
        while (true);
    }
    while (true);
    do
    {
        v23 = 0;
        do
        {
            *((long long *)((char *)v3 + 0x8 * v23)) = *((long long *)((char *)v16 + 0x8 * v23));
            v23 += 1;
        }
        while (v23 != 2000);
        v24 = 1;
    }
    while (true);
    free(v16);
    v46 = 0;
    do
    {
        if (v46 != 0)
        {
            v25 = 0;
            do
            {
                if (v25 != 0)
                {
                    v26 = 0 * 16000 + v3 + v25 * 8;
                    v27 = 0;
                    *((unsigned long long *)&v27) = *((long long *)((char *)v3 + 0x8 * v25));
                    v28 = 0;
                    do
                    {
                        v29 = 0;
                        *((unsigned long long *)&v29) = *((long long *)((char *)v3 + 0x8 * v28));
                        xmm1<16> = (xmm1<16> * Conv(64->128, Load(addr=(((0x0<64> * 0x3e80<64>) + rbx<8>) + (rsi<8> * 0x8<64>)), size=8, endness=Iend_LE)))
                        v27 -= v30;
                        *(v26) = v27;
                        v28 += 1;
                    }
                    while (v28 != 0);
                }
                v31 = 0;
                *((unsigned long long *)&v31) = *((long long *)((char *)v3 + 0x8 * v25));
                xmm0lq<8> = Conv(128->64, (xmm0<16> / Conv(64->128, Load(addr=(((rax<8> * 0x3e80<64>) + rbx<8>) + (rax<8> * 0x8<64>)), size=8, endness=Iend_LE))))
                *((unsigned long long *)((char *)v3 + 0x8 * v25)) = v31;
                v32 = (0 * 16000 + v3 <= 0 * 16000? 1 : 0);
                v25 += 1;
            }
            while (v25 != 0);
            v33 = 0 * 16000 + v3;
            v42 = 0;
            *((unsigned long long *)&v42) = *((long long *)v33);
            v34 = 19;
            v35 = 0;
            v36 = 0;
            do
            {
                v37 = 0;
                *((unsigned long long *)&v37) = *((long long *)((char *)v33 + 0x8 * v36));
                v38 = v37 * v37;
                v42 -= v38;
                *((unsigned long long *)v33) = v42;
                v39 = [D] amd64g_calculate_rflags_c(cc_op<8>, cc_dep1<8>, 0x0<64>, cc_ndep<8>);
                v36 += 1;
                v40 = 8;
                v41 = v36;
            }
            while (v36 != 0);
        }
        v43 = v46 * 16000 + v3;
        v44 = BinaryOp CmpF & 69;
        if ((BinaryOp CmpF & 1) != 0)
        {
            sqrt(*((long long *)(0x3e80 * v46 + (char *)v3 + 0x8 * v46)));
        }
        else
        {
            tmp_4 = UnaryOp Sqrt;
            *((unsigned long long *)&v42) = tmp_4;
        }
        *((unsigned long long *)((char *)v43 + 0x8 * v46)) = v42;
        v45 = [D] amd64g_calculate_rflags_c(0x0<64>, cc_dep1<8>, 0x0<64>, cc_ndep<8>);
        v46 += 1;
    }
    while (v46 != 2000);
    if (v0 >= 43)
    {
        if (*(*(v1)) != 0)
        {
            free(v3);
            return 0;
        }
        fwrite("==BEGIN DUMP_ARRAYS==\n", 0x16, 0x1, *((long long *)got.stderr));
        v48 = 0;
        fprintf(*((long long *)got.stderr), "begin dump: %s", &.L.str.3);
        do
        {
            v50 = v48 * 2000;
            v51 = 0;
            while (true)
            {
                if (((unsigned int)(v51 + v50) * 3435973837 >> 2 | (unsigned int)(v51 + v50) * 3435973837 << 30) <= 214748364)
                {
                    fputc(0xa, *((long long *)got.stderr));
                }
                fprintf(*((long long *)got.stderr), "%0.2lf ");
                v51 += 1;
                if (v51 == 1)
                {
                    break;
                }
            }
            v48 = 1;
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

