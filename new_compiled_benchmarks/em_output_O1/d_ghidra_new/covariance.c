
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "ghidra_base.h"
#include "covariance.h"
void kernel_covariance(double param_1,uint param_2,uint param_3,long param_4,long param_5,
                      long param_6)

{
  double *pdVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  double dVar8;
  
  uVar2 = (ulong)param_2;
  uVar5 = (ulong)param_3;
  if (0 < (int)param_2) {
    uVar6 = 0;
    do {
      *(int8 *)(param_6 + uVar6 * 8) = 0;
      if (0 < (int)param_3) {
        dVar8 = *(double *)(param_6 + uVar6 * 8);
        uVar7 = 0;
        do {
          dVar8 = dVar8 + *(double *)(uVar7 * 0x2580 + param_4 + uVar6 * 8);
          *(double *)(param_6 + uVar6 * 8) = dVar8;
          uVar7 = uVar7 + 1;
        } while (uVar7 != uVar5);
      }
      *(double *)(param_6 + uVar6 * 8) = *(double *)(param_6 + uVar6 * 8) / param_1;
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar2);
  }
  if (0 < (int)param_3) {
    uVar6 = 0;
    do {
      if (0 < (int)param_2) {
        uVar7 = 0;
        do {
          lVar3 = uVar6 * 0x2580 + param_4;
          *(double *)(lVar3 + uVar7 * 8) =
               *(double *)(lVar3 + uVar7 * 8) - *(double *)(param_6 + uVar7 * 8);
          uVar7 = uVar7 + 1;
        } while (uVar7 != uVar2);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar5);
  }
  if (0 < (int)param_2) {
    uVar7 = 0;
    uVar6 = uVar7;
    do {
      lVar3 = uVar6 * 0x2580 + param_5;
      pdVar1 = (double *)(lVar3 + uVar7 * 8);
      *(int8 *)(lVar3 + uVar7 * 8) = 0;
      if (0 < (int)param_3) {
        dVar8 = *pdVar1;
        uVar4 = 0;
        do {
          lVar3 = uVar4 * 0x2580 + param_4;
          dVar8 = dVar8 + *(double *)(lVar3 + uVar6 * 8) * *(double *)(lVar3 + uVar7 * 8);
          *pdVar1 = dVar8;
          uVar4 = uVar4 + 1;
        } while (uVar4 != uVar5);
      }
      dVar8 = *pdVar1 / (param_1 + -1.0);
      *pdVar1 = dVar8;
      *(double *)(uVar7 * 0x2580 + param_5 + uVar6 * 8) = dVar8;
      uVar7 = uVar7 + 1;
    } while (((long)uVar7 < (long)(int)param_2) ||
            (uVar7 = uVar6 + 1, uVar6 = uVar7, uVar7 != uVar2));
  }
  return;
}
