
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "ghidra_base.h"
#include "gesummv.h"
void kernel_gesummv(double param_1,double param_2,int param_3,long param_4,long param_5,long param_6
                   ,long param_7,long param_8)

{
  int local_50;
  int local_4c;
  
  for (local_4c = 0; local_4c < param_3; local_4c = local_4c + 1) {
    *(int8 *)(param_6 + (long)local_4c * 8) = 0;
    *(int8 *)(param_8 + (long)local_4c * 8) = 0;
    for (local_50 = 0; local_50 < param_3; local_50 = local_50 + 1) {
      *(double *)(param_6 + (long)local_4c * 8) =
           *(double *)(param_4 + (long)local_4c * 0x28a0 + (long)local_50 * 8) *
           *(double *)(param_7 + (long)local_50 * 8) + *(double *)(param_6 + (long)local_4c * 8);
      *(double *)(param_8 + (long)local_4c * 8) =
           *(double *)(param_5 + (long)local_4c * 0x28a0 + (long)local_50 * 8) *
           *(double *)(param_7 + (long)local_50 * 8) + *(double *)(param_8 + (long)local_4c * 8);
    }
    *(double *)(param_8 + (long)local_4c * 8) =
         param_1 * *(double *)(param_6 + (long)local_4c * 8) +
         param_2 * *(double *)(param_8 + (long)local_4c * 8);
  }
  return;
}
