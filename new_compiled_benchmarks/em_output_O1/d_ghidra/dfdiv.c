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
  long lVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  int iVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  
  uVar6 = param_1 & 0xfffffffffffff;
  uVar5 = (uint)(param_1 >> 0x20);
  uVar13 = uVar5 >> 0x14 & 0x7ff;
  uVar14 = param_2 & 0xfffffffffffff;
  uVar7 = (uint)(param_2 >> 0x34) & 0x7ff;
  uVar12 = param_2 ^ param_1;
  uVar1 = uVar12 & 0x8000000000000000;
  if (uVar13 == 0x7ff) {
    if (uVar6 == 0) {
      if (uVar7 != 0x7ff) {
        return uVar1 | 0x7ff0000000000000;
      }
      if (uVar14 == 0) {
        DAT_437e9100880 = DAT_437e9100880 | 0x10;
        return 0x7fffffffffffffff;
      }
    }
LAB_001001ec:
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
    if (bVar20 && bVar22) {
      uVar1 = param_2 | 0x8000000000000;
    }
  }
  else {
    if (uVar7 == 0) {
      if (uVar14 == 0) {
        if ((uVar5 >> 0x14 & 0x7ff | uVar6) == 0) {
          _DAT_a0840f088b = _DAT_a0840f088b | 0x10;
          return 0x7fffffffffffffff;
        }
        _DAT_a0840f088b = _DAT_a0840f088b | 2;
        return uVar12 & 0x8000000000000000 | 0x7ff0000000000000;
      }
      bVar23 = uVar14 >> 0x20 == 0;
      uVar5 = (uint)(uVar14 >> 0x20);
      if (bVar23) {
        uVar5 = (uint)param_2;
      }
      uVar7 = uVar5 << 0x10;
      if (uVar5 >= 0x10000) {
        uVar7 = uVar5;
      }
      uVar10 = (uint)(uVar5 < 0x10000) * 0x10;
      uVar18 = uVar10 + 8;
      uVar5 = uVar7 << 8;
      if (0xffffff < uVar7) {
        uVar18 = uVar10;
        uVar5 = uVar7;
      }
      iVar16 = (uVar18 | (uint)bVar23 << 5) +
               *(int *)(countLeadingZeros32_countLeadingZerosHigh + (ulong)(uVar5 >> 0x18) * 4);
      uVar14 = uVar14 << ((char)iVar16 - 0xbU & 0x3f);
      uVar7 = 0xc - iVar16;
    }
    else if (uVar7 == 0x7ff) {
      if (uVar14 == 0) {
        return uVar1;
      }
      goto LAB_001001ec;
    }
    if (uVar13 == 0) {
      if (uVar6 == 0) {
        return uVar1;
      }
      bVar23 = uVar6 >> 0x20 == 0;
      uVar5 = (uint)(uVar6 >> 0x20);
      if (bVar23) {
        uVar5 = (uint)param_1;
      }
      uVar13 = uVar5 << 0x10;
      if (uVar5 >= 0x10000) {
        uVar13 = uVar5;
      }
      uVar10 = (uint)(uVar5 < 0x10000) * 0x10;
      uVar5 = uVar10 + 8;
      uVar18 = uVar13 << 8;
      if (0xffffff < uVar13) {
        uVar5 = uVar10;
        uVar18 = uVar13;
      }
      iVar16 = (uVar5 | (uint)bVar23 << 5) +
               *(int *)(countLeadingZeros32_countLeadingZerosHigh + (ulong)(uVar18 >> 0x18) * 4);
      uVar6 = uVar6 << ((char)iVar16 - 0xbU & 0x3f);
      uVar13 = 0xc - iVar16;
    }
    uVar9 = uVar6 << 10 | 0x4000000000000000;
    uVar17 = uVar14 << 0xb;
    uVar6 = uVar17 | 0x8000000000000000;
    bVar23 = uVar6 <= uVar9 * 2;
    uVar9 = uVar9 >> bVar23;
    uVar1 = 0xffffffffffffffff;
    if (uVar9 < uVar6) {
      uVar19 = uVar6 >> 0x20;
      uVar3 = uVar17 & 0xffffffff00000000 | 0x8000000000000000;
      uVar11 = 0xffffffff00000000;
      if (uVar9 < uVar3) {
        uVar11 = uVar9 / uVar19 << 0x20;
      }
      uVar8 = (uVar17 & 0xffffffff) * (uVar11 >> 0x20);
      uVar15 = uVar11 * uVar6;
      uVar1 = -uVar15;
      lVar2 = ((uVar9 - ((uVar8 >> 0x20) + (uVar11 >> 0x20) * uVar19)) - (ulong)(uVar15 != 0)) -
              (ulong)(uVar15 < uVar8 << 0x20);
      if (lVar2 < 0) {
        do {
          uVar11 = uVar11 - 0x100000000;
          bVar20 = CARRY8(uVar1,uVar14 << 0x2b);
          uVar1 = uVar1 + (uVar14 << 0x2b);
          lVar2 = lVar2 + uVar19 + (ulong)bVar20;
        } while (lVar2 < 0);
      }
      uVar14 = uVar1 >> 0x20 | lVar2 << 0x20;
      uVar1 = 0xffffffff;
      if (uVar14 < uVar3) {
        uVar1 = uVar14 / uVar19;
      }
      uVar1 = uVar1 | uVar11;
    }
    if (((uint)uVar1 & 0x1ff) < 3) {
      uVar11 = (uVar17 & 0xffffffff) * (uVar1 >> 0x20);
      uVar17 = (uVar1 & 0xffffffff) * (uVar6 >> 0x20);
      uVar3 = uVar17 + uVar11;
      uVar19 = uVar1 * uVar6;
      uVar14 = -uVar19;
      for (lVar2 = (((uVar9 - (uVar19 != 0)) - ((uVar3 >> 0x20) + (uVar1 >> 0x20) * (uVar6 >> 0x20))
                    ) + ((ulong)!CARRY8(uVar17,uVar11) << 0x20) + -0x100000000) -
                   (ulong)(uVar19 < uVar3 << 0x20); lVar2 < 0; lVar2 = lVar2 + (ulong)bVar20) {
        uVar1 = uVar1 - 1;
        bVar20 = CARRY8(uVar14,uVar6);
        uVar14 = uVar14 + uVar6;
      }
      uVar1 = uVar1 | uVar14 != 0;
    }
    uVar5 = (uint)bVar23 + (uVar13 - uVar7) + 0x3fd;
    if (_DAT_fe832274f685318b == 0) {
      lVar2 = 0x200;
      lVar4 = 0;
    }
    else if (_DAT_fe832274f685318b == 1) {
      lVar4 = -1;
      lVar2 = 0;
    }
    else {
      if ((long)uVar12 < 0) {
        bVar23 = _DAT_fe832274f685318b == 2;
      }
      else {
        bVar23 = _DAT_fe832274f685318b == 3;
      }
      lVar2 = 0x3ff;
      if (bVar23) {
        lVar2 = 0;
      }
      lVar4 = -(ulong)bVar23;
    }
    uVar7 = (uint)uVar1 & 0x3ff;
    uVar6 = (ulong)uVar5;
    if (0x7fc < (uVar5 & 0xffff)) {
      if ((0x7fd < (int)uVar5) || ((uVar5 == 0x7fd && ((long)(lVar2 + uVar1) < 0)))) {
        DAT_b848e1214d090880 = DAT_b848e1214d090880 | 9;
        return (uVar12 & 0x8000000000000000 | 0x7ff0000000000000) + lVar4;
      }
      if ((int)uVar5 < 0) {
        if ((int)uVar5 < -0x3f) {
          uVar1 = (ulong)(uVar1 != 0);
        }
        else {
          uVar1 = (ulong)(uVar1 << ((byte)uVar5 & 0x3f) != 0) | uVar1 >> (-(byte)uVar5 & 0x3f);
        }
        uVar6 = 0;
        uVar7 = (uint)uVar1 & 0x3ff;
        if ((uVar1 & 0x3ff) == 0) {
          uVar7 = 0;
        }
        else {
          DAT_d2314503eb040980 = DAT_d2314503eb040980 | 4;
          uVar6 = 0;
        }
      }
    }
    if (uVar7 != 0) {
      DAT_c148f80148010980 = DAT_c148f80148010980 | 1;
    }
    uVar14 = ~(ulong)((_DAT_fe832274f685318b | uVar7 ^ 0x200) == 0) & uVar1 + lVar2 >> 10;
    uVar1 = uVar6 << 0x34;
    if (uVar14 == 0) {
      uVar1 = uVar14;
    }
    uVar1 = (uVar12 & 0x8000000000000000 | uVar14) + uVar1;
  }
  return uVar1;
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


