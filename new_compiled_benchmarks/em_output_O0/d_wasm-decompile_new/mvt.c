
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
} struct_1;
int _strcmp(int a, int b);
void _free(int a);
int _fprintf(int a, int b, int c);
int legalimport_polybench_alloc_data(int a, int b, int c);
void wasm_call_ctors();
void wasm_apply_data_relocs();
void kernel_mvt(int a, int b, int c, int d, int e, int f);
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

void kernel_mvt(int a, int b, int c, int d, int e, int f) {
int64_t* g = stack_pointer;
int64_t h = 32;
struct_1 i;
i.h = a;
i.g = b;
i.f = c;
i.e = d;
i.d = e;
i.c = f;
int64_t j = 0;
i.b = j;
while (1) {
int64_t k = i.b;
int64_t l = i.h;
int64_t m = k;
int64_t n = l;
int64_t o = m < n;
int64_t p = 1;
int64_t q = o & p;
if (eqz(q)) goto B_a;
int64_t r = 0;
i.a = r;
while (1) {
int64_t s = i.a;
int64_t t = i.h;
int64_t u = s;
int64_t v = t;
int64_t w = u < v;
int64_t x = 1;
int64_t y = w & x;
if (eqz(y)) goto B_c;
int64_t z = i.g;
int64_t aa = i.b;
int64_t ba = 3;
int64_t ca = aa << ba;
int64_t * da = z + ca;
double ea = da[0];
int64_t fa = i.c;
int64_t ga = i.b;
int64_t ha = 16000;
int64_t ia = ga * ha;
int64_t ja = fa + ia;
int64_t ka = i.a;
int64_t la = 3;
int64_t ma = ka << la;
int64_t * na = ja + ma;
double oa = na[0];
int64_t pa = i.e;
int64_t qa = i.a;
int64_t ra = 3;
int64_t sa = qa << ra;
int64_t * ta = pa + sa;
double ua = ta[0];
double va = oa * ua;
double wa = va + ea;
int64_t xa = i.g;
int64_t ya = i.b;
int64_t za = 3;
int64_t ab = ya << za;
int64_t * bb = xa + ab;
bb[0] = wa;
int64_t cb = i.a;
int64_t db = 1;
int64_t eb = cb + db;
i.a = eb;
;//continue L_d;
}
//unreachable;
B_c:;
int64_t fb = i.b;
int64_t gb = 1;
int64_t hb = fb + gb;
i.b = hb;
;//continue L_b;
}
//unreachable;
B_a:;
int64_t ib = 0;
i.b = ib;
while (1) {
int64_t jb = i.b;
int64_t kb = i.h;
int64_t lb = jb;
int64_t mb = kb;
int64_t nb = lb < mb;
int64_t ob = 1;
int64_t pb = nb & ob;
if (eqz(pb)) goto B_e;
int64_t qb = 0;
i.a = qb;
while (1) {
int64_t rb = i.a;
int64_t sb = i.h;
int64_t tb = rb;
int64_t ub = sb;
int64_t vb = tb < ub;
int64_t wb = 1;
int64_t xb = vb & wb;
if (eqz(xb)) goto B_g;
int64_t yb = i.f;
int64_t zb = i.b;
int64_t ac = 3;
int64_t bc = zb << ac;
int64_t * cc = yb + bc;
double dc = cc[0];
int64_t ec = i.c;
int64_t fc = i.a;
int64_t gc = 16000;
int64_t hc = fc * gc;
int64_t ic = ec + hc;
int64_t jc = i.b;
int64_t kc = 3;
int64_t lc = jc << kc;
int64_t * mc = ic + lc;
double nc = mc[0];
int64_t oc = i.d;
int64_t pc = i.a;
int64_t qc = 3;
int64_t rc = pc << qc;
int64_t * sc = oc + rc;
double tc = sc[0];
double uc = nc * tc;
double vc = uc + dc;
int64_t wc = i.f;
int64_t xc = i.b;
int64_t yc = 3;
int64_t zc = xc << yc;
int64_t * ad = wc + zc;
ad[0] = vc;
int64_t bd = i.a;
int64_t cd = 1;
int64_t dd = bd + cd;
i.a = dd;
;//continue L_h;
}
//unreachable;
B_g:;
int64_t ed = i.b;
int64_t fd = 1;
int64_t gd = ed + fd;
i.b = gd;
;//continue L_f;
}
//unreachable;
B_e:;
}




int legalfunc_polybench_alloc_data(long a, int b) {
return legalimport_polybench_alloc_data(i32_wrap_i64(a),
i32_wrap_i64(a >> 32L),
b);
}
