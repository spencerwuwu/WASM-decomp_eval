int local_memcpy(unsigned long a0, unsigned long a1, unsigned int a2)
{
    unsigned long long *v0;  // [bp-0x30]
    unsigned long long *v1;  // [bp-0x28]
    unsigned int v2;  // [bp-0x1c]
    unsigned int v4;  // eax

    v2 = a2;
    v1 = a0;
    v0 = a1;
    while (true)
    {
        v4 = v2;
        v2 -= 1;
        if (v4 <= 0)
        {
            break;
        }
        *(v1) = *(v0);
        v1 = &v1[1];
        v0 = &v0[1];
    }
    return v4;
}

extern char got.bf_init_P;
extern char got.bf_init_S;
extern char got.key_P;
extern char got.key_S;

int BF_set_key(unsigned int a0, unsigned long a1)
{
    unsigned long v0;  // [bp-0x58]
    int tmp_14;  // tmp #14
    int tmp_42;  // tmp #42
    char *v1;  // [bp-0x50]
    void* v2;  // [bp-0x48]
    void* v3;  // [bp-0x40]
    unsigned long v4;  // [bp-0x30]
    unsigned long long *v5;  // [bp-0x28]
    unsigned int v6;  // [bp-0x1c]
    unsigned int v7;  // [bp-0xc]

    v7 = a0;
    local_memcpy(got.key_P, got.bf_init_P, 0x12);
    local_memcpy(got.key_S, got.bf_init_S, 0x400);
    v5 = got.key_P;
    if (v7 > 72)
    {
        v7 = 72;
    }
    v1 = a1;
    v0 = a1 + v7;
    for (v6 = 0; v6 < 18; v6 += 1)
    {
        tmp_14 = v1;
        v1 = &v1[1];
        v4 = *((char *)tmp_14);
        if (v1 >= v0)
        {
            v1 = a1;
        }
        v4 *= 0x100;
        tmp_42 = v1;
        v1 = &v1[1];
        v4 = *((char *)tmp_42) | v4;
        if (v1 >= v0)
        {
            v1 = a1;
        }
        v4 *= 0x100;
        tmp_42 = v1;
        v1 = &v1[1];
        v4 = *((char *)tmp_42) | v4;
        if (v1 >= v0)
        {
            v1 = a1;
        }
        v4 *= 0x100;
        tmp_42 = v1;
        v1 = &v1[1];
        v4 = *((char *)tmp_42) | v4;
        if (v1 >= v0)
        {
            v1 = a1;
        }
        v5[v6] = v4 ^ v5[v6];
    }
    v2 = 0;
    v3 = 0;
    for (v6 = 0; v6 < 18; v6 += 2)
    {
        BF_encrypt(&v2, 0x1);
        v5[v6] = v2;
        v5[v6 + 1] = v3;
    }
    v5 = got.key_S;
    for (v6 = 0; v6 < 0x400; v6 += 2)
    {
        BF_encrypt(&v2, 0x1);
        v5[v6] = v2;
        v5[v6 + 1] = v3;
    }
    return;
}

extern char got.key_P;
extern char got.key_S;

int BF_encrypt(unsigned long long a0[2], unsigned int a1)
{
    unsigned long long *v0;  // [bp-0x38]
    unsigned long long v1[18];  // [bp-0x30]
    unsigned long v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x20]

    v1[0] = got.key_P;
    v0 = got.key_S;
    v3 = a0[0];
    v2 = a0[1];
    if (a1 != 0)
    {
        v3 = v1[0] ^ v3;
        v2 = v1[1] ^ v2;
        v2 = (v0[v3 >> 24] + v0[0x100 + (v3 >> 16 & 255)] ^ v0[0x200 + (v3 >> 8 & 255)]) + v0[0x300 + (v3 & 255)] & 4294967295 ^ v2;
        v3 = v1[2] ^ v3;
        v3 = (v0[v2 >> 24] + v0[0x100 + (v2 >> 16 & 255)] ^ v0[0x200 + (v2 >> 8 & 255)]) + v0[0x300 + (v2 & 255)] & 4294967295 ^ v3;
        v2 = v1[3] ^ v2;
        v2 = (v0[v3 >> 24] + v0[0x100 + (v3 >> 16 & 255)] ^ v0[0x200 + (v3 >> 8 & 255)]) + v0[0x300 + (v3 & 255)] & 4294967295 ^ v2;
        v3 = v1[4] ^ v3;
        v3 = (v0[v2 >> 24] + v0[0x100 + (v2 >> 16 & 255)] ^ v0[0x200 + (v2 >> 8 & 255)]) + v0[0x300 + (v2 & 255)] & 4294967295 ^ v3;
        v2 = v1[5] ^ v2;
        v2 = (v0[v3 >> 24] + v0[0x100 + (v3 >> 16 & 255)] ^ v0[0x200 + (v3 >> 8 & 255)]) + v0[0x300 + (v3 & 255)] & 4294967295 ^ v2;
        v3 = v1[6] ^ v3;
        v3 = (v0[v2 >> 24] + v0[0x100 + (v2 >> 16 & 255)] ^ v0[0x200 + (v2 >> 8 & 255)]) + v0[0x300 + (v2 & 255)] & 4294967295 ^ v3;
        v2 = v1[7] ^ v2;
        v2 = (v0[v3 >> 24] + v0[0x100 + (v3 >> 16 & 255)] ^ v0[0x200 + (v3 >> 8 & 255)]) + v0[0x300 + (v3 & 255)] & 4294967295 ^ v2;
        v3 = v1[8] ^ v3;
        v3 = (v0[v2 >> 24] + v0[0x100 + (v2 >> 16 & 255)] ^ v0[0x200 + (v2 >> 8 & 255)]) + v0[0x300 + (v2 & 255)] & 4294967295 ^ v3;
        v2 = v1[9] ^ v2;
        v2 = (v0[v3 >> 24] + v0[0x100 + (v3 >> 16 & 255)] ^ v0[0x200 + (v3 >> 8 & 255)]) + v0[0x300 + (v3 & 255)] & 4294967295 ^ v2;
        v3 = v1[10] ^ v3;
        v3 = (v0[v2 >> 24] + v0[0x100 + (v2 >> 16 & 255)] ^ v0[0x200 + (v2 >> 8 & 255)]) + v0[0x300 + (v2 & 255)] & 4294967295 ^ v3;
        v2 = v1[11] ^ v2;
        v2 = (v0[v3 >> 24] + v0[0x100 + (v3 >> 16 & 255)] ^ v0[0x200 + (v3 >> 8 & 255)]) + v0[0x300 + (v3 & 255)] & 4294967295 ^ v2;
        v3 = v1[12] ^ v3;
        v3 = (v0[v2 >> 24] + v0[0x100 + (v2 >> 16 & 255)] ^ v0[0x200 + (v2 >> 8 & 255)]) + v0[0x300 + (v2 & 255)] & 4294967295 ^ v3;
        v2 = v1[13] ^ v2;
        v2 = (v0[v3 >> 24] + v0[0x100 + (v3 >> 16 & 255)] ^ v0[0x200 + (v3 >> 8 & 255)]) + v0[0x300 + (v3 & 255)] & 4294967295 ^ v2;
        v3 = v1[14] ^ v3;
        v3 = (v0[v2 >> 24] + v0[0x100 + (v2 >> 16 & 255)] ^ v0[0x200 + (v2 >> 8 & 255)]) + v0[0x300 + (v2 & 255)] & 4294967295 ^ v3;
        v2 = v1[15] ^ v2;
        v2 = (v0[v3 >> 24] + v0[0x100 + (v3 >> 16 & 255)] ^ v0[0x200 + (v3 >> 8 & 255)]) + v0[0x300 + (v3 & 255)] & 4294967295 ^ v2;
        v3 = v1[16] ^ v3;
        v3 = (v0[v2 >> 24] + v0[0x100 + (v2 >> 16 & 255)] ^ v0[0x200 + (v2 >> 8 & 255)]) + v0[0x300 + (v2 & 255)] & 4294967295 ^ v3;
        v2 = v1[17] ^ v2;
        a0[1] = 4294967295 & v3;
        a0[0] = 4294967295 & v2;
        return (unsigned int)a0;
    }
    v3 = v1[17] ^ v3;
    v2 = v1[16] ^ v2;
    v2 = (v0[v3 >> 24] + v0[0x100 + (v3 >> 16 & 255)] ^ v0[0x200 + (v3 >> 8 & 255)]) + v0[0x300 + (v3 & 255)] & 4294967295 ^ v2;
    v3 = v1[15] ^ v3;
    v3 = (v0[v2 >> 24] + v0[0x100 + (v2 >> 16 & 255)] ^ v0[0x200 + (v2 >> 8 & 255)]) + v0[0x300 + (v2 & 255)] & 4294967295 ^ v3;
    v2 = v1[14] ^ v2;
    v2 = (v0[v3 >> 24] + v0[0x100 + (v3 >> 16 & 255)] ^ v0[0x200 + (v3 >> 8 & 255)]) + v0[0x300 + (v3 & 255)] & 4294967295 ^ v2;
    v3 = v1[13] ^ v3;
    v3 = (v0[v2 >> 24] + v0[0x100 + (v2 >> 16 & 255)] ^ v0[0x200 + (v2 >> 8 & 255)]) + v0[0x300 + (v2 & 255)] & 4294967295 ^ v3;
    v2 = v1[12] ^ v2;
    v2 = (v0[v3 >> 24] + v0[0x100 + (v3 >> 16 & 255)] ^ v0[0x200 + (v3 >> 8 & 255)]) + v0[0x300 + (v3 & 255)] & 4294967295 ^ v2;
    v3 = v1[11] ^ v3;
    v3 = (v0[v2 >> 24] + v0[0x100 + (v2 >> 16 & 255)] ^ v0[0x200 + (v2 >> 8 & 255)]) + v0[0x300 + (v2 & 255)] & 4294967295 ^ v3;
    v2 = v1[10] ^ v2;
    v2 = (v0[v3 >> 24] + v0[0x100 + (v3 >> 16 & 255)] ^ v0[0x200 + (v3 >> 8 & 255)]) + v0[0x300 + (v3 & 255)] & 4294967295 ^ v2;
    v3 = v1[9] ^ v3;
    v3 = (v0[v2 >> 24] + v0[0x100 + (v2 >> 16 & 255)] ^ v0[0x200 + (v2 >> 8 & 255)]) + v0[0x300 + (v2 & 255)] & 4294967295 ^ v3;
    v2 = v1[8] ^ v2;
    v2 = (v0[v3 >> 24] + v0[0x100 + (v3 >> 16 & 255)] ^ v0[0x200 + (v3 >> 8 & 255)]) + v0[0x300 + (v3 & 255)] & 4294967295 ^ v2;
    v3 = v1[7] ^ v3;
    v3 = (v0[v2 >> 24] + v0[0x100 + (v2 >> 16 & 255)] ^ v0[0x200 + (v2 >> 8 & 255)]) + v0[0x300 + (v2 & 255)] & 4294967295 ^ v3;
    v2 = v1[6] ^ v2;
    v2 = (v0[v3 >> 24] + v0[0x100 + (v3 >> 16 & 255)] ^ v0[0x200 + (v3 >> 8 & 255)]) + v0[0x300 + (v3 & 255)] & 4294967295 ^ v2;
    v3 = v1[5] ^ v3;
    v3 = (v0[v2 >> 24] + v0[0x100 + (v2 >> 16 & 255)] ^ v0[0x200 + (v2 >> 8 & 255)]) + v0[0x300 + (v2 & 255)] & 4294967295 ^ v3;
    v2 = v1[4] ^ v2;
    v2 = (v0[v3 >> 24] + v0[0x100 + (v3 >> 16 & 255)] ^ v0[0x200 + (v3 >> 8 & 255)]) + v0[0x300 + (v3 & 255)] & 4294967295 ^ v2;
    v3 = v1[3] ^ v3;
    v3 = (v0[v2 >> 24] + v0[0x100 + (v2 >> 16 & 255)] ^ v0[0x200 + (v2 >> 8 & 255)]) + v0[0x300 + (v2 & 255)] & 4294967295 ^ v3;
    v2 = v1[2] ^ v2;
    v2 = (v0[v3 >> 24] + v0[0x100 + (v3 >> 16 & 255)] ^ v0[0x200 + (v3 >> 8 & 255)]) + v0[0x300 + (v3 & 255)] & 4294967295 ^ v2;
    v3 = v1[1] ^ v3;
    v3 = (v0[v2 >> 24] + v0[0x100 + (v2 >> 16 & 255)] ^ v0[0x200 + (v2 >> 8 & 255)]) + v0[0x300 + (v2 & 255)] & 4294967295 ^ v3;
    v2 = v1[0] ^ v2;
    a0[1] = 4294967295 & v3;
    a0[0] = 4294967295 & v2;
    return (unsigned int)a0;
}

int BF_cfb64_encrypt(unsigned long a0, unsigned long long a1, unsigned long long a2, unsigned long a3, unsigned int *a4, unsigned int a5)
{
    int tmp_131;  // tmp #131
    int tmp_153;  // tmp #153
    int tmp_177;  // tmp #177
    int tmp_201;  // tmp #201
    int tmp_222;  // tmp #222
    int tmp_244;  // tmp #244
    int tmp_268;  // tmp #268
    int tmp_292;  // tmp #292
    int tmp_157;  // tmp #157
    int tmp_178;  // tmp #178
    int tmp_199;  // tmp #199
    int tmp_211;  // tmp #211
    int tmp_238;  // tmp #238
    int tmp_259;  // tmp #259
    int tmp_280;  // tmp #280
    int tmp_27;  // tmp #27
    char v0;  // [bp-0x82]
    int tmp_26;  // tmp #26
    char v1;  // [bp-0x81]
    char *v2;  // [bp-0x80], Other Possible Types: unsigned long
    unsigned long v3;  // [bp-0x78], Other Possible Types: void*
    unsigned long v4;  // [bp-0x70], Other Possible Types: void*
    unsigned long long v5;  // [bp-0x60]
    unsigned int v6;  // [bp-0x54]
    unsigned long v7;  // [bp-0x50], Other Possible Types: void*
    unsigned long v8;  // [bp-0x48], Other Possible Types: void*
    unsigned long v9;  // [bp-0x40], Other Possible Types: void*
    unsigned long long v10;  // [bp-0x18], Other Possible Types: unsigned long
    char *v11;  // [bp-0x10], Other Possible Types: unsigned long
    unsigned long long v13;  // rax
    char *v15;  // rax
    unsigned long long v16;  // rax
    char *v17;  // cc_dep1

    v11 = a0;
    v10 = a1;
    v6 = *(a4);
    v5 = a2;
    v2 = a3;
    if (a5 != 0)
    {
        while (true)
        {
            v16 = v5;
            v5 -= 1;
            if (v16 == 0)
            {
                break;
            }
            if (v6 == 0)
            {
                tmp_131 = v2;
                v2 = &v2[1];
                v9 = *((char *)tmp_131) * 0x1000000;
                tmp_153 = v2;
                v2 = &v2[1];
                v9 = *((char *)tmp_153) * 0x10000 | v9;
                tmp_177 = v2;
                v2 = &v2[1];
                v9 = *((char *)tmp_177) * 0x100 | v9;
                tmp_201 = v2;
                v2 = &v2[1];
                v9 = *((char *)tmp_201) | v9;
                v3 = v9;
                tmp_222 = v2;
                v2 = &v2[1];
                v8 = *((char *)tmp_222) * 0x1000000;
                tmp_244 = v2;
                v2 = &v2[1];
                v8 = *((char *)tmp_244) * 0x10000 | v8;
                tmp_268 = v2;
                v2 = &v2[1];
                v8 = *((char *)tmp_268) * 0x100 | v8;
                tmp_292 = v2;
                v2 = &v2[1];
                v8 = *((char *)tmp_292) | v8;
                v4 = v8;
                BF_encrypt(&v3, 0x1);
                v2 = a3;
                v7 = v3;
                tmp_157 = v2;
                v2 = &v2[1];
                *((char *)tmp_157) = v7 >> 24 & 255;
                tmp_178 = v2;
                v2 = &v2[1];
                *((char *)tmp_178) = v7 >> 16 & 255;
                tmp_199 = v2;
                v2 = &v2[1];
                *((char *)tmp_199) = v7 >> 8 & 255;
                tmp_211 = v2;
                v2 = &v2[1];
                *((char *)tmp_211) = v7 & 255;
                v7 = v4;
                tmp_238 = v2;
                v2 = &v2[1];
                *((char *)tmp_238) = v7 >> 24 & 255;
                tmp_259 = v2;
                v2 = &v2[1];
                *((char *)tmp_259) = v7 >> 16 & 255;
                tmp_280 = v2;
                v2 = &v2[1];
                *((char *)tmp_280) = v7 >> 8 & 255;
                tmp_292 = v2;
                v2 = &v2[1];
                *((char *)tmp_292) = v7 & 255;
                v2 = a3;
            }
            tmp_27 = v11;
            v11 = &v11[1];
            *((char *)&v16) = *((char *)tmp_27) ^ v2[v6];
            v1 = v16;
            v17 = v10;
            v10 += 1;
            *(v17) = v1;
            v2[v6] = v1;
            v6 = v6 + 1 & 7;
        }
        v0 = 0;
        v1 = 0;
        v7 = 0;
        v4 = 0;
        v3 = 0;
        v8 = 0;
        v9 = 0;
        *(a4) = v6;
        return;
    }
    while (true)
    {
        v13 = v5;
        v5 -= 1;
        if (v13 == 0)
        {
            break;
        }
        if (v6 == 0)
        {
            tmp_131 = v2;
            v2 = &v2[1];
            v9 = *((char *)tmp_131) * 0x1000000;
            tmp_153 = v2;
            v2 = &v2[1];
            v9 = *((char *)tmp_153) * 0x10000 | v9;
            tmp_177 = v2;
            v2 = &v2[1];
            v9 = *((char *)tmp_177) * 0x100 | v9;
            tmp_201 = v2;
            v2 = &v2[1];
            v9 = *((char *)tmp_201) | v9;
            v3 = v9;
            tmp_222 = v2;
            v2 = &v2[1];
            v8 = *((char *)tmp_222) * 0x1000000;
            tmp_244 = v2;
            v2 = &v2[1];
            v8 = *((char *)tmp_244) * 0x10000 | v8;
            tmp_268 = v2;
            v2 = &v2[1];
            v8 = *((char *)tmp_268) * 0x100 | v8;
            tmp_292 = v2;
            v2 = &v2[1];
            v8 = *((char *)tmp_292) | v8;
            v4 = v8;
            BF_encrypt(&v3, 0x1);
            v2 = a3;
            v7 = v3;
            tmp_157 = v2;
            v2 = &v2[1];
            *((char *)tmp_157) = v7 >> 24 & 255;
            tmp_178 = v2;
            v2 = &v2[1];
            *((char *)tmp_178) = v7 >> 16 & 255;
            tmp_199 = v2;
            v2 = &v2[1];
            *((char *)tmp_199) = v7 >> 8 & 255;
            tmp_211 = v2;
            v2 = &v2[1];
            *((char *)tmp_211) = v7 & 255;
            v7 = v4;
            tmp_238 = v2;
            v2 = &v2[1];
            *((char *)tmp_238) = v7 >> 24 & 255;
            tmp_259 = v2;
            v2 = &v2[1];
            *((char *)tmp_259) = v7 >> 16 & 255;
            tmp_280 = v2;
            v2 = &v2[1];
            *((char *)tmp_280) = v7 >> 8 & 255;
            tmp_292 = v2;
            v2 = &v2[1];
            *((char *)tmp_292) = v7 & 255;
            v2 = a3;
        }
        tmp_26 = v11;
        v11 = &v11[1];
        v0 = *((char *)tmp_26);
        v1 = v2[v6];
        v2[v6] = v0;
        v15 = v10;
        v10 += 1;
        *(v15) = v1 ^ v0;
        v6 = v6 + 1 & 7;
    }
    v0 = 0;
    v1 = 0;
    v7 = 0;
    v4 = 0;
    v3 = 0;
    v8 = 0;
    v9 = 0;
    *(a4) = v6;
    return;
}

extern char got.in_key;
extern char got.out_key;

int blowfish_main()
{
    char v0;  // [bp-0x8d]
    int tmp_15;  // tmp #15
    int tmp_40;  // tmp #40
    unsigned int v1;  // [bp-0x8c]
    unsigned int v2;  // [bp-0x88]
    unsigned int v3;  // [bp-0x84]
    unsigned int v4;  // [bp-0x80]
    unsigned int v5;  // [bp-0x7c]
    unsigned int v6;  // [bp-0x78]
    unsigned int v7;  // [bp-0x74]
    char v8;  // [bp-0x70]
    char v9;  // [bp-0x68]
    char v10;  // [bp-0x38]
    char v11;  // [bp-0x10]
    unsigned long long v14;  // cc_dep1

    v7 = 0;
    v4 = 0;
    v3 = 0;
    v2 = 1;
    v1 = 0;
    for (v6 = 0; v6 < 8; v6 += 1)
    {
        v11 = 0;
        v8 = 0;
    }
    BF_set_key(0x8, &v11);
    for (v6 = 0; v4 < 5200; v6 = 0)
    {
        while (true)
        {
            v0 = 0;
            if (v4 < 5200)
            {
                v0 = v6 < 40;
            }
            if ((v0 & 1) == 0)
            {
                break;
            }
            tmp_15 = v4;
            v4 += 1;
            v14 = v6;
            v6 += 1;
            v10 = *((char *)(got.in_key + tmp_15));
        }
        BF_cfb64_encrypt(&v10, &v9, v6, &v8, &v7, v2);
        for (v5 = 0; v5 < v6; v5 += 1)
        {
            tmp_40 = v3;
            v3 += 1;
            v1 = (v9 != *((char *)(got.out_key + tmp_40))) + v1;
        }
    }
    v1 = v1;
    return v1;
}

extern char got.endTimer;
extern char got.startTimer;

long long submain()
{
    unsigned int v0;  // [bp-0xc]
    unsigned long v3;  // xmm0lq

    v0 = 0;
    rtclock();
    *((unsigned long *)got.startTimer) = v3;
    v0 = blowfish_main();
    rtclock();
    *((unsigned long *)got.endTimer) = v3;
    printf("%0.6f\n");
    return v0;
}

int rtclock()
{
    unsigned int v0;  // [bp-0x1c]
    char v1;  // [bp-0x18]

    v0 = gettimeofday(&v1, NULL);
    if (v0 != 0)
    {
        return printf("Error return from gettimeofday: %d", v0);
    }
    return v0;
}

