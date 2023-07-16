# 1 "./polybench-c-4.2.1-beta/linear-algebra/solvers/cholesky/cholesky.c"
# 12 "./polybench-c-4.2.1-beta/linear-algebra/solvers/cholesky/cholesky.c"
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>


#include <polybench.h>


#include "cholesky.h"



static
void init_array(int n,
  DATA_TYPE POLYBENCH_2D(A,N,N,n,n))
{
  int i, j;

  for (i = 0; i < n; i++)
    {
      for (j = 0; j <= i; j++)
 A[i][j] = (DATA_TYPE)(-j % n) / n + 1;
      for (j = i+1; j < n; j++) {
 A[i][j] = 0;
      }
      A[i][i] = 1;
    }


  int r,s,t;
  POLYBENCH_2D_ARRAY_DECL(B, DATA_TYPE, N, N, n, n);
  for (r = 0; r < n; ++r)
    for (s = 0; s < n; ++s)
      (POLYBENCH_ARRAY(B))[r][s] = 0;
  for (t = 0; t < n; ++t)
    for (r = 0; r < n; ++r)
      for (s = 0; s < n; ++s)
 (POLYBENCH_ARRAY(B))[r][s] += A[r][t] * A[s][t];
    for (r = 0; r < n; ++r)
      for (s = 0; s < n; ++s)
 A[r][s] = (POLYBENCH_ARRAY(B))[r][s];
  POLYBENCH_FREE_ARRAY(B);

}




static
void print_array(int n,
   DATA_TYPE POLYBENCH_2D(A,N,N,n,n))

{
  int i, j;

  POLYBENCH_DUMP_START;
  POLYBENCH_DUMP_BEGIN("A");
  for (i = 0; i < n; i++)
    for (j = 0; j <= i; j++) {
    if ((i * n + j) % 20 == 0) fprintf (POLYBENCH_DUMP_TARGET, "\n");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, A[i][j]);
  }
  POLYBENCH_DUMP_END("A");
  POLYBENCH_DUMP_FINISH;
}





void kernel_cholesky(int n,
       DATA_TYPE POLYBENCH_2D(A,N,N,n,n))
{
  int i, j, k;


#pragma scop
  for (i = 0; i < _PB_N; i++) {

     for (j = 0; j < i; j++) {
        for (k = 0; k < j; k++) {
           A[i][j] -= A[i][k] * A[j][k];
        }
        A[i][j] /= A[j][j];
     }

     for (k = 0; k < i; k++) {
        A[i][i] -= A[i][k] * A[i][k];
     }
     A[i][i] = SQRT_FUN(A[i][i]);
  }
#pragma endscop

}


int submain(int argc, char** argv)
{

  int n = N;


  POLYBENCH_2D_ARRAY_DECL(A, DATA_TYPE, N, N, n, n);


  init_array (n, POLYBENCH_ARRAY(A));


  polybench_start_instruments;


  kernel_cholesky (n, POLYBENCH_ARRAY(A));


  polybench_stop_instruments;
  polybench_print_instruments;



  polybench_prevent_dce(print_array(n, POLYBENCH_ARRAY(A)));


  POLYBENCH_FREE_ARRAY(A);

  return 0;
}
