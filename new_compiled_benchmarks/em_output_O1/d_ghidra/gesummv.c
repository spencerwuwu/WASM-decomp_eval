#include "gesummv.h"



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 submain(int param_1,char **param_2)

{
  FILE *__stream;
  void *__ptr;
  void *__ptr_00;
  void *__ptr_01;
  void *__ptr_02;
  void *__ptr_03;
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  double dVar5;
  
  __ptr = (void *)polybench_alloc_data(0x19c990,8);
  __ptr_00 = (void *)polybench_alloc_data(0x19c990,8);
  __ptr_01 = (void *)polybench_alloc_data(0x514,8);
  __ptr_02 = (void *)polybench_alloc_data(0x514,8);
  __ptr_03 = (void *)polybench_alloc_data(0x514);
  lVar1 = 0;
  lVar2 = 0;
  do {
    *(double *)((long)__ptr_02 + lVar2 * 8) = (double)(int)lVar2 / 1300.0;
    lVar3 = 0;
    do {
      iVar4 = (int)lVar3 * (int)lVar2;
      *(double *)((long)__ptr + lVar3 * 8 + lVar2 * 0x28a0) =
           (double)(((iVar4 + 1U) / 0x514) * -0x514 + iVar4 + 1) / 1300.0;
      *(double *)((long)__ptr_00 + lVar3 * 8 + lVar2 * 0x28a0) =
           (double)(iVar4 + ((iVar4 + 2U) / 0x514) * -0x514 + 2) / 1300.0;
      lVar3 = lVar3 + 1;
    } while (lVar3 != 0x514);
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x514);
  do {
    *(undefined8 *)((long)__ptr_01 + lVar1 * 8) = 0;
    *(undefined8 *)((long)__ptr_03 + lVar1 * 8) = 0;
    lVar2 = 0;
    do {
      *(double *)((long)__ptr_01 + lVar1 * 8) =
           *(double *)((long)__ptr + lVar2 * 8 + lVar1 * 0x28a0) *
           *(double *)((long)__ptr_02 + lVar2 * 8) + *(double *)((long)__ptr_01 + lVar1 * 8);
      dVar5 = *(double *)((long)__ptr_00 + lVar2 * 8 + lVar1 * 0x28a0) *
              *(double *)((long)__ptr_02 + lVar2 * 8) + *(double *)((long)__ptr_03 + lVar1 * 8);
      *(double *)((long)__ptr_03 + lVar1 * 8) = dVar5;
      lVar2 = lVar2 + 1;
    } while (lVar2 != 0x514);
    *(double *)((long)__ptr_03 + lVar1 * 8) =
         *(double *)((long)__ptr_01 + lVar1 * 8) * 1.5 + dVar5 * 1.2;
    __stream = _DAT_48240c8948088b48;
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0x514);
  if ((0x2a < param_1) && (**param_2 == '\0')) {
    fwrite(_L_str_1,0x16,1,_DAT_48240c8948088b48);
    lVar1 = 0;
    fprintf(__stream,"begin dump: %s",&_L_str_3);
    do {
      if (((uint)((int)lVar1 * -0x33333333) >> 2 | (int)lVar1 * 0x40000000) < 0xccccccd) {
        fputc(10,__stream);
      }
      fprintf(__stream,"%0.2lf ",*(undefined8 *)((long)__ptr_03 + lVar1 * 8));
      lVar1 = lVar1 + 1;
    } while (lVar1 != 0x514);
    fprintf(__stream,"\nend   dump: %s\n",&_L_str_3);
    fwrite("==END   DUMP_ARRAYS==\n",0x16,1,__stream);
  }
  free(__ptr);
  free(__ptr_00);
  free(__ptr_01);
  free(__ptr_02);
  free(__ptr_03);
  return 0;
}


