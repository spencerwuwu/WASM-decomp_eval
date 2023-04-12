#include "doitgen.h"



void kernel_doitgen(uint param_1,uint param_2,uint param_3,long param_4,long param_5,long param_6)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  double dVar6;
  
  if (0 < (int)param_1) {
    uVar2 = (ulong)param_3;
    uVar3 = 0;
    do {
      if (0 < (int)param_2) {
        uVar1 = 0;
        do {
          if (0 < (int)param_3) {
            uVar4 = 0;
            do {
              *(undefined8 *)(param_6 + uVar4 * 8) = 0;
              dVar6 = 0.0;
              uVar5 = 0;
              do {
                dVar6 = dVar6 + *(double *)(uVar1 * 0x500 + param_4 + uVar3 * 0x2bc00 + uVar5 * 8) *
                                *(double *)(uVar5 * 0x500 + param_5 + uVar4 * 8);
                *(double *)(param_6 + uVar4 * 8) = dVar6;
                uVar5 = uVar5 + 1;
              } while (uVar5 != uVar2);
              uVar4 = uVar4 + 1;
            } while (uVar4 != uVar2);
          }
          if (0 < (int)param_3) {
            uVar4 = 0;
            do {
              *(undefined8 *)(uVar1 * 0x500 + param_4 + uVar3 * 0x2bc00 + uVar4 * 8) =
                   *(undefined8 *)(param_6 + uVar4 * 8);
              uVar4 = uVar4 + 1;
            } while (uVar4 != uVar2);
          }
          uVar1 = uVar1 + 1;
        } while (uVar1 != param_2);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 != param_1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 submain(int param_1,char **param_2)

{
  long lVar1;
  FILE *__stream;
  void *__ptr;
  void *__ptr_00;
  void *__ptr_01;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  
  __ptr = (void *)polybench_alloc_data(0x334500,8);
  __ptr_00 = (void *)polybench_alloc_data(0xa0,8);
  __ptr_01 = (void *)polybench_alloc_data(0x6400);
  lVar2 = 0;
  lVar3 = 0;
  do {
    lVar4 = 0;
    do {
      lVar5 = 0;
      do {
        *(double *)((long)__ptr + lVar5 * 8 + lVar3 * 0x2bc00 + lVar4 * 0x500) =
             (double)((uint)((int)lVar5 + (int)lVar4 * (int)lVar3) % 0xa0) / 160.0;
        lVar5 = lVar5 + 1;
      } while (lVar5 != 0xa0);
      lVar4 = lVar4 + 1;
    } while (lVar4 != 0x8c);
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x96);
  lVar3 = 0;
  do {
    lVar4 = 0;
    do {
      *(double *)((long)__ptr_01 + lVar4 * 8 + lVar2 * 0x500) =
           (double)((uint)((int)lVar4 * (int)lVar2) % 0xa0) / 160.0;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 0xa0);
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0xa0);
  do {
    lVar2 = 0;
    do {
      lVar4 = 0;
      do {
        *(undefined8 *)((long)__ptr_00 + lVar4 * 8) = 0;
        dVar6 = 0.0;
        lVar5 = 0;
        do {
          lVar1 = lVar3 * 0x2bc00 + lVar2 * 0x500;
          dVar6 = dVar6 + *(double *)((long)__ptr + lVar5 * 8 + lVar1) *
                          *(double *)((long)__ptr_01 + lVar4 * 8 + lVar5 * 0x500);
          *(double *)((long)__ptr_00 + lVar4 * 8) = dVar6;
          lVar5 = lVar5 + 1;
        } while (lVar5 != 0xa0);
        lVar4 = lVar4 + 1;
      } while (lVar4 != 0xa0);
      lVar4 = 0;
      do {
        *(undefined8 *)((long)__ptr + lVar4 * 8 + lVar1) =
             *(undefined8 *)((long)__ptr_00 + lVar4 * 8);
        __stream = _DAT_13a3d8d48208b4c;
        lVar4 = lVar4 + 1;
      } while (lVar4 != 0xa0);
      lVar2 = lVar2 + 1;
    } while (lVar2 != 0x8c);
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x96);
  if ((0x2a < param_1) && (**param_2 == '\0')) {
    fwrite(_L_str_1,0x16,1,_DAT_13a3d8d48208b4c);
    lVar2 = 0;
    fprintf(__stream,"begin dump: %s",&_L_str_3);
    do {
      lVar3 = 0;
      do {
        lVar4 = 0;
        do {
          if (((uint)(((int)lVar4 + (int)lVar3 * 0xa0 + (int)lVar2 * 0x5780) * -0x33333333) >> 2 |
              (int)lVar4 * 0x40000000) < 0xccccccd) {
            fputc(10,__stream);
          }
          fprintf(__stream,"%0.2lf ",
                  *(undefined8 *)((long)__ptr + lVar4 * 8 + lVar2 * 0x2bc00 + lVar3 * 0x500));
          lVar4 = lVar4 + 1;
        } while (lVar4 != 0xa0);
        lVar3 = lVar3 + 1;
      } while (lVar3 != 0x8c);
      lVar2 = lVar2 + 1;
    } while (lVar2 != 0x96);
    fprintf(__stream,"\nend   dump: %s\n",&_L_str_3);
    fwrite("==END   DUMP_ARRAYS==\n",0x16,1,__stream);
  }
  free(__ptr);
  free(__ptr_00);
  free(__ptr_01);
  return 0;
}


