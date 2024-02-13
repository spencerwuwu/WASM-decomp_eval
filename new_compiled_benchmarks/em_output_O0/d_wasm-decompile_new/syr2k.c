
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
    double g;
    double h;
    int i;
    int j;
} struct_1;
int _strcmp(int a, int b);
void _free(int a);
int _fprintf(int a, int b, int c);
int legalimport_polybench_alloc_data(int a, int b, int c);
void wasm_call_ctors();
void wasm_apply_data_relocs();
void kernel_syr2k(int a, int b, double c, double d, int e, int f, int g);
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

void kernel_syr2k(int a, int b, double c, double d, int e, int f, int g) {
int64_t* h = stack_pointer;
int64_t i = 48;
struct_1 j;
j.j = a;
j.i = b;
j.h = c;
j.g = d;
j.f = e;
j.e = f;
j.d = g;
int64_t k = 0;
j.c = k;
while (1) {
int64_t l = j.c;
int64_t m = j.j;
int64_t n = l;
int64_t o = m;
int64_t p = n < o;
int64_t q = 1;
int64_t r = p & q;
if (eqz(r)) goto B_a;
int64_t s = 0;
j.b = s;
while (1) {
int64_t t = j.b;
int64_t u = j.c;
int64_t v = t;
int64_t w = u;
int64_t x = v <= w;
int64_t y = 1;
int64_t z = x & y;
if (eqz(z)) goto B_c;
double aa = j.g;
int64_t ba = j.f;
int64_t ca = j.c;
int64_t da = 9600;
int64_t ea = ca * da;
int64_t fa = ba + ea;
int64_t ga = j.b;
int64_t ha = 3;
int64_t ia = ga << ha;
int64_t * ja = fa + ia;
double ka = ja[0];
double la = ka * aa;
ja[0] = la;
int64_t ma = j.b;
int64_t na = 1;
int64_t oa = ma + na;
j.b = oa;
;//continue L_d;
}
//unreachable;
B_c:;
int64_t pa = 0;
j.a = pa;
while (1) {
int64_t qa = j.a;
int64_t ra = j.i;
int64_t sa = qa;
int64_t ta = ra;
int64_t ua = sa < ta;
int64_t va = 1;
int64_t wa = ua & va;
if (eqz(wa)) goto B_e;
int64_t xa = 0;
j.b = xa;
while (1) {
int64_t ya = j.b;
int64_t za = j.c;
int64_t ab = ya;
int64_t bb = za;
int64_t cb = ab <= bb;
int64_t db = 1;
int64_t eb = cb & db;
if (eqz(eb)) goto B_g;
int64_t fb = j.e;
int64_t gb = j.b;
int64_t hb = 8000;
int64_t ib = gb * hb;
int64_t jb = fb + ib;
int64_t kb = j.a;
int64_t lb = 3;
int64_t mb = kb << lb;
int64_t * nb = jb + mb;
double ob = nb[0];
double pb = j.h;
double qb = ob * pb;
int64_t rb = j.d;
int64_t sb = j.c;
int64_t tb = 8000;
int64_t ub = sb * tb;
int64_t vb = rb + ub;
int64_t wb = j.a;
int64_t xb = 3;
int64_t yb = wb << xb;
int64_t * zb = vb + yb;
double ac = zb[0];
int64_t bc = j.d;
int64_t cc = j.b;
int64_t dc = 8000;
int64_t ec = cc * dc;
int64_t fc = bc + ec;
int64_t gc = j.a;
int64_t hc = 3;
int64_t ic = gc << hc;
int64_t * jc = fc + ic;
double kc = jc[0];
double lc = j.h;
double mc = kc * lc;
int64_t nc = j.e;
int64_t oc = j.c;
int64_t pc = 8000;
int64_t qc = oc * pc;
int64_t rc = nc + qc;
int64_t sc = j.a;
int64_t tc = 3;
int64_t uc = sc << tc;
int64_t * vc = rc + uc;
double wc = vc[0];
double xc = mc * wc;
double yc = qb * ac;
double zc = yc + xc;
int64_t ad = j.f;
int64_t bd = j.c;
int64_t cd = 9600;
int64_t dd = bd * cd;
int64_t ed = ad + dd;
int64_t fd = j.b;
int64_t gd = 3;
int64_t hd = fd << gd;
int64_t * id = ed + hd;
double jd = id[0];
double kd = jd + zc;
id[0] = kd;
int64_t ld = j.b;
int64_t md = 1;
int64_t nd = ld + md;
j.b = nd;
;//continue L_h;
}
//unreachable;
B_g:;
int64_t od = j.a;
int64_t pd = 1;
int64_t qd = od + pd;
j.a = qd;
;//continue L_f;
}
//unreachable;
B_e:;
int64_t rd = j.c;
int64_t sd = 1;
int64_t td = rd + sd;
j.c = td;
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
