# 1 "./polybench-c-4.2.1-beta/utilities/polybench_type1.c"
# 29 "./polybench-c-4.2.1-beta/utilities/polybench_type1.c"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <assert.h>
#include <time.h>
#include <sys/time.h>
#include <sys/resource.h>
#include <sched.h>
#include <math.h>
#ifdef _OPENMP
# include <omp.h>
#endif

#if defined(POLYBENCH_PAPI)
#undef POLYBENCH_PAPI
# include "polybench.h"
#define POLYBENCH_PAPI 
#else
# include "polybench.h"
#endif


#ifndef POLYBENCH_THREAD_MONITOR
#define POLYBENCH_THREAD_MONITOR 0
#endif


#ifndef POLYBENCH_CACHE_SIZE_KB
#define POLYBENCH_CACHE_SIZE_KB 32770
#endif


int polybench_papi_counters_threadid = POLYBENCH_THREAD_MONITOR;
double polybench_program_total_flops = 0;

#ifdef POLYBENCH_PAPI
# include <papi.h>
#define POLYBENCH_MAX_NB_PAPI_COUNTERS 96
  char* _polybench_papi_eventlist[] = {
#include "papi_counters.list"
    NULL
  };
  int polybench_papi_eventset;
  int polybench_papi_eventlist[POLYBENCH_MAX_NB_PAPI_COUNTERS];
  long_long polybench_papi_values[POLYBENCH_MAX_NB_PAPI_COUNTERS];

#endif






#define NB_INITIAL_TABLE_ENTRIES 512
struct polybench_data_ptrs
{
  void** user_view;
  void** real_ptr;
  int nb_entries;
  int nb_avail_entries;
};
static struct polybench_data_ptrs* _polybench_alloc_table = NULL;
static size_t polybench_inter_array_padding_sz = 0;


double polybench_t_start, polybench_t_end;

unsigned long long int polybench_c_start, polybench_c_end;

static
double rtclock()
{
#if defined(POLYBENCH_TIME) || defined(POLYBENCH_GFLOPS)
  struct timeval Tp;
  int stat;
  stat = gettimeofday (&Tp, NULL);
  if (stat != 0)
    printf ("Error return from gettimeofday: %d", stat);
  return (Tp.tv_sec + Tp.tv_usec * 1.0e-6);
#else
    return 0;
#endif
}


#ifdef POLYBENCH_CYCLE_ACCURATE_TIMER
static
unsigned long long int rdtsc()
{
  unsigned long long int ret = 0;
  unsigned int cycles_lo;
  unsigned int cycles_hi;
  __asm__ volatile ("RDTSC" : "=a" (cycles_lo), "=d" (cycles_hi));
  ret = (unsigned long long int)cycles_hi << 32 | cycles_lo;

  return ret;
}
#endif

void polybench_flush_cache()
{
  int cs = POLYBENCH_CACHE_SIZE_KB * 1024 / sizeof(double);
  double* flush = (double*) calloc (cs, sizeof(double));
  int i;
  double tmp = 0.0;
#ifdef _OPENMP
#pragma omp parallel for reduction(+:tmp) private(i)
#endif
  for (i = 0; i < cs; i++)
    tmp += flush[i];
  assert (tmp <= 10.0);
  free (flush);
}


#ifdef POLYBENCH_LINUX_FIFO_SCHEDULER
void polybench_linux_fifo_scheduler()
{


  struct sched_param schedParam;
  schedParam.sched_priority = sched_get_priority_max (SCHED_FIFO);
  sched_setscheduler (0, SCHED_FIFO, &schedParam);
}


void polybench_linux_standard_scheduler()
{

  struct sched_param schedParam;
  schedParam.sched_priority = sched_get_priority_max (SCHED_OTHER);
  sched_setscheduler (0, SCHED_OTHER, &schedParam);
}
#endif

#ifdef POLYBENCH_PAPI

static
void test_fail(char *file, int line, char *call, int retval)
{
  char buf[128];

  memset(buf, '\0', sizeof(buf));
  if (retval != 0)
    fprintf (stdout,"%-40s FAILED\nLine # %d\n", file, line);
  else
    {
      fprintf (stdout,"%-40s SKIPPED\n", file);
      fprintf (stdout,"Line # %d\n", line);
    }
  if (retval == PAPI_ESYS)
    {
      sprintf (buf, "System error in %s", call);
      perror (buf);
    }
  else if (retval > 0)
    fprintf (stdout,"Error: %s\n", call);
  else if (retval == 0)
    fprintf (stdout,"Error: %s\n", call);
  else
    {
      char errstring[PAPI_MAX_STR_LEN];

      #if defined (PAPI_VERSION) && ((PAPI_VERSION_MAJOR(PAPI_VERSION) == 5 && PAPI_VERSION_MINOR(PAPI_VERSION) >= 4) || PAPI_VERSION_MAJOR(PAPI_VERSION) > 5)
      fprintf (stdout, "Error in %s: %s\n", call, PAPI_strerror(retval));
      #else
      PAPI_perror (retval, errstring, PAPI_MAX_STR_LEN);
      fprintf (stdout,"Error in %s: %s\n", call, errstring);
      #endif
    }
  fprintf (stdout,"\n");
  if (PAPI_is_initialized ())
    PAPI_shutdown ();
  exit (1);
}


void polybench_papi_init()
{
# ifdef _OPENMP
#pragma omp parallel
  {
#pragma omp master
    {
      if (omp_get_max_threads () < polybench_papi_counters_threadid)
 polybench_papi_counters_threadid = omp_get_max_threads () - 1;
    }
#pragma omp barrier

    if (omp_get_thread_num () == polybench_papi_counters_threadid)
      {
# endif
 int retval;
 polybench_papi_eventset = PAPI_NULL;
 if ((retval = PAPI_library_init (PAPI_VER_CURRENT)) != PAPI_VER_CURRENT)
   test_fail (__FILE__, __LINE__, "PAPI_library_init", retval);
 if ((retval = PAPI_create_eventset (&polybench_papi_eventset))
     != PAPI_OK)
   test_fail (__FILE__, __LINE__, "PAPI_create_eventset", retval);
 int k;
 for (k = 0; _polybench_papi_eventlist[k]; ++k)
   {
     if ((retval =
   PAPI_event_name_to_code (_polybench_papi_eventlist[k],
       &(polybench_papi_eventlist[k])))
  != PAPI_OK)
       test_fail (__FILE__, __LINE__, "PAPI_event_name_to_code", retval);
   }
 polybench_papi_eventlist[k] = 0;


# ifdef _OPENMP
      }
  }
#pragma omp barrier
# endif
}


void polybench_papi_close()
{
# ifdef _OPENMP
#pragma omp parallel
  {
    if (omp_get_thread_num () == polybench_papi_counters_threadid)
      {
# endif
 int retval;
 if ((retval = PAPI_destroy_eventset (&polybench_papi_eventset))
     != PAPI_OK)
   test_fail (__FILE__, __LINE__, "PAPI_destroy_eventset", retval);
 if (PAPI_is_initialized ())
   PAPI_shutdown ();
# ifdef _OPENMP
      }
  }
#pragma omp barrier
# endif
}

int polybench_papi_start_counter(int evid)
{
# ifndef POLYBENCH_NO_FLUSH_CACHE
    polybench_flush_cache();
# endif

# ifdef _OPENMP
#pragma omp parallel
  {
    if (omp_get_thread_num () == polybench_papi_counters_threadid)
      {
# endif

 int retval = 1;
 char descr[PAPI_MAX_STR_LEN];
 PAPI_event_info_t evinfo;
 PAPI_event_code_to_name (polybench_papi_eventlist[evid], descr);
 if (PAPI_add_event (polybench_papi_eventset,
       polybench_papi_eventlist[evid]) != PAPI_OK)
   test_fail (__FILE__, __LINE__, "PAPI_add_event", 1);
 if (PAPI_get_event_info (polybench_papi_eventlist[evid], &evinfo)
     != PAPI_OK)
   test_fail (__FILE__, __LINE__, "PAPI_get_event_info", retval);
 if ((retval = PAPI_start (polybench_papi_eventset)) != PAPI_OK)
   test_fail (__FILE__, __LINE__, "PAPI_start", retval);
# ifdef _OPENMP
      }
  }
#pragma omp barrier
# endif
  return 0;
}


void polybench_papi_stop_counter(int evid)
{
# ifdef _OPENMP
#pragma omp parallel
  {
    if (omp_get_thread_num () == polybench_papi_counters_threadid)
      {
# endif
 int retval;
 long_long values[1];
 values[0] = 0;
 if ((retval = PAPI_read (polybench_papi_eventset, &values[0]))
     != PAPI_OK)
   test_fail (__FILE__, __LINE__, "PAPI_read", retval);

 if ((retval = PAPI_stop (polybench_papi_eventset, NULL)) != PAPI_OK)
   test_fail (__FILE__, __LINE__, "PAPI_stop", retval);

 polybench_papi_values[evid] = values[0];

 if ((retval = PAPI_remove_event
      (polybench_papi_eventset,
       polybench_papi_eventlist[evid])) != PAPI_OK)
   test_fail (__FILE__, __LINE__, "PAPI_remove_event", retval);
# ifdef _OPENMP
      }
  }
#pragma omp barrier
# endif
}


void polybench_papi_print()
{
  int verbose = 0;
# ifdef _OPENMP
#pragma omp parallel
  {
    if (omp_get_thread_num() == polybench_papi_counters_threadid)
      {
#ifdef POLYBENCH_PAPI_VERBOSE
 verbose = 1;
#endif
 if (verbose)
   printf ("On thread %d:\n", polybench_papi_counters_threadid);
#endif
 int evid;
 for (evid = 0; polybench_papi_eventlist[evid] != 0; ++evid)
   {
     if (verbose)
       printf ("%s=", _polybench_papi_eventlist[evid]);
     printf ("%llu ", polybench_papi_values[evid]);
     if (verbose)
       printf ("\n");
   }
 printf ("\n");
# ifdef _OPENMP
      }
  }
#pragma omp barrier
# endif
}

#endif


void polybench_prepare_instruments()
{
#ifndef POLYBENCH_NO_FLUSH_CACHE




#endif
#ifdef POLYBENCH_LINUX_FIFO_SCHEDULER
  polybench_linux_fifo_scheduler ();
#endif
}

void polybench_timer_start()
{
  polybench_prepare_instruments ();
#ifndef POLYBENCH_CYCLE_ACCURATE_TIMER
  polybench_t_start = rtclock ();
#else
  polybench_c_start = rdtsc ();
#endif
}
void polybench_timer_stop()
{
#ifndef POLYBENCH_CYCLE_ACCURATE_TIMER
  polybench_t_end = rtclock ();
#else
  polybench_c_end = rdtsc ();
#endif
#ifdef POLYBENCH_LINUX_FIFO_SCHEDULER
  polybench_linux_standard_scheduler ();
#endif
}
void polybench_timer_print()
{
  #ifdef POLYBENCH_GFLOPS
  if (polybench_program_total_flops == 0)
 {
   printf ("[PolyBench][WARNING] Program flops not defined, use polybench_set_program_flops(value)\n");
   printf ("%0.6lf\n", polybench_t_end - polybench_t_start);
 }
    else
 printf ("%0.2lf\n",
  (polybench_program_total_flops /
   (double)(polybench_t_end - polybench_t_start)) / 1000000000);
  #else
    # ifndef POLYBENCH_CYCLE_ACCURATE_TIMER
    printf ("%0.6f\n", polybench_t_end - polybench_t_start);
    # else
    printf ("%ld\n", polybench_c_end - polybench_c_start);
    # endif
  #endif
}
# 433 "./polybench-c-4.2.1-beta/utilities/polybench_type1.c"
#ifdef POLYBENCH_ENABLE_INTARRAY_PAD
static
void grow_alloc_table()
{
  if (_polybench_alloc_table == NULL ||
      (_polybench_alloc_table->nb_entries % NB_INITIAL_TABLE_ENTRIES) != 0 ||
      _polybench_alloc_table->nb_avail_entries != 0)
    {

      fprintf (stderr, "[ERROR] Inter-array padding requires to use polybench_alloc_data and polybench_free_data\n");
      exit (1);
    }
  size_t sz = _polybench_alloc_table->nb_entries;
  sz += NB_INITIAL_TABLE_ENTRIES;
  _polybench_alloc_table->user_view =
    realloc (_polybench_alloc_table->user_view, sz * sizeof(void*));
  assert(_polybench_alloc_table->user_view != NULL);
  _polybench_alloc_table->real_ptr =
    realloc (_polybench_alloc_table->real_ptr, sz * sizeof(void*));
  assert(_polybench_alloc_table->real_ptr != NULL);
  _polybench_alloc_table->nb_avail_entries = NB_INITIAL_TABLE_ENTRIES;
}

static
void* register_padded_pointer(void* ptr, size_t orig_sz, size_t padded_sz)
{
  if (_polybench_alloc_table == NULL)
    {
      fprintf (stderr, "[ERROR] Inter-array padding requires to use polybench_alloc_data and polybench_free_data\n");
      exit (1);
    }
  if (_polybench_alloc_table->nb_avail_entries == 0)
    grow_alloc_table ();
  int id = _polybench_alloc_table->nb_entries++;
  _polybench_alloc_table->real_ptr[id] = ptr;
  _polybench_alloc_table->user_view[id] = ptr + (padded_sz - orig_sz);

  return _polybench_alloc_table->user_view[id];
}


static
void
free_data_from_alloc_table (void* ptr)
{
  if (_polybench_alloc_table != NULL && _polybench_alloc_table->nb_entries > 0)
    {
      int i;
      for (i = 0; i < _polybench_alloc_table->nb_entries; ++i)
 if (_polybench_alloc_table->user_view[i] == ptr ||
     _polybench_alloc_table->real_ptr[i] == ptr)
   break;
      if (i != _polybench_alloc_table->nb_entries)
 {
   free (_polybench_alloc_table->real_ptr[i]);
   for (; i < _polybench_alloc_table->nb_entries - 1; ++i)
     {
       _polybench_alloc_table->user_view[i] =
  _polybench_alloc_table->user_view[i + 1];
       _polybench_alloc_table->real_ptr[i] =
  _polybench_alloc_table->real_ptr[i + 1];
     }
   _polybench_alloc_table->nb_entries--;
   _polybench_alloc_table->nb_avail_entries++;
   if (_polybench_alloc_table->nb_entries == 0)
     {
       free (_polybench_alloc_table->user_view);
       free (_polybench_alloc_table->real_ptr);
       free (_polybench_alloc_table);
       _polybench_alloc_table = NULL;
     }
 }
    }
}

static
void check_alloc_table_state()
{
  if (_polybench_alloc_table == NULL)
    {
      _polybench_alloc_table = (struct polybench_data_ptrs*)
 malloc (sizeof(struct polybench_data_ptrs));
      assert(_polybench_alloc_table != NULL);
      _polybench_alloc_table->user_view =
 (void**) malloc (sizeof(void*) * NB_INITIAL_TABLE_ENTRIES);
      assert(_polybench_alloc_table->user_view != NULL);
      _polybench_alloc_table->real_ptr =
 (void**) malloc (sizeof(void*) * NB_INITIAL_TABLE_ENTRIES);
      assert(_polybench_alloc_table->real_ptr != NULL);
      _polybench_alloc_table->nb_entries = 0;
      _polybench_alloc_table->nb_avail_entries = NB_INITIAL_TABLE_ENTRIES;
    }
}

#endif





static
void*
xmalloc(size_t alloc_sz)
{
  void* ret = NULL;

  polybench_inter_array_padding_sz += POLYBENCH_INTER_ARRAY_PADDING_FACTOR;
  size_t padded_sz = alloc_sz + polybench_inter_array_padding_sz;





  int err = 1;

  if (! ret || err)
    {
      fprintf (stderr, "[PolyBench] posix_memalign: cannot allocate memory");
      exit (1);
    }







#ifdef POLYBENCH_ENABLE_INTARRAY_PAD



  ret = register_padded_pointer(ret, alloc_sz, padded_sz);
#endif

  return ret;
}


void polybench_free_data(void* ptr)
{
#ifdef POLYBENCH_ENABLE_INTARRAY_PAD
  free_data_from_alloc_table (ptr);
#else
  free (ptr);
#endif
}


void* polybench_alloc_data(unsigned long long int n, int elt_size)
{
#ifdef POLYBENCH_ENABLE_INTARRAY_PAD
  check_alloc_table_state ();
#endif


  size_t val = n;
  val *= elt_size;
# 607 "./polybench-c-4.2.1-beta/utilities/polybench_type1.c"
  void* ret = (int*) malloc (val);




  return ret;
}
