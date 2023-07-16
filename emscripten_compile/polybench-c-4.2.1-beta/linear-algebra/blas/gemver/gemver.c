# 1 "./polybench-c-4.2.1-beta/linear-algebra/blas/gemver/gemver.c"
# 12 "./polybench-c-4.2.1-beta/linear-algebra/blas/gemver/gemver.c"
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>


#include <polybench.h>


#include "gemver.h"



static
void init_array (int n,
   DATA_TYPE *alpha,
   DATA_TYPE *beta,
   DATA_TYPE POLYBENCH_2D(A,N,N,n,n),
   DATA_TYPE POLYBENCH_1D(u1,N,n),
   DATA_TYPE POLYBENCH_1D(v1,N,n),
   DATA_TYPE POLYBENCH_1D(u2,N,n),
   DATA_TYPE POLYBENCH_1D(v2,N,n),
   DATA_TYPE POLYBENCH_1D(w,N,n),
   DATA_TYPE POLYBENCH_1D(x,N,n),
   DATA_TYPE POLYBENCH_1D(y,N,n),
   DATA_TYPE POLYBENCH_1D(z,N,n))
{
  int i, j;

  *alpha = 1.5;
  *beta = 1.2;

  DATA_TYPE fn = (DATA_TYPE)n;

  for (i = 0; i < n; i++)
    {
      u1[i] = i;
      u2[i] = ((i+1)/fn)/2.0;
      v1[i] = ((i+1)/fn)/4.0;
      v2[i] = ((i+1)/fn)/6.0;
      y[i] = ((i+1)/fn)/8.0;
      z[i] = ((i+1)/fn)/9.0;
      x[i] = 0.0;
      w[i] = 0.0;
      for (j = 0; j < n; j++)
        A[i][j] = (DATA_TYPE) (i*j % n) / n;
    }
}




static
void print_array(int n,
   DATA_TYPE POLYBENCH_1D(w,N,n))
{
  int i;

  POLYBENCH_DUMP_START;
  POLYBENCH_DUMP_BEGIN("w");
  for (i = 0; i < n; i++) {
    if (i % 20 == 0) fprintf (POLYBENCH_DUMP_TARGET, "\n");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, w[i]);
  }
  POLYBENCH_DUMP_END("w");
  POLYBENCH_DUMP_FINISH;
}





void kernel_gemver(int n,
     DATA_TYPE alpha,
     DATA_TYPE beta,
     DATA_TYPE POLYBENCH_2D(A,N,N,n,n),
     DATA_TYPE POLYBENCH_1D(u1,N,n),
     DATA_TYPE POLYBENCH_1D(v1,N,n),
     DATA_TYPE POLYBENCH_1D(u2,N,n),
     DATA_TYPE POLYBENCH_1D(v2,N,n),
     DATA_TYPE POLYBENCH_1D(w,N,n),
     DATA_TYPE POLYBENCH_1D(x,N,n),
     DATA_TYPE POLYBENCH_1D(y,N,n),
     DATA_TYPE POLYBENCH_1D(z,N,n))
{
  int i, j;

#pragma scop

  for (i = 0; i < _PB_N; i++)
    for (j = 0; j < _PB_N; j++)
      A[i][j] = A[i][j] + u1[i] * v1[j] + u2[i] * v2[j];

  for (i = 0; i < _PB_N; i++)
    for (j = 0; j < _PB_N; j++)
      x[i] = x[i] + beta * A[j][i] * y[j];

  for (i = 0; i < _PB_N; i++)
    x[i] = x[i] + z[i];

  for (i = 0; i < _PB_N; i++)
    for (j = 0; j < _PB_N; j++)
      w[i] = w[i] + alpha * A[i][j] * x[j];

#pragma endscop
}


int submain(int argc, char** argv)
{

  int n = N;


  DATA_TYPE alpha;
  DATA_TYPE beta;
  POLYBENCH_2D_ARRAY_DECL(A, DATA_TYPE, N, N, n, n);
  POLYBENCH_1D_ARRAY_DECL(u1, DATA_TYPE, N, n);
  POLYBENCH_1D_ARRAY_DECL(v1, DATA_TYPE, N, n);
  POLYBENCH_1D_ARRAY_DECL(u2, DATA_TYPE, N, n);
  POLYBENCH_1D_ARRAY_DECL(v2, DATA_TYPE, N, n);
  POLYBENCH_1D_ARRAY_DECL(w, DATA_TYPE, N, n);
  POLYBENCH_1D_ARRAY_DECL(x, DATA_TYPE, N, n);
  POLYBENCH_1D_ARRAY_DECL(y, DATA_TYPE, N, n);
  POLYBENCH_1D_ARRAY_DECL(z, DATA_TYPE, N, n);



  init_array (n, &alpha, &beta,
       POLYBENCH_ARRAY(A),
       POLYBENCH_ARRAY(u1),
       POLYBENCH_ARRAY(v1),
       POLYBENCH_ARRAY(u2),
       POLYBENCH_ARRAY(v2),
       POLYBENCH_ARRAY(w),
       POLYBENCH_ARRAY(x),
       POLYBENCH_ARRAY(y),
       POLYBENCH_ARRAY(z));


  polybench_start_instruments;


  kernel_gemver (n, alpha, beta,
   POLYBENCH_ARRAY(A),
   POLYBENCH_ARRAY(u1),
   POLYBENCH_ARRAY(v1),
   POLYBENCH_ARRAY(u2),
   POLYBENCH_ARRAY(v2),
   POLYBENCH_ARRAY(w),
   POLYBENCH_ARRAY(x),
   POLYBENCH_ARRAY(y),
   POLYBENCH_ARRAY(z));


  polybench_stop_instruments;
  polybench_print_instruments;



  polybench_prevent_dce(print_array(n, POLYBENCH_ARRAY(w)));


  POLYBENCH_FREE_ARRAY(A);
  POLYBENCH_FREE_ARRAY(u1);
  POLYBENCH_FREE_ARRAY(v1);
  POLYBENCH_FREE_ARRAY(u2);
  POLYBENCH_FREE_ARRAY(v2);
  POLYBENCH_FREE_ARRAY(w);
  POLYBENCH_FREE_ARRAY(x);
  POLYBENCH_FREE_ARRAY(y);
  POLYBENCH_FREE_ARRAY(z);

  return 0;
}
