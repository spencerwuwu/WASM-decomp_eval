
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "ghidra_base.h"
#include "syrk.h"
void kernel_syrk(double param_1,double param_2,int param_3,int param_4,long param_5,long param_6)

{
  long lVar1;
  int local_3c;
  int local_38;
  int local_34;
  
  for (local_34 = 0; local_34 < param_3; local_34 = local_34 + 1) {
    for (local_38 = 0; local_38 <= local_34; local_38 = local_38 + 1) {
      lVar1 = param_5 + (long)local_34 * 0x2580;
      *(double *)(lVar1 + (long)local_38 * 8) = param_2 * *(double *)(lVar1 + (long)local_38 * 8);
    }
    for (local_3c = 0; local_3c < param_4; local_3c = local_3c + 1) {
      for (local_38 = 0; local_38 <= local_34; local_38 = local_38 + 1) {
        lVar1 = param_5 + (long)local_34 * 0x2580;
        *(double *)(lVar1 + (long)local_38 * 8) =
             param_1 * *(double *)(param_6 + (long)local_34 * 8000 + (long)local_3c * 8) *
             *(double *)(param_6 + (long)local_38 * 8000 + (long)local_3c * 8) +
             *(double *)(lVar1 + (long)local_38 * 8);
      }
    }
  }
  return;
}
