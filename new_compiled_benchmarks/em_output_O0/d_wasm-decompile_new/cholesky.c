
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
void kernel_cholesky(int a, int b);
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

void kernel_cholesky(int a, int b) {
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
int64_t oa = e[4];
int64_t pa = 16000;
int64_t qa = oa * pa;
int64_t ra = na + qa;
int64_t sa = e[3];
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
int64_t lc = 0;
e[3] = lc;
while (1) {
int64_t mc = e[3];
int64_t nc = e[5];
int64_t oc = mc;
int64_t pc = nc;
int64_t qc = oc < pc;
int64_t rc = 1;
int64_t sc = qc & rc;
if (eqz(sc)) goto B_g;
int64_t tc = e[6];
int64_t uc = e[5];
int64_t vc = 16000;
int64_t wc = uc * vc;
int64_t xc = tc + wc;
int64_t yc = e[3];
int64_t zc = 3;
int64_t ad = yc << zc;
int64_t * bd = xc + ad;
double cd = bd[0];
int64_t dd = e[6];
int64_t ed = e[5];
int64_t fd = 16000;
int64_t gd = ed * fd;
int64_t hd = dd + gd;
int64_t id = e[3];
int64_t jd = 3;
int64_t kd = id << jd;
int64_t * ld = hd + kd;
double md = ld[0];
int64_t nd = e[6];
int64_t od = e[5];
int64_t pd = 16000;
int64_t qd = od * pd;
int64_t rd = nd + qd;
int64_t sd = e[5];
int64_t td = 3;
int64_t ud = sd << td;
int64_t * vd = rd + ud;
double wd = vd[0];
double xd = -(cd);
double yd = xd * md;
double zd = yd + wd;
vd[0] = zd;
int64_t ae = e[3];
int64_t be = 1;
int64_t ce = ae + be;
e[3] = ce;
;//continue L_h;
}
//unreachable;
B_g:;
int64_t de = e[6];
int64_t ee = e[5];
int64_t fe = 16000;
int64_t ge = ee * fe;
int64_t he = de + ge;
int64_t ie = e[5];
int64_t je = 3;
int64_t ke = ie << je;
int64_t * le = he + ke;
double me = le[0];
double ne = sqrt(me);
int64_t oe = e[6];
int64_t pe = e[5];
int64_t qe = 16000;
int64_t re = pe * qe;
int64_t se = oe + re;
int64_t te = e[5];
int64_t ue = 3;
int64_t ve = te << ue;
int64_t * we = se + ve;
we[0] = ne;
int64_t xe = e[5];
int64_t ye = 1;
int64_t ze = xe + ye;
e[5] = ze;
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
