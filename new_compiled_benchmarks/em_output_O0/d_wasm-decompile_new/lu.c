
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
void kernel_lu(int a, int b);
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

void kernel_lu(int a, int b) {
int64_t* c = stack_pointer;
int64_t d = 32;
int64_t * e = c - d;
e[7] = a;
e[6] = b;
int64_t f = 0;
e[5] = f;
while (1) {
int64_t g = e[5];
int64_t h = e[7];
int64_t i = g;
int64_t j = h;
int64_t k = i < j;
int64_t l = 1;
int64_t m = k & l;
if (eqz(m)) goto B_a;
int64_t n = 0;
e[4] = n;
while (1) {
int64_t o = e[4];
int64_t p = e[5];
int64_t q = o;
int64_t r = p;
int64_t s = q < r;
int64_t t = 1;
int64_t u = s & t;
if (eqz(u)) goto B_c;
int64_t v = 0;
e[3] = v;
while (1) {
int64_t w = e[3];
int64_t x = e[4];
int64_t y = w;
int64_t z = x;
int64_t aa = y < z;
int64_t ba = 1;
int64_t ca = aa & ba;
if (eqz(ca)) goto B_e;
int64_t da = e[6];
int64_t ea = e[5];
int64_t fa = 16000;
int64_t ga = ea * fa;
int64_t ha = da + ga;
int64_t ia = e[3];
int64_t ja = 3;
int64_t ka = ia << ja;
int64_t * la = ha + ka;
double ma = la[0];
int64_t na = e[6];
int64_t oa = e[3];
int64_t pa = 16000;
int64_t qa = oa * pa;
int64_t ra = na + qa;
int64_t sa = e[4];
int64_t ta = 3;
int64_t ua = sa << ta;
int64_t * va = ra + ua;
double wa = va[0];
int64_t xa = e[6];
int64_t ya = e[5];
int64_t za = 16000;
int64_t ab = ya * za;
int64_t bb = xa + ab;
int64_t cb = e[4];
int64_t db = 3;
int64_t eb = cb << db;
int64_t * fb = bb + eb;
double gb = fb[0];
double hb = -(ma);
double ib = hb * wa;
double jb = ib + gb;
fb[0] = jb;
int64_t kb = e[3];
int64_t lb = 1;
int64_t mb = kb + lb;
e[3] = mb;
;//continue L_f;
}
//unreachable;
B_e:;
int64_t nb = e[6];
int64_t ob = e[4];
int64_t pb = 16000;
int64_t qb = ob * pb;
int64_t rb = nb + qb;
int64_t sb = e[4];
int64_t tb = 3;
int64_t ub = sb << tb;
int64_t * vb = rb + ub;
double wb = vb[0];
int64_t xb = e[6];
int64_t yb = e[5];
int64_t zb = 16000;
int64_t ac = yb * zb;
int64_t bc = xb + ac;
int64_t cc = e[4];
int64_t dc = 3;
int64_t ec = cc << dc;
int64_t * fc = bc + ec;
double gc = fc[0];
double hc = gc / wb;
fc[0] = hc;
int64_t ic = e[4];
int64_t jc = 1;
int64_t kc = ic + jc;
e[4] = kc;
;//continue L_d;
}
//unreachable;
B_c:;
int64_t lc = e[5];
e[4] = lc;
while (1) {
int64_t mc = e[4];
int64_t nc = e[7];
int64_t oc = mc;
int64_t pc = nc;
int64_t qc = oc < pc;
int64_t rc = 1;
int64_t sc = qc & rc;
if (eqz(sc)) goto B_g;
int64_t tc = 0;
e[3] = tc;
while (1) {
int64_t uc = e[3];
int64_t vc = e[5];
int64_t wc = uc;
int64_t xc = vc;
int64_t yc = wc < xc;
int64_t zc = 1;
int64_t ad = yc & zc;
if (eqz(ad)) goto B_i;
int64_t bd = e[6];
int64_t cd = e[5];
int64_t dd = 16000;
int64_t ed = cd * dd;
int64_t fd = bd + ed;
int64_t gd = e[3];
int64_t hd = 3;
int64_t id = gd << hd;
int64_t * jd = fd + id;
double kd = jd[0];
int64_t ld = e[6];
int64_t md = e[3];
int64_t nd = 16000;
int64_t od = md * nd;
int64_t pd = ld + od;
int64_t qd = e[4];
int64_t rd = 3;
int64_t sd = qd << rd;
int64_t * td = pd + sd;
double ud = td[0];
int64_t vd = e[6];
int64_t wd = e[5];
int64_t xd = 16000;
int64_t yd = wd * xd;
int64_t zd = vd + yd;
int64_t ae = e[4];
int64_t be = 3;
int64_t ce = ae << be;
int64_t * de = zd + ce;
double ee = de[0];
double fe = -(kd);
double ge = fe * ud;
double he = ge + ee;
de[0] = he;
int64_t ie = e[3];
int64_t je = 1;
int64_t ke = ie + je;
e[3] = ke;
;//continue L_j;
}
//unreachable;
B_i:;
int64_t le = e[4];
int64_t me = 1;
int64_t ne = le + me;
e[4] = ne;
;//continue L_h;
}
//unreachable;
B_g:;
int64_t oe = e[5];
int64_t pe = 1;
int64_t qe = oe + pe;
e[5] = qe;
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
