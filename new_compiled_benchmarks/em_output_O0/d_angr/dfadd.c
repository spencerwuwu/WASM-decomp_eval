int shift64RightJamming(unsigned long a0, unsigned int a1, unsigned long long *a2)
{
    unsigned long v0;  // [bp-0x28]

    if (a1 == 0)
    {
        v0 = a0;
        *(a2) = v0;
        return (unsigned int)a2;
    }
    if (a1 < 64)
    {
        v0 = a0 >> ((char)a1 & 63) | a0 << ((char)(0 - a1 & 63) & 63) != 0;
        *(a2) = v0;
        return (unsigned int)a2;
    }
    v0 = a0 != 0;
    *(a2) = v0;
    return (unsigned int)a2;
}

extern char got.float_exception_flags;

int float_raise(unsigned int a0)
{
    *((unsigned int *)got.float_exception_flags) = a0 | *((int *)got.float_exception_flags);
    return got.float_exception_flags;
}

int float64_is_nan(unsigned long a0)
{
    return -0x20000000000000 < a0 * 2;
}

int float64_is_signaling_nan(unsigned long a0)
{
    char v0;  // [bp-0x11]

    v0 = 0;
    if (((unsigned short)(a0 >> 51) & 4095) == 4094)
    {
        v0 = (2251799813685247 & a0) != 0;
        return v0 & 1;
    }
    return v0 & 1;
}

int extractFloat64Frac(unsigned long a0)
{
    return 4503599627370495 & a0;
}

int extractFloat64Exp(unsigned long a0)
{
    return a0 / 0x10000000000000 & 2047;
}

int extractFloat64Sign(unsigned long a0)
{
    return (unsigned int)a0 / 0x8000000000000000;
}

int packFloat64(unsigned int a0, unsigned int a1, unsigned long a2)
{
    return a0 * 0x8000000000000000 + a1 * 0x10000000000000 + a2;
}

extern char got.float_exception_flags;
extern char got.float_rounding_mode;

int roundAndPackFloat64(unsigned int a0, unsigned int a1, unsigned int a2)
{
    unsigned int v0;  // [bp-0x34]
    unsigned int v1;  // [bp-0x30]
    unsigned int v2;  // [bp-0x2c]
    unsigned int v3;  // [bp-0x28]
    unsigned int v4;  // [bp-0x24]
    unsigned int v5;  // [bp-0x20], Other Possible Types: unsigned long long
    unsigned int v6;  // [bp-0x18]
    unsigned long v7;  // [bp-0x10]
    unsigned long long v11;  // rax

    v6 = a1;
    v5 = a2;
    v4 = *((int *)got.float_rounding_mode);
    v3 = v4 == 0;
    v1 = 0x200;
    if (v3 == 0)
    {
        if (v4 == 1)
        {
            v1 = 0;
        }
        else
        {
            v1 = 1023;
            if (a0 != 0)
            {
                if (v4 == 2)
                {
                    v1 = 0;
                }
            }
            else
            {
                if (v4 == 3)
                {
                    v1 = 0;
                }
            }
        }
    }
    v0 = *((long long *)&v5) & 1023;
    if (2045 <= v6)
    {
        if (2045 >= v6)
        {
            if (v6 == 2045 && *((long long *)&v5) + v1 < 0)
            {
                float_raise(0x9);
                packFloat64(a0, 0x7ff, 0x0);
                v11 = packFloat64(a0, 0x7ff, 0x0) - (v1 == 0);
                v7 = v11;
                return v7;
            }
            if ((v6 != 2045 || *((long long *)&v5) + v1 >= 0) && v6 < 0)
            {
                v2 = 1;
                shift64RightJamming(*((long long *)&v5), 0 - v6, &v5);
                v6 = 0;
                v0 = *((long long *)&v5) & 1023;
                if (v2 != 0 && v0 != 0)
                {
                    float_raise(0x4);
                }
            }
        }
        else
        {
            float_raise(0x9);
            packFloat64(a0, 0x7ff, 0x0);
            v11 = packFloat64(a0, 0x7ff, 0x0) - (v1 == 0);
            v7 = v11;
            return v7;
        }
    }
    if (2045 > v6 || 2045 >= v6 && v6 != 2045 || 2045 >= v6 && *((long long *)&v5) + v1 >= 0)
    {
        if (v0 != 0)
        {
            *((int *)got.float_exception_flags) = *((int *)got.float_exception_flags) | 1;
        }
        v5 = *((long long *)&v5) + v1 >> 10;
        *((unsigned long long *)&v5) = ((v0 ^ 0x200) == 0 & v3 ^ -1) & v5;
        if (*((long long *)&v5) == 0)
        {
            v6 = 0;
            packFloat64(a0, v6, *((long long *)&v5));
            v7 = packFloat64(a0, v6, *((long long *)&v5));
            return v7;
        }
        packFloat64(a0, v6, *((long long *)&v5));
        v7 = packFloat64(a0, v6, *((long long *)&v5));
        return v7;
    }
}

int normalizeRoundAndPackFloat64(unsigned int a0, unsigned int a1, unsigned long long a2)
{
    unsigned int v0;  // [bp-0x1c]

    v0 = countLeadingZeros64(a2) - 1;
    return roundAndPackFloat64(a0, a1 - v0, a2 << ((char)v0 & 63));
}

int countLeadingZeros64(unsigned long a0)
{
    unsigned int v0;  // [bp-0x14]
    unsigned long long v1;  // [bp-0x10], Other Possible Types: unsigned long

    v1 = a0;
    v0 = 0;
    if (v1 < 0x100000000)
    {
        v0 += 32;
        countLeadingZeros32(v1);
        v0 = countLeadingZeros32(v1) + v0;
        return v0;
    }
    v1 >>= 32;
    countLeadingZeros32(v1);
    v0 = countLeadingZeros32(v1) + v0;
    return v0;
}

int addFloat64Sigs(unsigned long a0, unsigned long a1, unsigned int a2)
{
    unsigned int v0;  // [bp-0x4c]
    unsigned long v1;  // [bp-0x48]
    unsigned long long v2;  // [bp-0x40], Other Possible Types: unsigned int
    unsigned long long v3;  // [bp-0x38], Other Possible Types: unsigned int
    unsigned int v4;  // [bp-0x30]
    unsigned int v5;  // [bp-0x2c]
    unsigned int v6;  // [bp-0x28]
    unsigned long v7;  // [bp-0x10]

    *((unsigned long long *)&v3) = extractFloat64Frac(a0);
    v6 = extractFloat64Exp(a0);
    *((unsigned long long *)&v2) = extractFloat64Frac(a1);
    v5 = extractFloat64Exp(a1);
    v0 = v6 - v5;
    v3 = *((long long *)&v3) * 0x200;
    v2 = *((long long *)&v2) * 0x200;
    if (0 < v0)
    {
        if (v6 == 2047)
        {
            if (v3 != 0)
            {
                v7 = propagateFloat64NaN(a0, a1);
                return v7;
            }
            v7 = a0;
            return v7;
        }
        if (v5 == 0)
        {
            v0 -= 1;
        }
        else
        {
            v2 = 0x2000000000000000 | v2;
        }
        shift64RightJamming(v2, v0, &v2);
        v4 = v6;
    }
    else if (v0 < 0)
    {
        if (v5 == 2047)
        {
            if (v2 != 0)
            {
                v7 = propagateFloat64NaN(a0, a1);
                return v7;
            }
            v7 = packFloat64(a2, 0x7ff, 0x0);
            return v7;
        }
        if (v6 == 0)
        {
            v0 += 1;
        }
        else
        {
            v3 = 0x2000000000000000 | v3;
        }
        shift64RightJamming(v3, 0 - v0, &v3);
        v4 = v5;
    }
    else
    {
        if (v6 == 2047)
        {
            if (v3 != 0 || v2 != 0)
            {
                v7 = propagateFloat64NaN(a0, a1);
                return v7;
            }
            v7 = a0;
            return v7;
        }
        if (v6 == 0)
        {
            v7 = packFloat64(a2, 0x0, v3 + v2 >> 9);
            return v7;
        }
        v1 = 0x4000000000000000 + v3 + v2;
        v4 = v6;
        roundAndPackFloat64(a2, v4, v1);
        v7 = roundAndPackFloat64(a2, a1, v1);
        return v7;
    }
    if ((0 < v0 || v0 < 0) && (0 < v0 || v5 != 2047) && (0 >= v0 || v6 != 2047))
    {
        v3 = 0x2000000000000000 | v3;
        v1 = (v3 + v2) * 2;
        v4 -= 1;
        if (v1 < 0)
        {
            v1 = v3 + v2;
            v4 += 1;
        }
        roundAndPackFloat64(a2, v4, v1);
        v7 = roundAndPackFloat64(a2, v4, v1);
        return v7;
    }
}

int propagateFloat64NaN(unsigned int a0, unsigned int a1)
{
    unsigned long long v0;  // [bp-0x40]
    unsigned long long v1;  // [bp-0x38]
    unsigned long long v2;  // [bp-0x30]
    unsigned int v3;  // [bp-0x28]
    unsigned int v4;  // [bp-0x24]
    unsigned int v5;  // [bp-0x20]
    unsigned int v6;  // [bp-0x1c]
    unsigned long long v7;  // [bp-0x18], Other Possible Types: unsigned int
    unsigned int v8;  // [bp-0x10], Other Possible Types: unsigned long long

    v8 = a0;
    v7 = a1;
    v6 = float64_is_nan(*((long long *)&v8));
    v5 = float64_is_signaling_nan(*((long long *)&v8));
    v4 = float64_is_nan(*((long long *)&v7));
    v3 = float64_is_signaling_nan(*((long long *)&v7));
    v8 = 0x8000000000000 | *((long long *)&v8);
    v7 = 0x8000000000000 | *((long long *)&v7);
    if (v3 != 0 || v5 != 0)
    {
        float_raise(0x10);
    }
    if (v3 != 0)
    {
        v2 = v7;
        return v2;
    }
    if (v5 != 0)
    {
        v1 = v8;
        v2 = v1;
        return v2;
    }
    if (v4 != 0)
    {
        v0 = v7;
    }
    else
    {
        v0 = v8;
    }
    v1 = v0;
    v2 = v1;
    return v2;
}

extern char got.float_rounding_mode;

int subFloat64Sigs(unsigned int a0, unsigned int a1, unsigned int a2)
{
    unsigned int v0;  // [bp-0x4c]
    unsigned long long v1;  // [bp-0x48]
    unsigned long long v2;  // [bp-0x40], Other Possible Types: unsigned int
    unsigned long long v3;  // [bp-0x38], Other Possible Types: unsigned int
    unsigned int v4;  // [bp-0x30]
    unsigned int v5;  // [bp-0x2c]
    unsigned int v6;  // [bp-0x28]
    unsigned int v7;  // [bp-0x24]
    unsigned long v8;  // [bp-0x10], Other Possible Types: unsigned long long
    unsigned long long v14;  // rdx

    v7 = a2;
    *((unsigned long long *)&v3) = extractFloat64Frac(a0);
    v6 = extractFloat64Exp(a0);
    *((unsigned long long *)&v2) = extractFloat64Frac(a1);
    v5 = extractFloat64Exp(a1);
    v0 = v6 - v5;
    v3 = *((long long *)&v3) * 0x400;
    v2 = *((long long *)&v2) * 0x400;
    if (0 >= v0)
    {
        if (v0 >= 0)
        {
            if (v6 == 2047)
            {
                if (v2 != 0 || v3 != 0)
                {
                    v8 = propagateFloat64NaN(a0, a1);
                    return v8;
                }
                float_raise(0x10);
                v8 = 9223372036854775807;
                return v8;
            }
            if (v6 == 0)
            {
                v6 = 1;
                v5 = 1;
            }
            if (v2 >= v3 && v3 >= v2)
            {
                v8 = packFloat64(*((int *)got.float_rounding_mode) == 3, 0x0, 0x0);
                return v8;
            }
        }
        else
        {
            if (v5 == 2047)
            {
                if (v2 != 0)
                {
                    v8 = propagateFloat64NaN(a0, a1);
                    return v8;
                }
                v8 = packFloat64(v7 ^ 1, 0x7ff, 0x0);
                return v8;
            }
            if (v6 == 0)
            {
                v0 += 1;
            }
            else
            {
                v3 = 0x4000000000000000 | v3;
            }
            shift64RightJamming(v3, 0 - v0, &v3);
            v2 = 0x4000000000000000 | v2;
        }
        if ((v3 < v2 || v0 < 0) && (v0 < 0 || v6 != 2047) && (v0 < 0 || v2 >= v3) && (v5 != 2047 || v0 >= 0))
        {
            v1 = v2 - v3;
            v4 = v5;
            v7 ^= 1;
            v4 -= 1;
            normalizeRoundAndPackFloat64(v7, v4, v1);
            v8 = normalizeRoundAndPackFloat64(v7, v4, v1);
            return v8;
        }
    }
    else
    {
        if (v6 == 2047)
        {
            if (v3 != 0)
            {
                v8 = propagateFloat64NaN(a0, a1);
                return v8;
            }
            *((unsigned int *)&v8) = a0;
            return v8;
        }
        if (v5 == 0)
        {
            v0 -= 1;
        }
        else
        {
            v2 = 0x4000000000000000 | v2;
        }
        shift64RightJamming(v2, v0, &v2);
        v3 = 0x4000000000000000 | v3;
    }
    if (v6 != 2047 && (0 < v0 || v2 < v3) && (0 < v0 || v0 >= 0))
    {
        v1 = v3 - v2;
        v4 = v6;
        v4 -= 1;
        normalizeRoundAndPackFloat64(v7, v4, v1);
        v8 = normalizeRoundAndPackFloat64(a0, v4, v14);
        return v8;
    }
}

int float64_add(unsigned int a0, unsigned int a1)
{
    unsigned int v0;  // [bp-0x28]
    unsigned int v1;  // [bp-0x24]
    unsigned long v2;  // [bp-0x10]

    v1 = extractFloat64Sign(a0);
    v0 = extractFloat64Sign(a1);
    if (v1 == v0)
    {
        v2 = addFloat64Sigs(a0, a1, v1);
        return v2;
    }
    v2 = subFloat64Sigs(a0, a1, v1);
    return v2;
}

long long ullong_to_double(unsigned long a0)
{
    unsigned long v0;  // [bp-0x18]

    v0 = a0;
    return a0;
}

extern char got.a_input;
extern char got.b_input;
extern char got.endTimer;
extern char got.startTimer;
extern char got.z_output;

long long submain()
{
    unsigned long v0;  // [bp-0x28]
    unsigned long v1;  // [bp-0x20]
    unsigned long v2;  // [bp-0x18]
    unsigned int v3;  // [bp-0x10]
    unsigned int v4;  // [bp-0xc]
    unsigned long v7;  // xmm0lq

    v4 = 0;
    rtclock();
    *((unsigned long *)got.startTimer) = v7;
    for (v3 = 0; v3 < 46; v3 += 1)
    {
        v2 = *((long long *)(got.a_input + v3 * 8));
        v1 = *((long long *)(got.b_input + v3 * 8));
        v0 = float64_add(v2, v1);
        v4 = (v0 != *((long long *)(got.z_output + (v3 << 3)))) + v4;
    }
    rtclock();
    *((unsigned long *)got.endTimer) = v7;
    printf("%0.6f\n");
    return v4;
}

extern char countLeadingZeros32.countLeadingZerosHigh;

int countLeadingZeros32(unsigned int a0)
{
    unsigned int v0;  // [bp-0x10]
    unsigned int v1;  // [bp-0xc]

    v1 = a0;
    v0 = 0;
    if (v1 < 0x10000)
    {
        v0 += 16;
        v1 *= 0x10000;
    }
    if (v1 < 0x1000000)
    {
        v0 += 8;
        v1 *= 0x100;
        v0 = *((int *)&(&countLeadingZeros32.countLeadingZerosHigh)[4 * (v1 >> 24)]) + v0;
        return v0;
    }
    v0 = *((int *)&(&countLeadingZeros32.countLeadingZerosHigh)[4 * (v1 >> 24)]) + v0;
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

