
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
  ulong uVar1;
  ulong uVar2;
  double dVar3;
  
  if (0 < (int)param_1) {
    uVar1 = 0;
    do {
      *(int8 *)(param_3 + uVar1 * 8) = *(int8 *)(param_4 + uVar1 * 8);
      if (uVar1 != 0) {
        dVar3 = *(double *)(param_3 + uVar1 * 8);
        uVar2 = 0;
        do {
          dVar3 = dVar3 - *(double *)(uVar1 * 16000 + param_2 + uVar2 * 8) *
                          *(double *)(param_3 + uVar2 * 8);
          *(double *)(param_3 + uVar1 * 8) = dVar3;
          uVar2 = uVar2 + 1;
        } while (uVar2 != uVar1);
      }
      *(double *)(param_3 + uVar1 * 8) =
           *(double *)(param_3 + uVar1 * 8) / *(double *)(uVar1 * 0x3e88 + param_2);
      uVar1 = uVar1 + 1;
    } while (uVar1 != param_1);
  }
  return;
}
