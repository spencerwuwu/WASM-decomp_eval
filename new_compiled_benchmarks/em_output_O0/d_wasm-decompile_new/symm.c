
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
void kernel_symm(int a, int b, double c, double d, int e, int f, int g);
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

void kernel_symm(int a, int b, double c, double d, int e, int f, int g) {
int64_t* h = stack_pointer;
int64_t i = 64;
int64_t* j = h - i;
j[15] = a;
j[14] = b;
j[6] = c;
j[5] = d;
j[9] = e;
j[8] = f;
j[7] = g;
int64_t k = 0;
j[6] = k;
while (1) {
int64_t l = (int64_t)j[6];
int64_t m = (int64_t)j[15];
int64_t n = l;
int64_t o = m;
int64_t p = n < o;
int64_t q = 1;
int64_t r = p & q;
if (eqz(r)) goto B_a;
int64_t s = 0;
j[5] = s;
while (1) {
int64_t t = (int64_t)j[5];
int64_t u = (int64_t)j[14];
int64_t v = t;
int64_t w = u;
int64_t x = v < w;
int64_t y = 1;
int64_t z = x & y;
if (eqz(z)) goto B_c;
int64_t aa = 0;
double ba = f64_convert_i32_s(aa);
j[1] = ba;
int64_t ca = 0;
j[4] = ca;
while (1) {
int64_t da = (int64_t)j[4];
int64_t ea = (int64_t)j[6];
int64_t fa = da;
int64_t ga = ea;
int64_t ha = fa < ga;
int64_t ia = 1;
int64_t ja = ha & ia;
if (eqz(ja)) goto B_e;
double ka = (double)j[6];
int64_t la = (int64_t)j[7];
int64_t ma = (int64_t)j[6];
int64_t na = 9600;
int64_t oa = ma * na;
int64_t pa = la + oa;
int64_t qa = (int64_t)j[5];
int64_t ra = 3;
int64_t sa = qa << ra;
int64_t * ta = pa + sa;
double ua = ta[0];
double va = ka * ua;
int64_t wa = (int64_t)j[8];
int64_t xa = (int64_t)j[6];
int64_t ya = 8000;
int64_t za = xa * ya;
int64_t ab = wa + za;
int64_t bb = (int64_t)j[4];
int64_t cb = 3;
int64_t db = bb << cb;
int64_t * eb = ab + db;
double fb = eb[0];
int64_t gb = (int64_t)j[9];
int64_t hb = (int64_t)j[4];
int64_t ib = 9600;
int64_t jb = hb * ib;
int64_t kb = gb + jb;
int64_t lb = (int64_t)j[5];
int64_t mb = 3;
int64_t nb = lb << mb;
int64_t * ob = kb + nb;
double pb = ob[0];
double qb = va * fb;
double rb = qb + pb;
ob[0] = rb;
int64_t sb = (int64_t)j[7];
int64_t tb = (int64_t)j[4];
int64_t ub = 9600;
int64_t vb = tb * ub;
int64_t wb = sb + vb;
int64_t xb = (int64_t)j[5];
int64_t yb = 3;
int64_t zb = xb << yb;
int64_t * ac = wb + zb;
double bc = ac[0];
int64_t cc = (int64_t)j[8];
int64_t dc = (int64_t)j[6];
int64_t ec = 8000;
int64_t fc = dc * ec;
int64_t gc = cc + fc;
int64_t hc = (int64_t)j[4];
int64_t ic = 3;
int64_t jc = hc << ic;
int64_t * kc = gc + jc;
double lc = kc[0];
double mc = (double)j[1];
double nc = bc * lc;
double oc = nc + mc;
j[1] = oc;
int64_t pc = (int64_t)j[4];
int64_t qc = 1;
int64_t rc = pc + qc;
j[4] = rc;
;//continue L_f;
}
//unreachable;
B_e:;
double sc = (double)j[5];
int64_t tc = (int64_t)j[9];
int64_t uc = (int64_t)j[6];
int64_t vc = 9600;
int64_t wc = uc * vc;
int64_t xc = tc + wc;
int64_t yc = (int64_t)j[5];
int64_t zc = 3;
int64_t ad = yc << zc;
int64_t * bd = xc + ad;
double cd = bd[0];
double dd = (double)j[6];
int64_t ed = (int64_t)j[7];
int64_t fd = (int64_t)j[6];
int64_t gd = 9600;
int64_t hd = fd * gd;
int64_t id = ed + hd;
int64_t jd = (int64_t)j[5];
int64_t kd = 3;
int64_t ld = jd << kd;
int64_t * md = id + ld;
double nd = md[0];
double od = dd * nd;
int64_t pd = (int64_t)j[8];
int64_t qd = (int64_t)j[6];
int64_t rd = 8000;
int64_t sd = qd * rd;
int64_t td = pd + sd;
int64_t ud = (int64_t)j[6];
int64_t vd = 3;
int64_t wd = ud << vd;
int64_t * xd = td + wd;
double yd = xd[0];
double zd = od * yd;
double ae = sc * cd;
double be = ae + zd;
double ce = (double)j[6];
double de = (double)j[1];
double ee = ce * de;
double fe = ee + be;
int64_t ge = (int64_t)j[9];
int64_t he = (int64_t)j[6];
int64_t ie = 9600;
int64_t je = he * ie;
int64_t ke = ge + je;
int64_t le = (int64_t)j[5];
int64_t me = 3;
int64_t ne = le << me;
int64_t * oe = ke + ne;
oe[0] = fe;
int64_t pe = (int64_t)j[5];
int64_t qe = 1;
int64_t re = pe + qe;
j[5] = re;
;//continue L_d;
}
//unreachable;
B_c:;
int64_t se = (int64_t)j[6];
int64_t te = 1;
int64_t ue = se + te;
j[6] = ue;
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
