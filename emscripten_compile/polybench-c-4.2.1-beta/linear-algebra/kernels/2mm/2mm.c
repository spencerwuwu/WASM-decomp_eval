# 1 "./polybench-c-4.2.1-beta/linear-algebra/kernels/2mm/2mm.c"
# 12 "./polybench-c-4.2.1-beta/linear-algebra/kernels/2mm/2mm.c"
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>


#include <polybench.h>


#include "2mm.h"




void init_array(int ni, int nj, int nk, int nl,
  DATA_TYPE *alpha,
  DATA_TYPE *beta,
  DATA_TYPE POLYBENCH_2D(A,NI,NK,ni,nk),
  DATA_TYPE POLYBENCH_2D(B,NK,NJ,nk,nj),
  DATA_TYPE POLYBENCH_2D(C,NJ,NL,nj,nl),
  DATA_TYPE POLYBENCH_2D(D,NI,NL,ni,nl))
{
  int i, j;

  *alpha = 1.5;
  *beta = 1.2;
  for (i = 0; i < ni; i++)
    for (j = 0; j < nk; j++)
      A[i][j] = (DATA_TYPE) ((i*j+1) % ni) / ni;
  for (i = 0; i < nk; i++)
    for (j = 0; j < nj; j++)
      B[i][j] = (DATA_TYPE) (i*(j+1) % nj) / nj;
  for (i = 0; i < nj; i++)
    for (j = 0; j < nl; j++)
      C[i][j] = (DATA_TYPE) ((i*(j+3)+1) % nl) / nl;
  for (i = 0; i < ni; i++)
    for (j = 0; j < nl; j++)
      D[i][j] = (DATA_TYPE) (i*(j+2) % nk) / nk;
}





void print_array(int ni, int nl,
   DATA_TYPE POLYBENCH_2D(D,NI,NL,ni,nl))
{
  int i, j;

  POLYBENCH_DUMP_START;
  POLYBENCH_DUMP_BEGIN("D");
  for (i = 0; i < ni; i++)
    for (j = 0; j < nl; j++) {
 if ((i * ni + j) % 20 == 0) fprintf (POLYBENCH_DUMP_TARGET, "\n");
 fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, D[i][j]);
    }
  POLYBENCH_DUMP_END("D");
  POLYBENCH_DUMP_FINISH;
}





void kernel_2mm(int ni, int nj, int nk, int nl,
  DATA_TYPE alpha,
  DATA_TYPE beta,
  DATA_TYPE POLYBENCH_2D(tmp,NI,NJ,ni,nj),
  DATA_TYPE POLYBENCH_2D(A,NI,NK,ni,nk),
  DATA_TYPE POLYBENCH_2D(B,NK,NJ,nk,nj),
  DATA_TYPE POLYBENCH_2D(C,NJ,NL,nj,nl),
  DATA_TYPE POLYBENCH_2D(D,NI,NL,ni,nl))
{
  int i, j, k;

#pragma scop

  for (i = 0; i < _PB_NI; i++)
    for (j = 0; j < _PB_NJ; j++)
      {
 tmp[i][j] = SCALAR_VAL(0.0);
 for (k = 0; k < _PB_NK; ++k)
   tmp[i][j] += alpha * A[i][k] * B[k][j];
      }
  for (i = 0; i < _PB_NI; i++)
    for (j = 0; j < _PB_NL; j++)
      {
 D[i][j] *= beta;
 for (k = 0; k < _PB_NJ; ++k)
   D[i][j] += tmp[i][k] * C[k][j];
      }
#pragma endscop

}


int submain(int argc, char** argv)
{

  int ni = NI;
  int nj = NJ;
  int nk = NK;
  int nl = NL;


  DATA_TYPE alpha;
  DATA_TYPE beta;
  POLYBENCH_2D_ARRAY_DECL(tmp,DATA_TYPE,NI,NJ,ni,nj);
  POLYBENCH_2D_ARRAY_DECL(A,DATA_TYPE,NI,NK,ni,nk);
  POLYBENCH_2D_ARRAY_DECL(B,DATA_TYPE,NK,NJ,nk,nj);
  POLYBENCH_2D_ARRAY_DECL(C,DATA_TYPE,NJ,NL,nj,nl);
  POLYBENCH_2D_ARRAY_DECL(D,DATA_TYPE,NI,NL,ni,nl);


  init_array (ni, nj, nk, nl, &alpha, &beta,
       POLYBENCH_ARRAY(A),
       POLYBENCH_ARRAY(B),
       POLYBENCH_ARRAY(C),
       POLYBENCH_ARRAY(D));


  polybench_start_instruments;


  kernel_2mm (ni, nj, nk, nl,
       alpha, beta,
       POLYBENCH_ARRAY(tmp),
       POLYBENCH_ARRAY(A),
       POLYBENCH_ARRAY(B),
       POLYBENCH_ARRAY(C),
       POLYBENCH_ARRAY(D));


  polybench_stop_instruments;
  polybench_print_instruments;



  polybench_prevent_dce(print_array(ni, nl, POLYBENCH_ARRAY(D)));


  POLYBENCH_FREE_ARRAY(tmp);
  POLYBENCH_FREE_ARRAY(A);
  POLYBENCH_FREE_ARRAY(B);
  POLYBENCH_FREE_ARRAY(C);
  POLYBENCH_FREE_ARRAY(D);

  return 0;
}
