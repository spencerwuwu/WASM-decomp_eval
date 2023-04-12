#include "covariance.h"



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 submain(int param_1,char **param_2)

{
  double *pdVar1;
  FILE *__stream;
  void *__ptr;
  void *__ptr_00;
  void *__ptr_01;
  long lVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  
  __ptr = (void *)polybench_alloc_data(0x19a280,8);
  __ptr_00 = (void *)polybench_alloc_data(0x15f900,8);
  __ptr_01 = (void *)polybench_alloc_data(0x4b0,8);
  lVar2 = 0;
  lVar3 = 0;
  do {
    lVar4 = 0;
    do {
      *(double *)((long)__ptr + lVar4 * 8 + lVar3 * 0x2580) =
           ((double)(int)lVar4 * (double)(int)lVar3) / 1200.0;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 0x4b0);
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x578);
  lVar3 = 0;
  do {
    *(undefined8 *)((long)__ptr_01 + lVar2 * 8) = 0;
    dVar5 = 0.0;
    lVar4 = 0;
    do {
      dVar5 = dVar5 + *(double *)((long)__ptr + lVar2 * 8 + lVar4 * 0x2580);
      *(double *)((long)__ptr_01 + lVar2 * 8) = dVar5;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 0x578);
    *(double *)((long)__ptr_01 + lVar2 * 8) = dVar5 / 1400.0;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x4b0);
  lVar2 = 0;
  do {
    lVar4 = 0;
    do {
      *(double *)((long)__ptr + lVar4 * 8 + lVar3 * 0x2580) =
           *(double *)((long)__ptr + lVar4 * 8 + lVar3 * 0x2580) -
           *(double *)((long)__ptr_01 + lVar4 * 8);
      lVar4 = lVar4 + 1;
    } while (lVar4 != 0x4b0);
    lVar3 = lVar3 + 1;
    lVar4 = lVar2;
  } while (lVar3 != 0x578);
  do {
    pdVar1 = (double *)((long)__ptr_00 + lVar2 * 8 + lVar4 * 0x2580);
    *(undefined8 *)((long)__ptr_00 + lVar2 * 8 + lVar4 * 0x2580) = 0;
    dVar5 = 0.0;
    lVar3 = 0;
    do {
      dVar5 = dVar5 + *(double *)((long)__ptr + lVar4 * 8 + lVar3 * 0x2580) *
                      *(double *)((long)__ptr + lVar2 * 8 + lVar3 * 0x2580);
      *pdVar1 = dVar5;
      lVar3 = lVar3 + 1;
    } while (lVar3 != 0x578);
    *pdVar1 = dVar5 / 1399.0;
    *(double *)((long)__ptr_00 + lVar4 * 8 + lVar2 * 0x2580) = dVar5 / 1399.0;
    __stream = _DAT_f63d8d48208b4c;
    lVar2 = lVar2 + 1;
  } while ((lVar2 != 0x4b0) || (lVar2 = lVar4 + 1, lVar4 = lVar2, lVar2 != 0x4b0));
  if ((0x2a < param_1) && (**param_2 == '\0')) {
    fwrite(_L_str_1,0x16,1,_DAT_f63d8d48208b4c);
    lVar2 = 0;
    fprintf(__stream,"begin dump: %s",&_L_str_3);
    do {
      lVar3 = 0;
      do {
        if (((uint)(((int)lVar3 + (int)lVar2 * 0x4b0) * -0x33333333) >> 2 | (int)lVar3 * 0x40000000)
            < 0xccccccd) {
          fputc(10,__stream);
        }
        fprintf(__stream,"%0.2lf ",*(undefined8 *)((long)__ptr_00 + lVar3 * 8 + lVar2 * 0x2580));
        lVar3 = lVar3 + 1;
      } while (lVar3 != 0x4b0);
      lVar2 = lVar2 + 1;
    } while (lVar2 != 0x4b0);
    fprintf(__stream,"\nend   dump: %s\n",&_L_str_3);
    fwrite("==END   DUMP_ARRAYS==\n",0x16,1,__stream);
  }
  free(__ptr);
  free(__ptr_00);
  free(__ptr_01);
  return 0;
}


