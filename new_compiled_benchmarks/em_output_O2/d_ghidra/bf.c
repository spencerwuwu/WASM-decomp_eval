#include "bf.h"



void local_memcpy(undefined8 *param_1,undefined8 *param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  
  if (0 < (int)param_3) {
    if ((5 < param_3) && (0x1f < (ulong)((long)param_1 - (long)param_2))) {
      uVar11 = (ulong)param_3;
      uVar12 = (ulong)(param_3 & 0xfffffffc);
      uVar13 = 0;
      do {
        puVar1 = param_2 + uVar13;
        uVar4 = *(undefined4 *)((long)puVar1 + 4);
        uVar5 = *(undefined4 *)(puVar1 + 1);
        uVar6 = *(undefined4 *)((long)puVar1 + 0xc);
        puVar2 = param_2 + uVar13 + 2;
        uVar7 = *(undefined4 *)puVar2;
        uVar8 = *(undefined4 *)((long)puVar2 + 4);
        uVar9 = *(undefined4 *)(puVar2 + 1);
        uVar10 = *(undefined4 *)((long)puVar2 + 0xc);
        puVar2 = param_1 + uVar13;
        *(undefined4 *)puVar2 = *(undefined4 *)puVar1;
        *(undefined4 *)((long)puVar2 + 4) = uVar4;
        *(undefined4 *)(puVar2 + 1) = uVar5;
        *(undefined4 *)((long)puVar2 + 0xc) = uVar6;
        puVar1 = param_1 + uVar13 + 2;
        *(undefined4 *)puVar1 = uVar7;
        *(undefined4 *)((long)puVar1 + 4) = uVar8;
        *(undefined4 *)(puVar1 + 1) = uVar9;
        *(undefined4 *)((long)puVar1 + 0xc) = uVar10;
        uVar13 = uVar13 + 4;
      } while (uVar13 != uVar12);
      param_2 = param_2 + uVar12;
      param_1 = param_1 + uVar12;
      param_3 = param_3 - (param_3 & 0xfffffffc);
      if (uVar12 == uVar11) {
        return;
      }
    }
    do {
      *param_1 = *param_2;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      bVar3 = 1 < param_3;
      param_3 = param_3 - 1;
    } while (bVar3);
  }
  return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

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
  bool bVar11;
  undefined local_38 [8];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
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
  _local_38 = ZEXT816(0);
  BF_encrypt((uint *)local_38,(BF_KEY *)0x1);
  _DAT_ba00000000358b48 = local_38._0_4_;
  uRamba00000000358b4c = local_38._4_4_;
  uRamba00000000358b50 = uStack_30;
  uRamba00000000358b54 = uStack_2c;
  BF_encrypt((uint *)local_38,(BF_KEY *)0x1);
  _DAT_ba00000000358b58 = local_38._0_4_;
  uRamba00000000358b5c = local_38._4_4_;
  uRamba00000000358b60 = uStack_30;
  uRamba00000000358b64 = uStack_2c;
  BF_encrypt((uint *)local_38,(BF_KEY *)0x1);
  _DAT_ba00000000358b68 = local_38._0_4_;
  uRamba00000000358b6c = local_38._4_4_;
  uRamba00000000358b70 = uStack_30;
  uRamba00000000358b74 = uStack_2c;
  BF_encrypt((uint *)local_38,(BF_KEY *)0x1);
  _DAT_ba00000000358b78 = local_38._0_4_;
  uRamba00000000358b7c = local_38._4_4_;
  uRamba00000000358b80 = uStack_30;
  uRamba00000000358b84 = uStack_2c;
  BF_encrypt((uint *)local_38,(BF_KEY *)0x1);
  _DAT_ba00000000358b88 = local_38._0_4_;
  uRamba00000000358b8c = local_38._4_4_;
  uRamba00000000358b90 = uStack_30;
  uRamba00000000358b94 = uStack_2c;
  BF_encrypt((uint *)local_38,(BF_KEY *)0x1);
  _DAT_ba00000000358b98 = local_38._0_4_;
  uRamba00000000358b9c = local_38._4_4_;
  uRamba00000000358ba0 = uStack_30;
  uRamba00000000358ba4 = uStack_2c;
  BF_encrypt((uint *)local_38,(BF_KEY *)0x1);
  _DAT_ba00000000358ba8 = local_38._0_4_;
  uRamba00000000358bac = local_38._4_4_;
  uRamba00000000358bb0 = uStack_30;
  uRamba00000000358bb4 = uStack_2c;
  BF_encrypt((uint *)local_38,(BF_KEY *)0x1);
  _DAT_ba00000000358bb8 = local_38._0_4_;
  uRamba00000000358bbc = local_38._4_4_;
  uRamba00000000358bc0 = uStack_30;
  uRamba00000000358bc4 = uStack_2c;
  BF_encrypt((uint *)local_38,(BF_KEY *)0x1);
  _DAT_ba00000000358bc8 = local_38._0_4_;
  uRamba00000000358bcc = local_38._4_4_;
  uRamba00000000358bd0 = uStack_30;
  uRamba00000000358bd4 = uStack_2c;
  uVar10 = 0;
  do {
    BF_encrypt((uint *)local_38,(BF_KEY *)0x1);
    lVar4 = uVar10 * 8;
    *(uint *)(&DAT_ba00000000358b48 + lVar4) = local_38._0_4_;
    *(undefined4 *)(lVar4 + -0x45ffffffffca74b4) = local_38._4_4_;
    *(undefined4 *)(lVar4 + -0x45ffffffffca74b0) = uStack_30;
    *(undefined4 *)(lVar4 + -0x45ffffffffca74ac) = uStack_2c;
    bVar11 = uVar10 < 0x3fe;
    uVar10 = uVar10 + 2;
  } while (bVar11);
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
  byte bVar3;
  uint uVar4;
  ulong local_48;
  ulong local_40;
  uint *local_38;
  
  uVar4 = *(uint *)ivec;
  local_38 = (uint *)ivec;
  if ((int)num == 0) {
    if (length != 0) {
      do {
        length = length + -1;
        if (uVar4 == 0) {
          uVar2 = schedule->P[0];
          local_48 = (ulong)(uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                            uVar2 << 0x18);
          uVar2 = schedule->P[1];
          local_40 = (ulong)(uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                            uVar2 << 0x18);
          BF_encrypt((uint *)&local_48,(BF_KEY *)0x1);
          schedule->P[0] =
               (uint)local_48 >> 0x18 | ((uint)local_48 & 0xff0000) >> 8 |
               ((uint)local_48 & 0xff00) << 8 | (uint)local_48 << 0x18;
          schedule->P[1] =
               (uint)local_40 >> 0x18 | ((uint)local_40 & 0xff0000) >> 8 |
               ((uint)local_40 & 0xff00) << 8 | (uint)local_40 << 0x18;
        }
        bVar3 = *in;
        in = in + 1;
        bVar1 = *(byte *)((long)schedule->P + (long)(int)uVar4);
        *(byte *)((long)schedule->P + (long)(int)uVar4) = bVar3;
        *out = bVar1 ^ bVar3;
        out = out + 1;
        uVar4 = uVar4 + 1 & 7;
      } while (length != 0);
    }
  }
  else if (length != 0) {
    do {
      length = length + -1;
      if (uVar4 == 0) {
        uVar2 = schedule->P[0];
        local_48 = (ulong)(uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                          uVar2 << 0x18);
        uVar2 = schedule->P[1];
        local_40 = (ulong)(uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                          uVar2 << 0x18);
        BF_encrypt((uint *)&local_48,(BF_KEY *)0x1);
        schedule->P[0] =
             (uint)local_48 >> 0x18 | ((uint)local_48 & 0xff0000) >> 8 |
             ((uint)local_48 & 0xff00) << 8 | (uint)local_48 << 0x18;
        schedule->P[1] =
             (uint)local_40 >> 0x18 | ((uint)local_40 & 0xff0000) >> 8 |
             ((uint)local_40 & 0xff00) << 8 | (uint)local_40 << 0x18;
      }
      bVar3 = *(byte *)((long)schedule->P + (long)(int)uVar4) ^ *in;
      in = in + 1;
      *out = bVar3;
      out = out + 1;
      *(byte *)((long)schedule->P + (long)(int)uVar4) = bVar3;
      uVar4 = uVar4 + 1 & 7;
    } while (length != 0);
  }
  *local_38 = uVar4;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint blowfish_main(undefined8 param_1,undefined8 param_2,uchar *param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined *puVar10;
  uint uVar11;
  long lVar12;
  bool bVar13;
  int iVar14;
  int iVar16;
  int iVar17;
  undefined auVar15 [16];
  int iVar18;
  undefined auVar19 [16];
  undefined2 uVar23;
  undefined2 uVar26;
  undefined auVar20 [16];
  int in_stack_ffffffffffffff58;
  undefined4 local_9c;
  undefined local_98 [16];
  uint local_88 [12];
  uchar local_58 [40];
  long lVar3;
  undefined auVar21 [16];
  undefined uVar22;
  undefined uVar24;
  undefined uVar25;
  undefined uVar27;
  
  local_9c = 0;
  local_98._8_8_ = 0;
  local_98._0_8_ = 0;
  BF_set_key((BF_KEY *)0x8,(int)local_98 + 8,param_3);
  uVar11 = 0;
  lVar3 = 0;
  lVar8 = 0;
  do {
    iVar16 = (int)lVar8;
    lVar12 = (long)iVar16;
    iVar14 = 0x144f;
    if (0x144f < iVar16) {
      iVar14 = iVar16;
    }
    uVar4 = iVar14 - iVar16;
    if (0x26 < uVar4) {
      uVar4 = 0x27;
    }
    memcpy(local_58,(void *)(lVar12 + 0x50fe814106348d49),(ulong)(uVar4 + 1));
    uVar2 = 0;
    lVar8 = lVar12;
    do {
      lVar7 = lVar8;
      uVar5 = uVar2;
      lVar8 = lVar7 + 1;
      if (0x144e < lVar7) break;
      uVar2 = uVar5 + 1;
    } while (uVar5 < 0x27);
    BF_cfb64_encrypt(local_58,(uchar *)local_88,uVar5 + 1,(BF_KEY *)local_98,(uchar *)&local_9c,
                     (int *)0x1,in_stack_ffffffffffffff58);
    lVar6 = (long)(int)lVar3;
    lVar3 = 0x144f;
    if (0x144f < lVar12) {
      lVar3 = lVar12;
    }
    uVar2 = lVar3 - lVar12;
    if (0x26 < uVar2) {
      uVar2 = 0x27;
    }
    if (uVar2 < 3) {
      uVar1 = 0;
      puVar10 = &DAT_6666660000008de9;
      lVar12 = lVar6;
LAB_00100d40:
      do {
        lVar3 = lVar12 + 1;
        uVar11 = uVar11 + (*(char *)((long)local_88 + uVar1) != puVar10[lVar12]);
        bVar13 = uVar1 < uVar5;
        uVar1 = uVar1 + 1;
        lVar12 = lVar3;
      } while (bVar13);
    }
    else {
      uVar1 = uVar2 + 1 & 0xfffffffffffffffc;
      lVar12 = lVar6 + uVar1;
      auVar15 = ZEXT416(uVar11);
      uVar9 = 0;
      puVar10 = &DAT_256f0f66db760f66;
      do {
        auVar19 = ZEXT416(*(uint *)((long)local_88 + uVar9));
        uVar11 = *(uint *)(&DAT_256f0f66db760f66 + lVar6 + uVar9);
        auVar19 = CONCAT115(0xff,CONCAT114(0xff,CONCAT113(0xff,CONCAT112(0xff,CONCAT111(0xff,
                                                  CONCAT110(0xff,CONCAT19(0xff,CONCAT18(0xff,
                                                  CONCAT17(0xff,CONCAT16(0xff,CONCAT15(0xff,CONCAT14
                                                  (0xff,CONCAT13(-((char)((uVar11 & 0xffffff00) >>
                                                                         0x18) ==
                                                                  SUB161(auVar19 >> 0x18,0)),
                                                                 CONCAT12(-((char)((uVar11 & 
                                                  0xffffff00) >> 0x10) == SUB161(auVar19 >> 0x10,0))
                                                  ,CONCAT11(-((char)(uVar11 >> 8) ==
                                                             SUB161(auVar19 >> 8,0)),
                                                            -((char)uVar11 ==
                                                             (char)*(uint *)((long)local_88 + uVar9)
                                                             )))))))))))))))) ^
                  CONCAT412(0xffffffff,CONCAT48(0xffffffff,0xffffffffffffffff));
        uVar27 = SUB161(auVar19 >> 0x38,0);
        uVar25 = SUB161(auVar19 >> 0x30,0);
        uVar24 = SUB161(auVar19 >> 0x28,0);
        uVar22 = SUB161(auVar19 >> 0x20,0);
        auVar21 = CONCAT97(SUB169(CONCAT88(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(
                                                  CONCAT412(SUB164(CONCAT313(SUB163(CONCAT214(SUB162
                                                  (CONCAT115(uVar27,CONCAT114(uVar27,SUB1614(auVar19
                                                  ,0))) >> 0x70,0),
                                                  CONCAT113(uVar25,SUB1613(auVar19,0))) >> 0x68,0),
                                                  CONCAT112(uVar25,SUB1612(auVar19,0))) >> 0x60,0),
                                                  CONCAT111(uVar24,SUB1611(auVar19,0))) >> 0x58,0),
                                                  CONCAT110(uVar24,SUB1610(auVar19,0))) >> 0x50,0),
                                                  CONCAT19(uVar22,SUB169(auVar19,0))) >> 0x48,0),
                                                  CONCAT18(uVar22,SUB168(auVar19,0))) >> 0x40,0),
                                           (SUB168(auVar19,0) >> 0x18) << 0x38) >> 0x38,0),
                           (SUB167(auVar19,0) >> 0x18) << 0x30);
        auVar20 = CONCAT115(SUB1611(CONCAT106(SUB1610(auVar21 >> 0x30,0),
                                              (SUB166(auVar19,0) >> 0x10) << 0x28) >> 0x28,0),
                            (SUB165(auVar19,0) >> 0x10) << 0x20);
        auVar19 = CONCAT142(SUB1614(CONCAT133(SUB1613(CONCAT124(SUB1612(auVar20 >> 0x20,0),
                                                                (SUB164(auVar19,0) >> 8) << 0x18) >>
                                                      0x18,0),(SUB163(auVar19,0) >> 8) << 0x10) >>
                                    0x10,0),SUB162(auVar19,0) & 0xff | SUB162(auVar19,0) << 8);
        uVar26 = SUB162(auVar21 >> 0x30,0);
        uVar23 = SUB162(auVar20 >> 0x20,0);
        auVar19 = CONCAT124(SUB1612(CONCAT106(SUB1610(CONCAT88(SUB168(CONCAT610(SUB166(CONCAT412(
                                                  SUB164(CONCAT214(uVar26,CONCAT212(uVar26,SUB1612(
                                                  auVar19,0))) >> 0x60,0),
                                                  CONCAT210(uVar23,SUB1610(auVar19,0))) >> 0x50,0),
                                                  CONCAT28(uVar23,SUB168(auVar19,0))) >> 0x40,0),
                                                  (SUB168(auVar19,0) >> 0x10) << 0x30) >> 0x30,0),
                                              (SUB166(auVar19,0) >> 0x10) << 0x20) >> 0x20,0),
                            SUB164(auVar19,0) & 0xffff | SUB164(auVar19,0) << 0x10) & __LCPI4_0;
        iVar14 = SUB164(auVar15,0) + SUB164(auVar19,0);
        iVar16 = SUB164(auVar15 >> 0x20,0) + SUB164(auVar19 >> 0x20,0);
        iVar17 = SUB164(auVar15 >> 0x40,0) + SUB164(auVar19 >> 0x40,0);
        iVar18 = SUB164(auVar15 >> 0x60,0) + SUB164(auVar19 >> 0x60,0);
        auVar15 = CONCAT412(iVar18,CONCAT48(iVar17,CONCAT44(iVar16,iVar14)));
        uVar9 = uVar9 + 4;
      } while (uVar9 != uVar1);
      uVar11 = iVar18 + iVar16 + iVar17 + iVar14;
      lVar3 = lVar12;
      if (uVar2 + 1 != uVar1) goto LAB_00100d40;
    }
    if (0x144e < (int)lVar7) {
      return uVar11;
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
  _DAT_fdbfe80e110f41f2 = (double)local_20._8_4_ * 1e-06 + (double)local_20._0_8_;
  uVar2 = blowfish_main();
  uVar3 = gettimeofday((timeval *)local_20,(__timezone_ptr_t)0x0);
  if (uVar3 != 0) {
    printf("Error return from gettimeofday: %d",(ulong)uVar3);
  }
  _DAT_5c0f41f200110ff2 = (double)local_20._8_4_ * 1e-06 + (double)local_20._0_8_;
  printf("%0.6f\n",_DAT_5c0f41f200110ff2 - _DAT_fdbfe80e110f41f2);
  return uVar2;
}


