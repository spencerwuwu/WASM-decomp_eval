
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "ghidra_base.h"
#include "symm.h"
void kernel_symm(double param_1,double param_2,uint param_3,uint param_4,long param_5,long param_6,
                long param_7)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  double dVar6;
  
  if (0 < (int)param_3) {
    uVar3 = 0;
    do {
      if (0 < (int)param_4) {
        lVar4 = uVar3 * 8000 + param_6;
        uVar2 = 0;
        do {
          if (uVar3 == 0) {
            dVar6 = 0.0;
          }
          else {
            dVar6 = 0.0;
            uVar5 = 0;
            do {
              lVar1 = param_5 + uVar5 * 0x2580;
              *(double *)(lVar1 + uVar2 * 8) =
                   *(double *)(uVar3 * 0x2580 + param_7 + uVar2 * 8) * param_1 *
                   *(double *)(lVar4 + uVar5 * 8) + *(double *)(lVar1 + uVar2 * 8);
              dVar6 = dVar6 + *(double *)(uVar5 * 0x2580 + param_7 + uVar2 * 8) *
                              *(double *)(lVar4 + uVar5 * 8);
              uVar5 = uVar5 + 1;
            } while (uVar5 != uVar3);
          }
          lVar1 = param_5 + uVar3 * 0x2580;
          *(double *)(lVar1 + uVar2 * 8) =
               dVar6 * param_1 +
               *(double *)(lVar1 + uVar2 * 8) * param_2 +
               *(double *)(uVar3 * 0x2580 + param_7 + uVar2 * 8) * param_1 *
               *(double *)(lVar4 + uVar3 * 8);
          uVar2 = uVar2 + 1;
        } while (uVar2 != param_4);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 != param_3);
  }
  return;
}
