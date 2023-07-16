# 1 "./polybench-c-4.2.1-beta/linear-algebra/blas/trmm/trmm.c"
# 12 "./polybench-c-4.2.1-beta/linear-algebra/blas/trmm/trmm.c"
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>


#include <polybench.h>


#include "trmm.h"



static
void init_array(int m, int n,
  DATA_TYPE *alpha,
  DATA_TYPE POLYBENCH_2D(A,M,M,m,m),
  DATA_TYPE POLYBENCH_2D(B,M,N,m,n))
{
  int i, j;

  *alpha = 1.5;
  for (i = 0; i < m; i++) {
    for (j = 0; j < i; j++) {
      A[i][j] = (DATA_TYPE)((i+j) % m)/m;
    }
    A[i][i] = 1.0;
    for (j = 0; j < n; j++) {
      B[i][j] = (DATA_TYPE)((n+(i-j)) % n)/n;
    }
 }

}




static
void print_array(int m, int n,
   DATA_TYPE POLYBENCH_2D(B,M,N,m,n))
{
  int i, j;

  POLYBENCH_DUMP_START;
  POLYBENCH_DUMP_BEGIN("B");
  for (i = 0; i < m; i++)
    for (j = 0; j < n; j++) {
 if ((i * m + j) % 20 == 0) fprintf (POLYBENCH_DUMP_TARGET, "\n");
 fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, B[i][j]);
    }
  POLYBENCH_DUMP_END("B");
  POLYBENCH_DUMP_FINISH;
}





void kernel_trmm(int m, int n,
   DATA_TYPE alpha,
   DATA_TYPE POLYBENCH_2D(A,M,M,m,m),
   DATA_TYPE POLYBENCH_2D(B,M,N,m,n))
{
  int i, j, k;
# 85 "./polybench-c-4.2.1-beta/linear-algebra/blas/trmm/trmm.c"
#pragma scop
  for (i = 0; i < _PB_M; i++)
     for (j = 0; j < _PB_N; j++) {
        for (k = i+1; k < _PB_M; k++)
           B[i][j] += A[k][i] * B[k][j];
        B[i][j] = alpha * B[i][j];
     }
#pragma endscop

}


int submain(int argc, char** argv)
{

  int m = M;
  int n = N;


  DATA_TYPE alpha;
  POLYBENCH_2D_ARRAY_DECL(A,DATA_TYPE,M,M,m,m);
  POLYBENCH_2D_ARRAY_DECL(B,DATA_TYPE,M,N,m,n);


  init_array (m, n, &alpha, POLYBENCH_ARRAY(A), POLYBENCH_ARRAY(B));


  polybench_start_instruments;


  kernel_trmm (m, n, alpha, POLYBENCH_ARRAY(A), POLYBENCH_ARRAY(B));


  polybench_stop_instruments;
  polybench_print_instruments;



  polybench_prevent_dce(print_array(m, n, POLYBENCH_ARRAY(B)));


  POLYBENCH_FREE_ARRAY(A);
  POLYBENCH_FREE_ARRAY(B);

  return 0;
}
