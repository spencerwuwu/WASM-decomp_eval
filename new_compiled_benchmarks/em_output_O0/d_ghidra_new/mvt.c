
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "ghidra_base.h"
#include "mvt.h"
void kernel_mvt(int param_1,long param_2,long param_3,long param_4,long param_5,long param_6)

{
  int local_40;
  int local_3c;
  
  for (local_3c = 0; local_3c < param_1; local_3c = local_3c + 1) {
    for (local_40 = 0; local_40 < param_1; local_40 = local_40 + 1) {
      *(double *)(param_2 + (long)local_3c * 8) =
           *(double *)(param_6 + (long)local_3c * 16000 + (long)local_40 * 8) *
           *(double *)(param_4 + (long)local_40 * 8) + *(double *)(param_2 + (long)local_3c * 8);
    }
  }
  for (local_3c = 0; local_3c < param_1; local_3c = local_3c + 1) {
    for (local_40 = 0; local_40 < param_1; local_40 = local_40 + 1) {
      *(double *)(param_3 + (long)local_3c * 8) =
           *(double *)(param_6 + (long)local_40 * 16000 + (long)local_3c * 8) *
           *(double *)(param_5 + (long)local_40 * 8) + *(double *)(param_3 + (long)local_3c * 8);
    }
  }
  return;
}
