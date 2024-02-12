

extern int64_t stack_pointer;
extern int64_t memory_base;
extern int64_t table_base;
extern int64_t stderr;

data ()rodata(offset memory_base) =
"begin ()dump %s\00path\00%d \00\0aend ()dump %s\0a\00==BEGIN DUMP_ARRA"
"YS==\0a\00==END DUMP_ARRAYS==\0a\00";









void wasm_call_ctors() {
}

void wasm_apply_data_relocs() {
}

void kernel_floyd_warshall(int a, int b) {
int64_t xb;
int64_t* c = stack_pointer;
int64_t d = 32;
int64_t * e = c - d;
e[7] = a;
e[6] = b;
int64_t f = 0;
e[3] = f;
while (1) {
int64_t g = e[3];
int64_t h = e[7];
int64_t i = g;
int64_t j = h;
int64_t k = i < j;
int64_t l = 1;
int64_t m = k & l;
if (eqz(m)) goto B_a;
int64_t n = 0;
e[5] = n;
while (1) {
int64_t o = e[5];
int64_t p = e[7];
int64_t q = o;
int64_t r = p;
int64_t s = q < r;
int64_t t = 1;
int64_t u = s & t;
if (eqz(u)) goto B_c;
int64_t v = 0;
e[4] = v;
while (1) {
int64_t w = e[4];
int64_t x = e[7];
int64_t y = w;
int64_t z = x;
int64_t aa = y < z;
int64_t ba = 1;
int64_t ca = aa & ba;
if (eqz(ca)) goto B_e;
int64_t da = e[6];
int64_t ea = e[5];
int64_t fa = 11200;
int64_t ga = ea * fa;
int64_t ha = da + ga;
int64_t ia = e[4];
int64_t ja = 2;
int64_t ka = ia << ja;
int64_t * la = ha + ka;
int64_t ma = la[0];
int64_t na = e[6];
int64_t oa = e[5];
int64_t pa = 11200;
int64_t qa = oa * pa;
int64_t ra = na + qa;
int64_t sa = e[3];
int64_t ta = 2;
int64_t ua = sa << ta;
int64_t * va = ra + ua;
int64_t wa = va[0];
int64_t xa = e[6];
int64_t ya = e[3];
int64_t za = 11200;
int64_t ab = ya * za;
int64_t bb = xa + ab;
int64_t cb = e[4];
int64_t db = 2;
int64_t eb = cb << db;
int64_t * fb = bb + eb;
int64_t gb = fb[0];
int64_t hb = wa + gb;
int64_t ib = ma;
int64_t jb = hb;
int64_t kb = ib < jb;
int64_t lb = 1;
int64_t mb = kb & lb;
if (eqz(mb)) goto B_h;
int64_t nb = e[6];
int64_t ob = e[5];
int64_t pb = 11200;
int64_t qb = ob * pb;
int64_t rb = nb + qb;
int64_t sb = e[4];
int64_t tb = 2;
int64_t ub = sb << tb;
int64_t * vb = rb + ub;
int64_t wb = vb[0];
xb = wb;
goto B_g;
B_h:;
int64_t yb = e[6];
int64_t zb = e[5];
int64_t ac = 11200;
int64_t bc = zb * ac;
int64_t cc = yb + bc;
int64_t dc = e[3];
int64_t ec = 2;
int64_t fc = dc << ec;
int64_t * gc = cc + fc;
int64_t hc = gc[0];
int64_t ic = e[6];
int64_t jc = e[3];
int64_t kc = 11200;
int64_t lc = jc * kc;
int64_t mc = ic + lc;
int64_t nc = e[4];
int64_t oc = 2;
int64_t pc = nc << oc;
int64_t * qc = mc + pc;
int64_t rc = qc[0];
int64_t sc = hc + rc;
xb = sc;
B_g:;
int64_t tc = xb;
int64_t uc = e[6];
int64_t vc = e[5];
int64_t wc = 11200;
int64_t xc = vc * wc;
int64_t yc = uc + xc;
int64_t zc = e[4];
int64_t ad = 2;
int64_t bd = zc << ad;
int64_t * cd = yc + bd;
cd[0] = tc;
int64_t dd = e[4];
int64_t ed = 1;
int64_t fd = dd + ed;
e[4] = fd;
//continue L_f;
}
//unreachable;
B_e:;
int64_t gd = e[5];
int64_t hd = 1;
int64_t id = gd + hd;
e[5] = id;
//continue L_d;
}
//unreachable;
B_c:;
int64_t jd = e[3];
int64_t kd = 1;
int64_t ld = jd + kd;
e[3] = ld;
//continue L_b;
}
//unreachable;
B_a:;
}

int submain(int a, int b) {
int64_t* c = stack_pointer;
int64_t d = 16;
{* e (int,)a (int,)b (int,)c (int64_t)d } = c - d;
stack_pointer = e;
e.d = a;
e.c = b;
int64_t f = 2800;
e.b = f;
long g = 7840000L;
int64_t h = 4;
int64_t i = legalfunc_polybench_alloc_data(g, h);
e.a = i;
int64_t j = e.b;
int64_t k = e.a;
init_array(j, k);
int64_t l = e.b;
int64_t m = e.a;
kernel_floyd_warshall(l, m);
int64_t n = e.d;
int64_t o = 42;
int64_t p = n;
int64_t q = o;
int64_t r = p > q;
int64_t s = 1;
int64_t t = r & s;
if (eqz(t)) goto B_a;
int64_t * u = e.c;
int64_t v = u[0];
int64_t w = 86;
int64_t x = memory_base;
int64_t y = x + w;
int64_t z = strcmp(v, y);
if (z) goto B_a;
int64_t aa = e.b;
int64_t ba = e.a;
print_array(aa, ba);
B_a:;
int64_t ca = e.a;
free(ca);
int64_t da = 0;
int64_t ea = 16;
int64_t* fa = e + ea;
stack_pointer = fa;
return da;
}

void init_array(int a, int b) {
int64_t* c = stack_pointer;
int64_t d = 16;
{* e (int,)a (int,)b (int,)c (int64_t)d } = c - d;
e.d = a;
e.c = b;
int64_t f = 0;
e.b = f;
while (1) {
int64_t g = e.b;
int64_t h = e.d;
int64_t i = g;
int64_t j = h;
int64_t k = i < j;
int64_t l = 1;
int64_t m = k & l;
if (eqz(m)) goto B_a;
int64_t n = 0;
e.a = n;
while (1) {
int64_t o = e.a;
int64_t p = e.d;
int64_t q = o;
int64_t r = p;
int64_t s = q < r;
int64_t t = 1;
int64_t u = s & t;
if (eqz(u)) goto B_c;
int64_t v = e.b;
int64_t w = e.a;
int64_t x = v * w;
int64_t y = 7;
int64_t z = x % y;
int64_t aa = 1;
int64_t ba = z + aa;
int64_t ca = e.c;
int64_t da = e.b;
int64_t ea = 11200;
int64_t fa = da * ea;
int64_t* ga = ca + fa;
int64_t ha = e.a;
int64_t ia = 2;
int64_t ja = ha << ia;
int64_t * ka = ga + ja;
ka[0] = ba;
int64_t la = e.b;
int64_t ma = e.a;
int64_t na = la + ma;
int64_t oa = 13;
int64_t pa = na % oa;
if (eqz(pa)) goto B_f;
int64_t qa = e.b;
int64_t ra = e.a;
int64_t sa = qa + ra;
int64_t ta = 7;
int64_t ua = sa % ta;
if (eqz(ua)) goto B_f;
int64_t va = e.b;
int64_t wa = e.a;
int64_t xa = va + wa;
int64_t ya = 11;
int64_t za = xa % ya;
if (za) goto B_e;
B_f:;
int64_t ab = e.c;
int64_t bb = e.b;
int64_t cb = 11200;
int64_t db = bb * cb;
int64_t eb = ab + db;
int64_t fb = e.a;
int64_t gb = 2;
int64_t hb = fb << gb;
int64_t * ib = eb + hb;
int64_t jb = 999;
ib[0] = jb;
B_e:;
int64_t kb = e.a;
int64_t lb = 1;
int64_t mb = kb + lb;
e.a = mb;
//continue L_d;
}
//unreachable;
B_c:;
int64_t nb = e.b;
int64_t ob = 1;
int64_t pb = nb + ob;
e.b = pb;
//continue L_b;
}
//unreachable;
B_a:;
}

void print_array(int a, int b) {
int64_t* c = stack_pointer;
int64_t d = 64;
int64_t * e = c - d;
stack_pointer = e;
e[15] = a;
e[14] = b;
int64_t * f = stderr;
int64_t g = f[0];
int64_t h = 41;
int64_t i = memory_base;
int64_t j = i + h;
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
int64_t u = e[13];
int64_t v = e[15];
int64_t w = u;
int64_t x = v;
int64_t y = w < x;
int64_t z = 1;
int64_t aa = y & z;
if (eqz(aa)) goto B_a;
int64_t ba = 0;
e[12] = ba;
while (1) {
int64_t ca = e[12];
int64_t da = e[15];
int64_t ea = ca;
int64_t fa = da;
int64_t* ga = ea < fa;
int64_t ha = 1;
int64_t* ia = ga & ha;
if (eqz(ia)) goto B_c;
int64_t ja = e[13];
int64_t ka = e[15];
int64_t* la = ja * ka;
int64_t ma = e[12];
int64_t* na = la + ma;
int64_t oa = 20;
int64_t* pa = na % oa;
if (pa) goto B_e;
int64_t * qa = stderr;
int64_t ra = qa[0];
int64_t sa = 85;
int64_t ta = memory_base;
int64_t ua = ta + sa;
int64_t va = 0;
fprintf(ra, ua, va);
B_e:;
int64_t * wa = stderr;
int64_t xa = wa[0];
int64_t ya = e[14];
int64_t za = e[13];
int64_t ab = 11200;
int64_t bb = za * ab;
int64_t cb = ya + bb;
int64_t db = e[12];
int64_t eb = 2;
int64_t fb = db << eb;
int64_t * gb = cb + fb;
int64_t hb = gb[0];
e[0] = hb;
int64_t ib = 20;
int64_t jb = memory_base;
int64_t kb = jb + ib;
fprintf(xa, kb, e);
int64_t lb = e[12];
int64_t mb = 1;
int64_t nb = lb + mb;
e[12] = nb;
//continue L_d;
}
//unreachable;
B_c:;
int64_t ob = e[13];
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
int64_t wb = 24;
int64_t xb = ub + wb;
int64_t yb = 16;
int64_t* zb = e + yb;
fprintf(sb, xb, zb);
int64_t ac = rb[0];
int64_t bc = 64;
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