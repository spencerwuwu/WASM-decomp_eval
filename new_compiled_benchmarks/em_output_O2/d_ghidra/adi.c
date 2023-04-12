#include "adi.h"



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 submain(int param_1,char **param_2)

{
  int iVar1;
  undefined auVar2 [16];
  FILE *__stream;
  int iVar3;
  void *__ptr;
  void *__ptr_00;
  void *__ptr_01;
  void *__ptr_02;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  bool bVar10;
  double dVar11;
  undefined auVar12 [16];
  double dVar13;
  double dVar14;
  
  __ptr = (void *)polybench_alloc_data(1000000,8);
  __ptr_00 = (void *)polybench_alloc_data(1000000,8);
  __ptr_01 = (void *)polybench_alloc_data(1000000,8);
  __ptr_02 = (void *)polybench_alloc_data(1000000,8);
  auVar2 = __LCPI0_1;
  lVar4 = 0;
  do {
    lVar5 = 0;
    iVar3 = 0;
    do {
      iVar1 = ((int)lVar4 + 1000) - iVar3;
      dVar11 = (double)iVar1;
      auVar12 = divpd(CONCAT88((double)(int)((ulong)dVar11 >> 0x20),dVar11),auVar2);
      *(undefined (*) [16])((long)__ptr + lVar5 * 8 + lVar4 * 8000) = auVar12;
      dVar11 = (double)(iVar1 + -2);
      auVar12 = divpd(CONCAT88((double)(int)((ulong)dVar11 >> 0x20),dVar11),auVar2);
      *(undefined (*) [16])((long)__ptr + (lVar5 * 8 | 0x10U) + lVar4 * 8000) = auVar12;
      lVar5 = lVar5 + 4;
      iVar3 = iVar3 + 4;
    } while (lVar5 != 1000);
    lVar4 = lVar4 + 1;
  } while (lVar4 != 1000);
  iVar3 = 1;
  do {
    lVar5 = 0;
    lVar4 = 1;
    do {
      lVar9 = lVar5 * 8000;
      *(undefined8 *)((long)__ptr_00 + lVar4 * 8) = 0x3ff0000000000000;
      lVar6 = lVar4 * 8000;
      *(undefined8 *)((long)__ptr_01 + lVar6) = 0;
      *(undefined8 *)((long)__ptr_02 + lVar6) = *(undefined8 *)((long)__ptr_00 + lVar4 * 8);
      lVar7 = lVar4 + 1;
      if (((ulong)((long)__ptr_01 + lVar9 + 8000) < (ulong)((long)__ptr_02 + lVar9 + 0x3e78)) &&
         (lVar8 = 1,
         (ulong)((long)__ptr_02 + lVar9 + 8000) < (ulong)((long)__ptr_01 + lVar9 + 0x3e78))) {
        do {
          dVar11 = *(double *)((long)__ptr_01 + lVar8 * 8 + lVar6 + -8) * -2000.0 + 4001.0;
          *(double *)((long)__ptr_01 + lVar8 * 8 + lVar6) = 2000.0 / dVar11;
          *(double *)((long)__ptr_02 + lVar8 * 8 + lVar6) =
               (*(double *)((long)__ptr_02 + lVar8 * 8 + lVar6 + -8) * 2000.0 +
               *(double *)((long)__ptr + lVar7 * 8 + lVar8 * 8000) * 1000.0 +
               *(double *)((long)__ptr + (lVar4 + -1) * 8 + lVar8 * 8000) * 1000.0 +
               *(double *)((long)__ptr + lVar4 * 8 + lVar8 * 8000) * -1999.0) / dVar11;
          lVar8 = lVar8 + 1;
        } while (lVar8 != 999);
      }
      else {
        dVar11 = *(double *)((long)__ptr_01 + lVar9 + 8000);
        dVar13 = *(double *)((long)__ptr_02 + lVar9 + 8000);
        lVar9 = 1;
        do {
          dVar14 = dVar11 * -2000.0 + 4001.0;
          dVar11 = 2000.0 / dVar14;
          *(double *)((long)__ptr_01 + lVar9 * 8 + lVar6) = dVar11;
          dVar13 = (dVar13 * 2000.0 +
                   *(double *)((long)__ptr + lVar7 * 8 + lVar9 * 8000) * 1000.0 +
                   *(double *)((long)__ptr + (lVar4 + -1) * 8 + lVar9 * 8000) * 1000.0 +
                   *(double *)((long)__ptr + lVar4 * 8 + lVar9 * 8000) * -1999.0) / dVar14;
          *(double *)((long)__ptr_02 + lVar9 * 8 + lVar6) = dVar13;
          lVar9 = lVar9 + 1;
        } while (lVar9 != 999);
      }
      *(undefined8 *)((long)__ptr_00 + lVar4 * 8 + 0x79f2c0) = 0x3ff0000000000000;
      dVar11 = 1.0;
      lVar9 = 0x3e6;
      do {
        dVar11 = dVar11 * *(double *)((long)__ptr_01 + lVar9 * 8 + lVar6) +
                 *(double *)((long)__ptr_02 + lVar9 * 8 + lVar6);
        *(double *)((long)__ptr_00 + lVar4 * 8 + lVar9 * 8000) = dVar11;
        dVar11 = dVar11 * *(double *)((long)__ptr_01 + lVar9 * 8 + lVar6 + -8) +
                 *(double *)((long)__ptr_02 + lVar9 * 8 + lVar6 + -8);
        *(double *)((long)__ptr_00 + lVar4 * 8 + lVar9 * 8000 + -8000) = dVar11;
        bVar10 = lVar9 != 2;
        lVar9 = lVar9 + -2;
      } while (bVar10);
      lVar5 = lVar5 + 1;
      lVar4 = lVar7;
    } while (lVar7 != 999);
    lVar4 = 1;
    lVar5 = 0;
    do {
      lVar9 = lVar5 * 8000;
      lVar6 = lVar4 * 8000;
      *(undefined8 *)((long)__ptr + lVar6) = 0x3ff0000000000000;
      *(undefined8 *)((long)__ptr_01 + lVar6) = 0;
      *(undefined8 *)((long)__ptr_02 + lVar6) = *(undefined8 *)((long)__ptr + lVar6);
      lVar7 = lVar4 + -1;
      lVar4 = lVar4 + 1;
      if (((ulong)((long)__ptr_01 + lVar9 + 8000) < (ulong)((long)__ptr_02 + lVar9 + 0x3e78)) &&
         (lVar8 = 1,
         (ulong)((long)__ptr_02 + lVar9 + 8000) < (ulong)((long)__ptr_01 + lVar9 + 0x3e78))) {
        do {
          dVar11 = *(double *)((long)__ptr_01 + lVar8 * 8 + lVar6 + -8) * -1000.0 + 2001.0;
          *(double *)((long)__ptr_01 + lVar8 * 8 + lVar6) = 1000.0 / dVar11;
          *(double *)((long)__ptr_02 + lVar8 * 8 + lVar6) =
               (*(double *)((long)__ptr_02 + lVar8 * 8 + lVar6 + -8) * 1000.0 +
               *(double *)((long)__ptr_00 + lVar8 * 8 + lVar4 * 8000) * 2000.0 +
               *(double *)((long)__ptr_00 + lVar8 * 8 + lVar7 * 8000) * 2000.0 +
               *(double *)((long)__ptr_00 + lVar8 * 8 + lVar6) * -3999.0) / dVar11;
          lVar8 = lVar8 + 1;
        } while (lVar8 != 999);
      }
      else {
        dVar11 = *(double *)((long)__ptr_01 + lVar9 + 8000);
        dVar13 = *(double *)((long)__ptr_02 + lVar9 + 8000);
        lVar9 = 1;
        do {
          dVar14 = dVar11 * -1000.0 + 2001.0;
          dVar11 = 1000.0 / dVar14;
          *(double *)((long)__ptr_01 + lVar9 * 8 + lVar6) = dVar11;
          dVar13 = (dVar13 * 1000.0 +
                   *(double *)((long)__ptr_00 + lVar9 * 8 + lVar4 * 8000) * 2000.0 +
                   *(double *)((long)__ptr_00 + lVar9 * 8 + lVar7 * 8000) * 2000.0 +
                   *(double *)((long)__ptr_00 + lVar9 * 8 + lVar6) * -3999.0) / dVar14;
          *(double *)((long)__ptr_02 + lVar9 * 8 + lVar6) = dVar13;
          lVar9 = lVar9 + 1;
        } while (lVar9 != 999);
      }
      *(undefined8 *)((long)__ptr + lVar6 + 0x1f38) = 0x3ff0000000000000;
      dVar11 = 1.0;
      lVar7 = 0x3e6;
      do {
        dVar11 = dVar11 * *(double *)((long)__ptr_01 + lVar7 * 8 + lVar6) +
                 *(double *)((long)__ptr_02 + lVar7 * 8 + lVar6);
        *(double *)((long)__ptr + lVar7 * 8 + lVar6) = dVar11;
        dVar11 = dVar11 * *(double *)((long)__ptr_01 + lVar7 * 8 + lVar6 + -8) +
                 *(double *)((long)__ptr_02 + lVar7 * 8 + lVar6 + -8);
        *(double *)((long)__ptr + lVar7 * 8 + lVar6 + -8) = dVar11;
        __stream = _DAT_1743d8d48288b4c;
        bVar10 = lVar7 != 2;
        lVar7 = lVar7 + -2;
      } while (bVar10);
      lVar5 = lVar5 + 1;
    } while (lVar4 != 999);
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0x1f5);
  if ((0x2a < param_1) && (**param_2 == '\0')) {
    fwrite("==BEGIN DUMP_ARRAYS==\n",0x16,1,_DAT_1743d8d48288b4c);
    lVar4 = 0;
    fprintf(__stream,"begin dump: %s",&_L_str_3);
    do {
      lVar5 = 0;
      do {
        if (((uint)(((int)lVar4 * 1000 + (int)lVar5) * -0x33333333) >> 2 | (int)lVar5 * 0x40000000)
            < 0xccccccd) {
          fputc(10,__stream);
        }
        fprintf(__stream,"%0.2lf ",*(undefined8 *)((long)__ptr + lVar5 * 8 + lVar4 * 8000));
        lVar5 = lVar5 + 1;
      } while (lVar5 != 1000);
      lVar4 = lVar4 + 1;
    } while (lVar4 != 1000);
    fprintf(__stream,"\nend   dump: %s\n",&_L_str_3);
    fwrite("==END   DUMP_ARRAYS==\n",0x16,1,__stream);
  }
  free(__ptr);
  free(__ptr_00);
  free(__ptr_01);
  free(__ptr_02);
  return 0;
}


