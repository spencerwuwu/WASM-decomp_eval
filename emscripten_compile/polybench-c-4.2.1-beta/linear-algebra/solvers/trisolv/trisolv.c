# 1 "./polybench-c-4.2.1-beta/linear-algebra/solvers/trisolv/trisolv.c"
# 12 "./polybench-c-4.2.1-beta/linear-algebra/solvers/trisolv/trisolv.c"
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>


#include <polybench.h>


#include "trisolv.h"



static
void init_array(int n,
  DATA_TYPE POLYBENCH_2D(L,N,N,n,n),
  DATA_TYPE POLYBENCH_1D(x,N,n),
  DATA_TYPE POLYBENCH_1D(b,N,n))
{
  int i, j;

  for (i = 0; i < n; i++)
    {
      x[i] = - 999;
      b[i] = i ;
      for (j = 0; j <= i; j++)
 L[i][j] = (DATA_TYPE) (i+n-j+1)*2/n;
    }
}




static
void print_array(int n,
   DATA_TYPE POLYBENCH_1D(x,N,n))

{
  int i;

  POLYBENCH_DUMP_START;
  POLYBENCH_DUMP_BEGIN("x");
  for (i = 0; i < n; i++) {
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, x[i]);
    if (i % 20 == 0) fprintf (POLYBENCH_DUMP_TARGET, "\n");
  }
  POLYBENCH_DUMP_END("x");
  POLYBENCH_DUMP_FINISH;
}





void kernel_trisolv(int n,
      DATA_TYPE POLYBENCH_2D(L,N,N,n,n),
      DATA_TYPE POLYBENCH_1D(x,N,n),
      DATA_TYPE POLYBENCH_1D(b,N,n))
{
  int i, j;

#pragma scop
  for (i = 0; i < _PB_N; i++)
    {
      x[i] = b[i];
      for (j = 0; j <i; j++)
        x[i] -= L[i][j] * x[j];
      x[i] = x[i] / L[i][i];
    }
#pragma endscop

}


int submain(int argc, char** argv)
{

  int n = N;


  POLYBENCH_2D_ARRAY_DECL(L, DATA_TYPE, N, N, n, n);
  POLYBENCH_1D_ARRAY_DECL(x, DATA_TYPE, N, n);
  POLYBENCH_1D_ARRAY_DECL(b, DATA_TYPE, N, n);



  init_array (n, POLYBENCH_ARRAY(L), POLYBENCH_ARRAY(x), POLYBENCH_ARRAY(b));


  polybench_start_instruments;


  kernel_trisolv (n, POLYBENCH_ARRAY(L), POLYBENCH_ARRAY(x), POLYBENCH_ARRAY(b));


  polybench_stop_instruments;
  polybench_print_instruments;



  polybench_prevent_dce(print_array(n, POLYBENCH_ARRAY(x)));


  POLYBENCH_FREE_ARRAY(L);
  POLYBENCH_FREE_ARRAY(x);
  POLYBENCH_FREE_ARRAY(b);

  return 0;
}
