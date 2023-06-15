
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "ghidra_base.h"
#include "gemm.h"
void kernel_gemm(double param_1,double param_2,uint param_3,uint param_4,uint param_5,long param_6,
                long param_7,long param_8)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  if (0 < (int)param_3) {
    uVar2 = 0;
    do {
      if (0 < (int)param_4) {
        uVar1 = 0;
        do {
          lVar3 = uVar2 * 0x2260 + param_6;
          *(double *)(lVar3 + uVar1 * 8) = *(double *)(lVar3 + uVar1 * 8) * param_2;
          uVar1 = uVar1 + 1;
        } while (uVar1 != param_4);
      }
      if (0 < (int)param_5) {
        uVar1 = 0;
        do {
          if (0 < (int)param_4) {
            uVar4 = 0;
            do {
              lVar3 = uVar2 * 0x2260 + param_6;
              *(double *)(lVar3 + uVar4 * 8) =
                   *(double *)(uVar2 * 0x2580 + param_7 + uVar1 * 8) * param_1 *
                   *(double *)(uVar1 * 0x2260 + param_8 + uVar4 * 8) +
                   *(double *)(lVar3 + uVar4 * 8);
              uVar4 = uVar4 + 1;
            } while (uVar4 != param_4);
          }
          uVar1 = uVar1 + 1;
        } while (uVar1 != param_5);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != param_3);
  }
  return;
}
