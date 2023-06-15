
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "ghidra_base.h"
#include "nussinov.h"
void kernel_nussinov(uint param_1,long param_2,long param_3)

{
  int *piVar1;
  int bVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  if (0 < (int)param_1) {
    uVar3 = (ulong)param_1;
    do {
      uVar4 = uVar3 - 1;
      if ((long)uVar3 < (long)(ulong)param_1) {
        lVar8 = uVar4 * 10000 + param_3;
        uVar5 = 0;
        uVar12 = uVar3;
        do {
          if ((long)uVar12 < 1) {
            iVar7 = *(int *)(lVar8 + uVar12 * 4);
            iVar6 = *(int *)(uVar3 * 10000 + param_3 + uVar12 * 4);
            if (iVar6 < iVar7) {
              iVar6 = iVar7;
            }
            *(int *)(lVar8 + uVar12 * 4) = iVar6;
          }
          else {
            uVar10 = uVar12 & 0xffffffff;
            iVar7 = *(int *)(lVar8 + uVar10 * 4);
            uVar11 = (ulong)((int)uVar12 - 1);
            iVar6 = *(int *)(lVar8 + uVar11 * 4);
            if (iVar6 < iVar7) {
              iVar6 = iVar7;
            }
            *(int *)(lVar8 + uVar10 * 4) = iVar6;
            iVar7 = *(int *)(lVar8 + uVar12 * 4);
            lVar9 = uVar3 * 10000 + param_3;
            iVar6 = *(int *)(lVar9 + uVar12 * 4);
            if (iVar6 < iVar7) {
              iVar6 = iVar7;
            }
            *(int *)(lVar8 + uVar12 * 4) = iVar6;
            iVar7 = *(int *)(lVar8 + uVar10 * 4);
            iVar6 = *(int *)(lVar9 + uVar11 * 4);
            if ((long)uVar3 < (long)uVar12) {
              iVar6 = iVar6 + (uint)((int)*(char *)(param_2 + uVar10) +
                                     (int)*(char *)(param_2 + uVar4) == 3);
            }
            if (iVar6 < iVar7) {
              iVar6 = iVar7;
            }
            *(int *)(lVar8 + uVar10 * 4) = iVar6;
          }
          if ((long)uVar3 < (long)uVar12) {
            piVar1 = (int *)(lVar8 + uVar12 * 4);
            iVar7 = *(int *)(lVar8 + uVar12 * 4);
            uVar11 = uVar3;
            if ((uVar5 & 1) != 0) {
              iVar6 = *(int *)((uVar3 + 1) * 10000 + param_3 + uVar12 * 4) +
                      *(int *)(lVar8 + uVar3 * 4);
              if (iVar7 <= iVar6) {
                iVar7 = iVar6;
              }
              *piVar1 = iVar7;
              uVar11 = uVar3 + 1;
            }
            if (uVar5 != 1) {
              do {
                lVar9 = uVar11 * 10000 + param_3;
                iVar6 = *(int *)(lVar9 + 10000 + uVar12 * 4) + *(int *)(lVar8 + uVar11 * 4);
                if (iVar6 < iVar7) {
                  iVar6 = iVar7;
                }
                *piVar1 = iVar6;
                iVar7 = *(int *)(lVar9 + 20000 + uVar12 * 4) + *(int *)(lVar8 + 4 + uVar11 * 4);
                uVar11 = uVar11 + 2;
                if (iVar7 < iVar6) {
                  iVar7 = iVar6;
                }
                *piVar1 = iVar7;
              } while ((int)uVar11 != (int)uVar12);
            }
          }
          uVar12 = uVar12 + 1;
          uVar5 = uVar5 + 1;
        } while ((uint)uVar12 != param_1);
      }
      bVar2 = 1 < (long)uVar3;
      uVar3 = uVar4;
    } while (bVar2);
  }
  return;
}
