#include "PL_2mm.h"



void init_array(uint param_1,uint param_2,uint param_3,uint param_4,undefined8 *param_5,
               undefined8 *param_6,long param_7,long param_8,long param_9,long param_10)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  *param_5 = 0x3ff8000000000000;
  *param_6 = 0x3ff3333333333333;
  if (0 < (int)param_1) {
    uVar2 = 0;
    do {
      if (0 < (int)param_3) {
        uVar3 = 0;
        do {
          *(double *)(uVar2 * 0x2260 + param_7 + uVar3 * 8) =
               (double)(((int)uVar3 * (int)uVar2 + 1) % (int)param_1) / (double)param_1;
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
          *(double *)(uVar2 * 0x1c20 + param_8 + uVar3 * 8) =
               (double)(((int)uVar1 * (int)uVar2) % (int)param_2) / (double)param_2;
          uVar3 = uVar1;
        } while (uVar1 != param_2);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != param_3);
  }
  if (0 < (int)param_2) {
    uVar2 = 0;
    do {
      if (0 < (int)param_4) {
        uVar3 = 0;
        do {
          *(double *)(uVar2 * 0x2580 + param_9 + uVar3 * 8) =
               (double)((((int)uVar3 + 3) * (int)uVar2 + 1) % (int)param_4) / (double)param_4;
          uVar3 = uVar3 + 1;
        } while (uVar3 != param_4);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != param_2);
  }
  if (0 < (int)param_1) {
    uVar2 = 0;
    do {
      if (0 < (int)param_4) {
        uVar3 = 0;
        do {
          *(double *)(uVar2 * 0x2580 + param_10 + uVar3 * 8) =
               (double)((((int)uVar3 + 2) * (int)uVar2) % (int)param_3) / (double)param_3;
          uVar3 = uVar3 + 1;
        } while (uVar3 != param_4);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != param_1);
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
  
  __stream = _DAT_67d3d8d48188b48;
  fwrite(_L_str,0x16,1,_DAT_67d3d8d48188b48);
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
          fprintf(__stream,"%0.2lf ",*(undefined8 *)(uVar2 * 0x2580 + param_3 + uVar3 * 8));
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



void kernel_2mm(double param_1,double param_2,uint param_3,uint param_4,uint param_5,uint param_6,
               long param_7_00,long param_8_00,long param_7,long param_8,long param_9)

{
  double *pdVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  double dVar6;
  
  if (0 < (int)param_3) {
    uVar4 = 0;
    do {
      if (0 < (int)param_4) {
        uVar5 = 0;
        do {
          lVar2 = uVar4 * 0x1c20 + param_7_00;
          *(undefined8 *)(lVar2 + uVar5 * 8) = 0;
          if (0 < (int)param_5) {
            pdVar1 = (double *)(lVar2 + uVar5 * 8);
            dVar6 = *pdVar1;
            uVar3 = 0;
            do {
              dVar6 = dVar6 + *(double *)(uVar4 * 0x2260 + param_8_00 + uVar3 * 8) * param_1 *
                              *(double *)(uVar3 * 0x1c20 + param_7 + uVar5 * 8);
              *pdVar1 = dVar6;
              uVar3 = uVar3 + 1;
            } while (uVar3 != param_5);
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 != param_4);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != param_3);
  }
  if (0 < (int)param_3) {
    uVar4 = 0;
    do {
      if (0 < (int)param_6) {
        uVar5 = 0;
        do {
          lVar2 = uVar4 * 0x2580 + param_9;
          *(double *)(lVar2 + uVar5 * 8) = *(double *)(lVar2 + uVar5 * 8) * param_2;
          if (0 < (int)param_4) {
            pdVar1 = (double *)(lVar2 + uVar5 * 8);
            dVar6 = *pdVar1;
            uVar3 = 0;
            do {
              dVar6 = dVar6 + *(double *)(uVar4 * 0x1c20 + param_7_00 + uVar3 * 8) *
                              *(double *)(uVar3 * 0x2580 + param_8 + uVar5 * 8);
              *pdVar1 = dVar6;
              uVar3 = uVar3 + 1;
            } while (uVar3 != param_4);
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 != param_6);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != param_3);
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
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  
  __ptr = (void *)polybench_alloc_data(720000,8);
  __ptr_00 = (void *)polybench_alloc_data(880000,8);
  __ptr_01 = (void *)polybench_alloc_data(990000,8);
  __ptr_02 = (void *)polybench_alloc_data(0x107ac0,8);
  __ptr_03 = (void *)polybench_alloc_data(960000,8);
  lVar1 = 0;
  lVar2 = 0;
  do {
    lVar3 = 0;
    do {
      *(double *)((long)__ptr_00 + lVar3 * 8 + lVar2 * 0x2260) =
           (double)(((int)lVar3 * (int)lVar2 + 1) % 800) / 800.0;
      lVar3 = lVar3 + 1;
    } while (lVar3 != 0x44c);
    lVar2 = lVar2 + 1;
  } while (lVar2 != 800);
  lVar2 = 0;
  do {
    lVar3 = 0;
    do {
      lVar4 = lVar3 + 1;
      *(double *)((long)__ptr_01 + lVar3 * 8 + lVar1 * 0x1c20) =
           (double)(((int)lVar4 * (int)lVar1) % 900) / 900.0;
      lVar3 = lVar4;
    } while (lVar4 != 900);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0x44c);
  lVar1 = 0;
  do {
    lVar3 = 0;
    do {
      *(double *)((long)__ptr_02 + lVar3 * 8 + lVar2 * 0x2580) =
           (double)((((int)lVar3 + 3) * (int)lVar2 + 1) % 0x4b0) / 1200.0;
      lVar3 = lVar3 + 1;
    } while (lVar3 != 0x4b0);
    lVar2 = lVar2 + 1;
  } while (lVar2 != 900);
  lVar2 = 0;
  do {
    lVar3 = 0;
    do {
      *(double *)((long)__ptr_03 + lVar3 * 8 + lVar1 * 0x2580) =
           (double)((((int)lVar3 + 2) * (int)lVar1) % 0x44c) / 1100.0;
      lVar3 = lVar3 + 1;
    } while (lVar3 != 0x4b0);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 800);
  lVar1 = 0;
  do {
    lVar3 = 0;
    do {
      *(undefined8 *)((long)__ptr + lVar3 * 8 + lVar2 * 0x1c20) = 0;
      dVar5 = 0.0;
      lVar4 = 0;
      do {
        dVar5 = dVar5 + *(double *)((long)__ptr_00 + lVar4 * 8 + lVar2 * 0x2260) * 1.5 *
                        *(double *)((long)__ptr_01 + lVar3 * 8 + lVar4 * 0x1c20);
        *(double *)((long)__ptr + lVar3 * 8 + lVar2 * 0x1c20) = dVar5;
        lVar4 = lVar4 + 1;
      } while (lVar4 != 0x44c);
      lVar3 = lVar3 + 1;
    } while (lVar3 != 900);
    lVar2 = lVar2 + 1;
  } while (lVar2 != 800);
  do {
    lVar2 = 0;
    do {
      dVar5 = *(double *)((long)__ptr_03 + lVar2 * 8 + lVar1 * 0x2580) * 1.2;
      *(double *)((long)__ptr_03 + lVar2 * 8 + lVar1 * 0x2580) = dVar5;
      lVar3 = 0;
      do {
        dVar5 = dVar5 + *(double *)((long)__ptr + lVar3 * 8 + lVar1 * 0x1c20) *
                        *(double *)((long)__ptr_02 + lVar2 * 8 + lVar3 * 0x2580);
        *(double *)((long)__ptr_03 + lVar2 * 8 + lVar1 * 0x2580) = dVar5;
        lVar3 = lVar3 + 1;
      } while (lVar3 != 900);
      lVar2 = lVar2 + 1;
    } while (lVar2 != 0x4b0);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 800);
  if ((0x2a < param_1) && (**param_2 == '\0')) {
    print_array(800,0x4b0,__ptr_03);
  }
  free(__ptr);
  free(__ptr_00);
  free(__ptr_01);
  free(__ptr_02);
  free(__ptr_03);
  return 0;
}


