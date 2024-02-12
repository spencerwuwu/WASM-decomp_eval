

extern int64_t stack_pointer;
extern int64_t memory_base;
extern int64_t table_base;
extern int64_t stderr;

data ()rodata(offset memory_base) =
"begin ()dump %s\00C\00%0.2lf \00\0aend ()dump %s\0a\00==BEGIN DUMP_ARR"
"AYS==\0a\00==END DUMP_ARRAYS==\0a\00";









void wasm_call_ctors() {
}

void wasm_apply_data_relocs() {
}

void kernel_syr2k(int a, int b, double c, double d, int e, int f, int g) {
int64_t* h = stack_pointer;
int64_t i = 48;
{ j (int,)a (int,)b (int,)c (int,)d (int,)e (int,)f (double,)g (double,)h (int,)i (int64_t)j } =
h - i;
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
//continue L_d;
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
//continue L_h;
}
//unreachable;
B_g:;
int64_t od = j.a;
int64_t pd = 1;
int64_t qd = od + pd;
j.a = qd;
//continue L_f;
}
//unreachable;
B_e:;
int64_t rd = j.c;
int64_t sd = 1;
int64_t td = rd + sd;
j.c = td;
//continue L_b;
}
//unreachable;
B_a:;
}

int submain(int a, int b) {
int64_t* c = stack_pointer;
int64_t d = 48;
int64_t* e = c - d;
stack_pointer = e;
e[11] = a;
e[10] = b;
int64_t f = 1200;
e[9] = f;
int64_t g = 1000;
e[8] = g;
long h = 1440000L;
int64_t i = 8;
int64_t j = legalfunc_polybench_alloc_data(h, i);
e[3] = j;
long k = 1200000L;
int64_t l = 8;
int64_t m = legalfunc_polybench_alloc_data(k, l);
e[2] = m;
long n = 1200000L;
int64_t o = 8;
int64_t p = legalfunc_polybench_alloc_data(n, o);
e[1] = p;
int64_t q = (int64_t)e[9];
int64_t r = (int64_t)e[8];
int64_t s = (int64_t)e[3];
int64_t t = (int64_t)e[2];
int64_t u = (int64_t)e[1];
int64_t v = 24;
int64_t* w = e + v;
int64_t* x = w;
int64_t y = 16;
int64_t* z = e + y;
int64_t* aa = z;
init_array(q, r, x, aa, s, t, u);
int64_t ba = (int64_t)e[9];
int64_t ca = (int64_t)e[8];
double da = (double)e[3];
double ea = (double)e[2];
int64_t fa = (int64_t)e[3];
int64_t ga = (int64_t)e[2];
int64_t ha = (int64_t)e[1];
kernel_syr2k(ba, ca, da, ea, fa, ga, ha);
int64_t ia = (int64_t)e[11];
int64_t ja = 42;
int64_t ka = ia;
int64_t la = ja;
int64_t ma = ka > la;
int64_t na = 1;
int64_t oa = ma & na;
if (eqz(oa)) goto B_a;
int64_t * pa = (int64_t)e[10];
int64_t qa = pa[0];
int64_t ra = 87;
int64_t sa = memory_base;
int64_t ta = sa + ra;
int64_t ua = strcmp(qa, ta);
if (ua) goto B_a;
int64_t va = (int64_t)e[9];
int64_t wa = (int64_t)e[3];
print_array(va, wa);
B_a:;
int64_t xa = (int64_t)e[3];
free(xa);
int64_t ya = (int64_t)e[2];
free(ya);
int64_t za = (int64_t)e[1];
free(za);
int64_t ab = 0;
int64_t bb = 48;
int64_t* cb = e + bb;
stack_pointer = cb;
return ab;
}

void init_array(int a, int b, int c, int d, int e, int f, int g) {
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
int64_t * k = j[9];
double l = 1.5;
k[0] = l;
int64_t * m = j[8];
double n = 1.2;
m[0] = n;
int64_t o = 0;
j[4] = o;
while (1) {
int64_t p = j[4];
int64_t q = j[11];
int64_t r = p;
int64_t s = q;
int64_t t = r < s;
int64_t u = 1;
int64_t v = t & u;
if (eqz(v)) goto B_a;
int64_t w = 0;
j[3] = w;
while (1) {
int64_t x = j[3];
int64_t y = j[10];
int64_t* z = x;
int64_t aa = y;
int64_t* ba = z < aa;
int64_t ca = 1;
int64_t* da = ba & ca;
if (eqz(da)) goto B_c;
int64_t ea = j[4];
int64_t fa = j[3];
int64_t ga = ea * fa;
int64_t ha = 1;
int64_t ia = ga + ha;
int64_t ja = j[11];
int64_t ka = ia % ja;
double la = f64_convert_i32_s(ka);
int64_t ma = j[11];
double na = f64_convert_i32_s(ma);
double oa = la / na;
int64_t pa = j[6];
int64_t qa = j[4];
int64_t ra = 8000;
int64_t sa = qa * ra;
int64_t ta = pa + sa;
int64_t ua = j[3];
int64_t va = 3;
int64_t wa = ua << va;
int64_t * xa = ta + wa;
xa[0] = oa;
int64_t ya = j[4];
int64_t za = j[3];
int64_t ab = ya * za;
int64_t bb = 2;
int64_t cb = ab + bb;
int64_t db = j[10];
int64_t* eb = cb % db;
double fb = f64_convert_i32_s(eb);
int64_t gb = j[10];
double hb = f64_convert_i32_s(gb);
double ib = fb / hb;
int64_t jb = j[5];
int64_t kb = j[4];
int64_t lb = 8000;
int64_t mb = kb * lb;
int64_t nb = jb + mb;
int64_t ob = j[3];
int64_t pb = 3;
int64_t qb = ob << pb;
int64_t * rb = nb + qb;
rb[0] = ib;
int64_t sb = j[3];
int64_t tb = 1;
int64_t ub = sb + tb;
j[3] = ub;
//continue L_d;
}
//unreachable;
B_c:;
int64_t vb = j[4];
int64_t wb = 1;
int64_t xb = vb + wb;
j[4] = xb;
//continue L_b;
}
//unreachable;
B_a:;
int64_t yb = 0;
j[4] = yb;
while (1) {
int64_t zb = j[4];
int64_t ac = j[11];
int64_t bc = zb;
int64_t cc = ac;
int64_t dc = bc < cc;
int64_t ec = 1;
int64_t fc = dc & ec;
if (eqz(fc)) goto B_e;
int64_t gc = 0;
j[3] = gc;
while (1) {
int64_t hc = j[3];
int64_t ic = j[11];
int64_t jc = hc;
int64_t kc = ic;
int64_t lc = jc < kc;
int64_t mc = 1;
int64_t nc = lc & mc;
if (eqz(nc)) goto B_g;
int64_t oc = j[4];
int64_t pc = j[3];
int64_t qc = oc * pc;
int64_t rc = 3;
int64_t sc = qc + rc;
int64_t tc = j[11];
int64_t uc = sc % tc;
double vc = f64_convert_i32_s(uc);
int64_t wc = j[10];
double xc = f64_convert_i32_s(wc);
double yc = vc / xc;
int64_t zc = j[7];
int64_t ad = j[4];
int64_t bd = 9600;
int64_t cd = ad * bd;
int64_t dd = zc + cd;
int64_t ed = j[3];
int64_t fd = 3;
int64_t gd = ed << fd;
int64_t * hd = dd + gd;
hd[0] = yc;
int64_t id = j[3];
int64_t jd = 1;
int64_t kd = id + jd;
j[3] = kd;
//continue L_h;
}
//unreachable;
B_g:;
int64_t ld = j[4];
int64_t md = 1;
int64_t nd = ld + md;
j[4] = nd;
//continue L_f;
}
//unreachable;
B_e:;
}

void print_array(int a, int b) {
int64_t* c = stack_pointer;
int64_t d = 64;
int64_t* e = c - d;
stack_pointer = e;
e[15] = a;
e[14] = b;
int64_t * f = stderr;
int64_t g = f[0];
int64_t h = 42;
int64_t i = memory_base;
int64_t* j = i + h;
int64_t k = 0;
fprintf(g, j, k);
int64_t l = f[0];
int64_t m = 15;
int64_t n = memory_base;
int64_t o = n + m;
e[8] = o;
int64_t p = 0;
int64_t q = n + p;
int64_t r = 32;
int64_t* s = e + r;
fprintf(l, q, s);
int64_t t = 0;
e[13] = t;
while (1) {
int64_t u = (int64_t)e[13];
int64_t v = (int64_t)e[15];
int64_t w = u;
int64_t x = v;
int64_t* y = w < x;
int64_t z = 1;
int64_t* aa = y & z;
if (eqz(aa)) goto B_a;
int64_t ba = 0;
e[12] = ba;
while (1) {
int64_t ca = (int64_t)e[12];
int64_t da = (int64_t)e[15];
int64_t ea = ca;
int64_t* fa = da;
int64_t* ga = ea < fa;
int64_t ha = 1;
int64_t* ia = ga & ha;
if (eqz(ia)) goto B_c;
int64_t ja = (int64_t)e[13];
int64_t ka = (int64_t)e[15];
int64_t la = ja * ka;
int64_t ma = (int64_t)e[12];
int64_t na = la + ma;
int64_t oa = 20;
int64_t pa = na % oa;
if (pa) goto B_e;
int64_t * qa = stderr;
int64_t ra = qa[0];
int64_t sa = 86;
int64_t ta = memory_base;
int64_t ua = ta + sa;
int64_t va = 0;
fprintf(ra, ua, va);
B_e:;
int64_t * wa = stderr;
int64_t xa = wa[0];
int64_t ya = (int64_t)e[14];
int64_t za = (int64_t)e[13];
int64_t ab = 9600;
int64_t bb = za * ab;
int64_t cb = ya + bb;
int64_t db = (int64_t)e[12];
int64_t eb = 3;
int64_t* fb = db << eb;
int64_t * gb = cb + fb;
double hb = gb[0];
e[0] = hb;
int64_t ib = 17;
int64_t jb = memory_base;
int64_t kb = jb + ib;
fprintf(xa, kb, e);
int64_t lb = (int64_t)e[12];
int64_t mb = 1;
int64_t nb = lb + mb;
e[12] = nb;
//continue L_d;
}
//unreachable;
B_c:;
int64_t ob = (int64_t)e[13];
int64_t pb = 1;
int64_t qb = ob + pb;
e[13] = qb;
//continue L_b;
}
//unreachable;
B_a:;
int64_t * rb = stderr;
int64_t sb = rb[0];
int64_t tb = 15;
int64_t ub = memory_base;
int64_t vb = ub + tb;
e[4] = vb;
int64_t wb = 25;
int64_t xb = ub + wb;
int64_t yb = 16;
int64_t* zb = e + yb;
fprintf(sb, xb, zb);
int64_t ac = rb[0];
int64_t bc = 65;
int64_t cc = memory_base;
int64_t dc = cc + bc;
int64_t ec = 0;
fprintf(ac, dc, ec);
int64_t fc = 64;
int64_t* gc = e + fc;
stack_pointer = gc;
}

int legalfunc_polybench_alloc_data(long a, int b) {
return legalimport_polybench_alloc_data(i32_wrap_i64(a),
i32_wrap_i64(a >> 32L),
b)
}