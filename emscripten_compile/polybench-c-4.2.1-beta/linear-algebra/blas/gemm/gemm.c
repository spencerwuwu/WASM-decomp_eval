# 1 "./polybench-c-4.2.1-beta/linear-algebra/blas/gemm/gemm.c"
# 12 "./polybench-c-4.2.1-beta/linear-algebra/blas/gemm/gemm.c"
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>


#include <polybench.h>


#include "gemm.h"



static
void init_array(int ni, int nj, int nk,
  DATA_TYPE *alpha,
  DATA_TYPE *beta,
  DATA_TYPE POLYBENCH_2D(C,NI,NJ,ni,nj),
  DATA_TYPE POLYBENCH_2D(A,NI,NK,ni,nk),
  DATA_TYPE POLYBENCH_2D(B,NK,NJ,nk,nj))
{
  int i, j;

  *alpha = 1.5;
  *beta = 1.2;
  for (i = 0; i < ni; i++)
    for (j = 0; j < nj; j++)
      C[i][j] = (DATA_TYPE) ((i*j+1) % ni) / ni;
  for (i = 0; i < ni; i++)
    for (j = 0; j < nk; j++)
      A[i][j] = (DATA_TYPE) (i*(j+1) % nk) / nk;
  for (i = 0; i < nk; i++)
    for (j = 0; j < nj; j++)
      B[i][j] = (DATA_TYPE) (i*(j+2) % nj) / nj;
}




static
void print_array(int ni, int nj,
   DATA_TYPE POLYBENCH_2D(C,NI,NJ,ni,nj))
{
  int i, j;

  POLYBENCH_DUMP_START;
  POLYBENCH_DUMP_BEGIN("C");
  for (i = 0; i < ni; i++)
    for (j = 0; j < nj; j++) {
 if ((i * ni + j) % 20 == 0) fprintf (POLYBENCH_DUMP_TARGET, "\n");
 fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, C[i][j]);
    }
  POLYBENCH_DUMP_END("C");
  POLYBENCH_DUMP_FINISH;
}





void kernel_gemm(int ni, int nj, int nk,
   DATA_TYPE alpha,
   DATA_TYPE beta,
   DATA_TYPE POLYBENCH_2D(C,NI,NJ,ni,nj),
   DATA_TYPE POLYBENCH_2D(A,NI,NK,ni,nk),
   DATA_TYPE POLYBENCH_2D(B,NK,NJ,nk,nj))
{
  int i, j, k;
# 88 "./polybench-c-4.2.1-beta/linear-algebra/blas/gemm/gemm.c"
#pragma scop
  for (i = 0; i < _PB_NI; i++) {
    for (j = 0; j < _PB_NJ; j++)
 C[i][j] *= beta;
    for (k = 0; k < _PB_NK; k++) {
       for (j = 0; j < _PB_NJ; j++)
   C[i][j] += alpha * A[i][k] * B[k][j];
    }
  }
#pragma endscop

}


int submain(int argc, char** argv)
{

  int ni = NI;
  int nj = NJ;
  int nk = NK;


  DATA_TYPE alpha;
  DATA_TYPE beta;
  POLYBENCH_2D_ARRAY_DECL(C,DATA_TYPE,NI,NJ,ni,nj);
  POLYBENCH_2D_ARRAY_DECL(A,DATA_TYPE,NI,NK,ni,nk);
  POLYBENCH_2D_ARRAY_DECL(B,DATA_TYPE,NK,NJ,nk,nj);


  init_array (ni, nj, nk, &alpha, &beta,
       POLYBENCH_ARRAY(C),
       POLYBENCH_ARRAY(A),
       POLYBENCH_ARRAY(B));


  polybench_start_instruments;


  kernel_gemm (ni, nj, nk,
        alpha, beta,
        POLYBENCH_ARRAY(C),
        POLYBENCH_ARRAY(A),
        POLYBENCH_ARRAY(B));


  polybench_stop_instruments;
  polybench_print_instruments;



  polybench_prevent_dce(print_array(ni, nj, POLYBENCH_ARRAY(C)));


  POLYBENCH_FREE_ARRAY(C);
  POLYBENCH_FREE_ARRAY(A);
  POLYBENCH_FREE_ARRAY(B);

  return 0;
}
