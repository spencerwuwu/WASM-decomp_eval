#include "bf.h"



void local_memcpy(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  bool bVar1;
  
  if (0 < param_3) {
    do {
      *param_1 = *param_2;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      bVar1 = 1 < param_3;
      param_3 = param_3 + -1;
    } while (bVar1);
  }
  return;
}



// WARNING: Could not reconcile some variable overlaps

void BF_set_key(BF_KEY *key,int len,uchar *data)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  long lVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined4 in_register_00000034;
  byte *pbVar8;
  byte *pbVar9;
  ulong uVar10;
  ulong uVar11;
  bool bVar12;
  undefined local_48 [24];
  
  pbVar8 = (byte *)CONCAT44(in_register_00000034,len);
  memcpy(&DAT_ba00000000358b48,(void *)0xf7894c00000090ba,0x90);
  memcpy(&DAT_ba00000000358b48,(void *)0xdf894800002000ba,0x2000);
  iVar2 = 0x48;
  if ((int)key < 0x48) {
    iVar2 = (int)key;
  }
  pbVar3 = pbVar8 + iVar2;
  lVar4 = 0;
  pbVar5 = pbVar8;
  do {
    pbVar9 = pbVar5 + 1;
    if (pbVar3 <= pbVar5 + 1) {
      pbVar9 = pbVar8;
    }
    pbVar6 = pbVar9 + 1;
    if (pbVar3 <= pbVar9 + 1) {
      pbVar6 = pbVar8;
    }
    bVar1 = *pbVar5;
    pbVar7 = pbVar6 + 1;
    if (pbVar3 <= pbVar6 + 1) {
      pbVar7 = pbVar8;
    }
    pbVar5 = pbVar7 + 1;
    if (pbVar3 <= pbVar7 + 1) {
      pbVar5 = pbVar8;
    }
    *(ulong *)(&DAT_ba00000000358b48 + lVar4 * 8) =
         *(ulong *)(&DAT_ba00000000358b48 + lVar4 * 8) ^
         ((ulong)*pbVar7 | ((ulong)*pbVar6 | (ulong)*pbVar9 << 8 | (ulong)bVar1 << 0x10) << 8);
    lVar4 = lVar4 + 1;
  } while (lVar4 != 0x12);
  local_48._0_16_ = ZEXT816(0);
  uVar10 = 0;
  uVar11 = 0;
  do {
    BF_encrypt((uint *)local_48,(BF_KEY *)0x1);
    *(undefined8 *)(&DAT_ba00000000358b48 + uVar11 * 8) = local_48._0_8_;
    *(undefined8 *)(&DAT_ba00000000358b48 + (uVar11 * 8 | 8)) = local_48._8_8_;
    bVar12 = uVar11 < 0x10;
    uVar11 = uVar11 + 2;
  } while (bVar12);
  do {
    BF_encrypt((uint *)local_48,(BF_KEY *)0x1);
    *(undefined8 *)(&DAT_ba00000000358b48 + uVar10 * 8) = local_48._0_8_;
    *(undefined8 *)(&DAT_ba00000000358b48 + (uVar10 * 8 | 8)) = local_48._8_8_;
    bVar12 = uVar10 < 0x3fe;
    uVar10 = uVar10 + 2;
  } while (bVar12);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void BF_encrypt(uint *data,BF_KEY *key)

{
  ulong uVar1;
  ulong uVar2;
  
  if ((int)key == 0) {
    uVar1 = *(ulong *)data ^ _DAT_48000000888e33d0;
    uVar2 = (*(int *)((ulong)((uint)(uVar1 >> 0xd) & 0x7f8) + 0x410de8c149c89149) +
             *(int *)((uVar1 >> 0x18) * 8 + 0x410de8c149c88949) ^
            *(uint *)((uVar1 >> 8 & 0xff) * 8 + 0x410de8c149c89949)) +
            *(int *)((uVar1 & 0xff) * 8 + 0x410de8c149c8a149) ^ _DAT_48000000888e33c8 ^
            *(ulong *)(data + 2);
    uVar1 = (*(int *)((ulong)((uint)(uVar2 >> 0xd) & 0x7f8) + 0x410de8c149c89149) +
             *(int *)((uVar2 >> 0x18) * 8 + 0x410de8c149c88949) ^
            *(uint *)((uVar2 >> 8 & 0xff) * 8 + 0x410de8c149c89949)) +
            *(int *)((uVar2 & 0xff) * 8 + 0x410de8c149c8a149) ^ _DAT_48000000888e33c0 ^ uVar1;
    uVar2 = (*(int *)((ulong)((uint)(uVar1 >> 0xd) & 0x7f8) + 0x410de8c149c89149) +
             *(int *)((uVar1 >> 0x18) * 8 + 0x410de8c149c88949) ^
            *(uint *)((uVar1 >> 8 & 0xff) * 8 + 0x410de8c149c89949)) +
            *(int *)((uVar1 & 0xff) * 8 + 0x410de8c149c8a149) ^ _DAT_48000000888e33b8 ^ uVar2;
    uVar1 = (*(int *)((ulong)((uint)(uVar2 >> 0xd) & 0x7f8) + 0x410de8c149c89149) +
             *(int *)((uVar2 >> 0x18) * 8 + 0x410de8c149c88949) ^
            *(uint *)((uVar2 >> 8 & 0xff) * 8 + 0x410de8c149c89949)) +
            *(int *)((uVar2 & 0xff) * 8 + 0x410de8c149c8a149) ^ _DAT_48000000888e33b0 ^ uVar1;
    uVar2 = (*(int *)((ulong)((uint)(uVar1 >> 0xd) & 0x7f8) + 0x410de8c149c89149) +
             *(int *)((uVar1 >> 0x18) * 8 + 0x410de8c149c88949) ^
            *(uint *)((uVar1 >> 8 & 0xff) * 8 + 0x410de8c149c89949)) +
            *(int *)((uVar1 & 0xff) * 8 + 0x410de8c149c8a149) ^ _DAT_48000000888e33a8 ^ uVar2;
    uVar1 = (*(int *)((ulong)((uint)(uVar2 >> 0xd) & 0x7f8) + 0x410de8c149c89149) +
             *(int *)((uVar2 >> 0x18) * 8 + 0x410de8c149c88949) ^
            *(uint *)((uVar2 >> 8 & 0xff) * 8 + 0x410de8c149c89949)) +
            *(int *)((uVar2 & 0xff) * 8 + 0x410de8c149c8a149) ^ _DAT_48000000888e33a0 ^ uVar1;
    uVar2 = (*(int *)((ulong)((uint)(uVar1 >> 0xd) & 0x7f8) + 0x410de8c149c89149) +
             *(int *)((uVar1 >> 0x18) * 8 + 0x410de8c149c88949) ^
            *(uint *)((uVar1 >> 8 & 0xff) * 8 + 0x410de8c149c89949)) +
            *(int *)((uVar1 & 0xff) * 8 + 0x410de8c149c8a149) ^ _DAT_48000000888e3398 ^ uVar2;
    uVar1 = (*(int *)((ulong)((uint)(uVar2 >> 0xd) & 0x7f8) + 0x410de8c149c89149) +
             *(int *)((uVar2 >> 0x18) * 8 + 0x410de8c149c88949) ^
            *(uint *)((uVar2 >> 8 & 0xff) * 8 + 0x410de8c149c89949)) +
            *(int *)((uVar2 & 0xff) * 8 + 0x410de8c149c8a149) ^ _DAT_48000000888e3390 ^ uVar1;
    uVar2 = (*(int *)((ulong)((uint)(uVar1 >> 0xd) & 0x7f8) + 0x410de8c149c89149) +
             *(int *)((uVar1 >> 0x18) * 8 + 0x410de8c149c88949) ^
            *(uint *)((uVar1 >> 8 & 0xff) * 8 + 0x410de8c149c89949)) +
            *(int *)((uVar1 & 0xff) * 8 + 0x410de8c149c8a149) ^ _DAT_48000000888e3388 ^ uVar2;
    uVar1 = (*(int *)((ulong)((uint)(uVar2 >> 0xd) & 0x7f8) + 0x410de8c149c89149) +
             *(int *)((uVar2 >> 0x18) * 8 + 0x410de8c149c88949) ^
            *(uint *)((uVar2 >> 8 & 0xff) * 8 + 0x410de8c149c89949)) +
            *(int *)((uVar2 & 0xff) * 8 + 0x410de8c149c8a149) ^ _DAT_48000000888e3380 ^ uVar1;
    uVar2 = (*(int *)((ulong)((uint)(uVar1 >> 0xd) & 0x7f8) + 0x410de8c149c89149) +
             *(int *)((uVar1 >> 0x18) * 8 + 0x410de8c149c88949) ^
            *(uint *)((uVar1 >> 8 & 0xff) * 8 + 0x410de8c149c89949)) +
            *(int *)((uVar1 & 0xff) * 8 + 0x410de8c149c8a149) ^ _DAT_48000000888e3378 ^ uVar2;
    uVar1 = (*(int *)((ulong)((uint)(uVar2 >> 0xd) & 0x7f8) + 0x410de8c149c89149) +
             *(int *)((uVar2 >> 0x18) * 8 + 0x410de8c149c88949) ^
            *(uint *)((uVar2 >> 8 & 0xff) * 8 + 0x410de8c149c89949)) +
            *(int *)((uVar2 & 0xff) * 8 + 0x410de8c149c8a149) ^ _DAT_48000000888e3370 ^ uVar1;
    uVar2 = (*(int *)((ulong)((uint)(uVar1 >> 0xd) & 0x7f8) + 0x410de8c149c89149) +
             *(int *)((uVar1 >> 0x18) * 8 + 0x410de8c149c88949) ^
            *(uint *)((uVar1 >> 8 & 0xff) * 8 + 0x410de8c149c89949)) +
            *(int *)((uVar1 & 0xff) * 8 + 0x410de8c149c8a149) ^ _DAT_48000000888e3368 ^ uVar2;
    uVar1 = (*(int *)((ulong)((uint)(uVar2 >> 0xd) & 0x7f8) + 0x410de8c149c89149) +
             *(int *)((uVar2 >> 0x18) * 8 + 0x410de8c149c88949) ^
            *(uint *)((uVar2 >> 8 & 0xff) * 8 + 0x410de8c149c89949)) +
            *(int *)((uVar2 & 0xff) * 8 + 0x410de8c149c8a149) ^ _DAT_48000000888e3360 ^ uVar1;
    uVar2 = (*(int *)((ulong)((uint)(uVar1 >> 0xd) & 0x7f8) + 0x410de8c149c89149) +
             *(int *)((uVar1 >> 0x18) * 8 + 0x410de8c149c88949) ^
            *(uint *)((uVar1 >> 8 & 0xff) * 8 + 0x410de8c149c89949)) +
            *(int *)((uVar1 & 0xff) * 8 + 0x410de8c149c8a149) ^ _DAT_48000000888e3358 ^ uVar2;
    uVar1 = (*(int *)((ulong)((uint)(uVar2 >> 0xd) & 0x7f8) + 0x410de8c149c89149) +
             *(int *)((uVar2 >> 0x18) * 8 + 0x410de8c149c88949) ^
            *(uint *)((uVar2 >> 8 & 0xff) * 8 + 0x410de8c149c89949)) +
            *(int *)((uVar2 & 0xff) * 8 + 0x410de8c149c8a149) ^ _DAT_48000000888e3350 ^ uVar1;
    uVar2 = uVar2 ^ _DAT_48000000888e3348;
  }
  else {
    uVar1 = *(ulong *)data ^ _DAT_c148ca89480e3348;
    uVar2 = (*(int *)((ulong)((uint)(uVar1 >> 0xd) & 0x7f8) + 0x410de8c149c89149) +
             *(int *)((uVar1 >> 0x18) * 8 + 0x410de8c149c88949) ^
            *(uint *)((uVar1 >> 8 & 0xff) * 8 + 0x410de8c149c89949)) +
            *(int *)((uVar1 & 0xff) * 8 + 0x410de8c149c8a149) ^ _DAT_c148ca89480e3350 ^
            *(ulong *)(data + 2);
    uVar1 = (*(int *)((ulong)((uint)(uVar2 >> 0xd) & 0x7f8) + 0x410de8c149c89149) +
             *(int *)((uVar2 >> 0x18) * 8 + 0x410de8c149c88949) ^
            *(uint *)((uVar2 >> 8 & 0xff) * 8 + 0x410de8c149c89949)) +
            *(int *)((uVar2 & 0xff) * 8 + 0x410de8c149c8a149) ^ _DAT_c148ca89480e3358 ^ uVar1;
    uVar2 = (*(int *)((ulong)((uint)(uVar1 >> 0xd) & 0x7f8) + 0x410de8c149c89149) +
             *(int *)((uVar1 >> 0x18) * 8 + 0x410de8c149c88949) ^
            *(uint *)((uVar1 >> 8 & 0xff) * 8 + 0x410de8c149c89949)) +
            *(int *)((uVar1 & 0xff) * 8 + 0x410de8c149c8a149) ^ _DAT_c148ca89480e3360 ^ uVar2;
    uVar1 = (*(int *)((ulong)((uint)(uVar2 >> 0xd) & 0x7f8) + 0x410de8c149c89149) +
             *(int *)((uVar2 >> 0x18) * 8 + 0x410de8c149c88949) ^
            *(uint *)((uVar2 >> 8 & 0xff) * 8 + 0x410de8c149c89949)) +
            *(int *)((uVar2 & 0xff) * 8 + 0x410de8c149c8a149) ^ _DAT_c148ca89480e3368 ^ uVar1;
    uVar2 = (*(int *)((ulong)((uint)(uVar1 >> 0xd) & 0x7f8) + 0x410de8c149c89149) +
             *(int *)((uVar1 >> 0x18) * 8 + 0x410de8c149c88949) ^
            *(uint *)((uVar1 >> 8 & 0xff) * 8 + 0x410de8c149c89949)) +
            *(int *)((uVar1 & 0xff) * 8 + 0x410de8c149c8a149) ^ _DAT_c148ca89480e3370 ^ uVar2;
    uVar1 = (*(int *)((ulong)((uint)(uVar2 >> 0xd) & 0x7f8) + 0x410de8c149c89149) +
             *(int *)((uVar2 >> 0x18) * 8 + 0x410de8c149c88949) ^
            *(uint *)((uVar2 >> 8 & 0xff) * 8 + 0x410de8c149c89949)) +
            *(int *)((uVar2 & 0xff) * 8 + 0x410de8c149c8a149) ^ _DAT_c148ca89480e3378 ^ uVar1;
    uVar2 = (*(int *)((ulong)((uint)(uVar1 >> 0xd) & 0x7f8) + 0x410de8c149c89149) +
             *(int *)((uVar1 >> 0x18) * 8 + 0x410de8c149c88949) ^
            *(uint *)((uVar1 >> 8 & 0xff) * 8 + 0x410de8c149c89949)) +
            *(int *)((uVar1 & 0xff) * 8 + 0x410de8c149c8a149) ^ _DAT_c148ca89480e3380 ^ uVar2;
    uVar1 = (*(int *)((ulong)((uint)(uVar2 >> 0xd) & 0x7f8) + 0x410de8c149c89149) +
             *(int *)((uVar2 >> 0x18) * 8 + 0x410de8c149c88949) ^
            *(uint *)((uVar2 >> 8 & 0xff) * 8 + 0x410de8c149c89949)) +
            *(int *)((uVar2 & 0xff) * 8 + 0x410de8c149c8a149) ^ _DAT_c148ca89480e3388 ^ uVar1;
    uVar2 = (*(int *)((ulong)((uint)(uVar1 >> 0xd) & 0x7f8) + 0x410de8c149c89149) +
             *(int *)((uVar1 >> 0x18) * 8 + 0x410de8c149c88949) ^
            *(uint *)((uVar1 >> 8 & 0xff) * 8 + 0x410de8c149c89949)) +
            *(int *)((uVar1 & 0xff) * 8 + 0x410de8c149c8a149) ^ _DAT_c148ca89480e3390 ^ uVar2;
    uVar1 = (*(int *)((ulong)((uint)(uVar2 >> 0xd) & 0x7f8) + 0x410de8c149c89149) +
             *(int *)((uVar2 >> 0x18) * 8 + 0x410de8c149c88949) ^
            *(uint *)((uVar2 >> 8 & 0xff) * 8 + 0x410de8c149c89949)) +
            *(int *)((uVar2 & 0xff) * 8 + 0x410de8c149c8a149) ^ _DAT_c148ca89480e3398 ^ uVar1;
    uVar2 = (*(int *)((ulong)((uint)(uVar1 >> 0xd) & 0x7f8) + 0x410de8c149c89149) +
             *(int *)((uVar1 >> 0x18) * 8 + 0x410de8c149c88949) ^
            *(uint *)((uVar1 >> 8 & 0xff) * 8 + 0x410de8c149c89949)) +
            *(int *)((uVar1 & 0xff) * 8 + 0x410de8c149c8a149) ^ _DAT_c148ca89480e33a0 ^ uVar2;
    uVar1 = (*(int *)((ulong)((uint)(uVar2 >> 0xd) & 0x7f8) + 0x410de8c149c89149) +
             *(int *)((uVar2 >> 0x18) * 8 + 0x410de8c149c88949) ^
            *(uint *)((uVar2 >> 8 & 0xff) * 8 + 0x410de8c149c89949)) +
            *(int *)((uVar2 & 0xff) * 8 + 0x410de8c149c8a149) ^ _DAT_c148ca89480e33a8 ^ uVar1;
    uVar2 = (*(int *)((ulong)((uint)(uVar1 >> 0xd) & 0x7f8) + 0x410de8c149c89149) +
             *(int *)((uVar1 >> 0x18) * 8 + 0x410de8c149c88949) ^
            *(uint *)((uVar1 >> 8 & 0xff) * 8 + 0x410de8c149c89949)) +
            *(int *)((uVar1 & 0xff) * 8 + 0x410de8c149c8a149) ^ _DAT_c148ca89480e33b0 ^ uVar2;
    uVar1 = (*(int *)((ulong)((uint)(uVar2 >> 0xd) & 0x7f8) + 0x410de8c149c89149) +
             *(int *)((uVar2 >> 0x18) * 8 + 0x410de8c149c88949) ^
            *(uint *)((uVar2 >> 8 & 0xff) * 8 + 0x410de8c149c89949)) +
            *(int *)((uVar2 & 0xff) * 8 + 0x410de8c149c8a149) ^ _DAT_c148ca89480e33b8 ^ uVar1;
    uVar2 = (*(int *)((ulong)((uint)(uVar1 >> 0xd) & 0x7f8) + 0x410de8c149c89149) +
             *(int *)((uVar1 >> 0x18) * 8 + 0x410de8c149c88949) ^
            *(uint *)((uVar1 >> 8 & 0xff) * 8 + 0x410de8c149c89949)) +
            *(int *)((uVar1 & 0xff) * 8 + 0x410de8c149c8a149) ^ _DAT_c148ca89480e33c0 ^ uVar2;
    uVar1 = (*(int *)((ulong)((uint)(uVar2 >> 0xd) & 0x7f8) + 0x410de8c149c89149) +
             *(int *)((uVar2 >> 0x18) * 8 + 0x410de8c149c88949) ^
            *(uint *)((uVar2 >> 8 & 0xff) * 8 + 0x410de8c149c89949)) +
            *(int *)((uVar2 & 0xff) * 8 + 0x410de8c149c8a149) ^ _DAT_c148ca89480e33c8 ^ uVar1;
    uVar2 = uVar2 ^ _DAT_c148ca89480e33d0;
  }
  *(ulong *)(data + 2) = uVar1 & 0xffffffff;
  *(ulong *)data = uVar2 & 0xffffffff;
  return;
}



// WARNING: Could not reconcile some variable overlaps

void BF_cfb64_encrypt(uchar *in,uchar *out,long length,BF_KEY *schedule,uchar *ivec,int *num,int enc
                     )

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  undefined local_48 [16];
  uint *local_38;
  
  uVar5 = *(uint *)ivec;
  local_38 = (uint *)ivec;
  if ((int)num == 0) {
    if (length != 0) {
      do {
        length = length + -1;
        if (uVar5 == 0) {
          uVar2 = schedule->P[0];
          uVar3 = schedule->P[1];
          local_48 = ZEXT1216(CONCAT48(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 |
                                       (uVar3 & 0xff00) << 8 | uVar3 << 0x18,
                                       (ulong)(uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 |
                                               (uVar2 & 0xff00) << 8 | uVar2 << 0x18)));
          BF_encrypt((uint *)local_48,(BF_KEY *)0x1);
          schedule->P[0] =
               local_48._0_4_ >> 0x18 | (local_48._0_4_ & 0xff0000) >> 8 |
               (local_48._0_4_ & 0xff00) << 8 | local_48._0_4_ << 0x18;
          schedule->P[1] =
               local_48._8_4_ >> 0x18 | (local_48._8_4_ & 0xff0000) >> 8 |
               (local_48._8_4_ & 0xff00) << 8 | local_48._8_4_ << 0x18;
        }
        bVar4 = *in;
        in = in + 1;
        bVar1 = *(byte *)((long)schedule->P + (long)(int)uVar5);
        *(byte *)((long)schedule->P + (long)(int)uVar5) = bVar4;
        *out = bVar1 ^ bVar4;
        out = out + 1;
        uVar5 = uVar5 + 1 & 7;
      } while (length != 0);
    }
  }
  else if (length != 0) {
    do {
      length = length + -1;
      if (uVar5 == 0) {
        uVar2 = schedule->P[0];
        uVar3 = schedule->P[1];
        local_48 = ZEXT1216(CONCAT48(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8
                                     | uVar3 << 0x18,
                                     (ulong)(uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 |
                                             (uVar2 & 0xff00) << 8 | uVar2 << 0x18)));
        BF_encrypt((uint *)local_48,(BF_KEY *)0x1);
        schedule->P[0] =
             local_48._0_4_ >> 0x18 | (local_48._0_4_ & 0xff0000) >> 8 |
             (local_48._0_4_ & 0xff00) << 8 | local_48._0_4_ << 0x18;
        schedule->P[1] =
             local_48._8_4_ >> 0x18 | (local_48._8_4_ & 0xff0000) >> 8 |
             (local_48._8_4_ & 0xff00) << 8 | local_48._8_4_ << 0x18;
      }
      bVar4 = *(byte *)((long)schedule->P + (long)(int)uVar5) ^ *in;
      in = in + 1;
      *out = bVar4;
      out = out + 1;
      *(byte *)((long)schedule->P + (long)(int)uVar5) = bVar4;
      uVar5 = uVar5 + 1 & 7;
    } while (length != 0);
  }
  *local_38 = uVar5;
  return;
}



int blowfish_main(undefined8 param_1,undefined8 param_2,uchar *param_3)

{
  uchar *puVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  int iVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  bool bVar11;
  int in_stack_ffffffffffffff58;
  undefined4 local_9c;
  undefined local_98 [16];
  uchar local_88 [48];
  uchar local_58 [40];
  int iVar5;
  
  local_9c = 0;
  local_98._8_8_ = 0;
  local_98._0_8_ = 0;
  BF_set_key((BF_KEY *)0x8,(int)local_98 + 8,param_3);
  iVar6 = 0;
  lVar7 = 0;
  lVar10 = 0;
  do {
    iVar8 = (int)lVar10;
    iVar5 = 0x144f;
    if (0x144f < iVar8) {
      iVar5 = iVar8;
    }
    uVar4 = iVar5 - iVar8;
    if (0x26 < uVar4) {
      uVar4 = 0x27;
    }
    memcpy(local_58,(void *)((long)iVar8 + 0x50fd814128348d4a),(ulong)(uVar4 + 1));
    uVar3 = 0;
    lVar10 = (long)iVar8;
    do {
      lVar9 = lVar10;
      uVar2 = uVar3;
      lVar10 = lVar9 + 1;
      if (0x144e < lVar9) break;
      uVar3 = uVar2 + 1;
    } while (uVar2 < 0x27);
    BF_cfb64_encrypt(local_58,local_88,uVar2 + 1 & 0xffffffff,(BF_KEY *)local_98,(uchar *)&local_9c,
                     (int *)0x1,in_stack_ffffffffffffff58);
    lVar7 = (long)(int)lVar7;
    uVar3 = 0;
    do {
      puVar1 = &DAT_2e66ed3145e43145 + lVar7;
      lVar7 = lVar7 + 1;
      iVar6 = iVar6 + (uint)(local_88[uVar3] != *puVar1);
      bVar11 = uVar3 < (uVar2 & 0xffffffff);
      uVar3 = uVar3 + 1;
    } while (bVar11);
    if (0x144e < (int)lVar9) {
      return iVar6;
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 submain(void)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined local_20 [16];
  
  iVar1 = gettimeofday((timeval *)local_20,(__timezone_ptr_t)0x0);
  if (iVar1 != 0) {
    printf("Error return from gettimeofday: %d");
  }
  _DAT_fe7fe80e110f41f2 = (double)local_20._8_4_ * 1e-06 + (double)local_20._0_8_;
  uVar2 = blowfish_main();
  uVar3 = gettimeofday((timeval *)local_20,(__timezone_ptr_t)0x0);
  if (uVar3 != 0) {
    printf("Error return from gettimeofday: %d",(ulong)uVar3);
  }
  _DAT_5c0f41f200110ff2 = (double)local_20._8_4_ * 1e-06 + (double)local_20._0_8_;
  printf("%0.6f\n",_DAT_5c0f41f200110ff2 - _DAT_fe7fe80e110f41f2);
  return uVar2;
}


