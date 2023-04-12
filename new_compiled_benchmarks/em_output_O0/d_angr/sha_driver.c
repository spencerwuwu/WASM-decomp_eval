int local_memset(unsigned long long a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
    unsigned int v0;  // [bp-0x2c]
    unsigned long long v1;  // [bp-0x28]
    unsigned int v2;  // [bp-0x1c]
    unsigned int v4;  // eax
    unsigned int v5;  // eax
    unsigned int *v6;  // rax

    v2 = a3;
    v0 = (a2 >> 31 CONCAT a2) /m 4;
    v1 = a0;
    while (true)
    {
        v4 = v2;
        v2 -= 1;
        if (v4 <= 0)
        {
            break;
        }
        v1 += 4;
    }
    while (true)
    {
        v5 = v0;
        v0 -= 1;
        if (v5 <= 0)
        {
            break;
        }
        v6 = v1;
        v1 += 4;
        *(v6) = a1;
    }
    return v5;
}

int local_memcpy(unsigned long a0, unsigned long a1, unsigned int a2)
{
    unsigned int v0;  // [bp-0x38]
    int tmp_90;  // tmp #90
    int tmp_114;  // tmp #114
    int tmp_32;  // tmp #32
    int tmp_152;  // tmp #152
    int tmp_53;  // tmp #53
    int tmp_190;  // tmp #190
    int tmp_74;  // tmp #74
    int tmp_229;  // tmp #229
    unsigned int v1;  // [bp-0x34]
    char *v2;  // [bp-0x30]
    unsigned int *v3;  // [bp-0x28]
    unsigned int v5;  // eax

    v0 = (a2 >> 31 CONCAT a2) /m 4;
    v3 = a0;
    v2 = a1;
    while (true)
    {
        v5 = v0;
        v0 -= 1;
        if (v5 <= 0)
        {
            break;
        }
        v1 = 0;
        tmp_90 = v2;
        v2 = &v2[1];
        v1 = *((char *)tmp_90) | v1;
        tmp_114 = v2;
        v2 = &v2[1];
        tmp_32 = v1;
        v1 = (unsigned int)(*((char *)tmp_114) * 0x100) | tmp_32;
        tmp_152 = v2;
        v2 = &v2[1];
        tmp_53 = v1;
        v1 = (unsigned int)(*((char *)tmp_152) * 0x10000) | tmp_53;
        tmp_190 = v2;
        v2 = &v2[1];
        tmp_74 = v1;
        v1 = (unsigned int)(*((char *)tmp_190) * 0x1000000) | tmp_74;
        tmp_229 = v1;
        *(v3) = tmp_229;
        v3 = &v3[1];
    }
    return;
}

extern char got.sha_info_count_hi;
extern char got.sha_info_count_lo;
extern char got.sha_info_digest;

int sha_init()
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rbp

    *((int *)got.sha_info_digest) = 1732584193;
    *((int *)(got.sha_info_digest + 4)) = 4023233417;
    *((int *)(got.sha_info_digest + 8)) = 2562383102;
    *((int *)(got.sha_info_digest + 12)) = 271733878;
    *((int *)(got.sha_info_digest + 16)) = 3285377520;
    *((int *)got.sha_info_count_lo) = 0;
    *((int *)got.sha_info_count_hi) = 0;
    v2 = v0;
    return;
}

extern char got.sha_info_count_hi;
extern char got.sha_info_count_lo;
extern char got.sha_info_data;

int sha_update(unsigned long a0, unsigned int a1)
{
    unsigned int v0;  // [bp-0x14]
    unsigned long v1;  // [bp-0x10]

    v1 = a0;
    v0 = a1;
    if (*((int *)got.sha_info_count_lo) + (unsigned int)(v0 << 3) < *((int *)got.sha_info_count_lo))
    {
        *((int *)got.sha_info_count_hi) = *((int *)got.sha_info_count_hi) + 1;
    }
    *((unsigned int *)got.sha_info_count_lo) = (unsigned int)(v0 * 8) + *((int *)got.sha_info_count_lo);
    for (*((unsigned int *)got.sha_info_count_hi) = (unsigned int)(v0 >> 29) + *((int *)got.sha_info_count_hi); v0 >= 64; v0 -= 64)
    {
        local_memcpy(got.sha_info_data, v1, 0x40);
        sha_transform();
        v1 += 64;
    }
    return local_memcpy(got.sha_info_data, v1, v0);
}

extern char got.sha_info_count_hi;
extern char got.sha_info_count_lo;
extern char got.sha_info_data;

int sha_final()
{
    unsigned int v0;  // [bp-0x14]
    int tmp_79;  // tmp #79
    unsigned int v1;  // [bp-0x10]
    unsigned int v2;  // [bp-0xc]

    v1 = *((int *)got.sha_info_count_lo);
    v0 = *((int *)got.sha_info_count_hi);
    v2 = (unsigned int)(v1 >> 3) & 63;
    tmp_79 = v2;
    v2 += 1;
    *((int *)(got.sha_info_data + tmp_79 * 4)) = 128;
    if (v2 > 56)
    {
        local_memset(got.sha_info_data, 0x0, 64 - v2, v2);
        sha_transform();
        local_memset(got.sha_info_data, 0x0, 0x38, 0x0);
        *((unsigned int *)(got.sha_info_data + 56)) = v0;
        *((unsigned int *)(got.sha_info_data + 60)) = v1;
        sha_transform();
        return;
    }
    local_memset(got.sha_info_data, 0x0, 56 - v2, v2);
    *((unsigned int *)(got.sha_info_data + 56)) = v0;
    *((unsigned int *)(got.sha_info_data + 60)) = v1;
    sha_transform();
    return;
}

extern char got.in_i;
extern char got.indata;

int sha_stream()
{
    unsigned int v0;  // [bp-0x18]
    unsigned int v1;  // [bp-0x10]
    unsigned int v2;  // [bp-0xc]

    sha_init();
    for (v1 = 0; v1 < 2; v1 += 1)
    {
        v2 = *((int *)(got.in_i + v1 * 4));
        *((long long *)&v0) = got.indata + v1 * 0x2000;
        sha_update(*((long long *)&v0), v2);
    }
    sha_final();
    return;
}

extern char got.endTimer;
extern char got.outData;
extern char got.sha_info_digest;
extern char got.startTimer;

long long submain()
{
    unsigned int v0;  // [bp-0x10]
    unsigned int v1;  // [bp-0xc]
    unsigned long v4;  // xmm0lq

    v0 = 0;
    rtclock();
    *((unsigned long *)got.startTimer) = v4;
    sha_stream();
    for (v1 = 0; v1 < 5; v1 += 1)
    {
        v0 = (*((int *)(got.sha_info_digest + (v1 << 2))) != *((int *)(got.outData + (v1 << 2)))) + v0;
    }
    rtclock();
    *((unsigned long *)got.endTimer) = v4;
    printf("%0.6f\n");
    return v0;
}

extern char got.sha_info_data;
extern char got.sha_info_digest;

int sha_transform()
{
    unsigned int v0;  // [bp-0x168]
    unsigned int v1;  // [bp-0x24]
    unsigned int v2;  // [bp-0x20]
    unsigned int v3;  // [bp-0x1c]
    unsigned int v4;  // [bp-0x18]
    unsigned int v5;  // [bp-0x14]
    unsigned int v6;  // [bp-0x10]
    unsigned int v7;  // [bp-0xc]

    for (v7 = 0; v7 < 16; v7 += 1)
    {
        v0 = *((int *)(got.sha_info_data + v7 * 4));
    }
    for (v7 = 16; v7 < 80; v7 += 1)
    {
        v0 = v0 ^ v0 ^ v0 ^ v0;
    }
    v5 = *((int *)got.sha_info_digest);
    v4 = *((int *)(got.sha_info_digest + 4));
    v3 = *((int *)(got.sha_info_digest + 8));
    v2 = *((int *)(got.sha_info_digest + 12));
    v1 = *((int *)(got.sha_info_digest + 16));
    for (v7 = 0; v7 < 20; v7 += 1)
    {
        v6 = ((unsigned int)(v5 * 32) | (unsigned int)(v5 >> 27)) + (v4 & v3 | (v4 ^ -1) & v2) + v1 + v0 + 1518500249;
        v1 = v2;
        v2 = v3;
        v3 = (unsigned int)(v4 * 0x40000000) | (unsigned int)(v4 >> 2);
        v4 = v5;
        v5 = v6;
    }
    for (v7 = 20; v7 < 40; v7 += 1)
    {
        v6 = ((unsigned int)(v5 * 32) | (unsigned int)(v5 >> 27)) + (v4 ^ v3 ^ v2) + v1 + v0 + 1859775393;
        v1 = v2;
        v2 = v3;
        v3 = (unsigned int)(v4 * 0x40000000) | (unsigned int)(v4 >> 2);
        v4 = v5;
        v5 = v6;
    }
    for (v7 = 40; v7 < 60; v7 += 1)
    {
        v6 = ((unsigned int)(v5 * 32) | (unsigned int)(v5 >> 27)) + (v4 & v3 | v4 & v2 | v3 & v2) + v1 + v0 + 2400959708;
        v1 = v2;
        v2 = v3;
        v3 = (unsigned int)(v4 * 0x40000000) | (unsigned int)(v4 >> 2);
        v4 = v5;
        v5 = v6;
    }
    for (v7 = 60; v7 < 80; v7 += 1)
    {
        v6 = ((unsigned int)(v5 * 32) | (unsigned int)(v5 >> 27)) + (v4 ^ v3 ^ v2) + v1 + v0 + 3395469782;
        v1 = v2;
        v2 = v3;
        v3 = (unsigned int)(v4 * 0x40000000) | (unsigned int)(v4 >> 2);
        v4 = v5;
        v5 = v6;
    }
    *((unsigned int *)got.sha_info_digest) = v5 + *((int *)got.sha_info_digest);
    *((unsigned int *)(got.sha_info_digest + 4)) = v4 + *((int *)(got.sha_info_digest + 4));
    *((unsigned int *)(got.sha_info_digest + 8)) = v3 + *((int *)(got.sha_info_digest + 8));
    *((unsigned int *)(got.sha_info_digest + 12)) = v2 + *((int *)(got.sha_info_digest + 12));
    *((unsigned int *)(got.sha_info_digest + 16)) = v1 + *((int *)(got.sha_info_digest + 16));
    return got.sha_info_digest;
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

