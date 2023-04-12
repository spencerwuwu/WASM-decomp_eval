#include "mvt.h"



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
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  
  __ptr = (void *)polybench_alloc_data(4000000,8);
  __ptr_00 = (void *)polybench_alloc_data(2000,8);
  __ptr_01 = (void *)polybench_alloc_data(2000,8);
  __ptr_02 = (void *)polybench_alloc_data(2000,8);
  __ptr_03 = (void *)polybench_alloc_data(2000,8);
  lVar1 = 0;
  lVar3 = 0;
  do {
    iVar2 = (int)lVar3;
    *(double *)((long)__ptr_00 + lVar3 * 8) = (double)iVar2 / 2000.0;
    lVar4 = lVar3 + 1;
    dVar6 = 0.0;
    if (lVar4 != 2000) {
      dVar6 = (double)(int)lVar4 / 2000.0;
    }
    *(double *)((long)__ptr_01 + lVar3 * 8) = dVar6;
    *(double *)((long)__ptr_02 + lVar3 * 8) =
         (double)(((iVar2 + 3U) / 2000) * -2000 + iVar2 + 3) / 2000.0;
    *(double *)((long)__ptr_03 + lVar3 * 8) =
         (double)(((iVar2 + 4U) / 2000) * -2000 + iVar2 + 4) / 2000.0;
    lVar5 = 0;
    do {
      *(double *)((long)__ptr + lVar5 * 8 + lVar3 * 16000) =
           (double)((uint)((int)lVar5 * iVar2) % 2000) / 2000.0;
      lVar5 = lVar5 + 1;
    } while (lVar5 != 2000);
    lVar3 = lVar4;
  } while (lVar4 != 2000);
  lVar3 = 0;
  do {
    dVar6 = *(double *)((long)__ptr_00 + lVar1 * 8);
    lVar4 = 0;
    do {
      dVar6 = dVar6 + *(double *)((long)__ptr + lVar4 * 8 + lVar1 * 16000) *
                      *(double *)((long)__ptr_02 + lVar4 * 8);
      *(double *)((long)__ptr_00 + lVar1 * 8) = dVar6;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 2000);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 2000);
  do {
    dVar6 = *(double *)((long)__ptr_01 + lVar3 * 8);
    lVar1 = 0;
    do {
      dVar6 = dVar6 + *(double *)((long)__ptr + lVar3 * 8 + lVar1 * 16000) *
                      *(double *)((long)__ptr_03 + lVar1 * 8);
      *(double *)((long)__ptr_01 + lVar3 * 8) = dVar6;
      __stream = _DAT_48240c8948088b48;
      lVar1 = lVar1 + 1;
    } while (lVar1 != 2000);
    lVar3 = lVar3 + 1;
  } while (lVar3 != 2000);
  if ((0x2a < param_1) && (**param_2 == '\0')) {
    fwrite(_L_str_1,0x16,1,_DAT_48240c8948088b48);
    lVar3 = 0;
    fprintf(__stream,"begin dump: %s",&_L_str_3);
    do {
      if (((uint)((int)lVar3 * -0x33333333) >> 2 | (int)lVar3 * 0x40000000) < 0xccccccd) {
        fputc(10,__stream);
      }
      fprintf(__stream,"%0.2lf ",*(undefined8 *)((long)__ptr_00 + lVar3 * 8));
      lVar3 = lVar3 + 1;
    } while (lVar3 != 2000);
    lVar3 = 0;
    fprintf(__stream,"\nend   dump: %s\n",&_L_str_3);
    fprintf(__stream,"begin dump: %s",&_L_str_7);
    do {
      if (((uint)((int)lVar3 * -0x33333333) >> 2 | (int)lVar3 * 0x40000000) < 0xccccccd) {
        fputc(10,__stream);
      }
      fprintf(__stream,"%0.2lf ",*(undefined8 *)((long)__ptr_01 + lVar3 * 8));
      lVar3 = lVar3 + 1;
    } while (lVar3 != 2000);
    fprintf(__stream,"\nend   dump: %s\n",&_L_str_7);
    fwrite("==END   DUMP_ARRAYS==\n",0x16,1,__stream);
  }
  free(__ptr);
  free(__ptr_00);
  free(__ptr_01);
  free(__ptr_02);
  free(__ptr_03);
  return 0;
}


