# 1 "./CHStone_v1.11_150204/aes/aes.c"
# 62 "./CHStone_v1.11_150204/aes/aes.c"
#include <stdio.h>


int main_result;

#include "aes.h"
#include "aes_enc.c"
#include "aes_dec.c"
#include "aes_key.c"
#include "aes_func.c"


int
aes_main (void)
{






  statemt[0] = 50;
  statemt[1] = 67;
  statemt[2] = 246;
  statemt[3] = 168;
  statemt[4] = 136;
  statemt[5] = 90;
  statemt[6] = 48;
  statemt[7] = 141;
  statemt[8] = 49;
  statemt[9] = 49;
  statemt[10] = 152;
  statemt[11] = 162;
  statemt[12] = 224;
  statemt[13] = 55;
  statemt[14] = 7;
  statemt[15] = 52;

  key[0] = 43;
  key[1] = 126;
  key[2] = 21;
  key[3] = 22;
  key[4] = 40;
  key[5] = 174;
  key[6] = 210;
  key[7] = 166;
  key[8] = 171;
  key[9] = 247;
  key[10] = 21;
  key[11] = 136;
  key[12] = 9;
  key[13] = 207;
  key[14] = 79;
  key[15] = 60;

  encrypt (statemt, key, 128128);
  decrypt (statemt, key, 128128);
  return 0;
}



#include <sys/time.h>
double startTimer, endTimer;
static
double rtclock()
{
  struct timeval Tp;
  int stat;
  stat = gettimeofday (&Tp, NULL);
  if (stat != 0)
    printf ("Error return from gettimeofday: %d", stat);
  return (Tp.tv_sec + Tp.tv_usec * 1.0e-6);
}

#define TIMER_BEGIN startTimer = rtclock();
#define TIMER_END endTimer = rtclock();
#define PRINT_TIMER_RESULT printf ("%0.6f\n", endTimer - startTimer);
#define TEST_REPEAT_TIME 1


int
submain ()
{
      main_result = 0;
      TIMER_BEGIN
      aes_main ();

      TIMER_END
      PRINT_TIMER_RESULT
      return main_result;
    }
