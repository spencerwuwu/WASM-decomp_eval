
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "ghidra_base.h"
#include "doitgen.h"
void kernel_doitgen(int param_1,int param_2,int param_3,long param_4,long param_5,long param_6)

{
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  
  for (local_34 = 0; local_34 < param_1; local_34 = local_34 + 1) {
    for (local_38 = 0; local_38 < param_2; local_38 = local_38 + 1) {
      for (local_3c = 0; local_3c < param_3; local_3c = local_3c + 1) {
        *(int8 *)(param_6 + (long)local_3c * 8) = 0;
        for (local_40 = 0; local_40 < param_3; local_40 = local_40 + 1) {
          *(double *)(param_6 + (long)local_3c * 8) =
               *(double *)
                (param_4 + (long)local_34 * 0x2bc00 + (long)local_38 * 0x500 + (long)local_40 * 8) *
               *(double *)(param_5 + (long)local_40 * 0x500 + (long)local_3c * 8) +
               *(double *)(param_6 + (long)local_3c * 8);
        }
      }
      for (local_3c = 0; local_3c < param_3; local_3c = local_3c + 1) {
        *(int8 *)
         (param_4 + (long)local_34 * 0x2bc00 + (long)local_38 * 0x500 + (long)local_3c * 8) =
             *(int8 *)(param_6 + (long)local_3c * 8);
      }
    }
  }
  return;
}
