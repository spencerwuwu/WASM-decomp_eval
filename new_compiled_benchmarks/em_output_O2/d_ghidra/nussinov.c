#include "nussinov.h"



void kernel_nussinov(uint param_1,long param_2,long param_3)

{
  int *piVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  if (0 < (int)param_1) {
    uVar3 = (ulong)param_1;
    do {
      uVar4 = uVar3 - 1;
      if ((long)uVar3 < (long)(ulong)param_1) {
        lVar8 = uVar4 * 10000 + param_3;
        uVar5 = 0;
        uVar12 = uVar3;
        do {
          if ((long)uVar12 < 1) {
            iVar7 = *(int *)(lVar8 + uVar12 * 4);
            iVar6 = *(int *)(uVar3 * 10000 + param_3 + uVar12 * 4);
            if (iVar6 < iVar7) {
              iVar6 = iVar7;
            }
            *(int *)(lVar8 + uVar12 * 4) = iVar6;
          }
          else {
            uVar10 = uVar12 & 0xffffffff;
            iVar7 = *(int *)(lVar8 + uVar10 * 4);
            uVar11 = (ulong)((int)uVar12 - 1);
            iVar6 = *(int *)(lVar8 + uVar11 * 4);
            if (iVar6 < iVar7) {
              iVar6 = iVar7;
            }
            *(int *)(lVar8 + uVar10 * 4) = iVar6;
            iVar7 = *(int *)(lVar8 + uVar12 * 4);
            lVar9 = uVar3 * 10000 + param_3;
            iVar6 = *(int *)(lVar9 + uVar12 * 4);
            if (iVar6 < iVar7) {
              iVar6 = iVar7;
            }
            *(int *)(lVar8 + uVar12 * 4) = iVar6;
            iVar7 = *(int *)(lVar8 + uVar10 * 4);
            iVar6 = *(int *)(lVar9 + uVar11 * 4);
            if ((long)uVar3 < (long)uVar12) {
              iVar6 = iVar6 + (uint)((int)*(char *)(param_2 + uVar10) +
                                     (int)*(char *)(param_2 + uVar4) == 3);
            }
            if (iVar6 < iVar7) {
              iVar6 = iVar7;
            }
            *(int *)(lVar8 + uVar10 * 4) = iVar6;
          }
          if ((long)uVar3 < (long)uVar12) {
            piVar1 = (int *)(lVar8 + uVar12 * 4);
            iVar7 = *(int *)(lVar8 + uVar12 * 4);
            uVar11 = uVar3;
            if ((uVar5 & 1) != 0) {
              iVar6 = *(int *)((uVar3 + 1) * 10000 + param_3 + uVar12 * 4) +
                      *(int *)(lVar8 + uVar3 * 4);
              if (iVar7 <= iVar6) {
                iVar7 = iVar6;
              }
              *piVar1 = iVar7;
              uVar11 = uVar3 + 1;
            }
            if (uVar5 != 1) {
              do {
                lVar9 = uVar11 * 10000 + param_3;
                iVar6 = *(int *)(lVar9 + 10000 + uVar12 * 4) + *(int *)(lVar8 + uVar11 * 4);
                if (iVar6 < iVar7) {
                  iVar6 = iVar7;
                }
                *piVar1 = iVar6;
                iVar7 = *(int *)(lVar9 + 20000 + uVar12 * 4) + *(int *)(lVar8 + 4 + uVar11 * 4);
                uVar11 = uVar11 + 2;
                if (iVar7 < iVar6) {
                  iVar7 = iVar6;
                }
                *piVar1 = iVar7;
              } while ((int)uVar11 != (int)uVar12);
            }
          }
          uVar12 = uVar12 + 1;
          uVar5 = uVar5 + 1;
        } while ((uint)uVar12 != param_1);
      }
      bVar2 = 1 < (long)uVar3;
      uVar3 = uVar4;
    } while (bVar2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 submain(int param_1,char **param_2)

{
  byte *pbVar1;
  char cVar2;
  char cVar10;
  char cVar18;
  char cVar19;
  short sVar27;
  short sVar28;
  short sVar29;
  short sVar30;
  short sVar31;
  short sVar32;
  short sVar33;
  short sVar34;
  short sVar35;
  short sVar36;
  short sVar37;
  short sVar38;
  undefined auVar39 [16];
  FILE *__stream;
  void *__ptr;
  void *__s;
  long lVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  long lVar44;
  undefined auVar45 [16];
  undefined auVar46 [16];
  undefined auVar47 [16];
  undefined auVar48 [16];
  undefined auVar49 [16];
  undefined auVar50 [16];
  undefined auVar51 [16];
  undefined auVar52 [16];
  short sVar53;
  short sVar54;
  undefined auVar61 [16];
  short sVar62;
  short sVar63;
  undefined auVar70 [16];
  undefined4 uVar71;
  undefined auVar77 [16];
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  undefined4 uVar55;
  undefined6 uVar56;
  undefined8 uVar57;
  unkbyte10 Var58;
  undefined auVar59 [12];
  undefined auVar60 [14];
  undefined4 uVar64;
  undefined6 uVar65;
  undefined8 uVar66;
  unkbyte10 Var67;
  undefined auVar68 [12];
  undefined auVar69 [14];
  undefined6 uVar72;
  undefined8 uVar73;
  unkbyte10 Var74;
  undefined auVar75 [12];
  undefined auVar76 [14];
  
  __ptr = (void *)polybench_alloc_data(0x9c4,1);
  __s = (void *)polybench_alloc_data(0x5f5e10);
  auVar39 = __LCPI1_8;
  lVar40 = 0;
  auVar45 = __LCPI1_0;
  auVar46 = __LCPI1_1;
  auVar47 = __LCPI1_2;
  auVar48 = __LCPI1_3;
  auVar49 = __LCPI1_4;
  auVar50 = __LCPI1_5;
  auVar51 = __LCPI1_6;
  auVar52 = __LCPI1_7;
  do {
    auVar61 = auVar52 & auVar39;
    auVar70 = auVar51 & auVar39;
    sVar27 = SUB162(auVar61,0);
    cVar2 = (0 < sVar27) * (sVar27 < 0xff) * SUB161(auVar61,0) - (0xff < sVar27);
    sVar27 = SUB162(auVar61 >> 0x10,0);
    sVar53 = CONCAT11((0 < sVar27) * (sVar27 < 0xff) * SUB161(auVar61 >> 0x10,0) - (0xff < sVar27),
                      cVar2);
    sVar27 = SUB162(auVar61 >> 0x20,0);
    cVar3 = (0 < sVar27) * (sVar27 < 0xff) * SUB161(auVar61 >> 0x20,0) - (0xff < sVar27);
    sVar27 = SUB162(auVar61 >> 0x30,0);
    uVar55 = CONCAT13((0 < sVar27) * (sVar27 < 0xff) * SUB161(auVar61 >> 0x30,0) - (0xff < sVar27),
                      CONCAT12(cVar3,sVar53));
    sVar27 = SUB162(auVar61 >> 0x40,0);
    cVar4 = (0 < sVar27) * (sVar27 < 0xff) * SUB161(auVar61 >> 0x40,0) - (0xff < sVar27);
    sVar27 = SUB162(auVar61 >> 0x50,0);
    uVar56 = CONCAT15((0 < sVar27) * (sVar27 < 0xff) * SUB161(auVar61 >> 0x50,0) - (0xff < sVar27),
                      CONCAT14(cVar4,uVar55));
    sVar27 = SUB162(auVar61 >> 0x60,0);
    cVar5 = (0 < sVar27) * (sVar27 < 0xff) * SUB161(auVar61 >> 0x60,0) - (0xff < sVar27);
    sVar27 = SUB162(auVar61 >> 0x70,0);
    uVar57 = CONCAT17((0 < sVar27) * (sVar27 < 0xff) * SUB161(auVar61 >> 0x70,0) - (0xff < sVar27),
                      CONCAT16(cVar5,uVar56));
    sVar27 = SUB162(auVar70,0);
    cVar6 = (0 < sVar27) * (sVar27 < 0xff) * SUB161(auVar70,0) - (0xff < sVar27);
    sVar27 = SUB162(auVar70 >> 0x10,0);
    Var58 = CONCAT19((0 < sVar27) * (sVar27 < 0xff) * SUB161(auVar70 >> 0x10,0) - (0xff < sVar27),
                     CONCAT18(cVar6,uVar57));
    sVar27 = SUB162(auVar70 >> 0x20,0);
    cVar7 = (0 < sVar27) * (sVar27 < 0xff) * SUB161(auVar70 >> 0x20,0) - (0xff < sVar27);
    sVar27 = SUB162(auVar70 >> 0x30,0);
    auVar59 = CONCAT111((0 < sVar27) * (sVar27 < 0xff) * SUB161(auVar70 >> 0x30,0) - (0xff < sVar27)
                        ,CONCAT110(cVar7,Var58));
    sVar27 = SUB162(auVar70 >> 0x40,0);
    cVar8 = (0 < sVar27) * (sVar27 < 0xff) * SUB161(auVar70 >> 0x40,0) - (0xff < sVar27);
    sVar27 = SUB162(auVar70 >> 0x50,0);
    auVar60 = CONCAT113((0 < sVar27) * (sVar27 < 0xff) * SUB161(auVar70 >> 0x50,0) - (0xff < sVar27)
                        ,CONCAT112(cVar8,auVar59));
    sVar27 = SUB162(auVar70 >> 0x60,0);
    cVar9 = (0 < sVar27) * (sVar27 < 0xff) * SUB161(auVar70 >> 0x60,0) - (0xff < sVar27);
    sVar35 = SUB162(auVar70 >> 0x70,0);
    auVar61 = auVar50 & auVar39;
    auVar77 = auVar49 & auVar39;
    sVar27 = SUB162(auVar61,0);
    cVar10 = (0 < sVar27) * (sVar27 < 0xff) * SUB161(auVar61,0) - (0xff < sVar27);
    sVar27 = SUB162(auVar61 >> 0x10,0);
    sVar62 = CONCAT11((0 < sVar27) * (sVar27 < 0xff) * SUB161(auVar61 >> 0x10,0) - (0xff < sVar27),
                      cVar10);
    sVar27 = SUB162(auVar61 >> 0x20,0);
    cVar11 = (0 < sVar27) * (sVar27 < 0xff) * SUB161(auVar61 >> 0x20,0) - (0xff < sVar27);
    sVar27 = SUB162(auVar61 >> 0x30,0);
    uVar64 = CONCAT13((0 < sVar27) * (sVar27 < 0xff) * SUB161(auVar61 >> 0x30,0) - (0xff < sVar27),
                      CONCAT12(cVar11,sVar62));
    sVar27 = SUB162(auVar61 >> 0x40,0);
    cVar12 = (0 < sVar27) * (sVar27 < 0xff) * SUB161(auVar61 >> 0x40,0) - (0xff < sVar27);
    sVar27 = SUB162(auVar61 >> 0x50,0);
    uVar65 = CONCAT15((0 < sVar27) * (sVar27 < 0xff) * SUB161(auVar61 >> 0x50,0) - (0xff < sVar27),
                      CONCAT14(cVar12,uVar64));
    sVar27 = SUB162(auVar61 >> 0x60,0);
    cVar13 = (0 < sVar27) * (sVar27 < 0xff) * SUB161(auVar61 >> 0x60,0) - (0xff < sVar27);
    sVar27 = SUB162(auVar61 >> 0x70,0);
    uVar66 = CONCAT17((0 < sVar27) * (sVar27 < 0xff) * SUB161(auVar61 >> 0x70,0) - (0xff < sVar27),
                      CONCAT16(cVar13,uVar65));
    sVar27 = SUB162(auVar77,0);
    cVar14 = (0 < sVar27) * (sVar27 < 0xff) * SUB161(auVar77,0) - (0xff < sVar27);
    sVar27 = SUB162(auVar77 >> 0x10,0);
    Var67 = CONCAT19((0 < sVar27) * (sVar27 < 0xff) * SUB161(auVar77 >> 0x10,0) - (0xff < sVar27),
                     CONCAT18(cVar14,uVar66));
    sVar27 = SUB162(auVar77 >> 0x20,0);
    cVar15 = (0 < sVar27) * (sVar27 < 0xff) * SUB161(auVar77 >> 0x20,0) - (0xff < sVar27);
    sVar27 = SUB162(auVar77 >> 0x30,0);
    auVar68 = CONCAT111((0 < sVar27) * (sVar27 < 0xff) * SUB161(auVar77 >> 0x30,0) - (0xff < sVar27)
                        ,CONCAT110(cVar15,Var67));
    sVar27 = SUB162(auVar77 >> 0x40,0);
    cVar16 = (0 < sVar27) * (sVar27 < 0xff) * SUB161(auVar77 >> 0x40,0) - (0xff < sVar27);
    sVar27 = SUB162(auVar77 >> 0x50,0);
    auVar69 = CONCAT113((0 < sVar27) * (sVar27 < 0xff) * SUB161(auVar77 >> 0x50,0) - (0xff < sVar27)
                        ,CONCAT112(cVar16,auVar68));
    sVar27 = SUB162(auVar77 >> 0x60,0);
    cVar17 = (0 < sVar27) * (sVar27 < 0xff) * SUB161(auVar77 >> 0x60,0) - (0xff < sVar27);
    sVar36 = SUB162(auVar77 >> 0x70,0);
    cVar2 = (0 < sVar53) * (sVar53 < 0xff) * cVar2 - (0xff < sVar53);
    sVar27 = (short)((uint)uVar55 >> 0x10);
    sVar54 = CONCAT11((0 < sVar27) * (sVar27 < 0xff) * cVar3 - (0xff < sVar27),cVar2);
    sVar27 = (short)((uint6)uVar56 >> 0x20);
    cVar3 = (0 < sVar27) * (sVar27 < 0xff) * cVar4 - (0xff < sVar27);
    sVar27 = (short)((ulong)uVar57 >> 0x30);
    uVar55 = CONCAT13((0 < sVar27) * (sVar27 < 0xff) * cVar5 - (0xff < sVar27),
                      CONCAT12(cVar3,sVar54));
    sVar27 = (short)((unkuint10)Var58 >> 0x40);
    cVar4 = (0 < sVar27) * (sVar27 < 0xff) * cVar6 - (0xff < sVar27);
    sVar27 = SUB122(auVar59 >> 0x50,0);
    uVar56 = CONCAT15((0 < sVar27) * (sVar27 < 0xff) * cVar7 - (0xff < sVar27),
                      CONCAT14(cVar4,uVar55));
    sVar27 = SUB142(auVar60 >> 0x60,0);
    cVar5 = (0 < sVar27) * (sVar27 < 0xff) * cVar8 - (0xff < sVar27);
    sVar27 = SUB162(CONCAT115((0 < sVar35) * (sVar35 < 0xff) * SUB161(auVar70 >> 0x70,0) -
                              (0xff < sVar35),CONCAT114(cVar9,auVar60)) >> 0x70,0);
    uVar57 = CONCAT17((0 < sVar27) * (sVar27 < 0xff) * cVar9 - (0xff < sVar27),
                      CONCAT16(cVar5,uVar56));
    cVar6 = (0 < sVar62) * (sVar62 < 0xff) * cVar10 - (0xff < sVar62);
    sVar27 = (short)((uint)uVar64 >> 0x10);
    Var58 = CONCAT19((0 < sVar27) * (sVar27 < 0xff) * cVar11 - (0xff < sVar27),
                     CONCAT18(cVar6,uVar57));
    sVar27 = (short)((uint6)uVar65 >> 0x20);
    cVar7 = (0 < sVar27) * (sVar27 < 0xff) * cVar12 - (0xff < sVar27);
    sVar27 = (short)((ulong)uVar66 >> 0x30);
    auVar59 = CONCAT111((0 < sVar27) * (sVar27 < 0xff) * cVar13 - (0xff < sVar27),
                        CONCAT110(cVar7,Var58));
    sVar27 = (short)((unkuint10)Var67 >> 0x40);
    cVar8 = (0 < sVar27) * (sVar27 < 0xff) * cVar14 - (0xff < sVar27);
    sVar27 = SUB122(auVar68 >> 0x50,0);
    auVar60 = CONCAT113((0 < sVar27) * (sVar27 < 0xff) * cVar15 - (0xff < sVar27),
                        CONCAT112(cVar8,auVar59));
    sVar27 = SUB142(auVar69 >> 0x60,0);
    cVar9 = (0 < sVar27) * (sVar27 < 0xff) * cVar16 - (0xff < sVar27);
    sVar37 = SUB162(CONCAT115((0 < sVar36) * (sVar36 < 0xff) * SUB161(auVar77 >> 0x70,0) -
                              (0xff < sVar36),CONCAT114(cVar17,auVar69)) >> 0x70,0);
    auVar61 = auVar48 & auVar39;
    auVar70 = auVar47 & auVar39;
    sVar27 = SUB162(auVar61,0);
    cVar16 = (0 < sVar27) * (sVar27 < 0xff) * SUB161(auVar61,0) - (0xff < sVar27);
    sVar27 = SUB162(auVar61 >> 0x10,0);
    sVar53 = CONCAT11((0 < sVar27) * (sVar27 < 0xff) * SUB161(auVar61 >> 0x10,0) - (0xff < sVar27),
                      cVar16);
    sVar27 = SUB162(auVar61 >> 0x20,0);
    cVar10 = (0 < sVar27) * (sVar27 < 0xff) * SUB161(auVar61 >> 0x20,0) - (0xff < sVar27);
    sVar27 = SUB162(auVar61 >> 0x30,0);
    uVar64 = CONCAT13((0 < sVar27) * (sVar27 < 0xff) * SUB161(auVar61 >> 0x30,0) - (0xff < sVar27),
                      CONCAT12(cVar10,sVar53));
    sVar27 = SUB162(auVar61 >> 0x40,0);
    cVar11 = (0 < sVar27) * (sVar27 < 0xff) * SUB161(auVar61 >> 0x40,0) - (0xff < sVar27);
    sVar27 = SUB162(auVar61 >> 0x50,0);
    uVar65 = CONCAT15((0 < sVar27) * (sVar27 < 0xff) * SUB161(auVar61 >> 0x50,0) - (0xff < sVar27),
                      CONCAT14(cVar11,uVar64));
    sVar27 = SUB162(auVar61 >> 0x60,0);
    cVar12 = (0 < sVar27) * (sVar27 < 0xff) * SUB161(auVar61 >> 0x60,0) - (0xff < sVar27);
    sVar27 = SUB162(auVar61 >> 0x70,0);
    uVar66 = CONCAT17((0 < sVar27) * (sVar27 < 0xff) * SUB161(auVar61 >> 0x70,0) - (0xff < sVar27),
                      CONCAT16(cVar12,uVar65));
    sVar27 = SUB162(auVar70,0);
    cVar18 = (0 < sVar27) * (sVar27 < 0xff) * SUB161(auVar70,0) - (0xff < sVar27);
    sVar27 = SUB162(auVar70 >> 0x10,0);
    Var67 = CONCAT19((0 < sVar27) * (sVar27 < 0xff) * SUB161(auVar70 >> 0x10,0) - (0xff < sVar27),
                     CONCAT18(cVar18,uVar66));
    sVar27 = SUB162(auVar70 >> 0x20,0);
    cVar13 = (0 < sVar27) * (sVar27 < 0xff) * SUB161(auVar70 >> 0x20,0) - (0xff < sVar27);
    sVar27 = SUB162(auVar70 >> 0x30,0);
    auVar68 = CONCAT111((0 < sVar27) * (sVar27 < 0xff) * SUB161(auVar70 >> 0x30,0) - (0xff < sVar27)
                        ,CONCAT110(cVar13,Var67));
    sVar27 = SUB162(auVar70 >> 0x40,0);
    cVar14 = (0 < sVar27) * (sVar27 < 0xff) * SUB161(auVar70 >> 0x40,0) - (0xff < sVar27);
    sVar27 = SUB162(auVar70 >> 0x50,0);
    auVar69 = CONCAT113((0 < sVar27) * (sVar27 < 0xff) * SUB161(auVar70 >> 0x50,0) - (0xff < sVar27)
                        ,CONCAT112(cVar14,auVar68));
    sVar27 = SUB162(auVar70 >> 0x60,0);
    cVar15 = (0 < sVar27) * (sVar27 < 0xff) * SUB161(auVar70 >> 0x60,0) - (0xff < sVar27);
    sVar35 = SUB162(auVar70 >> 0x70,0);
    auVar61 = auVar46 & auVar39;
    auVar77 = auVar45 & auVar39;
    sVar27 = SUB162(auVar61,0);
    cVar19 = (0 < sVar27) * (sVar27 < 0xff) * SUB161(auVar61,0) - (0xff < sVar27);
    sVar27 = SUB162(auVar61 >> 0x10,0);
    sVar62 = CONCAT11((0 < sVar27) * (sVar27 < 0xff) * SUB161(auVar61 >> 0x10,0) - (0xff < sVar27),
                      cVar19);
    sVar27 = SUB162(auVar61 >> 0x20,0);
    cVar20 = (0 < sVar27) * (sVar27 < 0xff) * SUB161(auVar61 >> 0x20,0) - (0xff < sVar27);
    sVar27 = SUB162(auVar61 >> 0x30,0);
    uVar71 = CONCAT13((0 < sVar27) * (sVar27 < 0xff) * SUB161(auVar61 >> 0x30,0) - (0xff < sVar27),
                      CONCAT12(cVar20,sVar62));
    sVar27 = SUB162(auVar61 >> 0x40,0);
    cVar21 = (0 < sVar27) * (sVar27 < 0xff) * SUB161(auVar61 >> 0x40,0) - (0xff < sVar27);
    sVar27 = SUB162(auVar61 >> 0x50,0);
    uVar72 = CONCAT15((0 < sVar27) * (sVar27 < 0xff) * SUB161(auVar61 >> 0x50,0) - (0xff < sVar27),
                      CONCAT14(cVar21,uVar71));
    sVar27 = SUB162(auVar61 >> 0x60,0);
    cVar22 = (0 < sVar27) * (sVar27 < 0xff) * SUB161(auVar61 >> 0x60,0) - (0xff < sVar27);
    sVar27 = SUB162(auVar61 >> 0x70,0);
    uVar73 = CONCAT17((0 < sVar27) * (sVar27 < 0xff) * SUB161(auVar61 >> 0x70,0) - (0xff < sVar27),
                      CONCAT16(cVar22,uVar72));
    sVar27 = SUB162(auVar77,0);
    cVar23 = (0 < sVar27) * (sVar27 < 0xff) * SUB161(auVar77,0) - (0xff < sVar27);
    sVar27 = SUB162(auVar77 >> 0x10,0);
    Var74 = CONCAT19((0 < sVar27) * (sVar27 < 0xff) * SUB161(auVar77 >> 0x10,0) - (0xff < sVar27),
                     CONCAT18(cVar23,uVar73));
    sVar27 = SUB162(auVar77 >> 0x20,0);
    cVar24 = (0 < sVar27) * (sVar27 < 0xff) * SUB161(auVar77 >> 0x20,0) - (0xff < sVar27);
    sVar27 = SUB162(auVar77 >> 0x30,0);
    auVar75 = CONCAT111((0 < sVar27) * (sVar27 < 0xff) * SUB161(auVar77 >> 0x30,0) - (0xff < sVar27)
                        ,CONCAT110(cVar24,Var74));
    sVar27 = SUB162(auVar77 >> 0x40,0);
    cVar25 = (0 < sVar27) * (sVar27 < 0xff) * SUB161(auVar77 >> 0x40,0) - (0xff < sVar27);
    sVar27 = SUB162(auVar77 >> 0x50,0);
    auVar76 = CONCAT113((0 < sVar27) * (sVar27 < 0xff) * SUB161(auVar77 >> 0x50,0) - (0xff < sVar27)
                        ,CONCAT112(cVar25,auVar75));
    sVar27 = SUB162(auVar77 >> 0x60,0);
    cVar26 = (0 < sVar27) * (sVar27 < 0xff) * SUB161(auVar77 >> 0x60,0) - (0xff < sVar27);
    sVar36 = SUB162(auVar77 >> 0x70,0);
    cVar16 = (0 < sVar53) * (sVar53 < 0xff) * cVar16 - (0xff < sVar53);
    sVar27 = (short)((uint)uVar64 >> 0x10);
    sVar63 = CONCAT11((0 < sVar27) * (sVar27 < 0xff) * cVar10 - (0xff < sVar27),cVar16);
    sVar27 = (short)((uint6)uVar65 >> 0x20);
    cVar11 = (0 < sVar27) * (sVar27 < 0xff) * cVar11 - (0xff < sVar27);
    sVar27 = (short)((ulong)uVar66 >> 0x30);
    uVar64 = CONCAT13((0 < sVar27) * (sVar27 < 0xff) * cVar12 - (0xff < sVar27),
                      CONCAT12(cVar11,sVar63));
    sVar27 = (short)((unkuint10)Var67 >> 0x40);
    cVar12 = (0 < sVar27) * (sVar27 < 0xff) * cVar18 - (0xff < sVar27);
    sVar27 = SUB122(auVar68 >> 0x50,0);
    uVar65 = CONCAT15((0 < sVar27) * (sVar27 < 0xff) * cVar13 - (0xff < sVar27),
                      CONCAT14(cVar12,uVar64));
    sVar27 = SUB142(auVar69 >> 0x60,0);
    cVar14 = (0 < sVar27) * (sVar27 < 0xff) * cVar14 - (0xff < sVar27);
    sVar27 = SUB162(CONCAT115((0 < sVar35) * (sVar35 < 0xff) * SUB161(auVar70 >> 0x70,0) -
                              (0xff < sVar35),CONCAT114(cVar15,auVar69)) >> 0x70,0);
    uVar66 = CONCAT17((0 < sVar27) * (sVar27 < 0xff) * cVar15 - (0xff < sVar27),
                      CONCAT16(cVar14,uVar65));
    cVar15 = (0 < sVar62) * (sVar62 < 0xff) * cVar19 - (0xff < sVar62);
    sVar27 = (short)((uint)uVar71 >> 0x10);
    Var67 = CONCAT19((0 < sVar27) * (sVar27 < 0xff) * cVar20 - (0xff < sVar27),
                     CONCAT18(cVar15,uVar66));
    sVar27 = (short)((uint6)uVar72 >> 0x20);
    cVar13 = (0 < sVar27) * (sVar27 < 0xff) * cVar21 - (0xff < sVar27);
    sVar27 = (short)((ulong)uVar73 >> 0x30);
    auVar68 = CONCAT111((0 < sVar27) * (sVar27 < 0xff) * cVar22 - (0xff < sVar27),
                        CONCAT110(cVar13,Var67));
    sVar27 = (short)((unkuint10)Var74 >> 0x40);
    cVar10 = (0 < sVar27) * (sVar27 < 0xff) * cVar23 - (0xff < sVar27);
    sVar27 = SUB122(auVar75 >> 0x50,0);
    auVar69 = CONCAT113((0 < sVar27) * (sVar27 < 0xff) * cVar24 - (0xff < sVar27),
                        CONCAT112(cVar10,auVar68));
    sVar27 = SUB142(auVar76 >> 0x60,0);
    cVar18 = (0 < sVar27) * (sVar27 < 0xff) * cVar25 - (0xff < sVar27);
    sVar38 = SUB162(CONCAT115((0 < sVar36) * (sVar36 < 0xff) * SUB161(auVar77 >> 0x70,0) -
                              (0xff < sVar36),CONCAT114(cVar26,auVar76)) >> 0x70,0);
    sVar27 = (short)((uint)uVar55 >> 0x10);
    sVar35 = (short)((uint6)uVar56 >> 0x20);
    sVar36 = (short)((ulong)uVar57 >> 0x30);
    sVar53 = (short)((unkuint10)Var58 >> 0x40);
    sVar62 = SUB122(auVar59 >> 0x50,0);
    sVar28 = SUB142(auVar60 >> 0x60,0);
    sVar37 = SUB162(CONCAT115((0 < sVar37) * (sVar37 < 0xff) * cVar17 - (0xff < sVar37),
                              CONCAT114(cVar9,auVar60)) >> 0x70,0);
    sVar29 = (short)((uint)uVar64 >> 0x10);
    sVar30 = (short)((uint6)uVar65 >> 0x20);
    sVar31 = (short)((ulong)uVar66 >> 0x30);
    sVar32 = (short)((unkuint10)Var67 >> 0x40);
    sVar33 = SUB122(auVar68 >> 0x50,0);
    sVar34 = SUB142(auVar69 >> 0x60,0);
    sVar38 = SUB162(CONCAT115((0 < sVar38) * (sVar38 < 0xff) * cVar26 - (0xff < sVar38),
                              CONCAT114(cVar18,auVar69)) >> 0x70,0);
    pbVar1 = (byte *)((long)__ptr + lVar40);
    *pbVar1 = ((0 < sVar54) * (sVar54 < 0xff) * cVar2 - (0xff < sVar54)) + 1U & 3;
    pbVar1[1] = ((0 < sVar27) * (sVar27 < 0xff) * cVar3 - (0xff < sVar27)) + 1U & 3;
    pbVar1[2] = ((0 < sVar35) * (sVar35 < 0xff) * cVar4 - (0xff < sVar35)) + 1U & 3;
    pbVar1[3] = ((0 < sVar36) * (sVar36 < 0xff) * cVar5 - (0xff < sVar36)) + 1U & 3;
    pbVar1[4] = ((0 < sVar53) * (sVar53 < 0xff) * cVar6 - (0xff < sVar53)) + 1U & 3;
    pbVar1[5] = ((0 < sVar62) * (sVar62 < 0xff) * cVar7 - (0xff < sVar62)) + 1U & 3;
    pbVar1[6] = ((0 < sVar28) * (sVar28 < 0xff) * cVar8 - (0xff < sVar28)) + 1U & 3;
    pbVar1[7] = ((0 < sVar37) * (sVar37 < 0xff) * cVar9 - (0xff < sVar37)) + 1U & 3;
    pbVar1[8] = ((0 < sVar63) * (sVar63 < 0xff) * cVar16 - (0xff < sVar63)) + 1U & 3;
    pbVar1[9] = ((0 < sVar29) * (sVar29 < 0xff) * cVar11 - (0xff < sVar29)) + 1U & 3;
    pbVar1[10] = ((0 < sVar30) * (sVar30 < 0xff) * cVar12 - (0xff < sVar30)) + 1U & 3;
    pbVar1[0xb] = ((0 < sVar31) * (sVar31 < 0xff) * cVar14 - (0xff < sVar31)) + 1U & 3;
    pbVar1[0xc] = ((0 < sVar32) * (sVar32 < 0xff) * cVar15 - (0xff < sVar32)) + 1U & 3;
    pbVar1[0xd] = ((0 < sVar33) * (sVar33 < 0xff) * cVar13 - (0xff < sVar33)) + 1U & 3;
    pbVar1[0xe] = ((0 < sVar34) * (sVar34 < 0xff) * cVar10 - (0xff < sVar34)) + 1U & 3;
    pbVar1[0xf] = ((0 < sVar38) * (sVar38 < 0xff) * cVar18 - (0xff < sVar38)) + 1U & 3;
    lVar40 = lVar40 + 0x10;
    auVar52 = CONCAT88(SUB168(auVar52 >> 0x40,0) + 0x10,SUB168(auVar52,0) + 0x10);
    auVar51 = CONCAT88(SUB168(auVar51 >> 0x40,0) + 0x10,SUB168(auVar51,0) + 0x10);
    auVar50 = CONCAT88(SUB168(auVar50 >> 0x40,0) + 0x10,SUB168(auVar50,0) + 0x10);
    auVar49 = CONCAT88(SUB168(auVar49 >> 0x40,0) + 0x10,SUB168(auVar49,0) + 0x10);
    auVar48 = CONCAT88(SUB168(auVar48 >> 0x40,0) + 0x10,SUB168(auVar48,0) + 0x10);
    auVar47 = CONCAT88(SUB168(auVar47 >> 0x40,0) + 0x10,SUB168(auVar47,0) + 0x10);
    auVar46 = CONCAT88(SUB168(auVar46 >> 0x40,0) + 0x10,SUB168(auVar46,0) + 0x10);
    auVar45 = CONCAT88(SUB168(auVar45 >> 0x40,0) + 0x10,SUB168(auVar45,0) + 0x10);
  } while (lVar40 != 0x9c0);
  *(undefined4 *)((long)__ptr + 0x9c0) = 0x30201;
  memset(__s,0,25000000);
  kernel_nussinov(0x9c4,__ptr,__s);
  __stream = _DAT_1a13d8d48388b4c;
  if ((0x2a < param_1) && (**param_2 == '\0')) {
    fwrite("==BEGIN DUMP_ARRAYS==\n",0x16,1,_DAT_1a13d8d48388b4c);
    fprintf(__stream,"begin dump: %s","table");
    iVar42 = 0x9c4;
    lVar44 = 0;
    iVar41 = 0;
    lVar40 = lVar44;
    iVar43 = iVar41;
    do {
      do {
        if ((iVar41 * -0x33333333 + 0x19999998U >> 2 | iVar41 * 0x40000000) < 0xccccccd) {
          fputc(10,__stream);
        }
        fprintf(__stream,(char *)&_L_str_5,(ulong)*(uint *)((long)__s + lVar44 * 4 + lVar40 * 10000)
               );
        iVar41 = iVar41 + 1;
        lVar44 = lVar44 + 1;
      } while (lVar44 != 0x9c4);
      iVar41 = iVar43 + iVar42;
      lVar44 = lVar40 + 1;
      iVar42 = iVar42 + -1;
      lVar40 = lVar44;
      iVar43 = iVar41;
    } while (lVar44 != 0x9c4);
    fprintf(__stream,"\nend   dump: %s\n","table");
    fwrite("==END   DUMP_ARRAYS==\n",0x16,1,__stream);
  }
  free(__ptr);
  free(__s);
  return 0;
}


