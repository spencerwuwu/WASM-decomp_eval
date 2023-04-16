#include "syr2k.h"



void kernel_syr2k(double param_1,double param_2,uint param_3,uint param_4,long param_5,long param_6,
                 long param_7)

{
  double *pdVar1;
  double *pdVar2;
  long lVar3;
  double *pdVar4;
  double dVar5;
  double dVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  bool bVar16;
  bool bVar17;
  
  if (0 < (int)param_3) {
    uVar12 = 1;
    uVar7 = 0;
    do {
      uVar10 = uVar7 * 0x2580 + param_5;
      if (3 < uVar12) {
        uVar8 = uVar12 & 0x7ffffffffffffffc;
        uVar11 = 0;
        do {
          pdVar1 = (double *)(uVar10 + uVar11 * 8);
          pdVar2 = (double *)(uVar10 + 0x10 + uVar11 * 8);
          dVar5 = pdVar2[1];
          *(undefined (*) [16])(uVar10 + uVar11 * 8) =
               CONCAT88(pdVar1[1] * param_2,*pdVar1 * param_2);
          *(undefined (*) [16])(uVar10 + 0x10 + uVar11 * 8) =
               CONCAT88(dVar5 * param_2,*pdVar2 * param_2);
          uVar11 = uVar11 + 4;
          if (uVar11 == uVar8) goto joined_r0x001000da;
        } while( true );
      }
      uVar8 = 0;
      do {
        *(double *)(uVar10 + uVar8 * 8) = *(double *)(uVar10 + uVar8 * 8) * param_2;
        uVar8 = uVar8 + 1;
joined_r0x001000da:
      } while (uVar12 != uVar8);
      if (0 < (int)param_4) {
        lVar13 = uVar7 * 8000;
        uVar8 = uVar7 * 0x2588 + param_5 + 8;
        uVar11 = 0;
        do {
          pdVar1 = (double *)(param_7 + lVar13 + uVar11 * 8);
          pdVar2 = (double *)(param_6 + lVar13 + uVar11 * 8);
          if (uVar12 < 8) {
            uVar14 = 0;
          }
          else {
            lVar9 = lVar13 + uVar11 * 8;
            lVar3 = lVar13 + 8 + uVar11 * 8;
            bVar16 = uVar10 < (ulong)(lVar3 + param_6);
            bVar17 = uVar10 < (ulong)(param_7 + lVar3);
            if (((bVar16 && (ulong)(lVar9 + param_6) < uVar8) ||
                (bVar16 && param_6 + uVar11 * 8 < uVar8)) ||
               (param_7 + uVar11 * 8 < uVar8 && bVar17)) {
              uVar14 = 0;
            }
            else {
              uVar14 = 0;
              if (!bVar17 || uVar8 <= (ulong)(param_7 + lVar9)) {
                dVar5 = *pdVar1;
                dVar6 = *pdVar2;
                uVar15 = 0;
                do {
                  lVar9 = (uVar15 | 1) * 8000;
                  pdVar4 = (double *)(uVar10 + uVar15 * 8);
                  *(undefined (*) [16])(uVar10 + uVar15 * 8) =
                       CONCAT88(pdVar4[1] +
                                *(double *)(lVar9 + param_7 + uVar11 * 8) * param_1 * dVar6 +
                                *(double *)(param_6 + lVar9 + uVar11 * 8) * param_1 * dVar5,
                                *pdVar4 + *(double *)(uVar15 * 8000 + param_7 + uVar11 * 8) *
                                          param_1 * dVar6 +
                                          *(double *)(param_6 + uVar15 * 8000 + uVar11 * 8) *
                                          param_1 * dVar5);
                  uVar15 = uVar15 + 2;
                  uVar14 = uVar12 & 0x7ffffffffffffffe;
                  if (uVar15 == (uVar12 & 0x7ffffffffffffffe)) goto joined_r0x0010028c;
                } while( true );
              }
            }
          }
          do {
            *(double *)(uVar10 + uVar14 * 8) =
                 *(double *)(param_6 + uVar14 * 8000 + uVar11 * 8) * param_1 * *pdVar1 +
                 *(double *)(uVar14 * 8000 + param_7 + uVar11 * 8) * param_1 * *pdVar2 +
                 *(double *)(uVar10 + uVar14 * 8);
            uVar14 = uVar14 + 1;
joined_r0x0010028c:
          } while (uVar12 != uVar14);
          uVar11 = uVar11 + 1;
        } while (uVar11 != param_4);
      }
      uVar7 = uVar7 + 1;
      uVar12 = uVar12 + 1;
    } while (uVar7 != param_3);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 submain(int param_1,char **param_2)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  FILE *__s;
  undefined auVar6 [16];
  void *__ptr;
  void *__ptr_00;
  void *__ptr_01;
  ulong uVar7;
  void *pvVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  void *pvVar13;
  long lVar14;
  int iVar15;
  ulong uVar16;
  ulong uVar17;
  bool bVar18;
  bool bVar19;
  undefined auVar20 [16];
  undefined auVar21 [16];
  double dVar22;
  undefined auVar23 [16];
  int iVar24;
  
  __ptr = (void *)polybench_alloc_data(0x15f900,8);
  __ptr_00 = (void *)polybench_alloc_data(1200000,8);
  __ptr_01 = (void *)polybench_alloc_data(1200000,8);
  auVar6 = __LCPI1_7;
  auVar23 = __LCPI1_3;
  lVar11 = 0;
  uVar7 = 0;
  do {
    lVar12 = uVar7 * 8000;
    pvVar13 = (void *)(lVar12 + (long)__ptr_00);
    if ((ulong)((long)__ptr_01 + (lVar12 - (long)pvVar13)) < 0x10) {
      lVar14 = 0;
      do {
        iVar15 = (int)lVar14 * (int)uVar7;
        *(double *)((long)pvVar13 + lVar14 * 8) =
             (double)(((iVar15 + 1U) / 0x4b0) * -0x4b0 + iVar15 + 1) / 1200.0;
        *(double *)((long)__ptr_01 + lVar14 * 8 + lVar12) =
             (double)(iVar15 + ((iVar15 + 2U) / 1000) * -1000 + 2) / 1000.0;
        lVar14 = lVar14 + 1;
      } while (lVar14 != 1000);
    }
    else {
      lVar14 = 0;
      iVar15 = 0;
      uVar16 = 1;
      do {
        iVar24 = iVar15 * (int)uVar7;
        dVar22 = (double)((iVar24 + 1U) % 0x4b0);
        auVar21 = divpd(CONCAT88((double)(int)((ulong)dVar22 >> 0x20),dVar22),auVar23);
        auVar20 = divpd(CONCAT88((double)(((int)((uVar16 & 0xffffffff) * (uVar7 & 0xffffffff)) + 2U)
                                         % 1000),(double)((iVar24 + 2U) % 1000)),auVar6);
        *(undefined (*) [16])((long)pvVar13 + lVar14 * 8) = auVar21;
        *(undefined (*) [16])((long)__ptr_01 + lVar14 * 8 + lVar12) = auVar20;
        lVar14 = lVar14 + 2;
        iVar15 = iVar15 + 2;
        uVar16 = uVar16 + 2;
      } while (lVar14 != 1000);
    }
    auVar20 = __LCPI1_11;
    uVar7 = uVar7 + 1;
  } while (uVar7 != 0x4b0);
  lVar12 = 0;
  do {
    lVar14 = 0;
    iVar15 = 0;
    do {
      dVar22 = (double)((uint)(iVar15 * (int)lVar11 + SUB164(auVar20,0)) % 0x4b0);
      auVar23 = divpd(CONCAT88((double)(int)((ulong)dVar22 >> 0x20),dVar22),auVar6);
      *(undefined (*) [16])((long)__ptr + lVar14 * 8 + lVar11 * 0x2580) = auVar23;
      lVar14 = lVar14 + 2;
      iVar15 = iVar15 + 2;
    } while (lVar14 != 0x4b0);
    lVar11 = lVar11 + 1;
  } while (lVar11 != 0x4b0);
  uVar7 = 1;
  do {
    pvVar13 = (void *)(lVar12 * 0x2580 + (long)__ptr);
    lVar11 = lVar12 * 8000;
    if (3 < uVar7) {
      uVar16 = uVar7 & 0x7ffffffffffffffc;
      uVar17 = 0;
      do {
        pdVar1 = (double *)((long)pvVar13 + uVar17 * 8);
        dVar22 = pdVar1[1];
        pdVar2 = (double *)((long)pvVar13 + uVar17 * 8 + 0x10);
        dVar4 = *pdVar2;
        dVar5 = pdVar2[1];
        pdVar2 = (double *)((long)pvVar13 + uVar17 * 8);
        *pdVar2 = *pdVar1 * 1.2;
        pdVar2[1] = dVar22 * 1.2;
        *(undefined (*) [16])((long)pvVar13 + uVar17 * 8 + 0x10) = CONCAT88(dVar5 * 1.2,dVar4 * 1.2)
        ;
        uVar17 = uVar17 + 4;
        if (uVar17 == uVar16) goto joined_r0x001006de;
      } while( true );
    }
    uVar16 = 0;
    do {
      *(double *)((long)pvVar13 + uVar16 * 8) = *(double *)((long)pvVar13 + uVar16 * 8) * 1.2;
      uVar16 = uVar16 + 1;
joined_r0x001006de:
    } while (uVar7 != uVar16);
                    // WARNING: Read-only address (ram,0x00100a40) is written
                    // WARNING: Read-only address (ram,0x00100a80) is written
                    // WARNING: Read-only address (ram,0x00100aa0) is written
    pvVar8 = (void *)((long)__ptr + lVar12 * 0x2588 + 8);
    lVar14 = 0;
    do {
      pdVar1 = (double *)((long)__ptr_01 + lVar14 * 8 + lVar11);
      pdVar2 = (double *)((long)__ptr_00 + lVar14 * 8 + lVar11);
      if (uVar7 < 8) {
        uVar16 = 0;
      }
      else {
        lVar9 = lVar14 * 8 + lVar11;
        lVar10 = lVar11 + 8 + lVar14 * 8;
        bVar18 = pvVar13 < (void *)(lVar10 + (long)__ptr_00);
        bVar19 = pvVar13 < (void *)((long)__ptr_01 + lVar10);
        if (((bVar18 && (void *)(lVar9 + (long)__ptr_00) < pvVar8) ||
            (bVar18 && (void *)((long)__ptr_00 + lVar14 * 8) < pvVar8)) ||
           ((void *)((long)__ptr_01 + lVar14 * 8) < pvVar8 && bVar19)) {
          uVar16 = 0;
        }
        else {
          uVar16 = 0;
          if (!bVar19 || pvVar8 <= (void *)((long)__ptr_01 + lVar9)) {
            dVar22 = *pdVar1;
            dVar4 = *pdVar2;
            uVar17 = 0;
            do {
              lVar10 = (uVar17 | 1) * 8000;
              pdVar3 = (double *)((long)pvVar13 + uVar17 * 8);
              *(undefined (*) [16])((long)pvVar13 + uVar17 * 8) =
                   CONCAT88(pdVar3[1] +
                            *(double *)((long)__ptr_01 + lVar14 * 8 + lVar10) * 1.5 * dVar4 +
                            *(double *)((long)__ptr_00 + lVar14 * 8 + lVar10) * 1.5 * dVar22,
                            *pdVar3 + *(double *)((long)__ptr_01 + lVar14 * 8 + uVar17 * 8000) * 1.5
                                      * dVar4 + *(double *)
                                                 ((long)__ptr_00 + lVar14 * 8 + uVar17 * 8000) * 1.5
                                                * dVar22);
              uVar17 = uVar17 + 2;
              uVar16 = uVar7 & 0x7ffffffffffffffe;
              __s = _DAT_1cc3d8d48188b48;
              if (uVar17 == (uVar7 & 0x7ffffffffffffffe)) goto joined_r0x001008ce;
            } while( true );
          }
        }
      }
      do {
        *(double *)((long)pvVar13 + uVar16 * 8) =
             *(double *)((long)__ptr_00 + lVar14 * 8 + uVar16 * 8000) * 1.5 * *pdVar1 +
             *(double *)((long)__ptr_01 + lVar14 * 8 + uVar16 * 8000) * 1.5 * *pdVar2 +
             *(double *)((long)pvVar13 + uVar16 * 8);
        uVar16 = uVar16 + 1;
        __s = _DAT_1cc3d8d48188b48;
joined_r0x001008ce:
        _DAT_1cc3d8d48188b48 = __s;
      } while (uVar7 != uVar16);
      lVar14 = lVar14 + 1;
    } while (lVar14 != 1000);
    lVar12 = lVar12 + 1;
    uVar7 = uVar7 + 1;
  } while (lVar12 != 0x4b0);
  if ((0x2a < param_1) && (**param_2 == '\0')) {
    fwrite(_L_str_1,0x16,1,__s);
    lVar11 = 0;
    fprintf(__s,"begin dump: %s",&_L_str_3);
    do {
      lVar12 = 0;
      do {
        if (((uint)(((int)lVar12 + (int)lVar11 * 0x4b0) * -0x33333333) >> 2 |
            (int)lVar12 * 0x40000000) < 0xccccccd) {
          fputc(10,__s);
        }
        fprintf(__s,"%0.2lf ",*(undefined8 *)((long)__ptr + lVar12 * 8 + lVar11 * 0x2580));
        lVar12 = lVar12 + 1;
      } while (lVar12 != 0x4b0);
      lVar11 = lVar11 + 1;
    } while (lVar11 != 0x4b0);
    fprintf(__s,"\nend   dump: %s\n",&_L_str_3);
    fwrite("==END   DUMP_ARRAYS==\n",0x16,1,__s);
  }
  free(__ptr);
  free(__ptr_00);
  free(__ptr_01);
  return 0;
}


