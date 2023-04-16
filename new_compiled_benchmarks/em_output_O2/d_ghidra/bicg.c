#include "bicg.h"



void kernel_bicg(uint param_1,uint param_2,long param_3,void *param_4,long param_5,long param_6,
                long param_7)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  if (0 < (int)param_1) {
    memset(param_4,0,(ulong)param_1 * 8);
  }
  if (0 < (int)param_2) {
    uVar1 = 0;
    do {
      *(undefined8 *)(param_5 + uVar1 * 8) = 0;
      if (0 < (int)param_1) {
        uVar2 = 0;
        do {
          lVar3 = uVar1 * 0x3b60 + param_3;
          *(double *)((long)param_4 + uVar2 * 8) =
               *(double *)(param_7 + uVar1 * 8) * *(double *)(lVar3 + uVar2 * 8) +
               *(double *)((long)param_4 + uVar2 * 8);
          *(double *)(param_5 + uVar1 * 8) =
               *(double *)(lVar3 + uVar2 * 8) * *(double *)(param_6 + uVar2 * 8) +
               *(double *)(param_5 + uVar1 * 8);
          uVar2 = uVar2 + 1;
        } while (uVar2 != param_1);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 != param_2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 submain(int param_1,char **param_2)

{
  FILE *__stream;
  void *__ptr;
  void *__s;
  void *__ptr_00;
  void *__ptr_01;
  void *__ptr_02;
  ulong uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  undefined auVar6 [16];
  long lVar7;
  ulong uVar8;
  ulong uVar10;
  undefined auVar9 [16];
  
  __ptr = (void *)polybench_alloc_data(0x3ce1f0,8);
  __s = (void *)polybench_alloc_data(0x76c,8);
  __ptr_00 = (void *)polybench_alloc_data(0x834,8);
  __ptr_01 = (void *)polybench_alloc_data(0x76c,8);
  __ptr_02 = (void *)polybench_alloc_data(0x834);
  auVar9 = __LCPI1_1;
  iVar4 = 0;
  iVar5 = 1;
  uVar1 = 0;
  lVar2 = 0;
  do {
    auVar6 = divpd(CONCAT88((double)iVar5,(double)iVar4),auVar9);
    *(undefined (*) [16])((long)__ptr_01 + lVar2 * 8) = auVar6;
    auVar6 = divpd(CONCAT88((double)(int)((ulong)(double)(iVar4 + 2) >> 0x20),(double)(iVar4 + 2)),
                   auVar9);
    *(undefined (*) [16])((long)__ptr_01 + (lVar2 * 8 | 0x10U)) = auVar6;
    auVar6 = __LCPI1_8;
    lVar2 = lVar2 + 4;
    iVar4 = iVar4 + 4;
    iVar5 = iVar5 + 4;
  } while (lVar2 != 0x76c);
  do {
    *(double *)((long)__ptr_02 + uVar1 * 8) = (double)(int)uVar1 / 2100.0;
    lVar3 = 0;
    lVar2 = 0;
    lVar7 = 1;
    do {
      uVar8 = (lVar2 + 1U & 0xffffffff) * (uVar1 & 0xffffffff);
      uVar10 = (lVar7 - SUB168(CONCAT412(0xffffffff,CONCAT48(0xffffffff,0xffffffffffffffff)) >> 0x40
                               ,0) & 0xffffffffU) * (uVar1 & 0xffffffff);
      auVar9 = divpd(CONCAT88((double)((int)uVar10 + (int)((uVar10 & 0xffffffff) / 0x834) * -0x834),
                              (double)((int)uVar8 + (int)((uVar8 & 0xffffffff) / 0x834) * -0x834)),
                     auVar6);
      *(undefined (*) [16])((long)__ptr + lVar3 * 8 + uVar1 * 0x3b60) = auVar9;
      lVar3 = lVar3 + 2;
      lVar2 = lVar2 + 2;
      lVar7 = lVar7 + 2;
    } while (lVar3 != 0x76c);
    uVar1 = uVar1 + 1;
  } while (uVar1 != 0x834);
  lVar2 = 0;
  memset(__s,0,0x3b60);
  do {
    *(undefined8 *)((long)__ptr_00 + lVar2 * 8) = 0;
    lVar7 = 0;
    do {
      *(double *)((long)__s + lVar7 * 8) =
           *(double *)((long)__ptr_02 + lVar2 * 8) *
           *(double *)((long)__ptr + lVar7 * 8 + lVar2 * 0x3b60) +
           *(double *)((long)__s + lVar7 * 8);
      *(double *)((long)__ptr_00 + lVar2 * 8) =
           *(double *)((long)__ptr + lVar7 * 8 + lVar2 * 0x3b60) *
           *(double *)((long)__ptr_01 + lVar7 * 8) + *(double *)((long)__ptr_00 + lVar2 * 8);
      __stream = _DAT_8244c8948088b48;
      lVar7 = lVar7 + 1;
    } while (lVar7 != 0x76c);
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x834);
  if ((0x2a < param_1) && (**param_2 == '\0')) {
    fwrite(_L_str_1,0x16,1,_DAT_8244c8948088b48);
    lVar2 = 0;
    fprintf(__stream,"begin dump: %s",&_L_str_3);
    do {
      if ((ushort)((ushort)((short)lVar2 * -0x3333) >> 2 | (short)lVar2 * 0x4000) < 0xccd) {
        fputc(10,__stream);
      }
      fprintf(__stream,"%0.2lf ",*(undefined8 *)((long)__s + lVar2 * 8));
      lVar2 = lVar2 + 1;
    } while (lVar2 != 0x76c);
    lVar2 = 0;
    fprintf(__stream,"\nend   dump: %s\n",&_L_str_3);
    fprintf(__stream,"begin dump: %s",&_L_str_7);
    do {
      if ((ushort)((ushort)((short)lVar2 * -0x3333) >> 2 | (short)lVar2 * 0x4000) < 0xccd) {
        fputc(10,__stream);
      }
      fprintf(__stream,"%0.2lf ",*(undefined8 *)((long)__ptr_00 + lVar2 * 8));
      lVar2 = lVar2 + 1;
    } while (lVar2 != 0x834);
    fprintf(__stream,"\nend   dump: %s\n",&_L_str_7);
    fwrite("==END   DUMP_ARRAYS==\n",0x16,1,__stream);
  }
  free(__ptr);
  free(__s);
  free(__ptr_00);
  free(__ptr_01);
  free(__ptr_02);
  return 0;
}


