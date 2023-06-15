
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "ghidra_base.h"
#include "heat-3d.h"
void kernel_heat_3d(int8 param_1,int param_2,long param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  double dVar12;
  
  uVar6 = (ulong)(param_2 - 1);
  iVar7 = 1;
  do {
    uVar8 = 1;
    if (2 < param_2) {
      do {
        uVar1 = uVar8 + 1;
        uVar9 = 1;
        do {
          uVar2 = uVar9 + 1;
          uVar11 = 1;
          do {
            lVar10 = uVar9 * 0x3c0;
            lVar3 = param_3 + uVar8 * 0x1c200;
            lVar4 = lVar3 + lVar10;
            dVar5 = *(double *)(lVar4 + uVar11 * 8);
            dVar12 = dVar5 * -2.0;
            *(double *)(uVar8 * 0x1c200 + param_4 + lVar10 + uVar11 * 8) =
                 (dVar12 + *(double *)(lVar4 + 8 + uVar11 * 8) +
                 *(double *)(lVar4 + -8 + uVar11 * 8)) * 0.125 +
                 (*(double *)(uVar1 * 0x1c200 + param_3 + lVar10 + uVar11 * 8) + dVar12 +
                 *(double *)((uVar8 - 1) * 0x1c200 + param_3 + lVar10 + uVar11 * 8)) * 0.125 +
                 (*(double *)(uVar2 * 0x3c0 + lVar3 + uVar11 * 8) + dVar12 +
                 *(double *)((uVar9 - 1) * 0x3c0 + lVar3 + uVar11 * 8)) * 0.125 + dVar5;
            uVar11 = uVar11 + 1;
          } while (uVar11 != uVar6);
          uVar9 = uVar2;
        } while (uVar2 != uVar6);
        uVar8 = uVar1;
      } while (uVar1 != uVar6);
    }
    uVar8 = 1;
    if (2 < param_2) {
      do {
        uVar1 = uVar8 + 1;
        uVar9 = 1;
        do {
          uVar2 = uVar9 + 1;
          uVar11 = 1;
          do {
            lVar10 = uVar9 * 0x3c0;
            lVar3 = param_4 + uVar8 * 0x1c200;
            lVar4 = lVar3 + lVar10;
            dVar5 = *(double *)(lVar4 + uVar11 * 8);
            dVar12 = dVar5 * -2.0;
            *(double *)(uVar8 * 0x1c200 + param_3 + lVar10 + uVar11 * 8) =
                 (dVar12 + *(double *)(lVar4 + 8 + uVar11 * 8) +
                 *(double *)(lVar4 + -8 + uVar11 * 8)) * 0.125 +
                 (*(double *)(uVar1 * 0x1c200 + param_4 + lVar10 + uVar11 * 8) + dVar12 +
                 *(double *)((uVar8 - 1) * 0x1c200 + param_4 + lVar10 + uVar11 * 8)) * 0.125 +
                 (*(double *)(uVar2 * 0x3c0 + lVar3 + uVar11 * 8) + dVar12 +
                 *(double *)((uVar9 - 1) * 0x3c0 + lVar3 + uVar11 * 8)) * 0.125 + dVar5;
            uVar11 = uVar11 + 1;
          } while (uVar11 != uVar6);
          uVar9 = uVar2;
        } while (uVar2 != uVar6);
        uVar8 = uVar1;
      } while (uVar1 != uVar6);
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 != 0x1f5);
  return;
}
