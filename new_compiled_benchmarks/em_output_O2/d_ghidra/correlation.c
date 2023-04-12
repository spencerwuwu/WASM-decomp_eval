#include "correlation.h"



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 submain(int param_1,char **param_2)

{
  double *pdVar1;
  double *pdVar2;
  FILE *__stream;
  void *__ptr;
  void *__ptr_00;
  void *__ptr_01;
  void *__ptr_02;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  void *pvVar7;
  void *pvVar8;
  long lVar9;
  double dVar10;
  undefined auVar11 [16];
  int iVar12;
  double dVar13;
  undefined auVar14 [16];
  
  __ptr = (void *)polybench_alloc_data(0x19a280,8);
  __ptr_00 = (void *)polybench_alloc_data(0x15f900,8);
  __ptr_01 = (void *)polybench_alloc_data(0x4b0,8);
  __ptr_02 = (void *)polybench_alloc_data(0x4b0,8);
  auVar11 = __LCPI0_1;
  lVar3 = 0;
  lVar4 = 0;
  do {
    dVar10 = (double)(int)lVar4;
    lVar6 = 0;
    iVar12 = 0;
    do {
      dVar13 = (double)(iVar12 * (int)lVar4);
      auVar14 = divpd(CONCAT88((double)(int)((ulong)dVar13 >> 0x20),dVar13),auVar11);
      pdVar1 = (double *)((long)__ptr + lVar6 * 8 + lVar4 * 0x2580);
      *pdVar1 = SUB168(auVar14,0) + dVar10;
      pdVar1[1] = SUB168(auVar14 >> 0x40,0) + dVar10;
      lVar6 = lVar6 + 2;
      iVar12 = iVar12 + 2;
    } while (lVar6 != 0x4b0);
    lVar4 = lVar4 + 1;
  } while (lVar4 != 0x578);
  lVar4 = 0;
  do {
    *(undefined8 *)((long)__ptr_01 + lVar3 * 8) = 0;
    dVar10 = 0.0;
    uVar5 = 0;
    do {
      dVar10 = dVar10 + *(double *)((long)__ptr + lVar3 * 8 + uVar5 * 0x2580);
      *(double *)((long)__ptr_01 + lVar3 * 8) = dVar10;
      dVar10 = dVar10 + *(double *)((long)__ptr + lVar3 * 8 + (uVar5 | 1) * 0x2580);
      *(double *)((long)__ptr_01 + lVar3 * 8) = dVar10;
      dVar10 = dVar10 + *(double *)((long)__ptr + lVar3 * 8 + (uVar5 | 2) * 0x2580);
      *(double *)((long)__ptr_01 + lVar3 * 8) = dVar10;
      dVar10 = dVar10 + *(double *)((long)__ptr + lVar3 * 8 + (uVar5 | 3) * 0x2580);
      *(double *)((long)__ptr_01 + lVar3 * 8) = dVar10;
      uVar5 = uVar5 + 4;
    } while (uVar5 != 0x578);
    *(double *)((long)__ptr_01 + lVar3 * 8) = dVar10 / 1400.0;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x4b0);
  do {
    *(undefined8 *)((long)__ptr_02 + lVar4 * 8) = 0;
    dVar10 = 0.0;
    uVar5 = 0;
    do {
      dVar13 = *(double *)((long)__ptr + lVar4 * 8 + uVar5 * 0x2580) -
               *(double *)((long)__ptr_01 + lVar4 * 8);
      dVar10 = dVar13 * dVar13 + dVar10;
      *(double *)((long)__ptr_02 + lVar4 * 8) = dVar10;
      dVar13 = *(double *)((long)__ptr + lVar4 * 8 + (uVar5 | 1) * 0x2580) -
               *(double *)((long)__ptr_01 + lVar4 * 8);
      dVar10 = dVar13 * dVar13 + dVar10;
      *(double *)((long)__ptr_02 + lVar4 * 8) = dVar10;
      uVar5 = uVar5 + 2;
    } while (uVar5 != 0x578);
    dVar10 = dVar10 / 1400.0;
    if (dVar10 < 0.0) {
      dVar10 = sqrt(dVar10);
    }
    else {
      dVar10 = SQRT(dVar10);
    }
    *(ulong *)((long)__ptr_02 + lVar4 * 8) =
         ~-(ulong)(0.1 < dVar10) | (ulong)dVar10 & -(ulong)(0.1 < dVar10);
    lVar4 = lVar4 + 1;
  } while (lVar4 != 0x4b0);
  lVar3 = 0;
  lVar4 = 0;
  do {
    pvVar8 = (void *)((long)__ptr + lVar4 * 0x2580 + 0x2580);
    pvVar7 = (void *)(lVar4 * 0x2580 + (long)__ptr);
    if (pvVar7 < (void *)((long)__ptr_01 + 0x2580U) && __ptr_01 < pvVar8) {
      lVar6 = 0;
LAB_001003a0:
      do {
        dVar10 = *(double *)((long)pvVar7 + lVar6 * 8) - *(double *)((long)__ptr_01 + lVar6 * 8);
        *(double *)((long)pvVar7 + lVar6 * 8) = dVar10;
        *(double *)((long)pvVar7 + lVar6 * 8) =
             dVar10 / (*(double *)((long)__ptr_02 + lVar6 * 8) * 37.41657386773942);
        uVar5 = lVar6 * 8 | 8;
        dVar10 = *(double *)(uVar5 + (long)pvVar7) - *(double *)((long)__ptr_01 + uVar5);
        *(double *)(uVar5 + (long)pvVar7) = dVar10;
        *(double *)(uVar5 + (long)pvVar7) =
             dVar10 / (*(double *)((long)__ptr_02 + uVar5) * 37.41657386773942);
        lVar6 = lVar6 + 2;
      } while (lVar6 != 0x4b0);
    }
    else {
      lVar9 = 0;
      lVar6 = 0;
      if (pvVar7 < (void *)((long)__ptr_02 + 0x2580U) && __ptr_02 < pvVar8) goto LAB_001003a0;
      do {
        pdVar1 = (double *)((long)__ptr_01 + lVar9 * 8);
        pdVar2 = (double *)((long)pvVar7 + lVar9 * 8);
        auVar11 = CONCAT88(pdVar2[1] - pdVar1[1],*pdVar2 - *pdVar1);
        *(undefined (*) [16])((long)pvVar7 + lVar9 * 8) = auVar11;
        pdVar1 = (double *)((long)__ptr_02 + lVar9 * 8);
        auVar11 = divpd(auVar11,CONCAT88(pdVar1[1] * 37.41657386773942,*pdVar1 * 37.41657386773942))
        ;
        *(undefined (*) [16])((long)pvVar7 + lVar9 * 8) = auVar11;
        uVar5 = lVar9 * 8 | 0x10;
        auVar11 = CONCAT88(((double *)(uVar5 + (long)pvVar7))[1] -
                           ((double *)((long)__ptr_01 + uVar5))[1],
                           *(double *)(uVar5 + (long)pvVar7) - *(double *)((long)__ptr_01 + uVar5));
        *(undefined (*) [16])(uVar5 + (long)pvVar7) = auVar11;
        auVar11 = divpd(auVar11,CONCAT88(((double *)((long)__ptr_02 + uVar5))[1] * 37.41657386773942
                                         ,*(double *)((long)__ptr_02 + uVar5) * 37.41657386773942));
        *(undefined (*) [16])(uVar5 + (long)pvVar7) = auVar11;
        lVar9 = lVar9 + 4;
      } while (lVar9 != 0x4b0);
    }
    lVar4 = lVar4 + 1;
    if (lVar4 == 0x578) {
      lVar4 = 1;
      do {
        *(undefined8 *)((long)__ptr_00 + lVar3 * 0x2588) = 0x3ff0000000000000;
        lVar6 = lVar4;
        do {
          pdVar1 = (double *)((long)__ptr_00 + lVar6 * 8 + lVar3 * 0x2580);
          *(undefined8 *)((long)__ptr_00 + lVar6 * 8 + lVar3 * 0x2580) = 0;
          dVar10 = 0.0;
          uVar5 = 0;
          do {
            dVar10 = *(double *)((long)__ptr + lVar3 * 8 + uVar5 * 0x2580) *
                     *(double *)((long)__ptr + lVar6 * 8 + uVar5 * 0x2580) + dVar10;
            *pdVar1 = dVar10;
            dVar10 = *(double *)((long)__ptr + lVar3 * 8 + (uVar5 | 1) * 0x2580) *
                     *(double *)((long)__ptr + lVar6 * 8 + (uVar5 | 1) * 0x2580) + dVar10;
            *pdVar1 = dVar10;
            uVar5 = uVar5 + 2;
          } while (uVar5 != 0x578);
          *(double *)((long)__ptr_00 + lVar3 * 8 + lVar6 * 0x2580) = dVar10;
          lVar6 = lVar6 + 1;
        } while (lVar6 != 0x4b0);
        lVar3 = lVar3 + 1;
        lVar4 = lVar4 + 1;
      } while (lVar3 != 0x4af);
      *(undefined8 *)((long)__ptr_00 + 0xafc7f8) = 0x3ff0000000000000;
      __stream = _DAT_1413d8d48288b4c;
      if ((0x2a < param_1) && (**param_2 == '\0')) {
        fwrite(_L_str_1,0x16,1,_DAT_1413d8d48288b4c);
        lVar3 = 0;
        fprintf(__stream,"begin dump: %s",&_L_str_3);
        do {
          lVar4 = 0;
          do {
            if (((uint)(((int)lVar3 * 0x4b0 + (int)lVar4) * -0x33333333) >> 2 |
                (int)lVar4 * 0x40000000) < 0xccccccd) {
              fputc(10,__stream);
            }
            fprintf(__stream,"%0.2lf ",*(undefined8 *)((long)__ptr_00 + lVar4 * 8 + lVar3 * 0x2580))
            ;
            lVar4 = lVar4 + 1;
          } while (lVar4 != 0x4b0);
          lVar3 = lVar3 + 1;
        } while (lVar3 != 0x4b0);
        fprintf(__stream,"\nend   dump: %s\n",&_L_str_3);
        fwrite("==END   DUMP_ARRAYS==\n",0x16,1,__stream);
      }
      free(__ptr);
      free(__ptr_00);
      free(__ptr_01);
      free(__ptr_02);
      return 0;
    }
  } while( true );
}


