
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "ghidra_base.h"
#include "cholesky.h"
void kernel_cholesky(uint param_1,long param_2)

{
  double dVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  double dVar6;
  
  if (0 < (int)param_1) {
    uVar5 = 0;
    do {
      if (uVar5 != 0) {
        uVar2 = 0;
        do {
          if (uVar2 != 0) {
            lVar3 = uVar5 * 16000 + param_2;
            dVar6 = *(double *)(lVar3 + uVar2 * 8);
            uVar4 = 0;
            do {
              dVar6 = dVar6 - *(double *)(lVar3 + uVar4 * 8) *
                              *(double *)(uVar2 * 16000 + param_2 + uVar4 * 8);
              *(double *)(lVar3 + uVar2 * 8) = dVar6;
              uVar4 = uVar4 + 1;
            } while (uVar4 != uVar2);
          }
          lVar3 = uVar5 * 16000 + param_2;
          *(double *)(lVar3 + uVar2 * 8) =
               *(double *)(lVar3 + uVar2 * 8) / *(double *)(uVar2 * 0x3e88 + param_2);
          uVar2 = uVar2 + 1;
        } while (uVar2 != uVar5);
        dVar6 = *(double *)(lVar3 + uVar5 * 8);
        uVar2 = 0;
        do {
          dVar1 = *(double *)(lVar3 + uVar2 * 8);
          dVar6 = dVar6 - dVar1 * dVar1;
          *(double *)(lVar3 + uVar5 * 8) = dVar6;
          uVar2 = uVar2 + 1;
        } while (uVar2 != uVar5);
      }
      lVar3 = uVar5 * 16000 + param_2;
      dVar6 = *(double *)(lVar3 + uVar5 * 8);
      if (dVar6 < 0.0) {
        dVar6 = sqrt(dVar6);
      }
      else {
        dVar6 = SQRT(dVar6);
      }
      *(double *)(lVar3 + uVar5 * 8) = dVar6;
      uVar5 = uVar5 + 1;
    } while (uVar5 != param_1);
  }
  return;
}
