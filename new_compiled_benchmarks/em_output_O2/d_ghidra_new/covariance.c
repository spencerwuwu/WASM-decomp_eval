
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "ghidra_base.h"
#include "covariance.h"
void kernel_covariance(double param_1,uint param_2,uint param_3,long param_4,long param_5,
                      ulong param_6)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  double dVar13;
  
  uVar6 = (ulong)param_2;
  if (0 < (int)param_2) {
    uVar7 = 0;
    do {
      *(int8 *)(param_6 + uVar7 * 8) = 0;
      dVar13 = 0.0;
      if (0 < (int)param_3) {
        uVar11 = 0;
        uVar12 = 0;
        if (3 < param_3) {
          do {
            dVar13 = dVar13 + *(double *)(uVar11 * 0x2580 + param_4 + uVar7 * 8);
            *(double *)(param_6 + uVar7 * 8) = dVar13;
            dVar13 = dVar13 + *(double *)((uVar11 | 1) * 0x2580 + param_4 + uVar7 * 8);
            *(double *)(param_6 + uVar7 * 8) = dVar13;
            dVar13 = dVar13 + *(double *)((uVar11 | 2) * 0x2580 + param_4 + uVar7 * 8);
            *(double *)(param_6 + uVar7 * 8) = dVar13;
            dVar13 = dVar13 + *(double *)((uVar11 | 3) * 0x2580 + param_4 + uVar7 * 8);
            *(double *)(param_6 + uVar7 * 8) = dVar13;
            uVar11 = uVar11 + 4;
            uVar12 = uVar12 + 4;
          } while (uVar12 != (param_3 & 0xfffffffc));
        }
        if ((ulong)(param_3 & 3) != 0) {
          uVar12 = 0;
          do {
            dVar13 = dVar13 + *(double *)(uVar11 * 0x2580 + param_4 + uVar7 * 8);
            *(double *)(param_6 + uVar7 * 8) = dVar13;
            uVar11 = uVar11 + 1;
            uVar12 = uVar12 + 1;
          } while (uVar12 != (param_3 & 3));
        }
      }
      *(double *)(param_6 + uVar7 * 8) = dVar13 / param_1;
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar6);
  }
  if (0 < (int)param_3) {
    uVar7 = (ulong)(param_2 & 0xfffffffc);
    uVar11 = 0;
    do {
      if (0 < (int)param_2) {
        uVar12 = param_4 + uVar11 * 0x2580;
        if (param_2 < 6) {
          uVar9 = 0;
        }
        else {
          if (uVar12 < param_6 + uVar6 * 8) {
            uVar10 = 0;
            uVar9 = 0;
            if (param_6 < uVar11 * 0x2580 + uVar6 * 8 + param_4) goto LAB_00100200;
          }
          else {
            uVar10 = 0;
          }
          do {
            pdVar1 = (double *)(param_6 + uVar10 * 8);
            pdVar2 = (double *)(param_6 + 0x10 + uVar10 * 8);
            dVar13 = *pdVar2;
            dVar4 = pdVar2[1];
            pdVar2 = (double *)(uVar12 + uVar10 * 8);
            pdVar3 = (double *)(uVar12 + 0x10 + uVar10 * 8);
            dVar5 = pdVar3[1];
            *(int (*) [16])(uVar12 + uVar10 * 8) =
            *(int (*) [16])(uVar12 + 0x10 + uVar10 * 8) =
            uVar10 = uVar10 + 4;
          } while (uVar10 != uVar7);
          uVar9 = uVar7;
          if (uVar7 == uVar6) goto LAB_00100160;
        }
LAB_00100200:
        uVar10 = uVar9;
        if ((param_2 & 1) != 0) {
          *(double *)(uVar12 + uVar9 * 8) =
               *(double *)(uVar12 + uVar9 * 8) - *(double *)(param_6 + uVar9 * 8);
          uVar10 = uVar9 | 1;
        }
        if (~uVar9 != -uVar6) {
          do {
            *(double *)(uVar12 + uVar10 * 8) =
                 *(double *)(uVar12 + uVar10 * 8) - *(double *)(param_6 + uVar10 * 8);
            *(double *)(uVar12 + 8 + uVar10 * 8) =
                 *(double *)(uVar12 + 8 + uVar10 * 8) - *(double *)(param_6 + 8 + uVar10 * 8);
            uVar10 = uVar10 + 2;
          } while (uVar10 != uVar6);
        }
      }
LAB_00100160:
      uVar11 = uVar11 + 1;
    } while (uVar11 != param_3);
  }
  if (0 < (int)param_2) {
    uVar11 = 0;
    uVar7 = uVar11;
    do {
      lVar8 = uVar7 * 0x2580 + param_5;
      pdVar1 = (double *)(lVar8 + uVar11 * 8);
      *(int8 *)(lVar8 + uVar11 * 8) = 0;
      dVar13 = 0.0;
      if (0 < (int)param_3) {
        uVar12 = 0;
        uVar10 = 0;
        if (param_3 != 1) {
          do {
            lVar8 = uVar12 * 0x2580 + param_4;
            dVar13 = *(double *)(lVar8 + uVar7 * 8) * *(double *)(lVar8 + uVar11 * 8) + dVar13;
            *pdVar1 = dVar13;
            lVar8 = (uVar12 | 1) * 0x2580 + param_4;
            dVar13 = *(double *)(lVar8 + uVar7 * 8) * *(double *)(lVar8 + uVar11 * 8) + dVar13;
            *pdVar1 = dVar13;
            uVar12 = uVar12 + 2;
            uVar10 = uVar10 + 2;
          } while (uVar10 != (param_3 & 0xfffffffe));
        }
        if ((param_3 & 1) != 0) {
          lVar8 = uVar12 * 0x2580 + param_4;
          dVar13 = dVar13 + *(double *)(lVar8 + uVar7 * 8) * *(double *)(lVar8 + uVar11 * 8);
          *pdVar1 = dVar13;
        }
      }
      dVar13 = dVar13 / (param_1 + -1.0);
      *pdVar1 = dVar13;
      *(double *)(uVar11 * 0x2580 + param_5 + uVar7 * 8) = dVar13;
      uVar11 = uVar11 + 1;
    } while ((uVar11 < uVar6) || (uVar11 = uVar7 + 1, uVar7 = uVar11, uVar11 != uVar6));
  }
  return;
}
