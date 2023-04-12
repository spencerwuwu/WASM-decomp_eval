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



long packFloat64(long param_1,long param_2,long param_3)

{
  return (param_1 << 0x3f) + param_3 + (param_2 << 0x34);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulong float64_div(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  
  uVar1 = param_1 & 0xfffffffffffff;
  uVar6 = (uint)(param_1 >> 0x20);
  uVar15 = uVar6 >> 0x14 & 0x7ff;
  uVar8 = param_2 & 0xfffffffffffff;
  uVar5 = (uint)(param_2 >> 0x34) & 0x7ff;
  uVar13 = (param_2 ^ param_1) & 0x8000000000000000;
  if (uVar15 == 0x7ff) {
    if (uVar1 == 0) {
      if (uVar5 != 0x7ff) goto LAB_001003fb;
      if (uVar8 == 0) {
        DAT_40e9c88949100880 = DAT_40e9c88949100880 | 0x10;
        return 0x7fffffffffffffff;
      }
    }
LAB_001001f3:
    bVar21 = (param_1 & 0x7ff8000000000000) == 0x7ff0000000000000;
    bVar23 = (param_1 & 0x7ffffffffffff) != 0;
    bVar22 = (param_2 & 0x7ff8000000000000) == 0x7ff0000000000000;
    bVar20 = (param_2 & 0x7ffffffffffff) != 0;
    if ((bVar23 && bVar21) || (bVar20 && bVar22)) {
      DAT_49c0ff4810088041 = DAT_49c0ff4810088041 | 0x10;
    }
    uVar1 = param_2 | 0x8000000000000;
    if (param_2 * 2 < 0xffe0000000000001) {
      uVar1 = param_1 | 0x8000000000000;
    }
    if (bVar23 && bVar21) {
      uVar1 = param_1 | 0x8000000000000;
    }
    if (!bVar20 || !bVar22) {
      return uVar1;
    }
    return param_2 | 0x8000000000000;
  }
  if (uVar5 == 0) {
    if (uVar8 == 0) {
      if ((uVar6 >> 0x14 & 0x7ff | uVar1) == 0) {
        _DAT_8902ca831774108b = _DAT_8902ca831774108b | 0x10;
        return 0x7fffffffffffffff;
      }
      _DAT_8902ca831774108b = _DAT_8902ca831774108b | 2;
LAB_001003fb:
      return uVar13 | 0x7ff0000000000000;
    }
    bVar23 = uVar8 >> 0x20 == 0;
    uVar6 = (uint)(uVar8 >> 0x20);
    if (bVar23) {
      uVar6 = (uint)param_2;
    }
    uVar5 = uVar6 << 0x10;
    if (uVar6 >= 0x10000) {
      uVar5 = uVar6;
    }
    uVar16 = (uint)(uVar6 < 0x10000) * 0x10;
    uVar19 = uVar16 + 8;
    uVar6 = uVar5 << 8;
    if (0xffffff < uVar5) {
      uVar19 = uVar16;
      uVar6 = uVar5;
    }
    iVar11 = (uVar19 | (uint)bVar23 << 5) +
             *(int *)(countLeadingZeros32_countLeadingZerosHigh + (ulong)(uVar6 >> 0x18) * 4);
    uVar8 = uVar8 << ((char)iVar11 - 0xbU & 0x3f);
    uVar5 = 0xc - iVar11;
  }
  else if (uVar5 == 0x7ff) {
    if (uVar8 == 0) {
      return uVar13;
    }
    goto LAB_001001f3;
  }
  if (uVar15 == 0) {
    if (uVar1 == 0) {
      return uVar13;
    }
    bVar23 = uVar1 >> 0x20 == 0;
    uVar6 = (uint)(uVar1 >> 0x20);
    if (bVar23) {
      uVar6 = (uint)param_1;
    }
    uVar15 = uVar6 << 0x10;
    if (uVar6 >= 0x10000) {
      uVar15 = uVar6;
    }
    uVar16 = (uint)(uVar6 < 0x10000) * 0x10;
    uVar19 = uVar16 + 8;
    uVar6 = uVar15 << 8;
    if (0xffffff < uVar15) {
      uVar19 = uVar16;
      uVar6 = uVar15;
    }
    iVar11 = (uVar19 | (uint)bVar23 << 5) +
             *(int *)(countLeadingZeros32_countLeadingZerosHigh + (ulong)(uVar6 >> 0x18) * 4);
    uVar1 = uVar1 << ((char)iVar11 - 0xbU & 0x3f);
    uVar15 = 0xc - iVar11;
  }
  uVar12 = uVar1 << 10 | 0x4000000000000000;
  uVar18 = uVar8 << 0xb;
  uVar14 = uVar18 | 0x8000000000000000;
  bVar23 = uVar14 <= uVar12 * 2;
  uVar12 = uVar12 >> bVar23;
  uVar1 = 0xffffffffffffffff;
  if (uVar12 < uVar14) {
    uVar17 = uVar14 >> 0x20;
    uVar2 = uVar18 & 0xffffffff00000000 | 0x8000000000000000;
    uVar1 = 0xffffffff00000000;
    if (uVar12 < uVar2) {
      uVar1 = uVar12;
      if (uVar12 >> 0x20 == 0) {
        uVar1 = uVar12 & 0xffffffff;
      }
      uVar1 = uVar1 / uVar17 << 0x20;
    }
    uVar10 = (uVar1 >> 0x20) * (uVar18 & 0xffffffff);
    uVar3 = uVar1 * uVar14;
    uVar7 = -uVar3;
    uVar3 = ((uVar12 - ((uVar10 >> 0x20) + (uVar1 >> 0x20) * uVar17)) - (ulong)(uVar3 != 0)) -
            (ulong)(uVar3 < uVar10 << 0x20);
    if ((long)uVar3 < 0) {
      do {
        uVar1 = uVar1 - 0x100000000;
        bVar20 = CARRY8(uVar7,uVar8 << 0x2b);
        uVar7 = uVar7 + (uVar8 << 0x2b);
        uVar3 = uVar3 + uVar17 + (ulong)bVar20;
      } while ((long)uVar3 < 0);
    }
    uVar10 = uVar7 >> 0x20 | uVar3 << 0x20;
    uVar8 = 0xffffffff;
    if (uVar10 < uVar2) {
      if ((uVar3 & 0xffffffff) == 0) {
        uVar8 = (uVar7 >> 0x20) / uVar17;
      }
      else {
        uVar8 = uVar10 / uVar17;
      }
    }
    uVar1 = uVar8 | uVar1;
    if (((uint)uVar8 & 0x1ff) < 3) {
      uVar2 = (uVar18 & 0xffffffff) * (uVar1 >> 0x20);
      uVar8 = (uVar8 & 0xffffffff) * uVar17;
      lVar9 = 0;
      uVar18 = uVar8 + uVar2;
      if (CARRY8(uVar8,uVar2)) {
        lVar9 = -0x100000000;
      }
      uVar2 = uVar1 * uVar14;
      uVar8 = -uVar2;
      for (lVar9 = (((uVar12 - (uVar2 != 0)) - ((uVar18 >> 0x20) + (uVar1 >> 0x20) * uVar17)) +
                   lVar9) - (ulong)(uVar2 < uVar18 << 0x20); lVar9 < 0;
          lVar9 = lVar9 + (ulong)bVar20) {
        uVar1 = uVar1 - 1;
        bVar20 = CARRY8(uVar8,uVar14);
        uVar8 = uVar8 + uVar14;
      }
      uVar1 = uVar1 | uVar8 != 0;
    }
  }
  uVar6 = (uint)bVar23 + (uVar15 - uVar5) + 0x3fd;
  uVar8 = (ulong)uVar6;
  if (_DAT_fe831074f685318b == 0) {
    lVar9 = 0x200;
    lVar4 = 0;
  }
  else if (_DAT_fe831074f685318b == 1) {
    lVar4 = -1;
    lVar9 = 0;
  }
  else {
    if ((long)(param_2 ^ param_1) < 0) {
      bVar23 = _DAT_fe831074f685318b == 2;
    }
    else {
      bVar23 = _DAT_fe831074f685318b == 3;
    }
    lVar9 = 0x3ff;
    if (bVar23) {
      lVar9 = 0;
    }
    lVar4 = -(ulong)bVar23;
  }
  if ((uVar6 & 0xffff) < 0x7fd) {
LAB_001005c1:
    uVar6 = (uint)uVar1;
    uVar5 = _DAT_4c01c98341098b45;
    if ((uVar1 & 0x3ff) == 0) {
      uVar6 = 0;
      goto LAB_001005e7;
    }
  }
  else {
    if ((0x7fd < (int)uVar6) || ((uVar6 == 0x7fd && ((long)(lVar9 + uVar1) < 0)))) {
      DAT_b848090880 = DAT_b848090880 | 9;
      return (uVar13 | 0x7ff0000000000000) + lVar4;
    }
    if (-1 < (int)uVar6) goto LAB_001005c1;
    if (-uVar6 < 0x40) {
      uVar1 = (ulong)(uVar1 << ((byte)uVar6 & 0x3f) != 0) | uVar1 >> ((byte)-uVar6 & 0x3f);
    }
    else {
      uVar1 = (ulong)(uVar1 != 0);
    }
    uVar6 = (uint)uVar1;
    if ((uVar1 & 0x3ff) == 0) {
      uVar6 = 0;
      uVar8 = 0;
      goto LAB_001005e7;
    }
    uVar8 = 0;
    uVar5 = _DAT_3104c983410a8b44 | 4;
  }
  uVar6 = uVar6 & 0x3ff;
  _DAT_48c93102eb0a8945 = uVar5 | 1;
LAB_001005e7:
  uVar12 = ~(ulong)((_DAT_fe831074f685318b | uVar6 ^ 0x200) == 0) & uVar1 + lVar9 >> 10;
  uVar1 = uVar8 << 0x34;
  if (uVar12 == 0) {
    uVar1 = uVar12;
  }
  return (uVar12 | uVar13) + uVar1;
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


