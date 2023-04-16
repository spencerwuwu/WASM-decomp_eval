#include "dfdiv.h"



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



void add128(long param_1,ulong param_2,long param_3,ulong param_4,long *param_5,long *param_6)

{
  *param_6 = param_2 + param_4;
  *param_5 = param_1 + param_3 + (ulong)CARRY8(param_2,param_4);
  return;
}



void sub128(long param_1,ulong param_2,long param_3,ulong param_4,long *param_5,long *param_6)

{
  *param_6 = param_2 - param_4;
  *param_5 = (param_1 - param_3) - (ulong)(param_2 < param_4);
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
  *puRam00000000001000b7 = *puRam00000000001000b7 | param_1;
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



void normalizeFloat64Subnormal(ulong param_1,int *param_2,long *param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  bVar1 = param_1 >> 0x20 == 0;
  uVar3 = (uint)(param_1 >> 0x20);
  if (bVar1) {
    uVar3 = (uint)param_1;
  }
  uVar2 = uVar3 << 0x10;
  if (uVar3 >= 0x10000) {
    uVar2 = uVar3;
  }
  uVar4 = (uint)(uVar3 < 0x10000) * 0x10;
  uVar5 = uVar4 + 8;
  uVar3 = uVar2 << 8;
  if (0xffffff < uVar2) {
    uVar5 = uVar4;
    uVar3 = uVar2;
  }
  iVar6 = (uVar5 | (uint)bVar1 << 5) +
          *(int *)(countLeadingZeros32_countLeadingZerosHigh + (ulong)(uVar3 >> 0x18) * 4);
  *param_3 = param_1 << ((char)iVar6 - 0xbU & 0x3f);
  *param_2 = 0xc - iVar6;
  return;
}



long packFloat64(long param_1,long param_2,long param_3)

{
  return (param_1 << 0x3f) + param_3 + (param_2 << 0x34);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

long roundAndPackFloat64(ulong param_1,long param_2,ulong param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  bool bVar7;
  
  param_1 = param_1 & 0xffffffff;
  if (_DAT_ff831174ff85398b == 0) {
    lVar5 = 0x200;
    lVar2 = 0;
  }
  else if (_DAT_ff831174ff85398b == 1) {
    lVar2 = -1;
    lVar5 = 0;
  }
  else {
    if ((int)param_1 == 0) {
      bVar7 = _DAT_ff831174ff85398b == 3;
    }
    else {
      bVar7 = _DAT_ff831174ff85398b == 2;
    }
    lVar5 = 0x3ff;
    if (bVar7) {
      lVar5 = 0;
    }
    lVar2 = -(ulong)bVar7;
  }
  uVar6 = (uint)param_3 & 0x3ff;
  uVar1 = (uint)param_2;
  if (0x7fc < (uVar1 & 0xffff)) {
    if ((0x7fd < (int)uVar1) || ((uVar1 == 0x7fd && ((long)(lVar5 + param_3) < 0)))) {
      DAT_483fe0c148090a80 = DAT_483fe0c148090a80 | 9;
      return lVar2 + (param_1 << 0x3f) + 0x7ff0000000000000;
    }
    if ((int)uVar1 < 0) {
      if ((int)uVar1 < -0x3f) {
        param_3 = (ulong)(param_3 != 0);
      }
      else {
        param_3 = (ulong)(param_3 << ((byte)param_2 & 0x3f) != 0) |
                  param_3 >> (-(byte)param_2 & 0x3f);
      }
      param_2 = 0;
      uVar6 = (uint)param_3 & 0x3ff;
      if ((param_3 & 0x3ff) == 0) {
        uVar6 = 0;
      }
      else {
        DAT_c9314503eb040980 = DAT_c9314503eb040980 | 4;
      }
    }
  }
  if (uVar6 != 0) {
    DAT_c148c2014c010980 = DAT_c148c2014c010980 | 1;
  }
  uVar3 = ~(ulong)((_DAT_ff831174ff85398b | uVar6 ^ 0x200) == 0) & param_3 + lVar5 >> 10;
  uVar4 = param_2 << 0x34;
  if (uVar3 == 0) {
    uVar4 = uVar3;
  }
  return (param_1 << 0x3f | uVar3) + uVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulong float64_div(ulong param_1,ulong param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  
  uVar15 = param_1 & 0xfffffffffffff;
  uVar2 = (uint)(param_1 >> 0x20);
  uVar14 = uVar2 >> 0x14 & 0x7ff;
  uVar13 = param_2 & 0xfffffffffffff;
  uVar3 = (uint)(param_2 >> 0x34) & 0x7ff;
  uVar10 = param_2 ^ param_1;
  if (uVar14 == 0x7ff) {
    if (uVar15 == 0) {
      if (uVar3 != 0x7ff) goto LAB_00100607;
      if (uVar13 == 0) {
        DAT_b848100880 = DAT_b848100880 | 0x10;
        return 0x7fffffffffffffff;
      }
    }
LAB_00100389:
    bVar21 = (param_1 & 0x7ff8000000000000) == 0x7ff0000000000000;
    bVar1 = (param_1 & 0x7ffffffffffff) != 0;
    bVar22 = (param_2 & 0x7ff8000000000000) == 0x7ff0000000000000;
    bVar20 = (param_2 & 0x7ffffffffffff) != 0;
    if ((bVar1 && bVar21) || (bVar20 && bVar22)) {
      DAT_49c0ff4810088041 = DAT_49c0ff4810088041 | 0x10;
    }
    uVar10 = param_2 | 0x8000000000000;
    if (param_2 * 2 < 0xffe0000000000001) {
      uVar10 = param_1 | 0x8000000000000;
    }
    if (bVar1 && bVar21) {
      uVar10 = param_1 | 0x8000000000000;
    }
    if (!bVar20 || !bVar22) {
      return uVar10;
    }
    return param_2 | 0x8000000000000;
  }
  if (uVar3 == 0) {
    if (uVar13 == 0) {
      if ((uVar2 >> 0x14 & 0x7ff | uVar15) == 0) {
        _DAT_104840f118b = _DAT_104840f118b | 0x10;
        return 0x7fffffffffffffff;
      }
      _DAT_104840f118b = _DAT_104840f118b | 2;
LAB_00100607:
      return uVar10 & 0x8000000000000000 | 0x7ff0000000000000;
    }
    bVar1 = uVar13 >> 0x20 == 0;
    uVar2 = (uint)(uVar13 >> 0x20);
    if (bVar1) {
      uVar2 = (uint)param_2;
    }
    uVar3 = uVar2 << 0x10;
    if (uVar2 >= 0x10000) {
      uVar3 = uVar2;
    }
    uVar11 = (uint)(uVar2 < 0x10000) * 0x10;
    uVar6 = uVar11 + 8;
    uVar2 = uVar3 << 8;
    if (0xffffff < uVar3) {
      uVar6 = uVar11;
      uVar2 = uVar3;
    }
    iVar8 = (uVar6 | (uint)bVar1 << 5) +
            *(int *)(countLeadingZeros32_countLeadingZerosHigh + (ulong)(uVar2 >> 0x18) * 4);
    uVar13 = uVar13 << ((char)iVar8 - 0xbU & 0x3f);
    uVar3 = 0xc - iVar8;
  }
  else if (uVar3 == 0x7ff) {
    if (uVar13 != 0) goto LAB_00100389;
    goto LAB_001005c2;
  }
  if (uVar14 == 0) {
    if (uVar15 == 0) {
LAB_001005c2:
      return uVar10 & 0x8000000000000000;
    }
    bVar1 = uVar15 >> 0x20 == 0;
    uVar2 = (uint)(uVar15 >> 0x20);
    if (bVar1) {
      uVar2 = (uint)param_1;
    }
    uVar14 = uVar2 << 0x10;
    if (uVar2 >= 0x10000) {
      uVar14 = uVar2;
    }
    uVar11 = (uint)(uVar2 < 0x10000) * 0x10;
    uVar6 = uVar11 + 8;
    uVar2 = uVar14 << 8;
    if (0xffffff < uVar14) {
      uVar6 = uVar11;
      uVar2 = uVar14;
    }
    iVar8 = (uVar6 | (uint)bVar1 << 5) +
            *(int *)(countLeadingZeros32_countLeadingZerosHigh + (ulong)(uVar2 >> 0x18) * 4);
    uVar15 = uVar15 << ((char)iVar8 - 0xbU & 0x3f);
    uVar14 = 0xc - iVar8;
  }
  uVar12 = uVar15 << 10 | 0x4000000000000000;
  uVar7 = uVar13 << 0xb;
  uVar16 = uVar7 | 0x8000000000000000;
  bVar1 = uVar16 <= uVar12 * 2;
  uVar12 = uVar12 >> bVar1;
  uVar15 = 0xffffffffffffffff;
  if (uVar12 < uVar16) {
    uVar18 = uVar16 >> 0x20;
    uVar4 = uVar7 & 0xffffffff00000000 | 0x8000000000000000;
    uVar9 = 0xffffffff00000000;
    if (uVar12 < uVar4) {
      uVar9 = uVar12 / uVar18 << 0x20;
    }
    uVar17 = (uVar7 & 0xffffffff) * (uVar9 >> 0x20);
    uVar19 = uVar9 * uVar16;
    uVar15 = -uVar19;
    lVar5 = ((uVar12 - ((uVar17 >> 0x20) + (uVar9 >> 0x20) * uVar18)) - (ulong)(uVar19 != 0)) -
            (ulong)(uVar19 < uVar17 << 0x20);
    if (lVar5 < 0) {
      do {
        uVar9 = uVar9 - 0x100000000;
        bVar20 = CARRY8(uVar15,uVar13 << 0x2b);
        uVar15 = uVar15 + (uVar13 << 0x2b);
        lVar5 = lVar5 + uVar18 + (ulong)bVar20;
      } while (lVar5 < 0);
    }
    uVar13 = uVar15 >> 0x20 | lVar5 << 0x20;
    uVar15 = 0xffffffff;
    if (uVar13 < uVar4) {
      uVar15 = uVar13 / uVar18;
    }
    uVar15 = uVar15 | uVar9;
  }
  if (((uint)uVar15 & 0x1ff) < 3) {
    uVar9 = (uVar7 & 0xffffffff) * (uVar15 >> 0x20);
    uVar7 = (uVar15 & 0xffffffff) * (uVar16 >> 0x20);
    uVar4 = uVar7 + uVar9;
    uVar18 = uVar15 * uVar16;
    uVar13 = -uVar18;
    for (lVar5 = (((uVar12 - (uVar18 != 0)) -
                  ((uVar4 >> 0x20) + (uVar15 >> 0x20) * (uVar16 >> 0x20))) +
                  ((ulong)!CARRY8(uVar7,uVar9) << 0x20) + -0x100000000) -
                 (ulong)(uVar18 < uVar4 << 0x20); lVar5 < 0; lVar5 = lVar5 + (ulong)bVar20) {
      uVar15 = uVar15 - 1;
      bVar20 = CARRY8(uVar13,uVar16);
      uVar13 = uVar13 + uVar16;
    }
    uVar15 = uVar15 | uVar13 != 0;
  }
  uVar10 = roundAndPackFloat64(uVar10 >> 0x3f,(uint)bVar1 + (uVar14 - uVar3) + 0x3fd,uVar15);
  return uVar10;
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
    lVar2 = float64_div(*(undefined8 *)(&DAT_4c00000000258b4c + lVar4 * 8));
    iVar3 = iVar3 + (uint)(lVar2 != *(long *)(&DAT_8b4900401f0fed31 + lVar4 * 8));
    lVar4 = lVar4 + 1;
  } while (lVar4 != 0x16);
  uVar1 = gettimeofday((timeval *)local_40,(__timezone_ptr_t)0x0);
  if (uVar1 != 0) {
    printf("Error return from gettimeofday: %d",(ulong)uVar1);
  }
  _DAT_5c0f41f200110ff2 = (double)local_40._8_4_ * 1e-06 + (double)local_40._0_8_;
  printf("%0.6f\n",_DAT_5c0f41f200110ff2 - _DAT_3d8b4c0e110f41f2);
  return iVar3;
}


