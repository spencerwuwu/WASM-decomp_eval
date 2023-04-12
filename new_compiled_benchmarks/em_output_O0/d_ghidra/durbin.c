#include "durbin.h"



undefined8 submain(int param_1,char **param_2)

{
  int iVar1;
  void *__ptr;
  void *__ptr_00;
  
  __ptr = (void *)polybench_alloc_data(2000,8);
  __ptr_00 = (void *)polybench_alloc_data(2000,8);
  init_array(2000,__ptr);
  kernel_durbin(2000,__ptr,__ptr_00);
  if (0x2a < param_1) {
    iVar1 = strcmp(*param_2,"");
    if (iVar1 == 0) {
      print_array(2000,__ptr_00);
    }
  }
  free(__ptr);
  free(__ptr_00);
  return 0;
}



void init_array(int param_1,long param_2)

{
  int local_1c;
  
  for (local_1c = 0; local_1c < param_1; local_1c = local_1c + 1) {
    *(double *)(param_2 + (long)local_1c * 8) = (double)((param_1 + 1) - local_1c);
  }
  return;
}



void kernel_durbin(int param_1,ulong *param_2,ulong *param_3)

{
  int local_3ec8;
  int local_3ec4;
  double local_3ec0;
  double local_3eb8;
  double local_3eb0;
  double adStack_3ea8 [2004];
  
  *param_3 = *param_2 ^ 0x8000000000000000;
  local_3eb8 = 1.0;
  local_3eb0 = (double)(*param_2 ^ 0x8000000000000000);
  for (local_3ec8 = 1; local_3ec8 < param_1; local_3ec8 = local_3ec8 + 1) {
    local_3eb8 = ((double)((ulong)local_3eb0 ^ 0x8000000000000000) * local_3eb0 + 1.0) * local_3eb8;
    local_3ec0 = 0.0;
    for (local_3ec4 = 0; local_3ec4 < local_3ec8; local_3ec4 = local_3ec4 + 1) {
      local_3ec0 = (double)param_2[(local_3ec8 - local_3ec4) + -1] * (double)param_3[local_3ec4] +
                   local_3ec0;
    }
    local_3eb0 = (double)((ulong)((double)param_2[local_3ec8] + local_3ec0) ^ 0x8000000000000000) /
                 local_3eb8;
    for (local_3ec4 = 0; local_3ec4 < local_3ec8; local_3ec4 = local_3ec4 + 1) {
      adStack_3ea8[local_3ec4] =
           local_3eb0 * (double)param_3[(local_3ec8 - local_3ec4) + -1] +
           (double)param_3[local_3ec4];
    }
    for (local_3ec4 = 0; local_3ec4 < local_3ec8; local_3ec4 = local_3ec4 + 1) {
      param_3[local_3ec4] = (ulong)adStack_3ea8[local_3ec4];
    }
    param_3[local_3ec8] = (ulong)local_3eb0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void print_array(void)

{
                    // WARNING: Subroutine does not return
  fprintf(_DAT_e1358d48388b48,"==BEGIN DUMP_ARRAYS==\n");
}


