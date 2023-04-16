#include "PL_3mm.h"



void init_array(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,long param_6,
               long param_7,long param_8,long param_9)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (0 < (int)param_1) {
    uVar2 = 0;
    do {
      if (0 < (int)param_3) {
        uVar3 = 0;
        do {
          *(double *)(uVar2 * 8000 + param_6 + uVar3 * 8) =
               (double)(((int)uVar3 * (int)uVar2 + 1) % (int)param_1) / (double)(param_1 * 5);
          uVar3 = uVar3 + 1;
        } while (uVar3 != param_3);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != param_1);
  }
  if (0 < (int)param_3) {
    uVar2 = 0;
    do {
      if (0 < (int)param_2) {
        uVar3 = 0;
        do {
          uVar1 = uVar3 + 1;
          *(double *)(uVar2 * 0x1c20 + param_7 + uVar3 * 8) =
               (double)(((int)uVar1 * (int)uVar2 + 2) % (int)param_2) / (double)(param_2 * 5);
          uVar3 = uVar1;
        } while (uVar1 != param_2);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != param_3);
  }
  if (0 < (int)param_2) {
    uVar2 = 0;
    do {
      if (0 < (int)param_5) {
        uVar3 = 0;
        do {
          *(double *)(uVar2 * 0x2580 + param_8 + uVar3 * 8) =
               (double)((((int)uVar3 + 3) * (int)uVar2) % (int)param_4) / (double)(param_4 * 5);
          uVar3 = uVar3 + 1;
        } while (uVar3 != param_5);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != param_2);
  }
  if (0 < (int)param_5) {
    uVar2 = 0;
    do {
      if (0 < (int)param_4) {
        uVar3 = 0;
        do {
          *(double *)(uVar2 * 0x2260 + param_9 + uVar3 * 8) =
               (double)((((int)uVar3 + 2) * (int)uVar2 + 2) % (int)param_3) / (double)(param_3 * 5);
          uVar3 = uVar3 + 1;
        } while (uVar3 != param_4);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != param_5);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void print_array(uint param_1,uint param_2,long param_3)

{
  FILE *__stream;
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  
  __stream = _DAT_7cd3d8d48188b48;
  fwrite(_L_str,0x16,1,_DAT_7cd3d8d48188b48);
  fprintf(__stream,"begin dump: %s",&_L_str_2);
  if (0 < (int)param_1) {
    uVar2 = 0;
    do {
      if (0 < (int)param_2) {
        uVar3 = 0;
        do {
          iVar1 = (int)uVar3 + (int)uVar2 * param_1;
          if ((iVar1 * -0x33333333 + 0x19999998U >> 2 | iVar1 * 0x40000000) < 0xccccccd) {
            fputc(10,__stream);
          }
          fprintf(__stream,"%0.2lf ",*(undefined8 *)(uVar2 * 0x2260 + param_3 + uVar3 * 8));
          uVar3 = uVar3 + 1;
        } while (uVar3 != param_2);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != param_1);
  }
  fprintf(__stream,"\nend   dump: %s\n",&_L_str_2);
  fwrite("==END   DUMP_ARRAYS==\n",0x16,1,__stream);
  return;
}



void kernel_3mm(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,long param_6,
               long param_7,long param_8,long param_9,long param_10,long param_11,long param_12)

{
  double *pdVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  double dVar7;
  
  uVar4 = (ulong)param_2;
  if (0 < (int)param_1) {
    uVar6 = 0;
    do {
      if (0 < (int)param_2) {
        uVar5 = 0;
        do {
          lVar2 = uVar6 * 0x1c20 + param_6;
          *(undefined8 *)(lVar2 + uVar5 * 8) = 0;
          if (0 < (int)param_3) {
            pdVar1 = (double *)(lVar2 + uVar5 * 8);
            dVar7 = *pdVar1;
            uVar3 = 0;
            do {
              dVar7 = dVar7 + *(double *)(uVar6 * 8000 + param_7 + uVar3 * 8) *
                              *(double *)(uVar3 * 0x1c20 + param_8 + uVar5 * 8);
              *pdVar1 = dVar7;
              uVar3 = uVar3 + 1;
            } while (uVar3 != param_3);
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 != uVar4);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != param_1);
  }
  if (0 < (int)param_2) {
    uVar6 = 0;
    do {
      if (0 < (int)param_4) {
        uVar5 = 0;
        do {
          lVar2 = uVar6 * 0x2260 + param_9;
          *(undefined8 *)(lVar2 + uVar5 * 8) = 0;
          if (0 < (int)param_5) {
            pdVar1 = (double *)(lVar2 + uVar5 * 8);
            dVar7 = *pdVar1;
            uVar3 = 0;
            do {
              dVar7 = dVar7 + *(double *)(uVar6 * 0x2580 + param_10 + uVar3 * 8) *
                              *(double *)(uVar3 * 0x2260 + param_11 + uVar5 * 8);
              *pdVar1 = dVar7;
              uVar3 = uVar3 + 1;
            } while (uVar3 != param_5);
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 != param_4);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar4);
  }
  if (0 < (int)param_1) {
    uVar6 = 0;
    do {
      if (0 < (int)param_4) {
        uVar5 = 0;
        do {
          lVar2 = uVar6 * 0x2260 + param_12;
          *(undefined8 *)(lVar2 + uVar5 * 8) = 0;
          if (0 < (int)param_2) {
            pdVar1 = (double *)(lVar2 + uVar5 * 8);
            dVar7 = *pdVar1;
            uVar3 = 0;
            do {
              dVar7 = dVar7 + *(double *)(uVar6 * 0x1c20 + param_6 + uVar3 * 8) *
                              *(double *)(uVar3 * 0x2260 + param_9 + uVar5 * 8);
              *pdVar1 = dVar7;
              uVar3 = uVar3 + 1;
            } while (uVar3 != uVar4);
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 != param_4);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != param_1);
  }
  return;
}



undefined8 submain(int param_1,char **param_2)

{
  void *__ptr;
  void *__ptr_00;
  void *__ptr_01;
  void *__ptr_02;
  void *__ptr_03;
  void *__ptr_04;
  void *__ptr_05;
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  double dVar7;
  
  __ptr = (void *)polybench_alloc_data(720000,8);
  __ptr_00 = (void *)polybench_alloc_data(800000,8);
  __ptr_01 = (void *)polybench_alloc_data(900000,8);
  __ptr_02 = (void *)polybench_alloc_data(990000,8);
  __ptr_03 = (void *)polybench_alloc_data(0x107ac0,8);
  __ptr_04 = (void *)polybench_alloc_data(0x142440,8);
  __ptr_05 = (void *)polybench_alloc_data(880000,8);
  lVar6 = 0;
  lVar1 = 0;
  do {
    lVar2 = 0;
    do {
      *(double *)((long)__ptr_00 + lVar2 * 8 + lVar1 * 8000) =
           (double)(((int)lVar2 * (int)lVar1 + 1) % 800) / 4000.0;
      lVar2 = lVar2 + 1;
    } while (lVar2 != 1000);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 800);
  lVar1 = 0;
  do {
    lVar2 = 0;
    do {
      lVar4 = lVar2 + 1;
      iVar3 = (int)lVar4 * (int)lVar6;
      iVar5 = iVar3 + 2;
      iVar3 = iVar3 + (int)((ulong)((long)iVar5 * -0x6e5d4c3b) >> 0x20) + 2;
      *(double *)((long)__ptr_01 + lVar2 * 8 + lVar6 * 0x1c20) =
           (double)(iVar5 + ((iVar3 >> 9) - (iVar3 >> 0x1f)) * -900) / 4500.0;
      lVar2 = lVar4;
    } while (lVar4 != 900);
    lVar6 = lVar6 + 1;
  } while (lVar6 != 1000);
  lVar6 = 0;
  do {
    lVar2 = 0;
    do {
      *(double *)((long)__ptr_03 + lVar2 * 8 + lVar1 * 0x2580) =
           (double)((((int)lVar2 + 3) * (int)lVar1) % 0x44c) / 5500.0;
      lVar2 = lVar2 + 1;
    } while (lVar2 != 0x4b0);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 900);
  lVar1 = 0;
  do {
    lVar2 = 0;
    do {
      *(double *)((long)__ptr_04 + lVar2 * 8 + lVar6 * 0x2260) =
           (double)((((int)lVar2 + 2) * (int)lVar6 + 2) % 1000) / 5000.0;
      lVar2 = lVar2 + 1;
    } while (lVar2 != 0x44c);
    lVar6 = lVar6 + 1;
  } while (lVar6 != 0x4b0);
  lVar6 = 0;
  do {
    lVar2 = 0;
    do {
      *(undefined8 *)((long)__ptr + lVar2 * 8 + lVar1 * 0x1c20) = 0;
      dVar7 = 0.0;
      lVar4 = 0;
      do {
        dVar7 = dVar7 + *(double *)((long)__ptr_00 + lVar4 * 8 + lVar1 * 8000) *
                        *(double *)((long)__ptr_01 + lVar2 * 8 + lVar4 * 0x1c20);
        *(double *)((long)__ptr + lVar2 * 8 + lVar1 * 0x1c20) = dVar7;
        lVar4 = lVar4 + 1;
      } while (lVar4 != 1000);
      lVar2 = lVar2 + 1;
    } while (lVar2 != 900);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 800);
  lVar1 = 0;
  do {
    lVar2 = 0;
    do {
      *(undefined8 *)((long)__ptr_02 + lVar2 * 8 + lVar6 * 0x2260) = 0;
      dVar7 = 0.0;
      lVar4 = 0;
      do {
        dVar7 = dVar7 + *(double *)((long)__ptr_03 + lVar4 * 8 + lVar6 * 0x2580) *
                        *(double *)((long)__ptr_04 + lVar2 * 8 + lVar4 * 0x2260);
        *(double *)((long)__ptr_02 + lVar2 * 8 + lVar6 * 0x2260) = dVar7;
        lVar4 = lVar4 + 1;
      } while (lVar4 != 0x4b0);
      lVar2 = lVar2 + 1;
    } while (lVar2 != 0x44c);
    lVar6 = lVar6 + 1;
  } while (lVar6 != 900);
  do {
    lVar6 = 0;
    do {
      *(undefined8 *)((long)__ptr_05 + lVar6 * 8 + lVar1 * 0x2260) = 0;
      dVar7 = 0.0;
      lVar2 = 0;
      do {
        dVar7 = dVar7 + *(double *)((long)__ptr + lVar2 * 8 + lVar1 * 0x1c20) *
                        *(double *)((long)__ptr_02 + lVar6 * 8 + lVar2 * 0x2260);
        *(double *)((long)__ptr_05 + lVar6 * 8 + lVar1 * 0x2260) = dVar7;
        lVar2 = lVar2 + 1;
      } while (lVar2 != 900);
      lVar6 = lVar6 + 1;
    } while (lVar6 != 0x44c);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 800);
  if ((0x2a < param_1) && (**param_2 == '\0')) {
    print_array(800,0x44c,__ptr_05);
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


