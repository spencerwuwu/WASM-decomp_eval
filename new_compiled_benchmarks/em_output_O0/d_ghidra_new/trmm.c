
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "ghidra_base.h"
#include "trmm.h"
void kernel_trmm(double param_1,int param_2,int param_3,long param_4,long param_5)

{
  long lVar1;
  int local_34;
  int local_30;
  int local_2c;
  
  for (local_2c = 0; local_2c < param_2; local_2c = local_2c + 1) {
    for (local_30 = 0; local_34 = local_2c, local_30 < param_3; local_30 = local_30 + 1) {
      while (local_34 = local_34 + 1, local_34 < param_2) {
        lVar1 = param_5 + (long)local_2c * 0x2580;
        *(double *)(lVar1 + (long)local_30 * 8) =
             *(double *)(param_4 + (long)local_34 * 8000 + (long)local_2c * 8) *
             *(double *)(param_5 + (long)local_34 * 0x2580 + (long)local_30 * 8) +
             *(double *)(lVar1 + (long)local_30 * 8);
      }
      *(double *)(param_5 + (long)local_2c * 0x2580 + (long)local_30 * 8) =
           param_1 * *(double *)(param_5 + (long)local_2c * 0x2580 + (long)local_30 * 8);
    }
  }
  return;
}
