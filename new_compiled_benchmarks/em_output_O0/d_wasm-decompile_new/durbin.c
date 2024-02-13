
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
void kernel_durbin(int a, int b, int c);
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

void kernel_durbin(int a, int b, int c) {
int64_t* d = stack_pointer;
int64_t e = 16048;
int64_t* f = d - e;
f[4011] = a;
f[4010] = b;
f[4009] = c;
int64_t * g = (int64_t)f[4010];
double h = g[0];
double i = -(h);
int64_t * j = (int64_t)f[4009];
j[0] = i;
double k = 1.0;
f[2] = k;
int64_t * l = (int64_t)f[4010];
double m = l[0];
double n = -(m);
f[3] = n;
int64_t o = 1;
f[0] = o;
while (1) {
int64_t p = (int64_t)f[0];
int64_t q = (int64_t)f[4011];
int64_t r = p;
int64_t s = q;
int64_t t = r < s;
int64_t u = 1;
int64_t v = t & u;
if (eqz(v)) goto B_a;
double w = (double)f[3];
double x = (double)f[3];
double y = -(w);
double z = y * x;
double aa = 1.0;
double ba = z + aa;
double ca = (double)f[2];
double da = ba * ca;
f[2] = da;
int64_t ea = 0;
double fa = f64_convert_i32_s(ea);
f[1] = fa;
int64_t ga = 0;
f[1] = ga;
while (1) {
int64_t ha = (int64_t)f[1];
int64_t ia = (int64_t)f[0];
int64_t ja = ha;
int64_t ka = ia;
int64_t la = ja < ka;
int64_t ma = 1;
int64_t na = la & ma;
if (eqz(na)) goto B_c;
int64_t oa = (int64_t)f[4010];
int64_t pa = (int64_t)f[0];
int64_t qa = (int64_t)f[1];
int64_t ra = pa - qa;
int64_t sa = 1;
int64_t ta = ra - sa;
int64_t ua = 3;
int64_t va = ta << ua;
int64_t * wa = oa + va;
double xa = wa[0];
int64_t ya = (int64_t)f[4009];
int64_t za = (int64_t)f[1];
int64_t ab = 3;
int64_t bb = za << ab;
int64_t * cb = ya + bb;
double db = cb[0];
double eb = (double)f[1];
double fb = xa * db;
double gb = fb + eb;
f[1] = gb;
int64_t hb = (int64_t)f[1];
int64_t ib = 1;
int64_t jb = hb + ib;
f[1] = jb;
;//continue L_d;
}
//unreachable;
B_c:;
int64_t kb = (int64_t)f[4010];
int64_t lb = (int64_t)f[0];
int64_t mb = 3;
int64_t nb = lb << mb;
int64_t * ob = kb + nb;
double pb = ob[0];
double qb = (double)f[1];
double rb = pb + qb;
double sb = -(rb);
double tb = (double)f[2];
double ub = sb / tb;
f[3] = ub;
int64_t vb = 0;
f[1] = vb;
while (1) {
int64_t wb = (int64_t)f[1];
int64_t xb = (int64_t)f[0];
int64_t yb = wb;
int64_t zb = xb;
int64_t ac = yb < zb;
int64_t bc = 1;
int64_t cc = ac & bc;
if (eqz(cc)) goto B_e;
int64_t dc = (int64_t)f[4009];
int64_t ec = (int64_t)f[1];
int64_t fc = 3;
int64_t gc = ec << fc;
int64_t * hc = dc + gc;
double ic = hc[0];
double jc = (double)f[3];
int64_t kc = (int64_t)f[4009];
int64_t lc = (int64_t)f[0];
int64_t mc = (int64_t)f[1];
int64_t nc = lc - mc;
int64_t oc = 1;
int64_t pc = nc - oc;
int64_t qc = 3;
int64_t rc = pc << qc;
int64_t * sc = kc + rc;
double tc = sc[0];
double uc = jc * tc;
double vc = uc + ic;
int64_t wc = (int64_t)f[1];
int64_t xc = 32;
int64_t* yc = f + xc;
int64_t* zc = yc;
int64_t ad = 3;
int64_t bd = wc << ad;
int64_t * cd = zc + bd;
cd[0] = vc;
int64_t dd = (int64_t)f[1];
int64_t ed = 1;
int64_t fd = dd + ed;
f[1] = fd;
;//continue L_f;
}
//unreachable;
B_e:;
int64_t gd = 0;
f[1] = gd;
while (1) {
int64_t hd = (int64_t)f[1];
int64_t id = (int64_t)f[0];
int64_t jd = hd;
int64_t kd = id;
int64_t ld = jd < kd;
int64_t md = 1;
int64_t nd = ld & md;
if (eqz(nd)) goto B_g;
int64_t od = (int64_t)f[1];
int64_t pd = 32;
int64_t* qd = f + pd;
int64_t* rd = qd;
int64_t sd = 3;
int64_t td = od << sd;
int64_t * ud = rd + td;
double vd = ud[0];
int64_t wd = (int64_t)f[4009];
int64_t xd = (int64_t)f[1];
int64_t yd = 3;
int64_t zd = xd << yd;
int64_t * ae = wd + zd;
ae[0] = vd;
int64_t be = (int64_t)f[1];
int64_t ce = 1;
int64_t de = be + ce;
f[1] = de;
;//continue L_h;
}
//unreachable;
B_g:;
double ee = (double)f[3];
int64_t fe = (int64_t)f[4009];
int64_t ge = (int64_t)f[0];
int64_t he = 3;
int64_t ie = ge << he;
int64_t * je = fe + ie;
je[0] = ee;
int64_t ke = (int64_t)f[0];
int64_t le = 1;
int64_t me = ke + le;
f[0] = me;
;//continue L_b;
}
//unreachable;
B_a:;
int64_t ne = 16048;
int64_t* oe = f + ne;
}




int legalfunc_polybench_alloc_data(long a, int b) {
return legalimport_polybench_alloc_data(i32_wrap_i64(a),
i32_wrap_i64(a >> 32L),
b);
}
