int kernel_fdtd_2d(unsigned int a0, unsigned long a1, unsigned int a2, unsigned long a3, void* a4, unsigned long a5, unsigned long long *v1)
{
    unsigned long v0;  // [bp-0x40]
    unsigned long v2;  // rdi
    unsigned long long v3;  // r10
    unsigned long long v4;  // rdx
    unsigned long long v5;  // r11
    int v6;  // xmm0
    int v7;  // xmm1
    unsigned long long v8;  // cc_op
    void* v9;  // cc_dep1
    void* v10;  // cc_dep2
    unsigned long v11;  // cc_ndep
    void* v12;  // r12
    unsigned long long v13;  // cc_op
    void* v14;  // cc_dep1
    unsigned long long v15;  // cc_dep2
    unsigned long long v16;  // r12
    unsigned long long v17;  // cc_op
    unsigned long long v18;  // cc_dep1
    void* v19;  // cc_dep2
    unsigned long long v20;  // r13
    void* v21;  // rbp
    uint128_t v22;  // xmm2
    unsigned long v23;  // cc_ndep
    unsigned long long v24;  // cc_op
    void* v25;  // cc_dep1
    unsigned long long v26;  // cc_dep2
    unsigned long v27;  // cc_ndep
    void* v28;  // r12, Other Possible Types: unsigned long long
    unsigned long long v29;  // r13
    unsigned long long v30;  // cc_op
    unsigned long long v31;  // cc_dep1
    unsigned long long v32;  // cc_dep2
    uint128_t v33;  // xmm2
    unsigned long v34;  // cc_ndep
    unsigned long long v35;  // cc_op
    unsigned long long v36;  // cc_dep1
    unsigned long long v37;  // cc_dep2
    unsigned long v38;  // cc_ndep
    unsigned long long v39;  // cc_op
    unsigned long long v40;  // cc_dep1
    unsigned long long v41;  // cc_dep2
    unsigned long long v42;  // cc_op
    unsigned long long v43;  // cc_dep1
    unsigned long long v44;  // cc_dep2
    void* v45;  // r13
    void* v46;  // rbp
    uint128_t v47;  // xmm2
    unsigned long long v48;  // rax
    unsigned long long v49;  // cc_op
    unsigned long long v50;  // cc_dep1
    unsigned long long v51;  // cc_dep2
    unsigned long v52;  // cc_ndep
    void* v53;  // r12
    unsigned long long v54;  // cc_op
    void* v55;  // cc_dep1
    unsigned long long v56;  // cc_dep2
    unsigned long v57;  // cc_ndep

    v0 = a1;
    if ((unsigned int)v2 > 0)
    {
        v3 = v0 - 1;
        v5 = v4 - 1;
        v6 = 0;
        *((unsigned long long *)&v6) = 0xbfe0000000000000;
        v7 = 0;
        *((unsigned long long *)&v7) = 13827852295878370918;
        do
        {
            if ((unsigned int)v4 > 0)
            {
                v8 = 19;
                v9 = 0;
                v10 = 0;
                v12 = 0;
                do
                {
                    *((unsigned long long *)((char *)a4 + 0x8 * v12)) = *(v1);
                    v11 = [D] amd64g_calculate_rflags_c(cc_op<8>, cc_dep1<8>, cc_dep2<8>, cc_ndep<8>);
                    v12 += 1;
                    v13 = 8;
                    v14 = v12;
                    v15 = v4;
                }
                while (v12 != v4);
            }
            v16 = 1;
            if ((int)v0 > 1)
            {
                do
                {
                    v17 = 19;
                    v18 = v4;
                    v19 = 0;
                    if ((unsigned int)v4 > 0)
                    {
                        v20 = v16 - 1;
                        v21 = 0;
                        do
                        {
                            v22 = 0;
                            *((unsigned long long *)&v22) = *((long long *)(1 * 9600 + a5 + v21 * 8));
                            xmm2lq<8> = Conv(128->64, (((xmm2<16> - Conv(64->128, Load(addr=(((r13<8> * 0x2580<64>) + r9<8>) + (rbp<8> * 0x8<64>)), size=8, endness=Iend_LE))) * xmm0<16>) + Conv(64->128, Load(addr=((r8<8> + (0x1<64> * 0x2580<64>)) + (rbp<8> * 0x8<64>)), size=8, endness=Iend_LE))))
                            *((unsigned long long *)&((char *)a4 + 0x8 * v21)[9600]) = v22;
                            v23 = (v20 * 9600 + a5 <= v20 * 9600? 1 : 0);
                            v21 += 1;
                            v24 = 8;
                            v25 = v21;
                            v26 = v4;
                        }
                        while (v21 != v4);
                    }
                    v27 = [D] amd64g_calculate_rflags_c(cc_op<8>, cc_dep1<8>, cc_dep2<8>, cc_ndep<8>);
                    v16 += 1;
                }
                while (v16 != v0);
            }
            if ((int)v0 > 0)
            {
                v28 = 0;
                do
                {
                    v29 = 1;
                    v30 = 7;
                    v31 = v4;
                    v32 = 2;
                    if ((unsigned int)v4 >= 2)
                    {
                        do
                        {
                            v33 = 0;
                            *((unsigned long long *)&v33) = *((long long *)(0 * 9600 + a5 + v29 * 8));
                            xmm2lq<8> = Conv(128->64, (((xmm2<16> - Conv(64->128, Load(addr=((((0x0<64> * 0x2580<64>) + r9<8>) + (r13<8> * 0x8<64>)) - 0x8<64>), size=8, endness=Iend_LE))) * xmm0<16>) + Conv(64->128, Load(addr=((rcx<8> + (0x0<64> * 0x2580<64>)) + (r13<8> * 0x8<64>)), size=8, endness=Iend_LE))))
                            *((unsigned long long *)(a3 + 0 * 9600 + v29 * 8)) = v33;
                            v34 = (0 * 9600 + a5 <= 0 * 9600? 1 : 0);
                            v29 += 1;
                            v35 = 8;
                            v36 = v29;
                            v37 = v4;
                        }
                        while (v29 != v4);
                    }
                    v38 = [D] amd64g_calculate_rflags_c(cc_op<8>, cc_dep1<8>, cc_dep2<8>, cc_ndep<8>);
                    v28 += 1;
                }
                while (v28 != v0);
            }
            v39 = 7;
            v40 = (unsigned int)v0;
            v41 = 1;
            if ((int)v0 > 1)
            {
                v53 = 0;
                do
                {
                    v42 = 7;
                    v43 = v4;
                    v44 = 2;
                    if ((unsigned int)v4 >= 2)
                    {
                        v45 = v53 + 1;
                        v46 = 0;
                        do
                        {
                            v47 = 0;
                            *((unsigned long long *)&v47) = *((long long *)(a3 + 0 * 9600 + v46 * 8 + 8));
                            xmm2lq<8> = Conv(128->64, (((((xmm2<16> - Conv(64->128, Load(addr=((rcx<8> + (0x0<64> * 0x2580<64>)) + (rbp<8> * 0x8<64>)), size=8, endness=Iend_LE))) + Conv(64->128, Load(addr=(((r13<8> * 0x2580<64>) + r8<8>) + (rbp<8> * 0x8<64>)), size=8, endness=Iend_LE))) - Conv(64->128, Load(addr=(((0x0<64> * 0x2580<64>) + r8<8>) + (rbp<8> * 0x8<64>)), size=8, endness=Iend_LE))) * xmm1<16>) + Conv(64->128, Load(addr=((r9<8> + (0x0<64> * 0x2580<64>)) + (rbp<8> * 0x8<64>)), size=8, endness=Iend_LE))))
                            *((unsigned long long *)(a5 + 0 * 9600 + v46 * 8)) = v47;
                            v48 = v46 + 1;
                            v46 += 1;
                            v49 = 8;
                            v50 = v48;
                            v51 = v5;
                        }
                        while (v48 != v5);
                    }
                    v52 = [D] amd64g_calculate_rflags_c(cc_op<8>, cc_dep1<8>, cc_dep2<8>, cc_ndep<8>);
                    v53 += 1;
                    v54 = 8;
                    v55 = v53;
                    v56 = v3;
                }
                while (v53 != v3);
            }
            v57 = [D] amd64g_calculate_rflags_c(cc_op<8>, cc_dep1<8>, cc_dep2<8>, cc_ndep<8>);
        }
        while (v2 != 1);
        return;
    }
    return;
}

extern char .L.str.3;
extern char .L.str.8;
extern char .L.str.9;
extern char got.stderr;

long long submain(unsigned int a0, unsigned long long a1)
{
    void* v0;  // [bp-0x48]
    void* v1;  // [bp-0x40]
    unsigned long v2;  // [bp-0x38]
    unsigned long v6;  // rbx
    void* v7;  // r14
    unsigned long v8;  // r15
    unsigned long long v10;  // cc_op
    void* v11;  // cc_dep1
    void* v12;  // cc_dep2
    void* v13;  // rcx
    unsigned long v14;  // cc_ndep
    unsigned long long v15;  // cc_op
    void* v16;  // cc_dep1
    unsigned long long v17;  // cc_dep2
    int v18;  // xmm0
    int v19;  // xmm1
    int v20;  // xmm2
    void* v21;  // rcx
    unsigned long long v22;  // rdx
    uint128_t v23;  // xmm3
    uint128_t v24;  // xmm3
    uint128_t v25;  // xmm3
    unsigned long long v26;  // rax
    void* v28;  // r13
    unsigned long long v30;  // r12
    unsigned long long v33;  // rbp
    void* v34;  // r13
    unsigned long long v37;  // r12
    unsigned long long v41;  // rbp
    void* v42;  // r13
    unsigned long long v45;  // r12
    unsigned long long v48;  // rbp
    void* v49;  // r13

    v6 = polybench_alloc_data(0x124f80, 0x8);
    v7 = polybench_alloc_data(0x124f80, 0x8);
    v8 = polybench_alloc_data(0x124f80, 0x8);
    v26 = 0;
    v10 = 19;
    v11 = 0;
    v12 = 0;
    v13 = 0;
    do
    {
        *((void* *)((char *)v0 + 0x8 * v13)) = v13;
        v14 = [D] amd64g_calculate_rflags_c(cc_op<8>, cc_dep1<8>, cc_dep2<8>, cc_ndep<8>);
        v13 += 1;
        v15 = 8;
        v16 = v13;
        v17 = 500;
    }
    while (v13 != 500);
    v18 = 0;
    *((unsigned long long *)&v18) = 0x408f400000000000;
    v19 = 0;
    *((unsigned long long *)&v19) = 0x4092c00000000000;
    do
    {
        v20 = 0;
        *((unsigned long long *)&v20) = v26;
        v21 = 0;
        do
        {
            v22 = v21 + 1;
            v23 = 0;
            *((unsigned long long *)&v23) = v21 + 1;
            *((unsigned long long *)&v23) = (unsigned long long)(v23 * v20 / v18);
            *((unsigned long long *)(v6 + v26 * 9600 + v21 * 8)) = v23;
            v24 = 0;
            *((unsigned long long *)&v24) = v21 + 2;
            *((unsigned long long *)&v24) = (unsigned long long)(v24 * v20 / v19);
            *((unsigned long long *)(&((char *)v7)[9600 * v26] + 0x8 * v21)) = v24;
            v25 = 0;
            *((unsigned long long *)&v25) = v21 + 3;
            *((unsigned long long *)&v25) = (unsigned long long)(v25 * v20 / v18);
            *((unsigned long long *)(v26 * 9600 + v8 + v21 * 8)) = v25;
            v21 += 1;
        }
        while (v22 != 1200);
        v26 = 1;
    }
    while (true);
    v0 = polybench_alloc_data(0x1f4, 0x8);
    kernel_fdtd_2d(0x1f4, 0x3e8, 0x4b0, v6, v7, v8, v0);
    if (a0 >= 43)
    {
        if (*((char *)*((long long *)a1)) != 0)
        {
            free(v6);
            free(v7);
            free(v8);
            free(v0);
            return 0;
        }
        v2 = v0;
        v28 = *((long long *)got.stderr);
        fwrite("==BEGIN DUMP_ARRAYS==\n", 0x16, 0x1, *((long long *)got.stderr));
        v30 = 0;
        v1 = v28;
        fprintf(v28, "begin dump: %s", &.L.str.3);
        do
        {
            v33 = v30 * 1000;
            v34 = 0;
            while (true)
            {
                if (((unsigned int)(v34 + v33) * 3435973837 >> 2 | (unsigned int)(v34 + v33) * 3435973837 << 30) <= 214748364)
                {
                    fputc(0xa, v1);
                }
                fprintf(v1, "%0.2lf ");
                v34 += 1;
                if (v34 == 1200)
                {
                    break;
                }
            }
            v30 = 1;
        }
        while (true);
        v37 = 0;
        fprintf(v1, "\nend   dump: %s\n", &.L.str.3);
        fwrite("==END   DUMP_ARRAYS==\n", 0x16, 0x1, v1);
        fprintf(v1, "begin dump: %s", &.L.str.8);
        do
        {
            v41 = v37 * 1000;
            v42 = 0;
            while (true)
            {
                if (((unsigned int)(v42 + v41) * 3435973837 >> 2 | (unsigned int)(v42 + v41) * 3435973837 << 30) <= 214748364)
                {
                    fputc(0xa, v1);
                }
                fprintf(v1, "%0.2lf ");
                v42 += 1;
                if (v42 == 1200)
                {
                    break;
                }
            }
            v37 = 1;
        }
        while (true);
        v45 = 0;
        fprintf(v1, "\nend   dump: %s\n", &.L.str.8);
        fprintf(v1, "begin dump: %s", &.L.str.9);
        do
        {
            v48 = v45 * 1000;
            v49 = 0;
            while (true)
            {
                if (((unsigned int)(v49 + v48) * 3435973837 >> 2 | (unsigned int)(v49 + v48) * 3435973837 << 30) <= 214748364)
                {
                    fputc(0xa, v1);
                }
                fprintf(v1, "%0.2lf ");
                v49 += 1;
                if (v49 == 1200)
                {
                    break;
                }
            }
            v45 = 1;
        }
        while (true);
        fprintf(v1, "\nend   dump: %s\n", &.L.str.9);
        free(v6);
        free(v7);
        free(v8);
        free(0x1);
        return 0;
    }
    free(v6);
    free(v7);
    free(v8);
    free(v0);
    return 0;
}

