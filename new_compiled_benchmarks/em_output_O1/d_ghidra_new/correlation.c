
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
  double *pdVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  double dVar11;
  
  uVar2 = (ulong)param_2;
  uVar4 = (ulong)param_3;
  if (0 < (int)param_2) {
    uVar3 = 0;
    do {
      *(int8 *)(param_6 + uVar3 * 8) = 0;
      if (0 < (int)param_3) {
        dVar11 = *(double *)(param_6 + uVar3 * 8);
        uVar5 = 0;
        do {
          dVar11 = dVar11 + *(double *)(uVar5 * 0x2580 + param_4 + uVar3 * 8);
          *(double *)(param_6 + uVar3 * 8) = dVar11;
          uVar5 = uVar5 + 1;
        } while (uVar5 != uVar4);
      }
      *(double *)(param_6 + uVar3 * 8) = *(double *)(param_6 + uVar3 * 8) / param_1;
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar2);
  }
  if (0 < (int)param_2) {
    uVar3 = 0;
    do {
      *(int8 *)(param_7 + uVar3 * 8) = 0;
      if (0 < (int)param_3) {
        uVar5 = 0;
        do {
          dVar11 = *(double *)(uVar5 * 0x2580 + param_4 + uVar3 * 8) -
                   *(double *)(param_6 + uVar3 * 8);
          *(double *)(param_7 + uVar3 * 8) = dVar11 * dVar11 + *(double *)(param_7 + uVar3 * 8);
          uVar5 = uVar5 + 1;
        } while (uVar5 != uVar4);
      }
      dVar11 = *(double *)(param_7 + uVar3 * 8) / param_1;
      if (dVar11 < 0.0) {
        dVar11 = sqrt(dVar11);
      }
      else {
        dVar11 = SQRT(dVar11);
      }
      *(ulong *)(param_7 + uVar3 * 8) =
           ~-(ulong)(0.1 < dVar11) | (ulong)dVar11 & -(ulong)(0.1 < dVar11);
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar2);
  }
  if (0 < (int)param_3) {
    uVar3 = 0;
    do {
      if (0 < (int)param_2) {
        uVar5 = 0;
        do {
          lVar8 = uVar3 * 0x2580 + param_4;
          *(double *)(lVar8 + uVar5 * 8) =
               *(double *)(lVar8 + uVar5 * 8) - *(double *)(param_6 + uVar5 * 8);
          dVar11 = SQRT(param_1);
          if (param_1 < 0.0) {
            dVar11 = sqrt(param_1);
          }
          pdVar1 = (double *)(lVar8 + uVar5 * 8);
          *pdVar1 = *pdVar1 / (dVar11 * *(double *)(param_7 + uVar5 * 8));
          uVar5 = uVar5 + 1;
        } while (uVar5 != uVar2);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar4);
  }
  if (1 < (int)param_2) {
    uVar5 = 1;
    uVar3 = 0;
    do {
      lVar8 = uVar3 * 0x2580 + param_5;
      *(int8 *)(lVar8 + uVar3 * 8) = 0x3ff0000000000000;
      uVar6 = uVar3 + 1;
      uVar7 = uVar5;
      if ((long)uVar6 < (long)(int)param_2) {
        do {
          pdVar1 = (double *)(lVar8 + uVar7 * 8);
          *(int8 *)(lVar8 + uVar7 * 8) = 0;
          if (0 < (int)param_3) {
            dVar11 = *pdVar1;
            uVar9 = 0;
            do {
              lVar10 = uVar9 * 0x2580 + param_4;
              dVar11 = dVar11 + *(double *)(lVar10 + uVar3 * 8) * *(double *)(lVar10 + uVar7 * 8);
              *pdVar1 = dVar11;
              uVar9 = uVar9 + 1;
            } while (uVar9 != uVar4);
          }
          *(double *)(uVar7 * 0x2580 + param_5 + uVar3 * 8) = *pdVar1;
          uVar7 = uVar7 + 1;
        } while (uVar7 != uVar2);
      }
      uVar5 = uVar5 + 1;
      uVar3 = uVar6;
    } while (uVar6 != param_2 - 1);
  }
  *(int8 *)(param_5 + (long)(int)(param_2 - 1) * 0x2588) = 0x3ff0000000000000;
  return;
}
