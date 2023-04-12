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

long long add128(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long long *a4, unsigned long long *a5)
{
    int tmp_2;  // tmp #2
    unsigned long v2;  // rax

    tmp_2 = a1;
    *(a5) = a1 + a3;
    *(a4) = a0 + a2 + ((tmp_2 + a3 <= tmp_2? 1 : 0) & 1);
    return v2;
}

long long sub128(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long long *a4, unsigned long long *a5)
{
    int tmp_2;  // tmp #2
    unsigned long v2;  // rax

    tmp_2 = a1;
    *(a5) = a1 - a3;
    *(a4) = a0 - a2 - (tmp_2 < a3);
    return v2;
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

long long packFloat64(unsigned long long a0, unsigned long long a1, unsigned long a2)
{
    return a0 * 0x8000000000000000 + a2 + a1 * 0x10000000000000;
}

extern char countLeadingZeros32.countLeadingZerosHigh;

long long int32_to_float64(unsigned int a0)
{
    int tmp_115;  // tmp #115
    int tmp_128;  // tmp #128
    int tmp_141;  // tmp #141
    unsigned long v1;  // rdi
    void* v2;  // rdi
    char v3;  // cl
    unsigned long v5;  // rax

    if ((unsigned int)v1 != 0)
    {
        tmp_115 = v1 / 0x80000000;
        tmp_128 = ((unsigned int)(0 - v1) < 0? (unsigned int)v1 : 0 - (unsigned int)v1);
        tmp_141 = ((unsigned int)(0 - v1) < 0? (unsigned int)v1 : 0 - (unsigned int)v1);
        v2 = 0;
        *((char *)&v2) = (unsigned int)tmp_128 < 0x10000;
        *((unsigned int *)&v2) = (unsigned int)v2 * 16;
        v3 = (0x1000000 <= (0x10000 <= (unsigned int)tmp_128? (unsigned int)tmp_128 : (unsigned int)(tmp_141 << 16))? (unsigned int)v2 : (unsigned int)(v2 + 8)) + *((int *)&((char *)&countLeadingZeros32.countLeadingZerosHigh)[4 * ((0x1000000 <= (0x10000 <= (unsigned int)tmp_128? (unsigned int)tmp_128 : (unsigned int)(tmp_141 << 16))? (0x10000 <= (unsigned int)tmp_128? (unsigned int)tmp_128 : (unsigned int)(tmp_141 << 16)) : (unsigned int)((0x10000 <= (unsigned int)tmp_128? (unsigned int)tmp_128 : (unsigned int)(tmp_141 << 16)) << 8)) >> 24)]);
        v5 = ...;
        return v5;
    }
    return 0;
}

extern char countLeadingZeros32.countLeadingZerosHigh;
extern char got.float_exception_flags;
extern char got.float_rounding_mode;

int float64_add(unsigned long long a0, unsigned long long a1, unsigned short a2)
{
    char v0;  // [bp+0x0]
    unsigned int v2;  // eax
    unsigned long long v3;  // r8
    unsigned int v4;  // r10
    unsigned long long v5;  // r9
    unsigned long long v7;  // rsi
    unsigned long v8;  // rdx
    unsigned long long v10;  // r9
    unsigned long long v11;  // rdx
    unsigned long long v12;  // r11
    void* v13;  // rcx
    void* v14;  // rsi
    unsigned long long v16;  // r9
    void* v17;  // rsi
    unsigned long long v19;  // r9
    unsigned long long v20;  // r11
    void* v21;  // rcx
    unsigned long long v22;  // r8
    void* v23;  // rcx
    void* v24;  // rsi
    unsigned long long v26;  // r9
    void* v28;  // rcx
    unsigned long v29;  // rdx
    void* v30;  // rsi
    void* v31;  // rcx
    void* v32;  // rcx
    unsigned long v33;  // rdi
    void* v34;  // rcx
    unsigned long long v35;  // rdx
    void* v36;  // rdi
    unsigned long long v37;  // rdx
    unsigned int v38;  // eax
    unsigned int v39;  // ecx
    void* v40;  // r8
    void* v41;  // r8
    unsigned long long v42;  // r9
    unsigned long long v43;  // rcx
    unsigned long long v45;  // rdx
    unsigned long long v46;  // r8
    unsigned long long v47;  // rsi
    unsigned int v49;  // eax

    v2 = (unsigned int)a0 / 0x8000000000000000;
    v3 = (unsigned int)a0 / 0x10000000000000 & 2047;
    v4 = (unsigned int)a1 / 0x10000000000000 & 2047;
    v5 = ((unsigned int)a0 / 0x10000000000000 & 2047) - ((unsigned int)a1 / 0x10000000000000 & 2047);
    if ((unsigned int)(a0 >> 63) == (unsigned int)(a1 >> 63))
    {
        v12 = a0 * 0x200 & 0x1ffffffffffffe00;
        v11 = a1 * 0x200 & 0x1ffffffffffffe00;
        if ((unsigned int)v5 > 0)
        {
            if (((unsigned short)(a0 >> 52) & 2047) != 2047)
            {
                v7 = 0;
                *((char *)&v7) = v4 == 0;
                v8 = (v4 != 0? a1 * 0x200 & 0x1ffffffffffffe00 | 0x2000000000000000 : rdx<8>);
                v10 = v5 - v7;
                if ((unsigned int)v5 != (unsigned int)v7)
                {
                    *((unsigned int *)&a0) = (unsigned int)a0 / 0x8000000000000000;
                    roundAndPackFloat64(rdi<4>, r8<8>, rdx<4>, a1 * 0x200 & 0x1ffffffffffffe00 | 0x2000000000000000, r8<8>, r9<8>, *((short *)stack_base));
                    return (unsigned int)a0 / 0x8000000000000000;
                }
                v20 = (a0 * 0x200 & 0x1ffffffffffffe00 | 0x2000000000000000) + rdx<8>;
                v21 = 0;
                *((char *)&v21) = [D] amd64g_calculate_condition(0x9<64>, 0x4<64>, r11<8>, r11<8>, cc_ndep<8>);
                *((unsigned int *)&v8) = ((char)[D] amd64g_calculate_condition(0x8<64>, 0x4<64>, r11<8>, r11<8>, cc_ndep<8>)? v20 : v20 << 1);
                v22 = ((unsigned int)a0 / 0x10000000000000 & 2047) - v21;
                *((unsigned int *)&a0) = (unsigned int)a0 / 0x8000000000000000;
                *((unsigned int *)&v7) = r8<8>;
                roundAndPackFloat64(a0, v7, v8, v21, v22, v10, *((short *)&v0));
                return roundAndPackFloat64(a0, v7, v8, v21, v22, v10, *((short *)&v0));
            }
        }
        else
        {
            if (v5 >= 0)
            {
                if (((unsigned short)(a0 >> 52) & 2047) != 0)
                {
                    if (((unsigned short)(a0 >> 52) & 2047) != 2047)
                    {
                        *((unsigned int *)&v11) = (a0 * 0x200 & 0x1ffffffffffffe00 | 0x4000000000000000) + (a1 * 0x200 & 0x1ffffffffffffe00);
                        *((unsigned int *)&a0) = (unsigned int)a0 / 0x8000000000000000;
                        *((unsigned int *)&v7) = r8<8>;
                        roundAndPackFloat64(a0, v7, v11, 0x4000000000000000, v3, v5, *((short *)&v0));
                        return roundAndPackFloat64(a0, v7, v11, 0x4000000000000000, v3, v5, *((short *)&v0));
                    }
                    if (((unsigned short)(a0 >> 52) & 2047) == 2047 && (a0 << 9 & 0x1ffffffffffffe00) == 0 && (a1 << 9 & 0x1ffffffffffffe00) == 0)
                    {
                        return a0;
                    }
                }
                else
                {
                    *((unsigned int *)&a0) = a0 & 0x8000000000000000 | (a1 * 0x200 & 0x1ffffffffffffe00) + (a0 * 0x200 & 0x1ffffffffffffe00) >> 9;
                    return a0;
                }
            }
            else
            {
                if (!(((unsigned short)(a1 >> 52) & 2047) == 2047))
                {
                    v17 = 0;
                    *((char *)&v17) = (unsigned int)v3 == 0;
                    v19 = v5 + v17;
                    if (!((unsigned int)(v5 + v17) == 0))
                    {
                        *((unsigned int *)&a0) = (unsigned int)a0 / 0x8000000000000000;
                        roundAndPackFloat64(rdi<4>, r8<8>, a1 * 0x200 & 0x1ffffffffffffe00, rcx<8>, r8<8>, r9<8>, *((short *)stack_base));
                        return (unsigned int)a0 / 0x8000000000000000;
                    }
                    v20 = (((unsigned int)v3 != 0? a0 << 9 & 0x1ffffffffffffe00 | 0x2000000000000000 : a0 << 9 & 0x1ffffffffffffe00) | 0x2000000000000000) + rdx<8>;
                    v21 = 0;
                    *((char *)&v21) = [D] amd64g_calculate_condition(0x9<64>, 0x4<64>, r11<8>, r11<8>, cc_ndep<8>);
                    *((unsigned int *)&v8) = ((char)[D] amd64g_calculate_condition(0x8<64>, 0x4<64>, r11<8>, r11<8>, cc_ndep<8>)? v20 : v20 << 1);
                    v22 = v4 - v21;
                    *((unsigned int *)&a0) = (unsigned int)a0 / 0x8000000000000000;
                    roundAndPackFloat64(rdi<4>, r8<8>, rdx<4>, rcx<8>, r8<8>, r9<8>, *((short *)stack_base));
                    return (unsigned int)a0 / 0x8000000000000000;
                }
                else if ((a1 << 9 & 0x1ffffffffffffe00) == 0)
                {
                    *((unsigned int *)&a0) = a0 & 0x8000000000000000 | 0x7ff0000000000000;
                    return a0;
                }
            }
        }
    }
    else
    {
        v12 = a0 * 0x400 & 0x3ffffffffffffc00;
        v11 = a1 * 0x400 & 0x3ffffffffffffc00;
        if ((unsigned int)v5 > 0)
        {
            if (((unsigned short)(a0 >> 52) & 2047) != 2047)
            {
                v13 = 0;
                *((char *)&v13) = v4 == 0;
                v14 = (v4 == 0? a1 << 10 & 0x3ffffffffffffc00 : a1 << 10 & 0x3ffffffffffffc00 | 0x4000000000000000);
                v16 = v5 - v13;
                if ((unsigned int)v5 != (unsigned int)v13)
                {
                    if ((unsigned int)v16 <= 63)
                    {
                        v29 = (v4 == 0? v11 : v11 | 0x4000000000000000) >> ((char)v16 & 63);
                        *((char *)&v16) = 0 - (char)v16;
                        v30 = v14 << ((char)v16 & 63);
                        v31 = 0;
                        *((char *)&v31) = v30 != 0;
                        v28 = v31 | v29;
                    }
                    else
                    {
                        v28 = 0;
                        *((char *)&v28) = v14 != 0;
                    }
                    v14 = v28;
                }
                v4 = (unsigned int)a0 / 0x10000000000000 & 2047;
                v35 = (a0 * 0x400 & 0x3ffffffffffffc00 | 0x4000000000000000) - v14;
                v39 = 0;
                *((char *)&v39) = [D] amd64g_calculate_condition(0x5<64>, 0x24<64>, Shr(rdx<8>, 0x20<8>), Shr(rdx<8>, 0x1f<8>), cc_ndep<8>);
                v40 = 0;
                *((char *)&v40) = (rdx<8> >> 32 == 0? rdx<8> : rdx<8> >> 32) < 0x10000;
                v41 = v40 * 16;
                v42 = (0x1000000 <= (0x10000 <= (rdx<8> >> 32 == 0? rdx<8> : rdx<8> >> 32)? (rdx<8> >> 32 == 0? rdx<8> : rdx<8> >> 32) : (unsigned int)((rdx<8> >> 32 == 0? rdx<8> : rdx<8> >> 32) << 16))? (0x10000 <= (rdx<8> >> 32 == 0? rdx<8> : rdx<8> >> 32)? (rdx<8> >> 32 == 0? rdx<8> : rdx<8> >> 32) : (unsigned int)((rdx<8> >> 32 == 0? rdx<8> : rdx<8> >> 32) << 16)) : (unsigned int)((0x10000 <= (rdx<8> >> 32 == 0? rdx<8> : rdx<8> >> 32)? (rdx<8> >> 32 == 0? rdx<8> : rdx<8> >> 32) : (unsigned int)((rdx<8> >> 32 == 0? rdx<8> : rdx<8> >> 32) << 16)) << 8)) >> 24;
                v43 = ...;
                *((unsigned int *)&v35) = rdx<8> << ((char)v43 & 63);
                roundAndPackFloat64(eax<4>, !((unsigned int)v43) + v4, rdx<4>, rcx<8>, r8<8>, r9<8>, *((short *)stack_base));
                return (unsigned int)a0 / 0x8000000000000000;
            }
        }
        else
        {
            if (v5 >= 0)
            {
                if (((unsigned short)(a0 >> 52) & 2047) != 0)
                {
                    if ((a1 << 10 & 0x3ffffffffffffc00) == 0 && ((unsigned short)(a0 >> 52) & 2047) == 2047 && (a0 << 10 & 0x3ffffffffffffc00) == 0)
                    {
                        *((char *)*((long long *)&got.float_exception_flags)) = *((char *)*((long long *)&got.float_exception_flags)) | 16;
                        return -1;
                    }
                }
                else
                {
                    *((unsigned int *)&v3) = 1;
                    v4 = 1;
                }
                if (((unsigned short)(a0 >> 52) & 2047) == 0 || ((unsigned short)(a0 >> 52) & 2047) != 2047)
                {
                    if ((a1 << 10 & 0x3ffffffffffffc00) < (a0 << 10 & 0x3ffffffffffffc00))
                    {
                        v4 = v3;
                        v35 = (a0 * 0x400 & 0x3ffffffffffffc00) - v11;
                        v39 = 0;
                        *((char *)&v39) = [D] amd64g_calculate_condition(0x5<64>, 0x24<64>, Shr(rdx<8>, 0x20<8>), Shr(rdx<8>, 0x1f<8>), cc_ndep<8>);
                        v40 = 0;
                        *((char *)&v40) = (rdx<8> >> 32 == 0? rdx<8> : rdx<8> >> 32) < 0x10000;
                        v41 = v40 * 16;
                        v42 = (0x1000000 <= (0x10000 <= (rdx<8> >> 32 == 0? rdx<8> : rdx<8> >> 32)? (rdx<8> >> 32 == 0? rdx<8> : rdx<8> >> 32) : (unsigned int)((rdx<8> >> 32 == 0? rdx<8> : rdx<8> >> 32) << 16))? (0x10000 <= (rdx<8> >> 32 == 0? rdx<8> : rdx<8> >> 32)? (rdx<8> >> 32 == 0? rdx<8> : rdx<8> >> 32) : (unsigned int)((rdx<8> >> 32 == 0? rdx<8> : rdx<8> >> 32) << 16)) : (unsigned int)((0x10000 <= (rdx<8> >> 32 == 0? rdx<8> : rdx<8> >> 32)? (rdx<8> >> 32 == 0? rdx<8> : rdx<8> >> 32) : (unsigned int)((rdx<8> >> 32 == 0? rdx<8> : rdx<8> >> 32) << 16)) << 8)) >> 24;
                        v43 = ...;
                        *((unsigned int *)&v35) = rdx<8> << ((char)v43 & 63);
                        *((unsigned int *)&a1) = !((unsigned int)v43) + v4;
                        *((unsigned int *)&a0) = (unsigned int)a0 / 0x8000000000000000;
                        roundAndPackFloat64(a0, v7, v8, v21, v22, v10, *((short *)&v0));
                        return roundAndPackFloat64(a0, v7, v8, v21, v22, v10, *((short *)&v0));
                    }
                    if ((char)[D] amd64g_calculate_condition(0x6<64>, 0x8<64>, And((rsi<8> << 0xa<8>), 0x3ffffffffffffc00<64>), And((rdi<8> << 0xa<8>), 0x3ffffffffffffc00<64>), cc_ndep<8>))
                    {
                        v36 = 0;
                        *((char *)&v36) = *((int *)got.float_rounding_mode) == 3;
                        *((unsigned int *)&v36) = (unsigned int)v36 * 0x8000000000000000;
                        return a0;
                    }
                    v37 = rdx<8> - v12;
                    v38 = v2 ^ 1;
                    v39 = 0;
                    *((char *)&v39) = [D] amd64g_calculate_condition(0x5<64>, 0x24<64>, Shr(rdx<8>, 0x20<8>), Shr(rdx<8>, 0x1f<8>), cc_ndep<8>);
                    v40 = 0;
                    *((char *)&v40) = (rdx<8> >> 32 == 0? rdx<8> : rdx<8> >> 32) < 0x10000;
                    v41 = v40 * 16;
                    v42 = (0x1000000 <= (0x10000 <= (rdx<8> >> 32 == 0? rdx<8> : rdx<8> >> 32)? (rdx<8> >> 32 == 0? rdx<8> : rdx<8> >> 32) : (unsigned int)((rdx<8> >> 32 == 0? rdx<8> : rdx<8> >> 32) << 16))? (0x10000 <= (rdx<8> >> 32 == 0? rdx<8> : rdx<8> >> 32)? (rdx<8> >> 32 == 0? rdx<8> : rdx<8> >> 32) : (unsigned int)((rdx<8> >> 32 == 0? rdx<8> : rdx<8> >> 32) << 16)) : (unsigned int)((0x10000 <= (rdx<8> >> 32 == 0? rdx<8> : rdx<8> >> 32)? (rdx<8> >> 32 == 0? rdx<8> : rdx<8> >> 32) : (unsigned int)((rdx<8> >> 32 == 0? rdx<8> : rdx<8> >> 32) << 16)) << 8)) >> 24;
                    v43 = ...;
                    *((unsigned int *)&v35) = rdx<8> << ((char)v43 & 63);
                    *((unsigned int *)&a1) = !((unsigned int)v43) + v4;
                    roundAndPackFloat64(eax<4>, a1, v35, v43, v41, v42, *((short *)&v0));
                    return roundAndPackFloat64(a0, v7, v8, v21, v22, v10, *((short *)&v0));
                }
            }
            else if (!(((unsigned short)(a1 >> 52) & 2047) == 2047))
            {
                v23 = 0;
                *((char *)&v23) = (unsigned int)v3 == 0;
                v24 = ((unsigned int)v3 == 0? a0 << 10 & 0x3ffffffffffffc00 : a0 << 10 & 0x3ffffffffffffc00 | 0x4000000000000000);
                v26 = v5 + v23;
                if (!((unsigned int)(v5 + v23) == 0))
                {
                    if ((unsigned int)v26 >= -63)
                    {
                        v33 = ((unsigned int)v3 == 0? a0 << 10 & 0x3ffffffffffffc00 : a0 << 10 & 0x3ffffffffffffc00 | 0x4000000000000000) >> ((char)(0 - (unsigned int)v26) & 63);
                        v34 = 0;
                        *((char *)&v34) = ((unsigned int)v3 == 0? v12 : v12 | 0x4000000000000000) << ((char)v26 & 63) != 0;
                        v32 = v34 | v33;
                    }
                    else
                    {
                        v32 = 0;
                        *((char *)&v32) = ((unsigned int)v3 == 0? a0 << 10 & 0x3ffffffffffffc00 : a0 << 10 & 0x3ffffffffffffc00 | 0x4000000000000000) != 0;
                    }
                    v24 = v32;
                }
                v45 = v11 | 0x4000000000000000;
                v37 = rdx<8> - v24;
                v38 = v2 ^ 1;
                v39 = 0;
                *((char *)&v39) = [D] amd64g_calculate_condition(0x5<64>, 0x24<64>, Shr(rdx<8>, 0x20<8>), Shr(rdx<8>, 0x1f<8>), cc_ndep<8>);
                v40 = 0;
                *((char *)&v40) = (rdx<8> >> 32 == 0? rdx<8> : rdx<8> >> 32) < 0x10000;
                v41 = v40 * 16;
                v42 = (0x1000000 <= (0x10000 <= (rdx<8> >> 32 == 0? rdx<8> : rdx<8> >> 32)? (rdx<8> >> 32 == 0? rdx<8> : rdx<8> >> 32) : (unsigned int)((rdx<8> >> 32 == 0? rdx<8> : rdx<8> >> 32) << 16))? (0x10000 <= (rdx<8> >> 32 == 0? rdx<8> : rdx<8> >> 32)? (rdx<8> >> 32 == 0? rdx<8> : rdx<8> >> 32) : (unsigned int)((rdx<8> >> 32 == 0? rdx<8> : rdx<8> >> 32) << 16)) : (unsigned int)((0x10000 <= (rdx<8> >> 32 == 0? rdx<8> : rdx<8> >> 32)? (rdx<8> >> 32 == 0? rdx<8> : rdx<8> >> 32) : (unsigned int)((rdx<8> >> 32 == 0? rdx<8> : rdx<8> >> 32) << 16)) << 8)) >> 24;
                v43 = ...;
                *((unsigned int *)&v35) = rdx<8> << ((char)v43 & 63);
                roundAndPackFloat64(eax<4>, !((unsigned int)v43) + r10<8>, rdx<4>, rcx<8>, r8<8>, r9<8>, *((short *)stack_base));
                return v49;
            }
            else if ((a1 << 10 & 0x3ffffffffffffc00) == 0)
            {
                *((unsigned int *)&a0) = 0x7ff0000000000000 | !((unsigned int)a0 / 0x8000000000000000) * 0x8000000000000000;
                return a0;
            }
        }
    }
    if (((unsigned short)(a0 >> 52) & 2047) == 2047 && (unsigned int)v5 > 0 && v12 == 0)
    {
        return a0;
    }
    if (v5 < 0 && (unsigned int)v5 <= 0 && (unsigned int)(a0 >> 63) == (unsigned int)(a1 >> 63) && ((unsigned short)(a1 >> 52) & 2047) == 2047 && (a1 << 9 & 0x1ffffffffffffe00) != 0 || ((unsigned short)(a0 >> 52) & 2047) == 2047 && (unsigned int)v5 <= 0 && (unsigned int)(a0 >> 63) == (unsigned int)(a1 >> 63) && v5 >= 0 && ((unsigned short)(a0 >> 52) & 2047) != 0 && !((a1 << 9 & 0x1ffffffffffffe00) == 0 && (a0 << 9 & 0x1ffffffffffffe00) == 0) || v5 < 0 && (unsigned int)v5 <= 0 && ((unsigned short)(a1 >> 52) & 2047) == 2047 && (unsigned int)(a0 >> 63) != (unsigned int)(a1 >> 63) && (a1 << 10 & 0x3ffffffffffffc00) != 0 || ((unsigned short)(a0 >> 52) & 2047) == 2047 && (unsigned int)v5 <= 0 && v5 >= 0 && (unsigned int)(a0 >> 63) != (unsigned int)(a1 >> 63) && ((unsigned short)(a0 >> 52) & 2047) != 0 && !((a1 << 10 & 0x3ffffffffffffc00) == 0 && (a0 << 10 & 0x3ffffffffffffc00) == 0) || ((unsigned short)(a0 >> 52) & 2047) == 2047 && (unsigned int)v5 > 0 && v12 != 0)
    {
        *((char *)&v11) = (char)[D] amd64g_calculate_condition(0x5<64>, 0x20<64>, Shl(rsi<8>, 0xd<8>), Shl(rsi<8>, 0xc<8>), cc_ndep<8>) & (0x7ff8000000000000 & a1) == 0x7ff0000000000000;
        if (((char)[D] amd64g_calculate_condition(0x5<64>, 0x20<64>, Shl(rsi<8>, 0xd<8>), Shl(rsi<8>, 0xc<8>), cc_ndep<8>) & (a0 & 0x7ff8000000000000) == 0x7ff0000000000000) == 0 && ((char)[D] amd64g_calculate_condition(0x5<64>, 0x20<64>, Shl(rsi<8>, 0xd<8>), Shl(rsi<8>, 0xc<8>), cc_ndep<8>) & (0x7ff8000000000000 & a1) == 0x7ff0000000000000) == 0)
        {
            v46 = a1 | 0x8000000000000;
            v47 = a1 * 2;
            *((unsigned int *)&a0) = ((char)v11 != 0? v46 : (((char)[D] amd64g_calculate_condition(0x5<64>, 0x20<64>, Shl(rdi<8>, 0xd<8>), Shl(rdi<8>, 0xc<8>), cc_ndep<8>) & (a0 & 0x7ff8000000000000) == 0x7ff0000000000000) != 0? rdi<8> | 0x8000000000000 : (v47 < -9007199254740991? rdi<8> | 0x8000000000000 : v46)));
            return a0;
        }
        if (((char)[D] amd64g_calculate_condition(0x5<64>, 0x20<64>, Shl(rsi<8>, 0xd<8>), Shl(rsi<8>, 0xc<8>), cc_ndep<8>) & (0x7ff8000000000000 & a1) == 0x7ff0000000000000) != 0 || ((char)[D] amd64g_calculate_condition(0x5<64>, 0x20<64>, Shl(rsi<8>, 0xd<8>), Shl(rsi<8>, 0xc<8>), cc_ndep<8>) & (a0 & 0x7ff8000000000000) == 0x7ff0000000000000) != 0)
        {
            *((char *)*((long long *)&got.float_exception_flags)) = *((char *)*((long long *)&got.float_exception_flags)) | 16;
            v46 = a1 | 0x8000000000000;
            v47 = a1 * 2;
            *((unsigned int *)&a0) = ((char)v11 != 0? v46 : (((char)[D] amd64g_calculate_condition(0x5<64>, 0x20<64>, Shl(rdi<8>, 0xd<8>), Shl(rdi<8>, 0xc<8>), cc_ndep<8>) & (a0 & 0x7ff8000000000000) == 0x7ff0000000000000) != 0? rdi<8> | 0x8000000000000 : (v47 < -9007199254740991? rdi<8> | 0x8000000000000 : v46)));
            return a0;
        }
    }
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

extern char got.float_exception_flags;

long long float64_le(unsigned long a0, unsigned long long a1)
{
    if ((0x7ff0000000000000 & !(a0)) == 0 && (a0 & 4503599627370495) != 0)
    {
        *((char *)*((long long *)&got.float_exception_flags)) = *((char *)*((long long *)&got.float_exception_flags)) | 16;
        return 0;
    }
    if ((a0 & 4503599627370495) == 0 || (0x7ff0000000000000 & !(a0)) != 0)
    {
        if ((!(a1) & 0x7ff0000000000000) == 0 && (4503599627370495 & a1) != 0)
        {
            *((char *)*((long long *)&got.float_exception_flags)) = *((char *)*((long long *)&got.float_exception_flags)) | 16;
            return 0;
        }
        if ((4503599627370495 & a1) == 0 || (!(a1) & 0x7ff0000000000000) != 0)
        {
            if ((unsigned int)(a0 >> 63) == (unsigned int)(a1 >> 63))
            {
                return (char)[D] amd64g_calculate_condition(0x5<64>, 0xf<64>, Shr(rdi<8>, 0x3f<8>), Conv(1->64, (rdi<8> < rsi<8>)), Conv(1->64, (rdi<8> < rsi<8>))) | a0 == a1;
            }
            return (a1 | a0) * 2 == 0 | a0 < 0;
        }
    }
}

extern char got.float_exception_flags;

long long float64_ge(unsigned long long a0, unsigned long a1)
{
    if ((0x7ff0000000000000 & !(a1)) == 0 && (a1 & 4503599627370495) != 0)
    {
        *((char *)*((long long *)&got.float_exception_flags)) = *((char *)*((long long *)&got.float_exception_flags)) | 16;
        return 0;
    }
    if ((a1 & 4503599627370495) == 0 || (0x7ff0000000000000 & !(a1)) != 0)
    {
        if ((!(a0) & 0x7ff0000000000000) == 0 && (4503599627370495 & a0) != 0)
        {
            *((char *)*((long long *)&got.float_exception_flags)) = *((char *)*((long long *)&got.float_exception_flags)) | 16;
            return 0;
        }
        if ((4503599627370495 & a0) == 0 || (!(a0) & 0x7ff0000000000000) != 0)
        {
            if ((unsigned int)(a1 >> 63) == (unsigned int)(a0 >> 63))
            {
                return (char)[D] amd64g_calculate_condition(0x5<64>, 0xf<64>, Shr(rsi<8>, 0x3f<8>), Conv(1->64, (rsi<8> < rdi<8>)), Conv(1->64, (rsi<8> < rdi<8>))) | a1 == a0;
            }
            return (a0 | a1) * 2 == 0 | a1 < 0;
        }
    }
}

long long float64_neg(unsigned long a0)
{
    return 0x8000000000000000 ^ a0;
}

long long float64_abs(unsigned long a0)
{
    return 9223372036854775807 & a0;
}

extern char countLeadingZeros32.countLeadingZerosHigh;
extern char got.float_exception_flags;

int local_sin(unsigned long long a0, unsigned long a1, unsigned short a2)
{
    unsigned long v0;  // [bp-0x38]
    unsigned long v1;  // [bp-0x18]
    unsigned long v3;  // rax
    unsigned long long v4;  // r15
    unsigned long long v6;  // rbp

    v0 = v3;
    v4 = a0;
    v6 = 1;
    while (true)
    {
        v4 = float64_div(float64_mul(v4, 0x8000000000000000 ^ float64_mul(a0, a0, a2), a2), ..., ...);
        if ((!(v4) & 0x7ff0000000000000) == 0 && (v4 & 4503599627370495) != 0)
        {
            *((char *)got.float_exception_flags) = *((char *)got.float_exception_flags) | 16;
            return v1;
        }
        if ((v4 & 4503599627370495) == 0 || (!(v4) & 0x7ff0000000000000) != 0)
        {
            v6 += 1;
            if ((v4 & 9223372036854775807) > 4532020583610935536)
            {
                continue;
            }
            return v1;
        }
    }
}

long long ullong_to_double()
{
    unsigned long v1;  // rax

    return v1;
}

extern char got.endTimer;
extern char got.startTimer;
extern char got.test_in;
extern char got.test_out;

long long submain(unsigned long a0, unsigned int a1, unsigned short a2)
{
    char v0;  // [bp-0x38]
    unsigned int v1;  // [bp-0x30]
    void* v3;  // rbx
    unsigned long long v4;  // rax
    unsigned long long v6;  // xmm0lq
    unsigned long long v7;  // xmm1lq
    uint128_t v8;  // xmm1
    int v9;  // xmm0
    char v10;  // cl
    void* v12;  // r13
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
        v10 = local_sin(*((long long *)(got.test_in + (v12 << 3))), a1, a2) != *((long long *)(got.test_out + (v12 << 3)));
        v3 += rcx<8>;
        v12 += 1;
        if (v12 == 36)
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

