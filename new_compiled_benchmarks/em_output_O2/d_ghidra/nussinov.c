#include "nussinov.h"



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 submain(int param_1,char **param_2)

{
  ulong uVar1;
  byte *pbVar2;
  int *piVar3;
  char cVar4;
  char cVar12;
  char cVar20;
  char cVar21;
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
  short sVar39;
  short sVar40;
  undefined auVar41 [16];
  FILE *__stream;
  int iVar42;
  void *__ptr;
  void *__s;
  long lVar43;
  ulong uVar44;
  ulong uVar45;
  ulong uVar46;
  ulong uVar47;
  int iVar48;
  int iVar49;
  ulong uVar50;
  long lVar51;
  bool bVar52;
  undefined auVar53 [16];
  undefined auVar54 [16];
  undefined auVar55 [16];
  undefined auVar56 [16];
  undefined auVar57 [16];
  undefined auVar58 [16];
  undefined auVar59 [16];
  undefined auVar60 [16];
  short sVar61;
  short sVar62;
  undefined auVar69 [16];
  short sVar70;
  short sVar71;
  undefined auVar78 [16];
  undefined4 uVar79;
  undefined auVar85 [16];
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  char cVar27;
  char cVar28;
  undefined4 uVar63;
  undefined6 uVar64;
  undefined8 uVar65;
  unkbyte10 Var66;
  undefined auVar67 [12];
  undefined auVar68 [14];
  undefined4 uVar72;
  undefined6 uVar73;
  undefined8 uVar74;
  unkbyte10 Var75;
  undefined auVar76 [12];
  undefined auVar77 [14];
  undefined6 uVar80;
  undefined8 uVar81;
  unkbyte10 Var82;
  undefined auVar83 [12];
  undefined auVar84 [14];
  
  __ptr = (void *)polybench_alloc_data(0x9c4,1);
  __s = (void *)polybench_alloc_data(0x5f5e10);
  auVar41 = __LCPI0_8;
  lVar43 = 0;
  auVar53 = __LCPI0_0;
  auVar54 = __LCPI0_1;
  auVar55 = __LCPI0_2;
  auVar56 = __LCPI0_3;
  auVar57 = __LCPI0_4;
  auVar58 = __LCPI0_5;
  auVar59 = __LCPI0_6;
  auVar60 = __LCPI0_7;
  do {
    auVar69 = auVar60 & auVar41;
    auVar78 = auVar59 & auVar41;
    sVar29 = SUB162(auVar69,0);
    cVar4 = (0 < sVar29) * (sVar29 < 0xff) * SUB161(auVar69,0) - (0xff < sVar29);
    sVar29 = SUB162(auVar69 >> 0x10,0);
    sVar61 = CONCAT11((0 < sVar29) * (sVar29 < 0xff) * SUB161(auVar69 >> 0x10,0) - (0xff < sVar29),
                      cVar4);
    sVar29 = SUB162(auVar69 >> 0x20,0);
    cVar5 = (0 < sVar29) * (sVar29 < 0xff) * SUB161(auVar69 >> 0x20,0) - (0xff < sVar29);
    sVar29 = SUB162(auVar69 >> 0x30,0);
    uVar63 = CONCAT13((0 < sVar29) * (sVar29 < 0xff) * SUB161(auVar69 >> 0x30,0) - (0xff < sVar29),
                      CONCAT12(cVar5,sVar61));
    sVar29 = SUB162(auVar69 >> 0x40,0);
    cVar6 = (0 < sVar29) * (sVar29 < 0xff) * SUB161(auVar69 >> 0x40,0) - (0xff < sVar29);
    sVar29 = SUB162(auVar69 >> 0x50,0);
    uVar64 = CONCAT15((0 < sVar29) * (sVar29 < 0xff) * SUB161(auVar69 >> 0x50,0) - (0xff < sVar29),
                      CONCAT14(cVar6,uVar63));
    sVar29 = SUB162(auVar69 >> 0x60,0);
    cVar7 = (0 < sVar29) * (sVar29 < 0xff) * SUB161(auVar69 >> 0x60,0) - (0xff < sVar29);
    sVar29 = SUB162(auVar69 >> 0x70,0);
    uVar65 = CONCAT17((0 < sVar29) * (sVar29 < 0xff) * SUB161(auVar69 >> 0x70,0) - (0xff < sVar29),
                      CONCAT16(cVar7,uVar64));
    sVar29 = SUB162(auVar78,0);
    cVar8 = (0 < sVar29) * (sVar29 < 0xff) * SUB161(auVar78,0) - (0xff < sVar29);
    sVar29 = SUB162(auVar78 >> 0x10,0);
    Var66 = CONCAT19((0 < sVar29) * (sVar29 < 0xff) * SUB161(auVar78 >> 0x10,0) - (0xff < sVar29),
                     CONCAT18(cVar8,uVar65));
    sVar29 = SUB162(auVar78 >> 0x20,0);
    cVar9 = (0 < sVar29) * (sVar29 < 0xff) * SUB161(auVar78 >> 0x20,0) - (0xff < sVar29);
    sVar29 = SUB162(auVar78 >> 0x30,0);
    auVar67 = CONCAT111((0 < sVar29) * (sVar29 < 0xff) * SUB161(auVar78 >> 0x30,0) - (0xff < sVar29)
                        ,CONCAT110(cVar9,Var66));
    sVar29 = SUB162(auVar78 >> 0x40,0);
    cVar10 = (0 < sVar29) * (sVar29 < 0xff) * SUB161(auVar78 >> 0x40,0) - (0xff < sVar29);
    sVar29 = SUB162(auVar78 >> 0x50,0);
    auVar68 = CONCAT113((0 < sVar29) * (sVar29 < 0xff) * SUB161(auVar78 >> 0x50,0) - (0xff < sVar29)
                        ,CONCAT112(cVar10,auVar67));
    sVar29 = SUB162(auVar78 >> 0x60,0);
    cVar11 = (0 < sVar29) * (sVar29 < 0xff) * SUB161(auVar78 >> 0x60,0) - (0xff < sVar29);
    sVar37 = SUB162(auVar78 >> 0x70,0);
    auVar69 = auVar58 & auVar41;
    auVar85 = auVar57 & auVar41;
    sVar29 = SUB162(auVar69,0);
    cVar12 = (0 < sVar29) * (sVar29 < 0xff) * SUB161(auVar69,0) - (0xff < sVar29);
    sVar29 = SUB162(auVar69 >> 0x10,0);
    sVar70 = CONCAT11((0 < sVar29) * (sVar29 < 0xff) * SUB161(auVar69 >> 0x10,0) - (0xff < sVar29),
                      cVar12);
    sVar29 = SUB162(auVar69 >> 0x20,0);
    cVar13 = (0 < sVar29) * (sVar29 < 0xff) * SUB161(auVar69 >> 0x20,0) - (0xff < sVar29);
    sVar29 = SUB162(auVar69 >> 0x30,0);
    uVar72 = CONCAT13((0 < sVar29) * (sVar29 < 0xff) * SUB161(auVar69 >> 0x30,0) - (0xff < sVar29),
                      CONCAT12(cVar13,sVar70));
    sVar29 = SUB162(auVar69 >> 0x40,0);
    cVar14 = (0 < sVar29) * (sVar29 < 0xff) * SUB161(auVar69 >> 0x40,0) - (0xff < sVar29);
    sVar29 = SUB162(auVar69 >> 0x50,0);
    uVar73 = CONCAT15((0 < sVar29) * (sVar29 < 0xff) * SUB161(auVar69 >> 0x50,0) - (0xff < sVar29),
                      CONCAT14(cVar14,uVar72));
    sVar29 = SUB162(auVar69 >> 0x60,0);
    cVar15 = (0 < sVar29) * (sVar29 < 0xff) * SUB161(auVar69 >> 0x60,0) - (0xff < sVar29);
    sVar29 = SUB162(auVar69 >> 0x70,0);
    uVar74 = CONCAT17((0 < sVar29) * (sVar29 < 0xff) * SUB161(auVar69 >> 0x70,0) - (0xff < sVar29),
                      CONCAT16(cVar15,uVar73));
    sVar29 = SUB162(auVar85,0);
    cVar16 = (0 < sVar29) * (sVar29 < 0xff) * SUB161(auVar85,0) - (0xff < sVar29);
    sVar29 = SUB162(auVar85 >> 0x10,0);
    Var75 = CONCAT19((0 < sVar29) * (sVar29 < 0xff) * SUB161(auVar85 >> 0x10,0) - (0xff < sVar29),
                     CONCAT18(cVar16,uVar74));
    sVar29 = SUB162(auVar85 >> 0x20,0);
    cVar17 = (0 < sVar29) * (sVar29 < 0xff) * SUB161(auVar85 >> 0x20,0) - (0xff < sVar29);
    sVar29 = SUB162(auVar85 >> 0x30,0);
    auVar76 = CONCAT111((0 < sVar29) * (sVar29 < 0xff) * SUB161(auVar85 >> 0x30,0) - (0xff < sVar29)
                        ,CONCAT110(cVar17,Var75));
    sVar29 = SUB162(auVar85 >> 0x40,0);
    cVar18 = (0 < sVar29) * (sVar29 < 0xff) * SUB161(auVar85 >> 0x40,0) - (0xff < sVar29);
    sVar29 = SUB162(auVar85 >> 0x50,0);
    auVar77 = CONCAT113((0 < sVar29) * (sVar29 < 0xff) * SUB161(auVar85 >> 0x50,0) - (0xff < sVar29)
                        ,CONCAT112(cVar18,auVar76));
    sVar29 = SUB162(auVar85 >> 0x60,0);
    cVar19 = (0 < sVar29) * (sVar29 < 0xff) * SUB161(auVar85 >> 0x60,0) - (0xff < sVar29);
    sVar38 = SUB162(auVar85 >> 0x70,0);
    cVar4 = (0 < sVar61) * (sVar61 < 0xff) * cVar4 - (0xff < sVar61);
    sVar29 = (short)((uint)uVar63 >> 0x10);
    sVar62 = CONCAT11((0 < sVar29) * (sVar29 < 0xff) * cVar5 - (0xff < sVar29),cVar4);
    sVar29 = (short)((uint6)uVar64 >> 0x20);
    cVar5 = (0 < sVar29) * (sVar29 < 0xff) * cVar6 - (0xff < sVar29);
    sVar29 = (short)((ulong)uVar65 >> 0x30);
    uVar63 = CONCAT13((0 < sVar29) * (sVar29 < 0xff) * cVar7 - (0xff < sVar29),
                      CONCAT12(cVar5,sVar62));
    sVar29 = (short)((unkuint10)Var66 >> 0x40);
    cVar6 = (0 < sVar29) * (sVar29 < 0xff) * cVar8 - (0xff < sVar29);
    sVar29 = SUB122(auVar67 >> 0x50,0);
    uVar64 = CONCAT15((0 < sVar29) * (sVar29 < 0xff) * cVar9 - (0xff < sVar29),
                      CONCAT14(cVar6,uVar63));
    sVar29 = SUB142(auVar68 >> 0x60,0);
    cVar7 = (0 < sVar29) * (sVar29 < 0xff) * cVar10 - (0xff < sVar29);
    sVar29 = SUB162(CONCAT115((0 < sVar37) * (sVar37 < 0xff) * SUB161(auVar78 >> 0x70,0) -
                              (0xff < sVar37),CONCAT114(cVar11,auVar68)) >> 0x70,0);
    uVar65 = CONCAT17((0 < sVar29) * (sVar29 < 0xff) * cVar11 - (0xff < sVar29),
                      CONCAT16(cVar7,uVar64));
    cVar8 = (0 < sVar70) * (sVar70 < 0xff) * cVar12 - (0xff < sVar70);
    sVar29 = (short)((uint)uVar72 >> 0x10);
    Var66 = CONCAT19((0 < sVar29) * (sVar29 < 0xff) * cVar13 - (0xff < sVar29),
                     CONCAT18(cVar8,uVar65));
    sVar29 = (short)((uint6)uVar73 >> 0x20);
    cVar9 = (0 < sVar29) * (sVar29 < 0xff) * cVar14 - (0xff < sVar29);
    sVar29 = (short)((ulong)uVar74 >> 0x30);
    auVar67 = CONCAT111((0 < sVar29) * (sVar29 < 0xff) * cVar15 - (0xff < sVar29),
                        CONCAT110(cVar9,Var66));
    sVar29 = (short)((unkuint10)Var75 >> 0x40);
    cVar10 = (0 < sVar29) * (sVar29 < 0xff) * cVar16 - (0xff < sVar29);
    sVar29 = SUB122(auVar76 >> 0x50,0);
    auVar68 = CONCAT113((0 < sVar29) * (sVar29 < 0xff) * cVar17 - (0xff < sVar29),
                        CONCAT112(cVar10,auVar67));
    sVar29 = SUB142(auVar77 >> 0x60,0);
    cVar11 = (0 < sVar29) * (sVar29 < 0xff) * cVar18 - (0xff < sVar29);
    sVar39 = SUB162(CONCAT115((0 < sVar38) * (sVar38 < 0xff) * SUB161(auVar85 >> 0x70,0) -
                              (0xff < sVar38),CONCAT114(cVar19,auVar77)) >> 0x70,0);
    auVar69 = auVar56 & auVar41;
    auVar78 = auVar55 & auVar41;
    sVar29 = SUB162(auVar69,0);
    cVar18 = (0 < sVar29) * (sVar29 < 0xff) * SUB161(auVar69,0) - (0xff < sVar29);
    sVar29 = SUB162(auVar69 >> 0x10,0);
    sVar61 = CONCAT11((0 < sVar29) * (sVar29 < 0xff) * SUB161(auVar69 >> 0x10,0) - (0xff < sVar29),
                      cVar18);
    sVar29 = SUB162(auVar69 >> 0x20,0);
    cVar12 = (0 < sVar29) * (sVar29 < 0xff) * SUB161(auVar69 >> 0x20,0) - (0xff < sVar29);
    sVar29 = SUB162(auVar69 >> 0x30,0);
    uVar72 = CONCAT13((0 < sVar29) * (sVar29 < 0xff) * SUB161(auVar69 >> 0x30,0) - (0xff < sVar29),
                      CONCAT12(cVar12,sVar61));
    sVar29 = SUB162(auVar69 >> 0x40,0);
    cVar13 = (0 < sVar29) * (sVar29 < 0xff) * SUB161(auVar69 >> 0x40,0) - (0xff < sVar29);
    sVar29 = SUB162(auVar69 >> 0x50,0);
    uVar73 = CONCAT15((0 < sVar29) * (sVar29 < 0xff) * SUB161(auVar69 >> 0x50,0) - (0xff < sVar29),
                      CONCAT14(cVar13,uVar72));
    sVar29 = SUB162(auVar69 >> 0x60,0);
    cVar14 = (0 < sVar29) * (sVar29 < 0xff) * SUB161(auVar69 >> 0x60,0) - (0xff < sVar29);
    sVar29 = SUB162(auVar69 >> 0x70,0);
    uVar74 = CONCAT17((0 < sVar29) * (sVar29 < 0xff) * SUB161(auVar69 >> 0x70,0) - (0xff < sVar29),
                      CONCAT16(cVar14,uVar73));
    sVar29 = SUB162(auVar78,0);
    cVar20 = (0 < sVar29) * (sVar29 < 0xff) * SUB161(auVar78,0) - (0xff < sVar29);
    sVar29 = SUB162(auVar78 >> 0x10,0);
    Var75 = CONCAT19((0 < sVar29) * (sVar29 < 0xff) * SUB161(auVar78 >> 0x10,0) - (0xff < sVar29),
                     CONCAT18(cVar20,uVar74));
    sVar29 = SUB162(auVar78 >> 0x20,0);
    cVar15 = (0 < sVar29) * (sVar29 < 0xff) * SUB161(auVar78 >> 0x20,0) - (0xff < sVar29);
    sVar29 = SUB162(auVar78 >> 0x30,0);
    auVar76 = CONCAT111((0 < sVar29) * (sVar29 < 0xff) * SUB161(auVar78 >> 0x30,0) - (0xff < sVar29)
                        ,CONCAT110(cVar15,Var75));
    sVar29 = SUB162(auVar78 >> 0x40,0);
    cVar16 = (0 < sVar29) * (sVar29 < 0xff) * SUB161(auVar78 >> 0x40,0) - (0xff < sVar29);
    sVar29 = SUB162(auVar78 >> 0x50,0);
    auVar77 = CONCAT113((0 < sVar29) * (sVar29 < 0xff) * SUB161(auVar78 >> 0x50,0) - (0xff < sVar29)
                        ,CONCAT112(cVar16,auVar76));
    sVar29 = SUB162(auVar78 >> 0x60,0);
    cVar17 = (0 < sVar29) * (sVar29 < 0xff) * SUB161(auVar78 >> 0x60,0) - (0xff < sVar29);
    sVar37 = SUB162(auVar78 >> 0x70,0);
    auVar69 = auVar54 & auVar41;
    auVar85 = auVar53 & auVar41;
    sVar29 = SUB162(auVar69,0);
    cVar21 = (0 < sVar29) * (sVar29 < 0xff) * SUB161(auVar69,0) - (0xff < sVar29);
    sVar29 = SUB162(auVar69 >> 0x10,0);
    sVar70 = CONCAT11((0 < sVar29) * (sVar29 < 0xff) * SUB161(auVar69 >> 0x10,0) - (0xff < sVar29),
                      cVar21);
    sVar29 = SUB162(auVar69 >> 0x20,0);
    cVar22 = (0 < sVar29) * (sVar29 < 0xff) * SUB161(auVar69 >> 0x20,0) - (0xff < sVar29);
    sVar29 = SUB162(auVar69 >> 0x30,0);
    uVar79 = CONCAT13((0 < sVar29) * (sVar29 < 0xff) * SUB161(auVar69 >> 0x30,0) - (0xff < sVar29),
                      CONCAT12(cVar22,sVar70));
    sVar29 = SUB162(auVar69 >> 0x40,0);
    cVar23 = (0 < sVar29) * (sVar29 < 0xff) * SUB161(auVar69 >> 0x40,0) - (0xff < sVar29);
    sVar29 = SUB162(auVar69 >> 0x50,0);
    uVar80 = CONCAT15((0 < sVar29) * (sVar29 < 0xff) * SUB161(auVar69 >> 0x50,0) - (0xff < sVar29),
                      CONCAT14(cVar23,uVar79));
    sVar29 = SUB162(auVar69 >> 0x60,0);
    cVar24 = (0 < sVar29) * (sVar29 < 0xff) * SUB161(auVar69 >> 0x60,0) - (0xff < sVar29);
    sVar29 = SUB162(auVar69 >> 0x70,0);
    uVar81 = CONCAT17((0 < sVar29) * (sVar29 < 0xff) * SUB161(auVar69 >> 0x70,0) - (0xff < sVar29),
                      CONCAT16(cVar24,uVar80));
    sVar29 = SUB162(auVar85,0);
    cVar25 = (0 < sVar29) * (sVar29 < 0xff) * SUB161(auVar85,0) - (0xff < sVar29);
    sVar29 = SUB162(auVar85 >> 0x10,0);
    Var82 = CONCAT19((0 < sVar29) * (sVar29 < 0xff) * SUB161(auVar85 >> 0x10,0) - (0xff < sVar29),
                     CONCAT18(cVar25,uVar81));
    sVar29 = SUB162(auVar85 >> 0x20,0);
    cVar26 = (0 < sVar29) * (sVar29 < 0xff) * SUB161(auVar85 >> 0x20,0) - (0xff < sVar29);
    sVar29 = SUB162(auVar85 >> 0x30,0);
    auVar83 = CONCAT111((0 < sVar29) * (sVar29 < 0xff) * SUB161(auVar85 >> 0x30,0) - (0xff < sVar29)
                        ,CONCAT110(cVar26,Var82));
    sVar29 = SUB162(auVar85 >> 0x40,0);
    cVar27 = (0 < sVar29) * (sVar29 < 0xff) * SUB161(auVar85 >> 0x40,0) - (0xff < sVar29);
    sVar29 = SUB162(auVar85 >> 0x50,0);
    auVar84 = CONCAT113((0 < sVar29) * (sVar29 < 0xff) * SUB161(auVar85 >> 0x50,0) - (0xff < sVar29)
                        ,CONCAT112(cVar27,auVar83));
    sVar29 = SUB162(auVar85 >> 0x60,0);
    cVar28 = (0 < sVar29) * (sVar29 < 0xff) * SUB161(auVar85 >> 0x60,0) - (0xff < sVar29);
    sVar38 = SUB162(auVar85 >> 0x70,0);
    cVar18 = (0 < sVar61) * (sVar61 < 0xff) * cVar18 - (0xff < sVar61);
    sVar29 = (short)((uint)uVar72 >> 0x10);
    sVar71 = CONCAT11((0 < sVar29) * (sVar29 < 0xff) * cVar12 - (0xff < sVar29),cVar18);
    sVar29 = (short)((uint6)uVar73 >> 0x20);
    cVar13 = (0 < sVar29) * (sVar29 < 0xff) * cVar13 - (0xff < sVar29);
    sVar29 = (short)((ulong)uVar74 >> 0x30);
    uVar72 = CONCAT13((0 < sVar29) * (sVar29 < 0xff) * cVar14 - (0xff < sVar29),
                      CONCAT12(cVar13,sVar71));
    sVar29 = (short)((unkuint10)Var75 >> 0x40);
    cVar14 = (0 < sVar29) * (sVar29 < 0xff) * cVar20 - (0xff < sVar29);
    sVar29 = SUB122(auVar76 >> 0x50,0);
    uVar73 = CONCAT15((0 < sVar29) * (sVar29 < 0xff) * cVar15 - (0xff < sVar29),
                      CONCAT14(cVar14,uVar72));
    sVar29 = SUB142(auVar77 >> 0x60,0);
    cVar16 = (0 < sVar29) * (sVar29 < 0xff) * cVar16 - (0xff < sVar29);
    sVar29 = SUB162(CONCAT115((0 < sVar37) * (sVar37 < 0xff) * SUB161(auVar78 >> 0x70,0) -
                              (0xff < sVar37),CONCAT114(cVar17,auVar77)) >> 0x70,0);
    uVar74 = CONCAT17((0 < sVar29) * (sVar29 < 0xff) * cVar17 - (0xff < sVar29),
                      CONCAT16(cVar16,uVar73));
    cVar17 = (0 < sVar70) * (sVar70 < 0xff) * cVar21 - (0xff < sVar70);
    sVar29 = (short)((uint)uVar79 >> 0x10);
    Var75 = CONCAT19((0 < sVar29) * (sVar29 < 0xff) * cVar22 - (0xff < sVar29),
                     CONCAT18(cVar17,uVar74));
    sVar29 = (short)((uint6)uVar80 >> 0x20);
    cVar15 = (0 < sVar29) * (sVar29 < 0xff) * cVar23 - (0xff < sVar29);
    sVar29 = (short)((ulong)uVar81 >> 0x30);
    auVar76 = CONCAT111((0 < sVar29) * (sVar29 < 0xff) * cVar24 - (0xff < sVar29),
                        CONCAT110(cVar15,Var75));
    sVar29 = (short)((unkuint10)Var82 >> 0x40);
    cVar12 = (0 < sVar29) * (sVar29 < 0xff) * cVar25 - (0xff < sVar29);
    sVar29 = SUB122(auVar83 >> 0x50,0);
    auVar77 = CONCAT113((0 < sVar29) * (sVar29 < 0xff) * cVar26 - (0xff < sVar29),
                        CONCAT112(cVar12,auVar76));
    sVar29 = SUB142(auVar84 >> 0x60,0);
    cVar20 = (0 < sVar29) * (sVar29 < 0xff) * cVar27 - (0xff < sVar29);
    sVar40 = SUB162(CONCAT115((0 < sVar38) * (sVar38 < 0xff) * SUB161(auVar85 >> 0x70,0) -
                              (0xff < sVar38),CONCAT114(cVar28,auVar84)) >> 0x70,0);
    sVar29 = (short)((uint)uVar63 >> 0x10);
    sVar37 = (short)((uint6)uVar64 >> 0x20);
    sVar38 = (short)((ulong)uVar65 >> 0x30);
    sVar61 = (short)((unkuint10)Var66 >> 0x40);
    sVar70 = SUB122(auVar67 >> 0x50,0);
    sVar30 = SUB142(auVar68 >> 0x60,0);
    sVar39 = SUB162(CONCAT115((0 < sVar39) * (sVar39 < 0xff) * cVar19 - (0xff < sVar39),
                              CONCAT114(cVar11,auVar68)) >> 0x70,0);
    sVar31 = (short)((uint)uVar72 >> 0x10);
    sVar32 = (short)((uint6)uVar73 >> 0x20);
    sVar33 = (short)((ulong)uVar74 >> 0x30);
    sVar34 = (short)((unkuint10)Var75 >> 0x40);
    sVar35 = SUB122(auVar76 >> 0x50,0);
    sVar36 = SUB142(auVar77 >> 0x60,0);
    sVar40 = SUB162(CONCAT115((0 < sVar40) * (sVar40 < 0xff) * cVar28 - (0xff < sVar40),
                              CONCAT114(cVar20,auVar77)) >> 0x70,0);
    pbVar2 = (byte *)((long)__ptr + lVar43);
    *pbVar2 = ((0 < sVar62) * (sVar62 < 0xff) * cVar4 - (0xff < sVar62)) + 1U & 3;
    pbVar2[1] = ((0 < sVar29) * (sVar29 < 0xff) * cVar5 - (0xff < sVar29)) + 1U & 3;
    pbVar2[2] = ((0 < sVar37) * (sVar37 < 0xff) * cVar6 - (0xff < sVar37)) + 1U & 3;
    pbVar2[3] = ((0 < sVar38) * (sVar38 < 0xff) * cVar7 - (0xff < sVar38)) + 1U & 3;
    pbVar2[4] = ((0 < sVar61) * (sVar61 < 0xff) * cVar8 - (0xff < sVar61)) + 1U & 3;
    pbVar2[5] = ((0 < sVar70) * (sVar70 < 0xff) * cVar9 - (0xff < sVar70)) + 1U & 3;
    pbVar2[6] = ((0 < sVar30) * (sVar30 < 0xff) * cVar10 - (0xff < sVar30)) + 1U & 3;
    pbVar2[7] = ((0 < sVar39) * (sVar39 < 0xff) * cVar11 - (0xff < sVar39)) + 1U & 3;
    pbVar2[8] = ((0 < sVar71) * (sVar71 < 0xff) * cVar18 - (0xff < sVar71)) + 1U & 3;
    pbVar2[9] = ((0 < sVar31) * (sVar31 < 0xff) * cVar13 - (0xff < sVar31)) + 1U & 3;
    pbVar2[10] = ((0 < sVar32) * (sVar32 < 0xff) * cVar14 - (0xff < sVar32)) + 1U & 3;
    pbVar2[0xb] = ((0 < sVar33) * (sVar33 < 0xff) * cVar16 - (0xff < sVar33)) + 1U & 3;
    pbVar2[0xc] = ((0 < sVar34) * (sVar34 < 0xff) * cVar17 - (0xff < sVar34)) + 1U & 3;
    pbVar2[0xd] = ((0 < sVar35) * (sVar35 < 0xff) * cVar15 - (0xff < sVar35)) + 1U & 3;
    pbVar2[0xe] = ((0 < sVar36) * (sVar36 < 0xff) * cVar12 - (0xff < sVar36)) + 1U & 3;
    pbVar2[0xf] = ((0 < sVar40) * (sVar40 < 0xff) * cVar20 - (0xff < sVar40)) + 1U & 3;
    lVar43 = lVar43 + 0x10;
    auVar60 = CONCAT88(SUB168(auVar60 >> 0x40,0) + 0x10,SUB168(auVar60,0) + 0x10);
    auVar59 = CONCAT88(SUB168(auVar59 >> 0x40,0) + 0x10,SUB168(auVar59,0) + 0x10);
    auVar58 = CONCAT88(SUB168(auVar58 >> 0x40,0) + 0x10,SUB168(auVar58,0) + 0x10);
    auVar57 = CONCAT88(SUB168(auVar57 >> 0x40,0) + 0x10,SUB168(auVar57,0) + 0x10);
    auVar56 = CONCAT88(SUB168(auVar56 >> 0x40,0) + 0x10,SUB168(auVar56,0) + 0x10);
    auVar55 = CONCAT88(SUB168(auVar55 >> 0x40,0) + 0x10,SUB168(auVar55,0) + 0x10);
    auVar54 = CONCAT88(SUB168(auVar54 >> 0x40,0) + 0x10,SUB168(auVar54,0) + 0x10);
    auVar53 = CONCAT88(SUB168(auVar53 >> 0x40,0) + 0x10,SUB168(auVar53,0) + 0x10);
  } while (lVar43 != 0x9c0);
  *(undefined4 *)((long)__ptr + 0x9c0) = 0x30201;
  memset(__s,0,25000000);
  uVar44 = 0x9c4;
  uVar45 = 0x9c3;
  do {
    if (uVar45 < 0x9c3) {
      uVar1 = uVar45 + 1;
      uVar46 = 0;
      uVar47 = uVar44;
      do {
        iVar49 = *(int *)((long)__s + uVar47 * 4 + uVar45 * 10000 + -4);
        iVar48 = *(int *)((long)__s + uVar47 * 4 + uVar45 * 10000);
        if (iVar49 < iVar48) {
          iVar49 = iVar48;
        }
        iVar48 = *(int *)((long)__s + uVar47 * 4 + uVar1 * 10000);
        if (iVar49 <= iVar48) {
          iVar49 = iVar48;
        }
        *(int *)((long)__s + uVar47 * 4 + uVar45 * 10000) = iVar49;
        iVar48 = *(int *)((long)__s + uVar47 * 4 + uVar1 * 10000 + -4);
        if (uVar45 < uVar47 - 1) {
          iVar48 = iVar48 + (uint)((int)*(char *)((long)__ptr + uVar47) +
                                   (int)*(char *)((long)__ptr + uVar45) == 3);
        }
        piVar3 = (int *)((long)__s + uVar47 * 4 + uVar45 * 10000);
        if (iVar48 < iVar49) {
          iVar48 = iVar49;
        }
        *piVar3 = iVar48;
        if (uVar1 < uVar47) {
          uVar50 = uVar44;
          if ((uVar46 & 1) != 0) {
            iVar49 = *(int *)((long)__s + uVar47 * 4 + (uVar44 + 1) * 10000) +
                     *(int *)((long)__s + uVar44 * 4 + uVar45 * 10000);
            if (iVar48 <= iVar49) {
              iVar48 = iVar49;
            }
            *piVar3 = iVar48;
            uVar50 = uVar44 + 1;
          }
          if (uVar46 != 1) {
            do {
              iVar49 = *(int *)((long)__s + uVar47 * 4 + uVar50 * 10000 + 10000) +
                       *(int *)((long)__s + uVar50 * 4 + uVar45 * 10000);
              if (iVar49 < iVar48) {
                iVar49 = iVar48;
              }
              *piVar3 = iVar49;
              iVar48 = *(int *)((long)__s + uVar47 * 4 + uVar50 * 10000 + 20000) +
                       *(int *)((long)__s + uVar50 * 4 + uVar45 * 10000 + 4);
              uVar50 = uVar50 + 2;
              if (iVar48 < iVar49) {
                iVar48 = iVar49;
              }
              *piVar3 = iVar48;
            } while (uVar50 != uVar47);
          }
        }
        uVar47 = uVar47 + 1;
        uVar46 = uVar46 + 1;
      } while (uVar47 != 0x9c4);
    }
    __stream = _DAT_1a33d8d48388b4c;
    uVar44 = uVar44 - 1;
    bVar52 = uVar45 != 0;
    uVar45 = uVar45 - 1;
  } while (bVar52);
  if ((0x2a < param_1) && (**param_2 == '\0')) {
    fwrite("==BEGIN DUMP_ARRAYS==\n",0x16,1,_DAT_1a33d8d48388b4c);
    fprintf(__stream,"begin dump: %s","table");
    iVar42 = 0x9c4;
    lVar51 = 0;
    iVar49 = 0;
    lVar43 = lVar51;
    iVar48 = iVar49;
    do {
      do {
        if ((iVar49 * -0x33333333 + 0x19999998U >> 2 | iVar49 * 0x40000000) < 0xccccccd) {
          fputc(10,__stream);
        }
        fprintf(__stream,(char *)&_L_str_5,(ulong)*(uint *)((long)__s + lVar51 * 4 + lVar43 * 10000)
               );
        iVar49 = iVar49 + 1;
        lVar51 = lVar51 + 1;
      } while (lVar51 != 0x9c4);
      iVar49 = iVar48 + iVar42;
      lVar51 = lVar43 + 1;
      iVar42 = iVar42 + -1;
      lVar43 = lVar51;
      iVar48 = iVar49;
    } while (lVar51 != 0x9c4);
    fprintf(__stream,"\nend   dump: %s\n","table");
    fwrite("==END   DUMP_ARRAYS==\n",0x16,1,__stream);
  }
  free(__ptr);
  free(__s);
  return 0;
}


