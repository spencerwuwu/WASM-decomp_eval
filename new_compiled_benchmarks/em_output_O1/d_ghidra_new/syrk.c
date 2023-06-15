
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "ghidra_base.h"
#include "syrk.h"
void kernel_syrk(double param_1,double param_2,uint param_3,uint param_4,long param_5,long param_6)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  if (0 < (int)param_3) {
    lVar1 = 1;
    uVar2 = 0;
    do {
      lVar4 = 0;
      do {
        lVar3 = uVar2 * 0x2580 + param_5;
        *(double *)(lVar3 + lVar4 * 8) = *(double *)(lVar3 + lVar4 * 8) * param_2;
        lVar4 = lVar4 + 1;
      } while (lVar4 != lVar1);
      if (0 < (int)param_4) {
        uVar5 = 0;
        do {
          lVar4 = 0;
          do {
            *(double *)(lVar3 + lVar4 * 8) =
                 *(double *)(uVar2 * 8000 + param_6 + uVar5 * 8) * param_1 *
                 *(double *)(lVar4 * 8000 + param_6 + uVar5 * 8) + *(double *)(lVar3 + lVar4 * 8);
            lVar4 = lVar4 + 1;
          } while (lVar4 != lVar1);
          uVar5 = uVar5 + 1;
        } while (uVar5 != param_4);
      }
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 1;
    } while (uVar2 != param_3);
  }
  return;
}
