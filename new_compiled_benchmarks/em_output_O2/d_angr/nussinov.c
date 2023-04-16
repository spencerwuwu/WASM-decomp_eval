int kernel_nussinov(unsigned int a0, void* a1, unsigned long a2)
{
    void* v0;  // [bp-0x40]
    int tmp_58;  // tmp #58
    int tmp_62;  // tmp #62
    int tmp_86;  // tmp #86
    int tmp_93;  // tmp #93
    int tmp_99;  // tmp #99
    unsigned int *v1;  // [bp-0x38]
    unsigned long long v3;  // cc_op
    unsigned long long v4;  // rdi
    void* v5;  // cc_dep1
    void* v6;  // cc_dep2
    void* v7;  // rcx
    void* v8;  // r8
    unsigned long v9;  // cc_ndep
    void* v10;  // r9
    void* v11;  // r11
    void* v12;  // rbx, Other Possible Types: unsigned long long
    void* v13;  // r14
    unsigned long long v14;  // cc_op
    void* v15;  // cc_dep1
    void* v16;  // cc_dep2
    unsigned int *v17;  // r15
    unsigned int v18;  // r13d
    unsigned int v19;  // ebp
    void* v20;  // rax
    unsigned long long v22;  // ebp
    unsigned long long v23;  // cc_op
    void* v24;  // cc_dep1
    void* v25;  // cc_dep2
    unsigned int *v26;  // r15
    void* v27;  // r12
    unsigned long long v28;  // cc_op
    void* v29;  // cc_dep1
    unsigned long long v30;  // cc_dep2
    unsigned long long v31;  // cc_op
    void* v32;  // cc_dep1
    unsigned long long v33;  // cc_dep2
    unsigned long long v34;  // cc_op
    void* v35;  // cc_dep1
    void* v36;  // cc_dep2
    unsigned long v37;  // cc_ndep
    unsigned long long v38;  // cc_op
    void* v39;  // cc_dep1
    unsigned long long v40;  // cc_dep2

    v3 = 19;
    v5 = v4;
    v6 = 0;
    if ((unsigned int)v4 > 0)
    {
        v7 = v4;
        v0 = v4;
        do
        {
            v8 = v7;
            v9 = [D] amd64g_calculate_rflags_c(cc_op<8>, cc_dep1<8>, cc_dep2<8>, cc_ndep<8>);
            v7 -= 1;
            if (v13 < v0)
            {
                v10 = v7 * 10000 + a2;
                v1 = v7 * 10000 + a2 + v8 * 4;
                v11 = v8 + 1;
                v12 = 0;
                v13 = v8;
                do
                {
                    if (v13 > 0)
                    {
                        v17 = v10 + v13 * 4;
                        *((int *)((char *)v10 + 0x4 * v13)) = (*((int *)&((char *)v10 + 0x4 * v13)[4]) < *((int *)((char *)v10 + 0x4 * v13))? *((int *)((char *)v10 + 0x4 * v13)) : *((int *)&((char *)v10 + 0x4 * v13)[4]));
                        *((int *)((char *)v10 + 0x4 * v13)) = (*((int *)(v4 * 10000 + a2 + (v13 << 2))) < *((int *)((char *)v10 + 0x4 * v13))? *((int *)((char *)v10 + 0x4 * v13)) : *((int *)(v4 * 10000 + a2 + (v13 << 2))));
                        v18 = *((int *)((char *)v10 + 0x4 * v13));
                        v19 = *((int *)(v4 * 10000 + a2 + (v13 - 1) * 4));
                        if (v4 < v13)
                        {
                            v20 = 0;
                            *((char *)&v20) = *((char *)(a1 + v13)) + *((char *)(a1 + v7)) == 3;
                            v19 = (unsigned int)(*((int *)(v4 * 10000 + a2 + (v13 - 1) * 4)) + v20);
                        }
                        v22 = (v19 < v18? r13<8> : rbp<8>);
                        *((unsigned long long *)&v17) = v22;
                        v23 = 8;
                        v24 = v4;
                        v25 = v13;
                    }
                    else
                    {
                        *((int *)((v4 - 1) * 10000 + a2 + v13 * 4)) = (*((int *)(v4 * 10000 + a2 + (v13 << 2))) < *((int *)((v4 - 1) * 10000 + a2 + (v13 << 2)))? *((int *)((v4 - 1) * 10000 + a2 + (v13 << 2))) : *((int *)(v4 * 10000 + a2 + (v13 << 2))));
                        v14 = 8;
                        v15 = v4;
                        v16 = v13;
                    }
                    if (v4 < v13 && v13 <= 0 || v4 < v13 && v13 > 0)
                    {
                        v26 = v10 + v13 * 4;
                        v22 = *((int *)((char *)v10 + 0x4 * v13));
                        v27 = v4;
                        v28 = 7;
                        v29 = v12;
                        v30 = 1;
                        if (false)
                        {
                            v22 = (*((int *)((v4 - 1) * 10000 + a2 + (v13 << 2))) <= *((int *)(v11 * 10000 + a2 + (v13 << 2))) + *(v1)? *((int *)(v11 * 10000 + a2 + (v13 << 2))) + *(v1) : *((int *)((v4 - 1) * 10000 + a2 + (v13 << 2))));
                            *((int *)((v4 - 1) * 10000 + a2 + v13 * 4)) = (*((int *)((v4 - 1) * 10000 + a2 + (v13 << 2))) <= *((int *)(v11 * 10000 + a2 + (v13 << 2))) + *(v1)? *((int *)(v11 * 10000 + a2 + (v13 << 2))) + *(v1) : *((int *)((v4 - 1) * 10000 + a2 + (v13 << 2))));
                            v27 = v11;
                            v31 = 7;
                            v32 = v12;
                            v33 = 1;
                        }
                        if ((unsigned int)v12 != 1)
                        {
                            do
                            {
                                tmp_58 = *((int *)(v27 * 10000 + a2 + v4 * 4 + 10000)) + *((int *)((char *)v10 + 0x4 * v27));
                                tmp_62 = *((int *)(v27 * 10000 + a2 + v4 * 4 + 10000)) + *((int *)((char *)v10 + 0x4 * v27)) < (unsigned int)v22;
                                *(v26) = (*((int *)(v27 * 10000 + a2 + (v4 << 2) + 10000)) + *((int *)((char *)v10 + 0x4 * v27)) < (unsigned int)v22? (unsigned int)v22 : *((int *)(v27 * 10000 + a2 + (v4 << 2) + 10000)) + *((int *)((char *)v10 + 0x4 * v27)));
                                tmp_86 = *((int *)(v27 * 10000 + a2 + v4 * 4 + 20000)) + *((int *)&((char *)v10 + 0x4 * v27)[4]);
                                v27 += 2;
                                tmp_93 = (tmp_62? (unsigned int)v22 : tmp_58);
                                tmp_99 = (unsigned int)tmp_86 < (tmp_62? (unsigned int)v22 : tmp_58);
                                v22 = ((unsigned int)tmp_86 < (tmp_62? (unsigned int)v22 : tmp_58)? (tmp_62? (unsigned int)v22 : tmp_58) : (unsigned int)tmp_86);
                                *(v26) = (tmp_99? tmp_93 : (unsigned int)tmp_86);
                                v34 = 7;
                                v35 = v27;
                                v36 = v4;
                            }
                            while ((unsigned int)v27 != (unsigned int)v4);
                        }
                    }
                    v13 += 1;
                    v37 = [D] amd64g_calculate_rflags_c(cc_op<8>, cc_dep1<8>, cc_dep2<8>, cc_ndep<8>);
                    v12 = (unsigned int)v12 + 1;
                }
                while ((unsigned int)v13 != (unsigned int)v4);
            }
            v38 = 8;
            v39 = v13;
            v40 = 2;
        }
        while (v13 >= 2);
        return;
    }
    return;
}

extern char .L.str.3;
extern char got.stderr;

long long submain(unsigned int a0, unsigned long long a1)
{
    unsigned long v0;  // [bp-0x40]
    int tmp_57;  // tmp #57
    int tmp_54;  // tmp #54
    int tmp_29;  // tmp #29
    unsigned long v1;  // [bp-0x38], Other Possible Types: void*
    uint128_t v6;  // xmm7
    void* v7;  // rax
    uint128_t v8;  // xmm6
    uint128_t v9;  // xmm5
    uint128_t v10;  // xmm4
    uint128_t v11;  // xmm3
    uint128_t v12;  // xmm2
    uint128_t v13;  // xmm1
    uint128_t v14;  // xmm0
    void* v18;  // rdi
    unsigned long long v20;  // r14
    unsigned long long v21;  // r12
    unsigned long long v22;  // r13
    unsigned long long v23;  // rbx

    v0 = polybench_alloc_data(0x5f5e10, 0x4);
    v14 = 14;
    v13 = 12;
    v12 = 10;
    v11 = 8;
    v10 = 6;
    v9 = 4;
    v8 = 2;
    v6 = 0;
    v7 = 0;
    do
    {
        tmp_57 = BinaryOp QNarrowBin;
        *((int128_t *)(v1 + v7)) = tmp_57 - 340282366920938463463374607431768211455 & 217020518514230019;
        v7 += 16;
        v6 += 16;
        v8 += 16;
        v9 += 16;
        v10 += 16;
        v11 += 16;
        v12 += 16;
        v13 += 16;
        v14 += 16;
    }
    while (v7 != 2496);
    *((int *)&v1[2496]) = 197121;
    memset(v0, 0x0, 0x17d7840);
    kernel_nussinov(0x9c4, v1, v0);
    if (a0 >= 43)
    {
        if (*((char *)*((long long *)a1)) != 0)
        {
            free(v1);
            v18 = v0;
            free(v18);
            return 0;
        }
        v1 = polybench_alloc_data(0x9c4, 0x1);
        fwrite("==BEGIN DUMP_ARRAYS==\n", 0x16, 0x1, *((long long *)got.stderr));
        fprintf(*((long long *)got.stderr), "begin dump: %s", &.L.str.3);
        v20 = 0;
        v21 = 0;
        do
        {
            v22 = v20;
            v23 = v21;
            while (true)
            {
                if (((unsigned int)v23 * 3435973837 + 429496728 >> 2 | (unsigned int)v23 * 3435973837 + 429496728 << 30) <= 214748364)
                {
                    fputc(0xa, *((long long *)got.stderr));
                }
                fprintf(*((long long *)got.stderr), "%d ", *((int *)(0 * 10000 + v0 + v22 * 4)));
                *((unsigned int *)&v23) = (unsigned int)v23 + 1;
                v22 += 1;
                if (v22 == 2500)
                {
                    break;
                }
            }
            v21 = 2500;
            v20 = 1;
        }
        while (true);
        fprintf(*((long long *)got.stderr), "\nend   dump: %s\n", &.L.str.3);
        fwrite("==END   DUMP_ARRAYS==\n", 0x16, 0x1, *((long long *)got.stderr));
        free(v1);
        v18 = v0;
        free(v18);
        return 0;
    }
    free(v1);
    v18 = v0;
    free(v18);
    return 0;
}

