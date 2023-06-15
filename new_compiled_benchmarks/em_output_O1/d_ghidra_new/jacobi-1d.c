
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "ghidra_base.h"
#include "jacobi-1d.h"
void kernel_jacobi_1d(int param_1,int param_2,long param_3,long param_4)

{
  int iVar1;
  ulong uVar2;
  
  if (0 < param_1) {
    iVar1 = 0;
    do {
      uVar2 = 1;
      if (2 < param_2) {
        do {
          *(double *)(param_4 + uVar2 * 8) =
               (*(double *)(param_3 + -8 + uVar2 * 8) + *(double *)(param_3 + uVar2 * 8) +
               *(double *)(param_3 + 8 + uVar2 * 8)) * 0.33333;
          uVar2 = uVar2 + 1;
        } while (uVar2 != param_2 - 1);
      }
      uVar2 = 1;
      if (2 < param_2) {
        do {
          *(double *)(param_3 + uVar2 * 8) =
               (*(double *)(param_4 + -8 + uVar2 * 8) + *(double *)(param_4 + uVar2 * 8) +
               *(double *)(param_4 + 8 + uVar2 * 8)) * 0.33333;
          uVar2 = uVar2 + 1;
        } while (uVar2 != param_2 - 1);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 != param_1);
  }
  return;
}
