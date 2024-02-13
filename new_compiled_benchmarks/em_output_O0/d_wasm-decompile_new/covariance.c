
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
void kernel_covariance(int a, int b, double c, int d, int e, int f);
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

void kernel_covariance(int a, int b, double c, int d, int e, int f) {
int64_t* g = stack_pointer;
int64_t h = 48;
int64_t* i = g - h;
i[11] = a;
i[10] = b;
i[4] = c;
i[7] = d;
i[6] = e;
i[5] = f;
int64_t j = 0;
i[3] = j;
while (1) {
int64_t k = (int64_t)i[3];
int64_t l = (int64_t)i[11];
int64_t m = k;
int64_t n = l;
int64_t o = m < n;
int64_t p = 1;
int64_t q = o & p;
if (eqz(q)) goto B_a;
int64_t r = (int64_t)i[5];
int64_t s = (int64_t)i[3];
int64_t t = 3;
int64_t u = s << t;
int64_t * v = r + u;
int64_t w = 0;
double x = f64_convert_i32_s(w);
v[0] = x;
int64_t y = 0;
i[4] = y;
while (1) {
int64_t z = (int64_t)i[4];
int64_t aa = (int64_t)i[10];
int64_t ba = z;
int64_t ca = aa;
int64_t da = ba < ca;
int64_t ea = 1;
int64_t fa = da & ea;
if (eqz(fa)) goto B_c;
int64_t ga = (int64_t)i[7];
int64_t ha = (int64_t)i[4];
int64_t ia = 9600;
int64_t ja = ha * ia;
int64_t ka = ga + ja;
int64_t la = (int64_t)i[3];
int64_t ma = 3;
int64_t na = la << ma;
int64_t * oa = ka + na;
double pa = oa[0];
int64_t qa = (int64_t)i[5];
int64_t ra = (int64_t)i[3];
int64_t sa = 3;
int64_t ta = ra << sa;
int64_t * ua = qa + ta;
double va = ua[0];
double wa = va + pa;
ua[0] = wa;
int64_t xa = (int64_t)i[4];
int64_t ya = 1;
int64_t za = xa + ya;
i[4] = za;
;//continue L_d;
}
//unreachable;
B_c:;
double ab = (double)i[4];
int64_t bb = (int64_t)i[5];
int64_t cb = (int64_t)i[3];
int64_t db = 3;
int64_t eb = cb << db;
int64_t * fb = bb + eb;
double gb = fb[0];
double hb = gb / ab;
fb[0] = hb;
int64_t ib = (int64_t)i[3];
int64_t jb = 1;
int64_t kb = ib + jb;
i[3] = kb;
;//continue L_b;
}
//unreachable;
B_a:;
int64_t lb = 0;
i[4] = lb;
while (1) {
int64_t mb = (int64_t)i[4];
int64_t nb = (int64_t)i[10];
int64_t ob = mb;
int64_t pb = nb;
int64_t qb = ob < pb;
int64_t rb = 1;
int64_t sb = qb & rb;
if (eqz(sb)) goto B_e;
int64_t tb = 0;
i[3] = tb;
while (1) {
int64_t ub = (int64_t)i[3];
int64_t vb = (int64_t)i[11];
int64_t wb = ub;
int64_t xb = vb;
int64_t yb = wb < xb;
int64_t zb = 1;
int64_t ac = yb & zb;
if (eqz(ac)) goto B_g;
int64_t bc = (int64_t)i[5];
int64_t cc = (int64_t)i[3];
int64_t dc = 3;
int64_t ec = cc << dc;
int64_t * fc = bc + ec;
double gc = fc[0];
int64_t hc = (int64_t)i[7];
int64_t ic = (int64_t)i[4];
int64_t jc = 9600;
int64_t kc = ic * jc;
int64_t lc = hc + kc;
int64_t mc = (int64_t)i[3];
int64_t nc = 3;
int64_t oc = mc << nc;
int64_t * pc = lc + oc;
double qc = pc[0];
double rc = qc - gc;
pc[0] = rc;
int64_t sc = (int64_t)i[3];
int64_t tc = 1;
int64_t uc = sc + tc;
i[3] = uc;
;//continue L_h;
}
//unreachable;
B_g:;
int64_t vc = (int64_t)i[4];
int64_t wc = 1;
int64_t xc = vc + wc;
i[4] = xc;
;//continue L_f;
}
//unreachable;
B_e:;
int64_t yc = 0;
i[4] = yc;
while (1) {
int64_t zc = (int64_t)i[4];
int64_t ad = (int64_t)i[11];
int64_t bd = zc;
int64_t cd = ad;
int64_t dd = bd < cd;
int64_t ed = 1;
int64_t fd = dd & ed;
if (eqz(fd)) goto B_i;
int64_t gd = (int64_t)i[4];
i[3] = gd;
while (1) {
int64_t hd = (int64_t)i[3];
int64_t id = (int64_t)i[11];
int64_t jd = hd;
int64_t kd = id;
int64_t ld = jd < kd;
int64_t md = 1;
int64_t nd = ld & md;
if (eqz(nd)) goto B_k;
int64_t od = (int64_t)i[6];
int64_t pd = (int64_t)i[4];
int64_t qd = 9600;
int64_t rd = pd * qd;
int64_t sd = od + rd;
int64_t td = (int64_t)i[3];
int64_t ud = 3;
int64_t vd = td << ud;
int64_t * wd = sd + vd;
int64_t xd = 0;
double yd = f64_convert_i32_s(xd);
wd[0] = yd;
int64_t zd = 0;
i[2] = zd;
while (1) {
int64_t ae = (int64_t)i[2];
int64_t be = (int64_t)i[10];
int64_t ce = ae;
int64_t de = be;
int64_t ee = ce < de;
int64_t fe = 1;
int64_t ge = ee & fe;
if (eqz(ge)) goto B_m;
int64_t he = (int64_t)i[7];
int64_t ie = (int64_t)i[2];
int64_t je = 9600;
int64_t ke = ie * je;
int64_t le = he + ke;
int64_t me = (int64_t)i[4];
int64_t ne = 3;
int64_t oe = me << ne;
int64_t * pe = le + oe;
double qe = pe[0];
int64_t re = (int64_t)i[7];
int64_t se = (int64_t)i[2];
int64_t te = 9600;
int64_t ue = se * te;
int64_t ve = re + ue;
int64_t we = (int64_t)i[3];
int64_t xe = 3;
int64_t ye = we << xe;
int64_t * ze = ve + ye;
double af = ze[0];
int64_t bf = (int64_t)i[6];
int64_t cf = (int64_t)i[4];
int64_t df = 9600;
int64_t ef = cf * df;
int64_t ff = bf + ef;
int64_t gf = (int64_t)i[3];
int64_t hf = 3;
int64_t _if = gf << hf;
int64_t * jf = ff + _if;
double kf = jf[0];
double lf = qe * af;
double mf = lf + kf;
jf[0] = mf;
int64_t nf = (int64_t)i[2];
int64_t of = 1;
int64_t pf = nf + of;
i[2] = pf;
;//continue L_n;
}
//unreachable;
B_m:;
double qf = (double)i[4];
double rf = 1.0;
double sf = qf - rf;
int64_t tf = (int64_t)i[6];
int64_t uf = (int64_t)i[4];
int64_t vf = 9600;
int64_t wf = uf * vf;
int64_t xf = tf + wf;
int64_t yf = (int64_t)i[3];
int64_t zf = 3;
int64_t ag = yf << zf;
int64_t * bg = xf + ag;
double cg = bg[0];
double dg = cg / sf;
bg[0] = dg;
int64_t eg = (int64_t)i[6];
int64_t fg = (int64_t)i[4];
int64_t gg = 9600;
int64_t hg = fg * gg;
int64_t ig = eg + hg;
int64_t jg = (int64_t)i[3];
int64_t kg = 3;
int64_t lg = jg << kg;
int64_t * mg = ig + lg;
double ng = mg[0];
int64_t og = (int64_t)i[6];
int64_t pg = (int64_t)i[3];
int64_t qg = 9600;
int64_t rg = pg * qg;
int64_t sg = og + rg;
int64_t tg = (int64_t)i[4];
int64_t ug = 3;
int64_t vg = tg << ug;
int64_t * wg = sg + vg;
wg[0] = ng;
int64_t xg = (int64_t)i[3];
int64_t yg = 1;
int64_t zg = xg + yg;
i[3] = zg;
;//continue L_l;
}
//unreachable;
B_k:;
int64_t ah = (int64_t)i[4];
int64_t bh = 1;
int64_t ch = ah + bh;
i[4] = ch;
;//continue L_j;
}
//unreachable;
B_i:;
}




int legalfunc_polybench_alloc_data(long a, int b) {
return legalimport_polybench_alloc_data(i32_wrap_i64(a),
i32_wrap_i64(a >> 32L),
b);
}
