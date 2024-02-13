
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
int _fprintf(int a, int b, int c);
int _strcmp(int a, int b);
void _free(int a);
int legalimport_polybench_alloc_data(int a, int b, int c);
void wasm_call_ctors();
void wasm_apply_data_relocs();
void kernel_atax(int a, int b, int c, int d, int e, int f);
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



void kernel_atax(int a, int b, int c, int d, int e, int f) {
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
int64_t l = i.g;
int64_t m = k;
int64_t n = l;
int64_t o = m < n;
int64_t p = 1;
int64_t q = o & p;
if (eqz(q)) goto B_a;
int64_t r = i.d;
int64_t s = i.b;
int64_t t = 3;
int64_t u = s << t;
int64_t * v = r + u;
int64_t w = 0;
double x = f64_convert_i32_s(w);
v[0] = x;
int64_t y = i.b;
int64_t z = 1;
int64_t aa = y + z;
i.b = aa;
;//continue L_b;
}
//unreachable;
B_a:;
int64_t ba = 0;
i.b = ba;
while (1) {
int64_t ca = i.b;
int64_t da = i.h;
int64_t ea = ca;
int64_t fa = da;
int64_t ga = ea < fa;
int64_t ha = 1;
int64_t ia = ga & ha;
if (eqz(ia)) goto B_c;
int64_t ja = i.c;
int64_t ka = i.b;
int64_t la = 3;
int64_t ma = ka << la;
int64_t * na = ja + ma;
int64_t oa = 0;
double pa = f64_convert_i32_s(oa);
na[0] = pa;
int64_t qa = 0;
i.a = qa;
while (1) {
int64_t ra = i.a;
int64_t sa = i.g;
int64_t ta = ra;
int64_t ua = sa;
int64_t va = ta < ua;
int64_t wa = 1;
int64_t xa = va & wa;
if (eqz(xa)) goto B_e;
int64_t ya = i.c;
int64_t za = i.b;
int64_t ab = 3;
int64_t bb = za << ab;
int64_t * cb = ya + bb;
double db = cb[0];
int64_t eb = i.f;
int64_t fb = i.b;
int64_t gb = 16800;
int64_t hb = fb * gb;
int64_t ib = eb + hb;
int64_t jb = i.a;
int64_t kb = 3;
int64_t lb = jb << kb;
int64_t * mb = ib + lb;
double nb = mb[0];
int64_t ob = i.e;
int64_t pb = i.a;
int64_t qb = 3;
int64_t rb = pb << qb;
int64_t * sb = ob + rb;
double tb = sb[0];
double ub = nb * tb;
double vb = ub + db;
int64_t wb = i.c;
int64_t xb = i.b;
int64_t yb = 3;
int64_t zb = xb << yb;
int64_t * ac = wb + zb;
ac[0] = vb;
int64_t bc = i.a;
int64_t cc = 1;
int64_t dc = bc + cc;
i.a = dc;
;//continue L_f;
}
//unreachable;
B_e:;
int64_t ec = 0;
i.a = ec;
while (1) {
int64_t fc = i.a;
int64_t gc = i.g;
int64_t hc = fc;
int64_t ic = gc;
int64_t jc = hc < ic;
int64_t kc = 1;
int64_t lc = jc & kc;
if (eqz(lc)) goto B_g;
int64_t mc = i.d;
int64_t nc = i.a;
int64_t oc = 3;
int64_t pc = nc << oc;
int64_t * qc = mc + pc;
double rc = qc[0];
int64_t sc = i.f;
int64_t tc = i.b;
int64_t uc = 16800;
int64_t vc = tc * uc;
int64_t wc = sc + vc;
int64_t xc = i.a;
int64_t yc = 3;
int64_t zc = xc << yc;
int64_t * ad = wc + zc;
double bd = ad[0];
int64_t cd = i.c;
int64_t dd = i.b;
int64_t ed = 3;
int64_t fd = dd << ed;
int64_t * gd = cd + fd;
double hd = gd[0];
double id = bd * hd;
double jd = id + rc;
int64_t kd = i.d;
int64_t ld = i.a;
int64_t md = 3;
int64_t nd = ld << md;
int64_t * od = kd + nd;
od[0] = jd;
int64_t pd = i.a;
int64_t qd = 1;
int64_t rd = pd + qd;
i.a = rd;
;//continue L_h;
}
//unreachable;
B_g:;
int64_t sd = i.b;
int64_t td = 1;
int64_t ud = sd + td;
i.b = ud;
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
