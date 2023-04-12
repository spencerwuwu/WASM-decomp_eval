#include "trisolv.h"



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 submain(int param_1,char **param_2)

{
  FILE *__stream;
  void *__ptr;
  void *__ptr_00;
  void *__ptr_01;
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  
  __ptr = (void *)polybench_alloc_data(4000000,8);
  __ptr_00 = (void *)polybench_alloc_data(2000,8);
  __ptr_01 = (void *)polybench_alloc_data(2000);
  lVar2 = 1;
  lVar1 = 0;
  lVar3 = 0;
  do {
    *(undefined8 *)((long)__ptr_00 + lVar3 * 8) = 0xc08f380000000000;
    *(double *)((long)__ptr_01 + lVar3 * 8) = (double)(int)lVar3;
    lVar4 = 0;
    do {
      dVar5 = (double)(((int)lVar3 + 0x7d1) - (int)lVar4);
      *(double *)((long)__ptr + lVar4 * 8 + lVar3 * 16000) = (dVar5 + dVar5) / 2000.0;
      lVar4 = lVar4 + 1;
    } while (lVar4 != lVar2);
    lVar3 = lVar3 + 1;
    lVar2 = lVar2 + 1;
  } while (lVar3 != 2000);
  do {
    dVar5 = *(double *)((long)__ptr_01 + lVar1 * 8);
    *(double *)((long)__ptr_00 + lVar1 * 8) = dVar5;
    if (lVar1 != 0) {
      lVar2 = 0;
      do {
        dVar5 = dVar5 - *(double *)((long)__ptr + lVar2 * 8 + lVar1 * 16000) *
                        *(double *)((long)__ptr_00 + lVar2 * 8);
        *(double *)((long)__ptr_00 + lVar1 * 8) = dVar5;
        lVar2 = lVar2 + 1;
      } while (lVar2 != lVar1);
    }
    *(double *)((long)__ptr_00 + lVar1 * 8) =
         *(double *)((long)__ptr_00 + lVar1 * 8) / *(double *)(lVar1 * 0x3e88 + (long)__ptr);
    __stream = _DAT_bf3d8d48208b4c;
    lVar1 = lVar1 + 1;
  } while (lVar1 != 2000);
  if ((0x2a < param_1) && (**param_2 == '\0')) {
    fwrite(_L_str_1,0x16,1,_DAT_bf3d8d48208b4c);
    lVar1 = 0;
    fprintf(__stream,"begin dump: %s",&_L_str_3);
    do {
      fprintf(__stream,"%0.2lf ",*(undefined8 *)((long)__ptr_00 + lVar1 * 8));
      if (((uint)((int)lVar1 * -0x33333333) >> 2 | (int)lVar1 * 0x40000000) < 0xccccccd) {
        fputc(10,__stream);
      }
      lVar1 = lVar1 + 1;
    } while (lVar1 != 2000);
    fprintf(__stream,"\nend   dump: %s\n",&_L_str_3);
    fwrite("==END   DUMP_ARRAYS==\n",0x16,1,__stream);
  }
  free(__ptr);
  free(__ptr_00);
  free(__ptr_01);
  return 0;
}


