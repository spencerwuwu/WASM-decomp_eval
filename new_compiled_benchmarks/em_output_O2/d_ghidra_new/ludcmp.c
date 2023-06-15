
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "ghidra_base.h"
#include "ludcmp.h"
void kernel_ludcmp(uint param_1,long param_2,long param_3,long param_4,long param_5)

{
  int bVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  double dVar10;
  
  if (0 < (int)param_1) {
    uVar2 = (ulong)param_1;
    uVar5 = 0;
    do {
      if (uVar5 != 0) {
        uVar6 = 0;
        do {
          lVar4 = uVar5 * 16000 + param_2;
          dVar10 = *(double *)(lVar4 + uVar6 * 8);
          if (uVar6 != 0) {
            if (uVar6 == 1) {
              uVar8 = 0;
            }
            else {
              uVar8 = 0;
              uVar7 = 0;
              do {
                dVar10 = (dVar10 - *(double *)(lVar4 + uVar8 * 8) *
                                   *(double *)(uVar8 * 16000 + param_2 + uVar6 * 8)) -
                         *(double *)(lVar4 + (uVar8 | 1) * 8) *
                         *(double *)((uVar8 | 1) * 16000 + param_2 + uVar6 * 8);
                uVar8 = uVar8 + 2;
                uVar7 = uVar7 + 2;
              } while (uVar7 != (uVar6 & 0x7ffffffffffffffe));
            }
            if ((uVar6 & 1) != 0) {
              dVar10 = dVar10 - *(double *)(lVar4 + uVar8 * 8) *
                                *(double *)(uVar8 * 16000 + param_2 + uVar6 * 8);
            }
          }
          *(double *)(lVar4 + uVar6 * 8) = dVar10 / *(double *)(uVar6 * 0x3e88 + param_2);
          uVar6 = uVar6 + 1;
        } while (uVar6 != uVar5);
      }
      uVar6 = uVar5;
      do {
        lVar4 = uVar5 * 16000 + param_2;
        dVar10 = *(double *)(lVar4 + uVar6 * 8);
        if (uVar5 != 0) {
          uVar8 = 0;
          uVar7 = 0;
          if (uVar5 != 1) {
            do {
              dVar10 = (dVar10 - *(double *)(lVar4 + uVar8 * 8) *
                                 *(double *)(uVar8 * 16000 + param_2 + uVar6 * 8)) -
                       *(double *)(lVar4 + (uVar8 | 1) * 8) *
                       *(double *)((uVar8 | 1) * 16000 + param_2 + uVar6 * 8);
              uVar8 = uVar8 + 2;
              uVar7 = uVar7 + 2;
            } while (uVar7 != (uVar5 & 0x7ffffffffffffffe));
          }
          if ((uVar5 & 1) != 0) {
            dVar10 = dVar10 - *(double *)(lVar4 + uVar8 * 8) *
                              *(double *)(uVar8 * 16000 + param_2 + uVar6 * 8);
          }
        }
        *(double *)(lVar4 + uVar6 * 8) = dVar10;
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar2);
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar2);
    if (0 < (int)param_1) {
      uVar5 = 0;
      do {
        dVar10 = *(double *)(param_3 + uVar5 * 8);
        if (uVar5 != 0) {
          if (uVar5 == 1) {
            lVar4 = 0;
          }
          else {
            lVar4 = 0;
            uVar6 = 0;
            do {
              lVar9 = uVar5 * 16000 + param_2;
              uVar7 = lVar4 * 8 | 8;
              dVar10 = (dVar10 - *(double *)(lVar9 + lVar4 * 8) * *(double *)(param_5 + lVar4 * 8))
                       - *(double *)(uVar7 + lVar9) * *(double *)(param_5 + uVar7);
              lVar4 = lVar4 + 2;
              uVar6 = uVar6 + 2;
            } while (uVar6 != (uVar5 & 0x7ffffffffffffffe));
          }
          if ((uVar5 & 1) != 0) {
            dVar10 = dVar10 - *(double *)(uVar5 * 16000 + param_2 + lVar4 * 8) *
                              *(double *)(param_5 + lVar4 * 8);
          }
        }
        *(double *)(param_5 + uVar5 * 8) = dVar10;
        uVar5 = uVar5 + 1;
      } while (uVar5 != uVar2);
      if (0 < (int)param_1) {
        uVar3 = 0;
        uVar5 = uVar2;
        uVar6 = uVar2;
        do {
          uVar7 = uVar6 - 1;
          uVar8 = uVar7 & 0xffffffff;
          dVar10 = *(double *)(param_5 + uVar8 * 8);
          if ((long)uVar5 < (long)uVar2) {
            if ((uVar3 & 1) != 0) {
              dVar10 = dVar10 - *(double *)(uVar8 * 16000 + param_2 + uVar6 * 8) *
                                *(double *)(param_4 + uVar6 * 8);
              uVar6 = uVar6 + 1;
            }
            if (uVar3 != 1) {
              do {
                lVar4 = uVar8 * 16000 + param_2;
                dVar10 = (dVar10 - *(double *)(lVar4 + uVar6 * 8) * *(double *)(param_4 + uVar6 * 8)
                         ) - *(double *)(lVar4 + 8 + uVar6 * 8) *
                             *(double *)(param_4 + 8 + uVar6 * 8);
                uVar6 = uVar6 + 2;
              } while ((uint)uVar6 != param_1);
            }
          }
          *(double *)(param_4 + uVar8 * 8) = dVar10 / *(double *)(uVar8 * 0x3e88 + param_2);
          uVar3 = uVar3 + 1;
          bVar1 = 1 < (long)uVar5;
          uVar5 = uVar5 - 1;
          uVar6 = uVar7;
        } while (bVar1);
      }
    }
  }
  return;
}
