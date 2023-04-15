#include "gsm.h"



int gsm_add(short param_1,short param_2)

{
  long local_28;
  short local_20;
  
  local_28 = (long)param_1 + (long)param_2;
  if (local_28 < -0x8000) {
    local_20 = -0x8000;
  }
  else {
    if (0x7fff < local_28) {
      local_28 = 0x7fff;
    }
    local_20 = (short)local_28;
  }
  return (int)local_20;
}



int gsm_mult(short param_1,short param_2)

{
  short local_a;
  
  if ((param_1 == -0x8000) && (param_2 == -0x8000)) {
    local_a = 0x7fff;
  }
  else {
    local_a = (short)((long)param_1 * (long)param_2 >> 0xf);
  }
  return (int)local_a;
}



int gsm_mult_r(short param_1,short param_2)

{
  short local_a;
  
  if ((param_2 == -0x8000) && (param_1 == -0x8000)) {
    local_a = 0x7fff;
  }
  else {
    local_a = (short)((long)param_1 * (long)param_2 + 0x4000 >> 0xf);
  }
  return (int)local_a;
}



int gsm_abs(short param_1)

{
  if (param_1 < 0) {
    if (param_1 == -0x8000) {
      param_1 = 0x7fff;
    }
    else {
      param_1 = -param_1;
    }
  }
  return (int)param_1;
}



int gsm_norm(ulong param_1)

{
  ulong local_18;
  short local_a;
  
  local_18 = param_1;
  if ((long)param_1 < 0) {
    if ((long)param_1 < -0x3fffffff) {
      local_a = 0;
      goto LAB_001002dc;
    }
    local_18 = param_1 ^ 0xffffffffffffffff;
  }
  if ((local_18 & 0xffff0000) == 0) {
    if ((local_18 & 0xff00) == 0) {
      local_a = *(byte *)((local_18 & 0xff) + 0x8917c0830804b60f) + 0x17;
    }
    else {
      local_a = *(byte *)(((long)local_18 >> 8 & 0xffU) + 0x890fc0830804b60f) + 0xf;
    }
  }
  else if ((local_18 & 0xff000000) == 0) {
    local_a = *(byte *)(((long)local_18 >> 0x10 & 0xffU) + 0x8907c0830804b60f) + 7;
  }
  else {
    local_a = *(byte *)(((long)local_18 >> 0x18 & 0xffU) - 0xfaf7fb49f1) - 1;
  }
LAB_001002dc:
  return (int)local_a;
}



int gsm_div(short param_1,short param_2)

{
  int iVar1;
  int local_28;
  short local_22;
  long local_18;
  short local_a;
  
  local_18 = (long)param_1;
  local_22 = 0;
  local_28 = 0xf;
  if (param_1 == 0) {
    local_a = 0;
  }
  else {
    while (iVar1 = local_28 + -1, local_28 != 0) {
      local_22 = (short)((int)local_22 << 1);
      local_18 = local_18 * 2;
      local_28 = iVar1;
      if (param_2 <= local_18) {
        local_18 = local_18 - param_2;
        local_22 = local_22 + 1;
      }
    }
    local_a = local_22;
  }
  return (int)local_a;
}



void Autocorrelation(short *param_1,long *param_2,ulong param_3)

{
  short sVar1;
  ushort uVar2;
  ulong extraout_RDX;
  ulong extraout_RDX_00;
  ulong extraout_RDX_01;
  short *local_30;
  short local_26;
  short local_24;
  int local_20;
  int local_1c;
  short *local_10;
  
  local_24 = 0;
  for (local_1c = 0; local_1c < 0xa0; local_1c = local_1c + 1) {
    sVar1 = gsm_abs((int)param_1[local_1c]);
    if (local_24 < sVar1) {
      local_24 = sVar1;
    }
    param_3 = extraout_RDX;
  }
  if (local_24 == 0) {
    local_26 = 0;
  }
  else {
    local_26 = gsm_norm((long)local_24 << 0x10);
    local_26 = 4 - local_26;
    param_3 = extraout_RDX_00;
  }
  if ((0 < local_26) && (local_26 < 5)) {
    for (local_1c = 0; local_1c < 0xa0; local_1c = local_1c + 1) {
      uVar2 = gsm_mult_r((int)param_1[local_1c],
                         (int)(short)(0x4000 >> ((byte)((int)local_26 - 1U) & 0x1f)),param_3,
                         (int)local_26 - 1U & 0xffff0000 | (uint)(ushort)param_1[local_1c]);
      param_3 = extraout_RDX_01 & 0xffffffffffff0000 | (ulong)uVar2;
      param_1[local_1c] = uVar2;
    }
  }
  sVar1 = *param_1;
  for (local_1c = 8; -1 < local_1c; local_1c = local_1c + -1) {
    param_2[local_1c] = 0;
  }
  *param_2 = (long)sVar1 * (long)*param_1 + *param_2;
  sVar1 = param_1[1];
  *param_2 = (long)sVar1 * (long)param_1[1] + *param_2;
  param_2[1] = (long)sVar1 * (long)*param_1 + param_2[1];
  sVar1 = param_1[2];
  *param_2 = (long)sVar1 * (long)param_1[2] + *param_2;
  param_2[1] = (long)sVar1 * (long)param_1[1] + param_2[1];
  param_2[2] = (long)sVar1 * (long)*param_1 + param_2[2];
  sVar1 = param_1[3];
  *param_2 = (long)sVar1 * (long)param_1[3] + *param_2;
  param_2[1] = (long)sVar1 * (long)param_1[2] + param_2[1];
  param_2[2] = (long)sVar1 * (long)param_1[1] + param_2[2];
  param_2[3] = (long)sVar1 * (long)*param_1 + param_2[3];
  sVar1 = param_1[4];
  *param_2 = (long)sVar1 * (long)param_1[4] + *param_2;
  param_2[1] = (long)sVar1 * (long)param_1[3] + param_2[1];
  param_2[2] = (long)sVar1 * (long)param_1[2] + param_2[2];
  param_2[3] = (long)sVar1 * (long)param_1[1] + param_2[3];
  param_2[4] = (long)sVar1 * (long)*param_1 + param_2[4];
  sVar1 = param_1[5];
  *param_2 = (long)sVar1 * (long)param_1[5] + *param_2;
  param_2[1] = (long)sVar1 * (long)param_1[4] + param_2[1];
  param_2[2] = (long)sVar1 * (long)param_1[3] + param_2[2];
  param_2[3] = (long)sVar1 * (long)param_1[2] + param_2[3];
  param_2[4] = (long)sVar1 * (long)param_1[1] + param_2[4];
  param_2[5] = (long)sVar1 * (long)*param_1 + param_2[5];
  sVar1 = param_1[6];
  *param_2 = (long)sVar1 * (long)param_1[6] + *param_2;
  param_2[1] = (long)sVar1 * (long)param_1[5] + param_2[1];
  param_2[2] = (long)sVar1 * (long)param_1[4] + param_2[2];
  param_2[3] = (long)sVar1 * (long)param_1[3] + param_2[3];
  param_2[4] = (long)sVar1 * (long)param_1[2] + param_2[4];
  param_2[5] = (long)sVar1 * (long)param_1[1] + param_2[5];
  param_2[6] = (long)sVar1 * (long)*param_1 + param_2[6];
  sVar1 = param_1[7];
  *param_2 = (long)sVar1 * (long)param_1[7] + *param_2;
  param_2[1] = (long)sVar1 * (long)param_1[6] + param_2[1];
  param_2[2] = (long)sVar1 * (long)param_1[5] + param_2[2];
  param_2[3] = (long)sVar1 * (long)param_1[4] + param_2[3];
  param_2[4] = (long)sVar1 * (long)param_1[3] + param_2[4];
  param_2[5] = (long)sVar1 * (long)param_1[2] + param_2[5];
  param_2[6] = (long)sVar1 * (long)param_1[1] + param_2[6];
  param_2[7] = (long)sVar1 * (long)*param_1 + param_2[7];
  local_30 = param_1 + 7;
  for (local_20 = 8; local_20 < 0xa0; local_20 = local_20 + 1) {
    sVar1 = local_30[1];
    *param_2 = (long)sVar1 * (long)local_30[1] + *param_2;
    param_2[1] = (long)sVar1 * (long)*local_30 + param_2[1];
    param_2[2] = (long)sVar1 * (long)local_30[-1] + param_2[2];
    param_2[3] = (long)sVar1 * (long)local_30[-2] + param_2[3];
    param_2[4] = (long)sVar1 * (long)local_30[-3] + param_2[4];
    param_2[5] = (long)sVar1 * (long)local_30[-4] + param_2[5];
    param_2[6] = (long)sVar1 * (long)local_30[-5] + param_2[6];
    param_2[7] = (long)sVar1 * (long)local_30[-6] + param_2[7];
    param_2[8] = (long)sVar1 * (long)local_30[-7] + param_2[8];
    local_30 = local_30 + 1;
  }
  for (local_1c = 8; -1 < local_1c; local_1c = local_1c + -1) {
    param_2[local_1c] = param_2[local_1c] << 1;
  }
  if (0 < local_26) {
    local_10 = param_1;
    for (local_1c = 0x9f; -1 < local_1c; local_1c = local_1c + -1) {
      *local_10 = (short)((int)*local_10 << ((byte)local_26 & 0x1f));
      local_10 = local_10 + 1;
    }
  }
  return;
}



void Reflection_coefficients(long *param_1,short *param_2)

{
  short sVar1;
  ushort uVar2;
  ulong uVar3;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 uVar4;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  ushort auStack_78 [16];
  ushort local_58 [16];
  ushort auStack_38 [9];
  ushort local_26;
  int local_24;
  int local_20;
  int local_1c;
  short *local_18;
  long *local_10;
  
  if (*param_1 == 0) {
    local_18 = param_2;
    for (local_1c = 8; 0 < local_1c; local_1c = local_1c + -1) {
      *local_18 = 0;
      local_18 = local_18 + 1;
    }
  }
  else {
    local_18 = param_2;
    local_10 = param_1;
    local_26 = gsm_norm(*param_1);
    for (local_1c = 0; local_1c < 9; local_1c = local_1c + 1) {
      auStack_38[local_1c] =
           (ushort)((ulong)(local_10[local_1c] << ((byte)local_26 & 0x3f)) >> 0x10);
    }
    for (local_1c = 1; local_1c < 8; local_1c = local_1c + 1) {
      auStack_78[local_1c] = auStack_38[local_1c];
    }
    for (local_1c = 0; local_1c < 9; local_1c = local_1c + 1) {
      local_58[local_1c] = auStack_38[local_1c];
    }
    for (local_24 = 1; local_24 < 9; local_24 = local_24 + 1) {
      local_26 = local_58[1];
      local_26 = gsm_abs((int)(short)local_58[1]);
      uVar3 = (ulong)(uint)(int)(short)local_26;
      if ((int)(short)local_58[0] < (int)(short)local_26) {
        for (local_1c = local_24; local_1c < 9; local_1c = local_1c + 1) {
          *local_18 = 0;
          local_18 = local_18 + 1;
        }
        return;
      }
      sVar1 = gsm_div((int)(short)local_26,(int)(short)local_58[0]);
      uVar3 = uVar3 & 0xffffffffffff0000;
      *local_18 = sVar1;
      if (0 < (short)local_58[1]) {
        uVar3 = (ulong)(ushort)(*local_18 >> 0xf) << 0x10;
        *local_18 = -*local_18;
      }
      if (local_24 == 8) {
        return;
      }
      local_26 = gsm_mult_r((int)(short)local_58[1],(int)*local_18,extraout_RDX,uVar3 | local_58[1])
      ;
      local_58[0] = gsm_add((int)(short)local_58[0],(int)(short)local_26);
      uVar4 = extraout_RDX_00;
      for (local_20 = 1; local_20 <= (int)(8U - local_24); local_20 = local_20 + 1) {
        uVar3 = (ulong)(8U - local_24 & 0xffff0000 | (uint)auStack_78[local_20]);
        local_26 = gsm_mult_r((int)(short)auStack_78[local_20],(int)*local_18,uVar4,uVar3);
        uVar2 = gsm_add((int)(short)local_58[local_20 + 1],(int)(short)local_26);
        local_58[local_20] = uVar2;
        local_26 = gsm_mult_r((int)(short)local_58[local_20 + 1],(int)*local_18,extraout_RDX_01,
                              uVar3 & 0xffffffffffff0000 | (ulong)local_58[local_20 + 1]);
        uVar2 = gsm_add((int)(short)auStack_78[local_20],(int)(short)local_26);
        auStack_78[local_20] = uVar2;
        uVar4 = extraout_RDX_02;
      }
      local_18 = local_18 + 1;
    }
  }
  return;
}



void Transformation_to_Log_Area_Ratios(short *param_1)

{
  short local_1c;
  int local_18;
  short local_12;
  short *local_10;
  
  local_10 = param_1;
  for (local_18 = 1; local_18 < 9; local_18 = local_18 + 1) {
    local_12 = gsm_abs((int)*local_10);
    if (local_12 < 0x5666) {
      local_12 = local_12 >> 1;
    }
    else if (local_12 < 0x799a) {
      local_12 = local_12 + -0x2b33;
    }
    else {
      local_12 = (short)((int)(short)(local_12 + -0x6600) << 2);
    }
    if (*local_10 < 0) {
      local_1c = -local_12;
    }
    else {
      local_1c = local_12;
    }
    *local_10 = local_1c;
    local_10 = local_10 + 1;
  }
  return;
}



void Quantization_and_coding(short *param_1)

{
  short sVar1;
  short local_48;
  short local_40;
  short local_38;
  short local_30;
  short local_28;
  short local_20;
  short local_18;
  
  sVar1 = gsm_mult(0x5000,(int)*param_1);
  sVar1 = gsm_add((int)sVar1,0);
  local_18 = gsm_add((int)sVar1,0x100);
  local_18 = local_18 >> 9;
  if (local_18 < 0x20) {
    if (local_18 < -0x20) {
      local_18 = 0;
    }
    else {
      local_18 = local_18 + 0x20;
    }
  }
  else {
    local_18 = 0x3f;
  }
  *param_1 = local_18;
  sVar1 = gsm_mult(0x5000,(int)param_1[1]);
  sVar1 = gsm_add((int)sVar1,0);
  local_20 = gsm_add((int)sVar1,0x100);
  local_20 = local_20 >> 9;
  if (local_20 < 0x20) {
    if (local_20 < -0x20) {
      local_20 = 0;
    }
    else {
      local_20 = local_20 + 0x20;
    }
  }
  else {
    local_20 = 0x3f;
  }
  param_1[1] = local_20;
  sVar1 = gsm_mult(0x5000,(int)param_1[2]);
  sVar1 = gsm_add((int)sVar1,0x800);
  local_28 = gsm_add((int)sVar1,0x100);
  local_28 = local_28 >> 9;
  if (local_28 < 0x10) {
    if (local_28 < -0x10) {
      local_28 = 0;
    }
    else {
      local_28 = local_28 + 0x10;
    }
  }
  else {
    local_28 = 0x1f;
  }
  param_1[2] = local_28;
  sVar1 = gsm_mult(0x5000,(int)param_1[3]);
  sVar1 = gsm_add((int)sVar1,0xfffff600);
  local_30 = gsm_add((int)sVar1,0x100);
  local_30 = local_30 >> 9;
  if (local_30 < 0x10) {
    if (local_30 < -0x10) {
      local_30 = 0;
    }
    else {
      local_30 = local_30 + 0x10;
    }
  }
  else {
    local_30 = 0x1f;
  }
  param_1[3] = local_30;
  sVar1 = gsm_mult(0x368c,(int)param_1[4]);
  sVar1 = gsm_add((int)sVar1,0x5e);
  local_38 = gsm_add((int)sVar1,0x100);
  local_38 = local_38 >> 9;
  if (local_38 < 8) {
    if (local_38 < -8) {
      local_38 = 0;
    }
    else {
      local_38 = local_38 + 8;
    }
  }
  else {
    local_38 = 0xf;
  }
  param_1[4] = local_38;
  sVar1 = gsm_mult(0x3c00,(int)param_1[5]);
  sVar1 = gsm_add((int)sVar1,0xfffff900);
  local_40 = gsm_add((int)sVar1,0x100);
  local_40 = local_40 >> 9;
  if (local_40 < 8) {
    if (local_40 < -8) {
      local_40 = 0;
    }
    else {
      local_40 = local_40 + 8;
    }
  }
  else {
    local_40 = 0xf;
  }
  param_1[5] = local_40;
  sVar1 = gsm_mult(0x2156,(int)param_1[6]);
  sVar1 = gsm_add((int)sVar1,0xfffffeab);
  local_48 = gsm_add((int)sVar1,0x100);
  local_48 = local_48 >> 9;
  if (local_48 < 4) {
    if (local_48 < -4) {
      local_48 = 0;
    }
    else {
      local_48 = local_48 + 4;
    }
  }
  else {
    local_48 = 7;
  }
  param_1[6] = local_48;
  sVar1 = gsm_mult(0x234c,(int)param_1[7]);
  sVar1 = gsm_add((int)sVar1,0xfffffb88);
  sVar1 = gsm_add((int)sVar1,0x100);
  sVar1 = sVar1 >> 9;
  if (sVar1 < 4) {
    if (sVar1 < -4) {
      sVar1 = 0;
    }
    else {
      sVar1 = sVar1 + 4;
    }
  }
  else {
    sVar1 = 7;
  }
  param_1[7] = sVar1;
  return;
}



void Gsm_LPC_Analysis(undefined8 param_1,undefined8 param_2)

{
  undefined local_68 [80];
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = param_2;
  local_10 = param_1;
  Autocorrelation(param_1,local_68);
  Reflection_coefficients(local_68,local_18);
  Transformation_to_Log_Area_Ratios(local_18);
  Quantization_and_coding(local_18);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int submain(void)

{
  short local_168 [8];
  short local_158 [164];
  int local_10;
  int local_c;
  
  local_10 = 0;
  _DAT_fc45c700110ff2 = rtclock();
  for (local_c = 0; local_c < 0xa0; local_c = local_c + 1) {
    local_158[local_c] = *(short *)((long)local_c * 2 + -0x3ba9cb7b7f3749a);
  }
  Gsm_LPC_Analysis(local_158,local_168);
  for (local_c = 0; local_c < 0xa0; local_c = local_c + 1) {
    local_10 = (uint)(local_158[local_c] != *(short *)((long)local_c * 2 + -0x6af037c6aef340f1)) +
               local_10;
  }
  for (local_c = 0; local_c < 8; local_c = local_c + 1) {
    local_10 = (uint)(local_168[local_c] != *(short *)((long)local_c * 2 + -0x6af037c6aef340f1)) +
               local_10;
  }
  _DAT_58b4800110ff2 = rtclock();
  printf("%0.6f\n",_DAT_58b4800100ff2 - _DAT_1a3d8d48005c0ff2);
  return local_10;
}



double rtclock(void)

{
  uint uVar1;
  undefined local_18 [16];
  
  uVar1 = gettimeofday((timeval *)local_18,(__timezone_ptr_t)0x0);
  if (uVar1 != 0) {
    printf("Error return from gettimeofday: %d",(ulong)uVar1);
  }
  return (double)local_18._8_4_ * 1e-06 + (double)local_18._0_8_;
}


