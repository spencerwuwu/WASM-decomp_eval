
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
  int bVar1;
  int iVar2;
  int *puVar3;
  long lVar4;
  
  if (3 < param_3) {
    lVar4 = 0;
    if (0 < param_4) {
      lVar4 = (ulong)(param_4 - 1) * 4 + 4;
    }
    puVar3 = (int *)(param_1 + lVar4);
    iVar2 = param_3 + 3;
    if (-1 < param_3) {
      iVar2 = param_3;
    }
    iVar2 = iVar2 >> 2;
    do {
      *puVar3 = param_2;
      puVar3 = puVar3 + 1;
      bVar1 = 1 < iVar2;
      iVar2 = iVar2 + -1;
    } while (bVar1);
  }
  return;
}
