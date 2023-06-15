
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <polybench.h>
#include "ghidra_base.h"
#include "sha_driver.h"
void local_memset(int *param_1,int param_2,int param_3,int param_4)

{
  int local_2c;
  int *local_28;
  int local_1c;
  
  local_2c = param_3 / 4;
  local_28 = param_1;
  local_1c = param_4;
  while (0 < local_1c) {
    local_28 = local_28 + 1;
    local_1c = local_1c + -1;
  }
  while (0 < local_2c) {
    *local_28 = param_2;
    local_2c = local_2c + -1;
    local_28 = local_28 + 1;
  }
  return;
}
