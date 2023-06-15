
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "ghidra_base.h"
#include "mvt.h"
void kernel_mvt(uint param_1,long param_2,long param_3,long param_4,long param_5,long param_6)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  double dVar7;
  
  if (0 < (int)param_1) {
    uVar1 = (ulong)param_1;
    uVar2 = 0;
    do {
      dVar7 = *(double *)(param_2 + uVar2 * 8);
      lVar5 = 0;
      uVar6 = 0;
      if (uVar1 != 1) {
        do {
          lVar3 = uVar2 * 16000 + param_6;
          dVar7 = *(double *)(lVar3 + lVar5 * 8) * *(double *)(param_4 + lVar5 * 8) + dVar7;
          *(double *)(param_2 + uVar2 * 8) = dVar7;
          uVar4 = lVar5 * 8 | 8;
          dVar7 = *(double *)(uVar4 + lVar3) * *(double *)(param_4 + uVar4) + dVar7;
          *(double *)(param_2 + uVar2 * 8) = dVar7;
          lVar5 = lVar5 + 2;
          uVar6 = uVar6 + 2;
        } while (uVar6 != (param_1 & 0xfffffffe));
      }
      if ((param_1 & 1) != 0) {
        *(double *)(param_2 + uVar2 * 8) =
             *(double *)(uVar2 * 16000 + param_6 + lVar5 * 8) * *(double *)(param_4 + lVar5 * 8) +
             dVar7;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != uVar1);
    if (0 < (int)param_1) {
      uVar2 = 0;
      do {
        dVar7 = *(double *)(param_3 + uVar2 * 8);
        uVar6 = 0;
        uVar4 = 0;
        if (uVar1 != 1) {
          do {
            dVar7 = *(double *)(uVar6 * 16000 + param_6 + uVar2 * 8) *
                    *(double *)(param_5 + uVar6 * 8) + dVar7;
            *(double *)(param_3 + uVar2 * 8) = dVar7;
            dVar7 = *(double *)((uVar6 | 1) * 16000 + param_6 + uVar2 * 8) *
                    *(double *)(param_5 + (uVar6 | 1) * 8) + dVar7;
            *(double *)(param_3 + uVar2 * 8) = dVar7;
            uVar6 = uVar6 + 2;
            uVar4 = uVar4 + 2;
          } while (uVar4 != (param_1 & 0xfffffffe));
        }
        if ((param_1 & 1) != 0) {
          *(double *)(param_3 + uVar2 * 8) =
               *(double *)(uVar6 * 16000 + param_6 + uVar2 * 8) * *(double *)(param_5 + uVar6 * 8) +
               dVar7;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 != uVar1);
    }
  }
  return;
}
