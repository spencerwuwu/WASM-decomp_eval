
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include <polybench.h>
#include "ghidra_base.h"
#include "cholesky.h"
void kernel_cholesky(int param_1,long param_2)

{
  long lVar1;
  double dVar2;
  int local_24;
  int local_20;
  int local_1c;
  
  for (local_1c = 0; local_1c < param_1; local_1c = local_1c + 1) {
    for (local_20 = 0; local_20 < local_1c; local_20 = local_20 + 1) {
      for (local_24 = 0; local_24 < local_20; local_24 = local_24 + 1) {
        lVar1 = param_2 + (long)local_1c * 16000;
        *(double *)(lVar1 + (long)local_20 * 8) =
             (double)(*(ulong *)(param_2 + (long)local_1c * 16000 + (long)local_24 * 8) ^
                     0x8000000000000000) *
             *(double *)(param_2 + (long)local_20 * 16000 + (long)local_24 * 8) +
             *(double *)(lVar1 + (long)local_20 * 8);
      }
      lVar1 = param_2 + (long)local_1c * 16000;
      *(double *)(lVar1 + (long)local_20 * 8) =
           *(double *)(lVar1 + (long)local_20 * 8) /
           *(double *)(param_2 + (long)local_20 * 16000 + (long)local_20 * 8);
    }
    for (local_24 = 0; local_24 < local_1c; local_24 = local_24 + 1) {
      lVar1 = param_2 + (long)local_1c * 16000;
      *(double *)(lVar1 + (long)local_1c * 8) =
           (double)(*(ulong *)(param_2 + (long)local_1c * 16000 + (long)local_24 * 8) ^
                   0x8000000000000000) *
           *(double *)(param_2 + (long)local_1c * 16000 + (long)local_24 * 8) +
           *(double *)(lVar1 + (long)local_1c * 8);
    }
    dVar2 = sqrt(*(double *)(param_2 + (long)local_1c * 16000 + (long)local_1c * 8));
    *(double *)(param_2 + (long)local_1c * 16000 + (long)local_1c * 8) = dVar2;
  }
  return;
}
