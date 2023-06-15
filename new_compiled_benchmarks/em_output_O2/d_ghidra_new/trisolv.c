
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "ghidra_base.h"
#include "trisolv.h"
void kernel_trisolv(uint param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  double dVar6;
  
  if (0 < (int)param_1) {
    uVar2 = 0;
    do {
      dVar6 = *(double *)(param_4 + uVar2 * 8);
      *(double *)(param_3 + uVar2 * 8) = dVar6;
      if (uVar2 != 0) {
        if (uVar2 == 1) {
          lVar3 = 0;
        }
        else {
          lVar3 = 0;
          uVar4 = 0;
          do {
            lVar1 = uVar2 * 16000 + param_2;
            dVar6 = dVar6 - *(double *)(lVar1 + lVar3 * 8) * *(double *)(param_3 + lVar3 * 8);
            *(double *)(param_3 + uVar2 * 8) = dVar6;
            uVar5 = lVar3 * 8 | 8;
            dVar6 = dVar6 - *(double *)(uVar5 + lVar1) * *(double *)(param_3 + uVar5);
            *(double *)(param_3 + uVar2 * 8) = dVar6;
            lVar3 = lVar3 + 2;
            uVar4 = uVar4 + 2;
          } while (uVar4 != (uVar2 & 0x7ffffffffffffffe));
        }
        if ((uVar2 & 1) != 0) {
          dVar6 = dVar6 - *(double *)(uVar2 * 16000 + param_2 + lVar3 * 8) *
                          *(double *)(param_3 + lVar3 * 8);
          *(double *)(param_3 + uVar2 * 8) = dVar6;
        }
      }
      *(double *)(param_3 + uVar2 * 8) = dVar6 / *(double *)(uVar2 * 0x3e88 + param_2);
      uVar2 = uVar2 + 1;
    } while (uVar2 != param_1);
  }
  return;
}
