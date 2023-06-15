
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "ghidra_base.h"
#include "correlation.h"
void kernel_correlation(double param_1,uint param_2,uint param_3,long param_4,long param_5,
                       long param_6,long param_7)

{
  ulong uVar1;
  double *pdVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  double dVar11;
  double dVar12;
  
  uVar1 = (ulong)param_2;
  if (0 < (int)param_2) {
    uVar3 = 0;
    do {
      *(int8 *)(param_6 + uVar3 * 8) = 0;
      dVar11 = 0.0;
      if (0 < (int)param_3) {
        uVar4 = 0;
        uVar5 = 0;
        if (3 < param_3) {
          do {
            dVar11 = dVar11 + *(double *)(uVar4 * 0x2580 + param_4 + uVar3 * 8);
            *(double *)(param_6 + uVar3 * 8) = dVar11;
            dVar11 = dVar11 + *(double *)((uVar4 | 1) * 0x2580 + param_4 + uVar3 * 8);
            *(double *)(param_6 + uVar3 * 8) = dVar11;
            dVar11 = dVar11 + *(double *)((uVar4 | 2) * 0x2580 + param_4 + uVar3 * 8);
            *(double *)(param_6 + uVar3 * 8) = dVar11;
            dVar11 = dVar11 + *(double *)((uVar4 | 3) * 0x2580 + param_4 + uVar3 * 8);
            *(double *)(param_6 + uVar3 * 8) = dVar11;
            uVar4 = uVar4 + 4;
            uVar5 = uVar5 + 4;
          } while (uVar5 != (param_3 & 0xfffffffc));
        }
        if ((ulong)(param_3 & 3) != 0) {
          uVar5 = 0;
          do {
            dVar11 = dVar11 + *(double *)(uVar4 * 0x2580 + param_4 + uVar3 * 8);
            *(double *)(param_6 + uVar3 * 8) = dVar11;
            uVar4 = uVar4 + 1;
            uVar5 = uVar5 + 1;
          } while (uVar5 != (param_3 & 3));
        }
      }
      *(double *)(param_6 + uVar3 * 8) = dVar11 / param_1;
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar1);
    if (0 < (int)param_2) {
      uVar3 = 0;
      do {
        *(int8 *)(param_7 + uVar3 * 8) = 0;
        dVar11 = 0.0;
        if (0 < (int)param_3) {
          uVar4 = 0;
          uVar5 = 0;
          if (param_3 != 1) {
            do {
              dVar12 = *(double *)(uVar4 * 0x2580 + param_4 + uVar3 * 8) -
                       *(double *)(param_6 + uVar3 * 8);
              dVar11 = dVar12 * dVar12 + dVar11;
              *(double *)(param_7 + uVar3 * 8) = dVar11;
              dVar12 = *(double *)((uVar4 | 1) * 0x2580 + param_4 + uVar3 * 8) -
                       *(double *)(param_6 + uVar3 * 8);
              dVar11 = dVar12 * dVar12 + dVar11;
              *(double *)(param_7 + uVar3 * 8) = dVar11;
              uVar4 = uVar4 + 2;
              uVar5 = uVar5 + 2;
            } while (uVar5 != (param_3 & 0xfffffffe));
          }
          if ((param_3 & 1) != 0) {
            dVar12 = *(double *)(uVar4 * 0x2580 + param_4 + uVar3 * 8) -
                     *(double *)(param_6 + uVar3 * 8);
            dVar11 = dVar11 + dVar12 * dVar12;
            *(double *)(param_7 + uVar3 * 8) = dVar11;
          }
        }
        dVar11 = dVar11 / param_1;
        if (dVar11 < 0.0) {
          dVar11 = sqrt(dVar11);
        }
        else {
          dVar11 = SQRT(dVar11);
        }
        *(ulong *)(param_7 + uVar3 * 8) =
             ~-(ulong)(0.1 < dVar11) | (ulong)dVar11 & -(ulong)(0.1 < dVar11);
        uVar3 = uVar3 + 1;
      } while (uVar3 != uVar1);
    }
  }
  if (0 < (int)param_3) {
    uVar3 = 0;
    do {
      if (0 < (int)param_2) {
        uVar4 = 0;
        do {
          lVar8 = uVar3 * 0x2580 + param_4;
          *(double *)(lVar8 + uVar4 * 8) =
               *(double *)(lVar8 + uVar4 * 8) - *(double *)(param_6 + uVar4 * 8);
          dVar11 = SQRT(param_1);
          if (param_1 < 0.0) {
            dVar11 = sqrt(param_1);
          }
          pdVar2 = (double *)(uVar4 * 8 + lVar8);
          *pdVar2 = *pdVar2 / (dVar11 * *(double *)(param_7 + uVar4 * 8));
          uVar4 = uVar4 + 1;
        } while (uVar4 != uVar1);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 != param_3);
  }
  if (1 < (int)param_2) {
    uVar4 = 1;
    uVar3 = 0;
    do {
      lVar8 = uVar3 * 0x2580 + param_5;
      *(int8 *)(lVar8 + uVar3 * 8) = 0x3ff0000000000000;
      uVar6 = uVar3 + 1;
      uVar5 = uVar4;
      if (uVar6 < uVar1) {
        do {
          *(int8 *)(lVar8 + uVar5 * 8) = 0;
          if ((int)param_3 < 1) {
            dVar11 = 0.0;
          }
          else {
            pdVar2 = (double *)(lVar8 + uVar5 * 8);
            dVar11 = 0.0;
            uVar10 = 0;
            uVar7 = 0;
            if (param_3 != 1) {
              do {
                lVar9 = uVar10 * 0x2580 + param_4;
                dVar11 = *(double *)(lVar9 + uVar3 * 8) * *(double *)(lVar9 + uVar5 * 8) + dVar11;
                *pdVar2 = dVar11;
                lVar9 = (uVar10 | 1) * 0x2580 + param_4;
                dVar11 = *(double *)(lVar9 + uVar3 * 8) * *(double *)(lVar9 + uVar5 * 8) + dVar11;
                *pdVar2 = dVar11;
                uVar10 = uVar10 + 2;
                uVar7 = uVar7 + 2;
              } while (uVar7 != (param_3 & 0xfffffffe));
            }
            if ((param_3 & 1) != 0) {
              lVar9 = uVar10 * 0x2580 + param_4;
              dVar11 = dVar11 + *(double *)(lVar9 + uVar3 * 8) * *(double *)(lVar9 + uVar5 * 8);
              *pdVar2 = dVar11;
            }
          }
          *(double *)(uVar5 * 0x2580 + param_5 + uVar3 * 8) = dVar11;
          uVar5 = uVar5 + 1;
        } while (uVar5 != uVar1);
      }
      uVar4 = uVar4 + 1;
      uVar3 = uVar6;
    } while (uVar6 != param_2 - 1);
  }
  *(int8 *)(param_5 + (long)(int)(param_2 - 1) * 0x2588) = 0x3ff0000000000000;
  return;
}
