# 1 "./CHStone_v1.11_150204/dfmul/softfloat.c"
# 50 "./CHStone_v1.11_150204/dfmul/softfloat.c"
#include "milieu.h"
#include "softfloat.h"





int8 float_rounding_mode = float_round_nearest_even;
int8 float_exception_flags = 0;






#include "softfloat-macros"
# 75 "./CHStone_v1.11_150204/dfmul/softfloat.c"
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
# 121 "./CHStone_v1.11_150204/dfmul/softfloat.c"
    void
normalizeFloat64Subnormal (bits64 aSig, int16 * zExpPtr, bits64 * zSigPtr)
{
  int8 shiftCount;

  shiftCount = countLeadingZeros64 (aSig) - 11;
  *zSigPtr = aSig << shiftCount;
  *zExpPtr = 1 - shiftCount;

}
# 143 "./CHStone_v1.11_150204/dfmul/softfloat.c"
INLINE float64
packFloat64 (flag zSign, int16 zExp, bits64 zSig)
{

  return (((bits64) zSign) << 63) + (((bits64) zExp) << 52) + zSig;

}
# 174 "./CHStone_v1.11_150204/dfmul/softfloat.c"
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
