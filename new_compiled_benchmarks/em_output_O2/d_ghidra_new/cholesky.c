
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "ghidra_base.h"
#include "cholesky.h"
void kernel_cholesky(uint param_1,double *param_2)

{
  double *pdVar1;
  double dVar2;
  double *pdVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  double dVar9;
  
  if (0 < (int)param_1) {
    uVar8 = 0;
    do {
      if (uVar8 == 0) {
LAB_00100160:
        dVar9 = *param_2;
      }
      else {
        pdVar3 = param_2 + uVar8 * 2000;
        uVar4 = 0;
        do {
          if (uVar4 == 0) {
            dVar9 = *pdVar3;
          }
          else {
            pdVar1 = pdVar3 + uVar4;
            dVar9 = pdVar3[uVar4];
            if (uVar4 == 1) {
              lVar5 = 0;
            }
            else {
              lVar5 = 0;
              uVar6 = 0;
              do {
                dVar9 = dVar9 - pdVar3[lVar5] * param_2[uVar4 * 2000 + lVar5];
                *pdVar1 = dVar9;
                uVar7 = lVar5 * 8 | 8;
                dVar9 = dVar9 - *(double *)(uVar7 + (long)pdVar3) *
                                *(double *)((long)param_2 + uVar7 + uVar4 * 16000);
                *pdVar1 = dVar9;
                lVar5 = lVar5 + 2;
                uVar6 = uVar6 + 2;
              } while (uVar6 != (uVar4 & 0x7ffffffffffffffe));
            }
            if ((uVar4 & 1) != 0) {
              dVar9 = dVar9 - pdVar3[lVar5] * param_2[uVar4 * 2000 + lVar5];
              *pdVar1 = dVar9;
            }
          }
          pdVar3[uVar4] = dVar9 / param_2[uVar4 * 0x7d1];
          uVar4 = uVar4 + 1;
        } while (uVar4 != uVar8);
        if (uVar8 == 0) goto LAB_00100160;
        pdVar1 = pdVar3 + uVar8;
        dVar9 = pdVar3[uVar8];
        if (uVar8 == 1) {
          lVar5 = 0;
        }
        else {
          lVar5 = 0;
          uVar4 = 0;
          do {
            dVar9 = dVar9 - pdVar3[lVar5] * pdVar3[lVar5];
            *pdVar1 = dVar9;
            dVar2 = *(double *)((lVar5 * 8 | 8U) + (long)pdVar3);
            dVar9 = dVar9 - dVar2 * dVar2;
            *pdVar1 = dVar9;
            lVar5 = lVar5 + 2;
            uVar4 = uVar4 + 2;
          } while (uVar4 != (uVar8 & 0x7ffffffffffffffe));
        }
        if ((uVar8 & 1) != 0) {
          dVar9 = dVar9 - pdVar3[lVar5] * pdVar3[lVar5];
          *pdVar1 = dVar9;
        }
      }
      if (dVar9 < 0.0) {
        dVar9 = sqrt(dVar9);
      }
      else {
        dVar9 = SQRT(dVar9);
      }
      param_2[uVar8 * 0x7d1] = dVar9;
      uVar8 = uVar8 + 1;
    } while (uVar8 != param_1);
  }
  return;
}
