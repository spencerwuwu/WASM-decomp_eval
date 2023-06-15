
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "ghidra_base.h"
#include "gesummv.h"
void kernel_gesummv(double param_1,double param_2,uint param_3,long param_4,long param_5,
                   long param_6,long param_7,long param_8)

{
  ulong uVar1;
  ulong uVar2;
  double dVar3;
  
  if (0 < (int)param_3) {
    uVar1 = 0;
    do {
      *(int8 *)(param_6 + uVar1 * 8) = 0;
      *(int8 *)(param_8 + uVar1 * 8) = 0;
      uVar2 = 0;
      do {
        *(double *)(param_6 + uVar1 * 8) =
             *(double *)(param_4 + uVar1 * 0x28a0 + uVar2 * 8) * *(double *)(param_7 + uVar2 * 8) +
             *(double *)(param_6 + uVar1 * 8);
        dVar3 = *(double *)(uVar1 * 0x28a0 + param_5 + uVar2 * 8) * *(double *)(param_7 + uVar2 * 8)
                + *(double *)(param_8 + uVar1 * 8);
        *(double *)(param_8 + uVar1 * 8) = dVar3;
        uVar2 = uVar2 + 1;
      } while (uVar2 != param_3);
      *(double *)(param_8 + uVar1 * 8) =
           *(double *)(param_6 + uVar1 * 8) * param_1 + dVar3 * param_2;
      uVar1 = uVar1 + 1;
    } while (uVar1 != param_3);
  }
  return;
}
