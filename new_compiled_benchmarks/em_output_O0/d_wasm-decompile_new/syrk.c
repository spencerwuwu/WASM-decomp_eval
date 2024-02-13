
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
//#include <stdlib.h>
#include <string.h>
#include <math.h>

#include <polybench.h>
//#include "wasm-decompile_base.h"
#define eqz(x) ((x) == 0)
#define ubyte uint8_t
#define byte int8_t
#define byte_ptr int8_t*
#define ubyte_ptr uint8_t*
int64_t f64_convert_i64_s(float);
int32_t f64_convert_i32_s(float);
uint64_t i64_extend_i32_u(int);
int64_t i64_extend_i32_s(int);
int32_t f32_convert_i32_s(float);
uint32_t f32_convert_i32_u(float);
int64_t f32_convert_i64_s(float);
uint64_t f32_convert_i64_u(float);
int i32_wrap_i64(int64_t);
int select__if(int,int,int);

    int _strcmp(int a, int b);
void _free(int a);
int _fprintf(int a, int b, int c);
int legalimport_polybench_alloc_data(int a, int b, int c);
void wasm_call_ctors();
void wasm_apply_data_relocs();
void kernel_syrk(int a, int b, double c, double d, int e, int f);
int legalfunc_polybench_alloc_data(long a, int b);


int64_t stack[100000];
int64_t *stack_pointer = stack + 100000;
int64_t *memory_base;
int64_t *table_base;
;


;

;

;

;

void wasm_call_ctors() {
}

void wasm_apply_data_relocs() {
}

void kernel_syrk(int a, int b, double c, double d, int e, int f) {
int64_t* g = stack_pointer;
int64_t h = 48;
int64_t* i = g - h;
i[11] = a;
i[10] = b;
i[4] = c;
i[3] = d;
i[5] = e;
i[4] = f;
int64_t j = 0;
i[3] = j;
while (1) {
int64_t k = (int64_t)i[3];
int64_t l = (int64_t)i[11];
int64_t m = k;
int64_t n = l;
int64_t o = m < n;
int64_t p = 1;
int64_t q = o & p;
if (eqz(q)) goto B_a;
int64_t r = 0;
i[2] = r;
while (1) {
int64_t s = (int64_t)i[2];
int64_t t = (int64_t)i[3];
int64_t u = s;
int64_t v = t;
int64_t w = u <= v;
int64_t x = 1;
int64_t y = w & x;
if (eqz(y)) goto B_c;
double z = (double)i[3];
int64_t aa = (int64_t)i[5];
int64_t ba = (int64_t)i[3];
int64_t ca = 9600;
int64_t da = ba * ca;
int64_t ea = aa + da;
int64_t fa = (int64_t)i[2];
int64_t ga = 3;
int64_t ha = fa << ga;
int64_t * ia = ea + ha;
double ja = ia[0];
double ka = ja * z;
ia[0] = ka;
int64_t la = (int64_t)i[2];
int64_t ma = 1;
int64_t na = la + ma;
i[2] = na;
;//continue L_d;
}
//unreachable;
B_c:;
int64_t oa = 0;
i[1] = oa;
while (1) {
int64_t pa = (int64_t)i[1];
int64_t qa = (int64_t)i[10];
int64_t ra = pa;
int64_t sa = qa;
int64_t ta = ra < sa;
int64_t ua = 1;
int64_t va = ta & ua;
if (eqz(va)) goto B_e;
int64_t wa = 0;
i[2] = wa;
while (1) {
int64_t xa = (int64_t)i[2];
int64_t ya = (int64_t)i[3];
int64_t za = xa;
int64_t ab = ya;
int64_t bb = za <= ab;
int64_t cb = 1;
int64_t db = bb & cb;
if (eqz(db)) goto B_g;
double eb = (double)i[4];
int64_t fb = (int64_t)i[4];
int64_t gb = (int64_t)i[3];
int64_t hb = 8000;
int64_t ib = gb * hb;
int64_t jb = fb + ib;
int64_t kb = (int64_t)i[1];
int64_t lb = 3;
int64_t mb = kb << lb;
int64_t * nb = jb + mb;
double ob = nb[0];
double pb = eb * ob;
int64_t qb = (int64_t)i[4];
int64_t rb = (int64_t)i[2];
int64_t sb = 8000;
int64_t tb = rb * sb;
int64_t ub = qb + tb;
int64_t vb = (int64_t)i[1];
int64_t wb = 3;
int64_t xb = vb << wb;
int64_t * yb = ub + xb;
double zb = yb[0];
int64_t ac = (int64_t)i[5];
int64_t bc = (int64_t)i[3];
int64_t cc = 9600;
int64_t dc = bc * cc;
int64_t ec = ac + dc;
int64_t fc = (int64_t)i[2];
int64_t gc = 3;
int64_t hc = fc << gc;
int64_t * ic = ec + hc;
double jc = ic[0];
double kc = pb * zb;
double lc = kc + jc;
ic[0] = lc;
int64_t mc = (int64_t)i[2];
int64_t nc = 1;
int64_t oc = mc + nc;
i[2] = oc;
;//continue L_h;
}
//unreachable;
B_g:;
int64_t pc = (int64_t)i[1];
int64_t qc = 1;
int64_t rc = pc + qc;
i[1] = rc;
;//continue L_f;
}
//unreachable;
B_e:;
int64_t sc = (int64_t)i[3];
int64_t tc = 1;
int64_t uc = sc + tc;
i[3] = uc;
;//continue L_b;
}
//unreachable;
B_a:;
}




int legalfunc_polybench_alloc_data(long a, int b) {
return legalimport_polybench_alloc_data(i32_wrap_i64(a),
i32_wrap_i64(a >> 32L),
b);
}
