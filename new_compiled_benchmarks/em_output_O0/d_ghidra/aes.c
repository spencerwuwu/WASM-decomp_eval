#include "aes.h"



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void encrypt(char *__block,int __edflag)

{
  int in_EDX;
  undefined4 in_register_00000034;
  int local_68 [18];
  int local_20;
  int local_1c;
  undefined8 local_18;
  char *local_10;
  
  local_18 = CONCAT44(in_register_00000034,__edflag);
  local_68[12] = 0x19;
  local_68[13] = 0x6a;
  local_68[14] = 0xb;
  local_68[15] = 0x32;
  local_68[8] = 0xdc;
  local_68[9] = 0x11;
  local_68[10] = 0x85;
  local_68[11] = 0x97;
  local_68[4] = 2;
  local_68[5] = 0xdc;
  local_68[6] = 9;
  local_68[7] = 0xfb;
  local_68[0] = 0x39;
  local_68[1] = 0x25;
  local_68[2] = 0x84;
  local_68[3] = 0x1d;
  local_1c = in_EDX;
  local_10 = __block;
  KeySchedule(in_EDX,local_18);
  if (local_1c == 0x1f480) {
    _DAT_8b480000000000c7 = 0;
    _DAT_96e90000000400c7 = 4;
    goto LAB_001001ae;
  }
  if (local_1c == 0x1f4c0) {
LAB_00100156:
    _DAT_8b480000000200c7 = 2;
    _DAT_39e90000000600c7 = 6;
  }
  else {
    if (local_1c != 0x1f500) {
      if (local_1c == 0x2ee80) {
        _DAT_8b480000000200c7 = 2;
        _DAT_77e90000000400c7 = 4;
        goto LAB_001001ae;
      }
      if (local_1c == 0x2eec0) goto LAB_00100156;
      if (local_1c != 0x2ef00) {
        if (local_1c == 0x3e880) {
          _DAT_8b480000000400c7 = 4;
          _DAT_58e90000000400c7 = 4;
          goto LAB_001001ae;
        }
        if (local_1c == 0x3e8c0) {
          _DAT_8b480000000400c7 = 4;
          _DAT_1ae90000000600c7 = 6;
          goto LAB_001001ae;
        }
        if (local_1c != 0x3e900) goto LAB_001001ae;
      }
    }
    _DAT_8b480000000400c7 = 4;
    _DAT_8b480000000800c7 = 8;
  }
LAB_001001ae:
  AddRoundKey(local_10,local_1c,0);
  for (local_20 = 1; local_20 <= _DAT_fc83909c183098b + 9; local_20 = local_20 + 1) {
    ByteSub_ShiftRow(local_10,_DAT_48000006b4e8308b);
    MixColumn_AddRoundKey(local_10,_DAT_155fe8e8558b308b,local_20);
  }
  ByteSub_ShiftRow(local_10,_DAT_480000067fe8308b);
  AddRoundKey(local_10,local_1c,local_20);
  for (local_20 = 0; local_20 < 0x10; local_20 = local_20 + 1) {
    _DAT_1c083e8458b0889 =
         (uint)(*(int *)(local_10 + (long)local_20 * 4) != local_68[local_20]) + _DAT_58b480803;
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x00100641)
// WARNING: Restarted to delay deadcode elimination for space: stack

undefined4 KeySchedule(int param_1,long param_2)

{
  uint local_48 [7];
  uint local_2c;
  int local_28;
  int local_24;
  int local_20;
  uint local_1c;
  long local_18;
  int local_10;
  
  local_10 = param_1;
  local_18 = param_2;
  if (param_1 == 0x1f480) {
    local_1c = 4;
    local_20 = 4;
    local_24 = 10;
  }
  else if (param_1 == 0x1f4c0) {
    local_1c = 4;
    local_20 = 6;
    local_24 = 0xc;
  }
  else if (param_1 == 0x1f500) {
    local_1c = 4;
    local_20 = 8;
    local_24 = 0xe;
  }
  else if (param_1 == 0x2ee80) {
    local_1c = 6;
    local_20 = 4;
    local_24 = 0xc;
  }
  else if (param_1 == 0x2eec0) {
    local_1c = 6;
    local_20 = 6;
    local_24 = 0xc;
  }
  else if (param_1 == 0x2ef00) {
    local_1c = 6;
    local_20 = 8;
    local_24 = 0xe;
  }
  else if (param_1 == 0x3e880) {
    local_1c = 8;
    local_20 = 4;
    local_24 = 0xe;
  }
  else if (param_1 == 0x3e8c0) {
    local_1c = 8;
    local_20 = 6;
    local_24 = 0xe;
  }
  else {
    if (param_1 != 0x3e900) {
      return 0xffffffff;
    }
    local_1c = 8;
    local_20 = 8;
    local_24 = 0xe;
  }
  for (local_2c = 0; (int)local_2c < (int)local_1c; local_2c = local_2c + 1) {
    for (local_28 = 0; local_28 < 4; local_28 = local_28 + 1) {
      *(undefined4 *)((long)local_28 * 0x1e0 + 0x48000001e0c96948 + (long)(int)local_2c * 4) =
           *(undefined4 *)(param_2 + (long)(int)(local_28 + local_2c * 4) * 4);
    }
  }
  local_2c = local_1c;
  while( true ) {
    if (local_20 * (local_24 + 1) <= (int)local_2c) {
      return 0;
    }
    if ((int)local_2c % (int)local_1c == 0) break;
    if ((int)local_2c % (int)local_1c != 0) {
      local_48[0] = *(uint *)((long)(int)(local_2c - 1) * 4 + 0x458bc0458988048b);
      local_48[1] = *(undefined4 *)((long)(int)(local_2c - 1) * 4 + -0x76fffffe1f777995);
      local_48[2] = *(undefined4 *)((long)(int)(local_2c - 1) * 4 + -0x76fffffc3f7777b5);
      local_48[3] = *(undefined4 *)((long)(int)(local_2c - 1) * 4 + -0x76fffffa5f7775d5);
    }
    if ((6 < local_1c) && ((int)local_2c % (int)local_1c == 4)) {
      local_28 = 0;
                    // WARNING: Subroutine does not return
      SubByte(local_48[0]);
    }
    for (local_28 = 0; local_28 < 4; local_28 = local_28 + 1) {
      *(uint *)((long)local_28 * 0x1e0 + 0x48000001e0c96948 + (long)(int)local_2c * 4) =
           *(uint *)((long)local_28 * 0x1e0 + 0x48000001e0c96948 +
                    (long)(int)(local_2c - local_1c) * 4) ^ local_48[local_28];
    }
    local_2c = local_2c + 1;
  }
                    // WARNING: Subroutine does not return
  SubByte(*(undefined4 *)((long)(int)(local_2c - 1) * 4 + -0x17fffffe1f774195));
}



undefined8 AddRoundKey(long param_1,int param_2,int param_3)

{
  long lVar1;
  int local_20;
  int local_1c;
  
  if (param_2 == 0x1f480) {
LAB_0010078c:
    local_20 = 4;
  }
  else {
    if (param_2 == 0x1f4c0) {
LAB_00100798:
      local_20 = 6;
      goto LAB_001007ab;
    }
    if (param_2 != 0x1f500) {
      if (param_2 == 0x2ee80) goto LAB_0010078c;
      if (param_2 == 0x2eec0) goto LAB_00100798;
      if (param_2 != 0x2ef00) {
        if (param_2 == 0x3e880) goto LAB_0010078c;
        if (param_2 == 0x3e8c0) goto LAB_00100798;
        if (param_2 != 0x3e900) goto LAB_001007ab;
      }
    }
    local_20 = 8;
  }
LAB_001007ab:
  for (local_1c = 0; local_1c < local_20; local_1c = local_1c + 1) {
    *(uint *)(param_1 + (long)(local_1c << 2) * 4) =
         *(uint *)((long)(local_1c + local_20 * param_3) * 4 + -0x7407ba74b777eb75) ^
         *(uint *)(param_1 + (long)(local_1c << 2) * 4);
    lVar1 = (long)(local_1c * 4 + 1);
    *(uint *)(param_1 + lVar1 * 4) =
         *(uint *)((long)(local_1c + local_20 * param_3) * 4 + 0x48000001e088966b) ^
         *(uint *)(param_1 + lVar1 * 4);
    lVar1 = (long)(local_1c * 4 + 2);
    *(uint *)(param_1 + lVar1 * 4) =
         *(uint *)((long)(local_1c + local_20 * param_3) * 4 + 0x48000003c088984b) ^
         *(uint *)(param_1 + lVar1 * 4);
    lVar1 = (long)(local_1c * 4 + 3);
    *(uint *)(param_1 + lVar1 * 4) =
         *(uint *)((long)(local_1c + local_20 * param_3) * 4 + 0x48000005a0889a2b) ^
         *(uint *)(param_1 + lVar1 * 4);
  }
  return 0;
}



void ByteSub_ShiftRow(uint *param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 == 4) {
    uVar1 = *(uint *)((long)((int)param_1[1] >> 4) * 0x40 + 0x48c8014806e1c148 +
                     (long)(int)(param_1[1] & 0xf) * 4);
    param_1[1] = *(uint *)((long)((int)param_1[5] >> 4) * 0x40 + 0x48c8014806e1c148 +
                          (long)(int)(param_1[5] & 0xf) * 4);
    param_1[5] = *(uint *)((long)((int)param_1[9] >> 4) * 0x40 + 0x48c8014806e1c148 +
                          (long)(int)(param_1[9] & 0xf) * 4);
    param_1[9] = *(uint *)((long)((int)param_1[0xd] >> 4) * 0x40 + 0x48c8014806e1c148 +
                          (long)(int)(param_1[0xd] & 0xf) * 4);
    param_1[0xd] = uVar1;
    uVar1 = *(uint *)((long)((int)param_1[2] >> 4) * 0x40 + 0x48c8014806e1c148 +
                     (long)(int)(param_1[2] & 0xf) * 4);
    param_1[2] = *(uint *)((long)((int)param_1[10] >> 4) * 0x40 + 0x48c8014806e1c148 +
                          (long)(int)(param_1[10] & 0xf) * 4);
    param_1[10] = uVar1;
    uVar1 = *(uint *)((long)((int)param_1[6] >> 4) * 0x40 + 0x48c8014806e1c148 +
                     (long)(int)(param_1[6] & 0xf) * 4);
    param_1[6] = *(uint *)((long)((int)param_1[0xe] >> 4) * 0x40 + 0x48c8014806e1c148 +
                          (long)(int)(param_1[0xe] & 0xf) * 4);
    param_1[0xe] = uVar1;
    uVar1 = *(uint *)((long)((int)param_1[3] >> 4) * 0x40 + 0x48c8014806e1c148 +
                     (long)(int)(param_1[3] & 0xf) * 4);
    param_1[3] = *(uint *)((long)((int)param_1[0xf] >> 4) * 0x40 + 0x48c8014806e1c148 +
                          (long)(int)(param_1[0xf] & 0xf) * 4);
    param_1[0xf] = *(uint *)((long)((int)param_1[0xb] >> 4) * 0x40 + 0x48c8014806e1c148 +
                            (long)(int)(param_1[0xb] & 0xf) * 4);
    param_1[0xb] = *(uint *)((long)((int)param_1[7] >> 4) * 0x40 + 0x48c8014806e1c148 +
                            (long)(int)(param_1[7] & 0xf) * 4);
    param_1[7] = uVar1;
    *param_1 = *(uint *)((long)((int)*param_1 >> 4) * 0x40 + 0x48c8014806e1c148 +
                        (long)(int)(*param_1 & 0xf) * 4);
    param_1[4] = *(uint *)((long)((int)param_1[4] >> 4) * 0x40 + 0x48c8014806e1c148 +
                          (long)(int)(param_1[4] & 0xf) * 4);
    param_1[8] = *(uint *)((long)((int)param_1[8] >> 4) * 0x40 + 0x48c8014806e1c148 +
                          (long)(int)(param_1[8] & 0xf) * 4);
    param_1[0xc] = *(uint *)((long)((int)param_1[0xc] >> 4) * 0x40 + 0x48c8014806e1c148 +
                            (long)(int)(param_1[0xc] & 0xf) * 4);
  }
  else if (param_2 == 6) {
    uVar1 = *(uint *)((long)((int)param_1[1] >> 4) * 0x40 + 0x48c8014806e1c148 +
                     (long)(int)(param_1[1] & 0xf) * 4);
    param_1[1] = *(uint *)((long)((int)param_1[5] >> 4) * 0x40 + 0x48c8014806e1c148 +
                          (long)(int)(param_1[5] & 0xf) * 4);
    param_1[5] = *(uint *)((long)((int)param_1[9] >> 4) * 0x40 + 0x48c8014806e1c148 +
                          (long)(int)(param_1[9] & 0xf) * 4);
    param_1[9] = *(uint *)((long)((int)param_1[0xd] >> 4) * 0x40 + 0x48c8014806e1c148 +
                          (long)(int)(param_1[0xd] & 0xf) * 4);
    param_1[0xd] = *(uint *)((long)((int)param_1[0x11] >> 4) * 0x40 + 0x48c8014806e1c148 +
                            (long)(int)(param_1[0x11] & 0xf) * 4);
    param_1[0x11] =
         *(uint *)((long)((int)param_1[0x15] >> 4) * 0x40 + 0x48c8014806e1c148 +
                  (long)(int)(param_1[0x15] & 0xf) * 4);
    param_1[0x15] = uVar1;
    uVar1 = *(uint *)((long)((int)param_1[2] >> 4) * 0x40 + 0x48c8014806e1c148 +
                     (long)(int)(param_1[2] & 0xf) * 4);
    param_1[2] = *(uint *)((long)((int)param_1[10] >> 4) * 0x40 + 0x48c8014806e1c148 +
                          (long)(int)(param_1[10] & 0xf) * 4);
    param_1[10] = *(uint *)((long)((int)param_1[0x12] >> 4) * 0x40 + 0x48c8014806e1c148 +
                           (long)(int)(param_1[0x12] & 0xf) * 4);
    param_1[0x12] = uVar1;
    uVar1 = *(uint *)((long)((int)param_1[6] >> 4) * 0x40 + 0x48c8014806e1c148 +
                     (long)(int)(param_1[6] & 0xf) * 4);
    param_1[6] = *(uint *)((long)((int)param_1[0xe] >> 4) * 0x40 + 0x48c8014806e1c148 +
                          (long)(int)(param_1[0xe] & 0xf) * 4);
    param_1[0xe] = *(uint *)((long)((int)param_1[0x16] >> 4) * 0x40 + 0x48c8014806e1c148 +
                            (long)(int)(param_1[0x16] & 0xf) * 4);
    param_1[0x16] = uVar1;
    uVar1 = *(uint *)((long)((int)param_1[3] >> 4) * 0x40 + 0x48c8014806e1c148 +
                     (long)(int)(param_1[3] & 0xf) * 4);
    param_1[3] = *(uint *)((long)((int)param_1[0xf] >> 4) * 0x40 + 0x48c8014806e1c148 +
                          (long)(int)(param_1[0xf] & 0xf) * 4);
    param_1[0xf] = uVar1;
    uVar1 = *(uint *)((long)((int)param_1[7] >> 4) * 0x40 + 0x48c8014806e1c148 +
                     (long)(int)(param_1[7] & 0xf) * 4);
    param_1[7] = *(uint *)((long)((int)param_1[0x13] >> 4) * 0x40 + 0x48c8014806e1c148 +
                          (long)(int)(param_1[0x13] & 0xf) * 4);
    param_1[0x13] = uVar1;
    uVar1 = *(uint *)((long)((int)param_1[0xb] >> 4) * 0x40 + 0x48c8014806e1c148 +
                     (long)(int)(param_1[0xb] & 0xf) * 4);
    param_1[0xb] = *(uint *)((long)((int)param_1[0x17] >> 4) * 0x40 + 0x48c8014806e1c148 +
                            (long)(int)(param_1[0x17] & 0xf) * 4);
    param_1[0x17] = uVar1;
    *param_1 = *(uint *)((long)((int)*param_1 >> 4) * 0x40 + 0x48c8014806e1c148 +
                        (long)(int)(*param_1 & 0xf) * 4);
    param_1[4] = *(uint *)((long)((int)param_1[4] >> 4) * 0x40 + 0x48c8014806e1c148 +
                          (long)(int)(param_1[4] & 0xf) * 4);
    param_1[8] = *(uint *)((long)((int)param_1[8] >> 4) * 0x40 + 0x48c8014806e1c148 +
                          (long)(int)(param_1[8] & 0xf) * 4);
    param_1[0xc] = *(uint *)((long)((int)param_1[0xc] >> 4) * 0x40 + 0x48c8014806e1c148 +
                            (long)(int)(param_1[0xc] & 0xf) * 4);
    param_1[0x10] =
         *(uint *)((long)((int)param_1[0x10] >> 4) * 0x40 + 0x48c8014806e1c148 +
                  (long)(int)(param_1[0x10] & 0xf) * 4);
    param_1[0x14] =
         *(uint *)((long)((int)param_1[0x14] >> 4) * 0x40 + 0x48c8014806e1c148 +
                  (long)(int)(param_1[0x14] & 0xf) * 4);
  }
  else if (param_2 == 8) {
    uVar1 = *(uint *)((long)((int)param_1[1] >> 4) * 0x40 + 0x48c8014806e1c148 +
                     (long)(int)(param_1[1] & 0xf) * 4);
    param_1[1] = *(uint *)((long)((int)param_1[5] >> 4) * 0x40 + 0x48c8014806e1c148 +
                          (long)(int)(param_1[5] & 0xf) * 4);
    param_1[5] = *(uint *)((long)((int)param_1[9] >> 4) * 0x40 + 0x48c8014806e1c148 +
                          (long)(int)(param_1[9] & 0xf) * 4);
    param_1[9] = *(uint *)((long)((int)param_1[0xd] >> 4) * 0x40 + 0x48c8014806e1c148 +
                          (long)(int)(param_1[0xd] & 0xf) * 4);
    param_1[0xd] = *(uint *)((long)((int)param_1[0x11] >> 4) * 0x40 + 0x48c8014806e1c148 +
                            (long)(int)(param_1[0x11] & 0xf) * 4);
    param_1[0x11] =
         *(uint *)((long)((int)param_1[0x15] >> 4) * 0x40 + 0x48c8014806e1c148 +
                  (long)(int)(param_1[0x15] & 0xf) * 4);
    param_1[0x15] =
         *(uint *)((long)((int)param_1[0x19] >> 4) * 0x40 + 0x48c8014806e1c148 +
                  (long)(int)(param_1[0x19] & 0xf) * 4);
    param_1[0x19] =
         *(uint *)((long)((int)param_1[0x1d] >> 4) * 0x40 + 0x48c8014806e1c148 +
                  (long)(int)(param_1[0x1d] & 0xf) * 4);
    param_1[0x1d] = uVar1;
    uVar1 = *(uint *)((long)((int)param_1[2] >> 4) * 0x40 + 0x48c8014806e1c148 +
                     (long)(int)(param_1[2] & 0xf) * 4);
    param_1[2] = *(uint *)((long)((int)param_1[0xe] >> 4) * 0x40 + 0x48c8014806e1c148 +
                          (long)(int)(param_1[0xe] & 0xf) * 4);
    param_1[0xe] = *(uint *)((long)((int)param_1[0x1a] >> 4) * 0x40 + 0x48c8014806e1c148 +
                            (long)(int)(param_1[0x1a] & 0xf) * 4);
    param_1[0x1a] =
         *(uint *)((long)((int)param_1[6] >> 4) * 0x40 + 0x48c8014806e1c148 +
                  (long)(int)(param_1[6] & 0xf) * 4);
    param_1[6] = *(uint *)((long)((int)param_1[0x12] >> 4) * 0x40 + 0x48c8014806e1c148 +
                          (long)(int)(param_1[0x12] & 0xf) * 4);
    param_1[0x12] =
         *(uint *)((long)((int)param_1[0x1e] >> 4) * 0x40 + 0x48c8014806e1c148 +
                  (long)(int)(param_1[0x1e] & 0xf) * 4);
    param_1[0x1e] =
         *(uint *)((long)((int)param_1[10] >> 4) * 0x40 + 0x48c8014806e1c148 +
                  (long)(int)(param_1[10] & 0xf) * 4);
    param_1[10] = *(uint *)((long)((int)param_1[0x16] >> 4) * 0x40 + 0x48c8014806e1c148 +
                           (long)(int)(param_1[0x16] & 0xf) * 4);
    param_1[0x16] = uVar1;
    uVar1 = *(uint *)((long)((int)param_1[3] >> 4) * 0x40 + 0x48c8014806e1c148 +
                     (long)(int)(param_1[3] & 0xf) * 4);
    param_1[3] = *(uint *)((long)((int)param_1[0x13] >> 4) * 0x40 + 0x48c8014806e1c148 +
                          (long)(int)(param_1[0x13] & 0xf) * 4);
    param_1[0x13] = uVar1;
    uVar1 = *(uint *)((long)((int)param_1[7] >> 4) * 0x40 + 0x48c8014806e1c148 +
                     (long)(int)(param_1[7] & 0xf) * 4);
    param_1[7] = *(uint *)((long)((int)param_1[0x17] >> 4) * 0x40 + 0x48c8014806e1c148 +
                          (long)(int)(param_1[0x17] & 0xf) * 4);
    param_1[0x17] = uVar1;
    uVar1 = *(uint *)((long)((int)param_1[0xb] >> 4) * 0x40 + 0x48c8014806e1c148 +
                     (long)(int)(param_1[0xb] & 0xf) * 4);
    param_1[0xb] = *(uint *)((long)((int)param_1[0x1b] >> 4) * 0x40 + 0x48c8014806e1c148 +
                            (long)(int)(param_1[0x1b] & 0xf) * 4);
    param_1[0x1b] = uVar1;
    uVar1 = *(uint *)((long)((int)param_1[0xf] >> 4) * 0x40 + 0x48c8014806e1c148 +
                     (long)(int)(param_1[0xf] & 0xf) * 4);
    param_1[0xf] = *(uint *)((long)((int)param_1[0x1f] >> 4) * 0x40 + 0x48c8014806e1c148 +
                            (long)(int)(param_1[0x1f] & 0xf) * 4);
    param_1[0x1f] = uVar1;
    *param_1 = *(uint *)((long)((int)*param_1 >> 4) * 0x40 + 0x48c8014806e1c148 +
                        (long)(int)(*param_1 & 0xf) * 4);
    param_1[4] = *(uint *)((long)((int)param_1[4] >> 4) * 0x40 + 0x48c8014806e1c148 +
                          (long)(int)(param_1[4] & 0xf) * 4);
    param_1[8] = *(uint *)((long)((int)param_1[8] >> 4) * 0x40 + 0x48c8014806e1c148 +
                          (long)(int)(param_1[8] & 0xf) * 4);
    param_1[0xc] = *(uint *)((long)((int)param_1[0xc] >> 4) * 0x40 + 0x48c8014806e1c148 +
                            (long)(int)(param_1[0xc] & 0xf) * 4);
    param_1[0x10] =
         *(uint *)((long)((int)param_1[0x10] >> 4) * 0x40 + 0x48c8014806e1c148 +
                  (long)(int)(param_1[0x10] & 0xf) * 4);
    param_1[0x14] =
         *(uint *)((long)((int)param_1[0x14] >> 4) * 0x40 + 0x48c8014806e1c148 +
                  (long)(int)(param_1[0x14] & 0xf) * 4);
    param_1[0x18] =
         *(uint *)((long)((int)param_1[0x18] >> 4) * 0x40 + 0x48c8014806e1c148 +
                  (long)(int)(param_1[0x18] & 0xf) * 4);
    param_1[0x1c] =
         *(uint *)((long)((int)param_1[0x1c] >> 4) * 0x40 + 0x48c8014806e1c148 +
                  (long)(int)(param_1[0x1c] & 0xf) * 4);
  }
  return;
}



undefined8 MixColumn_AddRoundKey(long param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int local_9c;
  uint auStack_98 [32];
  int local_18;
  int local_14;
  long local_10;
  
  local_10 = param_1;
  local_14 = param_2;
  local_18 = param_3;
  for (local_9c = 0; local_9c < local_14; local_9c = local_9c + 1) {
    auStack_98[local_9c << 2] = *(int *)(local_10 + (long)(local_9c << 2) * 4) << 1;
    if ((int)auStack_98[local_9c << 2] >> 8 == 1) {
      auStack_98[local_9c << 2] = auStack_98[local_9c << 2] ^ 0x11b;
    }
    uVar1 = *(uint *)(local_10 + (long)(local_9c * 4 + 1) * 4);
    uVar1 = uVar1 << 1 ^ uVar1;
    if ((int)uVar1 >> 8 == 1) {
      auStack_98[local_9c << 2] = uVar1 ^ 0x11b ^ auStack_98[local_9c << 2];
    }
    else {
      auStack_98[local_9c << 2] = uVar1 ^ auStack_98[local_9c << 2];
    }
    auStack_98[local_9c << 2] =
         *(uint *)(local_10 + (long)(local_9c * 4 + 2) * 4) ^
         *(uint *)(local_10 + (long)(local_9c * 4 + 3) * 4) ^
         *(uint *)((long)(local_9c + local_14 * local_18) * 4 + -0x937a746ff3cd) ^
         auStack_98[local_9c << 2];
    auStack_98[local_9c * 4 + 1] = *(int *)(local_10 + (long)(local_9c * 4 + 1) * 4) << 1;
    if ((int)auStack_98[local_9c * 4 + 1] >> 8 == 1) {
      iVar2 = local_9c * 4 + 1;
      auStack_98[iVar2] = auStack_98[iVar2] ^ 0x11b;
    }
    uVar1 = *(uint *)(local_10 + (long)(local_9c * 4 + 2) * 4);
    uVar1 = uVar1 << 1 ^ uVar1;
    if ((int)uVar1 >> 8 == 1) {
      iVar2 = local_9c * 4 + 1;
      auStack_98[iVar2] = uVar1 ^ 0x11b ^ auStack_98[iVar2];
    }
    else {
      iVar2 = local_9c * 4 + 1;
      auStack_98[iVar2] = uVar1 ^ auStack_98[iVar2];
    }
    iVar2 = local_9c * 4 + 1;
    auStack_98[iVar2] =
         *(uint *)(local_10 + (long)(local_9c * 4 + 3) * 4) ^
         *(uint *)(local_10 + (long)(local_9c << 2) * 4) ^
         *(uint *)((long)(local_9c + local_14 * local_18) * 4 + -0x74fffffe1f6f71ed) ^
         auStack_98[iVar2];
    auStack_98[local_9c * 4 + 2] = *(int *)(local_10 + (long)(local_9c * 4 + 2) * 4) << 1;
    if ((int)auStack_98[local_9c * 4 + 2] >> 8 == 1) {
      iVar2 = local_9c * 4 + 2;
      auStack_98[iVar2] = auStack_98[iVar2] ^ 0x11b;
    }
    uVar1 = *(uint *)(local_10 + (long)(local_9c * 4 + 3) * 4);
    uVar1 = uVar1 << 1 ^ uVar1;
    if ((int)uVar1 >> 8 == 1) {
      iVar2 = local_9c * 4 + 2;
      auStack_98[iVar2] = uVar1 ^ 0x11b ^ auStack_98[iVar2];
    }
    else {
      iVar2 = local_9c * 4 + 2;
      auStack_98[iVar2] = uVar1 ^ auStack_98[iVar2];
    }
    iVar2 = local_9c * 4 + 2;
    auStack_98[iVar2] =
         *(uint *)(local_10 + (long)(local_9c << 2) * 4) ^
         *(uint *)(local_10 + (long)(local_9c * 4 + 1) * 4) ^
         *(uint *)((long)(local_9c + local_14 * local_18) * 4 + -0x74fffffc3f6f700d) ^
         auStack_98[iVar2];
    auStack_98[local_9c * 4 + 3] = *(int *)(local_10 + (long)(local_9c * 4 + 3) * 4) << 1;
    if ((int)auStack_98[local_9c * 4 + 3] >> 8 == 1) {
      iVar2 = local_9c * 4 + 3;
      auStack_98[iVar2] = auStack_98[iVar2] ^ 0x11b;
    }
    uVar1 = *(uint *)(local_10 + (long)(local_9c << 2) * 4);
    uVar1 = uVar1 << 1 ^ uVar1;
    if ((int)uVar1 >> 8 == 1) {
      iVar2 = local_9c * 4 + 3;
      auStack_98[iVar2] = uVar1 ^ 0x11b ^ auStack_98[iVar2];
    }
    else {
      iVar2 = local_9c * 4 + 3;
      auStack_98[iVar2] = uVar1 ^ auStack_98[iVar2];
    }
    iVar2 = local_9c * 4 + 3;
    auStack_98[iVar2] =
         *(uint *)(local_10 + (long)(local_9c * 4 + 1) * 4) ^
         *(uint *)(local_10 + (long)(local_9c * 4 + 2) * 4) ^
         *(uint *)((long)(local_9c + local_14 * local_18) * 4 + -0x74fffffa5f6f6e2d) ^
         auStack_98[iVar2];
  }
  for (local_9c = 0; local_9c < local_14; local_9c = local_9c + 1) {
    *(uint *)(local_10 + (long)(local_9c << 2) * 4) = auStack_98[local_9c << 2];
    *(uint *)(local_10 + (long)(local_9c * 4 + 1) * 4) = auStack_98[local_9c * 4 + 1];
    *(uint *)(local_10 + (long)(local_9c * 4 + 2) * 4) = auStack_98[local_9c * 4 + 2];
    *(uint *)(local_10 + (long)(local_9c * 4 + 3) * 4) = auStack_98[local_9c * 4 + 3];
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int decrypt(EVP_PKEY_CTX *ctx,uchar *out,size_t *outlen,uchar *in,size_t inlen)

{
  int local_68 [18];
  int local_20;
  int local_1c;
  uchar *local_18;
  EVP_PKEY_CTX *local_10;
  
  local_1c = (int)outlen;
  local_68[12] = 0xe0;
  local_68[13] = 0x37;
  local_68[14] = 7;
  local_68[15] = 0x34;
  local_68[8] = 0x31;
  local_68[9] = 0x31;
  local_68[10] = 0x98;
  local_68[11] = 0xa2;
  local_68[4] = 0x88;
  local_68[5] = 0x5a;
  local_68[6] = 0x30;
  local_68[7] = 0x8d;
  local_68[0] = 0x32;
  local_68[1] = 0x43;
  local_68[2] = 0xf6;
  local_68[3] = 0xa8;
  local_18 = out;
  local_10 = ctx;
  KeySchedule((ulong)outlen & 0xffffffff,out);
  if (local_1c == 0x1f480) {
    _DAT_8b480000000a00c7 = 10;
    _DAT_b5e90000000400c7 = 4;
    goto LAB_00101fdd;
  }
  if (local_1c == 0x1f4c0) {
LAB_00101f28:
    _DAT_8b480000000c00c7 = 0xc;
    _DAT_96e90000000600c7 = 6;
  }
  else {
    if (local_1c != 0x1f500) {
      if (local_1c == 0x2ee80) {
        _DAT_8b480000000c00c7 = 0xc;
        _DAT_77e90000000400c7 = 4;
        goto LAB_00101fdd;
      }
      if (local_1c == 0x2eec0) goto LAB_00101f28;
      if (local_1c != 0x2ef00) {
        if (local_1c == 0x3e880) {
          _DAT_8b480000000e00c7 = 0xe;
          _DAT_39e90000000400c7 = 4;
        }
        else if (local_1c == 0x3e8c0) {
          _DAT_8b480000000e00c7 = 0xe;
          _DAT_1ae90000000600c7 = 6;
        }
        else if (local_1c == 0x3e900) {
          _DAT_8b480000000e00c7 = 0xe;
          _DAT_8b480000000800c7 = 8;
        }
        goto LAB_00101fdd;
      }
    }
    _DAT_8b480000000e00c7 = 0xe;
    _DAT_58e90000000800c7 = 8;
  }
LAB_00101fdd:
  AddRoundKey(local_10,local_1c,_DAT_48ffffe6dee8108b);
  InversShiftRow_ByteSub(local_10,_DAT_48000000bce8308b);
  local_20 = _DAT_e8458901e883008b;
  while (local_20 = local_20 + -1, 0 < local_20) {
    AddRoundKey_InversMixColumn(local_10,_DAT_f4ee8e8558b308b,local_20);
    InversShiftRow_ByteSub(local_10,_DAT_8b0000007ce8308b);
  }
  AddRoundKey(local_10,local_1c,0);
  for (local_20 = 0; local_20 < 0x10; local_20 = local_20 + 1) {
    _DAT_1c083e8458b0889 =
         (uint)(*(int *)(local_10 + (long)local_20 * 4) != local_68[local_20]) + _DAT_58b480803;
  }
  return 0;
}



void InversShiftRow_ByteSub(uint *param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 == 4) {
    uVar1 = *(uint *)((long)((int)param_1[0xd] >> 4) * 0x40 + 0x48c8014806e1c148 +
                     (long)(int)(param_1[0xd] & 0xf) * 4);
    param_1[0xd] = *(uint *)((long)((int)param_1[9] >> 4) * 0x40 + 0x48c8014806e1c148 +
                            (long)(int)(param_1[9] & 0xf) * 4);
    param_1[9] = *(uint *)((long)((int)param_1[5] >> 4) * 0x40 + 0x48c8014806e1c148 +
                          (long)(int)(param_1[5] & 0xf) * 4);
    param_1[5] = *(uint *)((long)((int)param_1[1] >> 4) * 0x40 + 0x48c8014806e1c148 +
                          (long)(int)(param_1[1] & 0xf) * 4);
    param_1[1] = uVar1;
    uVar1 = *(uint *)((long)((int)param_1[0xe] >> 4) * 0x40 + 0x48c8014806e1c148 +
                     (long)(int)(param_1[0xe] & 0xf) * 4);
    param_1[0xe] = *(uint *)((long)((int)param_1[6] >> 4) * 0x40 + 0x48c8014806e1c148 +
                            (long)(int)(param_1[6] & 0xf) * 4);
    param_1[6] = uVar1;
    uVar1 = *(uint *)((long)((int)param_1[2] >> 4) * 0x40 + 0x48c8014806e1c148 +
                     (long)(int)(param_1[2] & 0xf) * 4);
    param_1[2] = *(uint *)((long)((int)param_1[10] >> 4) * 0x40 + 0x48c8014806e1c148 +
                          (long)(int)(param_1[10] & 0xf) * 4);
    param_1[10] = uVar1;
    uVar1 = *(uint *)((long)((int)param_1[0xf] >> 4) * 0x40 + 0x48c8014806e1c148 +
                     (long)(int)(param_1[0xf] & 0xf) * 4);
    param_1[0xf] = *(uint *)((long)((int)param_1[3] >> 4) * 0x40 + 0x48c8014806e1c148 +
                            (long)(int)(param_1[3] & 0xf) * 4);
    param_1[3] = *(uint *)((long)((int)param_1[7] >> 4) * 0x40 + 0x48c8014806e1c148 +
                          (long)(int)(param_1[7] & 0xf) * 4);
    param_1[7] = *(uint *)((long)((int)param_1[0xb] >> 4) * 0x40 + 0x48c8014806e1c148 +
                          (long)(int)(param_1[0xb] & 0xf) * 4);
    param_1[0xb] = uVar1;
    *param_1 = *(uint *)((long)((int)*param_1 >> 4) * 0x40 + 0x48c8014806e1c148 +
                        (long)(int)(*param_1 & 0xf) * 4);
    param_1[4] = *(uint *)((long)((int)param_1[4] >> 4) * 0x40 + 0x48c8014806e1c148 +
                          (long)(int)(param_1[4] & 0xf) * 4);
    param_1[8] = *(uint *)((long)((int)param_1[8] >> 4) * 0x40 + 0x48c8014806e1c148 +
                          (long)(int)(param_1[8] & 0xf) * 4);
    param_1[0xc] = *(uint *)((long)((int)param_1[0xc] >> 4) * 0x40 + 0x48c8014806e1c148 +
                            (long)(int)(param_1[0xc] & 0xf) * 4);
  }
  else if (param_2 == 6) {
    uVar1 = *(uint *)((long)((int)param_1[0x15] >> 4) * 0x40 + 0x48c8014806e1c148 +
                     (long)(int)(param_1[0x15] & 0xf) * 4);
    param_1[0x15] =
         *(uint *)((long)((int)param_1[0x11] >> 4) * 0x40 + 0x48c8014806e1c148 +
                  (long)(int)(param_1[0x11] & 0xf) * 4);
    param_1[0x11] =
         *(uint *)((long)((int)param_1[0xd] >> 4) * 0x40 + 0x48c8014806e1c148 +
                  (long)(int)(param_1[0xd] & 0xf) * 4);
    param_1[0xd] = *(uint *)((long)((int)param_1[9] >> 4) * 0x40 + 0x48c8014806e1c148 +
                            (long)(int)(param_1[9] & 0xf) * 4);
    param_1[9] = *(uint *)((long)((int)param_1[5] >> 4) * 0x40 + 0x48c8014806e1c148 +
                          (long)(int)(param_1[5] & 0xf) * 4);
    param_1[5] = *(uint *)((long)((int)param_1[1] >> 4) * 0x40 + 0x48c8014806e1c148 +
                          (long)(int)(param_1[1] & 0xf) * 4);
    param_1[1] = uVar1;
    uVar1 = *(uint *)((long)((int)param_1[0x16] >> 4) * 0x40 + 0x48c8014806e1c148 +
                     (long)(int)(param_1[0x16] & 0xf) * 4);
    param_1[0x16] =
         *(uint *)((long)((int)param_1[0xe] >> 4) * 0x40 + 0x48c8014806e1c148 +
                  (long)(int)(param_1[0xe] & 0xf) * 4);
    param_1[0xe] = *(uint *)((long)((int)param_1[6] >> 4) * 0x40 + 0x48c8014806e1c148 +
                            (long)(int)(param_1[6] & 0xf) * 4);
    param_1[6] = uVar1;
    uVar1 = *(uint *)((long)((int)param_1[0x12] >> 4) * 0x40 + 0x48c8014806e1c148 +
                     (long)(int)(param_1[0x12] & 0xf) * 4);
    param_1[0x12] =
         *(uint *)((long)((int)param_1[10] >> 4) * 0x40 + 0x48c8014806e1c148 +
                  (long)(int)(param_1[10] & 0xf) * 4);
    param_1[10] = *(uint *)((long)((int)param_1[2] >> 4) * 0x40 + 0x48c8014806e1c148 +
                           (long)(int)(param_1[2] & 0xf) * 4);
    param_1[2] = uVar1;
    uVar1 = *(uint *)((long)((int)param_1[0xf] >> 4) * 0x40 + 0x48c8014806e1c148 +
                     (long)(int)(param_1[0xf] & 0xf) * 4);
    param_1[0xf] = *(uint *)((long)((int)param_1[3] >> 4) * 0x40 + 0x48c8014806e1c148 +
                            (long)(int)(param_1[3] & 0xf) * 4);
    param_1[3] = uVar1;
    uVar1 = *(uint *)((long)((int)param_1[0x13] >> 4) * 0x40 + 0x48c8014806e1c148 +
                     (long)(int)(param_1[0x13] & 0xf) * 4);
    param_1[0x13] =
         *(uint *)((long)((int)param_1[7] >> 4) * 0x40 + 0x48c8014806e1c148 +
                  (long)(int)(param_1[7] & 0xf) * 4);
    param_1[7] = uVar1;
    uVar1 = *(uint *)((long)((int)param_1[0x17] >> 4) * 0x40 + 0x48c8014806e1c148 +
                     (long)(int)(param_1[0x17] & 0xf) * 4);
    param_1[0x17] =
         *(uint *)((long)((int)param_1[0xb] >> 4) * 0x40 + 0x48c8014806e1c148 +
                  (long)(int)(param_1[0xb] & 0xf) * 4);
    param_1[0xb] = uVar1;
    *param_1 = *(uint *)((long)((int)*param_1 >> 4) * 0x40 + 0x48c8014806e1c148 +
                        (long)(int)(*param_1 & 0xf) * 4);
    param_1[4] = *(uint *)((long)((int)param_1[4] >> 4) * 0x40 + 0x48c8014806e1c148 +
                          (long)(int)(param_1[4] & 0xf) * 4);
    param_1[8] = *(uint *)((long)((int)param_1[8] >> 4) * 0x40 + 0x48c8014806e1c148 +
                          (long)(int)(param_1[8] & 0xf) * 4);
    param_1[0xc] = *(uint *)((long)((int)param_1[0xc] >> 4) * 0x40 + 0x48c8014806e1c148 +
                            (long)(int)(param_1[0xc] & 0xf) * 4);
    param_1[0x10] =
         *(uint *)((long)((int)param_1[0x10] >> 4) * 0x40 + 0x48c8014806e1c148 +
                  (long)(int)(param_1[0x10] & 0xf) * 4);
    param_1[0x14] =
         *(uint *)((long)((int)param_1[0x14] >> 4) * 0x40 + 0x48c8014806e1c148 +
                  (long)(int)(param_1[0x14] & 0xf) * 4);
  }
  else if (param_2 == 8) {
    uVar1 = *(uint *)((long)((int)param_1[0x1d] >> 4) * 0x40 + 0x48c8014806e1c148 +
                     (long)(int)(param_1[0x1d] & 0xf) * 4);
    param_1[0x1d] =
         *(uint *)((long)((int)param_1[0x19] >> 4) * 0x40 + 0x48c8014806e1c148 +
                  (long)(int)(param_1[0x19] & 0xf) * 4);
    param_1[0x19] =
         *(uint *)((long)((int)param_1[0x15] >> 4) * 0x40 + 0x48c8014806e1c148 +
                  (long)(int)(param_1[0x15] & 0xf) * 4);
    param_1[0x15] =
         *(uint *)((long)((int)param_1[0x11] >> 4) * 0x40 + 0x48c8014806e1c148 +
                  (long)(int)(param_1[0x11] & 0xf) * 4);
    param_1[0x11] =
         *(uint *)((long)((int)param_1[0xd] >> 4) * 0x40 + 0x48c8014806e1c148 +
                  (long)(int)(param_1[0xd] & 0xf) * 4);
    param_1[0xd] = *(uint *)((long)((int)param_1[9] >> 4) * 0x40 + 0x48c8014806e1c148 +
                            (long)(int)(param_1[9] & 0xf) * 4);
    param_1[9] = *(uint *)((long)((int)param_1[5] >> 4) * 0x40 + 0x48c8014806e1c148 +
                          (long)(int)(param_1[5] & 0xf) * 4);
    param_1[5] = *(uint *)((long)((int)param_1[1] >> 4) * 0x40 + 0x48c8014806e1c148 +
                          (long)(int)(param_1[1] & 0xf) * 4);
    param_1[1] = uVar1;
    uVar1 = *(uint *)((long)((int)param_1[0x1e] >> 4) * 0x40 + 0x48c8014806e1c148 +
                     (long)(int)(param_1[0x1e] & 0xf) * 4);
    param_1[0x1e] =
         *(uint *)((long)((int)param_1[0x12] >> 4) * 0x40 + 0x48c8014806e1c148 +
                  (long)(int)(param_1[0x12] & 0xf) * 4);
    param_1[0x12] =
         *(uint *)((long)((int)param_1[6] >> 4) * 0x40 + 0x48c8014806e1c148 +
                  (long)(int)(param_1[6] & 0xf) * 4);
    param_1[6] = *(uint *)((long)((int)param_1[0x1a] >> 4) * 0x40 + 0x48c8014806e1c148 +
                          (long)(int)(param_1[0x1a] & 0xf) * 4);
    param_1[0x1a] =
         *(uint *)((long)((int)param_1[0xe] >> 4) * 0x40 + 0x48c8014806e1c148 +
                  (long)(int)(param_1[0xe] & 0xf) * 4);
    param_1[0xe] = *(uint *)((long)((int)param_1[2] >> 4) * 0x40 + 0x48c8014806e1c148 +
                            (long)(int)(param_1[2] & 0xf) * 4);
    param_1[2] = *(uint *)((long)((int)param_1[0x16] >> 4) * 0x40 + 0x48c8014806e1c148 +
                          (long)(int)(param_1[0x16] & 0xf) * 4);
    param_1[0x16] =
         *(uint *)((long)((int)param_1[10] >> 4) * 0x40 + 0x48c8014806e1c148 +
                  (long)(int)(param_1[10] & 0xf) * 4);
    param_1[10] = uVar1;
    uVar1 = *(uint *)((long)((int)param_1[0x1f] >> 4) * 0x40 + 0x48c8014806e1c148 +
                     (long)(int)(param_1[0x1f] & 0xf) * 4);
    param_1[0x1f] =
         *(uint *)((long)((int)param_1[0xf] >> 4) * 0x40 + 0x48c8014806e1c148 +
                  (long)(int)(param_1[0xf] & 0xf) * 4);
    param_1[0xf] = uVar1;
    uVar1 = *(uint *)((long)((int)param_1[0x1b] >> 4) * 0x40 + 0x48c8014806e1c148 +
                     (long)(int)(param_1[0x1b] & 0xf) * 4);
    param_1[0x1b] =
         *(uint *)((long)((int)param_1[0xb] >> 4) * 0x40 + 0x48c8014806e1c148 +
                  (long)(int)(param_1[0xb] & 0xf) * 4);
    param_1[0xb] = uVar1;
    uVar1 = *(uint *)((long)((int)param_1[0x17] >> 4) * 0x40 + 0x48c8014806e1c148 +
                     (long)(int)(param_1[0x17] & 0xf) * 4);
    param_1[0x17] =
         *(uint *)((long)((int)param_1[7] >> 4) * 0x40 + 0x48c8014806e1c148 +
                  (long)(int)(param_1[7] & 0xf) * 4);
    param_1[7] = uVar1;
    uVar1 = *(uint *)((long)((int)param_1[0x13] >> 4) * 0x40 + 0x48c8014806e1c148 +
                     (long)(int)(param_1[0x13] & 0xf) * 4);
    param_1[0x13] =
         *(uint *)((long)((int)param_1[3] >> 4) * 0x40 + 0x48c8014806e1c148 +
                  (long)(int)(param_1[3] & 0xf) * 4);
    param_1[3] = uVar1;
    *param_1 = *(uint *)((long)((int)*param_1 >> 4) * 0x40 + 0x48c8014806e1c148 +
                        (long)(int)(*param_1 & 0xf) * 4);
    param_1[4] = *(uint *)((long)((int)param_1[4] >> 4) * 0x40 + 0x48c8014806e1c148 +
                          (long)(int)(param_1[4] & 0xf) * 4);
    param_1[8] = *(uint *)((long)((int)param_1[8] >> 4) * 0x40 + 0x48c8014806e1c148 +
                          (long)(int)(param_1[8] & 0xf) * 4);
    param_1[0xc] = *(uint *)((long)((int)param_1[0xc] >> 4) * 0x40 + 0x48c8014806e1c148 +
                            (long)(int)(param_1[0xc] & 0xf) * 4);
    param_1[0x10] =
         *(uint *)((long)((int)param_1[0x10] >> 4) * 0x40 + 0x48c8014806e1c148 +
                  (long)(int)(param_1[0x10] & 0xf) * 4);
    param_1[0x14] =
         *(uint *)((long)((int)param_1[0x14] >> 4) * 0x40 + 0x48c8014806e1c148 +
                  (long)(int)(param_1[0x14] & 0xf) * 4);
    param_1[0x18] =
         *(uint *)((long)((int)param_1[0x18] >> 4) * 0x40 + 0x48c8014806e1c148 +
                  (long)(int)(param_1[0x18] & 0xf) * 4);
    param_1[0x1c] =
         *(uint *)((long)((int)param_1[0x1c] >> 4) * 0x40 + 0x48c8014806e1c148 +
                  (long)(int)(param_1[0x1c] & 0xf) * 4);
  }
  return;
}



undefined8 AddRoundKey_InversMixColumn(long param_1,int param_2,int param_3)

{
  int iVar1;
  long lVar2;
  uint local_a4;
  int local_a0;
  int local_9c;
  uint auStack_98 [32];
  int local_18;
  int local_14;
  long local_10;
  
  local_10 = param_1;
  local_14 = param_2;
  local_18 = param_3;
  for (local_a0 = 0; local_a0 < param_2; local_a0 = local_a0 + 1) {
    *(uint *)(param_1 + (long)(local_a0 << 2) * 4) =
         *(uint *)((long)(local_a0 + param_2 * param_3) * 4 + -0x7407ba74b777eb75) ^
         *(uint *)(param_1 + (long)(local_a0 << 2) * 4);
    lVar2 = (long)(local_a0 * 4 + 1);
    *(uint *)(param_1 + lVar2 * 4) =
         *(uint *)((long)(local_a0 + param_2 * param_3) * 4 + 0x48000001e088966b) ^
         *(uint *)(param_1 + lVar2 * 4);
    lVar2 = (long)(local_a0 * 4 + 2);
    *(uint *)(param_1 + lVar2 * 4) =
         *(uint *)((long)(local_a0 + param_2 * param_3) * 4 + 0x48000003c088984b) ^
         *(uint *)(param_1 + lVar2 * 4);
    lVar2 = (long)(local_a0 * 4 + 3);
    *(uint *)(param_1 + lVar2 * 4) =
         *(uint *)((long)(local_a0 + param_2 * param_3) * 4 + 0x48000005a0889a2b) ^
         *(uint *)(param_1 + lVar2 * 4);
  }
  for (local_a0 = 0; local_a0 < local_14; local_a0 = local_a0 + 1) {
    for (local_9c = 0; local_9c < 4; local_9c = local_9c + 1) {
      local_a4 = *(int *)(local_10 + (long)(local_9c + local_a0 * 4) * 4) << 1;
      if ((int)local_a4 >> 8 == 1) {
        local_a4 = local_a4 ^ 0x11b;
      }
      local_a4 = (*(uint *)(local_10 + (long)(local_9c + local_a0 * 4) * 4) ^ local_a4) << 1;
      if ((int)local_a4 >> 8 == 1) {
        local_a4 = local_a4 ^ 0x11b;
      }
      local_a4 = (*(uint *)(local_10 + (long)(local_9c + local_a0 * 4) * 4) ^ local_a4) << 1;
      if ((int)local_a4 >> 8 == 1) {
        local_a4 = local_a4 ^ 0x11b;
      }
      auStack_98[local_9c + local_a0 * 4] = local_a4;
      local_a4 = *(int *)(local_10 + (long)((local_9c + 1) % 4 + local_a0 * 4) * 4) << 1;
      if ((int)local_a4 >> 8 == 1) {
        local_a4 = local_a4 ^ 0x11b;
      }
      local_a4 = local_a4 << 1;
      if ((int)local_a4 >> 8 == 1) {
        local_a4 = local_a4 ^ 0x11b;
      }
      local_a4 = (*(uint *)(local_10 + (long)((local_9c + 1) % 4 + local_a0 * 4) * 4) ^ local_a4) <<
                 1;
      if ((int)local_a4 >> 8 == 1) {
        local_a4 = local_a4 ^ 0x11b;
      }
      iVar1 = local_9c + local_a0 * 4;
      auStack_98[iVar1] =
           *(uint *)(local_10 + (long)((local_9c + 1) % 4 + local_a0 * 4) * 4) ^ local_a4 ^
           auStack_98[iVar1];
      local_a4 = *(int *)(local_10 + (long)((local_9c + 2) % 4 + local_a0 * 4) * 4) << 1;
      if ((int)local_a4 >> 8 == 1) {
        local_a4 = local_a4 ^ 0x11b;
      }
      local_a4 = (*(uint *)(local_10 + (long)((local_9c + 2) % 4 + local_a0 * 4) * 4) ^ local_a4) <<
                 1;
      if ((int)local_a4 >> 8 == 1) {
        local_a4 = local_a4 ^ 0x11b;
      }
      local_a4 = local_a4 << 1;
      if ((int)local_a4 >> 8 == 1) {
        local_a4 = local_a4 ^ 0x11b;
      }
      iVar1 = local_9c + local_a0 * 4;
      auStack_98[iVar1] =
           *(uint *)(local_10 + (long)((local_9c + 2) % 4 + local_a0 * 4) * 4) ^ local_a4 ^
           auStack_98[iVar1];
      local_a4 = *(int *)(local_10 + (long)((local_9c + 3) % 4 + local_a0 * 4) * 4) << 1;
      if ((int)local_a4 >> 8 == 1) {
        local_a4 = local_a4 ^ 0x11b;
      }
      local_a4 = local_a4 << 1;
      if ((int)local_a4 >> 8 == 1) {
        local_a4 = local_a4 ^ 0x11b;
      }
      local_a4 = local_a4 << 1;
      if ((int)local_a4 >> 8 == 1) {
        local_a4 = local_a4 ^ 0x11b;
      }
      iVar1 = local_9c + local_a0 * 4;
      auStack_98[iVar1] =
           *(uint *)(local_10 + (long)((local_9c + 3) % 4 + local_a0 * 4) * 4) ^ local_a4 ^
           auStack_98[iVar1];
    }
  }
  for (local_9c = 0; local_9c < local_14; local_9c = local_9c + 1) {
    *(uint *)(local_10 + (long)(local_9c << 2) * 4) = auStack_98[local_9c << 2];
    *(uint *)(local_10 + (long)(local_9c * 4 + 1) * 4) = auStack_98[local_9c * 4 + 1];
    *(uint *)(local_10 + (long)(local_9c * 4 + 2) * 4) = auStack_98[local_9c * 4 + 2];
    *(uint *)(local_10 + (long)(local_9c * 4 + 3) * 4) = auStack_98[local_9c * 4 + 3];
  }
  return 0;
}



undefined4 SubByte(int param_1)

{
  return *(undefined4 *)
          ((long)(param_1 / 0x10) * 0x40 + 0x48c8014806e1c148 + (long)(param_1 % 0x10) * 4);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 aes_main(void)

{
  uchar *in_RCX;
  size_t in_R8;
  
  _DAT_8b480000003200c7 = 0x32;
  _DAT_48000000430440cb = 0x43;
  _DAT_48000000f60840cf = 0xf6;
  _DAT_48000000a80c40d3 = 0xa8;
  _DAT_48000000881040d7 = 0x88;
  _DAT_480000005a1440db = 0x5a;
  _DAT_48000000301840df = 0x30;
  _DAT_480000008d1c40e3 = 0x8d;
  _DAT_48000000312040e7 = 0x31;
  _DAT_48000000312440eb = 0x31;
  _DAT_48000000982840ef = 0x98;
  _DAT_48000000a22c40f3 = 0xa2;
  _DAT_48000000e03040f7 = 0xe0;
  _DAT_48000000373440fb = 0x37;
  _DAT_48000000073840ff = 7;
  _DAT_48000000343c4103 = 0x34;
  _DAT_8b480000002b00c7 = 0x2b;
  _DAT_480000007e0440cb = 0x7e;
  _DAT_48000000150840cf = 0x15;
  _DAT_48000000160c40d3 = 0x16;
  _DAT_48000000281040d7 = 0x28;
  _DAT_48000000ae1440db = 0xae;
  _DAT_48000000d21840df = 0xd2;
  _DAT_48000000a61c40e3 = 0xa6;
  _DAT_48000000ab2040e7 = 0xab;
  _DAT_48000000f72440eb = 0xf7;
  _DAT_48000000152840ef = 0x15;
  _DAT_48000000882c40f3 = 0x88;
  _DAT_48000000093040f7 = 9;
  _DAT_48000000cf3440fb = 0xcf;
  _DAT_480000004f3840ff = 0x4f;
  _DAT_480000003c3c4103 = 0x3c;
  encrypt((char *)0xba00000000358b48,0x1f480ba);
  decrypt((EVP_PKEY_CTX *)0xba00000000358b48,(uchar *)0xe4eee80001f480ba,(size_t *)0x1f480,in_RCX,
          in_R8);
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 submain(void)

{
  _DAT_5ae80000000000c7 = 0;
  _DAT_fffddae800110ff2 = rtclock();
  aes_main();
  _DAT_58b4800110ff2 = rtclock();
  printf("%0.6f\n",_DAT_58b4800100ff2 - _DAT_213d8d48005c0ff2);
  return _DAT_f2e6666c35d008b;
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


