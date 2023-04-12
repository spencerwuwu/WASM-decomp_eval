long long local_memcpy(unsigned long long *a0, unsigned long long *a1, unsigned int a2)
{
    unsigned long long v1;  // rdx
    unsigned long v2;  // rax

    if ((unsigned int)v1 > 0)
    {
        do
        {
            *(a0) = *(a1);
            a0 = &a0[1];
            a1 = &a1[1];
            v1 -= 1;
        }
        while ((unsigned int)v1 > 1);
        return v1 - 1;
    }
    return v2;
}

extern char got.bf_init_P;
extern char got.bf_init_S;
extern char got.key_P;
extern char got.key_S;

int BF_set_key(unsigned int a0, unsigned long long a1)
{
    int tmp_52;  // tmp #52
    int tmp_25;  // tmp #25
    uint128_t v0;  // [bp-0x48]
    unsigned int v3;  // ebp
    void* v4;  // r14
    void* v6;  // rbx
    unsigned long long v8;  // rdi
    char *v10;  // rdi
    char *v11;  // rdx
    char *v12;  // rdx
    unsigned long long v13;  // rsi
    unsigned long long v16;  // rdi
    void* v17;  // rcx, Other Possible Types: unsigned long long
    char *v18;  // rsi
    void* v19;  // r12
    void* v20;  // r13

    v3 = a0;
    v4 = got.key_P;
    memcpy(got.key_P, got.bf_init_P, 0x90);
    v6 = got.key_S;
    memcpy(got.key_S, got.bf_init_S, 0x2000);
    v17 = 0;
    v18 = v8;
    do
    {
        v10 = &v18[1];
        if (&v18[1] >= (v3 < 72? (unsigned int)*((unsigned long long *)&v3) : 72) + rdx<8>)
        {
            v8 = rdx<8>;
        }
        v11 = &v10[1];
        if (&v10[1] >= &v10[(v3 < 72? (unsigned int)*((unsigned long long *)&v3) : 72) + 1])
        {
            rdx<8> = a1;
        }
        tmp_52 = *(v11);
        v12 = &v11[1];
        v13 = tmp_52 | *(v10) * 0x100 | *(v18) * 0x10000;
        tmp_25 = *(v12);
        v16 = tmp_25 | v13 * 0x100;
        *((unsigned long long *)(got.key_P + v17 * 8)) = *((long long *)(got.key_P + v17 * 8)) ^ v16;
        v17 += 1;
        v18 = &v12[1];
    }
    while (v17 != 18);
    v0 = 0;
    v19 = 0;
    v20 = 0;
    while (true)
    {
        BF_encrypt(&v0, 0x1);
        *((long long *)((char *)v4 + 0x8 * v20)) = v0;
        *((long long *)&((char *)v4)[v20 * 8 | 8]) = *((long long *)&((char *)&v0)[8]);
        v20 += 2;
        if (v20 >= 16)
        {
            break;
        }
    }
    while (true)
    {
        BF_encrypt(&v0, 0x1);
        *((long long *)((char *)v6 + 0x8 * v19)) = v0;
        *((long long *)&((char *)v6)[v19 * 8 | 8]) = *((long long *)&((char *)&v0)[8]);
        v19 += 2;
        if (v19 >= 1022)
        {
            break;
        }
    }
    return;
}

extern char got.key_P;
extern char got.key_S;

int BF_encrypt(unsigned long long a0[2], unsigned int a1)
{
    int tmp_40;  // tmp #40
    int tmp_375;  // tmp #375
    int tmp_442;  // tmp #442
    int tmp_468;  // tmp #468
    int tmp_509;  // tmp #509
    int tmp_535;  // tmp #535
    int tmp_576;  // tmp #576
    int tmp_20;  // tmp #20
    int tmp_345;  // tmp #345
    int tmp_57;  // tmp #57
    int tmp_412;  // tmp #412
    int tmp_479;  // tmp #479
    int tmp_505;  // tmp #505
    int tmp_546;  // tmp #546
    int tmp_135;  // tmp #135
    int tmp_202;  // tmp #202
    int tmp_45;  // tmp #45
    int tmp_269;  // tmp #269
    int tmp_370;  // tmp #370
    int tmp_437;  // tmp #437
    int tmp_463;  // tmp #463
    int tmp_504;  // tmp #504
    int tmp_530;  // tmp #530
    int tmp_571;  // tmp #571
    int tmp_27;  // tmp #27
    int tmp_361;  // tmp #361
    int tmp_64;  // tmp #64
    int tmp_428;  // tmp #428
    int tmp_495;  // tmp #495
    int tmp_521;  // tmp #521
    int tmp_562;  // tmp #562
    int tmp_138;  // tmp #138
    int tmp_205;  // tmp #205
    int tmp_272;  // tmp #272
    unsigned long long v1;  // rax
    unsigned long long v2[18];  // rsi
    unsigned long long v3;  // rcx
    unsigned long long v4;  // r9
    unsigned long long v5;  // rbx
    unsigned long long v6;  // rax
    unsigned long long v7;  // rdx
    unsigned long long v8;  // rbx
    unsigned long long v9;  // rax
    unsigned long long v10;  // rdx
    unsigned long long v11;  // rcx
    unsigned long long v12;  // r8
    unsigned long long v13;  // rsi
    unsigned long long v14;  // rcx
    unsigned long long v15;  // r9
    unsigned long long v16;  // rbx
    unsigned long long v17;  // rax
    unsigned long long v18;  // rdx
    unsigned long long v19;  // rbx
    unsigned long long v20;  // rax
    unsigned long long v21;  // rdx
    unsigned long long v22;  // rcx
    unsigned long long v23;  // r8
    unsigned long long v24;  // rbx
    unsigned long long v25;  // rax
    unsigned long long v26;  // rdx
    unsigned long long v27;  // rbx
    unsigned long long v28;  // rax
    unsigned long long v29;  // rdx
    unsigned long long v30;  // rbx
    unsigned long long v31;  // rbx
    unsigned long long v32;  // rax
    unsigned long long v33;  // rdx
    unsigned long long v34;  // rbx
    unsigned long long v35;  // rax
    unsigned long long v36;  // rdx
    unsigned long long v37;  // rbx
    unsigned long v38;  // rcx
    unsigned long long v39;  // rbx
    unsigned long long v40;  // rax
    unsigned long long v41;  // rdx
    unsigned long long v42;  // r8
    unsigned long long v43;  // rdx
    unsigned long long v44;  // rbx
    unsigned long long v45;  // rax
    unsigned long long v46;  // rdx
    unsigned long long v47;  // r8
    unsigned long long v48;  // rdx

    v1 = a0[1];
    if (a1 != 0)
    {
        v13 = *((long long *)&got.key_P);
        v14 = a0[0] ^ *((long long *)*((long long *)&got.key_P));
        v15 = *((long long *)&got.key_S);
        tmp_40 = (*((int *)(*((long long *)&got.key_S) + ((unsigned int)v14 / 0x2000 & 2040) + 0x800)) + *((int *)(*((long long *)&got.key_S) + v14 / 0x1000000 * 8)) ^ *((int *)(*((long long *)&got.key_S) + (char)v14 * 8 + 0x1000))) + *((int *)(*((long long *)&got.key_S) + (char)v14 * 8 + 0x1800)) ^ *((long long *)(*((long long *)&got.key_P) + 8)) ^ v1;
        v16 = (*((int *)(*((long long *)&got.key_S) + ((unsigned int)v14 / 0x2000 & 2040) + 0x800)) + *((int *)(*((long long *)&got.key_S) + v14 / 0x1000000 * 8)) ^ *((int *)(*((long long *)&got.key_S) + (char)v14 * 8 + 0x1000))) + *((int *)(*((long long *)&got.key_S) + (char)v14 * 8 + 0x1800)) ^ *((long long *)(*((long long *)&got.key_P) + 8)) ^ v1;
        tmp_375 = ...;
        v17 = ...;
        tmp_442 = (*((int *)(*((long long *)&got.key_S) + ((unsigned int)((tmp_375 ^ *((long long *)(*((long long *)&got.key_P) + 16)) ^ v14) >> 13) & 2040) + 0x800)) + *((int *)(*((long long *)&got.key_S) + ((tmp_375 ^ *((long long *)(*((long long *)&got.key_P) + 16)) ^ v14) >> 24) * 8)) ^ *((int *)(*((long long *)&got.key_S) + (char)v17 * 8 + 0x1000))) + *((int *)(*((long long *)&got.key_S) + (char)v17 * 8 + 0x1800));
        v18 = ...;
        tmp_468 = ...;
        tmp_509 = ...;
        v19 = ...;
        tmp_535 = ...;
        tmp_576 = ...;
        v20 = ...;
        v21 = ...;
        v22 = ...;
        v23 = ...;
        tmp_20 = (*((int *)(v15 + ((unsigned int)v23 & 2040) + 0x800)) + *((int *)(v15 + v22 * 8)) ^ *((int *)(v15 + (char)v21 * 8 + 0x1000))) + *((int *)(v15 + (char)v21 * 8 + 0x1800)) ^ *((long long *)(v13 + 56)) ^ v20;
        v31 = (*((int *)(v15 + ((unsigned int)v23 & 2040) + 0x800)) + *((int *)(v15 + v22 * 8)) ^ *((int *)(v15 + (char)v21 * 8 + 0x1000))) + *((int *)(v15 + (char)v21 * 8 + 0x1800)) ^ *((long long *)(v13 + 56)) ^ v20;
        tmp_345 = ...;
        tmp_57 = ...;
        v32 = ...;
        tmp_412 = (*((int *)(v15 + ((unsigned int)((tmp_345 ^ *((long long *)(v13 + 64)) ^ v21) >> 13) & 2040) + 0x800)) + *((int *)(v15 + ((tmp_345 ^ *((long long *)(v13 + 64)) ^ v21) >> 24) * 8)) ^ *((int *)(v15 + (char)v32 * 8 + 0x1000))) + *((int *)(v15 + (char)v32 * 8 + 0x1800));
        v33 = ...;
        tmp_479 = (*((int *)(v15 + ((unsigned int)((tmp_412 ^ *((long long *)(v13 + 72)) ^ v31) >> 13) & 2040) + 0x800)) + *((int *)(v15 + ((tmp_412 ^ *((long long *)(v13 + 72)) ^ v31) >> 24) * 8)) ^ *((int *)(v15 + (char)v33 * 8 + 0x1000))) + *((int *)(v15 + (char)v33 * 8 + 0x1800));
        v34 = ...;
        tmp_505 = ...;
        tmp_546 = ...;
        v35 = ...;
        v36 = ...;
        v37 = ...;
        v38 = (char)v36;
        tmp_135 = (unsigned int)v37 + *((int *)(v15 + v38 * 8 + 0x1800));
        v44 = (unsigned int)v37 + *((int *)(v15 + v38 * 8 + 0x1800)) ^ *((long long *)(v13 + 104)) ^ v35;
        tmp_202 = (*((int *)(v15 + ((unsigned int)((tmp_135 ^ *((long long *)(v13 + 104)) ^ v35) >> 13) & 2040) + 0x800)) + *((int *)(v15 + ((tmp_135 ^ *((long long *)(v13 + 104)) ^ v35) >> 24) * 8)) ^ *((int *)(v15 + (char)v44 * 8 + 0x1000))) + *((int *)(v15 + (char)v44 * 8 + 0x1800));
        tmp_45 = ...;
        v45 = ...;
        tmp_269 = (*((int *)(v15 + ((unsigned int)((tmp_202 ^ *((long long *)(v13 + 112)) ^ v36) >> 13) & 2040) + 0x800)) + *((int *)(v15 + ((tmp_202 ^ *((long long *)(v13 + 112)) ^ v36) >> 24) * 8)) ^ *((int *)(v15 + (char)v45 * 8 + 0x1000))) + *((int *)(v15 + (char)v45 * 8 + 0x1800));
        v46 = ...;
        v47 = ...;
        v48 = tmp_269 ^ *((long long *)(v13 + 120)) ^ v44 ^ *((long long *)(v13 + 136));
        *((int *)&a0[1]) = r8<8>;
        *((int *)&a0[0]) = rdx<8>;
        return rdx<8>;
    }
    v2 = *((long long *)&got.key_P);
    v3 = a0[0] ^ *((long long *)(*((long long *)&got.key_P) + 136));
    v4 = *((long long *)&got.key_S);
    tmp_40 = (*((int *)(*((long long *)&got.key_S) + ((unsigned int)v3 / 0x2000 & 2040) + 0x800)) + *((int *)(*((long long *)&got.key_S) + v3 / 0x1000000 * 8)) ^ *((int *)(*((long long *)&got.key_S) + (char)v3 * 8 + 0x1000))) + *((int *)(*((long long *)&got.key_S) + (char)v3 * 8 + 0x1800)) ^ *((long long *)(*((long long *)&got.key_P) + 128)) ^ v1;
    v5 = (*((int *)(*((long long *)&got.key_S) + ((unsigned int)v3 / 0x2000 & 2040) + 0x800)) + *((int *)(*((long long *)&got.key_S) + v3 / 0x1000000 * 8)) ^ *((int *)(*((long long *)&got.key_S) + (char)v3 * 8 + 0x1000))) + *((int *)(*((long long *)&got.key_S) + (char)v3 * 8 + 0x1800)) ^ *((long long *)(*((long long *)&got.key_P) + 128)) ^ v1;
    tmp_370 = ...;
    v6 = ...;
    tmp_437 = (*((int *)(*((long long *)&got.key_S) + ((unsigned int)((tmp_370 ^ *((long long *)(*((long long *)&got.key_P) + 120)) ^ v3) >> 13) & 2040) + 0x800)) + *((int *)(*((long long *)&got.key_S) + ((tmp_370 ^ *((long long *)(*((long long *)&got.key_P) + 120)) ^ v3) >> 24) * 8)) ^ *((int *)(*((long long *)&got.key_S) + (char)v6 * 8 + 0x1000))) + *((int *)(*((long long *)&got.key_S) + (char)v6 * 8 + 0x1800));
    v7 = ...;
    tmp_463 = ...;
    tmp_504 = ...;
    v8 = ...;
    tmp_530 = ...;
    tmp_571 = ...;
    v9 = ...;
    v10 = ...;
    v11 = ...;
    v12 = ...;
    tmp_27 = (*((int *)(v4 + ((unsigned int)v12 / 0x2000 & 2040) + 0x800)) + *((int *)(v4 + v11 * 8)) ^ *((int *)(v4 + (char)v10 * 8 + 0x1000))) + *((int *)(v4 + (char)v10 * 8 + 0x1800)) ^ v2[10] ^ v9;
    v24 = (*((int *)(v4 + ((unsigned int)v12 / 0x2000 & 2040) + 0x800)) + *((int *)(v4 + v11 * 8)) ^ *((int *)(v4 + (char)v10 * 8 + 0x1000))) + *((int *)(v4 + (char)v10 * 8 + 0x1800)) ^ v2[10] ^ v9;
    tmp_361 = ...;
    tmp_64 = ...;
    v25 = ...;
    tmp_428 = (*((int *)(v4 + ((unsigned int)((tmp_361 ^ v2[9] ^ v10) >> 13) & 2040) + 0x800)) + *((int *)(v4 + ((tmp_361 ^ v2[9] ^ v10) >> 24) * 8)) ^ *((int *)(v4 + (char)v25 * 8 + 0x1000))) + *((int *)(v4 + (char)v25 * 8 + 0x1800));
    v26 = ...;
    tmp_495 = (*((int *)(v4 + ((unsigned int)((tmp_428 ^ v2[8] ^ v24) >> 13) & 2040) + 0x800)) + *((int *)(v4 + ((tmp_428 ^ v2[8] ^ v24) >> 24) * 8)) ^ *((int *)(v4 + (char)v26 * 8 + 0x1000))) + *((int *)(v4 + (char)v26 * 8 + 0x1800));
    v27 = ...;
    tmp_521 = ...;
    tmp_562 = ...;
    v28 = ...;
    v29 = ...;
    v30 = ...;
    tmp_138 = (unsigned int)v30 + *((int *)(v4 + (char)v29 * 8 + 0x1800));
    v39 = (unsigned int)v30 + *((int *)(v4 + (char)v29 * 8 + 0x1800)) ^ v2[4] ^ v28;
    tmp_205 = (*((int *)(v4 + ((unsigned int)((tmp_138 ^ v2[4] ^ v28) >> 13) & 2040) + 0x800)) + *((int *)(v4 + ((tmp_138 ^ v2[4] ^ v28) >> 24) * 8)) ^ *((int *)(v4 + (char)v39 * 8 + 0x1000))) + *((int *)(v4 + (char)v39 * 8 + 0x1800));
    tmp_45 = ...;
    v40 = ...;
    tmp_272 = (*((int *)(v4 + ((unsigned int)((tmp_205 ^ v2[3] ^ v29) >> 13) & 2040) + 0x800)) + *((int *)(v4 + ((tmp_205 ^ v2[3] ^ v29) >> 24) * 8)) ^ *((int *)(v4 + (char)v40 * 8 + 0x1000))) + *((int *)(v4 + (char)v40 * 8 + 0x1800));
    v41 = ...;
    v42 = ...;
    v43 = tmp_272 ^ v2[2] ^ v39 ^ v2[0];
    *((int *)&a0[1]) = r8<8>;
    *((int *)&a0[0]) = rdx<8>;
    return rdx<8>;
}

typedef struct struct_0 {
    char field_0;
    char padding_1[3];
    unsigned int field_4;
} struct_0;

int BF_cfb64_encrypt(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned int *a4, unsigned int a5)
{
    unsigned long v0;  // [bp-0x48], Other Possible Types: uint128_t
    unsigned long v1;  // [bp-0x40]
    struct_0 *v3;  // r14
    unsigned long long v4;  // r15
    unsigned long long v5;  // rax
    struct_0 *v6;  // rbx
    char *v7;  // r12, Other Possible Types: unsigned long long
    char *v8;  // r13, Other Possible Types: unsigned long long

    v3 = a3;
    v4 = a2;
    v7 = a1;
    v8 = a0;
    v6 = *(a4);
    if (a5 != 0)
    {
        if (a2 != 0)
        {
            do
            {
                v4 -= 1;
                if ((unsigned int)v6 == 0)
                {
                    v0 = *((int *)&v3->field_0) * 0x1000000 | *((int *)&v3->field_0) * 0x100 & 0xff0000 | *((int *)&v3->field_0) >> 8 & 0xff00 | *((int *)&v3->field_0) >> 24 & 255;
                    v1 = v3->field_4 * 0x1000000 | v3->field_4 * 0x100 & 0xff0000 | v3->field_4 >> 8 & 0xff00 | v3->field_4 >> 24 & 255;
                    BF_encrypt(&v0, 0x1);
                    *((int *)&v3->field_0) = (int)v0 * 0x1000000 | (int)v0 * 0x100 & 0xff0000 | (int)v0 >> 8 & 0xff00 | (int)v0 >> 24 & 255;
                    v3->field_4 = (int)v1 * 0x1000000 | (int)v1 * 0x100 & 0xff0000 | (int)v1 >> 8 & 0xff00 | (int)v1 >> 24 & 255;
                }
                *((char *)&a3) = *((char *)(v3 + v6)) ^ *(v8);
                v8 = &v8[1];
                *(v7) = *((char *)&a3);
                v7 = &v7[1];
                *((char *)(v3 + v6)) = *((char *)&a3);
                v6 = (unsigned int)v6 + 1 & 7;
            }
            while (v4 != 0);
            v0 = 0;
            *(a4) = rbx<8>;
            return;
        }
        v0 = 0;
        *(a4) = *(a4);
        return;
    }
    if (a2 != 0)
    {
        do
        {
            v4 -= 1;
            if ((unsigned int)v6 == 0)
            {
                v0 = *((int *)&v3->field_0) * 0x1000000 | *((int *)&v3->field_0) * 0x100 & 0xff0000 | *((int *)&v3->field_0) >> 8 & 0xff00 | *((int *)&v3->field_0) >> 24 & 255;
                v1 = v3->field_4 * 0x1000000 | v3->field_4 * 0x100 & 0xff0000 | v3->field_4 >> 8 & 0xff00 | v3->field_4 >> 24 & 255;
                BF_encrypt(&v0, 0x1);
                *((int *)&v3->field_0) = (int)v0 * 0x1000000 | (int)v0 * 0x100 & 0xff0000 | (int)v0 >> 8 & 0xff00 | (int)v0 >> 24 & 255;
                v3->field_4 = (int)v1 * 0x1000000 | (int)v1 * 0x100 & 0xff0000 | (int)v1 >> 8 & 0xff00 | (int)v1 >> 24 & 255;
            }
            *((char *)&v5) = *(v8);
            v8 = &v8[1];
            *((char *)&a2) = *((char *)(v3 + v6)) ^ (char)v5;
            *((char *)(v3 + v6)) = v5;
            *(v7) = *((char *)&a2);
            v7 = &v7[1];
            v6 = (unsigned int)v6 + 1 & 7;
        }
        while (v4 != 0);
        v0 = 0;
        *(a4) = rbx<8>;
        return;
    }
    v0 = 0;
    *(a4) = *(a4);
    return;
}

extern char got.in_key;
extern char got.out_key;

int blowfish_main()
{
    unsigned int v0;  // [bp-0x9c]
    int tmp_38;  // tmp #38
    void* v1;  // [bp-0x98]
    void* v2;  // [bp-0x90]
    char v3;  // [bp-0x88]
    char v4;  // [bp-0x58]
    void* v7;  // rbx
    unsigned long long v9;  // cc_op
    void* v10;  // cc_dep1
    void* v11;  // cc_dep2
    void* v12;  // r14
    void* v13;  // r15
    void* v14;  // r13
    unsigned long v15;  // cc_ndep
    void* v16;  // rax
    unsigned long long v17;  // cc_op
    void* v18;  // cc_dep1
    unsigned long long v19;  // cc_dep2
    unsigned long long v20;  // rax
    void* v21;  // r12
    void* v22;  // rcx
    void* v23;  // rsi

    v0 = 0;
    v2 = 0;
    v1 = 0;
    BF_set_key(0x8, &v2);
    v7 = 0;
    v14 = 0;
    do
    {
        memcpy(&v4, got.in_key + v14, (39 <= (5200 <= (unsigned int)v14? (unsigned int)v14 : 5199) - (unsigned int)v14? 39 : (5200 <= (unsigned int)v14? (unsigned int)v14 : 5199) - (unsigned int)v14) + 1);
        v9 = 19;
        v10 = 0;
        v11 = 0;
        v16 = 0;
        do
        {
            v12 = v16;
            v13 = v14;
            v14 += 1;
            v15 = [D] amd64g_calculate_rflags_c(cc_op<8>, cc_dep1<8>, cc_dep2<8>, cc_ndep<8>);
            v16 += 1;
            if (v13 > 5198)
            {
                break;
            }
            v17 = 8;
            v18 = v12;
            v19 = 39;
        }
        while (v12 < 39);
        BF_cfb64_encrypt(&v4, &v3, v16, &v1, &v0, 0x1);
        v21 = 0;
        v22 = 0;
        do
        {
            v23 = 0;
            tmp_38 = *(&((char *)v21)[got.out_key]);
            v21 += 1;
            *((char *)&v23) = v3 != (char)tmp_38;
            v7 += v23;
            v22 += 1;
        }
        while (v22 < v12);
    }
    while ((unsigned int)v13 <= 5198);
    *((unsigned int *)&v20) = (unsigned int)v7;
    return v20;
}

extern char got.endTimer;
extern char got.startTimer;

long long submain()
{
    char v0;  // [bp-0x20]
    unsigned int v1;  // [bp-0x18]
    unsigned long long v3;  // rax
    unsigned long long v5;  // xmm0lq
    unsigned long long v6;  // xmm1lq
    uint128_t v7;  // xmm1
    int v8;  // xmm0
    unsigned long long v9;  // rbx
    unsigned long long v10;  // rax
    int v12;  // xmm1
    uint128_t v13;  // xmm0
    unsigned long long v15;  // rax

    (unsigned int)v3 = gettimeofday(&v0, NULL);
    if ((unsigned int)v3 != 0)
    {
        printf("Error return from gettimeofday: %d", (unsigned int)v3);
    }
    v5 = *((long long *)&v0);
    v6 = v1;
    *((unsigned long long *)&v7) = (unsigned long long)(v7 * 4517329193108106637 + v8);
    *((unsigned long long *)got.startTimer) = v7;
    v9 = blowfish_main();
    (unsigned int)v10 = gettimeofday(&v0, NULL);
    if ((unsigned int)v10 != 0)
    {
        printf("Error return from gettimeofday: %d", (unsigned int)v10);
        v12 = 0;
        *((unsigned long long *)&v12) = *((long long *)&v0);
        v13 = 0;
        *((unsigned long long *)&v13) = v1;
        *((unsigned long long *)&v13) = (unsigned long long)(v13 * 4517329193108106637 + v12);
        *((unsigned long long *)*((long long *)&got.endTimer)) = v13;
        printf("%0.6f\n");
        v15 = v9;
        return v15;
    }
    v12 = 0;
    *((unsigned long long *)&v12) = *((long long *)&v0);
    v13 = 0;
    *((unsigned long long *)&v13) = v1;
    *((unsigned long long *)&v13) = (unsigned long long)(v13 * 4517329193108106637 + v12);
    *((unsigned long long *)*((long long *)&got.endTimer)) = v13;
    printf("%0.6f\n");
    v15 = v9;
    return v15;
}

