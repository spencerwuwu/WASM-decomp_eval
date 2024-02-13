
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
void kernel_seidel_2d(int a, int b, int c);
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

void kernel_seidel_2d(int a, int b, int c) {
int64_t* d = stack_pointer;
int64_t e = 32;
int64_t * f = d - e;
f[7] = a;
f[6] = b;
f[5] = c;
int64_t g = 0;
f[4] = g;
while (1) {
int64_t h = f[4];
int64_t i = f[7];
int64_t j = 1;
int64_t k = i - j;
int64_t l = h;
int64_t m = k;
int64_t n = l <= m;
int64_t o = 1;
int64_t p = n & o;
if (eqz(p)) goto B_a;
int64_t q = 1;
f[3] = q;
while (1) {
int64_t r = f[3];
int64_t s = f[6];
int64_t t = 2;
int64_t u = s - t;
int64_t v = r;
int64_t w = u;
int64_t x = v <= w;
int64_t y = 1;
int64_t z = x & y;
if (eqz(z)) goto B_c;
int64_t aa = 1;
f[2] = aa;
while (1) {
int64_t ba = f[2];
int64_t ca = f[6];
int64_t da = 2;
int64_t ea = ca - da;
int64_t fa = ba;
int64_t ga = ea;
int64_t ha = fa <= ga;
int64_t ia = 1;
int64_t ja = ha & ia;
if (eqz(ja)) goto B_e;
int64_t ka = f[5];
int64_t la = f[3];
int64_t ma = 1;
int64_t na = la - ma;
int64_t oa = 16000;
int64_t pa = na * oa;
int64_t qa = ka + pa;
int64_t ra = f[2];
int64_t sa = 1;
int64_t ta = ra - sa;
int64_t ua = 3;
int64_t va = ta << ua;
int64_t * wa = qa + va;
double xa = wa[0];
int64_t ya = f[5];
int64_t za = f[3];
int64_t ab = 1;
int64_t bb = za - ab;
int64_t cb = 16000;
int64_t db = bb * cb;
int64_t eb = ya + db;
int64_t fb = f[2];
int64_t gb = 3;
int64_t hb = fb << gb;
int64_t * ib = eb + hb;
double jb = ib[0];
double kb = xa + jb;
int64_t lb = f[5];
int64_t mb = f[3];
int64_t nb = 1;
int64_t ob = mb - nb;
int64_t pb = 16000;
int64_t qb = ob * pb;
int64_t rb = lb + qb;
int64_t sb = f[2];
int64_t tb = 1;
int64_t ub = sb + tb;
int64_t vb = 3;
int64_t wb = ub << vb;
int64_t * xb = rb + wb;
double yb = xb[0];
double zb = kb + yb;
int64_t ac = f[5];
int64_t bc = f[3];
int64_t cc = 16000;
int64_t dc = bc * cc;
int64_t ec = ac + dc;
int64_t fc = f[2];
int64_t gc = 1;
int64_t hc = fc - gc;
int64_t ic = 3;
int64_t jc = hc << ic;
int64_t * kc = ec + jc;
double lc = kc[0];
double mc = zb + lc;
int64_t nc = f[5];
int64_t oc = f[3];
int64_t pc = 16000;
int64_t qc = oc * pc;
int64_t rc = nc + qc;
int64_t sc = f[2];
int64_t tc = 3;
int64_t uc = sc << tc;
int64_t * vc = rc + uc;
double wc = vc[0];
double xc = mc + wc;
int64_t yc = f[5];
int64_t zc = f[3];
int64_t ad = 16000;
int64_t bd = zc * ad;
int64_t cd = yc + bd;
int64_t dd = f[2];
int64_t ed = 1;
int64_t fd = dd + ed;
int64_t gd = 3;
int64_t hd = fd << gd;
int64_t * id = cd + hd;
double jd = id[0];
double kd = xc + jd;
int64_t ld = f[5];
int64_t md = f[3];
int64_t nd = 1;
int64_t od = md + nd;
int64_t pd = 16000;
int64_t qd = od * pd;
int64_t rd = ld + qd;
int64_t sd = f[2];
int64_t td = 1;
int64_t ud = sd - td;
int64_t vd = 3;
int64_t wd = ud << vd;
int64_t * xd = rd + wd;
double yd = xd[0];
double zd = kd + yd;
int64_t ae = f[5];
int64_t be = f[3];
int64_t ce = 1;
int64_t de = be + ce;
int64_t ee = 16000;
int64_t fe = de * ee;
int64_t ge = ae + fe;
int64_t he = f[2];
int64_t ie = 3;
int64_t je = he << ie;
int64_t * ke = ge + je;
double le = ke[0];
double me = zd + le;
int64_t ne = f[5];
int64_t oe = f[3];
int64_t pe = 1;
int64_t qe = oe + pe;
int64_t re = 16000;
int64_t se = qe * re;
int64_t te = ne + se;
int64_t ue = f[2];
int64_t ve = 1;
int64_t we = ue + ve;
int64_t xe = 3;
int64_t ye = we << xe;
int64_t * ze = te + ye;
double af = ze[0];
double bf = me + af;
double cf = 9.0;
double df = bf / cf;
int64_t ef = f[5];
int64_t ff = f[3];
int64_t gf = 16000;
int64_t hf = ff * gf;
int64_t _if = ef + hf;
int64_t jf = f[2];
int64_t kf = 3;
int64_t lf = jf << kf;
int64_t * mf = _if + lf;
mf[0] = df;
int64_t nf = f[2];
int64_t of = 1;
int64_t pf = nf + of;
f[2] = pf;
;//continue L_f;
}
//unreachable;
B_e:;
int64_t qf = f[3];
int64_t rf = 1;
int64_t sf = qf + rf;
f[3] = sf;
;//continue L_d;
}
//unreachable;
B_c:;
int64_t tf = f[4];
int64_t uf = 1;
int64_t vf = tf + uf;
f[4] = vf;
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
