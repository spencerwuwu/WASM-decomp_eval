
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "ghidra_base.h"
#include "floyd-warshall.h"
void kernel_floyd_warshall(uint param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  
  if (0 < (int)param_1) {
    uVar2 = (ulong)param_1;
    uVar3 = 0;
    do {
      uVar4 = 0;
      do {
        lVar5 = uVar4 * 0x2bc0 + param_2;
        uVar6 = 0;
        do {
          iVar7 = *(int *)(uVar3 * 0x2bc0 + param_2 + uVar6 * 4) + *(int *)(lVar5 + uVar3 * 4);
          iVar1 = *(int *)(lVar5 + uVar6 * 4);
          if (iVar1 < iVar7) {
            iVar7 = iVar1;
          }
          *(int *)(lVar5 + uVar6 * 4) = iVar7;
          uVar6 = uVar6 + 1;
        } while (uVar6 != uVar2);
        uVar4 = uVar4 + 1;
      } while (uVar4 != uVar2);
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar2);
  }
  return;
}
