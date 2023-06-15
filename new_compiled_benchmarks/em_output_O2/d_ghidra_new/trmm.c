
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
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  double dVar8;
  
  if (0 < (int)param_2) {
    uVar2 = (ulong)param_2;
    uVar4 = 1;
    uVar5 = 0;
    do {
      uVar1 = uVar5 + 1;
      if (0 < (int)param_3) {
        uVar6 = 0;
        do {
          lVar3 = uVar5 * 0x2580 + param_5;
          dVar8 = *(double *)(lVar3 + uVar6 * 8);
          if (uVar1 < uVar2) {
            uVar7 = uVar4;
            do {
              dVar8 = dVar8 + *(double *)(uVar7 * 8000 + param_4 + uVar5 * 8) *
                              *(double *)(uVar7 * 0x2580 + param_5 + uVar6 * 8);
              *(double *)(lVar3 + uVar6 * 8) = dVar8;
              uVar7 = uVar7 + 1;
            } while (uVar7 != uVar2);
          }
          *(double *)(lVar3 + uVar6 * 8) = dVar8 * param_1;
          uVar6 = uVar6 + 1;
        } while (uVar6 != param_3);
      }
      uVar4 = uVar4 + 1;
      uVar5 = uVar1;
    } while (uVar1 != uVar2);
  }
  return;
}
