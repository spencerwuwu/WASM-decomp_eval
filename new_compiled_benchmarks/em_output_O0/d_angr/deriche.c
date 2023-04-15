int kernel_deriche(unsigned int a0, unsigned int a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    uint128_t v0;  // [bp-0xb8]
    int tmp_10;  // tmp #10
    int tmp_88;  // tmp #88
    int tmp_100;  // tmp #100
    int tmp_68;  // tmp #68
    int tmp_80;  // tmp #80
    uint128_t v1;  // [bp-0xb4]
    uint128_t v2;  // [bp-0xb0]
    uint128_t v3;  // [bp-0xac]
    uint128_t v4;  // [bp-0xa8]
    uint128_t v5;  // [bp-0xa4]
    uint128_t v6;  // [bp-0xa0]
    unsigned int v7;  // [bp-0x9c]
    unsigned int v8;  // [bp-0x98]
    uint128_t v9;  // [bp-0x94]
    unsigned int v10;  // [bp-0x90]
    uint128_t v11;  // [bp-0x8c]
    uint128_t v12;  // [bp-0x88]
    uint128_t v13;  // [bp-0x84]
    uint128_t v14;  // [bp-0x80]
    uint128_t v15;  // [bp-0x7c]
    uint128_t v16;  // [bp-0x78]
    uint128_t v17;  // [bp-0x74]
    uint128_t v18;  // [bp-0x70]
    uint128_t v19;  // [bp-0x6c]
    unsigned int v20;  // [bp-0x68]
    unsigned int v21;  // [bp-0x64]
    unsigned int v22;  // [bp-0x60]
    unsigned int v23;  // [bp-0x5c]
    unsigned int v24;  // [bp-0x58]
    unsigned int v25;  // [bp-0x54]
    unsigned int v26;  // [bp-0x50]
    unsigned int v27;  // [bp-0x4c]
    unsigned int v28;  // [bp-0x48]
    unsigned int v29;  // [bp-0x44]
    unsigned int v30;  // [bp-0x40]
    unsigned int v31;  // [bp-0x3c]
    unsigned int v32;  // [bp-0x14]
    unsigned int v34;  // ymm0
    int v36;  // xmm0
    uint128_t v37;  // xmm0
    int v38;  // xmm1
    uint128_t v39;  // xmm1
    int v40;  // xmm0
    uint128_t v41;  // xmm0
    int v42;  // xmm1
    int v43;  // xmm0
    uint128_t v44;  // xmm1
    int v45;  // xmm2
    uint128_t v46;  // xmm0
    uint128_t v47;  // xmm1
    uint128_t v48;  // xmm0
    uint128_t v49;  // xmm1
    int v50;  // xmm2
    uint128_t v51;  // xmm1
    uint128_t v52;  // xmm0
    int v53;  // xmm1
    uint128_t v54;  // xmm1
    int v55;  // xmm0
    uint128_t v56;  // xmm0
    int v57;  // xmm0
    uint128_t v58;  // xmm0
    uint128_t v59;  // xmm2
    uint128_t v60;  // xmm1
    int v61;  // xmm1
    int v62;  // xmm2
    uint128_t v63;  // xmm0
    int v64;  // xmm2
    uint128_t v65;  // xmm0
    int v66;  // xmm2
    uint128_t v67;  // xmm1
    int v68;  // xmm1
    int v69;  // xmm2
    uint128_t v70;  // xmm0
    int v71;  // xmm2
    int v72;  // xmm0
    uint128_t v73;  // xmm1
    uint128_t v74;  // xmm1
    uint128_t v75;  // xmm0
    uint128_t v76;  // xmm2
    uint128_t v77;  // xmm1
    int v78;  // xmm1
    int v79;  // xmm2
    uint128_t v80;  // xmm0
    int v81;  // xmm2
    uint128_t v82;  // xmm0
    int v83;  // xmm2
    uint128_t v84;  // xmm1
    int v85;  // xmm1
    int v86;  // xmm2
    uint128_t v87;  // xmm0
    int v88;  // xmm2
    int v89;  // xmm0
    uint128_t v90;  // xmm1
    uint128_t v91;  // xmm1

    v32 = v34;
    expf(v32 ^ 0x80000000);
    v36 = 0;
    *((unsigned int *)&v36) = 0xc00000003f800000;
    *((unsigned int *)&v36) = (unsigned int)(v36 - (0 CONCAT v32 ^ 0x80000000));
    *((unsigned int *)&v0) = (unsigned int)v36;
    expf(v32 ^ 0x80000000);
    v37 = 0;
    *((unsigned int *)&v37) = v0;
    v38 = 0;
    *((unsigned int *)&v38) = 0xc00000003f800000;
    v39 = v38 - (0 CONCAT v32 ^ 0x80000000);
    *((unsigned int *)&v37) = v37 * v39;
    *((unsigned int *)&v3) = v37;
    v40 = 0;
    *((unsigned int *)&v40) = 0x3e80000040000000;
    ymm0<4> = Conv(128->32, (xmm0<16> * Conv(32->128, Load(addr=stack_base-20, size=4, endness=Iend_LE))))
    *((unsigned int *)&v1) = (unsigned int)v40;
    expf(v32 ^ 0x80000000);
    v41 = 0;
    *((unsigned int *)&v41) = v1;
    v42 = 0;
    *((unsigned int *)&v42) = 0xc00000003f800000;
    ymm0<4> = Conv(128->32, ((xmm0<16> * Conv(32->128, (Load(addr=stack_base-20, size=4, endness=Iend_LE) ^ 0x80000000<32>))) + xmm1<16>))
    *((unsigned int *)&v2) = v41;
    v43 = 0;
    *((unsigned int *)&v43) = 0x3e80000040000000;
    ymm0<4> = Conv(128->32, (xmm0<16> * Conv(32->128, Load(addr=stack_base-20, size=4, endness=Iend_LE))))
    expf((unsigned int)v43);
    v44 = 0;
    *((unsigned int *)&v44) = v2;
    v45 = v43;
    v46 = 0;
    *((unsigned int *)&v46) = v3;
    v47 = v44 - v45;
    *((unsigned int *)&v46) = v46 / v47;
    *((unsigned int *)&v19) = v46;
    *((int *)&v14) = v19;
    *((int *)&v18) = v19;
    *((int *)&v4) = v19;
    expf(v32 ^ 0x80000000);
    v48 = 0;
    *((unsigned int *)&v48) = v4;
    v49 = 0;
    *((unsigned int *)&v49) = v32;
    v50 = 0;
    *((unsigned int *)&v50) = 0xc00000003f800000;
    v51 = v49 - v50;
    ymm0<4> = Conv(128->32, ((xmm0<16> * Conv(32->128, (Load(addr=stack_base-20, size=4, endness=Iend_LE) ^ 0x80000000<32>))) * xmm1<16>))
    *((unsigned int *)&v13) = v48;
    *((unsigned int *)&v17) = v48;
    *((int *)&v5) = v19;
    expf(v32 ^ 0x80000000);
    v52 = 0;
    *((unsigned int *)&v52) = v5;
    v53 = 0;
    *((unsigned int *)&v53) = 0xc00000003f800000;
    xmm1<16> = (xmm1<16> + Conv(32->128, Load(addr=stack_base-20, size=4, endness=Iend_LE)))
    ymm0<4> = Conv(128->32, ((xmm0<16> * Conv(32->128, (Load(addr=stack_base-20, size=4, endness=Iend_LE) ^ 0x80000000<32>))) * xmm1<16>))
    *((unsigned int *)&v12) = v52;
    *((unsigned int *)&v16) = v52;
    *((int *)&v6) = (int)v19 ^ 0x80000000;
    v55 = 0;
    *((unsigned int *)&v55) = 0x40000000c0000000;
    ymm0<4> = Conv(128->32, (xmm0<16> * Conv(32->128, Load(addr=stack_base-20, size=4, endness=Iend_LE))))
    expf((unsigned int)v55);
    tmp_10 = v55;
    v56 = 0;
    *((unsigned int *)&v56) = v6;
    *((unsigned int *)&v56) = v56 * tmp_10;
    *((unsigned int *)&v11) = v56;
    *((unsigned int *)&v15) = v56;
    powf(0x3e80000040000000, v32 ^ 0x80000000);
    v10 = 0x3e80000040000000;
    v57 = 0;
    *((unsigned int *)&v57) = 0x40000000c0000000;
    ymm0<4> = Conv(128->32, (xmm0<16> * Conv(32->128, Load(addr=stack_base-20, size=4, endness=Iend_LE))))
    expf((unsigned int)v57);
    *((unsigned int *)&v57) = (unsigned int)v57 ^ 0x80000000;
    *((unsigned int *)&v9) = (unsigned int)v57;
    v7 = 0xc00000003f800000;
    v8 = 0xc00000003f800000;
    for (v31 = 0; v31 < a0; v31 += 1)
    {
        v27 = 0;
        v26 = 0;
        v29 = 0;
        for (v30 = 0; v30 < a1; v30 += 1)
        {
            v58 = 0;
            *((unsigned int *)&v58) = v18;
            v59 = 0;
            *((unsigned int *)&v59) = *((int *)(a2 + v31 * 8640 + v30 * 4));
            v60 = 0;
            *((unsigned int *)&v60) = v17;
            t88 = ((xmm0<16> * xmm2<16>) + (xmm1<16> * Conv(32->128, Load(addr=stack_base-68, size=4, endness=Iend_LE))))
            v61 = 0;
            *((unsigned int *)&v61) = v10;
            v62 = 0;
            *((unsigned int *)&v62) = v27;
            tmp_100 = v61 * v62 + tmp_88;
            v63 = 0;
            *((unsigned int *)&v63) = v9;
            v64 = 0;
            *((unsigned int *)&v64) = v26;
            *((unsigned int *)&v63) = (unsigned int)(v63 * v64 + tmp_100);
            *((unsigned int *)(a4 + v31 * 8640 + v30 * 4)) = v63;
            v29 = *((int *)(a2 + v31 * 8640 + v30 * 4));
            v26 = v27;
            v27 = *((int *)(a4 + v31 * 8640 + v30 * 4));
        }
    }
    for (v31 = 0; v31 < a0; v31 += 1)
    {
        v21 = 0;
        v20 = 0;
        v25 = 0;
        v24 = 0;
        for (v30 = a1 - 1; v30 >= 0; v30 -= 1)
        {
            v65 = 0;
            *((unsigned int *)&v65) = v16;
            v66 = 0;
            *((unsigned int *)&v66) = v25;
            v67 = 0;
            *((unsigned int *)&v67) = v15;
            t68 = ((xmm0<16> * xmm2<16>) + (xmm1<16> * Conv(32->128, Load(addr=stack_base-88, size=4, endness=Iend_LE))))
            v68 = 0;
            *((unsigned int *)&v68) = v10;
            v69 = 0;
            *((unsigned int *)&v69) = v21;
            tmp_80 = v68 * v69 + tmp_68;
            v70 = 0;
            *((unsigned int *)&v70) = v9;
            v71 = 0;
            *((unsigned int *)&v71) = v20;
            *((unsigned int *)&v70) = (unsigned int)(v70 * v71 + tmp_80);
            *((unsigned int *)(a5 + v31 * 8640 + v30 * 4)) = v70;
            v24 = v25;
            v25 = *((int *)(a2 + v31 * 8640 + v30 * 4));
            v20 = v21;
            v21 = *((int *)(a5 + v31 * 8640 + v30 * 4));
        }
    }
    for (v31 = 0; v31 < a0; v31 += 1)
    {
        for (v30 = 0; v30 < a1; v30 += 1)
        {
            v72 = 0;
            *((unsigned int *)&v72) = v8;
            v73 = 0;
            *((unsigned int *)&v73) = *((int *)(a4 + v31 * 8640 + v30 * 4));
            xmm1<16> = (xmm1<16> + Conv(32->128, Load(addr=((r9<8> + (Conv(32->s64, Load(addr=stack_base-60, size=4, endness=Iend_LE)) * 0x21c0<64>)) + (Conv(32->s64, Load(addr=stack_base-64, size=4, endness=Iend_LE)) * 0x4<64>)), size=4, endness=Iend_LE)))
            *((unsigned int *)&v72) = (unsigned int)(v72 * v74);
            *((unsigned int *)(a3 + v31 * 8640 + v30 * 4)) = (unsigned int)v72;
        }
    }
    for (v30 = 0; v30 < a1; v30 += 1)
    {
        v28 = 0;
        v27 = 0;
        v26 = 0;
        for (v31 = 0; v31 < a0; v31 += 1)
        {
            v75 = 0;
            *((unsigned int *)&v75) = v14;
            v76 = 0;
            *((unsigned int *)&v76) = *((int *)(a3 + v31 * 8640 + v30 * 4));
            v77 = 0;
            *((unsigned int *)&v77) = v13;
            t88 = ((xmm0<16> * xmm2<16>) + (xmm1<16> * Conv(32->128, Load(addr=stack_base-72, size=4, endness=Iend_LE))))
            v78 = 0;
            *((unsigned int *)&v78) = v10;
            v79 = 0;
            *((unsigned int *)&v79) = v27;
            tmp_100 = v78 * v79 + tmp_88;
            v80 = 0;
            *((unsigned int *)&v80) = v9;
            v81 = 0;
            *((unsigned int *)&v81) = v26;
            *((unsigned int *)&v80) = (unsigned int)(v80 * v81 + tmp_100);
            *((unsigned int *)(a4 + v31 * 8640 + v30 * 4)) = v80;
            v28 = *((int *)(a3 + v31 * 8640 + v30 * 4));
            v26 = v27;
            v27 = *((int *)(a4 + v31 * 8640 + v30 * 4));
        }
    }
    for (v30 = 0; v30 < a1; v30 += 1)
    {
        v23 = 0;
        v22 = 0;
        v21 = 0;
        v20 = 0;
        for (v31 = a0 - 1; v31 >= 0; v31 -= 1)
        {
            v82 = 0;
            *((unsigned int *)&v82) = v12;
            v83 = 0;
            *((unsigned int *)&v83) = v23;
            v84 = 0;
            *((unsigned int *)&v84) = v11;
            t68 = ((xmm0<16> * xmm2<16>) + (xmm1<16> * Conv(32->128, Load(addr=stack_base-96, size=4, endness=Iend_LE))))
            v85 = 0;
            *((unsigned int *)&v85) = v10;
            v86 = 0;
            *((unsigned int *)&v86) = v21;
            tmp_80 = v85 * v86 + tmp_68;
            v87 = 0;
            *((unsigned int *)&v87) = v9;
            v88 = 0;
            *((unsigned int *)&v88) = v20;
            *((unsigned int *)&v87) = (unsigned int)(v87 * v88 + tmp_80);
            *((unsigned int *)(a5 + v31 * 8640 + v30 * 4)) = v87;
            v22 = v23;
            v23 = *((int *)(a3 + v31 * 8640 + v30 * 4));
            v20 = v21;
            v21 = *((int *)(a5 + v31 * 8640 + v30 * 4));
        }
    }
    for (v31 = 0; v31 < a0; v31 += 1)
    {
        for (v30 = 0; v30 < a1; v30 += 1)
        {
            v89 = 0;
            *((unsigned int *)&v89) = v7;
            v90 = 0;
            *((unsigned int *)&v90) = *((int *)(a4 + v31 * 8640 + v30 * 4));
            xmm1<16> = (xmm1<16> + Conv(32->128, Load(addr=((r9<8> + (Conv(32->s64, Load(addr=stack_base-60, size=4, endness=Iend_LE)) * 0x21c0<64>)) + (Conv(32->s64, Load(addr=stack_base-64, size=4, endness=Iend_LE)) * 0x4<64>)), size=4, endness=Iend_LE)))
            *((unsigned int *)&v89) = (unsigned int)(v89 * v91);
            *((unsigned int *)(a3 + v31 * 8640 + v30 * 4)) = (unsigned int)v89;
        }
    }
    return;
}

extern char .L.str;

long long submain(unsigned int a0, unsigned long long *a1)
{
    unsigned long v0;  // [bp-0x48]
    unsigned long v1;  // [bp-0x40]
    unsigned long v2;  // [bp-0x38]
    unsigned long v3;  // [bp-0x30]
    char v4;  // [bp-0x24]
    unsigned int v5;  // [bp-0x20]
    unsigned int v6;  // [bp-0x1c]
    unsigned int v7;  // [bp-0xc]
    void* v11;  // rdi
    void* v12;  // rdi
    void* v13;  // rdi

    v7 = a0;
    v6 = 0x1000;
    v5 = 2160;
    v3 = polybench_alloc_data(0x870000, 0x4);
    v2 = polybench_alloc_data(0x870000, 0x4);
    v1 = polybench_alloc_data(0x870000, 0x4);
    v0 = polybench_alloc_data(0x870000, 0x4);
    init_array(v6, v5, &v4, v3, v2);
    kernel_deriche(v6, v5, v3, v2, v1, v0);
    if (v7 > 42)
    {
        if (strcmp(*(a1), &.L.str) == 0)
        {
            print_array(v6, v5, v2);
            free(v3);
            v11 = v2;
            free(rdi<8>);
            v12 = v1;
            free(rdi<8>);
            v13 = v0;
            free(rdi<8>);
            return 0;
        }
        free(v3);
        v11 = v2;
        free(rdi<8>);
        v12 = v1;
        free(rdi<8>);
        v13 = v0;
        free(rdi<8>);
        return 0;
    }
    free(v3);
    v11 = v2;
    free(rdi<8>);
    v12 = v1;
    free(rdi<8>);
    v13 = v0;
    free(rdi<8>);
    return 0;
}

extern char .L.str.3;
extern char got.stderr;

int print_array(unsigned int a0, unsigned int a1, unsigned long a2)
{
    unsigned int v0;  // [bp-0x20]
    unsigned int v1;  // [bp-0x1c]
    unsigned long v2;  // [bp-0x18]

    v2 = a2;
    fprintf(*((long long *)got.stderr), "==BEGIN DUMP_ARRAYS==\n");
    fprintf(*((long long *)got.stderr), "begin dump: %s", &.L.str.3);
    for (v1 = 0; v1 < a0; v1 += 1)
    {
        for (v0 = 0; v0 < a1; v0 += 1)
        {
            if ((a1 * v1 + v0 >> 31 CONCAT a1 * v1 + v0) /m 20 >> 32 == 0)
            {
                fprintf(*((long long *)got.stderr), "\n");
            }
            fprintf(*((long long *)got.stderr), "%0.2f ");
        }
    }
    fprintf(*((long long *)got.stderr), "\nend   dump: %s\n", &.L.str.3);
    fprintf(*((long long *)got.stderr), "==END   DUMP_ARRAYS==\n");
    return;
}

