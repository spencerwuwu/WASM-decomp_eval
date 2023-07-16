# 1 "./polybench-c-4.2.1-beta/utilities/template-for-new-benchmark.c"
# 10 "./polybench-c-4.2.1-beta/utilities/template-for-new-benchmark.c"
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>


#include <polybench.h>



#include "template-for-new-benchmark.h"



static
void init_array(int n, DATA_TYPE POLYBENCH_2D(C,N,N,n,n))
{
  int i, j;

  for (i = 0; i < n; i++)
    for (j = 0; j < n; j++)
      C[i][j] = 42;
}




static
void print_array(int n, DATA_TYPE POLYBENCH_2D(C,N,N,n,n))
{
  int i, j;

  for (i = 0; i < n; i++)
    for (j = 0; j < n; j++) {
 fprintf (stderr, DATA_PRINTF_MODIFIER, C[i][j]);
 if (i % 20 == 0) fprintf (stderr, "\n");
    }
  fprintf (stderr, "\n");
}




static
void kernel_template(int n, DATA_TYPE POLYBENCH_2D(C,N,N,n,n))
{
  int i, j;

#pragma scop
  for (i = 0; i < _PB_N; i++)
    for (j = 0; j < _PB_N; j++)
      C[i][j] += 42;
#pragma endscop

}


int main(int argc, char** argv)
{

  int n = N;


  POLYBENCH_2D_ARRAY_DECL(C,DATA_TYPE,N,N,n,n);


  init_array (n, POLYBENCH_ARRAY(C));


  polybench_start_instruments;


  kernel_template (n, POLYBENCH_ARRAY(C));


  polybench_stop_instruments;
  polybench_print_instruments;



  polybench_prevent_dce(print_array(n, POLYBENCH_ARRAY(C)));


  POLYBENCH_FREE_ARRAY(C);

  return 0;
}
