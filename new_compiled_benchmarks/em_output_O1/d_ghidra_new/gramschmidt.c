
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "ghidra_base.h"
#include "gramschmidt.h"
void kernel_gramschmidt(uint param_1,uint param_2,long param_3,long param_4,long param_5)

{
  double *pdVar1;
  long lVar2;
  double dVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  double dVar11;
  
  if (0 < (int)param_2) {
    uVar10 = (ulong)param_1;
    uVar8 = 1;
    uVar9 = 0;
    do {
      dVar11 = 0.0;
      if (0 < (int)param_1) {
        uVar4 = 0;
        do {
          dVar3 = *(double *)(uVar4 * 0x2580 + param_3 + uVar9 * 8);
          dVar11 = dVar11 + dVar3 * dVar3;
          uVar4 = uVar4 + 1;
        } while (uVar4 != uVar10);
      }
      if (dVar11 < 0.0) {
        dVar11 = sqrt(dVar11);
      }
      else {
        dVar11 = SQRT(dVar11);
      }
      lVar5 = uVar9 * 0x2580 + param_4;
      *(double *)(lVar5 + uVar9 * 8) = dVar11;
      if (0 < (int)param_1) {
        uVar4 = 0;
        do {
          *(double *)(uVar4 * 0x2580 + param_5 + uVar9 * 8) =
               *(double *)(param_3 + uVar4 * 0x2580 + uVar9 * 8) / *(double *)(lVar5 + uVar9 * 8);
          uVar4 = uVar4 + 1;
        } while (uVar4 != uVar10);
      }
      uVar4 = uVar9 + 1;
      uVar6 = uVar8;
      if ((long)uVar4 < (long)(int)param_2) {
        do {
          pdVar1 = (double *)(lVar5 + uVar6 * 8);
          *(int8 *)(lVar5 + uVar6 * 8) = 0;
          if (0 < (int)param_1) {
            dVar11 = *pdVar1;
            uVar7 = 0;
            do {
              dVar11 = dVar11 + *(double *)(param_5 + uVar7 * 0x2580 + uVar9 * 8) *
                                *(double *)(uVar7 * 0x2580 + param_3 + uVar6 * 8);
              *pdVar1 = dVar11;
              uVar7 = uVar7 + 1;
            } while (uVar7 != uVar10);
          }
          if (0 < (int)param_1) {
            uVar7 = 0;
            do {
              lVar2 = param_3 + uVar7 * 0x2580;
              *(double *)(lVar2 + uVar6 * 8) =
                   *(double *)(lVar2 + uVar6 * 8) -
                   *(double *)(uVar7 * 0x2580 + param_5 + uVar9 * 8) * *pdVar1;
              uVar7 = uVar7 + 1;
            } while (uVar7 != uVar10);
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 != param_2);
      }
      uVar8 = uVar8 + 1;
      uVar9 = uVar4;
    } while (uVar4 != param_2);
  }
  return;
}
