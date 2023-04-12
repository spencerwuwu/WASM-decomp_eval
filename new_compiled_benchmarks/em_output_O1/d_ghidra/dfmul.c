#include "dfmul.h"



void shift64RightJamming(ulong param_1,int param_2,ulong *param_3)

{
  if (param_2 != 0) {
    if (param_2 < 0x40) {
      *param_3 = (ulong)(param_1 << (-(byte)param_2 & 0x3f) != 0) |
                 param_1 >> ((byte)param_2 & 0x3f);
      return;
    }
    param_1 = (ulong)(param_1 != 0);
  }
  *param_3 = param_1;
  return;
}



void mul64To128(ulong param_1,ulong param_2,long *param_3,ulong *param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = (param_1 & 0xffffffff) * (param_2 >> 0x20);
  uVar2 = (param_2 & 0xffffffff) * (param_1 >> 0x20);
  uVar3 = uVar2 + uVar1;
  *param_4 = param_2 * param_1;
  *param_3 = (uVar3 >> 0x20) + (param_2 >> 0x20) * (param_1 >> 0x20) +
             ((ulong)CARRY8(uVar2,uVar1) << 0x20) + (ulong)(param_2 * param_1 < uVar3 << 0x20);
  return;
}



void float_raise(uint param_1)

{
  *puRam0000000000100097 = *puRam0000000000100097 | param_1;
  return;
}



bool float64_is_nan(long param_1)

{
  return 0xffe0000000000000 < (ulong)(param_1 * 2);
}



bool float64_is_signaling_nan(ulong param_1)

{
  return (param_1 & 0x7ffffffffffff) != 0 && (param_1 & 0x7ff8000000000000) == 0x7ff0000000000000;
}



ulong extractFloat64Frac(ulong param_1)

{
  return param_1 & 0xfffffffffffff;
}



uint extractFloat64Exp(undefined8 param_1)

{
  return (uint)((ulong)param_1 >> 0x34) & 0x7ff;
}



ulong extractFloat64Sign(ulong param_1)

{
  return param_1 >> 0x3f;
}



long packFloat64(long param_1,long param_2,long param_3)

{
  return (param_1 << 0x3f) + param_3 + (param_2 << 0x34);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulong float64_mul(ulong param_1,ulong param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  int iVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  
  uVar16 = param_1 & 0xfffffffffffff;
  uVar6 = (uint)(param_1 >> 0x20);
  uVar7 = uVar6 >> 0x14 & 0x7ff;
  uVar15 = param_2 & 0xfffffffffffff;
  uVar13 = (uint)(param_2 >> 0x20);
  uVar5 = uVar13 >> 0x14 & 0x7ff;
  uVar14 = param_2 ^ param_1;
  uVar2 = uVar14 & 0x8000000000000000;
  if (uVar7 == 0x7ff) {
    if ((uVar16 != 0) || ((uVar15 != 0 && (uVar5 == 0x7ff)))) {
LAB_001001ce:
      bVar19 = (param_1 & 0x7ff8000000000000) == 0x7ff0000000000000;
      bVar21 = (param_1 & 0x7ffffffffffff) != 0;
      bVar20 = (param_2 & 0x7ff8000000000000) == 0x7ff0000000000000;
      bVar1 = (param_2 & 0x7ffffffffffff) != 0;
      if ((bVar21 && bVar19) || (bVar1 && bVar20)) {
        DAT_49c0ff4810088041 = DAT_49c0ff4810088041 | 0x10;
      }
      uVar16 = param_2 | 0x8000000000000;
      if (param_2 * 2 < 0xffe0000000000001) {
        uVar16 = param_1 | 0x8000000000000;
      }
      if (bVar21 && bVar19) {
        uVar16 = param_1 | 0x8000000000000;
      }
      if (!bVar1 || !bVar20) {
        return uVar16;
      }
      return param_2 | 0x8000000000000;
    }
    if ((uVar13 >> 0x14 & 0x7ff | uVar15) != 0) {
      return uVar2 | 0x7ff0000000000000;
    }
  }
  else {
    if (uVar5 != 0x7ff) {
      if (uVar7 == 0) {
        if (uVar16 == 0) {
          return uVar2;
        }
        bVar21 = uVar16 >> 0x20 == 0;
        uVar6 = (uint)(uVar16 >> 0x20);
        if (bVar21) {
          uVar6 = (uint)param_1;
        }
        uVar13 = uVar6 << 0x10;
        if (uVar6 >= 0x10000) {
          uVar13 = uVar6;
        }
        uVar9 = (uint)(uVar6 < 0x10000) * 0x10;
        uVar7 = uVar9 + 8;
        uVar6 = uVar13 << 8;
        if (0xffffff < uVar13) {
          uVar7 = uVar9;
          uVar6 = uVar13;
        }
        iVar18 = (uVar7 | (uint)bVar21 << 5) +
                 *(int *)(countLeadingZeros32_countLeadingZerosHigh + (ulong)(uVar6 >> 0x18) * 4);
        uVar16 = uVar16 << ((char)iVar18 - 0xbU & 0x3f);
        uVar7 = 0xc - iVar18;
      }
      if (uVar5 == 0) {
        if (uVar15 == 0) {
          return uVar2;
        }
        bVar21 = uVar15 >> 0x20 == 0;
        uVar6 = (uint)(uVar15 >> 0x20);
        if (bVar21) {
          uVar6 = (uint)param_2;
        }
        uVar13 = uVar6 << 0x10;
        if (uVar6 >= 0x10000) {
          uVar13 = uVar6;
        }
        uVar9 = (uint)(uVar6 < 0x10000) * 0x10;
        uVar5 = uVar9 + 8;
        uVar6 = uVar13 << 8;
        if (0xffffff < uVar13) {
          uVar5 = uVar9;
          uVar6 = uVar13;
        }
        iVar18 = (uVar5 | (uint)bVar21 << 5) +
                 *(int *)(countLeadingZeros32_countLeadingZerosHigh + (ulong)(uVar6 >> 0x18) * 4);
        uVar15 = uVar15 << ((char)iVar18 - 0xbU & 0x3f);
        uVar5 = 0xc - iVar18;
      }
      uVar3 = uVar16 << 10 | 0x4000000000000000;
      uVar11 = uVar15 << 0xb | 0x8000000000000000;
      uVar8 = uVar3 >> 0x20;
      uVar10 = uVar11 >> 0x20;
      uVar17 = (uVar16 << 10 & 0xffffffff) * uVar10;
      uVar16 = (uVar15 << 0xb & 0xffffffff) * uVar8;
      uVar15 = uVar16 + uVar17;
      uVar11 = uVar11 * uVar3;
      uVar3 = (ulong)(uVar11 != 0) |
              (uVar15 >> 0x20) + uVar10 * uVar8 + ((ulong)CARRY8(uVar16,uVar17) << 0x20) +
              (ulong)(uVar11 < uVar15 << 0x20);
      uVar15 = uVar3 * 2;
      uVar16 = uVar15;
      if (-1 >= (long)uVar15) {
        uVar16 = uVar3;
      }
      uVar6 = ((uVar5 + uVar7) - (uint)(-1 < (long)uVar15)) - 0x3ff;
      if (_DAT_ff832674ff85398b == 0) {
        lVar12 = 0x200;
        lVar4 = 0;
      }
      else if (_DAT_ff832674ff85398b == 1) {
        lVar4 = -1;
        lVar12 = 0;
      }
      else {
        if ((long)uVar14 < 0) {
          bVar21 = _DAT_ff832674ff85398b == 2;
        }
        else {
          bVar21 = _DAT_ff832674ff85398b == 3;
        }
        lVar12 = 0x3ff;
        if (bVar21) {
          lVar12 = 0;
        }
        lVar4 = -(ulong)bVar21;
      }
      uVar13 = (uint)uVar16 & 0x3ff;
      uVar14 = (ulong)uVar6;
      if (0x7fc < (uVar6 & 0xffff)) {
        if ((0x7fd < (int)uVar6) || ((uVar6 == 0x7fd && ((long)(lVar12 + uVar16) < 0)))) {
          DAT_ba48090a80 = DAT_ba48090a80 | 9;
          return (uVar2 | 0x7ff0000000000000) + lVar4;
        }
        if ((int)uVar6 < 0) {
          if ((int)uVar6 < -0x3f) {
            uVar16 = (ulong)(uVar16 != 0);
          }
          else {
            uVar16 = (ulong)(uVar16 << ((byte)uVar6 & 0x3f) != 0) | uVar16 >> (-(byte)uVar6 & 0x3f);
          }
          uVar14 = 0;
          uVar13 = (uint)uVar16 & 0x3ff;
          if ((uVar16 & 0x3ff) == 0) {
            uVar13 = 0;
          }
          else {
            DAT_c9314503eb040980 = DAT_c9314503eb040980 | 4;
            uVar14 = 0;
          }
        }
      }
      if (uVar13 != 0) {
        DAT_c148c6014c010980 = DAT_c148c6014c010980 | 1;
      }
      uVar15 = ~(ulong)((_DAT_ff832674ff85398b | uVar13 ^ 0x200) == 0) & uVar16 + lVar12 >> 10;
      uVar16 = uVar14 << 0x34;
      if (uVar15 == 0) {
        uVar16 = uVar15;
      }
      return (uVar15 | uVar2) + uVar16;
    }
    if (uVar15 != 0) goto LAB_001001ce;
    if ((uVar6 >> 0x14 & 0x7ff | uVar16) != 0) {
      return uVar14 & 0x8000000000000000 | 0x7ff0000000000000;
    }
  }
  DAT_894cc8ff49100880 = DAT_894cc8ff49100880 | 0x10;
  return 0x7fffffffffffffff;
}



void ullong_to_double(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int submain(void)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  undefined local_40 [16];
  
  iVar3 = 0;
  uVar1 = gettimeofday((timeval *)local_40,(__timezone_ptr_t)0x0);
  if (uVar1 != 0) {
    printf("Error return from gettimeofday: %d",(ulong)uVar1);
  }
  _DAT_3d8b4c0e110f41f2 = (double)local_40._8_4_ * 1e-06 + (double)local_40._0_8_;
  lVar4 = 0;
  do {
    lVar2 = float64_mul(*(undefined8 *)(&DAT_4c00000000258b4c + lVar4 * 8));
    iVar3 = iVar3 + (uint)(lVar2 != *(long *)(&DAT_8b4900401f0fed31 + lVar4 * 8));
    lVar4 = lVar4 + 1;
  } while (lVar4 != 0x14);
  uVar1 = gettimeofday((timeval *)local_40,(__timezone_ptr_t)0x0);
  if (uVar1 != 0) {
    printf("Error return from gettimeofday: %d",(ulong)uVar1);
  }
  _DAT_5c0f41f200110ff2 = (double)local_40._8_4_ * 1e-06 + (double)local_40._0_8_;
  printf("%0.6f\n",_DAT_5c0f41f200110ff2 - _DAT_3d8b4c0e110f41f2);
  return iVar3;
}


