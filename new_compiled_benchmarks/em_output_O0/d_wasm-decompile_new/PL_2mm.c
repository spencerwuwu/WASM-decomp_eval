
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

    typedef struct struct_1 {
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    int g;
    int h;
    double i;
    double j;
    int k;
    int l;
    int m;
    int n;
} struct_1;
int _fprintf(int a, int b, int c);
int _strcmp(int a, int b);
void _free(int a);
int legalimport_polybench_alloc_data(int a, int b, int c);
void wasm_call_ctors();
void wasm_apply_data_relocs();
void kernel_2mm(int a, int b, int c, int d, double e, double f, int g, int h, int i, int j, int k);
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



void kernel_2mm(int a, int b, int c, int d, double e, double f, int g, int h, int i, int j, int k) {
int64_t* l = stack_pointer;
int64_t m = 64;
struct_1 n;
n.n = a;
n.m = b;
n.l = c;
n.k = d;
n.j = e;
n.i = f;
n.h = g;
n.g = h;
n.f = i;
n.e = j;
n.d = k;
int64_t o = 0;
n.c = o;
while (1) {
int64_t p = n.c;
int64_t q = n.n;
int64_t r = p;
int64_t s = q;
int64_t t = r < s;
int64_t u = 1;
int64_t v = t & u;
if (eqz(v)) goto B_a;
int64_t w = 0;
n.b = w;
while (1) {
int64_t x = n.b;
int64_t y = n.m;
int64_t z = x;
int64_t aa = y;
int64_t ba = z < aa;
int64_t ca = 1;
int64_t da = ba & ca;
if (eqz(da)) goto B_c;
int64_t ea = n.h;
int64_t fa = n.c;
int64_t ga = 7200;
int64_t ha = fa * ga;
int64_t ia = ea + ha;
int64_t ja = n.b;
int64_t ka = 3;
int64_t la = ja << ka;
int64_t * ma = ia + la;
int64_t na = 0;
double oa = f64_convert_i32_s(na);
ma[0] = oa;
int64_t pa = 0;
n.a = pa;
while (1) {
int64_t qa = n.a;
int64_t ra = n.l;
int64_t sa = qa;
int64_t ta = ra;
int64_t ua = sa < ta;
int64_t va = 1;
int64_t wa = ua & va;
if (eqz(wa)) goto B_e;
double xa = n.j;
int64_t ya = n.g;
int64_t za = n.c;
int64_t ab = 8800;
int64_t bb = za * ab;
int64_t cb = ya + bb;
int64_t db = n.a;
int64_t eb = 3;
int64_t fb = db << eb;
int64_t * gb = cb + fb;
double hb = gb[0];
double ib = xa * hb;
int64_t jb = n.f;
int64_t kb = n.a;
int64_t lb = 7200;
int64_t mb = kb * lb;
int64_t nb = jb + mb;
int64_t ob = n.b;
int64_t pb = 3;
int64_t qb = ob << pb;
int64_t * rb = nb + qb;
double sb = rb[0];
int64_t tb = n.h;
int64_t ub = n.c;
int64_t vb = 7200;
int64_t wb = ub * vb;
int64_t xb = tb + wb;
int64_t yb = n.b;
int64_t zb = 3;
int64_t ac = yb << zb;
int64_t * bc = xb + ac;
double cc = bc[0];
double dc = ib * sb;
double ec = dc + cc;
bc[0] = ec;
int64_t fc = n.a;
int64_t gc = 1;
int64_t hc = fc + gc;
n.a = hc;
;//continue L_f;
}
//unreachable;
B_e:;
int64_t ic = n.b;
int64_t jc = 1;
int64_t kc = ic + jc;
n.b = kc;
;//continue L_d;
}
//unreachable;
B_c:;
int64_t lc = n.c;
int64_t mc = 1;
int64_t nc = lc + mc;
n.c = nc;
;//continue L_b;
}
//unreachable;
B_a:;
int64_t oc = 0;
n.c = oc;
while (1) {
int64_t pc = n.c;
int64_t qc = n.n;
int64_t rc = pc;
int64_t sc = qc;
int64_t tc = rc < sc;
int64_t uc = 1;
int64_t vc = tc & uc;
if (eqz(vc)) goto B_g;
int64_t wc = 0;
n.b = wc;
while (1) {
int64_t xc = n.b;
int64_t yc = n.k;
int64_t zc = xc;
int64_t ad = yc;
int64_t bd = zc < ad;
int64_t cd = 1;
int64_t dd = bd & cd;
if (eqz(dd)) goto B_i;
double ed = n.i;
int64_t fd = n.d;
int64_t gd = n.c;
int64_t hd = 9600;
int64_t id = gd * hd;
int64_t jd = fd + id;
int64_t kd = n.b;
int64_t ld = 3;
int64_t md = kd << ld;
int64_t * nd = jd + md;
double od = nd[0];
double pd = od * ed;
nd[0] = pd;
int64_t qd = 0;
n.a = qd;
while (1) {
int64_t rd = n.a;
int64_t sd = n.m;
int64_t td = rd;
int64_t ud = sd;
int64_t vd = td < ud;
int64_t wd = 1;
int64_t xd = vd & wd;
if (eqz(xd)) goto B_k;
int64_t yd = n.h;
int64_t zd = n.c;
int64_t ae = 7200;
int64_t be = zd * ae;
int64_t ce = yd + be;
int64_t de = n.a;
int64_t ee = 3;
int64_t fe = de << ee;
int64_t * ge = ce + fe;
double he = ge[0];
int64_t ie = n.e;
int64_t je = n.a;
int64_t ke = 9600;
int64_t le = je * ke;
int64_t me = ie + le;
int64_t ne = n.b;
int64_t oe = 3;
int64_t pe = ne << oe;
int64_t * qe = me + pe;
double re = qe[0];
int64_t se = n.d;
int64_t te = n.c;
int64_t ue = 9600;
int64_t ve = te * ue;
int64_t we = se + ve;
int64_t xe = n.b;
int64_t ye = 3;
int64_t ze = xe << ye;
int64_t * af = we + ze;
double bf = af[0];
double cf = he * re;
double df = cf + bf;
af[0] = df;
int64_t ef = n.a;
int64_t ff = 1;
int64_t gf = ef + ff;
n.a = gf;
;//continue L_l;
}
//unreachable;
B_k:;
int64_t hf = n.b;
int64_t _if = 1;
int64_t jf = hf + _if;
n.b = jf;
;//continue L_j;
}
//unreachable;
B_i:;
int64_t kf = n.c;
int64_t lf = 1;
int64_t mf = kf + lf;
n.c = mf;
;//continue L_h;
}
//unreachable;
B_g:;
}


int legalfunc_polybench_alloc_data(long a, int b) {
return legalimport_polybench_alloc_data(i32_wrap_i64(a),
i32_wrap_i64(a >> 32L),
b);
}
