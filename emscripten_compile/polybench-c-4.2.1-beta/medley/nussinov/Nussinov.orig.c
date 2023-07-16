# 1 "./polybench-c-4.2.1-beta/medley/nussinov/Nussinov.orig.c"
# 43 "./polybench-c-4.2.1-beta/medley/nussinov/Nussinov.orig.c"
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <sys/time.h>

typedef int bool;
const int true = 1;
const int false = 0;

#if ! defined SCALAR_REPLACEMENT
#define SCALAR_REPLACEMENT 0
#endif

#if ! defined CHECK_DEPENDENCES
#define CHECK_DEPENDENCES false
#endif

#if defined NDEBUG
#define eassert(EXPR) 1
#else
#define eassert(EXPR) eassert_func(__STRING(EXPR), EXPR)
void eassert_func(char *expr, bool value)
{
    if (!value) {
 fprintf(stderr, "assertion failed: %s\n", expr);
 exit(1);

    }
}
#endif





#if ! defined FOUR_WAY_MAX_WITH_REDUNDANCY
#define FOUR_WAY_MAX_WITH_REDUNDANCY false
#endif
#if FOUR_WAY_MAX_WITH_REDUNDANCY
#define ZERO_IF_NO_REDUNDANCY 1
#else
#define ZERO_IF_NO_REDUNDANCY 0
#endif

#if ! defined PRINT_SIZE
#define PRINT_SIZE 48
#endif
#if ! defined VERBOSE
#define VERBOSE false
#endif
#if ! defined VERBOSE_OUT
#define VERBOSE_OUT stdout
#endif
#if VERBOSE
#if ! defined REALLY_VERBOSE
#define REALLY_VERBOSE false
#endif
#endif

#if ! defined SEED
#define SEED 42
#endif

#define SLOWER (CHECK_DEPENDENCES | VERBOSE)

double cur_time(void)
{
 struct timeval tv;
 struct timezone tz;
 gettimeofday(&tv, &tz);
 return tv.tv_sec + tv.tv_usec*1.0e-6;
}


char *base_print[4] = { "A", "C", "G", "U" };
typedef int base;
typedef int score;

inline score match(base b1, base b2)
{
 return (b1+b2) == 3 ? 1 : 0;
}

inline score max_score(score s1, score s2)
{
 return (s1 >= s2) ? s1 : s2;
}

base seq[MAX_SIZE];
score N_array[MAX_SIZE][MAX_SIZE];
#define debug_N(x,y) (N_array[x][y])

#if ! CHECK_DEPENDENCES
#define N(x,y) (eassert(0 <= x && x < size && 0 <= y && y < size), N_array[x][y])
#if SCALAR_REPLACEMENT
#define MAX_N_DECLS() int max_tmp_i, max_tmp_j; score max_tmp
#define MAX_N_START(x,y) ((max_tmp_i=x), (max_tmp_j=y), (max_tmp = 0))
#define MAX_N(x,y,v) (eassert(max_tmp_i==x && max_tmp_j==y), eassert(0 <= x && x < size && 0 <= y && y < size), (max_tmp = max_score(max_tmp, v)))
#define MAX_N_END(x,y) (eassert(max_tmp_i==x && max_tmp_j==y), ((N_array[x][y]) = max_score(N_array[x][y], max_tmp)))
#else
#define MAX_N(x,y,v) (eassert(0 <= x && x < size && 0 <= y && y < size), ((N_array[x][y]) = max_score(N_array[x][y], v)))
#endif
#else
bool N_array_has_been_read[MAX_SIZE][MAX_SIZE];
#define N(x,y) (eassert(0 <= x && x < size && 0 <= y && y < size), \
    (REALLY_VERBOSE?fprintf(VERBOSE_OUT, "i, j, k = %d, %d, %d: reading N[%d][%d]\n", i, j, k, x, y):1), \
    (N_array_has_been_read[x][y] = (true)), \
    N_array[x][y]+0)
#if SCALAR_REPLACEMENT
#error("Not yet ready to do scalar replacement and check_deps at the same time :-(")
#else
#define MAX_N(x,y,v) (eassert(0 <= x && x < size && 0 <= y && y < size), \
    eassert(!N_array_has_been_read[x][y]), \
    (N_array[x][y] = max_score(N_array[x][y], v)))
#endif
#endif
#if ! SCALAR_REPLACEMENT
#define MAX_N_DECLS() 
#define MAX_N_START(x,y) 
#define MAX_N_END(x,y) 
#endif



int getint(char *prompt)
{
#if VERBOSE_OUT == stderr
 char *terminate = "\n";
#else
 char *terminate = "";
#endif
 int result;
 int i=0;
 while (
  fprintf(stderr, "%s%s", prompt, terminate),
  result = scanf("%d", &i),
  result != 1 && result != EOF
 ) {
  fprintf(stderr, "Sorry, I didn't understand that...\n");
 }
 if (result == 1) {
  return i;
 } else {
  fprintf(stderr, "Giving up ... can't read input\n");
  exit(1);
 }
}
