# 1 "./polybench-c-4.2.1-beta/linear-algebra/kernels/doitgen/doitgen.c"
# 12 "./polybench-c-4.2.1-beta/linear-algebra/kernels/doitgen/doitgen.c"
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>


#include <polybench.h>


#include "doitgen.h"



static
void init_array(int nr, int nq, int np,
  DATA_TYPE POLYBENCH_3D(A,NR,NQ,NP,nr,nq,np),
  DATA_TYPE POLYBENCH_2D(C4,NP,NP,np,np))
{
  int i, j, k;

  for (i = 0; i < nr; i++)
    for (j = 0; j < nq; j++)
      for (k = 0; k < np; k++)
 A[i][j][k] = (DATA_TYPE) ((i*j + k)%np) / np;
  for (i = 0; i < np; i++)
    for (j = 0; j < np; j++)
      C4[i][j] = (DATA_TYPE) (i*j % np) / np;
}




static
void print_array(int nr, int nq, int np,
   DATA_TYPE POLYBENCH_3D(A,NR,NQ,NP,nr,nq,np))
{
  int i, j, k;

  POLYBENCH_DUMP_START;
  POLYBENCH_DUMP_BEGIN("A");
  for (i = 0; i < nr; i++)
    for (j = 0; j < nq; j++)
      for (k = 0; k < np; k++) {
 if ((i*nq*np+j*np+k) % 20 == 0) fprintf (POLYBENCH_DUMP_TARGET, "\n");
 fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, A[i][j][k]);
      }
  POLYBENCH_DUMP_END("A");
  POLYBENCH_DUMP_FINISH;
}




void kernel_doitgen(int nr, int nq, int np,
      DATA_TYPE POLYBENCH_3D(A,NR,NQ,NP,nr,nq,np),
      DATA_TYPE POLYBENCH_2D(C4,NP,NP,np,np),
      DATA_TYPE POLYBENCH_1D(sum,NP,np))
{
  int r, q, p, s;

#pragma scop
  for (r = 0; r < _PB_NR; r++)
    for (q = 0; q < _PB_NQ; q++) {
      for (p = 0; p < _PB_NP; p++) {
 sum[p] = SCALAR_VAL(0.0);
 for (s = 0; s < _PB_NP; s++)
   sum[p] += A[r][q][s] * C4[s][p];
      }
      for (p = 0; p < _PB_NP; p++)
 A[r][q][p] = sum[p];
    }
#pragma endscop

}


int submain(int argc, char** argv)
{

  int nr = NR;
  int nq = NQ;
  int np = NP;


  POLYBENCH_3D_ARRAY_DECL(A,DATA_TYPE,NR,NQ,NP,nr,nq,np);
  POLYBENCH_1D_ARRAY_DECL(sum,DATA_TYPE,NP,np);
  POLYBENCH_2D_ARRAY_DECL(C4,DATA_TYPE,NP,NP,np,np);


  init_array (nr, nq, np,
       POLYBENCH_ARRAY(A),
       POLYBENCH_ARRAY(C4));


  polybench_start_instruments;


  kernel_doitgen (nr, nq, np,
    POLYBENCH_ARRAY(A),
    POLYBENCH_ARRAY(C4),
    POLYBENCH_ARRAY(sum));


  polybench_stop_instruments;
  polybench_print_instruments;



  polybench_prevent_dce(print_array(nr, nq, np, POLYBENCH_ARRAY(A)));


  POLYBENCH_FREE_ARRAY(A);
  POLYBENCH_FREE_ARRAY(sum);
  POLYBENCH_FREE_ARRAY(C4);

  return 0;
}
