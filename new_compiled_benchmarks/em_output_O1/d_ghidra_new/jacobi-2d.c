
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "ghidra_base.h"
#include "jacobi-2d.h"
void kernel_jacobi_2d(int param_1,int param_2,long param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  
  if (0 < param_1) {
    uVar3 = (ulong)(param_2 - 1);
    iVar5 = 0;
    do {
      uVar6 = 1;
      if (2 < param_2) {
        do {
          uVar1 = uVar6 + 1;
          uVar4 = 1;
          do {
            lVar2 = param_3 + uVar6 * 0x28a0;
            *(double *)(uVar6 * 0x28a0 + param_4 + uVar4 * 8) =
                 (*(double *)(lVar2 + uVar4 * 8) + *(double *)(lVar2 + -8 + uVar4 * 8) +
                  *(double *)(lVar2 + 8 + uVar4 * 8) +
                  *(double *)(uVar1 * 0x28a0 + param_3 + uVar4 * 8) +
                 *(double *)((uVar6 - 1) * 0x28a0 + param_3 + uVar4 * 8)) * 0.2;
            uVar4 = uVar4 + 1;
          } while (uVar4 != uVar3);
          uVar6 = uVar1;
        } while (uVar1 != uVar3);
      }
      uVar6 = 1;
      if (2 < param_2) {
        do {
          uVar1 = uVar6 + 1;
          uVar4 = 1;
          do {
            lVar2 = param_4 + uVar6 * 0x28a0;
            *(double *)(uVar6 * 0x28a0 + param_3 + uVar4 * 8) =
                 (*(double *)(lVar2 + uVar4 * 8) + *(double *)(lVar2 + -8 + uVar4 * 8) +
                  *(double *)(lVar2 + 8 + uVar4 * 8) +
                  *(double *)(uVar1 * 0x28a0 + param_4 + uVar4 * 8) +
                 *(double *)((uVar6 - 1) * 0x28a0 + param_4 + uVar4 * 8)) * 0.2;
            uVar4 = uVar4 + 1;
          } while (uVar4 != uVar3);
          uVar6 = uVar1;
        } while (uVar1 != uVar3);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 != param_1);
  }
  return;
}
