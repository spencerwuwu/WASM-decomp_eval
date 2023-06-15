
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "ghidra_base.h"
#include "trmm.h"
void kernel_trmm(double param_1,uint param_2,uint param_3,long param_4,long param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  double dVar6;
  
  if (0 < (int)param_2) {
    uVar2 = 1;
    uVar3 = 0;
    do {
      if (0 < (int)param_3) {
        uVar1 = 0;
        do {
          if ((long)(uVar3 + 1) < (long)(int)param_2) {
            lVar4 = uVar3 * 0x2580 + param_5;
            dVar6 = *(double *)(lVar4 + uVar1 * 8);
            uVar5 = uVar2;
            do {
              dVar6 = dVar6 + *(double *)(uVar5 * 8000 + param_4 + uVar3 * 8) *
                              *(double *)(uVar5 * 0x2580 + param_5 + uVar1 * 8);
              *(double *)(lVar4 + uVar1 * 8) = dVar6;
              uVar5 = uVar5 + 1;
            } while (uVar5 != param_2);
          }
          lVar4 = uVar3 * 0x2580 + param_5;
          *(double *)(lVar4 + uVar1 * 8) = *(double *)(lVar4 + uVar1 * 8) * param_1;
          uVar1 = uVar1 + 1;
        } while (uVar1 != param_3);
      }
      uVar3 = uVar3 + 1;
      uVar2 = uVar2 + 1;
    } while (uVar3 != param_2);
  }
  return;
}
