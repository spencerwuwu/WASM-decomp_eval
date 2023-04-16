long long init_array(unsigned int a0, unsigned long a1)
{
    unsigned long long v1;  // rdi
    unsigned long v2;  // rax
    unsigned long long v3;  // rdx
    void* v4;  // r8
    uint128_t v5;  // xmm1
    unsigned long long v7;  // rcx

    if ((unsigned int)v1 > 0)
    {
        v1 = v1;
        v7 = 0;
        do
        {
            v3 = v7 + v1;
            v4 = 0;
            do
            {
                v5 = 0;
                *((unsigned long long *)&v5) = v3 - v4;
                *((unsigned long long *)&v5) = v5 / v1;
                *((unsigned long long *)(v7 * 8000 + a1 + v4 * 8)) = v5;
                v4 += 1;
            }
            while (v4 != v1);
            v7 = 1;
        }
        while (v1 != 1);
        return v1;
    }
    return v2;
}

extern char .L.str.2;
extern char got.stderr;

int print_array(unsigned int a0, unsigned long a1)
{
    unsigned long v0;  // [bp-0x38]
    unsigned long v2;  // rax
    unsigned long long v3;  // rdi
    unsigned long v7;  // r12
    unsigned long long v8;  // r12
    unsigned long long v10;  // rbp
    void* v11;  // r15
    unsigned long long v14;  // r13

    v0 = v2;
    fwrite("==BEGIN DUMP_ARRAYS==\n", 0x16, 0x1, *((long long *)got.stderr));
    fprintf(*((long long *)got.stderr), "begin dump: %s", &.L.str.2);
    if ((unsigned int)v7 > 0)
    {
        v7 = v3;
        v14 = 0;
        do
        {
            v10 = v8 * v14;
            v11 = 0;
            while (true)
            {
                if (((unsigned int)(v11 + v10) * 3435973837 + 429496728 >> 2 | (unsigned int)(v11 + v10) * 3435973837 + 429496728 << 30) <= 214748364)
                {
                    fputc(0xa, *((long long *)got.stderr));
                }
                fprintf(*((long long *)got.stderr), "%0.2lf ");
                v11 += 1;
                if (v11 == v8)
                {
                    break;
                }
            }
            v14 = 1;
        }
        while (v8 != 1);
        fprintf(*((long long *)got.stderr), "\nend   dump: %s\n", &.L.str.2);
        fwrite("==END   DUMP_ARRAYS==\n", 0x16, 0x1, *((long long *)got.stderr));
        return;
    }
    fprintf(*((long long *)got.stderr), "\nend   dump: %s\n", &.L.str.2);
    fwrite("==END   DUMP_ARRAYS==\n", 0x16, 0x1, *((long long *)got.stderr));
    return;
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int kernel_adi(unsigned int a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    unsigned long long v0;  // [bp-0x68]
    int tmp_48;  // tmp #48
    int tmp_59;  // tmp #59
    int tmp_61;  // tmp #61
    int tmp_72;  // tmp #72
    unsigned int v1;  // [bp-0x5c]
    unsigned long v2;  // [bp-0x58]
    unsigned long long v3;  // [bp-0x50]
    unsigned long long v4;  // [bp-0x48]
    struct_0 *v5;  // [bp-0x40]
    unsigned long long *v6;  // [bp-0x38]
    unsigned long v8;  // rdi
    unsigned long long v9;  // xmm0lq
    int v10;  // xmm8
    unsigned long long v11;  // xmm1lq
    int v12;  // xmm1
    int v13;  // xmm0
    int v14;  // xmm2
    uint128_t v15;  // xmm3
    uint128_t v16;  // xmm1
    int v17;  // xmm2
    uint128_t v18;  // xmm0
    uint128_t v19;  // xmm5
    uint128_t v20;  // xmm4
    uint128_t v21;  // xmm6
    uint128_t v22;  // xmm7
    unsigned long long v23;  // r10
    unsigned long long v24;  // rbp
    unsigned long long v25;  // r13
    unsigned long long v26;  // rbx
    unsigned long long v27;  // rdi
    unsigned long long v28;  // r10
    unsigned long long v29;  // r12
    uint128_t v30;  // xmm9
    uint128_t v31;  // xmm8
    unsigned long long v32;  // r12
    uint128_t v33;  // xmm8
    uint128_t v34;  // xmm8
    uint128_t v35;  // xmm9
    uint128_t v36;  // xmm10
    uint128_t v37;  // xmm9
    uint128_t v38;  // xmm10
    uint128_t v39;  // xmm11
    uint128_t v40;  // xmm12
    uint128_t v41;  // xmm12
    uint128_t v42;  // xmm11
    uint128_t v43;  // xmm11
    unsigned long long *v44;  // r10
    uint128_t v45;  // xmm8
    unsigned long long v46;  // r12
    unsigned long long v47;  // r14
    unsigned long long v48;  // rdi
    unsigned long long v49;  // r10
    uint128_t v50;  // xmm8
    uint128_t v51;  // xmm8
    uint128_t v52;  // xmm9
    uint128_t v53;  // xmm10
    uint128_t v54;  // xmm9
    uint128_t v55;  // xmm10
    uint128_t v56;  // xmm11
    uint128_t v57;  // xmm12
    uint128_t v58;  // xmm12
    uint128_t v59;  // xmm11
    uint128_t v60;  // xmm11
    uint128_t v61;  // xmm8
    unsigned long long v62;  // r10
    uint128_t v63;  // xmm9
    unsigned long long v64[2];  // rdi
    unsigned long long v65[2];  // rsi
    uint128_t v66;  // xmm8
    unsigned long long v67;  // rbp
    unsigned long long v68;  // r13

    v0 = a1;
    v1 = v8;
    if ((unsigned int)v8 > 0)
    {
        v9 = v0;
        v10 = 0;
        *((unsigned long long *)&v10) = 0x3ff0000000000000;
        v11 = v1;
        tmp_48 = v10 / v12 / (v10 / v13 * v10 / v13);
        v14 = 0;
        *((unsigned long long *)&v14) = 0xbfe0000000000000;
        v15 = (v10 / v12 + v10 / v12) / (v10 / v13 * v10 / v13) * v14;
        v16 = (v10 / v12 + v10 / v12) / (v10 / v13 * v10 / v13) + v10;
        tmp_59 = v14 * tmp_48;
        v17 = v14 * tmp_48;
        v18 = tmp_48 + v10;
        v19 = v15 ^ 0x8000000000000000;
        v20 = 0x8000000000000000 ^ tmp_59;
        v21 = tmp_59 + tmp_59 + v10;
        v22 = v15 * 2 + v10;
        v3 = v0 - 2;
        v2 = (v0 - 1) * 8 + 8000;
        v23 = 1;
        v6 = v0 - 1;
        v5 = (v0 - 1) * 8000 + a3;
        do
        {
            v4 = v23;
            if ((int)v0 > 2)
            {
                v24 = 1;
                v25 = 0;
                do
                {
                    v26 = v25 * 8000;
                    *((long long *)(a3 + v24 * 8)) = 0x3ff0000000000000;
                    v27 = v24 * 8000;
                    *((long long *)(a4 + v24 * 8000)) = 0;
                    *((long long *)(a5 + v24 * 8000)) = *((long long *)(a3 + v24 * 8));
                    v28 = v24 - 1;
                    if (a4 + v25 * 8000 + 8000 < a5 + v2 + v25 * 8000)
                    {
                        v29 = 1;
                        if (a5 + v25 * 8000 + 8000 < v2 + v25 * 8000 + a4)
                        {
                            do
                            {
                                v33 = 0;
                                *((unsigned long long *)&v33) = *((long long *)(a4 + v27 + v29 * 8 - 8));
                                v34 = v33 * v15 + v16;
                                *((unsigned long long *)(a4 + v27 + v29 * 8)) = (v15 ^ 0x8000000000000000) / v34;
                                v35 = 0;
                                *((unsigned long long *)&v35) = *((long long *)(v29 * 8000 + a2 + 8));
                                v36 = 0;
                                *((unsigned long long *)&v36) = *((long long *)(v29 * 8000 + a2 + v28 * 8));
                                tmp_61 = v36 * v20 + v35 * v21;
                                v37 = 0;
                                *((unsigned long long *)&v37) = *((long long *)(v29 * 8000 + a2 + v24 * 8));
                                v38 = 0;
                                *((unsigned long long *)&v38) = *((long long *)(a5 + v27 + v29 * 8 - 8));
                                *((unsigned long long *)&v38) = (v38 * (v15 ^ 0x8000000000000000) + v37 * v20 + tmp_61) / v34;
                                *((unsigned long long *)(a5 + v27 + v29 * 8)) = v38;
                                v29 += 1;
                            }
                            while (v29 != v0 - 1);
                        }
                    }
                    if (a4 + v25 * 8000 + 8000 >= a5 + v2 + v25 * 8000 || a5 + v25 * 8000 + 8000 >= v2 + v25 * 8000 + a4)
                    {
                        v30 = 0;
                        *((unsigned long long *)&v30) = *((long long *)(a4 + v26 + 8000));
                        v31 = 0;
                        *((unsigned long long *)&v31) = *((long long *)(a5 + v26 + 8000));
                        v32 = 1;
                        do
                        {
                            *((unsigned long long *)(a4 + v27 + v32 * 8)) = v19 / (v30 * v15 + v16);
                            v39 = 0;
                            *((unsigned long long *)&v39) = *((long long *)(v32 * 8000 + a2 + 8));
                            v40 = 0;
                            *((unsigned long long *)&v40) = *((long long *)(v32 * 8000 + a2 + v28 * 8));
                            v41 = v40 * v20 + v39 * v21;
                            v42 = 0;
                            *((unsigned long long *)&v42) = *((long long *)(v32 * 8000 + a2 + v24 * 8));
                            v43 = v42 * v20 + v41;
                            v31 = (v31 * v19 + v43) / (v30 * v15 + v16);
                            *((unsigned long long *)(a5 + v27 + v32 * 8)) = v31;
                            v32 += 1;
                            v30 = v19 / (v30 * v15 + v16);
                        }
                        while (v32 != v0 - 1);
                    }
                    v5->field_8 = 0x3ff0000000000000;
                    v44 = v3;
                    if ((int)v0 >= 3)
                    {
                        do
                        {
                            v45 = 0;
                            *((unsigned long long *)&v45) = *((long long *)(a4 + v27 + v44 * 8));
                            xmm8lq<8> = Conv(128->64, ((xmm8<16> * Conv(64->128, Load(addr=((((r10<8> * 0x1f40<64>) + rcx<8>) + 0x8<64>) + 0x1f40<64>), size=8, endness=Iend_LE))) + Conv(64->128, Load(addr=((r9<8> + rdi<8>) + (r10<8> * 0x8<64>)), size=8, endness=Iend_LE))))
                            *((unsigned long long *)(v44 * 8000 + a3 + 8)) = v45;
                            v44 = (char *)v44 + 1;
                        }
                        while (v44 > 1);
                    }
                    v25 = 1;
                    v24 = 2;
                }
                while (v0 - 1 != 2);
            }
            if ((int)v0 > 2)
            {
                v68 = 1;
                v67 = 0;
                do
                {
                    v46 = v67 * 8000;
                    v47 = v68 * 8000;
                    *((long long *)(a2 + v68 * 8000)) = 0x3ff0000000000000;
                    *((long long *)(a4 + v68 * 8000)) = 0;
                    *((long long *)(a5 + v68 * 8000)) = *((long long *)(a2 + v68 * 8000));
                    v48 = v68 - 1;
                    v68 += 1;
                    if (a4 + v67 * 8000 + 8000 < a5 + v2 + v67 * 8000)
                    {
                        v49 = 1;
                        if (a5 + v67 * 8000 + 8000 < v2 + v67 * 8000 + a4)
                        {
                            do
                            {
                                v50 = 0;
                                *((unsigned long long *)&v50) = *((long long *)(a4 + v47 + v49 * 8 - 8));
                                v51 = v50 * v17 + v18;
                                *((unsigned long long *)(a4 + v47 + v49 * 8)) = v20 / v51;
                                v52 = 0;
                                *((unsigned long long *)&v52) = *((long long *)(a3 + v47 + v49 * 8));
                                v53 = 0;
                                *((unsigned long long *)&v53) = *((long long *)(v48 * 8000 + a3 + v49 * 8));
                                tmp_72 = v53 * (v15 ^ 0x8000000000000000) + v52 * v22;
                                v54 = 0;
                                *((unsigned long long *)&v54) = *((long long *)(v68 * 8000 + a3 + v49 * 8));
                                v55 = 0;
                                *((unsigned long long *)&v55) = *((long long *)(a5 + v47 + v49 * 8 - 8));
                                *((unsigned long long *)&v55) = (v55 * v20 + v54 * (v15 ^ 0x8000000000000000) + tmp_72) / v51;
                                *((unsigned long long *)(a5 + v47 + v49 * 8)) = v55;
                                v49 += 1;
                            }
                            while (v49 != v0 - 1);
                        }
                    }
                    if (a4 + v67 * 8000 + 8000 >= a5 + v2 + v67 * 8000 || a5 + v67 * 8000 + 8000 >= v2 + v67 * 8000 + a4)
                    {
                        v63 = 0;
                        *((unsigned long long *)&v63) = *((long long *)(a4 + v46 + 8000));
                        v61 = 0;
                        *((unsigned long long *)&v61) = *((long long *)(a5 + v46 + 8000));
                        v62 = 1;
                        do
                        {
                            *((unsigned long long *)(a4 + v47 + v62 * 8)) = (unsigned long long)(v20 / (v63 * v17 + v18));
                            v56 = 0;
                            *((unsigned long long *)&v56) = *((long long *)(a3 + v47 + v62 * 8));
                            v57 = 0;
                            *((unsigned long long *)&v57) = *((long long *)(v48 * 8000 + a3 + v62 * 8));
                            v58 = v57 * v19 + v56 * v22;
                            v59 = 0;
                            *((unsigned long long *)&v59) = *((long long *)(v68 * 8000 + a3 + v62 * 8));
                            v60 = v59 * v19 + v58;
                            v61 = (v61 * v20 + v60) / (v63 * v17 + v18);
                            *((unsigned long long *)(a5 + v47 + v62 * 8)) = v61;
                            v62 += 1;
                            v63 = v20 / (v63 * v17 + v18);
                        }
                        while (v62 != v0 - 1);
                    }
                    v64 = a2 + v47;
                    *((long long *)(a2 + v47 + v6 * 8)) = 0x3ff0000000000000;
                    v65 = v3;
                    if ((int)v0 >= 3)
                    {
                        do
                        {
                            v66 = 0;
                            *((unsigned long long *)&v66) = *((long long *)(a4 + v47 + v65 * 8));
                            xmm8lq<8> = Conv(128->64, ((xmm8<16> * Conv(64->128, Load(addr=((rdi<8> + (rsi<8> * 0x8<64>)) + 0x8<64>), size=8, endness=Iend_LE))) + Conv(64->128, Load(addr=((r9<8> + r14<8>) + (rsi<8> * 0x8<64>)), size=8, endness=Iend_LE))))
                            *((unsigned long long *)((char *)v64 + 0x8 * v65)) = v66;
                            v65 = (char *)&v65[0] + 1;
                        }
                        while (v65 > 1);
                    }
                    v67 = 1;
                }
                while (v68 != v0 - 1);
            }
            v23 = v4 + 1;
        }
        while ((unsigned int)v4 != v1);
        return;
    }
    return;
}

long long submain(unsigned int a0, unsigned long long a1)
{
    unsigned long v0;  // [bp-0x38]
    unsigned long v2;  // rax
    unsigned long v5;  // rbx
    void* v6;  // r14
    void* v7;  // r12
    void* v8;  // r13
    int v9;  // xmm0
    unsigned long long v10;  // rcx
    void* v11;  // rdx
    uint128_t v12;  // xmm1
    unsigned long long v13;  // rax

    v0 = v2;
    v5 = polybench_alloc_data(0xf4240, 0x8);
    v6 = polybench_alloc_data(0xf4240, 0x8);
    v7 = polybench_alloc_data(0xf4240, 0x8);
    v8 = polybench_alloc_data(0xf4240, 0x8);
    v13 = 0;
    v9 = 0;
    *((unsigned long long *)&v9) = 0x408f400000000000;
    do
    {
        v10 = v13 + 1000;
        v11 = 0;
        do
        {
            v12 = 0;
            *((unsigned long long *)&v12) = v10 - v11;
            *((unsigned long long *)&v12) = (unsigned long long)(v12 / v9);
            *((unsigned long long *)(v13 * 8000 + v5 + v11 * 8)) = v12;
            v11 += 1;
        }
        while (v11 != 1000);
        v13 = 1;
    }
    while (true);
    kernel_adi(0x1f4, 0x3e8, v5, v6, v7, v8);
    if (a0 >= 43)
    {
        if (*((char *)*((long long *)a1)) == 0)
        {
            print_array(0x3e8, v5);
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
    free(v5);
    free(v6);
    free(v7);
    free(v8);
    return 0;
}

