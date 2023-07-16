# 1 "./CHStone_v1.11_150204/jpeg/main.c"
# 37 "./CHStone_v1.11_150204/jpeg/main.c"
#include <stdio.h>
#include <stdlib.h>

#include "global.h"
#include "decode.h"
#include "init.h"
#include "marker.c"
#include "chenidct.c"
#include "huffman.h"
#include "decode.c"
#include "huffman.c"
#include "jfif_read.c"
#include "jpeg2bmp.c"



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
#define TEST_REPEAT_TIME 20


int
submain ()
{
  main_result = 0;
  TIMER_BEGIN
  jpeg2bmp_main ();


  TIMER_END
  PRINT_TIMER_RESULT
  return main_result;
}
