# 1 "./CHStone_v1.11_150204/gsm/lpc.c"
# 27 "./CHStone_v1.11_150204/gsm/lpc.c"
#include "private.h"
#include "add.c"
# 38 "./CHStone_v1.11_150204/gsm/lpc.c"
void
Autocorrelation (word * s ,
   longword * L_ACF )




{
  register int k, i;

  word temp;
  word smax;
  word scalauto, n;
  word *sp;
  word sl;



  smax = 0;
  for (k = 0; k <= 159; k++)
    {
      temp = GSM_ABS (s[k]);
      if (temp > smax)
 smax = temp;
    }



  if (smax == 0)
    scalauto = 0;
  else
    scalauto = 4 - gsm_norm ((longword) smax << 16);

  if (scalauto > 0 && scalauto <= 4)
    {
      n = scalauto;
      for (k = 0; k <= 159; k++)
 s[k] = GSM_MULT_R (s[k], 16384 >> (n - 1));
    }



  {
    sp = s;
    sl = *sp;

#define STEP(k) L_ACF[k] += ((longword)sl * sp[ -(k) ]);

#define NEXTI sl = *++sp
    for (k = 8; k >= 0; k--)
      L_ACF[k] = 0;

    STEP (0);
    NEXTI;
    STEP (0);
    STEP (1);
    NEXTI;
    STEP (0);
    STEP (1);
    STEP (2);
    NEXTI;
    STEP (0);
    STEP (1);
    STEP (2);
    STEP (3);
    NEXTI;
    STEP (0);
    STEP (1);
    STEP (2);
    STEP (3);
    STEP (4);
    NEXTI;
    STEP (0);
    STEP (1);
    STEP (2);
    STEP (3);
    STEP (4);
    STEP (5);
    NEXTI;
    STEP (0);
    STEP (1);
    STEP (2);
    STEP (3);
    STEP (4);
    STEP (5);
    STEP (6);
    NEXTI;
    STEP (0);
    STEP (1);
    STEP (2);
    STEP (3);
    STEP (4);
    STEP (5);
    STEP (6);
    STEP (7);

    for (i = 8; i <= 159; i++)
      {

 NEXTI;

 STEP (0);
 STEP (1);
 STEP (2);
 STEP (3);
 STEP (4);
 STEP (5);
 STEP (6);
 STEP (7);
 STEP (8);
      }

    for (k = 8; k >= 0; k--)
      L_ACF[k] <<= 1;

  }


  if (scalauto > 0)
    for (k = 159; k >= 0; k--)
      *s++ <<= scalauto;
}



void
Reflection_coefficients (longword * L_ACF ,
    register word * r )
{
  register int i, m, n;
  register word temp;
  word ACF[9];
  word P[9];
  word K[9];




  if (L_ACF[0] == 0)
    {
      for (i = 8; i > 0; i--)
 *r++ = 0;
      return;
    }

  temp = gsm_norm (L_ACF[0]);
  for (i = 0; i <= 8; i++)
    ACF[i] = SASR (L_ACF[i] << temp, 16);




  for (i = 1; i <= 7; i++)
    K[i] = ACF[i];
  for (i = 0; i <= 8; i++)
    P[i] = ACF[i];



  for (n = 1; n <= 8; n++, r++)
    {

      temp = P[1];
      temp = GSM_ABS (temp);
      if (P[0] < temp)
 {
   for (i = n; i <= 8; i++)
     *r++ = 0;
   return;
 }

      *r = gsm_div (temp, P[0]);

      if (P[1] > 0)
 *r = -*r;
      if (n == 8)
 return;



      temp = GSM_MULT_R (P[1], *r);
      P[0] = GSM_ADD (P[0], temp);

      for (m = 1; m <= 8 - n; m++)
 {
   temp = GSM_MULT_R (K[m], *r);
   P[m] = GSM_ADD (P[m + 1], temp);

   temp = GSM_MULT_R (P[m + 1], *r);
   K[m] = GSM_ADD (K[m], temp);
 }
    }
}



void
Transformation_to_Log_Area_Ratios (register word * r )







{
  register word temp;
  register int i;




  for (i = 1; i <= 8; i++, r++)
    {

      temp = *r;
      temp = GSM_ABS (temp);

      if (temp < 22118)
 {
   temp >>= 1;
 }
      else if (temp < 31130)
 {
   temp -= 11059;
 }
      else
 {
   temp -= 26112;
   temp <<= 2;
 }

      *r = *r < 0 ? -temp : temp;
    }
}



void
Quantization_and_coding (register word * LAR )
{
  register word temp;
# 291 "./CHStone_v1.11_150204/gsm/lpc.c"
#undef STEP
#define STEP(A,B,MAC,MIC) \
  temp = GSM_MULT( A, *LAR ); \
  temp = GSM_ADD( temp, B ); \
  temp = GSM_ADD( temp, 256 ); \
  temp = SASR( temp, 9 ); \
  *LAR = temp>MAC ? MAC - MIC : (temp<MIC ? 0 : temp - MIC); \
  LAR++;

  STEP (20480, 0, 31, -32);
  STEP (20480, 0, 31, -32);
  STEP (20480, 2048, 15, -16);
  STEP (20480, -2560, 15, -16);

  STEP (13964, 94, 7, -8);
  STEP (15360, -1792, 7, -8);
  STEP (8534, -341, 3, -4);
  STEP (9036, -1144, 3, -4);

#undef STEP
}

void
Gsm_LPC_Analysis (word * s ,
    word * LARc )
{
  longword L_ACF[9];

  Autocorrelation (s, L_ACF);
  Reflection_coefficients (L_ACF, LARc);
  Transformation_to_Log_Area_Ratios (LARc);
  Quantization_and_coding (LARc);
}
