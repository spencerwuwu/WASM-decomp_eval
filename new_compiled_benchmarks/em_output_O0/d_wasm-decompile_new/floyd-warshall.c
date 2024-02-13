
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
void kernel_floyd_warshall(int a, int b);
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

void kernel_floyd_warshall(int a, int b) {
int64_t xb;
int64_t* c = stack_pointer;
int64_t d = 32;
int64_t * e = c - d;
e[7] = a;
e[6] = b;
int64_t f = 0;
e[3] = f;
while (1) {
int64_t g = e[3];
int64_t h = e[7];
int64_t i = g;
int64_t j = h;
int64_t k = i < j;
int64_t l = 1;
int64_t m = k & l;
if (eqz(m)) goto B_a;
int64_t n = 0;
e[5] = n;
while (1) {
int64_t o = e[5];
int64_t p = e[7];
int64_t q = o;
int64_t r = p;
int64_t s = q < r;
int64_t t = 1;
int64_t u = s & t;
if (eqz(u)) goto B_c;
int64_t v = 0;
e[4] = v;
while (1) {
int64_t w = e[4];
int64_t x = e[7];
int64_t y = w;
int64_t z = x;
int64_t aa = y < z;
int64_t ba = 1;
int64_t ca = aa & ba;
if (eqz(ca)) goto B_e;
int64_t da = e[6];
int64_t ea = e[5];
int64_t fa = 11200;
int64_t ga = ea * fa;
int64_t ha = da + ga;
int64_t ia = e[4];
int64_t ja = 2;
int64_t ka = ia << ja;
int64_t * la = ha + ka;
int64_t ma = la[0];
int64_t na = e[6];
int64_t oa = e[5];
int64_t pa = 11200;
int64_t qa = oa * pa;
int64_t ra = na + qa;
int64_t sa = e[3];
int64_t ta = 2;
int64_t ua = sa << ta;
int64_t * va = ra + ua;
int64_t wa = va[0];
int64_t xa = e[6];
int64_t ya = e[3];
int64_t za = 11200;
int64_t ab = ya * za;
int64_t bb = xa + ab;
int64_t cb = e[4];
int64_t db = 2;
int64_t eb = cb << db;
int64_t * fb = bb + eb;
int64_t gb = fb[0];
int64_t hb = wa + gb;
int64_t ib = ma;
int64_t jb = hb;
int64_t kb = ib < jb;
int64_t lb = 1;
int64_t mb = kb & lb;
if (eqz(mb)) goto B_h;
int64_t nb = e[6];
int64_t ob = e[5];
int64_t pb = 11200;
int64_t qb = ob * pb;
int64_t rb = nb + qb;
int64_t sb = e[4];
int64_t tb = 2;
int64_t ub = sb << tb;
int64_t * vb = rb + ub;
int64_t wb = vb[0];
xb = wb;
goto B_g;
B_h:;
int64_t yb = e[6];
int64_t zb = e[5];
int64_t ac = 11200;
int64_t bc = zb * ac;
int64_t cc = yb + bc;
int64_t dc = e[3];
int64_t ec = 2;
int64_t fc = dc << ec;
int64_t * gc = cc + fc;
int64_t hc = gc[0];
int64_t ic = e[6];
int64_t jc = e[3];
int64_t kc = 11200;
int64_t lc = jc * kc;
int64_t mc = ic + lc;
int64_t nc = e[4];
int64_t oc = 2;
int64_t pc = nc << oc;
int64_t * qc = mc + pc;
int64_t rc = qc[0];
int64_t sc = hc + rc;
xb = sc;
B_g:;
int64_t tc = xb;
int64_t uc = e[6];
int64_t vc = e[5];
int64_t wc = 11200;
int64_t xc = vc * wc;
int64_t yc = uc + xc;
int64_t zc = e[4];
int64_t ad = 2;
int64_t bd = zc << ad;
int64_t * cd = yc + bd;
cd[0] = tc;
int64_t dd = e[4];
int64_t ed = 1;
int64_t fd = dd + ed;
e[4] = fd;
;//continue L_f;
}
//unreachable;
B_e:;
int64_t gd = e[5];
int64_t hd = 1;
int64_t id = gd + hd;
e[5] = id;
;//continue L_d;
}
//unreachable;
B_c:;
int64_t jd = e[3];
int64_t kd = 1;
int64_t ld = jd + kd;
e[3] = ld;
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
