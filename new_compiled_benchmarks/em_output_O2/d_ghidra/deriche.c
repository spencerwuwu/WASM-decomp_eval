#include "deriche.h"



void kernel_deriche(float param_1,ulong param_2,ulong param_3,long param_4,long param_5,long param_6
                   ,long param_7)

{
  long lVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  
  uVar11 = param_3 & 0xffffffff;
  param_2 = param_2 & 0xffffffff;
  fVar18 = expf((float)((uint)param_1 ^ 0x80000000));
  fVar19 = expf(param_1);
  fVar20 = expf(param_1);
  fVar21 = expf(param_1 + param_1);
  fVar18 = ((1.0 - fVar19) * (1.0 - fVar18)) / ((fVar20 * (param_1 + param_1) + 1.0) - fVar21);
  fVar19 = expf(param_1);
  fVar22 = (param_1 + -1.0) * fVar19 * fVar18;
  fVar19 = expf(param_1);
  fVar25 = (param_1 + 1.0) * fVar19 * fVar18;
  fVar19 = expf(param_1 * -2.0);
  fVar19 = fVar19 * (float)((uint)fVar18 ^ 0x80000000);
  fVar20 = exp2f(param_1);
  fVar21 = expf(param_1 * -2.0);
  fVar21 = (float)((uint)fVar21 ^ 0x80000000);
  iVar17 = (int)param_2;
  uVar10 = (uint)uVar11;
  if (0 < iVar17) {
    uVar9 = 0;
    do {
      if (0 < (int)uVar10) {
        fVar26 = 0.0;
        uVar12 = 0;
        fVar27 = 0.0;
        fVar28 = 0.0;
        do {
          lVar15 = uVar9 * 0x21c0 + param_4;
          fVar23 = fVar27 * fVar21 +
                   fVar20 * fVar28 + *(float *)(lVar15 + uVar12 * 4) * fVar18 + fVar26 * fVar22;
          *(float *)(uVar9 * 0x21c0 + param_6 + uVar12 * 4) = fVar23;
          fVar26 = *(float *)(lVar15 + uVar12 * 4);
          uVar12 = uVar12 + 1;
          fVar27 = fVar28;
          fVar28 = fVar23;
        } while (uVar12 != uVar11);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != param_2);
    if (0 < iVar17) {
      uVar9 = 0;
      do {
        fVar28 = 0.0;
        fVar27 = 0.0;
        fVar23 = 0.0;
        fVar26 = 0.0;
        uVar12 = uVar11;
        if (0 < (int)uVar10) {
          do {
            fVar24 = fVar26 * fVar21 + fVar20 * fVar23 + fVar25 * fVar28 + fVar27 * fVar19;
            uVar13 = uVar12 - 1 & 0xffffffff;
            *(float *)(param_7 + uVar9 * 0x21c0 + uVar13 * 4) = fVar24;
            bVar5 = 1 < (long)uVar12;
            uVar12 = uVar12 - 1;
            fVar26 = fVar23;
            fVar27 = fVar28;
            fVar28 = *(float *)(uVar9 * 0x21c0 + param_4 + uVar13 * 4);
            fVar23 = fVar24;
          } while (bVar5);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 != param_2);
      if (0 < iVar17) {
        uVar9 = (ulong)(uVar10 & 0xfffffff8);
        uVar12 = 0;
        do {
          if (0 < (int)uVar10) {
            lVar14 = uVar12 * 0x21c0;
            lVar15 = lVar14 + param_5;
            lVar1 = lVar14 + param_6;
            lVar14 = lVar14 + param_7;
            if ((uVar10 < 8) || ((ulong)(lVar15 - lVar1) < 0x20)) {
              uVar13 = 0;
            }
            else {
              uVar16 = 0;
              uVar13 = 0;
              if (0x1f < (ulong)(lVar15 - lVar14)) {
                do {
                  pfVar2 = (float *)(lVar1 + uVar16 * 4);
                  pfVar3 = (float *)(lVar1 + 0x10 + uVar16 * 4);
                  fVar26 = *pfVar3;
                  fVar27 = pfVar3[1];
                  fVar28 = pfVar3[2];
                  fVar23 = pfVar3[3];
                  pfVar3 = (float *)(lVar14 + uVar16 * 4);
                  pfVar4 = (float *)(lVar14 + 0x10 + uVar16 * 4);
                  fVar24 = *pfVar4;
                  fVar6 = pfVar4[1];
                  fVar7 = pfVar4[2];
                  fVar8 = pfVar4[3];
                  *(undefined (*) [16])(lVar15 + uVar16 * 4) =
                       CONCAT412(pfVar3[3] + pfVar2[3],
                                 CONCAT48(pfVar3[2] + pfVar2[2],
                                          CONCAT44(pfVar3[1] + pfVar2[1],*pfVar3 + *pfVar2)));
                  *(undefined (*) [16])(lVar15 + 0x10 + uVar16 * 4) =
                       CONCAT412(fVar8 + fVar23,
                                 CONCAT48(fVar7 + fVar28,CONCAT44(fVar6 + fVar27,fVar24 + fVar26)));
                  uVar16 = uVar16 + 8;
                } while (uVar16 != uVar9);
                uVar13 = uVar9;
                if (uVar9 == uVar11) goto LAB_001002c0;
              }
            }
            uVar16 = uVar13;
            if ((param_3 & 1) != 0) {
              *(float *)(lVar15 + uVar13 * 4) =
                   *(float *)(lVar1 + uVar13 * 4) + *(float *)(lVar14 + uVar13 * 4);
              uVar16 = uVar13 | 1;
            }
            if (~uVar13 != -uVar11) {
              do {
                *(float *)(lVar15 + uVar16 * 4) =
                     *(float *)(lVar1 + uVar16 * 4) + *(float *)(lVar14 + uVar16 * 4);
                *(float *)(lVar15 + 4 + uVar16 * 4) =
                     *(float *)(lVar1 + 4 + uVar16 * 4) + *(float *)(lVar14 + 4 + uVar16 * 4);
                uVar16 = uVar16 + 2;
              } while (uVar16 != uVar11);
            }
          }
LAB_001002c0:
          uVar12 = uVar12 + 1;
        } while (uVar12 != param_2);
      }
    }
  }
  if (0 < (int)uVar10) {
    uVar9 = 0;
    do {
      if (0 < iVar17) {
        fVar26 = 0.0;
        uVar12 = 0;
        fVar27 = 0.0;
        fVar28 = 0.0;
        do {
          lVar15 = param_5 + uVar12 * 0x21c0;
          fVar23 = fVar27 * fVar21 +
                   fVar20 * fVar28 + *(float *)(lVar15 + uVar9 * 4) * fVar18 + fVar26 * fVar22;
          *(float *)(uVar12 * 0x21c0 + param_6 + uVar9 * 4) = fVar23;
          fVar26 = *(float *)(lVar15 + uVar9 * 4);
          uVar12 = uVar12 + 1;
          fVar27 = fVar28;
          fVar28 = fVar23;
        } while (uVar12 != param_2);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar11);
    if (0 < (int)uVar10) {
      uVar9 = 0;
      do {
        uVar12 = param_2;
        fVar18 = 0.0;
        fVar22 = 0.0;
        fVar26 = 0.0;
        fVar27 = 0.0;
        if (0 < iVar17) {
          do {
            fVar28 = fVar18 * fVar21 + fVar20 * fVar27 + fVar25 * fVar26 + fVar22 * fVar19;
            lVar15 = (uVar12 - 1 & 0xffffffff) * 0x21c0;
            *(float *)(param_7 + lVar15 + uVar9 * 4) = fVar28;
            bVar5 = 1 < (long)uVar12;
            uVar12 = uVar12 - 1;
            fVar18 = fVar27;
            fVar22 = fVar26;
            fVar26 = *(float *)(lVar15 + param_5 + uVar9 * 4);
            fVar27 = fVar28;
          } while (bVar5);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 != uVar11);
    }
  }
  if (0 < iVar17) {
    uVar9 = (ulong)(uVar10 & 0xfffffff8);
    uVar12 = 0;
    do {
      if (0 < (int)uVar10) {
        lVar14 = uVar12 * 0x21c0;
        lVar15 = lVar14 + param_5;
        lVar1 = lVar14 + param_6;
        lVar14 = lVar14 + param_7;
        if ((uVar10 < 8) || ((ulong)(lVar15 - lVar1) < 0x20)) {
          uVar13 = 0;
        }
        else {
          uVar16 = 0;
          uVar13 = 0;
          if (0x1f < (ulong)(lVar15 - lVar14)) {
            do {
              pfVar2 = (float *)(lVar1 + uVar16 * 4);
              pfVar3 = (float *)(lVar1 + 0x10 + uVar16 * 4);
              fVar18 = *pfVar3;
              fVar19 = pfVar3[1];
              fVar20 = pfVar3[2];
              fVar21 = pfVar3[3];
              pfVar3 = (float *)(lVar14 + uVar16 * 4);
              pfVar4 = (float *)(lVar14 + 0x10 + uVar16 * 4);
              fVar22 = *pfVar4;
              fVar25 = pfVar4[1];
              fVar26 = pfVar4[2];
              fVar27 = pfVar4[3];
              *(undefined (*) [16])(lVar15 + uVar16 * 4) =
                   CONCAT412(pfVar3[3] + pfVar2[3],
                             CONCAT48(pfVar3[2] + pfVar2[2],
                                      CONCAT44(pfVar3[1] + pfVar2[1],*pfVar3 + *pfVar2)));
              *(undefined (*) [16])(lVar15 + 0x10 + uVar16 * 4) =
                   CONCAT412(fVar27 + fVar21,
                             CONCAT48(fVar26 + fVar20,CONCAT44(fVar25 + fVar19,fVar22 + fVar18)));
              uVar16 = uVar16 + 8;
            } while (uVar16 != uVar9);
            uVar13 = uVar9;
            if (uVar9 == uVar11) goto LAB_00100500;
          }
        }
        uVar16 = uVar13;
        if ((param_3 & 1) != 0) {
          *(float *)(lVar15 + uVar13 * 4) =
               *(float *)(lVar1 + uVar13 * 4) + *(float *)(lVar14 + uVar13 * 4);
          uVar16 = uVar13 | 1;
        }
        if (~uVar13 != -uVar11) {
          do {
            *(float *)(lVar15 + uVar16 * 4) =
                 *(float *)(lVar1 + uVar16 * 4) + *(float *)(lVar14 + uVar16 * 4);
            *(float *)(lVar15 + 4 + uVar16 * 4) =
                 *(float *)(lVar1 + 4 + uVar16 * 4) + *(float *)(lVar14 + 4 + uVar16 * 4);
            uVar16 = uVar16 + 2;
          } while (uVar16 != uVar11);
        }
      }
LAB_00100500:
      uVar12 = uVar12 + 1;
    } while (uVar12 != param_2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 submain(int param_1,char **param_2)

{
  undefined auVar1 [16];
  FILE *__stream;
  void *__ptr;
  void *__ptr_00;
  void *__ptr_01;
  void *__ptr_02;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  undefined auVar10 [16];
  
  __ptr = (void *)polybench_alloc_data(0x870000,4);
  __ptr_00 = (void *)polybench_alloc_data(0x870000,4);
  __ptr_01 = (void *)polybench_alloc_data(0x870000,4);
  __ptr_02 = (void *)polybench_alloc_data(0x870000,4);
  auVar1 = __LCPI1_4;
  lVar2 = 0;
  do {
    lVar3 = lVar2 * 0x139;
    iVar5 = (int)lVar3;
    lVar4 = 0;
    uVar9 = 3;
    iVar8 = 2;
    iVar7 = 1;
    iVar6 = 0;
    do {
      auVar10 = divps(CONCAT412((float)((uint)((uVar9 & 0xffffffff) * 0x3df +
                                              SUB168(CONCAT412((int)((ulong)lVar3 >> 0x20),
                                                               CONCAT48(iVar5,lVar3)) >> 0x40,0)) &
                                       0xffff),
                                CONCAT48((float)(iVar8 * 0x3df + iVar5 & 0xffff),
                                         CONCAT44((float)(iVar7 * 0x3df + iVar5 & 0xffff),
                                                  (float)(iVar6 * 0x3df + iVar5 & 0xffff)))),auVar1)
      ;
      *(undefined (*) [16])((long)__ptr + lVar4 * 4 + lVar2 * 0x21c0) = auVar10;
      lVar4 = lVar4 + 4;
      iVar6 = iVar6 + 4;
      iVar7 = iVar7 + 4;
      iVar8 = iVar8 + 4;
      uVar9 = uVar9 + 4;
    } while (lVar4 != 0x870);
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x1000);
  kernel_deriche(0x1000,0x870,__ptr,__ptr_00,__ptr_01,__ptr_02);
  __stream = _DAT_1723d8d48288b4c;
  if ((0x2a < param_1) && (**param_2 == '\0')) {
    fwrite(_L_str_1,0x16,1,_DAT_1723d8d48288b4c);
    lVar2 = 0;
    fprintf(__stream,"begin dump: %s","imgOut");
    do {
      lVar3 = 0;
      do {
        if (((uint)(((int)lVar3 + (int)lVar2 * 0x870) * -0x33333333) >> 2 | (int)lVar3 * 0x40000000)
            < 0xccccccd) {
          fputc(10,__stream);
        }
        fprintf(__stream,"%0.2f ",(double)*(float *)((long)__ptr_00 + lVar3 * 4 + lVar2 * 0x21c0));
        lVar3 = lVar3 + 1;
      } while (lVar3 != 0x870);
      lVar2 = lVar2 + 1;
    } while (lVar2 != 0x1000);
    fprintf(__stream,"\nend   dump: %s\n","imgOut");
    fwrite("==END   DUMP_ARRAYS==\n",0x16,1,__stream);
  }
  free(__ptr);
  free(__ptr_00);
  free(__ptr_01);
  free(__ptr_02);
  return 0;
}


