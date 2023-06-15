
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "ghidra_base.h"
#include "symm.h"
void kernel_symm(double param_1,double param_2,int param_3,int param_4,long param_5,long param_6,
                long param_7)

{
  long lVar1;
  double local_50;
  int local_44;
  int local_40;
  int local_3c;
  
  for (local_3c = 0; local_3c < param_3; local_3c = local_3c + 1) {
    for (local_40 = 0; local_40 < param_4; local_40 = local_40 + 1) {
      local_50 = 0.0;
      for (local_44 = 0; local_44 < local_3c; local_44 = local_44 + 1) {
        lVar1 = param_5 + (long)local_44 * 0x2580;
        *(double *)(lVar1 + (long)local_40 * 8) =
             param_1 * *(double *)(param_7 + (long)local_3c * 0x2580 + (long)local_40 * 8) *
             *(double *)(param_6 + (long)local_3c * 8000 + (long)local_44 * 8) +
             *(double *)(lVar1 + (long)local_40 * 8);
        local_50 = *(double *)(param_7 + (long)local_44 * 0x2580 + (long)local_40 * 8) *
                   *(double *)(param_6 + (long)local_3c * 8000 + (long)local_44 * 8) + local_50;
      }
      *(double *)(param_5 + (long)local_3c * 0x2580 + (long)local_40 * 8) =
           param_1 * local_50 +
           param_2 * *(double *)(param_5 + (long)local_3c * 0x2580 + (long)local_40 * 8) +
           param_1 * *(double *)(param_7 + (long)local_3c * 0x2580 + (long)local_40 * 8) *
           *(double *)(param_6 + (long)local_3c * 8000 + (long)local_3c * 8);
    }
  }
  return;
}
