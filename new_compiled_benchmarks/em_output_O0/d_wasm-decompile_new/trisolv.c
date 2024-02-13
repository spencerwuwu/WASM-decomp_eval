
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
void kernel_trisolv(int a, int b, int c, int d);
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

void kernel_trisolv(int a, int b, int c, int d) {
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
int64_t p = g[4];
int64_t q = g[3];
int64_t r = 3;
int64_t s = q << r;
int64_t * t = p + s;
double u = t[0];
int64_t v = g[5];
int64_t w = g[3];
int64_t x = 3;
int64_t y = w << x;
int64_t * z = v + y;
z[0] = u;
int64_t aa = 0;
g[2] = aa;
while (1) {
int64_t ba = g[2];
int64_t ca = g[3];
int64_t da = ba;
int64_t ea = ca;
int64_t fa = da < ea;
int64_t ga = 1;
int64_t ha = fa & ga;
if (eqz(ha)) goto B_c;
int64_t ia = g[6];
int64_t ja = g[3];
int64_t ka = 16000;
int64_t la = ja * ka;
int64_t ma = ia + la;
int64_t na = g[2];
int64_t oa = 3;
int64_t pa = na << oa;
int64_t * qa = ma + pa;
double ra = qa[0];
int64_t sa = g[5];
int64_t ta = g[2];
int64_t ua = 3;
int64_t va = ta << ua;
int64_t * wa = sa + va;
double xa = wa[0];
int64_t ya = g[5];
int64_t za = g[3];
int64_t ab = 3;
int64_t bb = za << ab;
int64_t * cb = ya + bb;
double db = cb[0];
double eb = -(ra);
double fb = eb * xa;
double gb = fb + db;
cb[0] = gb;
int64_t hb = g[2];
int64_t ib = 1;
int64_t jb = hb + ib;
g[2] = jb;
;//continue L_d;
}
//unreachable;
B_c:;
int64_t kb = g[5];
int64_t lb = g[3];
int64_t mb = 3;
int64_t nb = lb << mb;
int64_t * ob = kb + nb;
double pb = ob[0];
int64_t qb = g[6];
int64_t rb = g[3];
int64_t sb = 16000;
int64_t tb = rb * sb;
int64_t ub = qb + tb;
int64_t vb = g[3];
int64_t wb = 3;
int64_t xb = vb << wb;
int64_t * yb = ub + xb;
double zb = yb[0];
double ac = pb / zb;
int64_t bc = g[5];
int64_t cc = g[3];
int64_t dc = 3;
int64_t ec = cc << dc;
int64_t * fc = bc + ec;
fc[0] = ac;
int64_t gc = g[3];
int64_t hc = 1;
int64_t ic = gc + hc;
g[3] = ic;
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
