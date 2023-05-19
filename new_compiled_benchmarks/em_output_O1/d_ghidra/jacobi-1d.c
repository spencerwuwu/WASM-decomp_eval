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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 submain(int param_1,char **param_2)

{
  FILE *__stream;
  int iVar1;
  void *__ptr;
  void *__ptr_00;
  long lVar2;
  long lVar3;
  
  __ptr = (void *)polybench_alloc_data(2000,8);
  __ptr_00 = (void *)polybench_alloc_data(2000,8);
  iVar1 = 0;
  lVar2 = 0;
  do {
    *(double *)((long)__ptr + lVar2 * 8) = ((double)(int)lVar2 + 2.0) / 2000.0;
    *(double *)((long)__ptr_00 + lVar2 * 8) = ((double)(int)lVar2 + 3.0) / 2000.0;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 2000);
  do {
    lVar3 = 1;
    lVar2 = 1;
    do {
      *(double *)((long)__ptr_00 + lVar2 * 8) =
           (*(double *)((long)__ptr + lVar2 * 8 + -8) + *(double *)((long)__ptr + lVar2 * 8) +
           *(double *)((long)__ptr + lVar2 * 8 + 8)) * 0.33333;
      lVar2 = lVar2 + 1;
    } while (lVar2 != 1999);
    do {
      *(double *)((long)__ptr + lVar3 * 8) =
           (*(double *)((long)__ptr_00 + lVar3 * 8 + -8) + *(double *)((long)__ptr_00 + lVar3 * 8) +
           *(double *)((long)__ptr_00 + lVar3 * 8 + 8)) * 0.33333;
      __stream = _DAT_db3d8d48388b4c;
      lVar3 = lVar3 + 1;
    } while (lVar3 != 1999);
    iVar1 = iVar1 + 1;
  } while (iVar1 != 500);
  if ((0x2a < param_1) && (**param_2 == '\0')) {
    fwrite(_L_str_1,0x16,1,_DAT_db3d8d48388b4c);
    lVar2 = 0;
    fprintf(__stream,"begin dump: %s",&_L_str_3);
    do {
      if (((uint)((int)lVar2 * -0x33333333) >> 2 | (int)lVar2 * 0x40000000) < 0xccccccd) {
        fputc(10,__stream);
      }
      fprintf(__stream,"%0.2lf ",*(undefined8 *)((long)__ptr + lVar2 * 8));
      lVar2 = lVar2 + 1;
    } while (lVar2 != 2000);
    fprintf(__stream,"\nend   dump: %s\n",&_L_str_3);
    fwrite("==END   DUMP_ARRAYS==\n",0x16,1,__stream);
  }
  free(__ptr);
  free(__ptr_00);
  return 0;
}


