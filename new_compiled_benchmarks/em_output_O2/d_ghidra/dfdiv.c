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
  long lVar4;
  ulong uVar5;
  uint uVar6;
  bool bVar7;
  
  param_1 = param_1 & 0xffffffff;
  if (_DAT_ff831174ff85398b == 0) {
    lVar4 = 0x200;
    lVar2 = 0;
  }
  else if (_DAT_ff831174ff85398b == 1) {
    lVar2 = -1;
    lVar4 = 0;
  }
  else {
    if ((int)param_1 == 0) {
      bVar7 = _DAT_ff831174ff85398b == 3;
    }
    else {
      bVar7 = _DAT_ff831174ff85398b == 2;
    }
    lVar4 = 0x3ff;
    if (bVar7) {
      lVar4 = 0;
    }
    lVar2 = -(ulong)bVar7;
  }
  uVar1 = (uint)param_2;
  if ((uVar1 & 0xffff) < 0x7fd) {
LAB_0010024d:
    uVar1 = (uint)param_3;
    uVar6 = _DAT_4c01c98341098b45;
    if ((param_3 & 0x3ff) == 0) {
      uVar1 = 0;
      goto LAB_00100273;
    }
  }
  else {
    if ((0x7fd < (int)uVar1) || ((uVar1 == 0x7fd && ((long)(lVar4 + param_3) < 0)))) {
      DAT_483fe0c148090a80 = DAT_483fe0c148090a80 | 9;
      return lVar2 + (param_1 << 0x3f) + 0x7ff0000000000000;
    }
    if (-1 < (int)uVar1) goto LAB_0010024d;
    if (-uVar1 < 0x40) {
      param_3 = (ulong)(param_3 << ((byte)param_2 & 0x3f) != 0) | param_3 >> ((byte)-uVar1 & 0x3f);
    }
    else {
      param_3 = (ulong)(param_3 != 0);
    }
    uVar1 = (uint)param_3;
    if ((param_3 & 0x3ff) == 0) {
      uVar1 = 0;
      param_2 = 0;
      goto LAB_00100273;
    }
    param_2 = 0;
    uVar6 = _DAT_3104c983410e8b44 | 4;
  }
  uVar1 = uVar1 & 0x3ff;
  _DAT_4cc93102eb0a8945 = uVar6 | 1;
LAB_00100273:
  uVar5 = ~(ulong)((_DAT_ff831174ff85398b | uVar1 ^ 0x200) == 0) & param_3 + lVar4 >> 10;
  uVar3 = param_2 << 0x34;
  if (uVar5 == 0) {
    uVar3 = uVar5;
  }
  return (param_1 << 0x3f | uVar5) + uVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulong float64_div(ulong param_1,ulong param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  int iVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  
  uVar12 = param_1 & 0xfffffffffffff;
  uVar2 = (uint)(param_1 >> 0x20);
  uVar3 = uVar2 >> 0x14 & 0x7ff;
  uVar11 = param_2 & 0xfffffffffffff;
  uVar9 = (uint)(param_2 >> 0x34) & 0x7ff;
  uVar8 = param_2 ^ param_1;
  if (uVar3 == 0x7ff) {
    if (uVar12 == 0) {
      if (uVar9 != 0x7ff) goto LAB_001005e3;
      if (uVar11 == 0) {
        DAT_b848100880 = DAT_b848100880 | 0x10;
        return 0x7fffffffffffffff;
      }
    }
LAB_0010039b:
    bVar21 = (param_1 & 0x7ff8000000000000) == 0x7ff0000000000000;
    bVar1 = (param_1 & 0x7ffffffffffff) != 0;
    bVar22 = (param_2 & 0x7ff8000000000000) == 0x7ff0000000000000;
    bVar20 = (param_2 & 0x7ffffffffffff) != 0;
    if ((bVar1 && bVar21) || (bVar20 && bVar22)) {
      DAT_49c0ff4810088041 = DAT_49c0ff4810088041 | 0x10;
    }
    uVar8 = param_2 | 0x8000000000000;
    if (param_2 * 2 < 0xffe0000000000001) {
      uVar8 = param_1 | 0x8000000000000;
    }
    if (bVar1 && bVar21) {
      uVar8 = param_1 | 0x8000000000000;
    }
    if (!bVar20 || !bVar22) {
      return uVar8;
    }
    return param_2 | 0x8000000000000;
  }
  if (uVar9 == 0) {
    if (uVar11 == 0) {
      if ((uVar2 >> 0x14 & 0x7ff | uVar12) == 0) {
        _DAT_af840f118b = _DAT_af840f118b | 0x10;
        return 0x7fffffffffffffff;
      }
      _DAT_af840f118b = _DAT_af840f118b | 2;
LAB_001005e3:
      return uVar8 & 0x8000000000000000 | 0x7ff0000000000000;
    }
    bVar1 = uVar11 >> 0x20 == 0;
    uVar2 = (uint)(uVar11 >> 0x20);
    if (bVar1) {
      uVar2 = (uint)param_2;
    }
    uVar9 = uVar2 << 0x10;
    if (uVar2 >= 0x10000) {
      uVar9 = uVar2;
    }
    uVar7 = (uint)(uVar2 < 0x10000) * 0x10;
    uVar5 = uVar7 + 8;
    uVar2 = uVar9 << 8;
    if (0xffffff < uVar9) {
      uVar5 = uVar7;
      uVar2 = uVar9;
    }
    iVar14 = (uVar5 | (uint)bVar1 << 5) +
             *(int *)(countLeadingZeros32_countLeadingZerosHigh + (ulong)(uVar2 >> 0x18) * 4);
    uVar11 = uVar11 << ((char)iVar14 - 0xbU & 0x3f);
    uVar9 = 0xc - iVar14;
  }
  else if (uVar9 == 0x7ff) {
    if (uVar11 != 0) goto LAB_0010039b;
    goto LAB_0010059e;
  }
  if (uVar3 == 0) {
    if (uVar12 == 0) {
LAB_0010059e:
      return uVar8 & 0x8000000000000000;
    }
    bVar1 = uVar12 >> 0x20 == 0;
    uVar2 = (uint)(uVar12 >> 0x20);
    if (bVar1) {
      uVar2 = (uint)param_1;
    }
    uVar3 = uVar2 << 0x10;
    if (uVar2 >= 0x10000) {
      uVar3 = uVar2;
    }
    uVar7 = (uint)(uVar2 < 0x10000) * 0x10;
    uVar5 = uVar7 + 8;
    uVar2 = uVar3 << 8;
    if (0xffffff < uVar3) {
      uVar5 = uVar7;
      uVar2 = uVar3;
    }
    iVar14 = (uVar5 | (uint)bVar1 << 5) +
             *(int *)(countLeadingZeros32_countLeadingZerosHigh + (ulong)(uVar2 >> 0x18) * 4);
    uVar12 = uVar12 << ((char)iVar14 - 0xbU & 0x3f);
    uVar3 = 0xc - iVar14;
  }
  uVar10 = uVar12 << 10 | 0x4000000000000000;
  uVar15 = uVar11 << 0xb;
  uVar13 = uVar15 | 0x8000000000000000;
  bVar1 = uVar13 <= uVar10 * 2;
  uVar10 = uVar10 >> bVar1;
  uVar12 = 0xffffffffffffffff;
  if (uVar10 < uVar13) {
    uVar17 = uVar13 >> 0x20;
    uVar19 = uVar15 & 0xffffffff00000000 | 0x8000000000000000;
    uVar12 = 0xffffffff00000000;
    if (uVar10 < uVar19) {
      uVar12 = uVar10;
      if (uVar10 >> 0x20 == 0) {
        uVar12 = uVar10 & 0xffffffff;
      }
      uVar12 = uVar12 / uVar17 << 0x20;
    }
    uVar16 = (uVar12 >> 0x20) * (uVar15 & 0xffffffff);
    uVar6 = uVar12 * uVar13;
    uVar4 = -uVar6;
    uVar6 = ((uVar10 - ((uVar16 >> 0x20) + (uVar12 >> 0x20) * uVar17)) - (ulong)(uVar6 != 0)) -
            (ulong)(uVar6 < uVar16 << 0x20);
    if ((long)uVar6 < 0) {
      do {
        uVar12 = uVar12 - 0x100000000;
        bVar20 = CARRY8(uVar4,uVar11 << 0x2b);
        uVar4 = uVar4 + (uVar11 << 0x2b);
        uVar6 = uVar6 + uVar17 + (ulong)bVar20;
      } while ((long)uVar6 < 0);
    }
    uVar16 = uVar4 >> 0x20 | uVar6 << 0x20;
    uVar11 = 0xffffffff;
    if (uVar16 < uVar19) {
      if ((uVar6 & 0xffffffff) == 0) {
        uVar11 = (uVar4 >> 0x20) / uVar17;
      }
      else {
        uVar11 = uVar16 / uVar17;
      }
    }
    uVar12 = uVar11 | uVar12;
    if (((uint)uVar11 & 0x1ff) < 3) {
      uVar19 = (uVar15 & 0xffffffff) * (uVar12 >> 0x20);
      uVar11 = (uVar11 & 0xffffffff) * uVar17;
      lVar18 = 0;
      uVar15 = uVar11 + uVar19;
      if (CARRY8(uVar11,uVar19)) {
        lVar18 = -0x100000000;
      }
      uVar19 = uVar12 * uVar13;
      uVar11 = -uVar19;
      for (lVar18 = (((uVar10 - (uVar19 != 0)) - ((uVar15 >> 0x20) + (uVar12 >> 0x20) * uVar17)) +
                    lVar18) - (ulong)(uVar19 < uVar15 << 0x20); lVar18 < 0;
          lVar18 = lVar18 + (ulong)bVar20) {
        uVar12 = uVar12 - 1;
        bVar20 = CARRY8(uVar11,uVar13);
        uVar11 = uVar11 + uVar13;
      }
      uVar12 = uVar12 | uVar11 != 0;
    }
  }
  uVar8 = roundAndPackFloat64(uVar8 >> 0x3f,(uint)bVar1 + (uVar3 - uVar9) + 0x3fd,uVar12);
  return uVar8;
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


