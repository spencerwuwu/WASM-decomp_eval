long long init_array(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned long long *a4, unsigned long long *a5, unsigned long long v0, unsigned long long a6, unsigned long long a7, unsigned long long a8)
{
    unsigned long v1;  // rdx
    unsigned long v2;  // r10
    unsigned long long v3;  // rdi
    unsigned long long v5;  // r9
    unsigned long long v6;  // r11
    unsigned long long v7;  // cc_op
    unsigned long long v8;  // cc_dep1
    void* v9;  // cc_dep2
    void* v10;  // r14
    unsigned long v12;  // cc_ndep
    unsigned long long v13;  // cc_op
    void* v14;  // cc_dep1
    unsigned long long v15;  // cc_dep2
    unsigned long v16;  // cc_ndep
    void* v17;  // rbx, Other Possible Types: unsigned long long
    unsigned long v18;  // rsi
    unsigned long long v20;  // rbx
    uint128_t v21;  // xmm0
    void* v22;  // r14, Other Possible Types: unsigned long long
    unsigned long long v23;  // cc_op
    unsigned long long v24;  // cc_dep1
    void* v25;  // cc_dep2
    void* v26;  // r15
    unsigned long long v27;  // r12
    unsigned long long v28;  // cc_op
    unsigned long long v29;  // cc_dep1
    unsigned long long v30;  // cc_dep2
    unsigned long v31;  // cc_ndep
    unsigned long long v32;  // rsi
    uint128_t v33;  // xmm0
    unsigned long long v34;  // cc_op
    unsigned long long v35;  // cc_dep1
    void* v36;  // cc_dep2
    unsigned long v37;  // cc_ndep
    unsigned long long v38;  // cc_op
    void* v39;  // cc_dep1
    unsigned long long v40;  // cc_dep2
    void* v41;  // r14
    unsigned long long v42;  // rax
    unsigned long v43;  // cc_ndep
    void* v44;  // rbx, Other Possible Types: unsigned long long
    unsigned long long v45;  // rsi
    uint128_t v46;  // xmm0
    void* v47;  // rdi, Other Possible Types: unsigned long long
    unsigned long long v48;  // cc_op
    unsigned long long v49;  // cc_dep1
    void* v50;  // cc_dep2
    void* v51;  // r11
    unsigned long v52;  // cc_ndep
    unsigned long long v53;  // cc_op
    void* v54;  // cc_dep1
    unsigned long long v55;  // cc_dep2
    unsigned long v56;  // cc_ndep

    v2 = v1;
    *(a4) = 0x3ff8000000000000;
    v42 = 4608083138725491507;
    *(a5) = 4608083138725491507;
    v5 = v1;
    if ((unsigned int)v3 > 0)
    {
        v6 = v0;
        v3 = v3;
        v17 = 0;
        do
        {
            v7 = 19;
            v8 = v2;
            v9 = 0;
            if ((unsigned int)v2 > 0)
            {
                v10 = 0;
                do
                {
                    v42 = 0 * 8800 + v6;
                    *((unsigned long long *)(0 * 8800 + v6 + v10 * 8)) = ((0 * (unsigned int)v10 + 1 >> 31 CONCAT 0 * (unsigned int)v10 + 1) /m (unsigned int)v3 >> 32) / v3;
                    v12 = (0 * 8800 + v6 <= 0 * 8800? 1 : 0);
                    v10 += 1;
                    v13 = 8;
                    v14 = v10;
                    v15 = v5;
                }
                while (v10 != v5);
            }
            v16 = [D] amd64g_calculate_rflags_c(cc_op<8>, cc_dep1<8>, cc_dep2<8>, cc_ndep<8>);
            v17 += 1;
        }
        while (v17 != v3);
    }
    if ((unsigned int)v1 > 0)
    {
        v20 = a6;
        v21 = 0;
        *((unsigned long long *)&v21) = v18;
        v22 = 0;
        do
        {
            v23 = 19;
            v24 = v18;
            v25 = 0;
            if ((unsigned int)v18 > 0)
            {
                v26 = 0;
                do
                {
                    v27 = v26 + 1;
                    v42 = 0 * 7200 + v20;
                    *((unsigned long long *)(0 * 7200 + v20 + v26 * 8)) = ((0 * ((unsigned int)v26 + 1) >> 31 CONCAT 0 * ((unsigned int)v26 + 1)) /m (unsigned int)v18 >> 32) / v21;
                    v26 += 1;
                    v28 = 8;
                    v29 = v27;
                    v30 = v18;
                }
                while (v27 != v18);
            }
            v31 = [D] amd64g_calculate_rflags_c(cc_op<8>, cc_dep1<8>, cc_dep2<8>, cc_ndep<8>);
            v22 += 1;
        }
        while (v22 != v1);
    }
    if ((unsigned int)v18 > 0)
    {
        v32 = a7;
        v33 = 0;
        *((unsigned long long *)&v33) = a3;
        v44 = 0;
        do
        {
            v34 = 19;
            v35 = a3;
            v36 = 0;
            if ((unsigned int)a3 > 0)
            {
                v41 = 0;
                do
                {
                    v42 = 0 * 9600 + v32;
                    *((unsigned long long *)(0 * 9600 + v32 + v41 * 8)) = ((0 * ((unsigned int)v41 + 3) + 1 >> 31 CONCAT 0 * ((unsigned int)v41 + 3) + 1) /m (unsigned int)a3 >> 32) / v33;
                    v37 = (0 * 9600 + v32 <= 0 * 9600? 1 : 0);
                    v41 += 1;
                    v38 = 8;
                    v39 = v41;
                    v40 = a3;
                }
                while (v41 != a3);
            }
            v43 = [D] amd64g_calculate_rflags_c(cc_op<8>, cc_dep1<8>, cc_dep2<8>, cc_ndep<8>);
            v44 += 1;
        }
        while (v44 != v18);
    }
    if ((unsigned int)v3 > 0)
    {
        v45 = a8;
        v46 = 0;
        *((unsigned long long *)&v46) = v1;
        v47 = 0;
        do
        {
            v48 = 19;
            v49 = a3;
            v50 = 0;
            if ((unsigned int)a3 > 0)
            {
                v51 = 0;
                do
                {
                    v42 = 0 * 9600 + v45;
                    *((unsigned long long *)(0 * 9600 + v45 + v51 * 8)) = ((0 * ((unsigned int)v51 + 2) >> 31 CONCAT 0 * ((unsigned int)v51 + 2)) /m (unsigned int)v1 >> 32) / v46;
                    v52 = (0 * 9600 + v45 <= 0 * 9600? 1 : 0);
                    v51 += 1;
                    v53 = 8;
                    v54 = v51;
                    v55 = a3;
                }
                while (v51 != a3);
            }
            v56 = [D] amd64g_calculate_rflags_c(cc_op<8>, cc_dep1<8>, cc_dep2<8>, cc_ndep<8>);
            v47 += 1;
        }
        while (v47 != v3);
        return v42;
    }
    return v42;
}

extern char .L.str.2;
extern char got.stderr;

int print_array(unsigned int a0, unsigned int a1, unsigned long a2)
{
    unsigned long v0;  // [bp-0x38]
    unsigned long long v2;  // rdi
    unsigned long v6;  // r12
    unsigned long long v8;  // r12
    unsigned long long v9;  // r13
    unsigned long long v11;  // cc_op
    unsigned long long v12;  // cc_dep1, Other Possible Types: void*
    void* v13;  // cc_dep2
    unsigned long long v14;  // r15
    void* v15;  // r14
    unsigned long v18;  // cc_ndep
    unsigned long long v19;  // cc_op
    unsigned long long v20;  // cc_dep2
    unsigned long v21;  // cc_ndep
    void* v22;  // rbp

    v0 = a2;
    fwrite("==BEGIN DUMP_ARRAYS==\n", 0x16, 0x1, *((long long *)got.stderr));
    fprintf(*((long long *)got.stderr), "begin dump: %s", &.L.str.2);
    if ((unsigned int)v6 > 0)
    {
        v6 = v2;
        v9 = a1;
        v22 = 0;
        do
        {
            v11 = 7;
            v12 = a1;
            v13 = 0;
            if (a1 > 0)
            {
                v14 = v8 * v22;
                v15 = 0;
                while (true)
                {
                    if (((unsigned int)(v15 + v14) * 3435973837 + 429496728 >> 2 | (unsigned int)(v15 + v14) * 3435973837 + 429496728 << 30) <= 214748364)
                    {
                        fputc(0xa, *((long long *)got.stderr));
                    }
                    fprintf(*((long long *)got.stderr), "%0.2lf ");
                    v18 = (v12 + 214748364 <= v12? 1 : 0);
                    v15 += 1;
                    v19 = 8;
                    v12 = v15;
                    v20 = v9;
                    if (v15 == v9)
                    {
                        break;
                    }
                }
            }
            v21 = [D] amd64g_calculate_rflags_c(cc_op<8>, cc_dep1<8>, cc_dep2<8>, cc_ndep<8>);
            v22 += 1;
        }
        while (v22 != v8);
        fprintf(*((long long *)got.stderr), "\nend   dump: %s\n", &.L.str.2);
        fwrite("==END   DUMP_ARRAYS==\n", 0x16, 0x1, *((long long *)got.stderr));
        return;
    }
    fprintf(*((long long *)got.stderr), "\nend   dump: %s\n", &.L.str.2);
    fwrite("==END   DUMP_ARRAYS==\n", 0x16, 0x1, *((long long *)got.stderr));
    return;
}

long long kernel_2mm(unsigned int a0, unsigned long long a1, unsigned int a2, unsigned long long a3, unsigned long a4, unsigned long a5, unsigned long long v0, unsigned long long a6, unsigned long long a7)
{
    unsigned long long v1;  // rdi
    unsigned long long v2;  // rax
    void* v3;  // r11
    void* v4;  // r14, Other Possible Types: unsigned long long
    unsigned long long v5;  // cc_op
    unsigned long long v6;  // cc_dep1
    void* v7;  // cc_dep2
    unsigned long long v8;  // cc_op
    unsigned long long v9;  // cc_dep1
    void* v10;  // cc_dep2
    unsigned long long *v11;  // r12
    uint128_t v12;  // xmm2
    void* v13;  // r13
    uint128_t v14;  // xmm3
    int v15;  // xmm0
    uint128_t v16;  // xmm3
    unsigned long v17;  // cc_ndep
    unsigned long long v18;  // cc_op
    void* v19;  // cc_dep1
    unsigned long long v20;  // cc_dep2
    unsigned long v21;  // cc_ndep
    void* v22;  // r15
    unsigned long long v23;  // cc_op
    void* v24;  // cc_dep1
    unsigned long long v25;  // cc_dep2
    unsigned long v26;  // cc_ndep
    unsigned long long v27;  // rdx
    void* v28;  // rdi
    unsigned long long v29;  // cc_op
    unsigned long long v30;  // cc_dep1
    void* v31;  // cc_dep2
    uint128_t v32;  // xmm0
    int v33;  // xmm1
    unsigned long long v34;  // cc_op
    unsigned long long v35;  // cc_dep1
    void* v36;  // cc_dep2
    unsigned long long *v37;  // r14
    uint128_t v38;  // xmm0
    void* v39;  // r15
    uint128_t v40;  // xmm2
    uint128_t v41;  // xmm2
    unsigned long v42;  // cc_ndep
    unsigned long long v43;  // cc_op
    void* v44;  // cc_dep1
    unsigned long long v45;  // cc_dep2
    unsigned long v46;  // cc_ndep
    void* v47;  // rbx
    unsigned long long v48;  // cc_op
    void* v49;  // cc_dep1
    unsigned long long v50;  // cc_dep2
    unsigned long v51;  // cc_ndep
    void* v52;  // r11, Other Possible Types: unsigned long long

    v2 = v1;
    if ((unsigned int)v1 > 0)
    {
        v3 = v0;
        v4 = 0;
        do
        {
            v5 = 19;
            v6 = a1;
            v7 = 0;
            if ((unsigned int)a1 > 0)
            {
                v22 = 0;
                do
                {
                    *((long long *)(v4 * 7200 + a4 + v22 * 8)) = 0;
                    v8 = 19;
                    v9 = a2;
                    v10 = 0;
                    if ((unsigned int)a2 > 0)
                    {
                        v11 = 0 * 7200 + a4 + v22 * 8;
                        v12 = 0;
                        *((unsigned long long *)&v12) = *((long long *)(0 * 7200 + a4 + v22 * 8));
                        v13 = 0;
                        do
                        {
                            v14 = 0;
                            *((unsigned long long *)&v14) = *((long long *)(0 * 8800 + a5 + v13 * 8));
                            xmm3<16> = ((xmm3<16> * xmm0<16>) * Conv(64->128, Load(addr=((r13<8> * 0x1c20<64>) + r11<8>), size=8, endness=Iend_LE)))
                            v12 += v16;
                            *(v11) = v12;
                            v17 = (v13 * 7200 + v3 <= v13 * 7200? 1 : 0);
                            v13 += 1;
                            v18 = 8;
                            v19 = v13;
                            v20 = a2;
                        }
                        while (v13 != a2);
                    }
                    v21 = [D] amd64g_calculate_rflags_c(cc_op<8>, cc_dep1<8>, cc_dep2<8>, cc_ndep<8>);
                    v22 += 1;
                    v23 = 8;
                    v24 = v22;
                    v25 = a1;
                }
                while (v22 != a1);
            }
            v26 = [D] amd64g_calculate_rflags_c(cc_op<8>, cc_dep1<8>, cc_dep2<8>, cc_ndep<8>);
            v4 += 1;
        }
        while (v4 != v1);
    }
    if ((unsigned int)v1 > 0)
    {
        v27 = a7;
        v28 = a6;
        v52 = 0;
        do
        {
            v29 = 19;
            v30 = a3;
            v31 = 0;
            if ((unsigned int)a3 > 0)
            {
                v47 = 0;
                do
                {
                    v32 = 0;
                    *((unsigned long long *)&v32) = *((long long *)(v52 * 9600 + v27 + v47 * 8));
                    *((unsigned long long *)&v32) = (unsigned long long)(v32 * v33);
                    *((unsigned long long *)(v52 * 9600 + v27 + v47 * 8)) = v32;
                    v34 = 19;
                    v35 = a1;
                    v36 = 0;
                    if ((unsigned int)a1 > 0)
                    {
                        v37 = 0 * 9600 + a7 + v47 * 8;
                        v38 = 0;
                        *((unsigned long long *)&v38) = *((long long *)(0 * 9600 + a7 + v47 * 8));
                        v39 = 0;
                        do
                        {
                            v40 = 0;
                            *((unsigned long long *)&v40) = *((long long *)(0 * 7200 + a4 + v39 * 8));
                            xmm2<16> = (xmm2<16> * Conv(64->128, Load(addr=((r15<8> * 0x2580<64>) + rdi<8>), size=8, endness=Iend_LE)))
                            v38 += v41;
                            *(v37) = v38;
                            v42 = (v39 * 9600 + v28 <= v39 * 9600? 1 : 0);
                            v39 += 1;
                            v43 = 8;
                            v44 = v39;
                            v45 = a1;
                        }
                        while (v39 != a1);
                    }
                    v46 = [D] amd64g_calculate_rflags_c(cc_op<8>, cc_dep1<8>, cc_dep2<8>, cc_ndep<8>);
                    v47 += 1;
                    v48 = 8;
                    v49 = v47;
                    v50 = a3;
                }
                while (v47 != a3);
            }
            v51 = [D] amd64g_calculate_rflags_c(cc_op<8>, cc_dep1<8>, cc_dep2<8>, cc_ndep<8>);
            v52 += 1;
        }
        while (v52 != v2);
        return v2;
    }
    return v2;
}

long long submain(unsigned int a0, unsigned long a1)
{
    char **v0;  // [bp-0x38], Other Possible Types: unsigned long
    unsigned long v2;  // rax
    void* v4;  // rbx
    void* v5;  // r14
    void* v6;  // r12
    void* v7;  // r13
    unsigned long v8;  // r15
    void* v9;  // rax
    int v10;  // xmm0
    void* v11;  // rcx
    void* v12;  // rdx
    uint128_t v13;  // xmm1
    unsigned long long v14;  // rcx
    void* v15;  // rcx
    int v16;  // xmm0
    void* v17;  // rdx
    unsigned long long v18;  // rsi
    uint128_t v19;  // xmm1
    unsigned long long v20;  // rax
    void* v21;  // rax
    int v22;  // xmm0
    void* v23;  // rdx
    uint128_t v24;  // xmm1
    unsigned long long v25;  // rcx
    int v26;  // xmm0
    void* v27;  // rdx
    uint128_t v28;  // xmm1
    unsigned long long v29;  // rax
    void* v30;  // rax
    int v31;  // xmm0
    unsigned long long v32;  // rdx
    unsigned long long *v33;  // rsi
    uint128_t v34;  // xmm1
    void* v35;  // rdi
    uint128_t v36;  // xmm2
    uint128_t v37;  // xmm2
    int v38;  // xmm0
    unsigned long long v39;  // rcx
    unsigned long long *v40;  // rdx
    uint128_t v41;  // xmm1
    uint128_t v42;  // xmm1
    void* v43;  // rsi
    uint128_t v44;  // xmm2
    uint128_t v45;  // xmm2
    unsigned long long v46;  // rax

    v0 = v2;
    v0 = a1;
    v4 = polybench_alloc_data(0xafc80, 0x8);
    v5 = polybench_alloc_data(0xd6d80, 0x8);
    v6 = polybench_alloc_data(0xf1b30, 0x8);
    v7 = polybench_alloc_data(0x107ac0, 0x8);
    v8 = polybench_alloc_data(0xea600, 0x8);
    v9 = 0;
    v10 = 0;
    *((unsigned long long *)&v10) = 0x4089000000000000;
    v11 = 0;
    do
    {
        v12 = 0;
        do
        {
            v13 = 0;
            *((unsigned long long *)&v13) = (unsigned int)v11 * (unsigned int)v12 + 1 - (unsigned int)((((unsigned int)v11 * (unsigned int)v12 + 1) * 1374389535 >> 40) + (((unsigned int)v11 * (unsigned int)v12 + 1) * 1374389535 >> 63)) * 800;
            *((unsigned long long *)&v13) = (unsigned long long)(v13 / v10);
            *((unsigned long long *)(0x2260 * v11 + (char *)v5 + 0x8 * v12)) = v13;
            v12 += 1;
        }
        while (v12 != 1100);
        v14 = 1;
    }
    while (true);
    v15 = 0;
    v16 = 0;
    *((unsigned long long *)&v16) = 0x408c200000000000;
    do
    {
        v17 = 0;
        do
        {
            v18 = v17 + 1;
            v19 = 0;
            *((unsigned long long *)&v19) = (unsigned int)v9 * ((unsigned int)v17 + 1) - (unsigned int)(((unsigned int)((unsigned int)v9 * ((unsigned int)v17 + 1) * -1851608123 >> 32) + (unsigned int)v9 * ((unsigned int)v17 + 1) >> 9) + ((unsigned int)((unsigned int)v9 * ((unsigned int)v17 + 1) * -1851608123 >> 32) + (unsigned int)v9 * ((unsigned int)v17 + 1) >> 31)) * 900;
            *((unsigned long long *)&v19) = (unsigned long long)(v19 / v16);
            *((unsigned long long *)(0x1c20 * v9 + (char *)v6 + 0x8 * v17)) = v19;
            v17 += 1;
        }
        while (v18 != 900);
        v20 = 1;
    }
    while (true);
    v21 = 0;
    v22 = 0;
    *((unsigned long long *)&v22) = 0x4092c00000000000;
    do
    {
        v23 = 0;
        do
        {
            v24 = 0;
            *((unsigned long long *)&v24) = (unsigned int)v15 * ((unsigned int)v23 + 3) + 1 - (unsigned int)((((unsigned int)v15 * ((unsigned int)v23 + 3) + 1) * 458129845 >> 39) + (((unsigned int)v15 * ((unsigned int)v23 + 3) + 1) * 458129845 >> 63)) * 1200;
            *((unsigned long long *)&v24) = (unsigned long long)(v24 / v22);
            *((unsigned long long *)(0x2580 * v15 + (char *)v7 + 0x8 * v23)) = v24;
            v23 += 1;
        }
        while (v23 != 1200);
        v25 = 1;
    }
    while (true);
    v26 = 0;
    *((unsigned long long *)&v26) = 0x4091300000000000;
    do
    {
        v27 = 0;
        do
        {
            v28 = 0;
            *((unsigned long long *)&v28) = (unsigned int)v21 * ((unsigned int)v27 + 2) - (unsigned int)(((unsigned int)v21 * ((unsigned int)v27 + 2) * 1999112051 >> 41) + ((unsigned int)v21 * ((unsigned int)v27 + 2) * 1999112051 >> 63)) * 1100;
            *((unsigned long long *)&v28) = (unsigned long long)(v28 / v26);
            *((unsigned long long *)(v21 * 9600 + v8 + v27 * 8)) = v28;
            v27 += 1;
        }
        while (v27 != 1200);
        v29 = 1;
    }
    while (true);
    v30 = 0;
    v31 = 0;
    *((unsigned long long *)&v31) = 0x3ff8000000000000;
    do
    {
        v32 = 0;
        do
        {
            v33 = 0 * 7200 + v4 + v32 * 8;
            *((long long *)&((char *)v4)[8 * v32]) = 0;
            v34 = 0;
            v35 = 0;
            do
            {
                v36 = 0;
                *((unsigned long long *)&v36) = *((long long *)((char *)v5 + 0x8 * v35));
                xmm2<16> = ((xmm2<16> * xmm0<16>) * Conv(64->128, Load(addr=(((rdi<8> * 0x1c20<64>) + r12<8>) + (rdx<8> * 0x8<64>)), size=8, endness=Iend_LE)))
                v34 += v37;
                *(v33) = v34;
                v35 += 1;
            }
            while (v35 != 1100);
            v32 = 1;
        }
        while (true);
    }
    while (true);
    v38 = 0;
    *((unsigned long long *)&v38) = 4608083138725491507;
    do
    {
        v39 = 0;
        do
        {
            v40 = v30 * 9600 + v8 + v39 * 8;
            v41 = 0;
            *((unsigned long long *)&v41) = *((long long *)(v30 * 9600 + v8 + v39 * 8));
            v42 = v41 * v38;
            *((unsigned long long *)(v30 * 9600 + v8 + v39 * 8)) = v42;
            v43 = 0;
            do
            {
                v44 = 0;
                *((unsigned long long *)&v44) = *((long long *)((char *)v4 + 0x8 * v43));
                xmm2<16> = (xmm2<16> * Conv(64->128, Load(addr=(((rsi<8> * 0x2580<64>) + r13<8>) + (rcx<8> * 0x8<64>)), size=8, endness=Iend_LE)))
                v42 += v45;
                *(v40) = v42;
                v43 += 1;
            }
            while (v43 != 900);
            v39 = 1;
        }
        while (true);
        v46 = 1;
    }
    while (true);
    if (a0 >= 43)
    {
        if (*(*(v0)) == 0)
        {
            print_array(0x320, 0x4b0, v8);
            free(v4);
            free(v5);
            free(v6);
            free(v7);
            free(v8);
            return 0;
        }
        free(v4);
        free(v5);
        free(v6);
        free(v7);
        free(v8);
        return 0;
    }
    free(v4);
    free(v5);
    free(v6);
    free(v7);
    free(v8);
    return 0;
}

