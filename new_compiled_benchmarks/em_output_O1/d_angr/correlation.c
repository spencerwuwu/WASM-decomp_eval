int kernel_correlation(unsigned int a0, unsigned int a1, unsigned long long a2, unsigned long long a3, void* a4, void* a5)
{
    unsigned int v0;  // [bp-0x64]
    int tmp_4;  // tmp #4
    int tmp_2;  // tmp #2
    int tmp_12;  // tmp #12
    int tmp_19;  // tmp #19
    int tmp_17;  // tmp #17
    unsigned long long v1;  // [bp-0x60]
    uint128_t v2;  // [bp-0x58]
    void* v3;  // [bp-0x50]
    unsigned long long v4;  // [bp-0x48]
    unsigned long long v5;  // [bp-0x40]
    uint128_t v6;  // [bp-0x38]
    void* v8;  // r14
    uint128_t v9;  // xmm0
    unsigned long long v10;  // rdi
    unsigned long long v11;  // rsi
    unsigned long long v12;  // rbx
    unsigned long long v13;  // cc_op
    unsigned long long v14;  // cc_dep1
    void* v15;  // cc_dep2
    uint128_t v16;  // xmm0
    void* v17;  // rsi
    unsigned long v18;  // cc_ndep
    unsigned long long v19;  // cc_op
    void* v20;  // cc_dep1
    unsigned long long v21;  // cc_dep2
    uint128_t v22;  // xmm0
    unsigned long v23;  // cc_ndep
    void* v24;  // rax
    void* v25;  // rbp
    int v26;  // xmm4
    int v27;  // xmm5
    void* v28;  // rax
    uint128_t v29;  // xmm0
    unsigned long v30;  // cc_ndep
    uint128_t v31;  // xmm0
    uint128_t v32;  // xmm0
    unsigned long v33;  // cc_dep1
    uint128_t v34;  // xmm0
    unsigned long v35;  // xmm1lq
    unsigned long v36;  // cc_ndep
    uint128_t v37;  // xmm3
    unsigned long long v38;  // cc_op
    unsigned long long v39;  // cc_dep1
    void* v40;  // cc_dep2
    void* v41;  // r15
    void* v42;  // r12
    uint128_t v43;  // xmm0
    uint128_t v44;  // xmm2
    uint128_t v45;  // xmm1
    unsigned long v46;  // cc_ndep
    unsigned long long v47;  // cc_op
    void* v48;  // cc_dep1
    unsigned long long v49;  // cc_dep2
    unsigned long v50;  // cc_ndep
    void* v51;  // rbp, Other Possible Types: unsigned long long
    unsigned long long v52;  // r15
    unsigned long long *v53;  // rcx
    unsigned long long v54;  // rbp
    unsigned long long v55;  // rdx
    unsigned long long v56;  // rsi
    unsigned long long v57;  // rdi
    void* v58;  // r8
    unsigned long long v59;  // r10
    unsigned long long v60;  // r11
    unsigned long long *v61;  // r15
    uint128_t v62;  // xmm0
    void* v63;  // r12
    uint128_t v64;  // xmm1
    uint128_t v65;  // xmm1

    v8 = a2;
    v44 = v9;
    v52 = v10;
    v1 = v10;
    v0 = v11;
    v12 = v11;
    if ((unsigned int)v10 > 0)
    {
        v24 = 0;
        do
        {
            *((long long *)((char *)a4 + 0x8 * v24)) = 0;
            v13 = 7;
            v14 = v0;
            v15 = 0;
            if (v0 > 0)
            {
                v16 = 0;
                *((unsigned long long *)&v16) = *((long long *)((char *)a4 + 0x8 * v24));
                v17 = 0;
                do
                {
                    xmm0<16> = (xmm0<16> + Conv(64->128, Load(addr=((rsi<8> * 0x2580<64>) + r14<8>), size=8, endness=Iend_LE)))
                    *((unsigned long long *)a4) = v16;
                    v18 = (v17 * 9600 + v8 <= v17 * 9600? 1 : 0);
                    v17 += 1;
                    v19 = 8;
                    v20 = v17;
                    v21 = v12;
                }
                while (v17 != v12);
            }
            v22 = 0;
            *((unsigned long long *)&v22) = *((long long *)((char *)a4 + 0x8 * v24));
            *((unsigned long long *)&v22) = v22 / v44;
            *((unsigned long long *)((char *)a4 + 0x8 * v24)) = v22;
            v23 = [D] amd64g_calculate_rflags_c(cc_op<8>, cc_dep1<8>, cc_dep2<8>, cc_ndep<8>);
            v24 += 1;
        }
        while (v24 != v1);
    }
    v4 = a3;
    v3 = a5;
    *((unsigned long long *)&v2) = v44;
    if ((unsigned int)v10 > 0)
    {
        v25 = 0;
        v26 = 0;
        *((unsigned long long *)&v26) = 4591870180066957722;
        v27 = 0;
        *((unsigned long long *)&v27) = 0x3ff0000000000000;
        do
        {
            *((long long *)((char *)v3 + 0x8 * v25)) = 0;
            if (v0 > 0)
            {
                v28 = 0;
                do
                {
                    v29 = 0;
                    *((unsigned long long *)&v29) = *((long long *)(0x2580 * v28 + (char *)v8));
                    xmm0lq<8> = Conv(128->64, (((xmm0<16> - Conv(64->128, Load(addr=r8<8>, size=8, endness=Iend_LE))) * (xmm0<16> - Conv(64->128, Load(addr=r8<8>, size=8, endness=Iend_LE)))) + Conv(64->128, Load(addr=r9<8>, size=8, endness=Iend_LE))))
                    *((unsigned long long *)a5) = v29;
                    v30 = (v28 * 9600 + v8 <= v28 * 9600? 1 : 0);
                    v28 += 1;
                }
                while (v28 != v12);
            }
            v31 = 0;
            *((unsigned long long *)&v31) = *((long long *)((char *)v3 + 0x8 * v25));
            v32 = v31 / v44;
            v33 = BinaryOp CmpF & 69;
            if ((BinaryOp CmpF & 1) != 0)
            {
                sqrt((unsigned long long)v32);
                v27 = 0;
                *((unsigned long long *)&v27) = 0x3ff0000000000000;
                v26 = 0;
                *((unsigned long long *)&v26) = 4591870180066957722;
                v44 = 0;
                *((unsigned long long *)&v44) = v2;
                a5 = v3;
            }
            else
            {
                tmp_4 = UnaryOp Sqrt;
                v32 = tmp_4;
            }
            tmp_12 = v32 <= v26 ^ 18446744073709551615;
            v34 = v32 & (v32 <= v26 ^ 18446744073709551615);
            v35 = (unsigned long long)(!(tmp_12) & v27 | v34);
            *((unsigned long *)((char *)v3 + 0x8 * v25)) = v35;
            v36 = [D] amd64g_calculate_rflags_c(0x0<64>, cc_dep1<8>, 0x0<64>, cc_ndep<8>);
            v25 += 1;
        }
        while (v25 != v1);
    }
    if (v0 > 0)
    {
        v51 = 0;
        tmp_19 = UnaryOp Sqrt;
        v37 = tmp_19;
        v5 = v10;
        *((unsigned long long *)&v6) = v37;
        do
        {
            v38 = 19;
            v39 = v52;
            v40 = 0;
            if ((unsigned int)v52 > 0)
            {
                v41 = 0;
                do
                {
                    v42 = 0 * 9600 + v8;
                    v43 = 0;
                    *((unsigned long long *)&v43) = *((long long *)((char *)v8 + 0x8 * v41));
                    xmm0lq<8> = Conv(128->64, (xmm0<16> - Conv(64->128, Load(addr=(r8<8> + (r15<8> * 0x8<64>)), size=8, endness=Iend_LE))))
                    *((unsigned long long *)((char *)v8 + 0x8 * v41)) = v43;
                    if ((BinaryOp CmpF & 1) != 0)
                    {
                        sqrt((unsigned long long)v44);
                        v37 = 0;
                        *((unsigned long long *)&v37) = v6;
                        v44 = 0;
                        *((unsigned long long *)&v44) = v2;
                        a5 = v3;
                    }
                    v45 = 0;
                    *((unsigned long long *)&v45) = *((long long *)((char *)v42 + 0x8 * v41));
                    xmm1lq<8> = Conv(128->64, (xmm1<16> / (xmm3<16> * Conv(64->128, Load(addr=(r9<8> + (r15<8> * 0x8<64>)), size=8, endness=Iend_LE)))))
                    *((unsigned long long *)((char *)v42 + 0x8 * v41)) = v45;
                    v46 = [D] amd64g_calculate_rflags_c(0x0<64>, Conv(32->64, ((xmm2lq<8> CmpF 0x0<64>) & 0x45<32>)), 0x0<64>, cc_ndep<8>);
                    v41 += 1;
                    v47 = 8;
                    v48 = v41;
                    v49 = v1;
                }
                while (v41 != v1);
            }
            v50 = [D] amd64g_calculate_rflags_c(cc_op<8>, cc_dep1<8>, cc_dep2<8>, cc_ndep<8>);
            v51 += 1;
            v52 = v5;
        }
        while (v51 != v12);
    }
    v53 = v52 - 1;
    v54 = v4;
    if ((unsigned int)v52 >= 2)
    {
        v55 = v52;
        v56 = v52 - 1;
        v57 = 1;
        v58 = 0;
        do
        {
            v59 = v58 * 9600 + v54;
            *((long long *)(v58 * 9600 + v54 + v58 * 8)) = 0x3ff0000000000000;
            v58 += 1;
            v60 = v57;
            if (v58 < v55)
            {
                do
                {
                    v61 = v59 + v60 * 8;
                    *((long long *)(v59 + v60 * 8)) = 0;
                    if (v0 > 0)
                    {
                        v62 = 0;
                        *((unsigned long long *)&v62) = *((long long *)(0 * 9600 + v4 + v60 * 8));
                        v63 = 0;
                        do
                        {
                            v64 = 0;
                            *((unsigned long long *)&v64) = *((long long *)(0x2580 * v63 + (char *)v8));
                            xmm1<16> = (xmm1<16> * Conv(64->128, Load(addr=(((r12<8> * 0x2580<64>) + r14<8>) + 0x8<64>), size=8, endness=Iend_LE)))
                            v62 += v65;
                            *(v61) = v62;
                            v63 += 1;
                        }
                        while (v63 != v12);
                    }
                    *((unsigned long long *)(v60 * 9600 + v54)) = *(v61);
                    v60 += 1;
                }
                while (v60 != v1);
            }
            v57 += 1;
        }
        while (v58 != v56);
        *((long long *)(v54 + v53 * 9600 + v53 * 8)) = 0x3ff0000000000000;
        return;
    }
    *((long long *)(v4 + v53 * 9600 + v53 * 8)) = 0x3ff0000000000000;
    return;
}

extern char .L.str.3;
extern char got.stderr;

long long submain(unsigned int a0, unsigned long long a1)
{
    void* v0;  // [bp-0x48]
    char v1;  // [bp-0x40], Other Possible Types: unsigned long
    unsigned long v2;  // [bp-0x38], Other Possible Types: char
    void* v6;  // rbx
    int v9;  // xmm0
    int v10;  // xmm1
    int v11;  // xmm2
    void* v12;  // rcx
    unsigned long long v13;  // rax
    void* v16;  // rdi
    unsigned long long v17;  // r15
    unsigned long long v19;  // r12
    void* v20;  // r14

    v6 = polybench_alloc_data(0x19a280, 0x8);
    v0 = polybench_alloc_data(0x15f900, 0x8);
    v13 = 0;
    v9 = 0;
    *((unsigned long long *)&v9) = 0x4092c00000000000;
    do
    {
        v10 = 0;
        *((unsigned long long *)&v10) = v13;
        v12 = 0;
        do
        {
            v11 = 0;
            *((unsigned long long *)&v11) = v13 * v12;
            *((unsigned long long *)&v11) = (unsigned long long)(v11 / v9 + v10);
            *((unsigned long long *)(&((char *)v6)[9600 * v13] + 0x8 * v12)) = (unsigned long long)v11;
            v12 += 1;
        }
        while (v12 != 1200);
        v13 = 1;
    }
    while (true);
    kernel_correlation(0x4b0, 0x578, v6, v0, *((long long *)&v2), *((long long *)&v1));
    if (a0 >= 43)
    {
        if (*((char *)*((long long *)a1)) != 0)
        {
            free(v6);
            v16 = v0;
            free(v16);
            free(*((long long *)&v2));
            free(*((long long *)&v1));
            return 0;
        }
        v1 = polybench_alloc_data(0x4b0, 0x8);
        v2 = polybench_alloc_data(0x4b0, 0x8);
        fwrite("==BEGIN DUMP_ARRAYS==\n", 0x16, 0x1, *((long long *)got.stderr));
        v17 = 0;
        fprintf(*((long long *)got.stderr), "begin dump: %s", &.L.str.3);
        do
        {
            v19 = v17 * 1200;
            v20 = 0;
            while (true)
            {
                if (((unsigned int)(v20 + v19) * 3435973837 >> 2 | (unsigned int)(v20 + v19) * 3435973837 << 30) <= 214748364)
                {
                    fputc(0xa, *((long long *)got.stderr));
                }
                fprintf(*((long long *)got.stderr), "%0.2lf ");
                v20 += 1;
                if (v20 == 1200)
                {
                    break;
                }
            }
            v17 = 1;
        }
        while (true);
        fprintf(*((long long *)got.stderr), "\nend   dump: %s\n", &.L.str.3);
        fwrite("==END   DUMP_ARRAYS==\n", 0x16, 0x1, *((long long *)got.stderr));
        free(v6);
        v16 = v0;
        free(v16);
        free(r14<8>);
        free(0x1);
        return 0;
    }
    free(v6);
    v16 = v0;
    free(v16);
    free(*((long long *)&v2));
    free(*((long long *)&v1));
    return 0;
}

