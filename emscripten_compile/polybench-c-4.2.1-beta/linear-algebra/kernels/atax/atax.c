# 1 "./polybench-c-4.2.1-beta/linear-algebra/kernels/atax/atax.c"
# 12 "./polybench-c-4.2.1-beta/linear-algebra/kernels/atax/atax.c"
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>


#include <polybench.h>


#include "atax.h"




void init_array (int m, int n,
   DATA_TYPE POLYBENCH_2D(A,M,N,m,n),
   DATA_TYPE POLYBENCH_1D(x,N,n))
{
  int i, j;
  DATA_TYPE fn;
  fn = (DATA_TYPE)n;

  for (i = 0; i < n; i++)
      x[i] = 1 + (i / fn);
  for (i = 0; i < m; i++)
    for (j = 0; j < n; j++)
      A[i][j] = (DATA_TYPE) ((i+j) % n) / (5*m);
}





void print_array(int n,
   DATA_TYPE POLYBENCH_1D(y,N,n))

{
  int i;

  POLYBENCH_DUMP_START;
  POLYBENCH_DUMP_BEGIN("y");
  for (i = 0; i < n; i++) {
    if (i % 20 == 0) fprintf (POLYBENCH_DUMP_TARGET, "\n");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, y[i]);
  }
  POLYBENCH_DUMP_END("y");
  POLYBENCH_DUMP_FINISH;
}





void kernel_atax(int m, int n,
   DATA_TYPE POLYBENCH_2D(A,M,N,m,n),
   DATA_TYPE POLYBENCH_1D(x,N,n),
   DATA_TYPE POLYBENCH_1D(y,N,n),
   DATA_TYPE POLYBENCH_1D(tmp,M,m))
{
  int i, j;

#pragma scop
  for (i = 0; i < _PB_N; i++)
    y[i] = 0;
  for (i = 0; i < _PB_M; i++)
    {
      tmp[i] = SCALAR_VAL(0.0);
      for (j = 0; j < _PB_N; j++)
 tmp[i] = tmp[i] + A[i][j] * x[j];
      for (j = 0; j < _PB_N; j++)
 y[j] = y[j] + A[i][j] * tmp[i];
    }
#pragma endscop

}


int submain(int argc, char** argv)
{

  int m = M;
  int n = N;


  POLYBENCH_2D_ARRAY_DECL(A, DATA_TYPE, M, N, m, n);
  POLYBENCH_1D_ARRAY_DECL(x, DATA_TYPE, N, n);
  POLYBENCH_1D_ARRAY_DECL(y, DATA_TYPE, N, n);
  POLYBENCH_1D_ARRAY_DECL(tmp, DATA_TYPE, M, m);


  init_array (m, n, POLYBENCH_ARRAY(A), POLYBENCH_ARRAY(x));


  polybench_start_instruments;


  kernel_atax (m, n,
        POLYBENCH_ARRAY(A),
        POLYBENCH_ARRAY(x),
        POLYBENCH_ARRAY(y),
        POLYBENCH_ARRAY(tmp));


  polybench_stop_instruments;
  polybench_print_instruments;



  polybench_prevent_dce(print_array(n, POLYBENCH_ARRAY(y)));


  POLYBENCH_FREE_ARRAY(A);
  POLYBENCH_FREE_ARRAY(x);
  POLYBENCH_FREE_ARRAY(y);
  POLYBENCH_FREE_ARRAY(tmp);

  return 0;
}
