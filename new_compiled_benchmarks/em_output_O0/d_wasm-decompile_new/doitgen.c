

extern int64_t stack_pointer;
extern int64_t memory_base;
extern int64_t table_base;
extern int64_t stderr;

data ()rodata(offset memory_base) =
"begin ()dump %s\00A\00%0.2lf \00\0aend ()dump %s\0a\00==BEGIN DUMP_ARR"
"AYS==\0a\00==END DUMP_ARRAYS==\0a\00";









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
//continue L_h;
}
//unreachable;
B_g:;
int64_t fc = i[3];
int64_t gc = 1;
int64_t hc = fc + gc;
i[3] = hc;
//continue L_f;
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
//continue L_j;
}
//unreachable;
B_i:;
int64_t md = i[4];
int64_t nd = 1;
int64_t od = md + nd;
i[4] = od;
//continue L_d;
}
//unreachable;
B_c:;
int64_t pd = i[5];
int64_t qd = 1;
int64_t rd = pd + qd;
i[5] = rd;
//continue L_b;
}
//unreachable;
B_a:;
}

int submain(int a, int b) {
int64_t* c = stack_pointer;
int64_t d = 32;
{ e (int,)a (int,)b (int,)c (int,)d (int,)e (int,)f (int,)g (int64_t)h } =
c - d;
stack_pointer = e;
e.h = a;
e.g = b;
int64_t f = 150;
e.f = f;
int64_t g = 140;
e.e = g;
int64_t h = 160;
e.d = h;
long i = 3360000L;
int64_t j = 8;
int64_t k = legalfunc_polybench_alloc_data(i, j);
e.c = k;
long l = 160L;
int64_t m = 8;
int64_t n = legalfunc_polybench_alloc_data(l, m);
e.b = n;
long o = 25600L;
int64_t p = 8;
int64_t q = legalfunc_polybench_alloc_data(o, p);
e.a = q;
int64_t r = e.f;
int64_t s = e.e;
int64_t t = e.d;
int64_t u = e.c;
int64_t v = e.a;
init_array(r, s, t, u, v);
int64_t w = e.f;
int64_t x = e.e;
int64_t y = e.d;
int64_t z = e.c;
int64_t aa = e.a;
int64_t ba = e.b;
kernel_doitgen(w, x, y, z, aa, ba);
int64_t ca = e.h;
int64_t da = 42;
int64_t ea = ca;
int64_t fa = da;
int64_t ga = ea > fa;
int64_t ha = 1;
int64_t ia = ga & ha;
if (eqz(ia)) goto B_a;
int64_t * ja = e.g;
int64_t ka = ja[0];
int64_t la = 87;
int64_t ma = memory_base;
int64_t na = ma + la;
int64_t oa = strcmp(ka, na);
if (oa) goto B_a;
int64_t pa = e.f;
int64_t qa = e.e;
int64_t ra = e.d;
int64_t sa = e.c;
print_array(pa, qa, ra, sa);
B_a:;
int64_t ta = e.c;
free(ta);
int64_t ua = e.b;
free(ua);
int64_t va = e.a;
free(va);
int64_t wa = 0;
int64_t xa = 32;
int64_t ya = e + xa;
stack_pointer = ya;
return wa;
}

void init_array(int a, int b, int c, int d, int e) {
int64_t* f = stack_pointer;
int64_t g = 32;
{ h (int,)a (int,)b (int,)c (int,)d (int,)e (int,)f (int,)g (int64_t)h } =
f - g;
h.h = a;
h.g = b;
h.f = c;
h.e = d;
h.d = e;
int64_t i = 0;
h.c = i;
while (1) {
int64_t j = h.c;
int64_t k = h.h;
int64_t l = j;
int64_t m = k;
int64_t n = l < m;
int64_t o = 1;
int64_t p = n & o;
if (eqz(p)) goto B_a;
int64_t q = 0;
h.b = q;
while (1) {
int64_t r = h.b;
int64_t s = h.g;
int64_t t = r;
int64_t u = s;
int64_t v = t < u;
int64_t w = 1;
int64_t x = v & w;
if (eqz(x)) goto B_c;
int64_t y = 0;
h.a = y;
while (1) {
int64_t z = h.a;
int64_t aa = h.f;
int64_t ba = z;
int64_t ca = aa;
int64_t da = ba < ca;
int64_t ea = 1;
int64_t fa = da & ea;
if (eqz(fa)) goto B_e;
int64_t ga = h.c;
int64_t ha = h.b;
int64_t ia = ga * ha;
int64_t ja = h.a;
int64_t ka = ia + ja;
int64_t la = h.f;
int64_t ma = ka % la;
double na = f64_convert_i32_s(ma);
int64_t oa = h.f;
double pa = f64_convert_i32_s(oa);
double qa = na / pa;
int64_t ra = h.e;
int64_t sa = h.c;
int64_t ta = 179200;
int64_t ua = sa * ta;
int64_t va = ra + ua;
int64_t wa = h.b;
int64_t xa = 1280;
int64_t ya = wa * xa;
int64_t za = va + ya;
int64_t ab = h.a;
int64_t bb = 3;
int64_t cb = ab << bb;
int64_t * db = za + cb;
db[0] = qa;
int64_t eb = h.a;
int64_t fb = 1;
int64_t gb = eb + fb;
h.a = gb;
//continue L_f;
}
//unreachable;
B_e:;
int64_t hb = h.b;
int64_t ib = 1;
int64_t jb = hb + ib;
h.b = jb;
//continue L_d;
}
//unreachable;
B_c:;
int64_t kb = h.c;
int64_t lb = 1;
int64_t mb = kb + lb;
h.c = mb;
//continue L_b;
}
//unreachable;
B_a:;
int64_t nb = 0;
h.c = nb;
while (1) {
int64_t ob = h.c;
int64_t pb = h.f;
int64_t qb = ob;
int64_t rb = pb;
int64_t sb = qb < rb;
int64_t tb = 1;
int64_t ub = sb & tb;
if (eqz(ub)) goto B_g;
int64_t vb = 0;
h.b = vb;
while (1) {
int64_t wb = h.b;
int64_t xb = h.f;
int64_t yb = wb;
int64_t zb = xb;
int64_t ac = yb < zb;
int64_t bc = 1;
int64_t cc = ac & bc;
if (eqz(cc)) goto B_i;
int64_t dc = h.c;
int64_t ec = h.b;
int64_t fc = dc * ec;
int64_t gc = h.f;
int64_t hc = fc % gc;
double ic = f64_convert_i32_s(hc);
int64_t jc = h.f;
double kc = f64_convert_i32_s(jc);
double lc = ic / kc;
int64_t mc = h.d;
int64_t nc = h.c;
int64_t oc = 1280;
int64_t pc = nc * oc;
int64_t qc = mc + pc;
int64_t rc = h.b;
int64_t sc = 3;
int64_t tc = rc << sc;
int64_t * uc = qc + tc;
uc[0] = lc;
int64_t vc = h.b;
int64_t wc = 1;
int64_t xc = vc + wc;
h.b = xc;
//continue L_j;
}
//unreachable;
B_i:;
int64_t yc = h.c;
int64_t zc = 1;
int64_t ad = yc + zc;
h.c = ad;
//continue L_h;
}
//unreachable;
B_g:;
}

void print_array(int a, int b, int c, int d) {
int64_t* e = stack_pointer;
int64_t f = 64;
int64_t* g = e - f;
stack_pointer = g;
g[15] = a;
g[14] = b;
g[13] = c;
g[12] = d;
int64_t * h = stderr;
int64_t i = h[0];
int64_t j = 42;
int64_t k = memory_base;
int64_t l = k + j;
int64_t m = 0;
fprintf(i, l, m);
int64_t n = h[0];
int64_t o = 15;
int64_t p = memory_base;
int64_t q = p + o;
g[8] = q;
int64_t r = 0;
int64_t s = p + r;
int64_t t = 32;
int64_t* u = g + t;
fprintf(n, s, u);
int64_t v = 0;
g[11] = v;
while (1) {
int64_t w = (int64_t)g[11];
int64_t x = (int64_t)g[15];
int64_t y = w;
int64_t z = x;
int64_t aa = y < z;
int64_t ba = 1;
int64_t ca = aa & ba;
if (eqz(ca)) goto B_a;
int64_t da = 0;
g[10] = da;
while (1) {
int64_t ea = (int64_t)g[10];
int64_t fa = (int64_t)g[14];
int64_t ga = ea;
int64_t ha = fa;
int64_t ia = ga < ha;
int64_t ja = 1;
int64_t ka = ia & ja;
if (eqz(ka)) goto B_c;
int64_t la = 0;
g[9] = la;
while (1) {
int64_t ma = (int64_t)g[9];
int64_t na = (int64_t)g[13];
int64_t oa = ma;
int64_t pa = na;
int64_t qa = oa < pa;
int64_t ra = 1;
int64_t sa = qa & ra;
if (eqz(sa)) goto B_e;
int64_t ta = (int64_t)g[11];
int64_t ua = (int64_t)g[14];
int64_t va = ta * ua;
int64_t wa = (int64_t)g[13];
int64_t xa = va * wa;
int64_t ya = (int64_t)g[10];
int64_t za = (int64_t)g[13];
int64_t ab = ya * za;
int64_t bb = xa + ab;
int64_t cb = (int64_t)g[9];
int64_t db = bb + cb;
int64_t eb = 20;
int64_t fb = db % eb;
if (fb) goto B_g;
int64_t * gb = stderr;
int64_t hb = gb[0];
int64_t ib = 86;
int64_t jb = memory_base;
int64_t kb = jb + ib;
int64_t lb = 0;
fprintf(hb, kb, lb);
B_g:;
int64_t * mb = stderr;
int64_t nb = mb[0];
int64_t ob = (int64_t)g[12];
int64_t pb = (int64_t)g[11];
int64_t qb = 179200;
int64_t rb = pb * qb;
int64_t sb = ob + rb;
int64_t tb = (int64_t)g[10];
int64_t ub = 1280;
int64_t vb = tb * ub;
int64_t wb = sb + vb;
int64_t xb = (int64_t)g[9];
int64_t yb = 3;
int64_t zb = xb << yb;
int64_t * ac = wb + zb;
double bc = ac[0];
g[0] = bc;
int64_t cc = 17;
int64_t dc = memory_base;
int64_t ec = dc + cc;
fprintf(nb, ec, g);
int64_t fc = (int64_t)g[9];
int64_t gc = 1;
int64_t hc = fc + gc;
g[9] = hc;
//continue L_f;
}
//unreachable;
B_e:;
int64_t ic = (int64_t)g[10];
int64_t jc = 1;
int64_t kc = ic + jc;
g[10] = kc;
//continue L_d;
}
//unreachable;
B_c:;
int64_t lc = (int64_t)g[11];
int64_t mc = 1;
int64_t nc = lc + mc;
g[11] = nc;
//continue L_b;
}
//unreachable;
B_a:;
int64_t * oc = stderr;
int64_t pc = oc[0];
int64_t qc = 15;
int64_t rc = memory_base;
int64_t sc = rc + qc;
g[4] = sc;
int64_t tc = 25;
int64_t uc = rc + tc;
int64_t vc = 16;
int64_t* wc = g + vc;
fprintf(pc, uc, wc);
int64_t xc = oc[0];
int64_t yc = 65;
int64_t zc = memory_base;
int64_t ad = zc + yc;
int64_t bd = 0;
fprintf(xc, ad, bd);
int64_t cd = 64;
int64_t* dd = g + cd;
stack_pointer = dd;
}

int legalfunc_polybench_alloc_data(long a, int b) {
return legalimport_polybench_alloc_data(i32_wrap_i64(a),
i32_wrap_i64(a >> 32L),
b)
}