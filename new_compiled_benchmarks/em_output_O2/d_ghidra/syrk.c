#include "syrk.h"



void kernel_syrk(double param_1,double param_2,uint param_3,uint param_4,long param_5,long param_6)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  bool bVar17;
  double dVar18;
  
  if (0 < (int)param_3) {
    uVar12 = 1;
    uVar13 = 0;
    do {
      uVar14 = uVar13 * 0x2580 + param_5;
      if (3 < uVar12) {
        uVar7 = uVar12 & 0x7ffffffffffffffc;
        uVar15 = 0;
        do {
          pdVar1 = (double *)(uVar14 + uVar15 * 8);
          pdVar2 = (double *)(uVar14 + 0x10 + uVar15 * 8);
          dVar18 = pdVar2[1];
          *(undefined (*) [16])(uVar14 + uVar15 * 8) =
               CONCAT88(pdVar1[1] * param_2,*pdVar1 * param_2);
          *(undefined (*) [16])(uVar14 + 0x10 + uVar15 * 8) =
               CONCAT88(dVar18 * param_2,*pdVar2 * param_2);
          uVar15 = uVar15 + 4;
          if (uVar15 == uVar7) goto joined_r0x001000be;
        } while( true );
      }
      uVar7 = 0;
      do {
        *(double *)(uVar14 + uVar7 * 8) = *(double *)(uVar14 + uVar7 * 8) * param_2;
        uVar7 = uVar7 + 1;
joined_r0x001000be:
      } while (uVar12 != uVar7);
      if (0 < (int)param_4) {
        lVar11 = uVar13 * 8000;
        uVar16 = uVar13 * 0x2588 + param_5 + 8;
        uVar7 = uVar12 & 0x7ffffffffffffffc;
        uVar15 = 0;
        do {
          pdVar1 = (double *)(param_6 + lVar11 + uVar15 * 8);
          if (uVar12 < 6) {
LAB_00100250:
            uVar8 = 0;
LAB_00100253:
            uVar9 = uVar8;
            if ((uVar12 & 1) != 0) {
              *(double *)(uVar14 + uVar8 * 8) =
                   *pdVar1 * param_1 * *(double *)(uVar8 * 8000 + param_6 + uVar15 * 8) +
                   *(double *)(uVar14 + uVar8 * 8);
              uVar9 = uVar8 | 1;
            }
            if (uVar13 != uVar8) {
              do {
                lVar10 = uVar9 * 8000 + param_6;
                *(double *)(uVar14 + uVar9 * 8) =
                     *pdVar1 * param_1 * *(double *)(lVar10 + uVar15 * 8) +
                     *(double *)(uVar14 + uVar9 * 8);
                *(double *)(uVar14 + 8 + uVar9 * 8) =
                     *pdVar1 * param_1 * *(double *)(lVar10 + 8000 + uVar15 * 8) +
                     *(double *)(uVar14 + 8 + uVar9 * 8);
                uVar9 = uVar9 + 2;
              } while (uVar9 != uVar12);
            }
          }
          else {
            bVar17 = uVar14 < lVar11 + 8 + uVar15 * 8 + param_6;
            if (bVar17 && param_6 + uVar15 * 8 < uVar16) goto LAB_00100250;
            uVar8 = 0;
            if (bVar17 && lVar11 + uVar15 * 8 + param_6 < uVar16) goto LAB_00100253;
            dVar18 = *pdVar1 * param_1;
            uVar8 = 0;
            do {
              dVar4 = *(double *)((uVar8 | 2) * 8000 + param_6 + uVar15 * 8);
              dVar5 = *(double *)((uVar8 | 3) * 8000 + param_6 + uVar15 * 8);
              pdVar2 = (double *)(uVar14 + uVar8 * 8);
              pdVar3 = (double *)(uVar14 + 0x10 + uVar8 * 8);
              dVar6 = pdVar3[1];
              *(undefined (*) [16])(uVar14 + uVar8 * 8) =
                   CONCAT88(*(double *)((uVar8 | 1) * 8000 + param_6 + uVar15 * 8) * dVar18 +
                            pdVar2[1],
                            *(double *)(uVar8 * 8000 + param_6 + uVar15 * 8) * dVar18 + *pdVar2);
              *(undefined (*) [16])(uVar14 + 0x10 + uVar8 * 8) =
                   CONCAT88(dVar5 * dVar18 + dVar6,dVar4 * dVar18 + *pdVar3);
              uVar8 = uVar8 + 4;
            } while (uVar8 != uVar7);
            uVar8 = uVar7;
            if (uVar12 != uVar7) goto LAB_00100253;
          }
          uVar15 = uVar15 + 1;
        } while (uVar15 != param_4);
      }
      uVar13 = uVar13 + 1;
      uVar12 = uVar12 + 1;
    } while (uVar13 != param_3);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 submain(int param_1,char **param_2)

{
  double *pdVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  FILE *__stream;
  void *__ptr;
  void *__ptr_00;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  void *pvVar13;
  void *pvVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  bool bVar18;
  int iVar19;
  double dVar20;
  undefined auVar21 [16];
  undefined auVar22 [16];
  
  __ptr = (void *)polybench_alloc_data(0x15f900,8);
  __ptr_00 = (void *)polybench_alloc_data(1200000,8);
  auVar22 = __LCPI1_3;
  lVar10 = 0;
  lVar8 = 0;
  do {
    lVar12 = 0;
    iVar19 = 0;
    do {
      dVar20 = (double)((iVar19 * (int)lVar8 + 1U) % 0x4b0);
      auVar21 = divpd(CONCAT88((double)(int)((ulong)dVar20 >> 0x20),dVar20),auVar22);
      *(undefined (*) [16])((long)__ptr_00 + lVar12 * 8 + lVar8 * 8000) = auVar21;
      auVar21 = __LCPI1_8;
      lVar12 = lVar12 + 2;
      iVar19 = iVar19 + 2;
    } while (lVar12 != 1000);
    lVar8 = lVar8 + 1;
  } while (lVar8 != 0x4b0);
  uVar9 = 0;
  do {
    lVar8 = 0;
    iVar19 = 0;
    do {
      dVar20 = (double)((iVar19 * (int)lVar10 + 2U) % 1000);
      auVar22 = divpd(CONCAT88((double)(int)((ulong)dVar20 >> 0x20),dVar20),auVar21);
      *(undefined (*) [16])((long)__ptr + lVar8 * 8 + lVar10 * 0x2580) = auVar22;
      lVar8 = lVar8 + 2;
      iVar19 = iVar19 + 2;
    } while (lVar8 != 0x4b0);
    lVar10 = lVar10 + 1;
  } while (lVar10 != 0x4b0);
  uVar11 = 1;
  do {
    pvVar13 = (void *)(uVar9 * 0x2580 + (long)__ptr);
    lVar8 = uVar9 * 8000;
    if (3 < uVar11) {
      uVar15 = uVar11 & 0x7ffffffffffffffc;
      uVar17 = 0;
      do {
        pdVar1 = (double *)((long)pvVar13 + uVar17 * 8);
        pdVar2 = (double *)((long)pvVar13 + uVar17 * 8 + 0x10);
        dVar20 = *pdVar2;
        dVar3 = pdVar2[1];
        *(undefined (*) [16])((long)pvVar13 + uVar17 * 8) = CONCAT88(pdVar1[1] * 1.2,*pdVar1 * 1.2);
        pdVar1 = (double *)((long)pvVar13 + uVar17 * 8 + 0x10);
        *pdVar1 = dVar20 * 1.2;
        pdVar1[1] = dVar3 * 1.2;
        uVar17 = uVar17 + 4;
        if (uVar17 == uVar15) goto joined_r0x001005ae;
      } while( true );
    }
    uVar15 = 0;
    do {
      *(double *)((long)pvVar13 + uVar15 * 8) = *(double *)((long)pvVar13 + uVar15 * 8) * 1.2;
      uVar15 = uVar15 + 1;
joined_r0x001005ae:
    } while (uVar11 != uVar15);
                    // WARNING: Read-only address (ram,0x001008f0) is written
                    // WARNING: Read-only address (ram,0x00100940) is written
    pvVar14 = (void *)((long)__ptr + uVar9 * 0x2588 + 8);
    uVar15 = uVar11 & 0x7ffffffffffffffc;
    lVar10 = 0;
    do {
      pdVar1 = (double *)((long)__ptr_00 + lVar10 * 8 + lVar8);
      if (uVar11 < 6) {
LAB_00100612:
        uVar17 = 0;
LAB_00100615:
        uVar16 = uVar17;
        if ((uVar11 & 1) != 0) {
          *(double *)((long)pvVar13 + uVar17 * 8) =
               *pdVar1 * 1.5 * *(double *)((long)__ptr_00 + lVar10 * 8 + uVar17 * 8000) +
               *(double *)((long)pvVar13 + uVar17 * 8);
          uVar16 = uVar17 | 1;
        }
        if (uVar9 != uVar17) {
          do {
            *(double *)((long)pvVar13 + uVar16 * 8) =
                 *pdVar1 * 1.5 * *(double *)((long)__ptr_00 + lVar10 * 8 + uVar16 * 8000) +
                 *(double *)((long)pvVar13 + uVar16 * 8);
            *(double *)((long)pvVar13 + uVar16 * 8 + 8) =
                 *pdVar1 * 1.5 * *(double *)((long)__ptr_00 + lVar10 * 8 + uVar16 * 8000 + 8000) +
                 *(double *)((long)pvVar13 + uVar16 * 8 + 8);
            uVar16 = uVar16 + 2;
          } while (uVar16 != uVar11);
        }
      }
      else {
        bVar18 = pvVar13 < (void *)(lVar8 + 8 + lVar10 * 8 + (long)__ptr_00);
        if (bVar18 && (void *)((long)__ptr_00 + lVar10 * 8) < pvVar14) goto LAB_00100612;
        uVar17 = 0;
        if (bVar18 && (void *)(lVar8 + lVar10 * 8 + (long)__ptr_00) < pvVar14) goto LAB_00100615;
        dVar20 = *pdVar1 * 1.5;
        uVar17 = 0;
        do {
          dVar3 = *(double *)((long)__ptr_00 + lVar10 * 8 + (uVar17 | 1) * 8000);
          dVar4 = *(double *)((long)__ptr_00 + lVar10 * 8 + (uVar17 | 2) * 8000);
          dVar5 = *(double *)((long)__ptr_00 + lVar10 * 8 + (uVar17 | 3) * 8000);
          auVar22 = *(undefined (*) [16])((long)pvVar13 + uVar17 * 8);
          pdVar2 = (double *)((long)pvVar13 + uVar17 * 8 + 0x10);
          dVar6 = *pdVar2;
          dVar7 = pdVar2[1];
          pdVar2 = (double *)((long)pvVar13 + uVar17 * 8);
          *pdVar2 = *(double *)((long)__ptr_00 + lVar10 * 8 + uVar17 * 8000) * dVar20 +
                    SUB168(auVar22,0);
          pdVar2[1] = dVar3 * dVar20 + SUB168(auVar22 >> 0x40,0);
          *(undefined (*) [16])((long)pvVar13 + uVar17 * 8 + 0x10) =
               CONCAT88(dVar5 * dVar20 + dVar7,dVar4 * dVar20 + dVar6);
          uVar17 = uVar17 + 4;
        } while (uVar17 != uVar15);
        uVar17 = uVar15;
        if (uVar11 != uVar15) goto LAB_00100615;
      }
      __stream = _DAT_18c3d8d48388b4c;
      lVar10 = lVar10 + 1;
    } while (lVar10 != 1000);
    uVar9 = uVar9 + 1;
    uVar11 = uVar11 + 1;
    if (uVar9 == 0x4b0) {
      if ((0x2a < param_1) && (**param_2 == '\0')) {
        fwrite(_L_str_1,0x16,1,_DAT_18c3d8d48388b4c);
        lVar8 = 0;
        fprintf(__stream,"begin dump: %s",&_L_str_3);
        do {
          lVar10 = 0;
          do {
            if (((uint)(((int)lVar10 + (int)lVar8 * 0x4b0) * -0x33333333) >> 2 |
                (int)lVar10 * 0x40000000) < 0xccccccd) {
              fputc(10,__stream);
            }
            fprintf(__stream,"%0.2lf ",*(undefined8 *)((long)__ptr + lVar10 * 8 + lVar8 * 0x2580));
            lVar10 = lVar10 + 1;
          } while (lVar10 != 0x4b0);
          lVar8 = lVar8 + 1;
        } while (lVar8 != 0x4b0);
        fprintf(__stream,"\nend   dump: %s\n",&_L_str_3);
        fwrite("==END   DUMP_ARRAYS==\n",0x16,1,__stream);
      }
      free(__ptr);
      free(__ptr_00);
      return 0;
    }
  } while( true );
}


