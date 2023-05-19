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
/*
 * Copyright (C) 2008
 * Y. Hara, H. Tomiyama, S. Honda, H. Takada and K. Ishii
 * Nagoya University, Japan
 * All rights reserved.
 *
 * Disclaimer of Warranty
 *
 * These software programs are available to the user without any license fee or
 * royalty on an "as is" basis. The authors disclaims any and all warranties, 
 * whether express, implied, or statuary, including any implied warranties or 
 * merchantability or of fitness for a particular purpose. In no event shall the
 * copyright-holder be liable for any incidental, punitive, or consequential damages
 * of any kind whatsoever arising from the use of these programs. This disclaimer
 * of warranty extends to the user of these programs and user's customers, employees,
 * agents, transferees, successors, and assigns.
 *
 */
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
#define TEST_REPEAT_TIME 20
//***************************

int
submain ()
{
  main_result = 0;
  TIMER_BEGIN
  jpeg2bmp_main ();
  
  //printf ("%d\n", main_result);
  TIMER_END
  PRINT_TIMER_RESULT
  return main_result;
}

// int main(int argc, char** argv) {
//     for (int i = 0; i < TEST_REPEAT_TIME; ++i)
//         submain();
// }
