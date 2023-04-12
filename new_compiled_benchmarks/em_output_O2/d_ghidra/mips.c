#include "mips.h"



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int submain(void)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  undefined4 uVar7;
  byte bVar8;
  ulong uVar9;
  short sVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  bool bVar16;
  undefined local_1b8 [16];
  undefined local_1a8 [16];
  undefined local_198 [16];
  undefined local_188 [16];
  undefined local_178 [16];
  undefined local_168 [16];
  undefined local_158 [16];
  undefined local_148 [16];
  undefined local_138 [16];
  undefined local_128 [8];
  int iStack_120;
  int iStack_11c;
  int iStack_118;
  int local_114;
  int local_110;
  int local_10c;
  
  uVar15 = 0;
  uVar3 = gettimeofday((timeval *)local_128,(__timezone_ptr_t)0x0);
  if (uVar3 != 0) {
    printf("Error return from gettimeofday: %d",(ulong)uVar3);
  }
  _DAT_c0570f660b110ff2 =
       (double)iStack_120 * 1e-06 + (double)CONCAT44(local_128._4_4_,local_128._0_4_);
  local_1b8 = ZEXT816(0);
  local_148 = ZEXT816(0x7fffeffc00000000);
  local_1a8 = local_1b8;
  local_198 = local_1b8;
  local_188 = local_1b8;
  local_178 = local_1b8;
  local_168 = local_1b8;
  local_158 = local_1b8;
  memcpy(local_128,(void *)0x9024bc8d48,0x100);
  uVar5 = 0x400000;
  uVar9 = 0;
  iVar12 = 0;
  do {
    iVar4 = iVar12;
    uVar1 = *(ulong *)(&DAT_480000043c358d48 + (ulong)((uint)(uVar5 >> 2) & 0x3f) * 8);
    uVar3 = (int)uVar5 + 4;
    uVar13 = (uint)uVar1;
    uVar2 = (uVar1 & 0xffffffff) >> 0x1a;
    iVar12 = (int)uVar2;
    if (iVar12 == 3) {
      local_148 = CONCAT412(uVar3,local_148._0_12_);
LAB_001000e5:
      uVar3 = uVar13 * 4 & 0xffffffc;
      goto LAB_001000f4;
    }
    if (iVar12 == 2) goto LAB_001000e5;
    uVar6 = (uint)(uVar1 >> 0x10);
    if (uVar2 != 0) {
      uVar14 = uVar6 & 0x1f;
      uVar11 = (uint)((uVar1 & 0xffffffff) >> 0x15) & 0x1f;
      sVar10 = (short)uVar1;
      switch(iVar12) {
      case 1:
        if (-1 < *(int *)(local_1b8 + (ulong)uVar11 * 4)) {
LAB_001001f4:
          uVar3 = (int)uVar5 + sVar10 * 4;
        }
        break;
      default:
        goto switchD_001001b8_caseD_2;
      case 4:
        if (*(int *)(local_1b8 + (ulong)uVar11 * 4) == *(int *)(local_1b8 + (ulong)uVar14 * 4))
        goto LAB_001001f4;
        break;
      case 5:
        if (*(int *)(local_1b8 + (ulong)uVar11 * 4) != *(int *)(local_1b8 + (ulong)uVar14 * 4))
        goto LAB_001001f4;
        break;
      case 9:
        iVar12 = (int)sVar10;
        goto LAB_00100335;
      case 10:
        bVar16 = SBORROW4(*(int *)(local_1b8 + (ulong)uVar11 * 4),(int)sVar10);
        iVar12 = *(int *)(local_1b8 + (ulong)uVar11 * 4) - (int)sVar10;
        goto LAB_0010039d;
      case 0xb:
        bVar16 = *(uint *)(local_1b8 + (ulong)uVar11 * 4) < (uVar13 & 0xffff);
        goto LAB_001003b2;
      case 0xc:
        uVar13 = *(ushort *)(local_1b8 + (ulong)uVar11 * 4) & uVar13;
        goto LAB_00100348;
      case 0xd:
        uVar13 = uVar13 & 0xffff | *(uint *)(local_1b8 + (ulong)uVar11 * 4);
        goto LAB_00100382;
      case 0xe:
        uVar13 = uVar13 & 0xffff;
        goto LAB_0010037e;
      case 0xf:
        *(uint *)(local_1b8 + (ulong)uVar14 * 4) = uVar13 << 0x10;
        break;
      case 0x23:
        uVar13 = *(uint *)(local_128 +
                          (ulong)(*(int *)(local_1b8 + (ulong)uVar11 * 4) + uVar13 >> 2 & 0x3f) * 4)
        ;
LAB_00100348:
        *(uint *)(local_1b8 + (ulong)uVar14 * 4) = uVar13;
        break;
      case 0x2b:
        *(undefined4 *)
         (local_128 + (ulong)(*(int *)(local_1b8 + (ulong)uVar11 * 4) + uVar13 >> 2 & 0x3f) * 4) =
             *(undefined4 *)(local_1b8 + (ulong)uVar14 * 4);
      }
      goto LAB_001000f4;
    }
    bVar8 = (byte)((uVar1 & 0xffffffff) >> 6);
    uVar14 = (uint)((uVar1 & 0xffffffff) >> 0xb) & 0x1f;
    uVar6 = uVar6 & 0x1f;
    uVar11 = uVar13 >> 0x15 & 0x1f;
    switch(uVar13 & 0x3f) {
    case 0:
      uVar13 = *(int *)(local_1b8 + (ulong)uVar6 * 4) << (bVar8 & 0x1f);
      break;
    default:
switchD_001001b8_caseD_2:
      local_1b8 = ZEXT1216(local_1b8._4_12_) << 0x20;
      goto LAB_001003ca;
    case 2:
      uVar13 = *(int *)(local_1b8 + (ulong)uVar6 * 4) >> (bVar8 & 0x1f);
      break;
    case 4:
      uVar13 = *(int *)(local_1b8 + (ulong)uVar6 * 4) << (local_1b8[(ulong)uVar11 * 4] & 0x1f);
      goto LAB_001003b6;
    case 6:
      uVar13 = *(int *)(local_1b8 + (ulong)uVar6 * 4) >> (local_1b8[(ulong)uVar11 * 4] & 0x1f);
      goto LAB_001003b6;
    case 8:
      uVar3 = *(uint *)(local_1b8 + (ulong)uVar11 * 4);
      goto LAB_001000f4;
    case 0x10:
      *(int *)(local_1b8 + (ulong)uVar14 * 4) = (int)uVar9;
      goto LAB_001000f4;
    case 0x12:
      *(int *)(local_1b8 + (ulong)uVar14 * 4) = (int)uVar15;
      goto LAB_001000f4;
    case 0x18:
      uVar5 = (ulong)*(int *)(local_1b8 + (ulong)uVar11 * 4);
      uVar15 = (ulong)*(int *)(local_1b8 + (ulong)uVar6 * 4);
      goto LAB_0010031b;
    case 0x19:
      uVar5 = (ulong)*(uint *)(local_1b8 + (ulong)uVar11 * 4);
      uVar15 = (ulong)*(uint *)(local_1b8 + (ulong)uVar6 * 4);
LAB_0010031b:
      uVar15 = uVar15 * uVar5;
      uVar9 = uVar15 >> 0x20;
      goto LAB_001000f4;
    case 0x21:
      iVar12 = *(int *)(local_1b8 + (ulong)uVar6 * 4);
LAB_00100335:
      uVar13 = iVar12 + *(int *)(local_1b8 + (ulong)uVar11 * 4);
      break;
    case 0x23:
      uVar13 = *(int *)(local_1b8 + (ulong)uVar11 * 4) - *(int *)(local_1b8 + (ulong)uVar6 * 4);
      goto LAB_00100348;
    case 0x24:
      uVar13 = *(uint *)(local_1b8 + (ulong)uVar6 * 4) & *(uint *)(local_1b8 + (ulong)uVar11 * 4);
      break;
    case 0x25:
      uVar13 = *(uint *)(local_1b8 + (ulong)uVar6 * 4) | *(uint *)(local_1b8 + (ulong)uVar11 * 4);
      break;
    case 0x26:
      uVar13 = *(uint *)(local_1b8 + (ulong)uVar6 * 4);
LAB_0010037e:
      uVar13 = uVar13 ^ *(uint *)(local_1b8 + (ulong)uVar11 * 4);
      break;
    case 0x2a:
      bVar16 = SBORROW4(*(int *)(local_1b8 + (ulong)uVar11 * 4),
                        *(int *)(local_1b8 + (ulong)uVar6 * 4));
      iVar12 = *(int *)(local_1b8 + (ulong)uVar11 * 4) - *(int *)(local_1b8 + (ulong)uVar6 * 4);
LAB_0010039d:
      uVar13 = (uint)(bVar16 != iVar12 < 0);
      goto LAB_001003b6;
    case 0x2b:
      bVar16 = *(uint *)(local_1b8 + (ulong)uVar11 * 4) < *(uint *)(local_1b8 + (ulong)uVar6 * 4);
LAB_001003b2:
      uVar13 = (uint)bVar16;
LAB_001003b6:
      *(uint *)(local_1b8 + (ulong)uVar14 * 4) = uVar13;
      goto LAB_001000f4;
    }
LAB_00100382:
    *(uint *)(local_1b8 + (ulong)uVar14 * 4) = uVar13;
LAB_001000f4:
    local_1b8 = ZEXT1216(local_1b8._4_12_) << 0x20;
    uVar5 = (ulong)uVar3;
    iVar12 = iVar4 + 1;
  } while (uVar3 != 0);
LAB_001003ca:
  uVar7 = movmskps((uint)(local_110 != 0x16),
                   CONCAT412(-(uint)(iStack_118 == 5),
                             CONCAT48(-(uint)(iStack_11c == 3),
                                      CONCAT44(-(uint)(iStack_120 == 0),
                                               -(uint)(local_128._4_4_ == -9)))));
  bVar8 = (byte)uVar7 ^ 0xf;
  bVar8 = bVar8 - (bVar8 >> 1 & 5);
  bVar8 = (bVar8 >> 2 & 0x33) + (bVar8 & 0x33);
  _DAT_8024bc8d48168941 =
       (uint)(local_114 != 0xb) + (uint)(iVar4 != 0x262) + (uint)(local_128._0_4_ != -0x11) +
       (uint)(local_10c != 0x26) + (uint)(local_110 != 0x16) + (uint)((bVar8 >> 4) + bVar8 & 0xf);
  uVar3 = gettimeofday((timeval *)local_138,(__timezone_ptr_t)0x0);
  if (uVar3 != 0) {
    printf("Error return from gettimeofday: %d",(ulong)uVar3);
  }
  _DAT_35c0ff200110ff2 = (double)local_138._8_4_ * 1e-06 + (double)local_138._0_8_;
  printf("%0.6f\n",_DAT_35c0ff200110ff2 - _DAT_c0570f660b110ff2);
  return _DAT_8024bc8d48168941;
}


