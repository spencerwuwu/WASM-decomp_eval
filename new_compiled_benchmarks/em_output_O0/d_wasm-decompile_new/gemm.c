
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
void kernel_gemm(int a, int b, int c, double d, double e, int f, int g, int h);
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

void kernel_gemm(int a, int b, int c, double d, double e, int f, int g, int h) {
int64_t* i = stack_pointer;
int64_t j = 64;
int64_t* k = i - j;
k[15] = a;
k[14] = b;
k[13] = c;
k[5] = d;
k[4] = e;
k[7] = f;
k[6] = g;
k[5] = h;
int64_t l = 0;
k[4] = l;
while (1) {
int64_t m = (int64_t)k[4];
int64_t n = (int64_t)k[15];
int64_t o = m;
int64_t p = n;
int64_t q = o < p;
int64_t r = 1;
int64_t s = q & r;
if (eqz(s)) goto B_a;
int64_t t = 0;
k[3] = t;
while (1) {
int64_t u = (int64_t)k[3];
int64_t v = (int64_t)k[14];
int64_t w = u;
int64_t x = v;
int64_t y = w < x;
int64_t z = 1;
int64_t aa = y & z;
if (eqz(aa)) goto B_c;
double ba = (double)k[4];
int64_t ca = (int64_t)k[7];
int64_t da = (int64_t)k[4];
int64_t ea = 8800;
int64_t fa = da * ea;
int64_t ga = ca + fa;
int64_t ha = (int64_t)k[3];
int64_t ia = 3;
int64_t ja = ha << ia;
int64_t * ka = ga + ja;
double la = ka[0];
double ma = la * ba;
ka[0] = ma;
int64_t na = (int64_t)k[3];
int64_t oa = 1;
int64_t pa = na + oa;
k[3] = pa;
;//continue L_d;
}
//unreachable;
B_c:;
int64_t qa = 0;
k[2] = qa;
while (1) {
int64_t ra = (int64_t)k[2];
int64_t sa = (int64_t)k[13];
int64_t ta = ra;
int64_t ua = sa;
int64_t va = ta < ua;
int64_t wa = 1;
int64_t xa = va & wa;
if (eqz(xa)) goto B_e;
int64_t ya = 0;
k[3] = ya;
while (1) {
int64_t za = (int64_t)k[3];
int64_t ab = (int64_t)k[14];
int64_t bb = za;
int64_t cb = ab;
int64_t db = bb < cb;
int64_t eb = 1;
int64_t fb = db & eb;
if (eqz(fb)) goto B_g;
double gb = (double)k[5];
int64_t hb = (int64_t)k[6];
int64_t ib = (int64_t)k[4];
int64_t jb = 9600;
int64_t kb = ib * jb;
int64_t lb = hb + kb;
int64_t mb = (int64_t)k[2];
int64_t nb = 3;
int64_t ob = mb << nb;
int64_t * pb = lb + ob;
double qb = pb[0];
double rb = gb * qb;
int64_t sb = (int64_t)k[5];
int64_t tb = (int64_t)k[2];
int64_t ub = 8800;
int64_t vb = tb * ub;
int64_t wb = sb + vb;
int64_t xb = (int64_t)k[3];
int64_t yb = 3;
int64_t zb = xb << yb;
int64_t * ac = wb + zb;
double bc = ac[0];
int64_t cc = (int64_t)k[7];
int64_t dc = (int64_t)k[4];
int64_t ec = 8800;
int64_t fc = dc * ec;
int64_t gc = cc + fc;
int64_t hc = (int64_t)k[3];
int64_t ic = 3;
int64_t jc = hc << ic;
int64_t * kc = gc + jc;
double lc = kc[0];
double mc = rb * bc;
double nc = mc + lc;
kc[0] = nc;
int64_t oc = (int64_t)k[3];
int64_t pc = 1;
int64_t qc = oc + pc;
k[3] = qc;
;//continue L_h;
}
//unreachable;
B_g:;
int64_t rc = (int64_t)k[2];
int64_t sc = 1;
int64_t tc = rc + sc;
k[2] = tc;
;//continue L_f;
}
//unreachable;
B_e:;
int64_t uc = (int64_t)k[4];
int64_t vc = 1;
int64_t wc = uc + vc;
k[4] = wc;
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
