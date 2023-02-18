/*
+--------------------------------------------------------------------------+
| CHStone : a suite of benchmark programs for C-based High-Level Synthesis |
| ======================================================================== |
|                                                                          |
| * Collected and Modified : Y. Hara, H. Tomiyama, S. Honda,               |
|                            H. Takada and K. Ishii                        |
|                            Nagoya University, Japan                      |
|                                                                          |
| * Remark :                                                               |
|    1. This source code is modified to unify the formats of the benchmark |
|       programs in CHStone.                                               |
|    2. Test vectors are added for CHStone.                                |
|    3. If "main_result" is 0 at the end of the program, the program is    |
|       correctly executed.                                                |
|    4. Please follow the copyright of each benchmark program.             |
+--------------------------------------------------------------------------+
*/
/* NIST Secure Hash Algorithm */
/* heavily modified by Uwe Hollerbach uh@alumni.caltech edu */
/* from Peter C. Gutmann's implementation as found in */
/* Applied Cryptography by Bruce Schneier */

/* NIST's proposed modification to SHA of 7/11/94 may be */
/* activated by defining USE_MODIFIED_SHA */

#include <stdio.h>
#include "sha.h"
#include "sha.c"

/*
+--------------------------------------------------------------------------+
| * Test Vector (added for CHStone)                                        |
|     outData : expected output data                                       |
+--------------------------------------------------------------------------+
*/
const INT32 outData[5] =
  { 0x006a5a37UL, 0x93dc9485UL, 0x2c412112UL, 0x63f7ba43UL, 0xad73f922UL };

//***************************
// Customized content
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
//***************************

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
  //printf ("%d\n", main_result);
  TIMER_END
  PRINT_TIMER_RESULT
  return main_result;
}

int main(int argc, char** argv) {
    for (int i = 0; i < TEST_REPEAT_TIME; ++i)
        submain();
}