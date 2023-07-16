# 1 "./polybench-c-4.2.1-beta/linear-algebra/blas/gesummv/gesummv.c"
# 12 "./polybench-c-4.2.1-beta/linear-algebra/blas/gesummv/gesummv.c"
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>


#include <polybench.h>


#include "gesummv.h"



static
void init_array(int n,
  DATA_TYPE *alpha,
  DATA_TYPE *beta,
  DATA_TYPE POLYBENCH_2D(A,N,N,n,n),
  DATA_TYPE POLYBENCH_2D(B,N,N,n,n),
  DATA_TYPE POLYBENCH_1D(x,N,n))
{
  int i, j;

  *alpha = 1.5;
  *beta = 1.2;
  for (i = 0; i < n; i++)
    {
      x[i] = (DATA_TYPE)( i % n) / n;
      for (j = 0; j < n; j++) {
 A[i][j] = (DATA_TYPE) ((i*j+1) % n) / n;
 B[i][j] = (DATA_TYPE) ((i*j+2) % n) / n;
      }
    }
}




static
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





void kernel_gesummv(int n,
      DATA_TYPE alpha,
      DATA_TYPE beta,
      DATA_TYPE POLYBENCH_2D(A,N,N,n,n),
      DATA_TYPE POLYBENCH_2D(B,N,N,n,n),
      DATA_TYPE POLYBENCH_1D(tmp,N,n),
      DATA_TYPE POLYBENCH_1D(x,N,n),
      DATA_TYPE POLYBENCH_1D(y,N,n))
{
  int i, j;

#pragma scop
  for (i = 0; i < _PB_N; i++)
    {
      tmp[i] = SCALAR_VAL(0.0);
      y[i] = SCALAR_VAL(0.0);
      for (j = 0; j < _PB_N; j++)
 {
   tmp[i] = A[i][j] * x[j] + tmp[i];
   y[i] = B[i][j] * x[j] + y[i];
 }
      y[i] = alpha * tmp[i] + beta * y[i];
    }
#pragma endscop

}


int submain(int argc, char** argv)
{

  int n = N;


  DATA_TYPE alpha;
  DATA_TYPE beta;
  POLYBENCH_2D_ARRAY_DECL(A, DATA_TYPE, N, N, n, n);
  POLYBENCH_2D_ARRAY_DECL(B, DATA_TYPE, N, N, n, n);
  POLYBENCH_1D_ARRAY_DECL(tmp, DATA_TYPE, N, n);
  POLYBENCH_1D_ARRAY_DECL(x, DATA_TYPE, N, n);
  POLYBENCH_1D_ARRAY_DECL(y, DATA_TYPE, N, n);



  init_array (n, &alpha, &beta,
       POLYBENCH_ARRAY(A),
       POLYBENCH_ARRAY(B),
       POLYBENCH_ARRAY(x));


  polybench_start_instruments;


  kernel_gesummv (n, alpha, beta,
    POLYBENCH_ARRAY(A),
    POLYBENCH_ARRAY(B),
    POLYBENCH_ARRAY(tmp),
    POLYBENCH_ARRAY(x),
    POLYBENCH_ARRAY(y));


  polybench_stop_instruments;
  polybench_print_instruments;



  polybench_prevent_dce(print_array(n, POLYBENCH_ARRAY(y)));


  POLYBENCH_FREE_ARRAY(A);
  POLYBENCH_FREE_ARRAY(B);
  POLYBENCH_FREE_ARRAY(tmp);
  POLYBENCH_FREE_ARRAY(x);
  POLYBENCH_FREE_ARRAY(y);

  return 0;
}
