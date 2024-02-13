
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
void kernel_trmm(int a, int b, double c, int d, int e);
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

void kernel_trmm(int a, int b, double c, int d, int e) {
int64_t* f = stack_pointer;
int64_t g = 48;
int64_t* h = f - g;
h[11] = a;
h[10] = b;
h[4] = c;
h[7] = d;
h[6] = e;
int64_t i = 0;
h[5] = i;
while (1) {
int64_t j = (int64_t)h[5];
int64_t k = (int64_t)h[11];
int64_t l = j;
int64_t m = k;
int64_t n = l < m;
int64_t o = 1;
int64_t p = n & o;
if (eqz(p)) goto B_a;
int64_t q = 0;
h[4] = q;
while (1) {
int64_t r = (int64_t)h[4];
int64_t s = (int64_t)h[10];
int64_t t = r;
int64_t u = s;
int64_t v = t < u;
int64_t w = 1;
int64_t x = v & w;
if (eqz(x)) goto B_c;
int64_t y = (int64_t)h[5];
int64_t z = 1;
int64_t aa = y + z;
h[3] = aa;
while (1) {
int64_t ba = (int64_t)h[3];
int64_t ca = (int64_t)h[11];
int64_t da = ba;
int64_t ea = ca;
int64_t fa = da < ea;
int64_t ga = 1;
int64_t ha = fa & ga;
if (eqz(ha)) goto B_e;
int64_t ia = (int64_t)h[7];
int64_t ja = (int64_t)h[3];
int64_t ka = 8000;
int64_t la = ja * ka;
int64_t ma = ia + la;
int64_t na = (int64_t)h[5];
int64_t oa = 3;
int64_t pa = na << oa;
int64_t * qa = ma + pa;
double ra = qa[0];
int64_t sa = (int64_t)h[6];
int64_t ta = (int64_t)h[3];
int64_t ua = 9600;
int64_t va = ta * ua;
int64_t wa = sa + va;
int64_t xa = (int64_t)h[4];
int64_t ya = 3;
int64_t za = xa << ya;
int64_t * ab = wa + za;
double bb = ab[0];
int64_t cb = (int64_t)h[6];
int64_t db = (int64_t)h[5];
int64_t eb = 9600;
int64_t fb = db * eb;
int64_t gb = cb + fb;
int64_t hb = (int64_t)h[4];
int64_t ib = 3;
int64_t jb = hb << ib;
int64_t * kb = gb + jb;
double lb = kb[0];
double mb = ra * bb;
double nb = mb + lb;
kb[0] = nb;
int64_t ob = (int64_t)h[3];
int64_t pb = 1;
int64_t qb = ob + pb;
h[3] = qb;
;//continue L_f;
}
//unreachable;
B_e:;
double rb = (double)h[4];
int64_t sb = (int64_t)h[6];
int64_t tb = (int64_t)h[5];
int64_t ub = 9600;
int64_t vb = tb * ub;
int64_t wb = sb + vb;
int64_t xb = (int64_t)h[4];
int64_t yb = 3;
int64_t zb = xb << yb;
int64_t * ac = wb + zb;
double bc = ac[0];
double cc = rb * bc;
int64_t dc = (int64_t)h[6];
int64_t ec = (int64_t)h[5];
int64_t fc = 9600;
int64_t gc = ec * fc;
int64_t hc = dc + gc;
int64_t ic = (int64_t)h[4];
int64_t jc = 3;
int64_t kc = ic << jc;
int64_t * lc = hc + kc;
lc[0] = cc;
int64_t mc = (int64_t)h[4];
int64_t nc = 1;
int64_t oc = mc + nc;
h[4] = oc;
;//continue L_d;
}
//unreachable;
B_c:;
int64_t pc = (int64_t)h[5];
int64_t qc = 1;
int64_t rc = pc + qc;
h[5] = rc;
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
