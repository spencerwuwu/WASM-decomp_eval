#include "mvt.h"



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 submain(int param_1,char **param_2)

{
  ulong uVar1;
  int iVar2;
  undefined auVar3 [16];
  FILE *__stream;
  void *__ptr;
  void *__ptr_00;
  void *__ptr_01;
  void *__ptr_02;
  void *__ptr_03;
  long lVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  double dVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar14;
  undefined auVar13 [16];
  
  __ptr = (void *)polybench_alloc_data(4000000,8);
  __ptr_00 = (void *)polybench_alloc_data(2000,8);
  __ptr_01 = (void *)polybench_alloc_data(2000,8);
  __ptr_02 = (void *)polybench_alloc_data(2000,8);
  __ptr_03 = (void *)polybench_alloc_data(2000,8);
  auVar3 = __LCPI0_4;
  lVar4 = 0;
  uVar8 = 0;
  do {
    iVar5 = (int)uVar8;
    *(double *)((long)__ptr_00 + uVar8 * 8) = (double)iVar5 / 2000.0;
    uVar1 = uVar8 + 1;
    dVar9 = 0.0;
    if (uVar1 != 2000) {
      dVar9 = (double)(int)uVar1 / 2000.0;
    }
    iVar2 = iVar5 + 3;
    if (0x7cc < uVar8) {
      iVar2 = iVar5 + -0x7cd;
    }
    *(double *)((long)__ptr_01 + uVar8 * 8) = dVar9;
    *(double *)((long)__ptr_02 + uVar8 * 8) = (double)iVar2 / 2000.0;
    iVar2 = iVar5 + 4;
    if (0x7cb < uVar8) {
      iVar2 = iVar5 + -0x7cc;
    }
    *(double *)((long)__ptr_03 + uVar8 * 8) = (double)iVar2 / 2000.0;
    lVar7 = 0;
    uVar10 = 0;
    uVar11 = 1;
    do {
      uVar12 = (uVar10 & 0xffffffff) * (uVar8 & 0xffffffff);
      uVar14 = (uVar11 & 0xffffffff) * (uVar8 & 0xffffffff);
      auVar13 = divpd(CONCAT88((double)((int)uVar14 + (int)((uVar14 & 0xffffffff) / 2000) * -2000),
                               (double)((int)uVar12 + (int)((uVar12 & 0xffffffff) / 2000) * -2000)),
                      auVar3);
      *(undefined (*) [16])((long)__ptr + lVar7 * 8 + uVar8 * 16000) = auVar13;
      lVar7 = lVar7 + 2;
      uVar10 = uVar10 + 2;
      uVar11 = uVar11 + 2;
    } while (lVar7 != 2000);
    uVar8 = uVar1;
  } while (uVar1 != 2000);
  lVar7 = 0;
  do {
    dVar9 = *(double *)((long)__ptr_00 + lVar4 * 8);
    lVar6 = 0;
    do {
      dVar9 = *(double *)((long)__ptr + lVar6 * 8 + lVar4 * 16000) *
              *(double *)((long)__ptr_02 + lVar6 * 8) + dVar9;
      *(double *)((long)__ptr_00 + lVar4 * 8) = dVar9;
      uVar8 = lVar6 * 8 | 8;
      dVar9 = *(double *)((long)__ptr + uVar8 + lVar4 * 16000) * *(double *)((long)__ptr_02 + uVar8)
              + dVar9;
      *(double *)((long)__ptr_00 + lVar4 * 8) = dVar9;
      lVar6 = lVar6 + 2;
    } while (lVar6 != 2000);
    lVar4 = lVar4 + 1;
  } while (lVar4 != 2000);
  do {
    dVar9 = *(double *)((long)__ptr_01 + lVar7 * 8);
    uVar8 = 0;
    do {
      dVar9 = *(double *)((long)__ptr + lVar7 * 8 + uVar8 * 16000) *
              *(double *)((long)__ptr_03 + uVar8 * 8) + dVar9;
      *(double *)((long)__ptr_01 + lVar7 * 8) = dVar9;
      dVar9 = *(double *)((long)__ptr + lVar7 * 8 + (uVar8 | 1) * 16000) *
              *(double *)((long)__ptr_03 + (uVar8 | 1) * 8) + dVar9;
      *(double *)((long)__ptr_01 + lVar7 * 8) = dVar9;
      __stream = _DAT_48240c8948088b48;
      uVar8 = uVar8 + 2;
    } while (uVar8 != 2000);
    lVar7 = lVar7 + 1;
  } while (lVar7 != 2000);
  if ((0x2a < param_1) && (**param_2 == '\0')) {
    fwrite("==BEGIN DUMP_ARRAYS==\n",0x16,1,_DAT_48240c8948088b48);
    lVar4 = 0;
    fprintf(__stream,"begin dump: %s",&_L_str_3);
    do {
      if ((ushort)((ushort)((short)lVar4 * -0x3333) >> 2 | (short)lVar4 * 0x4000) < 0xccd) {
        fputc(10,__stream);
      }
      fprintf(__stream,"%0.2lf ",*(undefined8 *)((long)__ptr_00 + lVar4 * 8));
      lVar4 = lVar4 + 1;
    } while (lVar4 != 2000);
    lVar4 = 0;
    fprintf(__stream,"\nend   dump: %s\n",&_L_str_3);
    fprintf(__stream,"begin dump: %s",&_L_str_7);
    do {
      if ((ushort)((ushort)((short)lVar4 * -0x3333) >> 2 | (short)lVar4 * 0x4000) < 0xccd) {
        fputc(10,__stream);
      }
      fprintf(__stream,"%0.2lf ",*(undefined8 *)((long)__ptr_01 + lVar4 * 8));
      lVar4 = lVar4 + 1;
    } while (lVar4 != 2000);
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


