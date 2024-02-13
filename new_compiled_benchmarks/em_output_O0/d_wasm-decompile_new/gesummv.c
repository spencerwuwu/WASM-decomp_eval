
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
void kernel_gesummv(int a, double b, double c, int d, int e, int f, int g, int h);
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

void kernel_gesummv(int a, double b, double c, int d, int e, int f, int g, int h) {
int64_t* i = stack_pointer;
int64_t j = 64;
int64_t* k = i - j;
k[15] = a;
k[6] = b;
k[5] = c;
k[9] = d;
k[8] = e;
k[7] = f;
k[6] = g;
k[5] = h;
int64_t l = 0;
k[4] = l;
while (1) {
int64_t m = (int64_t)k[4];
int64_t n = (int64_t)k[15];
int64_t o = m;
int64_t p = n;
int64_t q = o < p;
int64_t r = 1;
int64_t s = q & r;
if (eqz(s)) goto B_a;
int64_t t = (int64_t)k[7];
int64_t u = (int64_t)k[4];
int64_t v = 3;
int64_t w = u << v;
int64_t * x = t + w;
int64_t y = 0;
double z = f64_convert_i32_s(y);
x[0] = z;
int64_t aa = (int64_t)k[5];
int64_t ba = (int64_t)k[4];
int64_t ca = 3;
int64_t da = ba << ca;
int64_t * ea = aa + da;
int64_t fa = 0;
double ga = f64_convert_i32_s(fa);
ea[0] = ga;
int64_t ha = 0;
k[3] = ha;
while (1) {
int64_t ia = (int64_t)k[3];
int64_t ja = (int64_t)k[15];
int64_t ka = ia;
int64_t la = ja;
int64_t ma = ka < la;
int64_t na = 1;
int64_t oa = ma & na;
if (eqz(oa)) goto B_c;
int64_t pa = (int64_t)k[9];
int64_t qa = (int64_t)k[4];
int64_t ra = 10400;
int64_t sa = qa * ra;
int64_t ta = pa + sa;
int64_t ua = (int64_t)k[3];
int64_t va = 3;
int64_t wa = ua << va;
int64_t * xa = ta + wa;
double ya = xa[0];
int64_t za = (int64_t)k[6];
int64_t ab = (int64_t)k[3];
int64_t bb = 3;
int64_t cb = ab << bb;
int64_t * db = za + cb;
double eb = db[0];
int64_t fb = (int64_t)k[7];
int64_t gb = (int64_t)k[4];
int64_t hb = 3;
int64_t ib = gb << hb;
int64_t * jb = fb + ib;
double kb = jb[0];
double lb = ya * eb;
double mb = lb + kb;
int64_t nb = (int64_t)k[7];
int64_t ob = (int64_t)k[4];
int64_t pb = 3;
int64_t qb = ob << pb;
int64_t * rb = nb + qb;
rb[0] = mb;
int64_t sb = (int64_t)k[8];
int64_t tb = (int64_t)k[4];
int64_t ub = 10400;
int64_t vb = tb * ub;
int64_t wb = sb + vb;
int64_t xb = (int64_t)k[3];
int64_t yb = 3;
int64_t zb = xb << yb;
int64_t * ac = wb + zb;
double bc = ac[0];
int64_t cc = (int64_t)k[6];
int64_t dc = (int64_t)k[3];
int64_t ec = 3;
int64_t fc = dc << ec;
int64_t * gc = cc + fc;
double hc = gc[0];
int64_t ic = (int64_t)k[5];
int64_t jc = (int64_t)k[4];
int64_t kc = 3;
int64_t lc = jc << kc;
int64_t * mc = ic + lc;
double nc = mc[0];
double oc = bc * hc;
double pc = oc + nc;
int64_t qc = (int64_t)k[5];
int64_t rc = (int64_t)k[4];
int64_t sc = 3;
int64_t tc = rc << sc;
int64_t * uc = qc + tc;
uc[0] = pc;
int64_t vc = (int64_t)k[3];
int64_t wc = 1;
int64_t xc = vc + wc;
k[3] = xc;
;//continue L_d;
}
//unreachable;
B_c:;
double yc = (double)k[6];
int64_t zc = (int64_t)k[7];
int64_t ad = (int64_t)k[4];
int64_t bd = 3;
int64_t cd = ad << bd;
int64_t * dd = zc + cd;
double ed = dd[0];
double fd = (double)k[5];
int64_t gd = (int64_t)k[5];
int64_t hd = (int64_t)k[4];
int64_t id = 3;
int64_t jd = hd << id;
int64_t * kd = gd + jd;
double ld = kd[0];
double md = fd * ld;
double nd = yc * ed;
double od = nd + md;
int64_t pd = (int64_t)k[5];
int64_t qd = (int64_t)k[4];
int64_t rd = 3;
int64_t sd = qd << rd;
int64_t * td = pd + sd;
td[0] = od;
int64_t ud = (int64_t)k[4];
int64_t vd = 1;
int64_t wd = ud + vd;
k[4] = wd;
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
