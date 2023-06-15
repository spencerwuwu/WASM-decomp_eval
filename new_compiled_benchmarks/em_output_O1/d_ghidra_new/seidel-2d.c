
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "ghidra_base.h"
#include "seidel-2d.h"
void kernel_seidel_2d(int param_1,int param_2,long param_3)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  
  if (0 < param_1) {
    iVar2 = 0;
    do {
      if (2 < param_2) {
        lVar4 = 0;
        uVar5 = 1;
        do {
          uVar1 = uVar5 + 1;
          dVar9 = *(double *)(lVar4 * 16000 + 16000 + param_3);
          uVar3 = 1;
          do {
            lVar6 = (uVar5 - 1) * 16000 + param_3;
            lVar7 = uVar5 * 16000 + param_3;
            lVar8 = uVar1 * 16000 + param_3;
            dVar9 = (*(double *)(lVar6 + -8 + uVar3 * 8) + *(double *)(lVar6 + uVar3 * 8) +
                     *(double *)(lVar6 + 8 + uVar3 * 8) + dVar9 + *(double *)(lVar7 + uVar3 * 8) +
                     *(double *)(lVar7 + 8 + uVar3 * 8) + *(double *)(lVar8 + -8 + uVar3 * 8) +
                     *(double *)(lVar8 + uVar3 * 8) + *(double *)(lVar8 + 8 + uVar3 * 8)) / 9.0;
            *(double *)(lVar7 + uVar3 * 8) = dVar9;
            uVar3 = uVar3 + 1;
          } while (uVar3 != param_2 - 1);
          lVar4 = lVar4 + 1;
          uVar5 = uVar1;
        } while (uVar1 != param_2 - 1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != param_1);
  }
  return;
}
