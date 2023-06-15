
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "ghidra_base.h"
#include "syr2k.h"
void kernel_syr2k(double param_1,double param_2,uint param_3,uint param_4,long param_5,long param_6,
                 long param_7)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  if (0 < (int)param_3) {
    lVar3 = 1;
    uVar4 = 0;
    do {
      lVar1 = 0;
      do {
        lVar5 = uVar4 * 0x2580 + param_5;
        *(double *)(lVar5 + lVar1 * 8) = *(double *)(lVar5 + lVar1 * 8) * param_2;
        lVar1 = lVar1 + 1;
      } while (lVar1 != lVar3);
      if (0 < (int)param_4) {
        uVar2 = 0;
        do {
          lVar1 = 0;
          do {
            *(double *)(lVar5 + lVar1 * 8) =
                 *(double *)(param_6 + lVar1 * 8000 + uVar2 * 8) * param_1 *
                 *(double *)(param_7 + uVar4 * 8000 + uVar2 * 8) +
                 *(double *)(lVar1 * 8000 + param_7 + uVar2 * 8) * param_1 *
                 *(double *)(uVar4 * 8000 + param_6 + uVar2 * 8) + *(double *)(lVar5 + lVar1 * 8);
            lVar1 = lVar1 + 1;
          } while (lVar1 != lVar3);
          uVar2 = uVar2 + 1;
        } while (uVar2 != param_4);
      }
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 1;
    } while (uVar4 != param_3);
  }
  return;
}
