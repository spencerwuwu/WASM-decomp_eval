
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "ghidra_base.h"
#include "lu.h"
void kernel_lu(uint param_1,long param_2)

{
  double *pdVar1;
  ulong uVar2;
  ulong uVar3;
  double *pdVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  double dVar8;
  
  if (0 < (int)param_1) {
    uVar2 = 0;
    do {
      if (uVar2 != 0) {
        pdVar4 = (double *)(uVar2 * 16000 + param_2);
        uVar5 = 0;
        do {
          if (uVar5 == 0) {
            dVar8 = *pdVar4;
          }
          else {
            pdVar1 = pdVar4 + uVar5;
            dVar8 = pdVar4[uVar5];
            if (uVar5 == 1) {
              uVar7 = 0;
            }
            else {
              uVar7 = 0;
              uVar3 = 0;
              do {
                dVar8 = dVar8 - pdVar4[uVar7] * *(double *)(uVar7 * 16000 + param_2 + uVar5 * 8);
                *pdVar1 = dVar8;
                dVar8 = dVar8 - pdVar4[uVar7 | 1] *
                                *(double *)((uVar7 | 1) * 16000 + param_2 + uVar5 * 8);
                *pdVar1 = dVar8;
                uVar7 = uVar7 + 2;
                uVar3 = uVar3 + 2;
              } while (uVar3 != (uVar5 & 0x7ffffffffffffffe));
            }
            if ((uVar5 & 1) != 0) {
              dVar8 = dVar8 - pdVar4[uVar7] * *(double *)(uVar7 * 16000 + param_2 + uVar5 * 8);
              *pdVar1 = dVar8;
            }
          }
          pdVar4[uVar5] = dVar8 / *(double *)(uVar5 * 0x3e88 + param_2);
          uVar5 = uVar5 + 1;
        } while (uVar5 != uVar2);
      }
      uVar5 = uVar2;
      do {
        if (uVar2 != 0) {
          lVar6 = uVar2 * 16000 + param_2;
          pdVar4 = (double *)(lVar6 + uVar5 * 8);
          dVar8 = *(double *)(lVar6 + uVar5 * 8);
          uVar7 = 0;
          uVar3 = 0;
          if (uVar2 != 1) {
            do {
              dVar8 = dVar8 - *(double *)(lVar6 + uVar7 * 8) *
                              *(double *)(uVar7 * 16000 + param_2 + uVar5 * 8);
              *pdVar4 = dVar8;
              dVar8 = dVar8 - *(double *)(lVar6 + (uVar7 | 1) * 8) *
                              *(double *)((uVar7 | 1) * 16000 + param_2 + uVar5 * 8);
              *pdVar4 = dVar8;
              uVar7 = uVar7 + 2;
              uVar3 = uVar3 + 2;
            } while (uVar3 != (uVar2 & 0x7ffffffffffffffe));
          }
          if ((uVar2 & 1) != 0) {
            *pdVar4 = dVar8 - *(double *)(lVar6 + uVar7 * 8) *
                              *(double *)(uVar7 * 16000 + param_2 + uVar5 * 8);
          }
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 != param_1);
      uVar2 = uVar2 + 1;
    } while (uVar2 != param_1);
  }
  return;
}
