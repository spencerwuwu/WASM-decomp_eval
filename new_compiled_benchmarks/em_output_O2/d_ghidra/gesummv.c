#include "gesummv.h"



void kernel_gesummv(double param_1,double param_2,uint param_3,long param_4,long param_5,
                   long param_6,long param_7,long param_8)

{
  ulong uVar1;
  ulong uVar2;
  double dVar3;
  
  if (0 < (int)param_3) {
    uVar1 = 0;
    do {
      *(undefined8 *)(param_6 + uVar1 * 8) = 0;
      *(undefined8 *)(param_8 + uVar1 * 8) = 0;
      uVar2 = 0;
      do {
        *(double *)(param_6 + uVar1 * 8) =
             *(double *)(param_4 + uVar1 * 0x28a0 + uVar2 * 8) * *(double *)(param_7 + uVar2 * 8) +
             *(double *)(param_6 + uVar1 * 8);
        dVar3 = *(double *)(uVar1 * 0x28a0 + param_5 + uVar2 * 8) * *(double *)(param_7 + uVar2 * 8)
                + *(double *)(param_8 + uVar1 * 8);
        *(double *)(param_8 + uVar1 * 8) = dVar3;
        uVar2 = uVar2 + 1;
      } while (uVar2 != param_3);
      *(double *)(param_8 + uVar1 * 8) =
           *(double *)(param_6 + uVar1 * 8) * param_1 + dVar3 * param_2;
      uVar1 = uVar1 + 1;
    } while (uVar1 != param_3);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 submain(int param_1,char **param_2)

{
  void *pvVar1;
  undefined auVar2 [16];
  FILE *__stream;
  void *__ptr;
  void *__ptr_00;
  void *__ptr_01;
  void *__ptr_02;
  void *__ptr_03;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  double dVar9;
  undefined auVar10 [16];
  undefined auVar11 [16];
  
  __ptr = (void *)polybench_alloc_data(0x19c990,8);
  __ptr_00 = (void *)polybench_alloc_data(0x19c990,8);
  __ptr_01 = (void *)polybench_alloc_data(0x514,8);
  __ptr_02 = (void *)polybench_alloc_data(0x514,8);
  __ptr_03 = (void *)polybench_alloc_data(0x514,8);
  auVar2 = __LCPI1_4;
  lVar3 = 0;
  lVar5 = 0;
  do {
    iVar4 = (int)lVar5;
    *(double *)((long)__ptr_02 + lVar5 * 8) = (double)iVar4 / 1300.0;
    lVar6 = lVar5 * 0x28a0;
    pvVar1 = (void *)(lVar6 + (long)__ptr);
    if ((ulong)((long)__ptr_00 + (lVar6 - (long)pvVar1)) < 0x10) {
      lVar7 = 0;
      do {
        iVar8 = (int)lVar7 * iVar4;
        *(double *)((long)pvVar1 + lVar7 * 8) =
             (double)(((iVar8 + 1U) / 0x514) * -0x514 + iVar8 + 1) / 1300.0;
        *(double *)((long)__ptr_00 + lVar7 * 8 + lVar6) =
             (double)(iVar8 + ((iVar8 + 2U) / 0x514) * -0x514 + 2) / 1300.0;
        lVar7 = lVar7 + 1;
      } while (lVar7 != 0x514);
    }
    else {
      lVar7 = 0;
      iVar8 = 0;
      do {
        dVar9 = (double)((iVar8 * iVar4 + 1U) % 0x514);
        auVar11 = divpd(CONCAT88((double)(int)((ulong)dVar9 >> 0x20),dVar9),auVar2);
        dVar9 = (double)((iVar8 * iVar4 + 2U) % 0x514);
        auVar10 = divpd(CONCAT88((double)(int)((ulong)dVar9 >> 0x20),dVar9),auVar2);
        *(undefined (*) [16])((long)pvVar1 + lVar7 * 8) = auVar11;
        *(undefined (*) [16])((long)__ptr_00 + lVar7 * 8 + lVar6) = auVar10;
        lVar7 = lVar7 + 2;
        iVar8 = iVar8 + 2;
      } while (lVar7 != 0x514);
    }
    lVar5 = lVar5 + 1;
  } while (lVar5 != 0x514);
  do {
    *(undefined8 *)((long)__ptr_01 + lVar3 * 8) = 0;
    *(undefined8 *)((long)__ptr_03 + lVar3 * 8) = 0;
    lVar5 = 0;
    do {
      *(double *)((long)__ptr_01 + lVar3 * 8) =
           *(double *)((long)__ptr + lVar5 * 8 + lVar3 * 0x28a0) *
           *(double *)((long)__ptr_02 + lVar5 * 8) + *(double *)((long)__ptr_01 + lVar3 * 8);
      dVar9 = *(double *)((long)__ptr_00 + lVar5 * 8 + lVar3 * 0x28a0) *
              *(double *)((long)__ptr_02 + lVar5 * 8) + *(double *)((long)__ptr_03 + lVar3 * 8);
      *(double *)((long)__ptr_03 + lVar3 * 8) = dVar9;
      lVar5 = lVar5 + 1;
    } while (lVar5 != 0x514);
    *(double *)((long)__ptr_03 + lVar3 * 8) =
         *(double *)((long)__ptr_01 + lVar3 * 8) * 1.5 + dVar9 * 1.2;
    __stream = _DAT_48240c8948088b48;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x514);
  if ((0x2a < param_1) && (**param_2 == '\0')) {
    fwrite("==BEGIN DUMP_ARRAYS==\n",0x16,1,_DAT_48240c8948088b48);
    lVar3 = 0;
    fprintf(__stream,"begin dump: %s",&_L_str_3);
    do {
      if ((ushort)((ushort)((short)lVar3 * -0x3333) >> 2 | (short)lVar3 * 0x4000) < 0xccd) {
        fputc(10,__stream);
      }
      fprintf(__stream,"%0.2lf ",*(undefined8 *)((long)__ptr_03 + lVar3 * 8));
      lVar3 = lVar3 + 1;
    } while (lVar3 != 0x514);
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


