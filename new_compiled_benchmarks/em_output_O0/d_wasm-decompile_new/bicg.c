
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
void kernel_bicg(int a, int b, int c, int d, int e, int f, int g);
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

void kernel_bicg(int a, int b, int c, int d, int e, int f, int g) {
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
int64_t s = j[8];
int64_t t = j[4];
int64_t u = 3;
int64_t v = t << u;
int64_t * w = s + v;
int64_t x = 0;
double y = f64_convert_i32_s(x);
w[0] = y;
int64_t z = j[4];
int64_t aa = 1;
int64_t ba = z + aa;
j[4] = ba;
;//continue L_b;
}
//unreachable;
B_a:;
int64_t ca = 0;
j[4] = ca;
while (1) {
int64_t da = j[4];
int64_t ea = j[10];
int64_t fa = da;
int64_t ga = ea;
int64_t ha = fa < ga;
int64_t ia = 1;
int64_t ja = ha & ia;
if (eqz(ja)) goto B_c;
int64_t ka = j[7];
int64_t la = j[4];
int64_t ma = 3;
int64_t na = la << ma;
int64_t * oa = ka + na;
int64_t pa = 0;
double qa = f64_convert_i32_s(pa);
oa[0] = qa;
int64_t ra = 0;
j[3] = ra;
while (1) {
int64_t sa = j[3];
int64_t ta = j[11];
int64_t ua = sa;
int64_t va = ta;
int64_t wa = ua < va;
int64_t xa = 1;
int64_t ya = wa & xa;
if (eqz(ya)) goto B_e;
int64_t za = j[8];
int64_t ab = j[3];
int64_t bb = 3;
int64_t cb = ab << bb;
int64_t * db = za + cb;
double eb = db[0];
int64_t fb = j[5];
int64_t gb = j[4];
int64_t hb = 3;
int64_t ib = gb << hb;
int64_t * jb = fb + ib;
double kb = jb[0];
int64_t lb = j[9];
int64_t mb = j[4];
int64_t nb = 15200;
int64_t ob = mb * nb;
int64_t pb = lb + ob;
int64_t qb = j[3];
int64_t rb = 3;
int64_t sb = qb << rb;
int64_t * tb = pb + sb;
double ub = tb[0];
double vb = kb * ub;
double wb = vb + eb;
int64_t xb = j[8];
int64_t yb = j[3];
int64_t zb = 3;
int64_t ac = yb << zb;
int64_t * bc = xb + ac;
bc[0] = wb;
int64_t cc = j[7];
int64_t dc = j[4];
int64_t ec = 3;
int64_t fc = dc << ec;
int64_t * gc = cc + fc;
double hc = gc[0];
int64_t ic = j[9];
int64_t jc = j[4];
int64_t kc = 15200;
int64_t lc = jc * kc;
int64_t mc = ic + lc;
int64_t nc = j[3];
int64_t oc = 3;
int64_t pc = nc << oc;
int64_t * qc = mc + pc;
double rc = qc[0];
int64_t sc = j[6];
int64_t tc = j[3];
int64_t uc = 3;
int64_t vc = tc << uc;
int64_t * wc = sc + vc;
double xc = wc[0];
double yc = rc * xc;
double zc = yc + hc;
int64_t ad = j[7];
int64_t bd = j[4];
int64_t cd = 3;
int64_t dd = bd << cd;
int64_t * ed = ad + dd;
ed[0] = zc;
int64_t fd = j[3];
int64_t gd = 1;
int64_t hd = fd + gd;
j[3] = hd;
;//continue L_f;
}
//unreachable;
B_e:;
int64_t id = j[4];
int64_t jd = 1;
int64_t kd = id + jd;
j[4] = kd;
;//continue L_d;
}
//unreachable;
B_c:;
}




int legalfunc_polybench_alloc_data(long a, int b) {
return legalimport_polybench_alloc_data(i32_wrap_i64(a),
i32_wrap_i64(a >> 32L),
b);
}
