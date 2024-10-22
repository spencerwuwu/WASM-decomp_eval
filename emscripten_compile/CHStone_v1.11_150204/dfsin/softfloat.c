# 1 "./CHStone_v1.11_150204/dfsin/softfloat.c"
# 50 "./CHStone_v1.11_150204/dfsin/softfloat.c"
#include "milieu.h"
#include "softfloat.h"





int8 float_rounding_mode = float_round_nearest_even;
int8 float_exception_flags = 0;






#include "softfloat-macros"
# 75 "./CHStone_v1.11_150204/dfsin/softfloat.c"
#include "softfloat-specialize"





INLINE bits64
extractFloat64Frac (float64 a)
{

  return a & LIT64 (0x000FFFFFFFFFFFFF);

}





INLINE int16
extractFloat64Exp (float64 a)
{

  return (a >> 52) & 0x7FF;

}





INLINE flag
extractFloat64Sign (float64 a)
{

  return a >> 63;

}
# 121 "./CHStone_v1.11_150204/dfsin/softfloat.c"
    void
normalizeFloat64Subnormal (bits64 aSig, int16 * zExpPtr, bits64 * zSigPtr)
{
  int8 shiftCount;

  shiftCount = countLeadingZeros64 (aSig) - 11;
  *zSigPtr = aSig << shiftCount;
  *zExpPtr = 1 - shiftCount;

}
# 143 "./CHStone_v1.11_150204/dfsin/softfloat.c"
INLINE float64
packFloat64 (flag zSign, int16 zExp, bits64 zSig)
{

  return (((bits64) zSign) << 63) + (((bits64) zExp) << 52) + zSig;

}
# 174 "./CHStone_v1.11_150204/dfsin/softfloat.c"
    float64
roundAndPackFloat64 (flag zSign, int16 zExp, bits64 zSig)
{
  int8 roundingMode;
  flag roundNearestEven, isTiny;
  int16 roundIncrement, roundBits;

  roundingMode = float_rounding_mode;
  roundNearestEven = (roundingMode == float_round_nearest_even);
  roundIncrement = 0x200;
  if (!roundNearestEven)
    {
      if (roundingMode == float_round_to_zero)
 {
   roundIncrement = 0;
 }
      else
 {
   roundIncrement = 0x3FF;
   if (zSign)
     {
       if (roundingMode == float_round_up)
  roundIncrement = 0;
     }
   else
     {
       if (roundingMode == float_round_down)
  roundIncrement = 0;
     }
 }
    }
  roundBits = zSig & 0x3FF;
  if (0x7FD <= (bits16) zExp)
    {
      if ((0x7FD < zExp)
   || ((zExp == 0x7FD) && ((sbits64) (zSig + roundIncrement) < 0)))
 {
   float_raise (float_flag_overflow | float_flag_inexact);
   return packFloat64 (zSign, 0x7FF, 0) - (roundIncrement == 0);
 }
      if (zExp < 0)
 {
   isTiny = (float_detect_tininess == float_tininess_before_rounding)
     || (zExp < -1)
     || (zSig + roundIncrement < LIT64 (0x8000000000000000));
   shift64RightJamming (zSig, -zExp, &zSig);
   zExp = 0;
   roundBits = zSig & 0x3FF;
   if (isTiny && roundBits)
     float_raise (float_flag_underflow);
 }
    }
  if (roundBits)
    float_exception_flags |= float_flag_inexact;
  zSig = (zSig + roundIncrement) >> 10;
  zSig &= ~(((roundBits ^ 0x200) == 0) & roundNearestEven);
  if (zSig == 0)
    zExp = 0;
  return packFloat64 (zSign, zExp, zSig);

}
# 246 "./CHStone_v1.11_150204/dfsin/softfloat.c"
    float64
normalizeRoundAndPackFloat64 (flag zSign, int16 zExp, bits64 zSig)
{
  int8 shiftCount;

  shiftCount = countLeadingZeros64 (zSig) - 1;
  return roundAndPackFloat64 (zSign, zExp - shiftCount, zSig << shiftCount);

}







float64
int32_to_float64 (int32 a)
{
  flag zSign;
  uint32 absA;
  int8 shiftCount;
  bits64 zSig;

  if (a == 0)
    return 0;
  zSign = (a < 0);
  absA = zSign ? -a : a;
  shiftCount = countLeadingZeros32 (absA) + 21;
  zSig = absA;
  return packFloat64 (zSign, 0x432 - shiftCount, zSig << shiftCount);

}
# 289 "./CHStone_v1.11_150204/dfsin/softfloat.c"
    float64
addFloat64Sigs (float64 a, float64 b, flag zSign)
{
  int16 aExp, bExp, zExp;
  bits64 aSig, bSig, zSig;
  int16 expDiff;

  aSig = extractFloat64Frac (a);
  aExp = extractFloat64Exp (a);
  bSig = extractFloat64Frac (b);
  bExp = extractFloat64Exp (b);
  expDiff = aExp - bExp;
  aSig <<= 9;
  bSig <<= 9;
  if (0 < expDiff)
    {
      if (aExp == 0x7FF)
 {
   if (aSig)
     return propagateFloat64NaN (a, b);
   return a;
 }
      if (bExp == 0)
 --expDiff;
      else
 bSig |= LIT64 (0x2000000000000000);
      shift64RightJamming (bSig, expDiff, &bSig);
      zExp = aExp;
    }
  else if (expDiff < 0)
    {
      if (bExp == 0x7FF)
 {
   if (bSig)
     return propagateFloat64NaN (a, b);
   return packFloat64 (zSign, 0x7FF, 0);
 }
      if (aExp == 0)
 ++expDiff;
      else
 {
   aSig |= LIT64 (0x2000000000000000);
 }
      shift64RightJamming (aSig, -expDiff, &aSig);
      zExp = bExp;
    }
  else
    {
      if (aExp == 0x7FF)
 {
   if (aSig | bSig)
     return propagateFloat64NaN (a, b);
   return a;
 }
      if (aExp == 0)
 return packFloat64 (zSign, 0, (aSig + bSig) >> 9);
      zSig = LIT64 (0x4000000000000000) + aSig + bSig;
      zExp = aExp;
      goto roundAndPack;
    }
  aSig |= LIT64 (0x2000000000000000);
  zSig = (aSig + bSig) << 1;
  --zExp;
  if ((sbits64) zSig < 0)
    {
      zSig = aSig + bSig;
      ++zExp;
    }
roundAndPack:
  return roundAndPackFloat64 (zSign, zExp, zSig);

}
# 371 "./CHStone_v1.11_150204/dfsin/softfloat.c"
    float64
subFloat64Sigs (float64 a, float64 b, flag zSign)
{
  int16 aExp, bExp, zExp;
  bits64 aSig, bSig, zSig;
  int16 expDiff;

  aSig = extractFloat64Frac (a);
  aExp = extractFloat64Exp (a);
  bSig = extractFloat64Frac (b);
  bExp = extractFloat64Exp (b);
  expDiff = aExp - bExp;
  aSig <<= 10;
  bSig <<= 10;
  if (0 < expDiff)
    goto aExpBigger;
  if (expDiff < 0)
    goto bExpBigger;
  if (aExp == 0x7FF)
    {
      if (aSig | bSig)
 return propagateFloat64NaN (a, b);
      float_raise (float_flag_invalid);
      return float64_default_nan;
    }
  if (aExp == 0)
    {
      aExp = 1;
      bExp = 1;
    }
  if (bSig < aSig)
    goto aBigger;
  if (aSig < bSig)
    goto bBigger;
  return packFloat64 (float_rounding_mode == float_round_down, 0, 0);
bExpBigger:
  if (bExp == 0x7FF)
    {
      if (bSig)
 return propagateFloat64NaN (a, b);
      return packFloat64 (zSign ^ 1, 0x7FF, 0);
    }
  if (aExp == 0)
    ++expDiff;
  else
    aSig |= LIT64 (0x4000000000000000);
  shift64RightJamming (aSig, -expDiff, &aSig);
  bSig |= LIT64 (0x4000000000000000);
bBigger:
  zSig = bSig - aSig;
  zExp = bExp;
  zSign ^= 1;
  goto normalizeRoundAndPack;
aExpBigger:
  if (aExp == 0x7FF)
    {
      if (aSig)
 return propagateFloat64NaN (a, b);
      return a;
    }
  if (bExp == 0)
    --expDiff;
  else
    bSig |= LIT64 (0x4000000000000000);
  shift64RightJamming (bSig, expDiff, &bSig);
  aSig |= LIT64 (0x4000000000000000);
aBigger:
  zSig = aSig - bSig;
  zExp = aExp;
normalizeRoundAndPack:
  --zExp;
  return normalizeRoundAndPackFloat64 (zSign, zExp, zSig);

}







float64
float64_add (float64 a, float64 b)
{
  flag aSign, bSign;

  aSign = extractFloat64Sign (a);
  bSign = extractFloat64Sign (b);
  if (aSign == bSign)
    return addFloat64Sigs (a, b, aSign);
  else
    return subFloat64Sigs (a, b, aSign);

}







float64
float64_mul (float64 a, float64 b)
{
  flag aSign, bSign, zSign;
  int16 aExp, bExp, zExp;
  bits64 aSig, bSig, zSig0, zSig1;

  aSig = extractFloat64Frac (a);
  aExp = extractFloat64Exp (a);
  aSign = extractFloat64Sign (a);
  bSig = extractFloat64Frac (b);
  bExp = extractFloat64Exp (b);
  bSign = extractFloat64Sign (b);
  zSign = aSign ^ bSign;
  if (aExp == 0x7FF)
    {
      if (aSig || ((bExp == 0x7FF) && bSig))
 return propagateFloat64NaN (a, b);
      if ((bExp | bSig) == 0)
 {
   float_raise (float_flag_invalid);
   return float64_default_nan;
 }
      return packFloat64 (zSign, 0x7FF, 0);
    }
  if (bExp == 0x7FF)
    {
      if (bSig)
 return propagateFloat64NaN (a, b);
      if ((aExp | aSig) == 0)
 {
   float_raise (float_flag_invalid);
   return float64_default_nan;
 }
      return packFloat64 (zSign, 0x7FF, 0);
    }
  if (aExp == 0)
    {
      if (aSig == 0)
 return packFloat64 (zSign, 0, 0);
      normalizeFloat64Subnormal (aSig, &aExp, &aSig);
    }
  if (bExp == 0)
    {
      if (bSig == 0)
 return packFloat64 (zSign, 0, 0);
      normalizeFloat64Subnormal (bSig, &bExp, &bSig);
    }
  zExp = aExp + bExp - 0x3FF;
  aSig = (aSig | LIT64 (0x0010000000000000)) << 10;
  bSig = (bSig | LIT64 (0x0010000000000000)) << 11;
  mul64To128 (aSig, bSig, &zSig0, &zSig1);
  zSig0 |= (zSig1 != 0);
  if (0 <= (sbits64) (zSig0 << 1))
    {
      zSig0 <<= 1;
      --zExp;
    }
  return roundAndPackFloat64 (zSign, zExp, zSig0);

}







float64
float64_div (float64 a, float64 b)
{
  flag aSign, bSign, zSign;
  int16 aExp, bExp, zExp;
  bits64 aSig, bSig, zSig;
  bits64 rem0, rem1, term0, term1;

  aSig = extractFloat64Frac (a);
  aExp = extractFloat64Exp (a);
  aSign = extractFloat64Sign (a);
  bSig = extractFloat64Frac (b);
  bExp = extractFloat64Exp (b);
  bSign = extractFloat64Sign (b);
  zSign = aSign ^ bSign;
  if (aExp == 0x7FF)
    {
      if (aSig)
 return propagateFloat64NaN (a, b);
      if (bExp == 0x7FF)
 {
   if (bSig)
     return propagateFloat64NaN (a, b);
   float_raise (float_flag_invalid);
   return float64_default_nan;
 }
      return packFloat64 (zSign, 0x7FF, 0);
    }
  if (bExp == 0x7FF)
    {
      if (bSig)
 return propagateFloat64NaN (a, b);
      return packFloat64 (zSign, 0, 0);
    }
  if (bExp == 0)
    {
      if (bSig == 0)
 {
   if ((aExp | aSig) == 0)
     {
       float_raise (float_flag_invalid);
       return float64_default_nan;
     }
   float_raise (float_flag_divbyzero);
   return packFloat64 (zSign, 0x7FF, 0);
 }
      normalizeFloat64Subnormal (bSig, &bExp, &bSig);
    }
  if (aExp == 0)
    {
      if (aSig == 0)
 return packFloat64 (zSign, 0, 0);
      normalizeFloat64Subnormal (aSig, &aExp, &aSig);
    }
  zExp = aExp - bExp + 0x3FD;
  aSig = (aSig | LIT64 (0x0010000000000000)) << 10;
  bSig = (bSig | LIT64 (0x0010000000000000)) << 11;
  if (bSig <= (aSig + aSig))
    {
      aSig >>= 1;
      ++zExp;
    }
  zSig = estimateDiv128To64 (aSig, 0, bSig);
  if ((zSig & 0x1FF) <= 2)
    {
      mul64To128 (bSig, zSig, &term0, &term1);
      sub128 (aSig, 0, term0, term1, &rem0, &rem1);
      while ((sbits64) rem0 < 0)
 {
   --zSig;
   add128 (rem0, rem1, 0, bSig, &rem0, &rem1);
 }
      zSig |= (rem1 != 0);
    }
  return roundAndPackFloat64 (zSign, zExp, zSig);

}
# 625 "./CHStone_v1.11_150204/dfsin/softfloat.c"
flag
float64_le (float64 a, float64 b)
{
  flag aSign, bSign;

  if (((extractFloat64Exp (a) == 0x7FF) && extractFloat64Frac (a))
      || ((extractFloat64Exp (b) == 0x7FF) && extractFloat64Frac (b)))
    {
      float_raise (float_flag_invalid);
      return 0;
    }
  aSign = extractFloat64Sign (a);
  bSign = extractFloat64Sign (b);
  if (aSign != bSign)
    return aSign || ((bits64) ((a | b) << 1) == 0);
  return (a == b) || (aSign ^ (a < b));

}

flag
float64_ge (float64 a, float64 b)
{
  return float64_le (b, a);
}


float64
float64_neg (float64 x)
{
  return (((~x) & 0x8000000000000000ULL) | (x & 0x7fffffffffffffffULL));
}
