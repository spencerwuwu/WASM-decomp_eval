#include "PL_3mm.h"



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 submain(int param_1,char **param_2)

{
  double *pdVar1;
  FILE *__stream;
  void *__ptr;
  void *__ptr_00;
  void *__ptr_01;
  void *__ptr_02;
  void *__ptr_03;
  void *__ptr_04;
  void *__ptr_05;
  ulong uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  int iVar10;
  double dVar8;
  long lVar11;
  undefined auVar9 [16];
  undefined auVar12 [16];
  
  __ptr = (void *)polybench_alloc_data(720000,8);
  __ptr_00 = (void *)polybench_alloc_data(800000,8);
  __ptr_01 = (void *)polybench_alloc_data(900000,8);
  __ptr_02 = (void *)polybench_alloc_data(990000,8);
  __ptr_03 = (void *)polybench_alloc_data(0x107ac0,8);
  __ptr_04 = (void *)polybench_alloc_data(0x142440,8);
  __ptr_05 = (void *)polybench_alloc_data(880000,8);
  auVar12 = __LCPI0_3;
  lVar4 = 0;
  uVar2 = 0;
  do {
    lVar3 = 0;
    uVar6 = 1;
    iVar5 = 0;
    do {
      lVar11 = (uVar6 & 0xffffffff) * (uVar2 & 0xffffffff);
      iVar10 = (int)lVar11;
      uVar7 = iVar5 * (int)uVar2 + 1;
      dVar8 = (double)(uVar7 + ((uint)((SUB168(CONCAT412((int)((ulong)lVar11 >> 0x20) + 1,
                                                         CONCAT48(iVar10 + 1,
                                                                  CONCAT44(iVar10 + 1,uVar7))) >>
                                               0x40,0) & 0xffffffff) * 0x51eb851f >> 8) & 0xff000000
                               | uVar7 / 800) * -800);
      auVar9 = divpd(CONCAT88((double)(int)((ulong)dVar8 >> 0x20),dVar8),auVar12);
      *(undefined (*) [16])((long)__ptr_00 + lVar3 * 8 + uVar2 * 8000) = auVar9;
      auVar9 = __LCPI0_8;
      lVar3 = lVar3 + 2;
      iVar5 = iVar5 + 2;
      uVar6 = uVar6 + 2;
    } while (lVar3 != 1000);
    uVar2 = uVar2 + 1;
  } while (uVar2 != 800);
  lVar3 = 0;
  do {
    lVar11 = 0;
    iVar5 = 0;
    do {
      dVar8 = (double)(((iVar5 + 1) * (int)lVar4 + 2U) % 900);
      auVar12 = divpd(CONCAT88((double)(int)((ulong)dVar8 >> 0x20),dVar8),auVar9);
      *(undefined (*) [16])((long)__ptr_01 + lVar11 * 8 + lVar4 * 0x1c20) = auVar12;
      auVar12 = __LCPI0_12;
      lVar11 = lVar11 + 2;
      iVar5 = iVar5 + 2;
    } while (lVar11 != 900);
    lVar4 = lVar4 + 1;
  } while (lVar4 != 1000);
  lVar4 = 0;
  do {
    lVar11 = 0;
    iVar5 = 0;
    do {
      dVar8 = (double)((uint)((iVar5 + 3) * (int)lVar3) % 0x44c);
      auVar9 = divpd(CONCAT88((double)(int)((ulong)dVar8 >> 0x20),dVar8),auVar12);
      *(undefined (*) [16])((long)__ptr_03 + lVar11 * 8 + lVar3 * 0x2580) = auVar9;
      auVar9 = __LCPI0_15;
      lVar11 = lVar11 + 2;
      iVar5 = iVar5 + 2;
    } while (lVar11 != 0x4b0);
    lVar3 = lVar3 + 1;
  } while (lVar3 != 900);
  lVar3 = 0;
  do {
    lVar11 = 0;
    iVar5 = 0;
    do {
      iVar5 = iVar5 + 2;
      dVar8 = (double)((iVar5 * (int)lVar4 + 2U) % 1000);
      auVar12 = divpd(CONCAT88((double)(int)((ulong)dVar8 >> 0x20),dVar8),auVar9);
      *(undefined (*) [16])((long)__ptr_04 + lVar11 * 8 + lVar4 * 0x2260) = auVar12;
      lVar11 = lVar11 + 2;
    } while (lVar11 != 0x44c);
    lVar4 = lVar4 + 1;
  } while (lVar4 != 0x4b0);
  lVar4 = 0;
  do {
    lVar11 = 0;
    do {
      pdVar1 = (double *)((long)__ptr + lVar11 * 8 + lVar3 * 0x1c20);
      *(undefined8 *)((long)__ptr + lVar11 * 8 + lVar3 * 0x1c20) = 0;
      auVar12 = (undefined  [16])0x0;
      uVar2 = 0;
      do {
        dVar8 = *(double *)((long)__ptr_00 + uVar2 * 8 + lVar3 * 8000) *
                *(double *)((long)__ptr_01 + lVar11 * 8 + uVar2 * 0x1c20) + SUB168(auVar12,0);
        *pdVar1 = dVar8;
        dVar8 = *(double *)((long)__ptr_00 + (uVar2 | 1) * 8 + lVar3 * 8000) *
                *(double *)((long)__ptr_01 + lVar11 * 8 + (uVar2 | 1) * 0x1c20) + dVar8;
        auVar12 = ZEXT816((ulong)dVar8);
        *pdVar1 = dVar8;
        uVar2 = uVar2 + 2;
      } while (uVar2 != 1000);
      lVar11 = lVar11 + 1;
    } while (lVar11 != 900);
    lVar3 = lVar3 + 1;
  } while (lVar3 != 800);
  lVar3 = 0;
  do {
    lVar11 = 0;
    do {
      pdVar1 = (double *)((long)__ptr_02 + lVar11 * 8 + lVar4 * 0x2260);
      *(undefined8 *)((long)__ptr_02 + lVar11 * 8 + lVar4 * 0x2260) = 0;
      auVar12 = ZEXT816(0);
      uVar2 = 0;
      do {
        dVar8 = *(double *)((long)__ptr_03 + uVar2 * 8 + lVar4 * 0x2580) *
                *(double *)((long)__ptr_04 + lVar11 * 8 + uVar2 * 0x2260) + SUB168(auVar12,0);
        *pdVar1 = dVar8;
        dVar8 = *(double *)((long)__ptr_03 + (uVar2 | 1) * 8 + lVar4 * 0x2580) *
                *(double *)((long)__ptr_04 + lVar11 * 8 + (uVar2 | 1) * 0x2260) + dVar8;
        auVar12 = ZEXT816((ulong)dVar8);
        *pdVar1 = dVar8;
        uVar2 = uVar2 + 2;
      } while (uVar2 != 0x4b0);
      lVar11 = lVar11 + 1;
    } while (lVar11 != 0x44c);
    lVar4 = lVar4 + 1;
  } while (lVar4 != 900);
  do {
    lVar4 = 0;
    do {
      pdVar1 = (double *)((long)__ptr_05 + lVar4 * 8 + lVar3 * 0x2260);
      *(undefined8 *)((long)__ptr_05 + lVar4 * 8 + lVar3 * 0x2260) = 0;
      auVar12 = ZEXT816(0);
      uVar2 = 0;
      do {
        dVar8 = *(double *)((long)__ptr + uVar2 * 8 + lVar3 * 0x1c20) *
                *(double *)((long)__ptr_02 + lVar4 * 8 + uVar2 * 0x2260) + SUB168(auVar12,0);
        *pdVar1 = dVar8;
        dVar8 = *(double *)((long)__ptr + (uVar2 | 1) * 8 + lVar3 * 0x1c20) *
                *(double *)((long)__ptr_02 + lVar4 * 8 + (uVar2 | 1) * 0x2260) + dVar8;
        auVar12 = ZEXT816((ulong)dVar8);
        *pdVar1 = dVar8;
        __stream = _DAT_48240c8948088b48;
        uVar2 = uVar2 + 2;
      } while (uVar2 != 900);
      lVar4 = lVar4 + 1;
    } while (lVar4 != 0x44c);
    lVar3 = lVar3 + 1;
  } while (lVar3 != 800);
  if ((0x2a < param_1) && (**param_2 == '\0')) {
    fwrite(_L_str_1,0x16,1,_DAT_48240c8948088b48);
    fprintf(__stream,"begin dump: %s",&_L_str_3);
    lVar4 = 0;
    do {
      lVar3 = 0;
      do {
        if (((uint)(((int)lVar4 * 800 + (int)lVar3) * -0x33333333) >> 2 | (int)lVar3 * 0x40000000) <
            0xccccccd) {
          fputc(10,__stream);
        }
        fprintf(__stream,"%0.2lf ",*(undefined8 *)((long)__ptr_05 + lVar3 * 8 + lVar4 * 0x2260));
        lVar3 = lVar3 + 1;
      } while (lVar3 != 0x44c);
      lVar4 = lVar4 + 1;
    } while (lVar4 != 800);
    fprintf(__stream,"\nend   dump: %s\n",&_L_str_3);
    fwrite("==END   DUMP_ARRAYS==\n",0x16,1,__stream);
  }
  free(__ptr);
  free(__ptr_00);
  free(__ptr_01);
  free(__ptr_02);
  free(__ptr_03);
  free(__ptr_04);
  free(__ptr_05);
  return 0;
}


