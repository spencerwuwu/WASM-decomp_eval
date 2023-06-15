
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "ghidra_base.h"
#include "sha_driver.h"
void local_memset(long param_1,int param_2,int param_3,int param_4)

{
  int *puVar1;
  int bVar2;
  int iVar3;
  ulong uVar4;
  int *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  
  iVar3 = param_3 + 3;
  if (-1 < param_3) {
    iVar3 = param_3;
  }
  lVar6 = 0;
  if (0 < param_4) {
    lVar6 = (ulong)(param_4 - 1) * 4 + 4;
  }
  if (3 < param_3) {
    iVar3 = iVar3 >> 2;
    puVar5 = (int *)(param_1 + lVar6);
    if (6 < iVar3 - 1U) {
      uVar4 = (ulong)(iVar3 - 1U) + 1;
      uVar7 = uVar4 & 0xfffffffffffffff8;
      iVar3 = iVar3 - (int)uVar7;
      uVar8 = 0;
      do {
        puVar1 = puVar5 + uVar8;
        *puVar1 = param_2;
        puVar1[1] = param_2;
        puVar1[2] = param_2;
        puVar1[3] = param_2;
        puVar1 = puVar5 + uVar8 + 4;
        *puVar1 = param_2;
        puVar1[1] = param_2;
        puVar1[2] = param_2;
        puVar1[3] = param_2;
        uVar8 = uVar8 + 8;
      } while (uVar8 != uVar7);
      puVar5 = puVar5 + uVar7;
      if (uVar4 == uVar7) {
        return;
      }
    }
    do {
      *puVar5 = param_2;
      bVar2 = 1 < iVar3;
      puVar5 = puVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (bVar2);
  }
  return;
}
