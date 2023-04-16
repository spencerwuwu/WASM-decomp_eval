long long shift64RightJamming(unsigned long long a0, unsigned long long a1, unsigned long long *a2)
{
    unsigned long v1;  // rax
    unsigned long long v2;  // rax
    void* v4;  // rcx
    void* v5;  // rcx
    void* v6;  // rax

    if ((unsigned int)a1 != 0)
    {
        if ((unsigned int)a1 <= 63)
        {
            v2 = a0 >> ((char)a1 & 63);
            *((char *)&a1) = 0 - (char)a1;
            v4 = 0;
            *((char *)&v4) = a0 << ((char)a1 & 63) != 0;
            v5 = v4 | v2;
            *(a2) = v5;
            return v2;
        }
        v6 = 0;
        *((char *)&v6) = a0 != 0;
        *(a2) = v6;
        return v6;
    }
    *(a2) = a0;
    return v1;
}

long long mul64To128(unsigned int a0, unsigned int a1, unsigned long long *a2, unsigned long long *a3)
{
    int tmp_44;  // tmp #44
    unsigned long long v1;  // rdi
    unsigned long v2;  // rsi
    unsigned long long v3;  // rax
    unsigned long long v5;  // rsi

    v3 = __CFADD__(v1 / 0x100000000 * v2, v2 / 0x100000000 * v1) * 0x100000000;
    tmp_44 = (v1 / 0x100000000 * v2 + v2 / 0x100000000 * v1 >> 32) + v1 / 0x100000000 * v2 / 0x100000000;
    v5 = v1 * v2;
    *(a3) = v5;
    *(a2) = tmp_44 + v3 + (v5 < (v1 / 0x100000000 * v2 + v2 / 0x100000000 * v1) * 0x100000000);
    return v3;
}

extern char got.float_exception_flags;

long long float_raise(unsigned int a0)
{
    *((unsigned int *)got.float_exception_flags) = *((int *)got.float_exception_flags) | a0;
    return got.float_exception_flags;
}

long long float64_is_nan(unsigned long long a0)
{
    void* v2;  // rax

    v2 = 0;
    *((char *)&v2) = !(a0 * 2 <= -0x20000000000000);
    return v2;
}

long long float64_is_signaling_nan(unsigned long long a0)
{
    int tmp_21;  // tmp #21
    int tmp_28;  // tmp #28
    unsigned long v2;  // rax

    tmp_21 = (0x7ff8000000000000 & a0) == 0x7ff0000000000000;
    tmp_28 = a0 * 0x1000;
    v2 = (char)[D] amd64g_calculate_condition(0x5<64>, 0x20<64>, Mul(rdi<8>, 0x2000<64>), t28, cc_ndep<8>) & tmp_21;
    return v2;
}

long long extractFloat64Frac(unsigned long a0)
{
    return 4503599627370495 & a0;
}

long long extractFloat64Exp(unsigned long a0)
{
    return (unsigned int)a0 / 0x10000000000000 & 2047;
}

long long extractFloat64Sign(unsigned long a0)
{
    return a0 / 0x8000000000000000;
}

extern char countLeadingZeros32.countLeadingZerosHigh;

long long normalizeFloat64Subnormal(unsigned int a0, unsigned int *a1, unsigned long long *a2)
{
    void* v1;  // rax
    unsigned long long v2;  // rdi
    void* v3;  // r9
    unsigned int v4;  // r10d
    unsigned long long v5;  // rdi

    v1 = 0;
    *((char *)&v1) = v2 >> 32 == 0;
    v3 = 0;
    *((char *)&v3) = (v2 >> 32 == 0? (unsigned int)v2 : (unsigned int)(v2 >> 32)) < 0x10000;
    *((unsigned int *)&v3) = (unsigned int)v3 * 16;
    v4 = ...;
    v5 = ...;
    *(a2) = v5;
    *(a1) = 12 - v4;
    return 12 - v4;
}

long long packFloat64(unsigned long long a0, unsigned long long a1, unsigned long a2)
{
    return a0 * 0x8000000000000000 + a2 + a1 * 0x10000000000000;
}

extern char got.float_exception_flags;
extern char got.float_rounding_mode;

long long roundAndPackFloat64(unsigned int a0, unsigned int a1, unsigned int a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned short v0)
{
    unsigned long long v1;  // r8
    unsigned long long v2;  // rcx
    void* v3;  // rcx
    unsigned long long v4;  // cc_dep2
    void* v5;  // rdx
    unsigned int v6;  // r9
    unsigned long v7;  // rsi
    unsigned long long v8;  // rcx
    void* v11;  // rcx
    void* v12;  // rcx
    unsigned long long v13;  // rdx
    void* v14;  // rcx
    void* v15;  // rcx

    if (!(*((int *)got.float_rounding_mode) != 0))
    {
        v1 = 0x200;
        v2 = 0;
    }
    else if (*((int *)got.float_rounding_mode) == 1)
    {
        v2 = -1;
        v1 = 0;
    }
    else
    {
        v3 = 0;
        if ((unsigned int)a0 != 0)
        {
            v4 = 2;
        }
        else
        {
            v4 = 3;
        }
        *((char *)&v3) = *((int *)got.float_rounding_mode) == v4;
        v1 = (*((int *)got.float_rounding_mode) == v4? 0 : 1023);
        v2 = 0 - v3;
    }
    v6 = (unsigned int)v5 & 1023;
    if ((unsigned short)a1 >= 2045)
    {
        if ((unsigned int)v7 <= 2045)
        {
            if (v7 == 2045 && (char)[D] amd64g_calculate_condition(0x8<64>, 0x4<64>, r8<8>, rdx<8>, cc_ndep<8>))
            {
                *((char *)*((long long *)&got.float_exception_flags)) = *((char *)*((long long *)&got.float_exception_flags)) | 9;
                v8 = v2 + a0 * 0x8000000000000000;
                return 0x7ff0000000000000 + v8;
            }
            if ((!((char)[D] amd64g_calculate_condition(0x8<64>, 0x4<64>, r8<8>, rdx<8>, cc_ndep<8>)) || v7 != 2045) && (unsigned int)v7 < 0)
            {
                if ((unsigned int)v7 >= -63)
                {
                    v11 = 0;
                    *((char *)&v11) = v5 << ((char)v7 & 63) != 0;
                    v12 = v11 | v5 >> (0 - (char)v7 & 63);
                }
                else
                {
                    v12 = 0;
                    *((char *)&v12) = v5 != 0;
                }
                v5 = v12;
                v6 = (unsigned int)v12 & 1023;
                if (((unsigned short)(unsigned int)v12 & 1023) != 0)
                {
                    *((char *)*((long long *)&got.float_exception_flags)) = *((char *)*((long long *)&got.float_exception_flags)) | 4;
                }
                else
                {
                    v6 = 0;
                }
            }
        }
        else
        {
            *((char *)*((long long *)&got.float_exception_flags)) = *((char *)*((long long *)&got.float_exception_flags)) | 9;
            v8 = v2 + a0 * 0x8000000000000000;
            return 0x7ff0000000000000 + v8;
        }
    }
    if ((unsigned short)a1 < 2045 || (unsigned int)v7 <= 2045 && !((char)[D] amd64g_calculate_condition(0x8<64>, 0x4<64>, r8<8>, rdx<8>, cc_ndep<8>)) || (unsigned int)v7 <= 2045 && v7 != 2045)
    {
        if (v6 != 0)
        {
            *((char *)*((long long *)&got.float_exception_flags)) = *((char *)*((long long *)&got.float_exception_flags)) | 1;
            v13 = v5 + v1 >> 10;
            v6 ^= 0x200;
            v14 = 0;
            *((char *)&v14) = *((int *)got.float_rounding_mode) == 0 && v6 == 0;
            v15 = !(v14) & v13;
            return (a0 * 0x8000000000000000 | v15) + (v15 == 0? v15 : 0);
        }
        v13 = v5 + v1 >> 10;
        v6 ^= 0x200;
        v14 = 0;
        *((char *)&v14) = *((int *)got.float_rounding_mode) == 0 && v6 == 0;
        v15 = !(v14) & v13;
        return (a0 * 0x8000000000000000 | v15) + (v15 == 0? v15 : 0);
    }
}

long long ullong_to_double()
{
    unsigned long v1;  // rax

    return v1;
}

extern char got.a_input;
extern char got.b_input;
extern char got.endTimer;
extern char got.startTimer;
extern char got.z_output;

long long submain(unsigned long a0, unsigned long a1, unsigned short a2)
{
    char v0;  // [bp-0x40]
    unsigned int v1;  // [bp-0x38]
    void* v3;  // rbx
    unsigned long long v4;  // rax
    unsigned long long v6;  // xmm0lq
    unsigned long long v7;  // xmm1lq
    uint128_t v8;  // xmm1
    int v9;  // xmm0
    char v10;  // cl
    void* v12;  // rbp
    unsigned long long v13;  // rax
    int v15;  // xmm1
    uint128_t v16;  // xmm0
    void* v18;  // rax

    v3 = 0;
    (unsigned int)v4 = gettimeofday(&v0, NULL);
    if ((unsigned int)v4 != 0)
    {
        printf("Error return from gettimeofday: %d", (unsigned int)v4);
    }
    v6 = *((long long *)&v0);
    v7 = v1;
    *((unsigned long long *)&v8) = (unsigned long long)(v8 * 4517329193108106637 + v9);
    *((unsigned long long *)got.startTimer) = v8;
    v12 = 0;
    while (true)
    {
        v10 = float64_mul(*((long long *)(got.a_input + (v12 << 3))), *((long long *)(got.b_input + (v12 << 3))), a2) != *((long long *)(got.z_output + (v12 << 3)));
        v3 += rcx<8>;
        v12 += 1;
        if (v12 == 20)
        {
            break;
        }
    }
    (unsigned int)v13 = gettimeofday(&v0, NULL);
    if ((unsigned int)v13 != 0)
    {
        printf("Error return from gettimeofday: %d", (unsigned int)v13);
        v15 = 0;
        *((unsigned long long *)&v15) = *((long long *)&v0);
        v16 = 0;
        *((unsigned long long *)&v16) = v1;
        *((unsigned long long *)&v16) = (unsigned long long)(v16 * 4517329193108106637 + v15);
        *((unsigned long long *)*((long long *)&got.endTimer)) = v16;
        printf("%0.6f\n");
        v18 = v3;
        return v18;
    }
    v15 = 0;
    *((unsigned long long *)&v15) = *((long long *)&v0);
    v16 = 0;
    *((unsigned long long *)&v16) = v1;
    *((unsigned long long *)&v16) = (unsigned long long)(v16 * 4517329193108106637 + v15);
    *((unsigned long long *)*((long long *)&got.endTimer)) = v16;
    printf("%0.6f\n");
    v18 = v3;
    return v18;
}

