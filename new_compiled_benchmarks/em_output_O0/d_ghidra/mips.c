#include "mips.h"



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 submain(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  int local_1d8;
  int local_1d4;
  short local_1b0;
  ushort uStack_1ae;
  int local_1ac;
  uint auStack_1a8 [65];
  uint local_a4;
  undefined8 local_a0;
  uint local_98 [34];
  long local_10;
  
  local_a0._4_4_ = 0;
  local_a0._0_4_ = 0;
  local_a4 = 0;
  _DAT_fe3085c700110ff2 = rtclock();
  local_1d8 = 0;
  _DAT_85c70000000000c7 = 0;
  for (local_1d4 = 0; local_1d4 < 0x20; local_1d4 = local_1d4 + 1) {
    local_98[local_1d4] = 0;
  }
  local_98[29] = 0x7fffeffc;
  for (local_1d4 = 0; local_1d4 < 0x40; local_1d4 = local_1d4 + 1) {
    auStack_1a8[local_1d4] = *(uint *)((long)local_1d4 * 4 + -0x1cb7a9cb777f375);
  }
  local_a4 = 0x400000;
  do {
    uVar3 = local_a4;
    local_a0._4_4_ = (uint)((ulong)local_a0 >> 0x20);
    uVar1 = *(uint *)((ulong)((byte)local_a4 >> 2) * 8 + -0x1a77a7637fb75);
    local_a4 = local_a4 + 4;
    uVar2 = uVar1 >> 0x1a;
    uStack_1ae = (ushort)(uVar1 >> 0x10);
    if (uVar2 == 0) {
      bVar6 = (byte)(uVar1 >> 6) & 0x1f;
      uVar3 = uVar1 >> 0xb & 0x1f;
      uVar2 = uStack_1ae & 0x1f;
      uVar4 = uVar1 >> 0x15 & 0x1f;
      switch(uVar1 & 0x3f) {
      case 0:
        local_98[(int)uVar3] = local_98[(int)uVar2] << bVar6;
        break;
      default:
        local_a4 = 0;
        break;
      case 2:
        local_98[(int)uVar3] = (int)local_98[(int)uVar2] >> bVar6;
        break;
      case 4:
        local_98[(int)uVar3] = local_98[(int)uVar2] << ((byte)local_98[(int)uVar4] & 0x1f);
        break;
      case 6:
        local_98[(int)uVar3] = (int)local_98[(int)uVar2] >> ((byte)local_98[(int)uVar4] & 0x1f);
        break;
      case 8:
        local_a4 = local_98[(int)uVar4];
        break;
      case 0x10:
        local_98[(int)uVar3] = local_a0._4_4_;
        break;
      case 0x12:
        local_98[(int)uVar3] = (uint)local_a0;
        break;
      case 0x18:
        local_a0 = (long)(int)local_98[(int)uVar4] * (long)(int)local_98[(int)uVar2];
        local_10 = local_a0;
        local_a0._0_4_ = (int)local_a0;
        local_a0._4_4_ = (int)((ulong)local_a0 >> 0x20);
        break;
      case 0x19:
        local_a0 = (ulong)local_98[(int)uVar4] * (ulong)local_98[(int)uVar2];
        local_10 = local_a0;
        local_a0._0_4_ = (int)local_a0;
        local_a0._4_4_ = (int)((ulong)local_a0 >> 0x20);
        break;
      case 0x21:
        local_98[(int)uVar3] = local_98[(int)uVar4] + local_98[(int)uVar2];
        break;
      case 0x23:
        local_98[(int)uVar3] = local_98[(int)uVar4] - local_98[(int)uVar2];
        break;
      case 0x24:
        local_98[(int)uVar3] = local_98[(int)uVar4] & local_98[(int)uVar2];
        break;
      case 0x25:
        local_98[(int)uVar3] = local_98[(int)uVar4] | local_98[(int)uVar2];
        break;
      case 0x26:
        local_98[(int)uVar3] = local_98[(int)uVar4] ^ local_98[(int)uVar2];
        break;
      case 0x2a:
        local_98[(int)uVar3] = (uint)((int)local_98[(int)uVar4] < (int)local_98[(int)uVar2]);
        break;
      case 0x2b:
        local_98[(int)uVar3] = (uint)(local_98[(int)uVar4] < local_98[(int)uVar2]);
      }
    }
    else if (uVar2 == 2) {
      local_a4 = (uVar1 & 0x3ffffff) << 2;
    }
    else if (uVar2 == 3) {
      local_98[31] = local_a4;
      local_a4 = (uVar1 & 0x3ffffff) << 2;
    }
    else {
      local_1b0 = (short)uVar1;
      uVar4 = uStack_1ae & 0x1f;
      uVar5 = uVar1 >> 0x15 & 0x1f;
      switch(uVar2) {
      case 1:
        if (-1 < (int)local_98[(int)uVar5]) {
          local_a4 = uVar3 + local_1b0 * 4;
        }
        break;
      default:
        local_a4 = 0;
        break;
      case 4:
        if (local_98[(int)uVar5] == local_98[(int)uVar4]) {
          local_a4 = uVar3 + local_1b0 * 4;
        }
        break;
      case 5:
        if (local_98[(int)uVar5] != local_98[(int)uVar4]) {
          local_a4 = uVar3 + local_1b0 * 4;
        }
        break;
      case 9:
        local_98[(int)uVar4] = local_98[(int)uVar5] + (int)local_1b0;
        break;
      case 10:
        local_98[(int)uVar4] = (uint)((int)local_98[(int)uVar5] < (int)local_1b0);
        break;
      case 0xb:
        local_98[(int)uVar4] = (uint)(local_98[(int)uVar5] < (uVar1 & 0xffff));
        break;
      case 0xc:
        local_98[(int)uVar4] = local_98[(int)uVar5] & uVar1 & 0xffff;
        break;
      case 0xd:
        local_98[(int)uVar4] = local_98[(int)uVar5] | uVar1 & 0xffff;
        break;
      case 0xe:
        local_98[(int)uVar4] = local_98[(int)uVar5] ^ uVar1 & 0xffff;
        break;
      case 0xf:
        local_98[(int)uVar4] = (int)local_1b0 << 0x10;
        break;
      case 0x23:
        local_98[(int)uVar4] = auStack_1a8[(int)(local_98[(int)uVar5] + (int)local_1b0 & 0xff) >> 2]
        ;
        break;
      case 0x2b:
        auStack_1a8[(int)(local_98[(int)uVar5] + (int)local_1b0 & 0xff) >> 2] = local_98[(int)uVar4]
        ;
      }
    }
    local_98[0] = 0;
    local_1d8 = local_1d8 + 1;
  } while (local_a4 != 0);
  _DAT_fffffe5c85c70889 = (uint)(local_1d8 != 0x263) + _DAT_58b480803;
  for (local_1ac = 0; local_1ac < 8; local_1ac = local_1ac + 1) {
    _DAT_fffffe5c858b0889 =
         (uint)(auStack_1a8[local_1ac] != *(uint *)((long)local_1ac * 4 + 0x124c0950f91043b)) +
         _DAT_58b480803;
  }
  _DAT_58b4800110ff2 = rtclock();
  printf("%0.6f\n",_DAT_58b4800100ff2 - _DAT_9f3d8d48005c0ff2);
  return _DAT_1f0c48148008b;
}



double rtclock(void)

{
  uint uVar1;
  undefined local_18 [16];
  
  uVar1 = gettimeofday((timeval *)local_18,(__timezone_ptr_t)0x0);
  if (uVar1 != 0) {
    printf("Error return from gettimeofday: %d",(ulong)uVar1);
  }
  return (double)local_18._8_4_ * 1e-06 + (double)local_18._0_8_;
}


