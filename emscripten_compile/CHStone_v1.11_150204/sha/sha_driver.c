# 1 "./CHStone_v1.11_150204/sha/sha_driver.c"
# 27 "./CHStone_v1.11_150204/sha/sha_driver.c"
#include <stdio.h>
#include "sha.h"
#include "sha.c"







const INT32 outData[5] =
  { 0x006a5a37UL, 0x93dc9485UL, 0x2c412112UL, 0x63f7ba43UL, 0xad73f922UL };



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
  int i;
  int main_result;
  main_result = 0;
  TIMER_BEGIN
  sha_stream ();
  for (i = 0; i < 5; i++)
 {
   main_result += (sha_info_digest[i] != outData[i]);
 }

  TIMER_END
  PRINT_TIMER_RESULT
  return main_result;
}
