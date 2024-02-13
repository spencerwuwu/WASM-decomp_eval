
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
void kernel_fdtd_2d(int a, int b, int c, int d, int e, int f, int g);
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

void kernel_fdtd_2d(int a, int b, int c, int d, int e, int f, int g) {
int64_t* h = stack_pointer;
int64_t i = 48;
int64_t * j = h - i;
j[11] = a;
j[10] = b;
j[9] = c;
j[8] = d;
j[7] = e;
j[6] = f;
j[5] = g;
int64_t k = 0;
j[4] = k;
while (1) {
int64_t l = j[4];
int64_t m = j[11];
int64_t n = l;
int64_t o = m;
int64_t p = n < o;
int64_t q = 1;
int64_t r = p & q;
if (eqz(r)) goto B_a;
int64_t s = 0;
j[2] = s;
while (1) {
int64_t t = j[2];
int64_t u = j[9];
int64_t v = t;
int64_t w = u;
int64_t x = v < w;
int64_t y = 1;
int64_t z = x & y;
if (eqz(z)) goto B_c;
int64_t aa = j[5];
int64_t ba = j[4];
int64_t ca = 3;
int64_t da = ba << ca;
int64_t * ea = aa + da;
double fa = ea[0];
int64_t ga = j[7];
int64_t ha = j[2];
int64_t ia = 3;
int64_t ja = ha << ia;
int64_t * ka = ga + ja;
ka[0] = fa;
int64_t la = j[2];
int64_t ma = 1;
int64_t na = la + ma;
j[2] = na;
;//continue L_d;
}
//unreachable;
B_c:;
int64_t oa = 1;
j[3] = oa;
while (1) {
int64_t pa = j[3];
int64_t qa = j[10];
int64_t ra = pa;
int64_t sa = qa;
int64_t ta = ra < sa;
int64_t ua = 1;
int64_t va = ta & ua;
if (eqz(va)) goto B_e;
int64_t wa = 0;
j[2] = wa;
while (1) {
int64_t xa = j[2];
int64_t ya = j[9];
int64_t za = xa;
int64_t ab = ya;
int64_t bb = za < ab;
int64_t cb = 1;
int64_t db = bb & cb;
if (eqz(db)) goto B_g;
int64_t eb = j[7];
int64_t fb = j[3];
int64_t gb = 9600;
int64_t hb = fb * gb;
int64_t ib = eb + hb;
int64_t jb = j[2];
int64_t kb = 3;
int64_t lb = jb << kb;
int64_t * mb = ib + lb;
double nb = mb[0];
int64_t ob = j[6];
int64_t pb = j[3];
int64_t qb = 9600;
int64_t rb = pb * qb;
int64_t sb = ob + rb;
int64_t tb = j[2];
int64_t ub = 3;
int64_t vb = tb << ub;
int64_t * wb = sb + vb;
double xb = wb[0];
int64_t yb = j[6];
int64_t zb = j[3];
int64_t ac = 1;
int64_t bc = zb - ac;
int64_t cc = 9600;
int64_t dc = bc * cc;
int64_t ec = yb + dc;
int64_t fc = j[2];
int64_t gc = 3;
int64_t hc = fc << gc;
int64_t * ic = ec + hc;
double jc = ic[0];
double kc = xb - jc;
double lc = -0.5;
double mc = kc * lc;
double nc = mc + nb;
int64_t oc = j[7];
int64_t pc = j[3];
int64_t qc = 9600;
int64_t rc = pc * qc;
int64_t sc = oc + rc;
int64_t tc = j[2];
int64_t uc = 3;
int64_t vc = tc << uc;
int64_t * wc = sc + vc;
wc[0] = nc;
int64_t xc = j[2];
int64_t yc = 1;
int64_t zc = xc + yc;
j[2] = zc;
;//continue L_h;
}
//unreachable;
B_g:;
int64_t ad = j[3];
int64_t bd = 1;
int64_t cd = ad + bd;
j[3] = cd;
;//continue L_f;
}
//unreachable;
B_e:;
int64_t dd = 0;
j[3] = dd;
while (1) {
int64_t ed = j[3];
int64_t fd = j[10];
int64_t gd = ed;
int64_t hd = fd;
int64_t id = gd < hd;
int64_t jd = 1;
int64_t kd = id & jd;
if (eqz(kd)) goto B_i;
int64_t ld = 1;
j[2] = ld;
while (1) {
int64_t md = j[2];
int64_t nd = j[9];
int64_t od = md;
int64_t pd = nd;
int64_t qd = od < pd;
int64_t rd = 1;
int64_t sd = qd & rd;
if (eqz(sd)) goto B_k;
int64_t td = j[8];
int64_t ud = j[3];
int64_t vd = 9600;
int64_t wd = ud * vd;
int64_t xd = td + wd;
int64_t yd = j[2];
int64_t zd = 3;
int64_t ae = yd << zd;
int64_t * be = xd + ae;
double ce = be[0];
int64_t de = j[6];
int64_t ee = j[3];
int64_t fe = 9600;
int64_t ge = ee * fe;
int64_t he = de + ge;
int64_t ie = j[2];
int64_t je = 3;
int64_t ke = ie << je;
int64_t * le = he + ke;
double me = le[0];
int64_t ne = j[6];
int64_t oe = j[3];
int64_t pe = 9600;
int64_t qe = oe * pe;
int64_t re = ne + qe;
int64_t se = j[2];
int64_t te = 1;
int64_t ue = se - te;
int64_t ve = 3;
int64_t we = ue << ve;
int64_t * xe = re + we;
double ye = xe[0];
double ze = me - ye;
double af = -0.5;
double bf = ze * af;
double cf = bf + ce;
int64_t df = j[8];
int64_t ef = j[3];
int64_t ff = 9600;
int64_t gf = ef * ff;
int64_t hf = df + gf;
int64_t _if = j[2];
int64_t jf = 3;
int64_t kf = _if << jf;
int64_t * lf = hf + kf;
lf[0] = cf;
int64_t mf = j[2];
int64_t nf = 1;
int64_t of = mf + nf;
j[2] = of;
;//continue L_l;
}
//unreachable;
B_k:;
int64_t pf = j[3];
int64_t qf = 1;
int64_t rf = pf + qf;
j[3] = rf;
;//continue L_j;
}
//unreachable;
B_i:;
int64_t sf = 0;
j[3] = sf;
while (1) {
int64_t tf = j[3];
int64_t uf = j[10];
int64_t vf = 1;
int64_t wf = uf - vf;
int64_t xf = tf;
int64_t yf = wf;
int64_t zf = xf < yf;
int64_t ag = 1;
int64_t bg = zf & ag;
if (eqz(bg)) goto B_m;
int64_t cg = 0;
j[2] = cg;
while (1) {
int64_t dg = j[2];
int64_t eg = j[9];
int64_t fg = 1;
int64_t gg = eg - fg;
int64_t hg = dg;
int64_t ig = gg;
int64_t jg = hg < ig;
int64_t kg = 1;
int64_t lg = jg & kg;
if (eqz(lg)) goto B_o;
int64_t mg = j[6];
int64_t ng = j[3];
int64_t og = 9600;
int64_t pg = ng * og;
int64_t qg = mg + pg;
int64_t rg = j[2];
int64_t sg = 3;
int64_t tg = rg << sg;
int64_t * ug = qg + tg;
double vg = ug[0];
int64_t wg = j[8];
int64_t xg = j[3];
int64_t yg = 9600;
int64_t zg = xg * yg;
int64_t ah = wg + zg;
int64_t bh = j[2];
int64_t ch = 1;
int64_t dh = bh + ch;
int64_t eh = 3;
int64_t fh = dh << eh;
int64_t * gh = ah + fh;
double hh = gh[0];
int64_t ih = j[8];
int64_t jh = j[3];
int64_t kh = 9600;
int64_t lh = jh * kh;
int64_t mh = ih + lh;
int64_t nh = j[2];
int64_t oh = 3;
int64_t ph = nh << oh;
int64_t * qh = mh + ph;
double rh = qh[0];
double sh = hh - rh;
int64_t th = j[7];
int64_t uh = j[3];
int64_t vh = 1;
int64_t wh = uh + vh;
int64_t xh = 9600;
int64_t yh = wh * xh;
int64_t zh = th + yh;
int64_t ai = j[2];
int64_t bi = 3;
int64_t ci = ai << bi;
int64_t * di = zh + ci;
double ei = di[0];
double fi = sh + ei;
int64_t gi = j[7];
int64_t hi = j[3];
int64_t ii = 9600;
int64_t ji = hi * ii;
int64_t ki = gi + ji;
int64_t li = j[2];
int64_t mi = 3;
int64_t ni = li << mi;
int64_t * oi = ki + ni;
double pi = oi[0];
double qi = fi - pi;
double ri = -0.7;
double si = qi * ri;
double ti = si + vg;
int64_t ui = j[6];
int64_t vi = j[3];
int64_t wi = 9600;
int64_t xi = vi * wi;
int64_t yi = ui + xi;
int64_t zi = j[2];
int64_t aj = 3;
int64_t bj = zi << aj;
int64_t * cj = yi + bj;
cj[0] = ti;
int64_t dj = j[2];
int64_t ej = 1;
int64_t fj = dj + ej;
j[2] = fj;
;//continue L_p;
}
//unreachable;
B_o:;
int64_t gj = j[3];
int64_t hj = 1;
int64_t ij = gj + hj;
j[3] = ij;
;//continue L_n;
}
//unreachable;
B_m:;
int64_t jj = j[4];
int64_t kj = 1;
int64_t lj = jj + kj;
j[4] = lj;
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
