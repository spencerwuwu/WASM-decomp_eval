#include "adi.h"



void init_array(uint param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (0 < (int)param_1) {
    uVar1 = 0;
    do {
      uVar2 = 0;
      do {
        *(double *)(uVar1 * 8000 + param_2 + uVar2 * 8) =
             (double)(((int)uVar1 + param_1) - (int)uVar2) / (double)param_1;
        uVar2 = uVar2 + 1;
      } while (uVar2 != param_1);
      uVar1 = uVar1 + 1;
    } while (uVar1 != param_1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void print_array(uint param_1,long param_2)

{
  FILE *__stream;
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  
  __stream = _DAT_7af3d8d48188b48;
  fwrite("==BEGIN DUMP_ARRAYS==\n",0x16,1,_DAT_7af3d8d48188b48);
  fprintf(__stream,"begin dump: %s",&_L_str_2);
  if (0 < (int)param_1) {
    uVar2 = 0;
    do {
      uVar3 = 0;
      do {
        iVar1 = (int)uVar3 + (int)uVar2 * param_1;
        if ((iVar1 * -0x33333333 + 0x19999998U >> 2 | iVar1 * 0x40000000) < 0xccccccd) {
          fputc(10,__stream);
        }
        fprintf(__stream,"%0.2lf ",*(undefined8 *)(uVar2 * 8000 + param_2 + uVar3 * 8));
        uVar3 = uVar3 + 1;
      } while (uVar3 != param_1);
      uVar2 = uVar2 + 1;
    } while (uVar2 != param_1);
  }
  fprintf(__stream,"\nend   dump: %s\n",&_L_str_2);
  fwrite("==END   DUMP_ARRAYS==\n",0x16,1,__stream);
  return;
}



void kernel_adi(int param_1,int param_2,long param_3,long param_4,long param_5,long param_6)

{
  long lVar1;
  uint uVar2;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  bool bVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  ulong uVar3;
  
  if (0 < param_1) {
    dVar14 = 1.0 / (double)param_1;
    dVar16 = (1.0 / (double)param_2) * (1.0 / (double)param_2);
    dVar15 = (dVar14 + dVar14) / dVar16;
    dVar14 = dVar14 / dVar16;
    dVar17 = dVar15 * -0.5;
    dVar15 = dVar15 + 1.0;
    dVar16 = dVar14 * -0.5;
    dVar14 = dVar14 + 1.0;
    uVar2 = param_2 - 1;
    uVar3 = (ulong)uVar2;
    dVar19 = (double)((ulong)dVar17 ^ 0x8000000000000000);
    dVar18 = (double)((ulong)dVar16 ^ 0x8000000000000000);
    dVar20 = dVar16 + dVar16 + 1.0;
    dVar21 = dVar17 + dVar17 + 1.0;
    lVar1 = uVar3 * 8 + 8000;
    iVar7 = 1;
    do {
      if (2 < param_2) {
        lVar10 = 0;
        uVar11 = 1;
        do {
          lVar4 = lVar10 * 8000;
          lVar5 = lVar1 + lVar4;
          *(undefined8 *)(param_4 + uVar11 * 8) = 0x3ff0000000000000;
          lVar6 = uVar11 * 8000;
          *(undefined8 *)(param_5 + lVar6) = 0;
          *(undefined8 *)(param_6 + lVar6) = *(undefined8 *)(param_4 + uVar11 * 8);
          uVar8 = uVar11 + 1;
          if ((param_5 + lVar4 + 8000U < (ulong)(param_6 + lVar5)) &&
             (uVar9 = 1, param_6 + lVar4 + 8000U < (ulong)(lVar5 + param_5))) {
            do {
              dVar22 = *(double *)(param_5 + lVar6 + -8 + uVar9 * 8) * dVar17 + dVar15;
              *(double *)(param_5 + lVar6 + uVar9 * 8) = dVar19 / dVar22;
              lVar4 = uVar9 * 8000 + param_3;
              *(double *)(param_6 + lVar6 + uVar9 * 8) =
                   (*(double *)(param_6 + lVar6 + -8 + uVar9 * 8) * dVar19 +
                   *(double *)(lVar4 + uVar8 * 8) * dVar18 +
                   *(double *)(lVar4 + (uVar11 - 1) * 8) * dVar18 +
                   *(double *)(lVar4 + uVar11 * 8) * dVar20) / dVar22;
              uVar9 = uVar9 + 1;
            } while (uVar9 != uVar3);
          }
          else {
            dVar22 = *(double *)(param_5 + 8000 + lVar4);
            dVar23 = *(double *)(param_6 + 8000 + lVar4);
            uVar9 = 1;
            do {
              dVar24 = dVar22 * dVar17 + dVar15;
              dVar22 = dVar19 / dVar24;
              *(double *)(param_5 + lVar6 + uVar9 * 8) = dVar22;
              lVar4 = uVar9 * 8000 + param_3;
              dVar23 = (dVar23 * dVar19 +
                       *(double *)(lVar4 + uVar8 * 8) * dVar18 +
                       *(double *)(lVar4 + (uVar11 - 1) * 8) * dVar18 +
                       *(double *)(lVar4 + uVar11 * 8) * dVar20) / dVar24;
              *(double *)(param_6 + lVar6 + uVar9 * 8) = dVar23;
              uVar9 = uVar9 + 1;
            } while (uVar9 != uVar3);
          }
          *(undefined8 *)((long)(int)uVar2 * 8000 + param_4 + uVar11 * 8) = 0x3ff0000000000000;
          lVar4 = (long)(param_2 + -2);
          if (2 < param_2) {
            do {
              lVar5 = lVar4 * 8000 + param_4;
              *(double *)(lVar5 + uVar11 * 8) =
                   *(double *)(param_5 + lVar6 + lVar4 * 8) * *(double *)(lVar5 + 8000 + uVar11 * 8)
                   + *(double *)(param_6 + lVar6 + lVar4 * 8);
              bVar13 = 1 < lVar4;
              lVar4 = lVar4 + -1;
            } while (bVar13);
          }
          lVar10 = lVar10 + 1;
          uVar11 = uVar8;
        } while (uVar8 != uVar3);
      }
      if (2 < param_2) {
        uVar11 = 1;
        lVar10 = 0;
        do {
          lVar6 = lVar10 * 8000;
          lVar5 = lVar1 + lVar6;
          lVar12 = uVar11 * 8000;
          *(undefined8 *)(param_3 + lVar12) = 0x3ff0000000000000;
          *(undefined8 *)(param_5 + lVar12) = 0;
          *(undefined8 *)(param_6 + lVar12) = *(undefined8 *)(param_3 + lVar12);
          lVar4 = uVar11 - 1;
          uVar11 = uVar11 + 1;
          if ((param_5 + lVar6 + 8000U < (ulong)(param_6 + lVar5)) &&
             (uVar8 = 1, param_6 + lVar6 + 8000U < (ulong)(lVar5 + param_5))) {
            do {
              dVar22 = *(double *)(param_5 + lVar12 + -8 + uVar8 * 8) * dVar16 + dVar14;
              *(double *)(param_5 + lVar12 + uVar8 * 8) = dVar18 / dVar22;
              *(double *)(param_6 + lVar12 + uVar8 * 8) =
                   (*(double *)(param_6 + lVar12 + -8 + uVar8 * 8) * dVar18 +
                   *(double *)(uVar11 * 8000 + param_4 + uVar8 * 8) * dVar19 +
                   *(double *)(lVar4 * 8000 + param_4 + uVar8 * 8) * dVar19 +
                   *(double *)(param_4 + lVar12 + uVar8 * 8) * dVar21) / dVar22;
              uVar8 = uVar8 + 1;
            } while (uVar8 != uVar3);
          }
          else {
            dVar22 = *(double *)(param_5 + 8000 + lVar6);
            dVar23 = *(double *)(param_6 + 8000 + lVar6);
            uVar8 = 1;
            do {
              dVar24 = dVar22 * dVar16 + dVar14;
              dVar22 = dVar18 / dVar24;
              *(double *)(param_5 + lVar12 + uVar8 * 8) = dVar22;
              dVar23 = (dVar23 * dVar18 +
                       *(double *)(uVar11 * 8000 + param_4 + uVar8 * 8) * dVar19 +
                       *(double *)(lVar4 * 8000 + param_4 + uVar8 * 8) * dVar19 +
                       *(double *)(param_4 + lVar12 + uVar8 * 8) * dVar21) / dVar24;
              *(double *)(param_6 + lVar12 + uVar8 * 8) = dVar23;
              uVar8 = uVar8 + 1;
            } while (uVar8 != uVar3);
          }
          lVar4 = param_3 + lVar12;
          *(undefined8 *)(lVar4 + (long)(int)uVar2 * 8) = 0x3ff0000000000000;
          lVar5 = (long)(param_2 + -2);
          if (2 < param_2) {
            do {
              *(double *)(lVar4 + lVar5 * 8) =
                   *(double *)(param_5 + lVar12 + lVar5 * 8) * *(double *)(lVar4 + 8 + lVar5 * 8) +
                   *(double *)(param_6 + lVar12 + lVar5 * 8);
              bVar13 = 1 < lVar5;
              lVar5 = lVar5 + -1;
            } while (bVar13);
          }
          lVar10 = lVar10 + 1;
        } while (uVar11 != uVar3);
      }
      bVar13 = iVar7 != param_1;
      iVar7 = iVar7 + 1;
    } while (bVar13);
  }
  return;
}



undefined8 submain(int param_1,char **param_2)

{
  void *__ptr;
  void *__ptr_00;
  void *__ptr_01;
  void *__ptr_02;
  long lVar1;
  long lVar2;
  
  __ptr = (void *)polybench_alloc_data(1000000,8);
  __ptr_00 = (void *)polybench_alloc_data(1000000,8);
  __ptr_01 = (void *)polybench_alloc_data(1000000,8);
  __ptr_02 = (void *)polybench_alloc_data(1000000,8);
  lVar1 = 0;
  do {
    lVar2 = 0;
    do {
      *(double *)((long)__ptr + lVar2 * 8 + lVar1 * 8000) =
           (double)(((int)lVar1 + 1000) - (int)lVar2) / 1000.0;
      lVar2 = lVar2 + 1;
    } while (lVar2 != 1000);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 1000);
  kernel_adi(500,1000,__ptr,__ptr_00,__ptr_01,__ptr_02);
  if ((0x2a < param_1) && (**param_2 == '\0')) {
    print_array(1000,__ptr);
  }
  free(__ptr);
  free(__ptr_00);
  free(__ptr_01);
  free(__ptr_02);
  return 0;
}


