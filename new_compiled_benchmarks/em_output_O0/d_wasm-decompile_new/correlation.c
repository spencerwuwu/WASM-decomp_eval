
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
void kernel_correlation(int a, int b, double c, int d, int e, int f, int g);
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

void kernel_correlation(int a, int b, double c, int d, int e, int f, int g) {
double _if;
int64_t* h = stack_pointer;
int64_t i = 64;
int64_t* j = h - i;
j[15] = a;
j[14] = b;
j[6] = c;
j[11] = d;
j[10] = e;
j[9] = f;
j[8] = g;
double k = 0.1;
j[1] = k;
int64_t l = 0;
j[6] = l;
while (1) {
int64_t m = (int64_t)j[6];
int64_t n = (int64_t)j[15];
int64_t o = m;
int64_t p = n;
int64_t q = o < p;
int64_t r = 1;
int64_t s = q & r;
if (eqz(s)) goto B_a;
int64_t t = (int64_t)j[9];
int64_t u = (int64_t)j[6];
int64_t v = 3;
int64_t w = u << v;
int64_t * x = t + w;
int64_t y = 0;
double z = f64_convert_i32_s(y);
x[0] = z;
int64_t aa = 0;
j[7] = aa;
while (1) {
int64_t ba = (int64_t)j[7];
int64_t ca = (int64_t)j[14];
int64_t da = ba;
int64_t ea = ca;
int64_t fa = da < ea;
int64_t ga = 1;
int64_t ha = fa & ga;
if (eqz(ha)) goto B_c;
int64_t ia = (int64_t)j[11];
int64_t ja = (int64_t)j[7];
int64_t ka = 9600;
int64_t la = ja * ka;
int64_t ma = ia + la;
int64_t na = (int64_t)j[6];
int64_t oa = 3;
int64_t pa = na << oa;
int64_t * qa = ma + pa;
double ra = qa[0];
int64_t sa = (int64_t)j[9];
int64_t ta = (int64_t)j[6];
int64_t ua = 3;
int64_t va = ta << ua;
int64_t * wa = sa + va;
double xa = wa[0];
double ya = xa + ra;
wa[0] = ya;
int64_t za = (int64_t)j[7];
int64_t ab = 1;
int64_t bb = za + ab;
j[7] = bb;
;//continue L_d;
}
//unreachable;
B_c:;
double cb = (double)j[6];
int64_t db = (int64_t)j[9];
int64_t eb = (int64_t)j[6];
int64_t fb = 3;
int64_t gb = eb << fb;
int64_t * hb = db + gb;
double ib = hb[0];
double jb = ib / cb;
hb[0] = jb;
int64_t kb = (int64_t)j[6];
int64_t lb = 1;
int64_t mb = kb + lb;
j[6] = mb;
;//continue L_b;
}
//unreachable;
B_a:;
int64_t nb = 0;
j[6] = nb;
while (1) {
int64_t ob = (int64_t)j[6];
int64_t pb = (int64_t)j[15];
int64_t qb = ob;
int64_t rb = pb;
int64_t sb = qb < rb;
int64_t tb = 1;
int64_t ub = sb & tb;
if (eqz(ub)) goto B_e;
int64_t vb = (int64_t)j[8];
int64_t wb = (int64_t)j[6];
int64_t xb = 3;
int64_t yb = wb << xb;
int64_t * zb = vb + yb;
int64_t ac = 0;
double bc = f64_convert_i32_s(ac);
zb[0] = bc;
int64_t cc = 0;
j[7] = cc;
while (1) {
int64_t dc = (int64_t)j[7];
int64_t ec = (int64_t)j[14];
int64_t fc = dc;
int64_t gc = ec;
int64_t hc = fc < gc;
int64_t ic = 1;
int64_t jc = hc & ic;
if (eqz(jc)) goto B_g;
int64_t kc = (int64_t)j[11];
int64_t lc = (int64_t)j[7];
int64_t mc = 9600;
int64_t nc = lc * mc;
int64_t oc = kc + nc;
int64_t pc = (int64_t)j[6];
int64_t qc = 3;
int64_t rc = pc << qc;
int64_t * sc = oc + rc;
double tc = sc[0];
int64_t uc = (int64_t)j[9];
int64_t vc = (int64_t)j[6];
int64_t wc = 3;
int64_t xc = vc << wc;
int64_t * yc = uc + xc;
double zc = yc[0];
double ad = tc - zc;
int64_t bd = (int64_t)j[11];
int64_t cd = (int64_t)j[7];
int64_t dd = 9600;
int64_t ed = cd * dd;
int64_t fd = bd + ed;
int64_t gd = (int64_t)j[6];
int64_t hd = 3;
int64_t id = gd << hd;
int64_t * jd = fd + id;
double kd = jd[0];
int64_t ld = (int64_t)j[9];
int64_t md = (int64_t)j[6];
int64_t nd = 3;
int64_t od = md << nd;
int64_t * pd = ld + od;
double qd = pd[0];
double rd = kd - qd;
int64_t sd = (int64_t)j[8];
int64_t td = (int64_t)j[6];
int64_t ud = 3;
int64_t vd = td << ud;
int64_t * wd = sd + vd;
double xd = wd[0];
double yd = ad * rd;
double zd = yd + xd;
wd[0] = zd;
int64_t ae = (int64_t)j[7];
int64_t be = 1;
int64_t ce = ae + be;
j[7] = ce;
;//continue L_h;
}
//unreachable;
B_g:;
double de = (double)j[6];
int64_t ee = (int64_t)j[8];
int64_t fe = (int64_t)j[6];
int64_t ge = 3;
int64_t he = fe << ge;
int64_t * ie = ee + he;
double je = ie[0];
double ke = je / de;
ie[0] = ke;
int64_t le = (int64_t)j[8];
int64_t me = (int64_t)j[6];
int64_t ne = 3;
int64_t oe = me << ne;
int64_t * pe = le + oe;
double qe = pe[0];
double re = sqrt(qe);
int64_t se = (int64_t)j[8];
int64_t te = (int64_t)j[6];
int64_t ue = 3;
int64_t ve = te << ue;
int64_t * we = se + ve;
we[0] = re;
int64_t xe = (int64_t)j[8];
int64_t ye = (int64_t)j[6];
int64_t ze = 3;
int64_t af = ye << ze;
int64_t * bf = xe + af;
double cf = bf[0];
double df = (double)j[1];
int64_t ef = cf <= df;
int64_t ff = 1;
int64_t gf = ef & ff;
if (eqz(gf)) goto B_j;
double hf = 1.0;
_if = hf;
goto B_i;
B_j:;
int64_t jf = (int64_t)j[8];
int64_t kf = (int64_t)j[6];
int64_t lf = 3;
int64_t mf = kf << lf;
int64_t * nf = jf + mf;
double of = nf[0];
_if = of;
B_i:;
double pf = _if;
int64_t qf = (int64_t)j[8];
int64_t rf = (int64_t)j[6];
int64_t sf = 3;
int64_t tf = rf << sf;
int64_t * uf = qf + tf;
uf[0] = pf;
int64_t vf = (int64_t)j[6];
int64_t wf = 1;
int64_t xf = vf + wf;
j[6] = xf;
;//continue L_f;
}
//unreachable;
B_e:;
int64_t yf = 0;
j[7] = yf;
while (1) {
int64_t zf = (int64_t)j[7];
int64_t ag = (int64_t)j[14];
int64_t bg = zf;
int64_t cg = ag;
int64_t dg = bg < cg;
int64_t eg = 1;
int64_t fg = dg & eg;
if (eqz(fg)) goto B_k;
int64_t gg = 0;
j[6] = gg;
while (1) {
int64_t hg = (int64_t)j[6];
int64_t ig = (int64_t)j[15];
int64_t jg = hg;
int64_t kg = ig;
int64_t lg = jg < kg;
int64_t mg = 1;
int64_t ng = lg & mg;
if (eqz(ng)) goto B_m;
int64_t og = (int64_t)j[9];
int64_t pg = (int64_t)j[6];
int64_t qg = 3;
int64_t rg = pg << qg;
int64_t * sg = og + rg;
double tg = sg[0];
int64_t ug = (int64_t)j[11];
int64_t vg = (int64_t)j[7];
int64_t wg = 9600;
int64_t xg = vg * wg;
int64_t yg = ug + xg;
int64_t zg = (int64_t)j[6];
int64_t ah = 3;
int64_t bh = zg << ah;
int64_t * ch = yg + bh;
double dh = ch[0];
double eh = dh - tg;
ch[0] = eh;
double fh = (double)j[6];
double gh = sqrt(fh);
int64_t hh = (int64_t)j[8];
int64_t ih = (int64_t)j[6];
int64_t jh = 3;
int64_t kh = ih << jh;
int64_t * lh = hh + kh;
double mh = lh[0];
double nh = gh * mh;
int64_t oh = (int64_t)j[11];
int64_t ph = (int64_t)j[7];
int64_t qh = 9600;
int64_t rh = ph * qh;
int64_t sh = oh + rh;
int64_t th = (int64_t)j[6];
int64_t uh = 3;
int64_t vh = th << uh;
int64_t * wh = sh + vh;
double xh = wh[0];
double yh = xh / nh;
wh[0] = yh;
int64_t zh = (int64_t)j[6];
int64_t ai = 1;
int64_t bi = zh + ai;
j[6] = bi;
;//continue L_n;
}
//unreachable;
B_m:;
int64_t ci = (int64_t)j[7];
int64_t di = 1;
int64_t ei = ci + di;
j[7] = ei;
;//continue L_l;
}
//unreachable;
B_k:;
int64_t fi = 0;
j[7] = fi;
while (1) {
int64_t gi = (int64_t)j[7];
int64_t hi = (int64_t)j[15];
int64_t ii = 1;
int64_t ji = hi - ii;
int64_t ki = gi;
int64_t li = ji;
int64_t mi = ki < li;
int64_t ni = 1;
int64_t oi = mi & ni;
if (eqz(oi)) goto B_o;
int64_t pi = (int64_t)j[10];
int64_t qi = (int64_t)j[7];
int64_t ri = 9600;
int64_t si = qi * ri;
int64_t ti = pi + si;
int64_t ui = (int64_t)j[7];
int64_t vi = 3;
int64_t wi = ui << vi;
int64_t * xi = ti + wi;
double yi = 1.0;
xi[0] = yi;
int64_t zi = (int64_t)j[7];
int64_t aj = 1;
int64_t bj = zi + aj;
j[6] = bj;
while (1) {
int64_t cj = (int64_t)j[6];
int64_t dj = (int64_t)j[15];
int64_t ej = cj;
int64_t fj = dj;
int64_t gj = ej < fj;
int64_t hj = 1;
int64_t ij = gj & hj;
if (eqz(ij)) goto B_q;
int64_t jj = (int64_t)j[10];
int64_t kj = (int64_t)j[7];
int64_t lj = 9600;
int64_t mj = kj * lj;
int64_t nj = jj + mj;
int64_t oj = (int64_t)j[6];
int64_t pj = 3;
int64_t qj = oj << pj;
int64_t * rj = nj + qj;
int64_t sj = 0;
double tj = f64_convert_i32_s(sj);
rj[0] = tj;
int64_t uj = 0;
j[5] = uj;
while (1) {
int64_t vj = (int64_t)j[5];
int64_t wj = (int64_t)j[14];
int64_t xj = vj;
int64_t yj = wj;
int64_t zj = xj < yj;
int64_t ak = 1;
int64_t bk = zj & ak;
if (eqz(bk)) goto B_s;
int64_t ck = (int64_t)j[11];
int64_t dk = (int64_t)j[5];
int64_t ek = 9600;
int64_t fk = dk * ek;
int64_t gk = ck + fk;
int64_t hk = (int64_t)j[7];
int64_t ik = 3;
int64_t jk = hk << ik;
int64_t * kk = gk + jk;
double lk = kk[0];
int64_t mk = (int64_t)j[11];
int64_t nk = (int64_t)j[5];
int64_t ok = 9600;
int64_t pk = nk * ok;
int64_t qk = mk + pk;
int64_t rk = (int64_t)j[6];
int64_t sk = 3;
int64_t tk = rk << sk;
int64_t * uk = qk + tk;
double vk = uk[0];
int64_t wk = (int64_t)j[10];
int64_t xk = (int64_t)j[7];
int64_t yk = 9600;
int64_t zk = xk * yk;
int64_t al = wk + zk;
int64_t bl = (int64_t)j[6];
int64_t cl = 3;
int64_t dl = bl << cl;
int64_t * el = al + dl;
double fl = el[0];
double gl = lk * vk;
double hl = gl + fl;
el[0] = hl;
int64_t il = (int64_t)j[5];
int64_t jl = 1;
int64_t kl = il + jl;
j[5] = kl;
;//continue L_t;
}
//unreachable;
B_s:;
int64_t ll = (int64_t)j[10];
int64_t ml = (int64_t)j[7];
int64_t nl = 9600;
int64_t ol = ml * nl;
int64_t pl = ll + ol;
int64_t ql = (int64_t)j[6];
int64_t rl = 3;
int64_t sl = ql << rl;
int64_t * tl = pl + sl;
double ul = tl[0];
int64_t vl = (int64_t)j[10];
int64_t wl = (int64_t)j[6];
int64_t xl = 9600;
int64_t yl = wl * xl;
int64_t zl = vl + yl;
int64_t am = (int64_t)j[7];
int64_t bm = 3;
int64_t cm = am << bm;
int64_t * dm = zl + cm;
dm[0] = ul;
int64_t em = (int64_t)j[6];
int64_t fm = 1;
int64_t gm = em + fm;
j[6] = gm;
;//continue L_r;
}
//unreachable;
B_q:;
int64_t hm = (int64_t)j[7];
int64_t im = 1;
int64_t jm = hm + im;
j[7] = jm;
;//continue L_p;
}
//unreachable;
B_o:;
int64_t km = (int64_t)j[10];
int64_t lm = (int64_t)j[15];
int64_t mm = 1;
int64_t nm = lm - mm;
int64_t om = 9600;
int64_t pm = nm * om;
int64_t qm = km + pm;
int64_t rm = (int64_t)j[15];
int64_t sm = 1;
int64_t tm = rm - sm;
int64_t um = 3;
int64_t vm = tm << um;
int64_t * wm = qm + vm;
double xm = 1.0;
wm[0] = xm;
}




int legalfunc_polybench_alloc_data(long a, int b) {
return legalimport_polybench_alloc_data(i32_wrap_i64(a),
i32_wrap_i64(a >> 32L),
b);
}
