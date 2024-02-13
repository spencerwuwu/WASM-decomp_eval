
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
void kernel_doitgen(int a, int b, int c, int d, int e, int f);
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

void kernel_doitgen(int a, int b, int c, int d, int e, int f) {
int64_t* g = stack_pointer;
int64_t h = 48;
int64_t * i = g - h;
i[11] = a;
i[10] = b;
i[9] = c;
i[8] = d;
i[7] = e;
i[6] = f;
int64_t j = 0;
i[5] = j;
while (1) {
int64_t k = i[5];
int64_t l = i[11];
int64_t m = k;
int64_t n = l;
int64_t o = m < n;
int64_t p = 1;
int64_t q = o & p;
if (eqz(q)) goto B_a;
int64_t r = 0;
i[4] = r;
while (1) {
int64_t s = i[4];
int64_t t = i[10];
int64_t u = s;
int64_t v = t;
int64_t w = u < v;
int64_t x = 1;
int64_t y = w & x;
if (eqz(y)) goto B_c;
int64_t z = 0;
i[3] = z;
while (1) {
int64_t aa = i[3];
int64_t ba = i[9];
int64_t ca = aa;
int64_t da = ba;
int64_t ea = ca < da;
int64_t fa = 1;
int64_t ga = ea & fa;
if (eqz(ga)) goto B_e;
int64_t ha = i[6];
int64_t ia = i[3];
int64_t ja = 3;
int64_t ka = ia << ja;
int64_t * la = ha + ka;
int64_t ma = 0;
double na = f64_convert_i32_s(ma);
la[0] = na;
int64_t oa = 0;
i[2] = oa;
while (1) {
int64_t pa = i[2];
int64_t qa = i[9];
int64_t ra = pa;
int64_t sa = qa;
int64_t ta = ra < sa;
int64_t ua = 1;
int64_t va = ta & ua;
if (eqz(va)) goto B_g;
int64_t wa = i[8];
int64_t xa = i[5];
int64_t ya = 179200;
int64_t za = xa * ya;
int64_t ab = wa + za;
int64_t bb = i[4];
int64_t cb = 1280;
int64_t db = bb * cb;
int64_t eb = ab + db;
int64_t fb = i[2];
int64_t gb = 3;
int64_t hb = fb << gb;
int64_t * ib = eb + hb;
double jb = ib[0];
int64_t kb = i[7];
int64_t lb = i[2];
int64_t mb = 1280;
int64_t nb = lb * mb;
int64_t ob = kb + nb;
int64_t pb = i[3];
int64_t qb = 3;
int64_t rb = pb << qb;
int64_t * sb = ob + rb;
double tb = sb[0];
int64_t ub = i[6];
int64_t vb = i[3];
int64_t wb = 3;
int64_t xb = vb << wb;
int64_t * yb = ub + xb;
double zb = yb[0];
double ac = jb * tb;
double bc = ac + zb;
yb[0] = bc;
int64_t cc = i[2];
int64_t dc = 1;
int64_t ec = cc + dc;
i[2] = ec;
;//continue L_h;
}
//unreachable;
B_g:;
int64_t fc = i[3];
int64_t gc = 1;
int64_t hc = fc + gc;
i[3] = hc;
;//continue L_f;
}
//unreachable;
B_e:;
int64_t ic = 0;
i[3] = ic;
while (1) {
int64_t jc = i[3];
int64_t kc = i[9];
int64_t lc = jc;
int64_t mc = kc;
int64_t nc = lc < mc;
int64_t oc = 1;
int64_t pc = nc & oc;
if (eqz(pc)) goto B_i;
int64_t qc = i[6];
int64_t rc = i[3];
int64_t sc = 3;
int64_t tc = rc << sc;
int64_t * uc = qc + tc;
double vc = uc[0];
int64_t wc = i[8];
int64_t xc = i[5];
int64_t yc = 179200;
int64_t zc = xc * yc;
int64_t ad = wc + zc;
int64_t bd = i[4];
int64_t cd = 1280;
int64_t dd = bd * cd;
int64_t ed = ad + dd;
int64_t fd = i[3];
int64_t gd = 3;
int64_t hd = fd << gd;
int64_t * id = ed + hd;
id[0] = vc;
int64_t jd = i[3];
int64_t kd = 1;
int64_t ld = jd + kd;
i[3] = ld;
;//continue L_j;
}
//unreachable;
B_i:;
int64_t md = i[4];
int64_t nd = 1;
int64_t od = md + nd;
i[4] = od;
;//continue L_d;
}
//unreachable;
B_c:;
int64_t pd = i[5];
int64_t qd = 1;
int64_t rd = pd + qd;
i[5] = rd;
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
