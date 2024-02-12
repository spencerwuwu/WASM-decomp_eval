

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

void kernel_syrk(int a, int b, double c, double d, int e, int f) {
int64_t* g = stack_pointer;
int64_t h = 48;
int64_t* i = g - h;
i[11] = a;
i[10] = b;
i[4] = c;
i[3] = d;
i[5] = e;
i[4] = f;
int64_t j = 0;
i[3] = j;
while (1) {
int64_t k = (int64_t)i[3];
int64_t l = (int64_t)i[11];
int64_t m = k;
int64_t n = l;
int64_t o = m < n;
int64_t p = 1;
int64_t q = o & p;
if (eqz(q)) goto B_a;
int64_t r = 0;
i[2] = r;
while (1) {
int64_t s = (int64_t)i[2];
int64_t t = (int64_t)i[3];
int64_t u = s;
int64_t v = t;
int64_t w = u <= v;
int64_t x = 1;
int64_t y = w & x;
if (eqz(y)) goto B_c;
double z = (double)i[3];
int64_t aa = (int64_t)i[5];
int64_t ba = (int64_t)i[3];
int64_t ca = 9600;
int64_t da = ba * ca;
int64_t ea = aa + da;
int64_t fa = (int64_t)i[2];
int64_t ga = 3;
int64_t ha = fa << ga;
int64_t * ia = ea + ha;
double ja = ia[0];
double ka = ja * z;
ia[0] = ka;
int64_t la = (int64_t)i[2];
int64_t ma = 1;
int64_t na = la + ma;
i[2] = na;
//continue L_d;
}
//unreachable;
B_c:;
int64_t oa = 0;
i[1] = oa;
while (1) {
int64_t pa = (int64_t)i[1];
int64_t qa = (int64_t)i[10];
int64_t ra = pa;
int64_t sa = qa;
int64_t ta = ra < sa;
int64_t ua = 1;
int64_t va = ta & ua;
if (eqz(va)) goto B_e;
int64_t wa = 0;
i[2] = wa;
while (1) {
int64_t xa = (int64_t)i[2];
int64_t ya = (int64_t)i[3];
int64_t za = xa;
int64_t ab = ya;
int64_t bb = za <= ab;
int64_t cb = 1;
int64_t db = bb & cb;
if (eqz(db)) goto B_g;
double eb = (double)i[4];
int64_t fb = (int64_t)i[4];
int64_t gb = (int64_t)i[3];
int64_t hb = 8000;
int64_t ib = gb * hb;
int64_t jb = fb + ib;
int64_t kb = (int64_t)i[1];
int64_t lb = 3;
int64_t mb = kb << lb;
int64_t * nb = jb + mb;
double ob = nb[0];
double pb = eb * ob;
int64_t qb = (int64_t)i[4];
int64_t rb = (int64_t)i[2];
int64_t sb = 8000;
int64_t tb = rb * sb;
int64_t ub = qb + tb;
int64_t vb = (int64_t)i[1];
int64_t wb = 3;
int64_t xb = vb << wb;
int64_t * yb = ub + xb;
double zb = yb[0];
int64_t ac = (int64_t)i[5];
int64_t bc = (int64_t)i[3];
int64_t cc = 9600;
int64_t dc = bc * cc;
int64_t ec = ac + dc;
int64_t fc = (int64_t)i[2];
int64_t gc = 3;
int64_t hc = fc << gc;
int64_t * ic = ec + hc;
double jc = ic[0];
double kc = pb * zb;
double lc = kc + jc;
ic[0] = lc;
int64_t mc = (int64_t)i[2];
int64_t nc = 1;
int64_t oc = mc + nc;
i[2] = oc;
//continue L_h;
}
//unreachable;
B_g:;
int64_t pc = (int64_t)i[1];
int64_t qc = 1;
int64_t rc = pc + qc;
i[1] = rc;
//continue L_f;
}
//unreachable;
B_e:;
int64_t sc = (int64_t)i[3];
int64_t tc = 1;
int64_t uc = sc + tc;
i[3] = uc;
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
int64_t n = (int64_t)e[9];
int64_t o = (int64_t)e[8];
int64_t p = (int64_t)e[3];
int64_t q = (int64_t)e[2];
int64_t r = 24;
int64_t* s = e + r;
int64_t* t = s;
int64_t u = 16;
int64_t* v = e + u;
int64_t* w = v;
init_array(n, o, t, w, p, q);
int64_t x = (int64_t)e[9];
int64_t y = (int64_t)e[8];
double z = (double)e[3];
double aa = (double)e[2];
int64_t ba = (int64_t)e[3];
int64_t ca = (int64_t)e[2];
kernel_syrk(x, y, z, aa, ba, ca);
int64_t da = (int64_t)e[11];
int64_t ea = 42;
int64_t fa = da;
int64_t ga = ea;
int64_t ha = fa > ga;
int64_t ia = 1;
int64_t ja = ha & ia;
if (eqz(ja)) goto B_a;
int64_t * ka = (int64_t)e[10];
int64_t la = ka[0];
int64_t ma = 87;
int64_t na = memory_base;
int64_t oa = na + ma;
int64_t pa = strcmp(la, oa);
if (pa) goto B_a;
int64_t qa = (int64_t)e[9];
int64_t ra = (int64_t)e[3];
print_array(qa, ra);
B_a:;
int64_t sa = (int64_t)e[3];
free(sa);
int64_t ta = (int64_t)e[2];
free(ta);
int64_t ua = 0;
int64_t va = 48;
int64_t* wa = e + va;
stack_pointer = wa;
return ua;
}

void init_array(int a, int b, int c, int d, int e, int f) {
int64_t* g = stack_pointer;
int64_t h = 32;
{ i (int,)a (int,)b (int,)c (int,)d (int,)e (int,)f (int,)g (int64_t)h } =
g - h;
i.h = a;
i.g = b;
i.f = c;
i.e = d;
i.d = e;
i.c = f;
int64_t * j = i.f;
double k = 1.5;
j[0] = k;
int64_t * l = i.e;
double m = 1.2;
l[0] = m;
int64_t n = 0;
i.b = n;
while (1) {
int64_t o = i.b;
int64_t p = i.h;
int64_t q = o;
int64_t r = p;
int64_t s = q < r;
int64_t t = 1;
int64_t* u = s & t;
if (eqz(u)) goto B_a;
int64_t v = 0;
i.a = v;
while (1) {
int64_t w = i.a;
int64_t x = i.g;
int64_t* y = w;
int64_t z = x;
int64_t* aa = y < z;
int64_t ba = 1;
int64_t* ca = aa & ba;
if (eqz(ca)) goto B_c;
int64_t da = i.b;
int64_t ea = i.a;
int64_t fa = da * ea;
int64_t ga = 1;
int64_t ha = fa + ga;
int64_t ia = i.h;
int64_t ja = ha % ia;
double ka = f64_convert_i32_s(ja);
int64_t la = i.h;
double ma = f64_convert_i32_s(la);
double na = ka / ma;
int64_t oa = i.c;
int64_t pa = i.b;
int64_t qa = 8000;
int64_t ra = pa * qa;
int64_t sa = oa + ra;
int64_t ta = i.a;
int64_t ua = 3;
int64_t va = ta << ua;
int64_t * wa = sa + va;
wa[0] = na;
int64_t xa = i.a;
int64_t ya = 1;
int64_t za = xa + ya;
i.a = za;
//continue L_d;
}
//unreachable;
B_c:;
int64_t ab = i.b;
int64_t bb = 1;
int64_t cb = ab + bb;
i.b = cb;
//continue L_b;
}
//unreachable;
B_a:;
int64_t db = 0;
i.b = db;
while (1) {
int64_t eb = i.b;
int64_t fb = i.h;
int64_t gb = eb;
int64_t hb = fb;
int64_t ib = gb < hb;
int64_t jb = 1;
int64_t kb = ib & jb;
if (eqz(kb)) goto B_e;
int64_t lb = 0;
i.a = lb;
while (1) {
int64_t mb = i.a;
int64_t nb = i.h;
int64_t ob = mb;
int64_t pb = nb;
int64_t qb = ob < pb;
int64_t rb = 1;
int64_t sb = qb & rb;
if (eqz(sb)) goto B_g;
int64_t tb = i.b;
int64_t ub = i.a;
int64_t vb = tb * ub;
int64_t wb = 2;
int64_t xb = vb + wb;
int64_t yb = i.g;
int64_t zb = xb % yb;
double ac = f64_convert_i32_s(zb);
int64_t bc = i.g;
double cc = f64_convert_i32_s(bc);
double dc = ac / cc;
int64_t ec = i.d;
int64_t fc = i.b;
int64_t gc = 9600;
int64_t hc = fc * gc;
int64_t ic = ec + hc;
int64_t jc = i.a;
int64_t kc = 3;
int64_t lc = jc << kc;
int64_t * mc = ic + lc;
mc[0] = dc;
int64_t nc = i.a;
int64_t oc = 1;
int64_t pc = nc + oc;
i.a = pc;
//continue L_h;
}
//unreachable;
B_g:;
int64_t qc = i.b;
int64_t rc = 1;
int64_t sc = qc + rc;
i.b = sc;
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
int64_t* w = u;
int64_t* x = v;
int64_t* y = w < x;
int64_t z = 1;
int64_t* aa = y & z;
if (eqz(aa)) goto B_a;
int64_t ba = 0;
e[12] = ba;
while (1) {
int64_t ca = (int64_t)e[12];
int64_t da = (int64_t)e[15];
int64_t* ea = ca;
int64_t fa = da;
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
int64_t fb = db << eb;
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