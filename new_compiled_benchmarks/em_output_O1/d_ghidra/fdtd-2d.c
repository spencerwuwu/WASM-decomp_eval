#include "fdtd-2d.h"



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 submain(int param_1,char **param_2)

{
  FILE *__stream;
  void *__ptr;
  void *__ptr_00;
  void *__ptr_01;
  void *__ptr_02;
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  
  __ptr = (void *)polybench_alloc_data(1200000,8);
  __ptr_00 = (void *)polybench_alloc_data(1200000,8);
  __ptr_01 = (void *)polybench_alloc_data(1200000,8);
  __ptr_02 = (void *)polybench_alloc_data(500,8);
  lVar2 = 0;
  lVar1 = 0;
  do {
    *(double *)((long)__ptr_02 + lVar1 * 8) = (double)(int)lVar1;
    lVar1 = lVar1 + 1;
  } while (lVar1 != 500);
  lVar1 = 0;
  do {
    dVar6 = (double)(int)lVar2;
    lVar3 = 0;
    do {
      lVar5 = lVar3 + 1;
      lVar4 = lVar2 * 0x2580;
      *(double *)((long)__ptr + lVar3 * 8 + lVar4) = ((double)(int)lVar5 * dVar6) / 1000.0;
      *(double *)((long)__ptr_00 + lVar3 * 8 + lVar4) = ((double)((int)lVar3 + 2) * dVar6) / 1200.0;
      *(double *)((long)__ptr_01 + lVar3 * 8 + lVar4) = ((double)((int)lVar3 + 3) * dVar6) / 1000.0;
      lVar3 = lVar5;
    } while (lVar5 != 0x4b0);
    lVar2 = lVar2 + 1;
  } while (lVar2 != 1000);
  do {
    lVar2 = 0;
    do {
      *(undefined8 *)((long)__ptr_00 + lVar2 * 8) = *(undefined8 *)((long)__ptr_02 + lVar1 * 8);
      lVar2 = lVar2 + 1;
    } while (lVar2 != 0x4b0);
    lVar2 = 1;
    do {
      lVar3 = 0;
      do {
        lVar5 = lVar2 * 0x2580;
        *(double *)((long)__ptr_00 + lVar3 * 8 + lVar5) =
             (*(double *)((long)__ptr_01 + lVar3 * 8 + lVar5) -
             *(double *)((long)__ptr_01 + lVar3 * 8 + (lVar2 + -1) * 0x2580)) * -0.5 +
             *(double *)((long)__ptr_00 + lVar3 * 8 + lVar5);
        lVar3 = lVar3 + 1;
      } while (lVar3 != 0x4b0);
      lVar2 = lVar2 + 1;
    } while (lVar2 != 1000);
    lVar2 = 0;
    do {
      lVar3 = 1;
      do {
        lVar5 = lVar2 * 0x2580;
        *(double *)((long)__ptr + lVar3 * 8 + lVar5) =
             (*(double *)((long)__ptr_01 + lVar3 * 8 + lVar5) -
             *(double *)((long)__ptr_01 + lVar3 * 8 + lVar5 + -8)) * -0.5 +
             *(double *)((long)__ptr + lVar3 * 8 + lVar5);
        lVar3 = lVar3 + 1;
      } while (lVar3 != 0x4b0);
      lVar2 = lVar2 + 1;
    } while (lVar2 != 1000);
    lVar2 = 0;
    do {
      lVar3 = lVar2 + 1;
      lVar5 = 0;
      do {
        lVar4 = lVar2 * 0x2580;
        *(double *)((long)__ptr_01 + lVar5 * 8 + lVar4) =
             (((*(double *)((long)__ptr + lVar5 * 8 + lVar4 + 8) -
               *(double *)((long)__ptr + lVar5 * 8 + lVar4)) +
              *(double *)((long)__ptr_00 + lVar5 * 8 + lVar3 * 0x2580)) -
             *(double *)((long)__ptr_00 + lVar5 * 8 + lVar4)) * -0.7 +
             *(double *)((long)__ptr_01 + lVar5 * 8 + lVar4);
        __stream = _DAT_2613d8d48288b4c;
        lVar5 = lVar5 + 1;
      } while (lVar5 != 0x4af);
      lVar2 = lVar3;
    } while (lVar3 != 999);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 500);
  if ((0x2a < param_1) && (**param_2 == '\0')) {
    fwrite("==BEGIN DUMP_ARRAYS==\n",0x16,1,_DAT_2613d8d48288b4c);
    lVar1 = 0;
    fprintf(__stream,"begin dump: %s",&_L_str_3);
    do {
      lVar2 = 0;
      do {
        if (((uint)(((int)lVar1 * 1000 + (int)lVar2) * -0x33333333) >> 2 | (int)lVar2 * 0x40000000)
            < 0xccccccd) {
          fputc(10,__stream);
        }
        fprintf(__stream,"%0.2lf ",*(undefined8 *)((long)__ptr + lVar2 * 8 + lVar1 * 0x2580));
        lVar2 = lVar2 + 1;
      } while (lVar2 != 0x4b0);
      lVar1 = lVar1 + 1;
    } while (lVar1 != 1000);
    lVar1 = 0;
    fprintf(__stream,"\nend   dump: %s\n",&_L_str_3);
    fwrite("==END   DUMP_ARRAYS==\n",0x16,1,__stream);
    fprintf(__stream,"begin dump: %s",&_L_str_8);
    do {
      lVar2 = 0;
      do {
        if (((uint)(((int)lVar1 * 1000 + (int)lVar2) * -0x33333333) >> 2 | (int)lVar2 * 0x40000000)
            < 0xccccccd) {
          fputc(10,__stream);
        }
        fprintf(__stream,"%0.2lf ",*(undefined8 *)((long)__ptr_00 + lVar2 * 8 + lVar1 * 0x2580));
        lVar2 = lVar2 + 1;
      } while (lVar2 != 0x4b0);
      lVar1 = lVar1 + 1;
    } while (lVar1 != 1000);
    lVar1 = 0;
    fprintf(__stream,"\nend   dump: %s\n",&_L_str_8);
    fprintf(__stream,"begin dump: %s",&_L_str_9);
    do {
      lVar2 = 0;
      do {
        if (((uint)(((int)lVar1 * 1000 + (int)lVar2) * -0x33333333) >> 2 | (int)lVar2 * 0x40000000)
            < 0xccccccd) {
          fputc(10,__stream);
        }
        fprintf(__stream,"%0.2lf ",*(undefined8 *)((long)__ptr_01 + lVar2 * 8 + lVar1 * 0x2580));
        lVar2 = lVar2 + 1;
      } while (lVar2 != 0x4b0);
      lVar1 = lVar1 + 1;
    } while (lVar1 != 1000);
    fprintf(__stream,"\nend   dump: %s\n",&_L_str_9);
  }
  free(__ptr);
  free(__ptr_00);
  free(__ptr_01);
  free(__ptr_02);
  return 0;
}


