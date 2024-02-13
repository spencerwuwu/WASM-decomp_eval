
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
void kernel_jacobi_1d(int a, int b, int c, int d);
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

void kernel_jacobi_1d(int a, int b, int c, int d) {
int64_t* e = stack_pointer;
int64_t f = 32;
int64_t * g = e - f;
g[7] = a;
g[6] = b;
g[5] = c;
g[4] = d;
int64_t h = 0;
g[3] = h;
while (1) {
int64_t i = g[3];
int64_t j = g[7];
int64_t k = i;
int64_t l = j;
int64_t m = k < l;
int64_t n = 1;
int64_t o = m & n;
if (eqz(o)) goto B_a;
int64_t p = 1;
g[2] = p;
while (1) {
int64_t q = g[2];
int64_t r = g[6];
int64_t s = 1;
int64_t t = r - s;
int64_t u = q;
int64_t v = t;
int64_t w = u < v;
int64_t x = 1;
int64_t y = w & x;
if (eqz(y)) goto B_c;
int64_t z = g[5];
int64_t aa = g[2];
int64_t ba = 1;
int64_t ca = aa - ba;
int64_t da = 3;
int64_t ea = ca << da;
int64_t * fa = z + ea;
double ga = fa[0];
int64_t ha = g[5];
int64_t ia = g[2];
int64_t ja = 3;
int64_t ka = ia << ja;
int64_t * la = ha + ka;
double ma = la[0];
double na = ga + ma;
int64_t oa = g[5];
int64_t pa = g[2];
int64_t qa = 1;
int64_t ra = pa + qa;
int64_t sa = 3;
int64_t ta = ra << sa;
int64_t * ua = oa + ta;
double va = ua[0];
double wa = na + va;
double xa = 0.33333;
double ya = xa * wa;
int64_t za = g[4];
int64_t ab = g[2];
int64_t bb = 3;
int64_t cb = ab << bb;
int64_t * db = za + cb;
db[0] = ya;
int64_t eb = g[2];
int64_t fb = 1;
int64_t gb = eb + fb;
g[2] = gb;
;//continue L_d;
}
//unreachable;
B_c:;
int64_t hb = 1;
g[2] = hb;
while (1) {
int64_t ib = g[2];
int64_t jb = g[6];
int64_t kb = 1;
int64_t lb = jb - kb;
int64_t mb = ib;
int64_t nb = lb;
int64_t ob = mb < nb;
int64_t pb = 1;
int64_t qb = ob & pb;
if (eqz(qb)) goto B_e;
int64_t rb = g[4];
int64_t sb = g[2];
int64_t tb = 1;
int64_t ub = sb - tb;
int64_t vb = 3;
int64_t wb = ub << vb;
int64_t * xb = rb + wb;
double yb = xb[0];
int64_t zb = g[4];
int64_t ac = g[2];
int64_t bc = 3;
int64_t cc = ac << bc;
int64_t * dc = zb + cc;
double ec = dc[0];
double fc = yb + ec;
int64_t gc = g[4];
int64_t hc = g[2];
int64_t ic = 1;
int64_t jc = hc + ic;
int64_t kc = 3;
int64_t lc = jc << kc;
int64_t * mc = gc + lc;
double nc = mc[0];
double oc = fc + nc;
double pc = 0.33333;
double qc = pc * oc;
int64_t rc = g[5];
int64_t sc = g[2];
int64_t tc = 3;
int64_t uc = sc << tc;
int64_t * vc = rc + uc;
vc[0] = qc;
int64_t wc = g[2];
int64_t xc = 1;
int64_t yc = wc + xc;
g[2] = yc;
;//continue L_f;
}
//unreachable;
B_e:;
int64_t zc = g[3];
int64_t ad = 1;
int64_t bd = zc + ad;
g[3] = bd;
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
