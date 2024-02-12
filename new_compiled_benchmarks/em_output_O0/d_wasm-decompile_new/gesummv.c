

extern int64_t stack_pointer;
extern int64_t memory_base;
extern int64_t table_base;
extern int64_t stderr;

data ()rodata(offset memory_base) =
"y\00begin ()dump %s\00%0.2lf \00\0aend ()dump %s\0a\00==BEGIN DUMP_ARR"
"AYS==\0a\00==END DUMP_ARRAYS==\0a\00";









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
//continue L_d;
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
//continue L_b;
}
//unreachable;
B_a:;
}

int submain(int a, int b) {
int64_t* c = stack_pointer;
int64_t d = 64;
int64_t* e = c - d;
stack_pointer = e;
e[15] = a;
e[14] = b;
int64_t f = 1300;
e[13] = f;
long g = 1690000L;
int64_t h = 8;
int64_t i = legalfunc_polybench_alloc_data(g, h);
e[7] = i;
long j = 1690000L;
int64_t k = 8;
int64_t l = legalfunc_polybench_alloc_data(j, k);
e[6] = l;
long m = 1300L;
int64_t n = 8;
int64_t o = legalfunc_polybench_alloc_data(m, n);
e[5] = o;
long p = 1300L;
int64_t q = 8;
int64_t r = legalfunc_polybench_alloc_data(p, q);
e[4] = r;
long s = 1300L;
int64_t t = 8;
int64_t u = legalfunc_polybench_alloc_data(s, t);
e[3] = u;
int64_t v = (int64_t)e[13];
int64_t w = (int64_t)e[7];
int64_t x = (int64_t)e[6];
int64_t y = (int64_t)e[4];
int64_t z = 40;
int64_t* aa = e + z;
int64_t* ba = aa;
int64_t ca = 32;
int64_t* da = e + ca;
int64_t* ea = da;
init_array(v, ba, ea, w, x, y);
int64_t fa = (int64_t)e[13];
double ga = (double)e[5];
double ha = (double)e[4];
int64_t ia = (int64_t)e[7];
int64_t ja = (int64_t)e[6];
int64_t ka = (int64_t)e[5];
int64_t la = (int64_t)e[4];
int64_t ma = (int64_t)e[3];
kernel_gesummv(fa, ga, ha, ia, ja, ka, la, ma);
int64_t na = (int64_t)e[15];
int64_t oa = 42;
int64_t pa = na;
int64_t qa = oa;
int64_t ra = pa > qa;
int64_t sa = 1;
int64_t ta = ra & sa;
if (eqz(ta)) goto B_a;
int64_t * ua = (int64_t)e[14];
int64_t va = ua[0];
int64_t wa = 87;
int64_t xa = memory_base;
int64_t ya = xa + wa;
int64_t za = strcmp(va, ya);
if (za) goto B_a;
int64_t ab = (int64_t)e[13];
int64_t bb = (int64_t)e[3];
print_array(ab, bb);
B_a:;
int64_t cb = (int64_t)e[7];
free(cb);
int64_t db = (int64_t)e[6];
free(db);
int64_t eb = (int64_t)e[5];
free(eb);
int64_t fb = (int64_t)e[4];
free(fb);
int64_t gb = (int64_t)e[3];
free(gb);
int64_t hb = 0;
int64_t ib = 64;
int64_t* jb = e + ib;
stack_pointer = jb;
return hb;
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
int64_t * j = i.g;
double k = 1.5;
j[0] = k;
int64_t * l = i.f;
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
int64_t u = s & t;
if (eqz(u)) goto B_a;
int64_t v = i.b;
int64_t w = i.h;
int64_t x = v % w;
double y = f64_convert_i32_s(x);
int64_t z = i.h;
double aa = f64_convert_i32_s(z);
double* ba = y / aa;
int64_t ca = i.c;
int64_t da = i.b;
int64_t ea = 3;
int64_t* fa = da << ea;
int64_t * ga = ca + fa;
ga[0] = ba;
int64_t ha = 0;
i.a = ha;
while (1) {
int64_t ia = i.a;
int64_t ja = i.h;
int64_t ka = ia;
int64_t la = ja;
int64_t ma = ka < la;
int64_t na = 1;
int64_t oa = ma & na;
if (eqz(oa)) goto B_c;
int64_t pa = i.b;
int64_t qa = i.a;
int64_t ra = pa * qa;
int64_t sa = 1;
int64_t ta = ra + sa;
int64_t ua = i.h;
int64_t va = ta % ua;
double wa = f64_convert_i32_s(va);
int64_t xa = i.h;
double ya = f64_convert_i32_s(xa);
double za = wa / ya;
int64_t ab = i.e;
int64_t bb = i.b;
int64_t cb = 10400;
int64_t db = bb * cb;
int64_t eb = ab + db;
int64_t fb = i.a;
int64_t gb = 3;
int64_t hb = fb << gb;
int64_t * ib = eb + hb;
ib[0] = za;
int64_t jb = i.b;
int64_t kb = i.a;
int64_t* lb = jb * kb;
int64_t mb = 2;
int64_t* nb = lb + mb;
int64_t ob = i.h;
int64_t* pb = nb % ob;
double qb = f64_convert_i32_s(pb);
int64_t rb = i.h;
double sb = f64_convert_i32_s(rb);
double tb = qb / sb;
int64_t ub = i.d;
int64_t vb = i.b;
int64_t wb = 10400;
int64_t xb = vb * wb;
int64_t yb = ub + xb;
int64_t zb = i.a;
int64_t ac = 3;
int64_t bc = zb << ac;
int64_t * cc = yb + bc;
cc[0] = tb;
int64_t dc = i.a;
int64_t ec = 1;
int64_t fc = dc + ec;
i.a = fc;
//continue L_d;
}
//unreachable;
B_c:;
int64_t gc = i.b;
int64_t hc = 1;
int64_t ic = gc + hc;
i.b = ic;
//continue L_b;
}
//unreachable;
B_a:;
}

void print_array(int a, int b) {
int64_t* c = stack_pointer;
int64_t d = 48;
int64_t* e = c - d;
stack_pointer = e;
e[11] = a;
e[10] = b;
int64_t * f = stderr;
int64_t g = f[0];
int64_t h = 42;
int64_t i = memory_base;
int64_t* j = i + h;
int64_t k = 0;
fprintf(g, j, k);
int64_t l = f[0];
int64_t m = 0;
int64_t n = memory_base;
int64_t o = n + m;
e[8] = o;
int64_t p = 2;
int64_t q = n + p;
int64_t r = 32;
int64_t* s = e + r;
fprintf(l, q, s);
int64_t t = 0;
e[9] = t;
while (1) {
int64_t u = (int64_t)e[9];
int64_t v = (int64_t)e[11];
int64_t w = u;
int64_t x = v;
int64_t y = w < x;
int64_t z = 1;
int64_t aa = y & z;
if (eqz(aa)) goto B_a;
int64_t ba = (int64_t)e[9];
int64_t ca = 20;
int64_t* da = ba % ca;
if (da) goto B_c;
int64_t * ea = stderr;
int64_t fa = ea[0];
int64_t ga = 86;
int64_t ha = memory_base;
int64_t* ia = ha + ga;
int64_t ja = 0;
fprintf(fa, ia, ja);
B_c:;
int64_t * ka = stderr;
int64_t la = ka[0];
int64_t ma = (int64_t)e[10];
int64_t na = (int64_t)e[9];
int64_t oa = 3;
int64_t pa = na << oa;
int64_t * qa = ma + pa;
double ra = qa[0];
e[0] = ra;
int64_t sa = 17;
int64_t ta = memory_base;
int64_t ua = ta + sa;
fprintf(la, ua, e);
int64_t va = (int64_t)e[9];
int64_t wa = 1;
int64_t xa = va + wa;
e[9] = xa;
//continue L_b;
}
//unreachable;
B_a:;
int64_t * ya = stderr;
int64_t za = ya[0];
int64_t ab = 0;
int64_t bb = memory_base;
int64_t cb = bb + ab;
e[4] = cb;
int64_t db = 25;
int64_t eb = bb + db;
int64_t fb = 16;
int64_t* gb = e + fb;
fprintf(za, eb, gb);
int64_t hb = ya[0];
int64_t ib = 65;
int64_t jb = memory_base;
int64_t* kb = jb + ib;
int64_t lb = 0;
fprintf(hb, kb, lb);
int64_t mb = 48;
int64_t* nb = e + mb;
stack_pointer = nb;
}

int legalfunc_polybench_alloc_data(long a, int b) {
return legalimport_polybench_alloc_data(i32_wrap_i64(a),
i32_wrap_i64(a >> 32L),
b)
}