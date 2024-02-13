
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
void kernel_jacobi_2d(int a, int b, int c, int d);
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

void kernel_jacobi_2d(int a, int b, int c, int d) {
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
int64_t z = 1;
g[1] = z;
while (1) {
int64_t aa = g[1];
int64_t ba = g[6];
int64_t ca = 1;
int64_t da = ba - ca;
int64_t ea = aa;
int64_t fa = da;
int64_t ga = ea < fa;
int64_t ha = 1;
int64_t ia = ga & ha;
if (eqz(ia)) goto B_e;
int64_t ja = g[5];
int64_t ka = g[2];
int64_t la = 10400;
int64_t ma = ka * la;
int64_t na = ja + ma;
int64_t oa = g[1];
int64_t pa = 3;
int64_t qa = oa << pa;
int64_t * ra = na + qa;
double sa = ra[0];
int64_t ta = g[5];
int64_t ua = g[2];
int64_t va = 10400;
int64_t wa = ua * va;
int64_t xa = ta + wa;
int64_t ya = g[1];
int64_t za = 1;
int64_t ab = ya - za;
int64_t bb = 3;
int64_t cb = ab << bb;
int64_t * db = xa + cb;
double eb = db[0];
double fb = sa + eb;
int64_t gb = g[5];
int64_t hb = g[2];
int64_t ib = 10400;
int64_t jb = hb * ib;
int64_t kb = gb + jb;
int64_t lb = g[1];
int64_t mb = 1;
int64_t nb = lb + mb;
int64_t ob = 3;
int64_t pb = nb << ob;
int64_t * qb = kb + pb;
double rb = qb[0];
double sb = fb + rb;
int64_t tb = g[5];
int64_t ub = g[2];
int64_t vb = 1;
int64_t wb = ub + vb;
int64_t xb = 10400;
int64_t yb = wb * xb;
int64_t zb = tb + yb;
int64_t ac = g[1];
int64_t bc = 3;
int64_t cc = ac << bc;
int64_t * dc = zb + cc;
double ec = dc[0];
double fc = sb + ec;
int64_t gc = g[5];
int64_t hc = g[2];
int64_t ic = 1;
int64_t jc = hc - ic;
int64_t kc = 10400;
int64_t lc = jc * kc;
int64_t mc = gc + lc;
int64_t nc = g[1];
int64_t oc = 3;
int64_t pc = nc << oc;
int64_t * qc = mc + pc;
double rc = qc[0];
double sc = fc + rc;
double tc = 0.2;
double uc = tc * sc;
int64_t vc = g[4];
int64_t wc = g[2];
int64_t xc = 10400;
int64_t yc = wc * xc;
int64_t zc = vc + yc;
int64_t ad = g[1];
int64_t bd = 3;
int64_t cd = ad << bd;
int64_t * dd = zc + cd;
dd[0] = uc;
int64_t ed = g[1];
int64_t fd = 1;
int64_t gd = ed + fd;
g[1] = gd;
;//continue L_f;
}
//unreachable;
B_e:;
int64_t hd = g[2];
int64_t id = 1;
int64_t jd = hd + id;
g[2] = jd;
;//continue L_d;
}
//unreachable;
B_c:;
int64_t kd = 1;
g[2] = kd;
while (1) {
int64_t ld = g[2];
int64_t md = g[6];
int64_t nd = 1;
int64_t od = md - nd;
int64_t pd = ld;
int64_t qd = od;
int64_t rd = pd < qd;
int64_t sd = 1;
int64_t td = rd & sd;
if (eqz(td)) goto B_g;
int64_t ud = 1;
g[1] = ud;
while (1) {
int64_t vd = g[1];
int64_t wd = g[6];
int64_t xd = 1;
int64_t yd = wd - xd;
int64_t zd = vd;
int64_t ae = yd;
int64_t be = zd < ae;
int64_t ce = 1;
int64_t de = be & ce;
if (eqz(de)) goto B_i;
int64_t ee = g[4];
int64_t fe = g[2];
int64_t ge = 10400;
int64_t he = fe * ge;
int64_t ie = ee + he;
int64_t je = g[1];
int64_t ke = 3;
int64_t le = je << ke;
int64_t * me = ie + le;
double ne = me[0];
int64_t oe = g[4];
int64_t pe = g[2];
int64_t qe = 10400;
int64_t re = pe * qe;
int64_t se = oe + re;
int64_t te = g[1];
int64_t ue = 1;
int64_t ve = te - ue;
int64_t we = 3;
int64_t xe = ve << we;
int64_t * ye = se + xe;
double ze = ye[0];
double af = ne + ze;
int64_t bf = g[4];
int64_t cf = g[2];
int64_t df = 10400;
int64_t ef = cf * df;
int64_t ff = bf + ef;
int64_t gf = g[1];
int64_t hf = 1;
int64_t _if = gf + hf;
int64_t jf = 3;
int64_t kf = _if << jf;
int64_t * lf = ff + kf;
double mf = lf[0];
double nf = af + mf;
int64_t of = g[4];
int64_t pf = g[2];
int64_t qf = 1;
int64_t rf = pf + qf;
int64_t sf = 10400;
int64_t tf = rf * sf;
int64_t uf = of + tf;
int64_t vf = g[1];
int64_t wf = 3;
int64_t xf = vf << wf;
int64_t * yf = uf + xf;
double zf = yf[0];
double ag = nf + zf;
int64_t bg = g[4];
int64_t cg = g[2];
int64_t dg = 1;
int64_t eg = cg - dg;
int64_t fg = 10400;
int64_t gg = eg * fg;
int64_t hg = bg + gg;
int64_t ig = g[1];
int64_t jg = 3;
int64_t kg = ig << jg;
int64_t * lg = hg + kg;
double mg = lg[0];
double ng = ag + mg;
double og = 0.2;
double pg = og * ng;
int64_t qg = g[5];
int64_t rg = g[2];
int64_t sg = 10400;
int64_t tg = rg * sg;
int64_t ug = qg + tg;
int64_t vg = g[1];
int64_t wg = 3;
int64_t xg = vg << wg;
int64_t * yg = ug + xg;
yg[0] = pg;
int64_t zg = g[1];
int64_t ah = 1;
int64_t bh = zg + ah;
g[1] = bh;
;//continue L_j;
}
//unreachable;
B_i:;
int64_t ch = g[2];
int64_t dh = 1;
int64_t eh = ch + dh;
g[2] = eh;
;//continue L_h;
}
//unreachable;
B_g:;
int64_t fh = g[3];
int64_t gh = 1;
int64_t hh = fh + gh;
g[3] = hh;
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
