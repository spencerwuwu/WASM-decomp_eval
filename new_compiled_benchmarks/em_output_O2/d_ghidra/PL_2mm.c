#include "PL_2mm.h"



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
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  int iVar13;
  double dVar10;
  long lVar14;
  undefined auVar11 [16];
  undefined auVar12 [16];
  
  __ptr = (void *)polybench_alloc_data(720000,8);
  __ptr_00 = (void *)polybench_alloc_data(880000,8);
  __ptr_01 = (void *)polybench_alloc_data(990000,8);
  __ptr_02 = (void *)polybench_alloc_data(0x107ac0,8);
  __ptr_03 = (void *)polybench_alloc_data(960000,8);
  auVar12 = __LCPI0_3;
  uVar3 = 0;
  uVar2 = 0;
  do {
    lVar4 = 0;
    uVar7 = 1;
    iVar6 = 0;
    do {
      lVar14 = (uVar7 & 0xffffffff) * (uVar2 & 0xffffffff);
      iVar13 = (int)lVar14;
      uVar9 = iVar6 * (int)uVar2 + 1;
      dVar10 = (double)(uVar9 + ((uint)((SUB168(CONCAT412((int)((ulong)lVar14 >> 0x20) + 1,
                                                          CONCAT48(iVar13 + 1,
                                                                   CONCAT44(iVar13 + 1,uVar9))) >>
                                                0x40,0) & 0xffffffff) * 0x51eb851f >> 8) &
                                 0xff000000 | uVar9 / 800) * -800);
      auVar11 = divpd(CONCAT88((double)(int)((ulong)dVar10 >> 0x20),dVar10),auVar12);
      *(undefined (*) [16])((long)__ptr_00 + lVar4 * 8 + uVar2 * 0x2260) = auVar11;
      auVar11 = __LCPI0_7;
      lVar4 = lVar4 + 2;
      iVar6 = iVar6 + 2;
      uVar7 = uVar7 + 2;
    } while (lVar4 != 0x44c);
    uVar2 = uVar2 + 1;
  } while (uVar2 != 800);
  lVar4 = 0;
  do {
    lVar5 = 0;
    lVar14 = 0;
    lVar8 = 1;
    do {
      uVar2 = (lVar14 + 1U & 0xffffffff) * (uVar3 & 0xffffffff);
      uVar7 = (lVar8 - SUB168(CONCAT412(0xffffffff,CONCAT48(0xffffffff,0xffffffffffffffff)) >> 0x40,
                              0) & 0xffffffffU) * (uVar3 & 0xffffffff);
      auVar12 = divpd(CONCAT88((double)((int)uVar7 + (int)((uVar7 & 0xffffffff) / 900) * -900),
                               (double)((int)uVar2 + (int)((uVar2 & 0xffffffff) / 900) * -900)),
                      auVar11);
      *(undefined (*) [16])((long)__ptr_01 + lVar5 * 8 + uVar3 * 0x1c20) = auVar12;
      auVar12 = __LCPI0_11;
      lVar5 = lVar5 + 2;
      lVar14 = lVar14 + 2;
      lVar8 = lVar8 + 2;
    } while (lVar5 != 900);
    uVar3 = uVar3 + 1;
  } while (uVar3 != 0x44c);
  lVar14 = 0;
  do {
    lVar8 = 0;
    iVar6 = 0;
    do {
      dVar10 = (double)(((iVar6 + 3) * (int)lVar4 + 1U) % 0x4b0);
      auVar11 = divpd(CONCAT88((double)(int)((ulong)dVar10 >> 0x20),dVar10),auVar12);
      *(undefined (*) [16])((long)__ptr_02 + lVar8 * 8 + lVar4 * 0x2580) = auVar11;
      auVar11 = __LCPI0_14;
      lVar8 = lVar8 + 2;
      iVar6 = iVar6 + 2;
    } while (lVar8 != 0x4b0);
    lVar4 = lVar4 + 1;
  } while (lVar4 != 900);
  lVar4 = 0;
  do {
    lVar8 = 0;
    iVar6 = 0;
    do {
      iVar6 = iVar6 + 2;
      dVar10 = (double)((uint)(iVar6 * (int)lVar14) % 0x44c);
      auVar12 = divpd(CONCAT88((double)(int)((ulong)dVar10 >> 0x20),dVar10),auVar11);
      *(undefined (*) [16])((long)__ptr_03 + lVar8 * 8 + lVar14 * 0x2580) = auVar12;
      lVar8 = lVar8 + 2;
    } while (lVar8 != 0x4b0);
    lVar14 = lVar14 + 1;
  } while (lVar14 != 800);
  lVar14 = 0;
  do {
    lVar8 = 0;
    do {
      pdVar1 = (double *)((long)__ptr + lVar8 * 8 + lVar4 * 0x1c20);
      *(undefined8 *)((long)__ptr + lVar8 * 8 + lVar4 * 0x1c20) = 0;
      auVar12 = (undefined  [16])0x0;
      uVar2 = 0;
      do {
        dVar10 = *(double *)((long)__ptr_00 + uVar2 * 8 + lVar4 * 0x2260) * 1.5 *
                 *(double *)((long)__ptr_01 + lVar8 * 8 + uVar2 * 0x1c20) + SUB168(auVar12,0);
        *pdVar1 = dVar10;
        dVar10 = *(double *)((long)__ptr_00 + (uVar2 | 1) * 8 + lVar4 * 0x2260) * 1.5 *
                 *(double *)((long)__ptr_01 + lVar8 * 8 + (uVar2 | 1) * 0x1c20) + dVar10;
        auVar12 = ZEXT816((ulong)dVar10);
        *pdVar1 = dVar10;
        uVar2 = uVar2 + 2;
      } while (uVar2 != 0x44c);
      lVar8 = lVar8 + 1;
    } while (lVar8 != 900);
    lVar4 = lVar4 + 1;
  } while (lVar4 != 800);
  do {
    lVar4 = 0;
    do {
      pdVar1 = (double *)((long)__ptr_03 + lVar4 * 8 + lVar14 * 0x2580);
      dVar10 = *(double *)((long)__ptr_03 + lVar4 * 8 + lVar14 * 0x2580) * 1.2;
      *(double *)((long)__ptr_03 + lVar4 * 8 + lVar14 * 0x2580) = dVar10;
      uVar2 = 0;
      do {
        dVar10 = *(double *)((long)__ptr + uVar2 * 8 + lVar14 * 0x1c20) *
                 *(double *)((long)__ptr_02 + lVar4 * 8 + uVar2 * 0x2580) + dVar10;
        *pdVar1 = dVar10;
        dVar10 = *(double *)((long)__ptr + (uVar2 | 1) * 8 + lVar14 * 0x1c20) *
                 *(double *)((long)__ptr_02 + lVar4 * 8 + (uVar2 | 1) * 0x2580) + dVar10;
        *pdVar1 = dVar10;
        __stream = _DAT_1fe3d8d48288b48;
        uVar2 = uVar2 + 2;
      } while (uVar2 != 900);
      lVar4 = lVar4 + 1;
    } while (lVar4 != 0x4b0);
    lVar14 = lVar14 + 1;
  } while (lVar14 != 800);
  if ((0x2a < param_1) && (**param_2 == '\0')) {
    fwrite(_L_str_1,0x16,1,_DAT_1fe3d8d48288b48);
    fprintf(__stream,"begin dump: %s",&_L_str_3);
    lVar4 = 0;
    do {
      lVar14 = 0;
      do {
        if (((uint)(((int)lVar4 * 800 + (int)lVar14) * -0x33333333) >> 2 | (int)lVar14 * 0x40000000)
            < 0xccccccd) {
          fputc(10,__stream);
        }
        fprintf(__stream,"%0.2lf ",*(undefined8 *)((long)__ptr_03 + lVar14 * 8 + lVar4 * 0x2580));
        lVar14 = lVar14 + 1;
      } while (lVar14 != 0x4b0);
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
  return 0;
}


