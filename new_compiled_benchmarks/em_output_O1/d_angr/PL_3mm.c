long long init_array(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned long a5, unsigned long long v0, unsigned long long a6, unsigned long long a7)
{
    unsigned long v1;  // rdx
    unsigned long v2;  // r10
    unsigned long long v3;  // r11
    unsigned long long v4;  // rdi
    unsigned long long v5;  // cc_op
    unsigned long long v6;  // cc_dep1
    void* v7;  // cc_dep2
    void* v8;  // r15
    unsigned long long v9;  // rax, Other Possible Types: unsigned long
    unsigned long v11;  // cc_ndep
    unsigned long long v12;  // cc_op
    void* v13;  // cc_dep1
    unsigned long long v14;  // cc_dep2
    unsigned long v15;  // cc_ndep
    void* v16;  // r14, Other Possible Types: unsigned long long
    unsigned long v17;  // rsi
    unsigned long long v19;  // rdi
    uint128_t v20;  // xmm0
    void* v21;  // rbx, Other Possible Types: unsigned long long
    unsigned long long v22;  // cc_op
    unsigned long long v23;  // cc_dep1
    void* v24;  // cc_dep2
    void* v25;  // r14
    unsigned long long v26;  // r15
    unsigned long long v27;  // cc_op
    unsigned long long v28;  // cc_dep1
    unsigned long long v29;  // cc_dep2
    unsigned long v30;  // cc_ndep
    unsigned long long v31;  // rsi
    uint128_t v32;  // xmm0
    unsigned long long v33;  // cc_op
    unsigned long long v34;  // cc_dep1
    void* v35;  // cc_dep2
    unsigned long v36;  // cc_ndep
    void* v37;  // rbx
    unsigned long long v38;  // cc_op
    void* v39;  // cc_dep1
    unsigned long long v40;  // cc_dep2
    unsigned long v41;  // cc_ndep
    void* v42;  // r11, Other Possible Types: unsigned long long
    unsigned long long v43;  // rsi
    unsigned long long v44;  // rax
    uint128_t v45;  // xmm0
    void* v46;  // r9, Other Possible Types: unsigned long long
    unsigned long long v47;  // cc_op
    unsigned long long v48;  // cc_dep1
    void* v49;  // cc_dep2
    void* v50;  // r11
    unsigned long v51;  // cc_ndep
    unsigned long long v52;  // cc_op
    void* v53;  // cc_dep1
    unsigned long long v54;  // cc_dep2
    unsigned long v55;  // cc_ndep

    v2 = v1;
    v3 = v1;
    if ((unsigned int)v4 > 0)
    {
        v9 = v4 * 5;
        v4 * 5 = v4 * 5;
        v16 = 0;
        do
        {
            v5 = 19;
            v6 = v2;
            v7 = 0;
            if ((unsigned int)v2 > 0)
            {
                v8 = 0;
                do
                {
                    v9 = 0 * 8000 + a5;
                    *((unsigned long long *)(0 * 8000 + a5 + v8 * 8)) = ((0 * (unsigned int)v8 + 1 >> 31 CONCAT 0 * (unsigned int)v8 + 1) /m (unsigned int)v4 >> 32) / (v4 * 5);
                    v11 = (0 * 8000 + a5 <= 0 * 8000? 1 : 0);
                    v8 += 1;
                    v12 = 8;
                    v13 = v8;
                    v14 = v3;
                }
                while (v8 != v3);
            }
            v15 = [D] amd64g_calculate_rflags_c(cc_op<8>, cc_dep1<8>, cc_dep2<8>, cc_ndep<8>);
            v16 += 1;
        }
        while (v16 != v4);
    }
    if ((unsigned int)v1 > 0)
    {
        v19 = v0;
        v9 = v17 * 5;
        v20 = 0;
        *((unsigned long long *)&v20) = v17 * 5;
        v21 = 0;
        do
        {
            v22 = 19;
            v23 = v17;
            v24 = 0;
            if ((unsigned int)v17 > 0)
            {
                v25 = 0;
                do
                {
                    v26 = v25 + 1;
                    v9 = 0 * 7200 + v19;
                    *((unsigned long long *)(0 * 7200 + v19 + v25 * 8)) = ((0 * ((unsigned int)v25 + 1) + 2 >> 31 CONCAT 0 * ((unsigned int)v25 + 1) + 2) /m (unsigned int)v17 >> 32) / v20;
                    v25 += 1;
                    v27 = 8;
                    v28 = v26;
                    v29 = v17;
                }
                while (v26 != v17);
            }
            v30 = [D] amd64g_calculate_rflags_c(cc_op<8>, cc_dep1<8>, cc_dep2<8>, cc_ndep<8>);
            v21 += 1;
        }
        while (v21 != v1);
    }
    if ((unsigned int)v17 > 0)
    {
        v31 = a6;
        v9 = a3 * 5;
        v32 = 0;
        *((unsigned long long *)&v32) = a3 * 5;
        v42 = 0;
        do
        {
            v33 = 19;
            v34 = a4;
            v35 = 0;
            if ((unsigned int)a4 > 0)
            {
                v37 = 0;
                do
                {
                    v9 = 0 * 9600 + v31;
                    *((unsigned long long *)(0 * 9600 + v31 + v37 * 8)) = ((0 * ((unsigned int)v37 + 3) >> 31 CONCAT 0 * ((unsigned int)v37 + 3)) /m (unsigned int)a3 >> 32) / v32;
                    v36 = (0 * 9600 + v31 <= 0 * 9600? 1 : 0);
                    v37 += 1;
                    v38 = 8;
                    v39 = v37;
                    v40 = a4;
                }
                while (v37 != a4);
            }
            v41 = [D] amd64g_calculate_rflags_c(cc_op<8>, cc_dep1<8>, cc_dep2<8>, cc_ndep<8>);
            v42 += 1;
        }
        while (v42 != v17);
    }
    if ((unsigned int)a4 > 0)
    {
        v43 = a7;
        v44 = v2 * 5;
        v45 = 0;
        *((unsigned long long *)&v45) = v2 * 5;
        v46 = 0;
        do
        {
            v47 = 19;
            v48 = a3;
            v49 = 0;
            if ((unsigned int)a3 > 0)
            {
                v50 = 0;
                do
                {
                    v44 = 0 * 8800 + v43;
                    *((unsigned long long *)(0 * 8800 + v43 + v50 * 8)) = ((0 * ((unsigned int)v50 + 2) + 2 >> 31 CONCAT 0 * ((unsigned int)v50 + 2) + 2) /m (unsigned int)v2 >> 32) / v45;
                    v51 = (0 * 8800 + v43 <= 0 * 8800? 1 : 0);
                    v50 += 1;
                    v52 = 8;
                    v53 = v50;
                    v54 = a3;
                }
                while (v50 != a3);
            }
            v55 = [D] amd64g_calculate_rflags_c(cc_op<8>, cc_dep1<8>, cc_dep2<8>, cc_ndep<8>);
            v46 += 1;
        }
        while (v46 != a4);
        return v44;
    }
    return v9;
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

long long kernel_3mm(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned long a5, unsigned long v2, unsigned long long a6, unsigned long long a7, unsigned long a8, unsigned long long a9, unsigned long long a10)
{
    unsigned int v0;  // [bp-0x3c]
    unsigned long v1;  // [bp-0x38]
    unsigned long long v3;  // rdi
    void* v4;  // rax, Other Possible Types: unsigned long long, unsigned long
    void* v5;  // r11
    void* v6;  // r15, Other Possible Types: unsigned long long
    unsigned long long v7;  // cc_op
    unsigned long long v8;  // cc_dep1
    void* v9;  // cc_dep2
    unsigned long long v10;  // cc_op
    unsigned long long v11;  // cc_dep1
    void* v12;  // cc_dep2
    unsigned long long *v13;  // r13
    uint128_t v14;  // xmm0
    void* v15;  // rbp
    uint128_t v16;  // xmm1
    uint128_t v17;  // xmm1
    unsigned long v18;  // cc_ndep
    unsigned long long v19;  // cc_op
    void* v20;  // cc_dep1
    unsigned long long v21;  // cc_dep2
    unsigned long v22;  // cc_ndep
    void* v23;  // r12
    unsigned long long v24;  // cc_op
    void* v25;  // cc_dep1
    unsigned long long v26;  // cc_dep2
    unsigned long v27;  // cc_ndep
    void* v28;  // rdx
    unsigned long long v29;  // rcx
    void* v30;  // rbx
    unsigned long long v31;  // cc_op
    unsigned long long v32;  // cc_dep1
    void* v33;  // cc_dep2
    unsigned long long v34;  // cc_op
    unsigned long long v35;  // cc_dep1
    void* v36;  // cc_dep2
    unsigned long long *v37;  // rbp
    uint128_t v38;  // xmm0
    uint128_t v39;  // xmm1
    uint128_t v40;  // xmm1
    unsigned long v41;  // cc_ndep
    unsigned long long v42;  // cc_op
    void* v43;  // cc_dep1
    unsigned long long v44;  // cc_dep2
    unsigned long v45;  // cc_ndep
    void* v46;  // r13
    unsigned long long v47;  // cc_op
    void* v48;  // cc_dep1
    unsigned long long v49;  // cc_dep2
    unsigned long v50;  // cc_ndep
    void* v51;  // r12, Other Possible Types: unsigned long long
    unsigned long long v52;  // rdi
    void* v53;  // r8, Other Possible Types: unsigned long long
    unsigned long long v54;  // cc_op
    unsigned long long v55;  // cc_dep1
    void* v56;  // cc_dep2
    void* v57;  // rbx
    unsigned long long v58;  // cc_op
    unsigned long long v59;  // cc_dep1
    void* v60;  // cc_dep2
    unsigned long long *v61;  // r14
    uint128_t v62;  // xmm0
    uint128_t v63;  // xmm1
    uint128_t v64;  // xmm1
    unsigned long v65;  // cc_ndep
    unsigned long long v66;  // cc_op
    void* v67;  // cc_dep1
    unsigned long long v68;  // cc_dep2
    unsigned long v69;  // cc_ndep
    unsigned long long v70;  // cc_op
    void* v71;  // cc_dep1
    unsigned long long v72;  // cc_dep2
    unsigned long v73;  // cc_ndep

    v0 = a3;
    v4 = v3;
    v1 = v3;
    if ((unsigned int)v3 > 0)
    {
        v5 = a6;
        v6 = 0;
        do
        {
            v7 = 19;
            v8 = a1;
            v9 = 0;
            if ((unsigned int)a1 > 0)
            {
                v23 = 0;
                do
                {
                    v4 = v6 * 7200 + a5;
                    *((long long *)(v6 * 7200 + a5 + v23 * 8)) = 0;
                    v10 = 19;
                    v11 = a2;
                    v12 = 0;
                    if ((unsigned int)a2 > 0)
                    {
                        v13 = v4 + v23 * 8;
                        v14 = 0;
                        *((unsigned long long *)&v14) = *((long long *)((char *)v4 + 0x8 * v23));
                        v15 = 0;
                        do
                        {
                            v16 = 0;
                            *((unsigned long long *)&v16) = *((long long *)(0 * 8000 + v2 + v15 * 8));
                            v4 = v15 * 7200 + v5;
                            xmm1<16> = (xmm1<16> * Conv(64->128, Load(addr=((rbp<8> * 0x1c20<64>) + r11<8>), size=8, endness=Iend_LE)))
                            v14 += v17;
                            *(v13) = v14;
                            v18 = (v15 * 7200 + v5 <= v15 * 7200? 1 : 0);
                            v15 += 1;
                            v19 = 8;
                            v20 = v15;
                            v21 = a2;
                        }
                        while (v15 != a2);
                    }
                    v22 = [D] amd64g_calculate_rflags_c(cc_op<8>, cc_dep1<8>, cc_dep2<8>, cc_ndep<8>);
                    v23 += 1;
                    v24 = 8;
                    v25 = v23;
                    v26 = a1;
                }
                while (v23 != a1);
            }
            v27 = [D] amd64g_calculate_rflags_c(cc_op<8>, cc_dep1<8>, cc_dep2<8>, cc_ndep<8>);
            v6 += 1;
        }
        while (v6 != v1);
    }
    v28 = a7;
    v29 = v0;
    if ((unsigned int)a1 > 0)
    {
        v30 = a9;
        v51 = 0;
        do
        {
            v31 = 7;
            v32 = v0;
            v33 = 0;
            if (v0 > 0)
            {
                v46 = 0;
                do
                {
                    v4 = 0 * 8800 + v28;
                    *((long long *)((char *)v28 + 0x8 * v46)) = 0;
                    v34 = 19;
                    v35 = a4;
                    v36 = 0;
                    if ((unsigned int)a4 > 0)
                    {
                        v37 = v4 + v46 * 8;
                        v38 = 0;
                        *((unsigned long long *)&v38) = *((long long *)((char *)v4 + 0x8 * v46));
                        v4 = 0;
                        do
                        {
                            v39 = 0;
                            *((unsigned long long *)&v39) = *((long long *)(0 * 9600 + a8 + v4 * 8));
                            xmm1<16> = (xmm1<16> * Conv(64->128, Load(addr=((rax<8> * 0x2260<64>) + rbx<8>), size=8, endness=Iend_LE)))
                            v38 += v40;
                            *(v37) = v38;
                            v41 = (v4 * 8800 + v30 <= v4 * 8800? 1 : 0);
                            v4 += 1;
                            v42 = 8;
                            v43 = v4;
                            v44 = a4;
                        }
                        while (v4 != a4);
                    }
                    v45 = [D] amd64g_calculate_rflags_c(cc_op<8>, cc_dep1<8>, cc_dep2<8>, cc_ndep<8>);
                    v46 += 1;
                    v47 = 8;
                    v48 = v46;
                    v49 = v29;
                }
                while (v46 != v29);
            }
            v50 = [D] amd64g_calculate_rflags_c(cc_op<8>, cc_dep1<8>, cc_dep2<8>, cc_ndep<8>);
            v51 += 1;
        }
        while (v51 != a1);
    }
    if ((unsigned int)v3 > 0)
    {
        v52 = a10;
        v53 = 0;
        do
        {
            v54 = 7;
            v55 = v0;
            v56 = 0;
            if (v0 > 0)
            {
                v57 = 0;
                do
                {
                    v4 = v53 * 8800 + v52;
                    *((long long *)(v53 * 8800 + v52 + v57 * 8)) = 0;
                    v58 = 19;
                    v59 = a1;
                    v60 = 0;
                    if ((unsigned int)a1 > 0)
                    {
                        v61 = v4 + v57 * 8;
                        v62 = 0;
                        *((unsigned long long *)&v62) = *((long long *)((char *)v4 + 0x8 * v57));
                        v4 = 0;
                        do
                        {
                            v63 = 0;
                            *((unsigned long long *)&v63) = *((long long *)(0 * 7200 + a5 + v4 * 8));
                            xmm1<16> = (xmm1<16> * Conv(64->128, Load(addr=((rax<8> * 0x2260<64>) + rdx<8>), size=8, endness=Iend_LE)))
                            v62 += v64;
                            *(v61) = v62;
                            v65 = (v4 * 8800 + v28 <= v4 * 8800? 1 : 0);
                            v4 += 1;
                            v66 = 8;
                            v67 = v4;
                            v68 = a1;
                        }
                        while (v4 != a1);
                    }
                    v69 = [D] amd64g_calculate_rflags_c(cc_op<8>, cc_dep1<8>, cc_dep2<8>, cc_ndep<8>);
                    v57 += 1;
                    v70 = 8;
                    v71 = v57;
                    v72 = v29;
                }
                while (v57 != v29);
            }
            v73 = [D] amd64g_calculate_rflags_c(cc_op<8>, cc_dep1<8>, cc_dep2<8>, cc_ndep<8>);
            v53 += 1;
        }
        while (v53 != v1);
        return v4;
    }
    return v4;
}

long long submain(unsigned int a0, unsigned long a1)
{
    unsigned int v0;  // [bp-0x44]
    unsigned long v1;  // [bp-0x40]
    char **v2;  // [bp-0x38]
    void* v4;  // rbx
    void* v5;  // r14
    void* v6;  // r12
    void* v7;  // r13
    void* v8;  // r15
    void* v9;  // rbp
    void* v11;  // r10
    int v12;  // xmm0
    void* v13;  // rcx
    void* v14;  // rdx
    uint128_t v15;  // xmm1
    unsigned long long v16;  // rcx
    void* v17;  // rcx
    int v18;  // xmm0
    void* v19;  // rdx
    unsigned long long v20;  // rsi
    uint128_t v21;  // xmm1
    unsigned long long v22;  // r10
    void* v23;  // rdx
    int v24;  // xmm0
    void* v25;  // r9
    uint128_t v26;  // xmm1
    unsigned long long v27;  // rcx
    int v28;  // xmm0
    void* v29;  // rcx
    uint128_t v30;  // xmm1
    unsigned long long v31;  // rdx
    unsigned long long v32;  // rdx
    unsigned long long *v33;  // rsi
    uint128_t v34;  // xmm0
    void* v35;  // rdi
    uint128_t v36;  // xmm1
    uint128_t v37;  // xmm1
    void* v38;  // r9
    unsigned long long v39;  // rdx
    unsigned long long *v40;  // rsi
    uint128_t v41;  // xmm0
    void* v42;  // rdi
    uint128_t v43;  // xmm1
    uint128_t v44;  // xmm1
    unsigned long long v45;  // rcx
    unsigned long long *v46;  // rdx
    uint128_t v47;  // xmm0
    void* v48;  // rsi
    uint128_t v49;  // xmm1
    uint128_t v50;  // xmm1
    unsigned long long v51;  // r9
    void* v53;  // rdi

    v2 = a1;
    v0 = a0;
    v4 = polybench_alloc_data(0xafc80, 0x8);
    v5 = polybench_alloc_data(0xc3500, 0x8);
    v6 = polybench_alloc_data(0xdbba0, 0x8);
    v7 = polybench_alloc_data(0xf1b30, 0x8);
    v8 = polybench_alloc_data(0x107ac0, 0x8);
    v9 = polybench_alloc_data(0x142440, 0x8);
    v11 = 0;
    v12 = 0;
    *((unsigned long long *)&v12) = 0x40af400000000000;
    v13 = 0;
    do
    {
        v14 = 0;
        do
        {
            v15 = 0;
            *((unsigned long long *)&v15) = (unsigned int)v13 * (unsigned int)v14 + 1 - (unsigned int)((((unsigned int)v13 * (unsigned int)v14 + 1) * 1374389535 >> 40) + (((unsigned int)v13 * (unsigned int)v14 + 1) * 1374389535 >> 63)) * 800;
            *((unsigned long long *)&v15) = (unsigned long long)(v15 / v12);
            *((unsigned long long *)(0x1f40 * v13 + (char *)v5 + 0x8 * v14)) = v15;
            v14 += 1;
        }
        while (v14 != 1000);
        v16 = 1;
    }
    while (true);
    v17 = 0;
    v18 = 0;
    *((unsigned long long *)&v18) = 0x40b1940000000000;
    do
    {
        v19 = 0;
        do
        {
            v20 = v19 + 1;
            v21 = 0;
            *((unsigned long long *)&v21) = (unsigned int)v11 * ((unsigned int)v19 + 1) + 2 - (unsigned int)(((unsigned int)v11 * ((unsigned int)v19 + 1) + (unsigned int)(((unsigned int)v11 * ((unsigned int)v19 + 1) + 2) * -1851608123 >> 32) + 2 >> 9) + ((unsigned int)v11 * ((unsigned int)v19 + 1) + (unsigned int)(((unsigned int)v11 * ((unsigned int)v19 + 1) + 2) * -1851608123 >> 32) + 2 >> 31)) * 900;
            *((unsigned long long *)&v21) = (unsigned long long)(v21 / v18);
            *((unsigned long long *)(0x1c20 * v11 + (char *)v6 + 0x8 * v19)) = v21;
            v19 += 1;
        }
        while (v20 != 900);
        v22 = 1;
    }
    while (true);
    v23 = 0;
    v24 = 0;
    *((unsigned long long *)&v24) = 0x40b57c0000000000;
    do
    {
        v25 = 0;
        do
        {
            v26 = 0;
            *((unsigned long long *)&v26) = (unsigned int)v17 * ((unsigned int)v25 + 3) - (unsigned int)(((unsigned int)v17 * ((unsigned int)v25 + 3) * 1999112051 >> 41) + ((unsigned int)v17 * ((unsigned int)v25 + 3) * 1999112051 >> 63)) * 1100;
            *((unsigned long long *)&v26) = (unsigned long long)(v26 / v24);
            *((unsigned long long *)(0x2580 * v17 + (char *)v8 + 0x8 * v25)) = v26;
            v25 += 1;
        }
        while (v25 != 1200);
        v27 = 1;
    }
    while (true);
    v28 = 0;
    *((unsigned long long *)&v28) = 0x40b3880000000000;
    do
    {
        v29 = 0;
        do
        {
            v30 = 0;
            *((unsigned long long *)&v30) = (unsigned int)v23 * ((unsigned int)v29 + 2) + 2 - (unsigned int)((((unsigned int)v23 * ((unsigned int)v29 + 2) + 2) * 274877907 >> 38) + (((unsigned int)v23 * ((unsigned int)v29 + 2) + 2) * 274877907 >> 63)) * 1000;
            *((unsigned long long *)&v30) = (unsigned long long)(v30 / v28);
            *((unsigned long long *)(0x2260 * v23 + (char *)v9 + 0x8 * v29)) = v30;
            v29 += 1;
        }
        while (v29 != 1100);
        v31 = 1;
    }
    while (true);
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
                xmm1<16> = (xmm1<16> * Conv(64->128, Load(addr=(((rdi<8> * 0x1c20<64>) + r12<8>) + (rdx<8> * 0x8<64>)), size=8, endness=Iend_LE)))
                v34 += v37;
                *(v33) = v34;
                v35 += 1;
            }
            while (v35 != 1000);
            v32 = 1;
        }
        while (true);
    }
    while (true);
    v38 = 0;
    do
    {
        v39 = 0;
        do
        {
            v40 = 0 * 8800 + v7 + v39 * 8;
            *((long long *)&((char *)v7)[8 * v39]) = 0;
            v41 = 0;
            v42 = 0;
            do
            {
                v43 = 0;
                *((unsigned long long *)&v43) = *((long long *)((char *)v8 + 0x8 * v42));
                xmm1<16> = (xmm1<16> * Conv(64->128, Load(addr=(((rdi<8> * 0x2260<64>) + rbp<8>) + (rdx<8> * 0x8<64>)), size=8, endness=Iend_LE)))
                v41 += v44;
                *(v40) = v41;
                v42 += 1;
            }
            while (v42 != 1200);
            v39 = 1;
        }
        while (true);
    }
    while (true);
    do
    {
        v45 = 0;
        do
        {
            v46 = v38 * 8800 + v1 + v45 * 8;
            *((long long *)(v38 * 8800 + v1 + v45 * 8)) = 0;
            v47 = 0;
            v48 = 0;
            do
            {
                v49 = 0;
                *((unsigned long long *)&v49) = *((long long *)((char *)v4 + 0x8 * v48));
                xmm1<16> = (xmm1<16> * Conv(64->128, Load(addr=(((rsi<8> * 0x2260<64>) + r13<8>) + (rcx<8> * 0x8<64>)), size=8, endness=Iend_LE)))
                v47 += v50;
                *(v46) = v47;
                v48 += 1;
            }
            while (v48 != 900);
            v45 = 1;
        }
        while (true);
        v51 = 1;
    }
    while (true);
    *((int *)&v1) = polybench_alloc_data(0xd6d80, 0x8);
    if (v0 >= 43)
    {
        if (*(*(v2)) == 0)
        {
            print_array(0x320, 0x44c, v1);
            free(v4);
            free(v5);
            free(v6);
            free(v7);
            free(v8);
            free(v9);
            v53 = v1;
            free(rdi<8>);
            return 0;
        }
        free(v4);
        free(v5);
        free(v6);
        free(v7);
        free(v8);
        free(v9);
        v53 = v1;
        free(rdi<8>);
        return 0;
    }
    free(v4);
    free(v5);
    free(v6);
    free(v7);
    free(v8);
    free(v9);
    v53 = v1;
    free(rdi<8>);
    return 0;
}

