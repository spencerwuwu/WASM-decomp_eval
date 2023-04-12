#include "PL_2mm.h"



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
  long lVar4;
  double dVar5;
  
  __ptr = (void *)polybench_alloc_data(720000,8);
  __ptr_00 = (void *)polybench_alloc_data(880000,8);
  __ptr_01 = (void *)polybench_alloc_data(990000,8);
  __ptr_02 = (void *)polybench_alloc_data(0x107ac0,8);
  __ptr_03 = (void *)polybench_alloc_data(960000,8);
  lVar1 = 0;
  lVar2 = 0;
  do {
    lVar3 = 0;
    do {
      *(double *)((long)__ptr_00 + lVar3 * 8 + lVar2 * 0x2260) =
           (double)(((int)lVar3 * (int)lVar2 + 1U) % 800) / 800.0;
      lVar3 = lVar3 + 1;
    } while (lVar3 != 0x44c);
    lVar2 = lVar2 + 1;
  } while (lVar2 != 800);
  lVar2 = 0;
  do {
    lVar3 = 0;
    do {
      lVar4 = lVar3 + 1;
      *(double *)((long)__ptr_01 + lVar3 * 8 + lVar1 * 0x1c20) =
           (double)((uint)((int)lVar4 * (int)lVar1) % 900) / 900.0;
      lVar3 = lVar4;
    } while (lVar4 != 900);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0x44c);
  lVar1 = 0;
  do {
    lVar3 = 0;
    do {
      *(double *)((long)__ptr_02 + lVar3 * 8 + lVar2 * 0x2580) =
           (double)(((int)lVar2 * ((int)lVar3 + 3) + 1U) % 0x4b0) / 1200.0;
      lVar3 = lVar3 + 1;
    } while (lVar3 != 0x4b0);
    lVar2 = lVar2 + 1;
  } while (lVar2 != 900);
  lVar2 = 0;
  do {
    lVar3 = 0;
    do {
      *(double *)((long)__ptr_03 + lVar3 * 8 + lVar1 * 0x2580) =
           (double)((uint)((int)lVar1 * ((int)lVar3 + 2)) % 0x44c) / 1100.0;
      lVar3 = lVar3 + 1;
    } while (lVar3 != 0x4b0);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 800);
  lVar1 = 0;
  do {
    lVar3 = 0;
    do {
      *(undefined8 *)((long)__ptr + lVar3 * 8 + lVar2 * 0x1c20) = 0;
      dVar5 = 0.0;
      lVar4 = 0;
      do {
        dVar5 = dVar5 + *(double *)((long)__ptr_00 + lVar4 * 8 + lVar2 * 0x2260) * 1.5 *
                        *(double *)((long)__ptr_01 + lVar3 * 8 + lVar4 * 0x1c20);
        *(double *)((long)__ptr + lVar3 * 8 + lVar2 * 0x1c20) = dVar5;
        lVar4 = lVar4 + 1;
      } while (lVar4 != 0x44c);
      lVar3 = lVar3 + 1;
    } while (lVar3 != 900);
    lVar2 = lVar2 + 1;
  } while (lVar2 != 800);
  do {
    lVar2 = 0;
    do {
      dVar5 = *(double *)((long)__ptr_03 + lVar2 * 8 + lVar1 * 0x2580) * 1.2;
      *(double *)((long)__ptr_03 + lVar2 * 8 + lVar1 * 0x2580) = dVar5;
      lVar3 = 0;
      do {
        dVar5 = dVar5 + *(double *)((long)__ptr + lVar3 * 8 + lVar1 * 0x1c20) *
                        *(double *)((long)__ptr_02 + lVar2 * 8 + lVar3 * 0x2580);
        *(double *)((long)__ptr_03 + lVar2 * 8 + lVar1 * 0x2580) = dVar5;
        __stream = _DAT_1243d8d48288b48;
        lVar3 = lVar3 + 1;
      } while (lVar3 != 900);
      lVar2 = lVar2 + 1;
    } while (lVar2 != 0x4b0);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 800);
  if ((0x2a < param_1) && (**param_2 == '\0')) {
    fwrite(_L_str_1,0x16,1,_DAT_1243d8d48288b48);
    fprintf(__stream,"begin dump: %s",&_L_str_3);
    lVar1 = 0;
    do {
      lVar2 = 0;
      do {
        if (((uint)(((int)lVar1 * 800 + (int)lVar2) * -0x33333333) >> 2 | (int)lVar2 * 0x40000000) <
            0xccccccd) {
          fputc(10,__stream);
        }
        fprintf(__stream,"%0.2lf ",*(undefined8 *)((long)__ptr_03 + lVar2 * 8 + lVar1 * 0x2580));
        lVar2 = lVar2 + 1;
      } while (lVar2 != 0x4b0);
      lVar1 = lVar1 + 1;
    } while (lVar1 != 800);
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


