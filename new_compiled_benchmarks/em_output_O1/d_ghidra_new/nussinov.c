
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "ghidra_base.h"
#include "nussinov.h"
void kernel_nussinov(int param_1,long param_2,long param_3)

{
  long lVar1;
  int *piVar2;
  int bVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  
  if (0 < param_1) {
    lVar4 = (long)param_1;
    do {
      lVar5 = lVar4 + -1;
      lVar8 = lVar4;
      if (lVar4 < param_1) {
        do {
          lVar9 = lVar5 * 10000 + param_3;
          piVar2 = (int *)(lVar9 + lVar8 * 4);
          iVar6 = *(int *)(lVar9 + lVar8 * 4);
          if (lVar8 < 1) {
            iVar7 = *(int *)(lVar4 * 10000 + param_3 + lVar8 * 4);
            if (iVar7 < iVar6) {
              iVar7 = iVar6;
            }
            *piVar2 = iVar7;
          }
          else {
            uVar10 = (ulong)((int)lVar8 - 1);
            iVar7 = *(int *)(lVar9 + uVar10 * 4);
            if (iVar7 < iVar6) {
              iVar7 = iVar6;
            }
            *piVar2 = iVar7;
            lVar11 = lVar4 * 10000 + param_3;
            iVar6 = *(int *)(lVar11 + lVar8 * 4);
            if (iVar7 <= iVar6) {
              iVar7 = iVar6;
            }
            *(int *)(lVar9 + lVar8 * 4) = iVar7;
            iVar6 = *(int *)(lVar11 + uVar10 * 4);
            if (lVar4 < lVar8) {
              iVar6 = iVar6 + (uint)((int)*(char *)(param_2 + lVar8) +
                                     (int)*(char *)(param_2 + lVar5) == 3);
            }
            if (iVar6 < iVar7) {
              iVar6 = iVar7;
            }
            *piVar2 = iVar6;
          }
          if (lVar4 < lVar8) {
            iVar6 = *(int *)(lVar9 + lVar8 * 4);
            lVar11 = lVar4;
            do {
              lVar1 = lVar11 + 1;
              iVar7 = *(int *)(lVar1 * 10000 + param_3 + lVar8 * 4) + *(int *)(lVar9 + lVar11 * 4);
              if (iVar6 <= iVar7) {
                iVar6 = iVar7;
              }
              *piVar2 = iVar6;
              lVar11 = lVar1;
            } while ((int)lVar1 != (int)lVar8);
          }
          lVar8 = lVar8 + 1;
        } while ((int)lVar8 != param_1);
      }
      bVar3 = 1 < lVar4;
      lVar4 = lVar5;
    } while (bVar3);
  }
  return;
}
