
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "ghidra_base.h"
#include "bf.h"
void local_memcpy(int8 *param_1,int8 *param_2,uint param_3)

{
  int8 *puVar1;
  int8 *puVar2;
  int bVar3;
  int uVar4;
  int uVar5;
  int uVar6;
  int uVar7;
  int uVar8;
  int uVar9;
  int uVar10;
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
        uVar4 = *(int *)((long)puVar1 + 4);
        uVar5 = *(int *)(puVar1 + 1);
        uVar6 = *(int *)((long)puVar1 + 0xc);
        puVar2 = param_2 + uVar13 + 2;
        uVar7 = *(int *)puVar2;
        uVar8 = *(int *)((long)puVar2 + 4);
        uVar9 = *(int *)(puVar2 + 1);
        uVar10 = *(int *)((long)puVar2 + 0xc);
        puVar2 = param_1 + uVar13;
        *(int *)puVar2 = *(int *)puVar1;
        *(int *)((long)puVar2 + 4) = uVar4;
        *(int *)(puVar2 + 1) = uVar5;
        *(int *)((long)puVar2 + 0xc) = uVar6;
        puVar1 = param_1 + uVar13 + 2;
        *(int *)puVar1 = uVar7;
        *(int *)((long)puVar1 + 4) = uVar8;
        *(int *)(puVar1 + 1) = uVar9;
        *(int *)((long)puVar1 + 0xc) = uVar10;
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
void BF_set_key(BF_KEY *key,int len,uchar *data)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  long lVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  int in_register_00000034;
  byte *pbVar8;
  byte *pbVar9;
  ulong uVar10;
  int bVar11;
  int local_38 [8];
  int uStack_30;
  int uStack_2c;
  
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
  BF_encrypt((uint *)local_38,(BF_KEY *)0x1);
  _DAT_ba00000000358b48 = local_38;
  uRamba00000000358b4c = local_38;
  uRamba00000000358b50 = uStack_30;
  uRamba00000000358b54 = uStack_2c;
  BF_encrypt((uint *)local_38,(BF_KEY *)0x1);
  _DAT_ba00000000358b58 = local_38;
  uRamba00000000358b5c = local_38;
  uRamba00000000358b60 = uStack_30;
  uRamba00000000358b64 = uStack_2c;
  BF_encrypt((uint *)local_38,(BF_KEY *)0x1);
  _DAT_ba00000000358b68 = local_38;
  uRamba00000000358b6c = local_38;
  uRamba00000000358b70 = uStack_30;
  uRamba00000000358b74 = uStack_2c;
  BF_encrypt((uint *)local_38,(BF_KEY *)0x1);
  _DAT_ba00000000358b78 = local_38;
  uRamba00000000358b7c = local_38;
  uRamba00000000358b80 = uStack_30;
  uRamba00000000358b84 = uStack_2c;
  BF_encrypt((uint *)local_38,(BF_KEY *)0x1);
  _DAT_ba00000000358b88 = local_38;
  uRamba00000000358b8c = local_38;
  uRamba00000000358b90 = uStack_30;
  uRamba00000000358b94 = uStack_2c;
  BF_encrypt((uint *)local_38,(BF_KEY *)0x1);
  _DAT_ba00000000358b98 = local_38;
  uRamba00000000358b9c = local_38;
  uRamba00000000358ba0 = uStack_30;
  uRamba00000000358ba4 = uStack_2c;
  BF_encrypt((uint *)local_38,(BF_KEY *)0x1);
  _DAT_ba00000000358ba8 = local_38;
  uRamba00000000358bac = local_38;
  uRamba00000000358bb0 = uStack_30;
  uRamba00000000358bb4 = uStack_2c;
  BF_encrypt((uint *)local_38,(BF_KEY *)0x1);
  _DAT_ba00000000358bb8 = local_38;
  uRamba00000000358bbc = local_38;
  uRamba00000000358bc0 = uStack_30;
  uRamba00000000358bc4 = uStack_2c;
  BF_encrypt((uint *)local_38,(BF_KEY *)0x1);
  _DAT_ba00000000358bc8 = local_38;
  uRamba00000000358bcc = local_38;
  uRamba00000000358bd0 = uStack_30;
  uRamba00000000358bd4 = uStack_2c;
  uVar10 = 0;
  do {
    BF_encrypt((uint *)local_38,(BF_KEY *)0x1);
    lVar4 = uVar10 * 8;
    *(uint *)(&DAT_ba00000000358b48 + lVar4) = local_38;
    *(int *)(lVar4 + -0x45ffffffffca74b4) = local_38;
    *(int *)(lVar4 + -0x45ffffffffca74b0) = uStack_30;
    *(int *)(lVar4 + -0x45ffffffffca74ac) = uStack_2c;
    bVar11 = uVar10 < 0x3fe;
    uVar10 = uVar10 + 2;
  } while (bVar11);
  return;
}
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
