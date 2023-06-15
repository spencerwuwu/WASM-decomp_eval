
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "ghidra_base.h"
#include "fdtd-2d.h"
void kernel_fdtd_2d(uint param_1,uint param_2,uint param_3,long param_4,long param_5,long param_6,
                   long param_7)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (0 < (int)param_1) {
    uVar3 = (ulong)param_3;
    uVar6 = 0;
    do {
      if (0 < (int)param_3) {
        uVar4 = 0;
        do {
          *(int8 *)(param_5 + uVar4 * 8) = *(int8 *)(param_7 + uVar6 * 8);
          uVar4 = uVar4 + 1;
        } while (uVar4 != uVar3);
      }
      uVar4 = 1;
      if (1 < (int)param_2) {
        do {
          if (0 < (int)param_3) {
            uVar5 = 0;
            do {
              lVar2 = param_5 + uVar4 * 0x2580;
              *(double *)(lVar2 + uVar5 * 8) =
                   (*(double *)(uVar4 * 0x2580 + param_6 + uVar5 * 8) -
                   *(double *)((uVar4 - 1) * 0x2580 + param_6 + uVar5 * 8)) * -0.5 +
                   *(double *)(lVar2 + uVar5 * 8);
              uVar5 = uVar5 + 1;
            } while (uVar5 != uVar3);
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 != param_2);
      }
      if (0 < (int)param_2) {
        uVar4 = 0;
        do {
          uVar5 = 1;
          if (1 < (int)param_3) {
            do {
              lVar2 = param_4 + uVar4 * 0x2580;
              lVar1 = uVar4 * 0x2580 + param_6;
              *(double *)(lVar2 + uVar5 * 8) =
                   (*(double *)(lVar1 + uVar5 * 8) - *(double *)(lVar1 + -8 + uVar5 * 8)) * -0.5 +
                   *(double *)(lVar2 + uVar5 * 8);
              uVar5 = uVar5 + 1;
            } while (uVar5 != uVar3);
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 != param_2);
      }
      if (1 < (int)param_2) {
        uVar4 = 0;
        do {
          if (1 < (int)param_3) {
            uVar5 = 0;
            do {
              lVar2 = uVar4 * 0x2580;
              *(double *)(param_6 + lVar2 + uVar5 * 8) =
                   (((*(double *)(param_4 + lVar2 + 8 + uVar5 * 8) -
                     *(double *)(param_4 + lVar2 + uVar5 * 8)) +
                    *(double *)((uVar4 + 1) * 0x2580 + param_5 + uVar5 * 8)) -
                   *(double *)(lVar2 + param_5 + uVar5 * 8)) * -0.7 +
                   *(double *)(param_6 + lVar2 + uVar5 * 8);
              uVar5 = uVar5 + 1;
            } while (uVar5 != param_3 - 1);
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 != param_2 - 1);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != param_1);
  }
  return;
}
