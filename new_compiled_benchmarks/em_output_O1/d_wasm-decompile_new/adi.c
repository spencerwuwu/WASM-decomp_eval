

extern int64_t stack_pointer;
extern int64_t memory_base;
extern int64_t table_base;
extern int64_t stderr;

data ()rodata(offset memory_base) =
"u\00begin ()dump %s\00%0.2lf \00\0aend ()dump %s\0a\00==BEGIN DUMP_ARR"
"AYS==\0a\00==END DUMP_ARRAYS==\0a\00";













void wasm_call_ctors() {
}

void wasm_apply_data_relocs() {
}

void init_array(int a, int b) {
int64_t g;
if (a < 1) goto B_a;
double c = f64_convert_i32_s(a);
int64_t d = 0;
while (1) {
int64_t e = d;
int64_t f = e + a;
d = 0;
while (1) {
(b + e * 8000)[d = (double)d] = f64_convert_i32_s(f - d) / c;
g = d + 1;
d = g;
if (g != a) //continue L_c;
}
g = e + 1;
d = g;
if (g != a) //continue L_b;
}
B_a:;
}

void print_array(int a, int b) {
int64_t e;
int64_t h;
int64_t* c = stack_pointer - 48;
stack_pointer = c;
int64_t d = memory_base;
fwrite(d + 42, 22, 1, e = (int))stderr[0];
c[8] = d + 0;
fiprintf(e, d + 2, c + 32);
if (a < 1) goto B_a;
d = 0;
while (1) {
int64_t f = d;
int64_t g = f * a;
d = 0;
while (1) {
d = d;
if ((d + g) % 20) goto B_d;
fputc(10, e);
B_d:;
c[2] = (b + f * (double)8000)[d];
small_fprintf(e, memory_base + 17, c + 16);
h = d + 1;
d = h;
if (h != a) //continue L_c;
}
h = f + 1;
d = h;
if (h != a) //continue L_b;
}
B_a:;
c[0] = (d = memory_base) + 0;
fiprintf(e, d + 25, c);
fwrite(d + 65, 22, 1, e);
stack_pointer = c + 48;
}

void kernel_adi(int a, int b, int c, int d, int e, int f) {
double h;
int64_t x;
int64_t y;
int64_t aa;
int64_t da;
int64_t ea;
int64_t * fa;
double ha;
int64_t * ca;
int64_t z;
int64_t ba;
int64_t * ia;
double ga;
if (a < 1) goto B_a;
double g = 1.0 / f64_convert_i32_s(a);
double i = g / (h = (h = 1.0 / f64_convert_i32_s(b)) * h);
double j = i + 1.0;
g = (g + g) / h;
double k = g + 1.0;
int64_t l = b + -1;
int64_t m = (b << 3) + 7992;
double n = g * -0.5;
double o = n + n + 1.0;
double p = i * -0.5;
double q = p + p + 1.0;
g = -(n);
h = -(p);
int64_t r = b + -2;
int64_t s = r;
int64_t t = b > 2;
int64_t * u = 1;
while (1) {
int64_t v = u;
int64_t * w = 0;
u = 1;
if (eqz(t)) goto B_c;
while (1) {
z = d + (y = (x = u) << 3);
z[0] = 4607182418800017408L;
u = e + (aa = x * 8000);
u[0] = 0L;
aa = f + aa;
aa[0] = (double)z[0];
ba = x + 1;
ca = x + -1;
z = f + (ea = (w = (da = w) * 8000) + 8000);
fa = e + ea;
if (fa >= f + (ea = m + w)) goto B_f;
w = 1;
if (z >= e + ea) goto B_f;
while (1) {
(u + (z = (w = w) << (double)3))[0] =
g / (i = n * (u + (ea = z + (double)-8))[0] + k);
(aa + (double)z)[0] =
(g * (aa + (double)ea)[0] +
h * (z = c + w * (double)8000)[ba] +
h * (double)z[ca] + q * (z + (double))y)[0] /
i;
z = w + 1;
w = z;
if (z != l) //continue L_g;
goto B_e;
}
//unreachable;
B_f:;
i = (double)z[0];
ga = fa[0];
w = 1;
while (1) {
(u + (z = (w = w) << (double)3))[0] = (ha = g / (ga = n * ga + k));
(aa + (double)z)[0] =
(i = (g * i +
h * (z = c + w * (double)8000)[ba] +
h * (double)z[ca] + q * (z + (double))y)[0] /
ga);
i = i;
ga = ha;
z = w + 1;
w = z;
if (z != l) //continue L_h;
}
B_e:;
(d + l * 8000 + y)[0] = 4607182418800017408L;
z = s;
if (b < 3) goto B_i;
while (1) {
z = d + (w = z) * 8000 + y;
(double)z[0] =
(u + (ba = w << (double)3))[0] * (z + (double)8000)[0] +
(aa + (double)ba)[0];
z = w + -1;
if (w > 1) //continue L_j;
}
B_i:;
w = da + 1;
aa = x + 1;
u = aa;
if (aa != l) //continue L_d;
}
B_c:;
u = 0;
aa = 1;
if (eqz(t)) goto B_k;
while (1) {
x = c + (y = (da = aa) * 8000);
x[0] = 4607182418800017408L;
aa = e + y;
aa[0] = 0L;
w = f + y;
w[0] = (double)x[0];
z = da + 1;
ba = da + -1;
ca = f + (ea = (u = (fa = u) * 8000) + 8000);
ia = e + ea;
if (ia >= f + (ea = m + u)) goto B_n;
u = 1;
if (ca >= e + ea) goto B_n;
while (1) {
(aa + (u = (ca = u) << (double)3))[0] =
h / (i = p * (aa + (ea = u + (double)-8))[0] + j);
(w + (double)u)[0] =
(h * (w + (double)ea)[0] +
g * (d + z * 8000 + (double)u)[0] +
g * (d + ba * 8000 + (double)u)[0] + o * (d + y + (double))u)[0] /
i;
ca = ca + 1;
u = ca;
if (ca != l) //continue L_o;
goto B_m;
}
//unreachable;
B_n:;
i = ca[0];
ga = ia[0];
u = 1;
while (1) {
(aa + (u = (ca = u) << (double)3))[0] = (ha = h / (ga = p * ga + j));
(w + (double)u)[0] =
(i = (h * i +
g * (d + z * 8000 + (double)u)[0] +
g * (d + ba * 8000 + (double)u)[0] + o * (d + y + (double))u)[0] /
ga);
i = i;
ga = ha;
ca = ca + 1;
u = ca;
if (ca != l) //continue L_p;
}
B_m:;
x[l] = 4607182418800017408L;
y = r;
if (b < 3) goto B_q;
while (1) {
z = x + (y = (u = y) << 3);
(double)z[0] =
(aa + (double)y)[0] * (z + (double)8)[0] + (w + (double)y)[0];
y = u + -1;
if (u > 1) //continue L_r;
}
B_q:;
u = fa + 1;
w = da + 1;
aa = w;
if (w != l) //continue L_l;
}
B_k:;
u = v + 1;
if (v != a) //continue L_b;
}
B_a:;
}

int submain(int a, int_ptr b) {
int64_t j;
int64_t c = legalfunc_polybench_alloc_data(1000000L, 8);
int64_t d = legalfunc_polybench_alloc_data(1000000L, 8);
int64_t e = legalfunc_polybench_alloc_data(1000000L, 8);
int64_t f = legalfunc_polybench_alloc_data(1000000L, 8);
int64_t g = 0;
while (1) {
int64_t h = g;
int64_t i = h + 1000;
g = 0;
while (1) {
(c + h * 8000)[g = (double)g] = f64_convert_i32_s(i - g) / 1000.0;
j = g + 1;
g = j;
if (j != 1000) //continue L_b;
}
j = h + 1;
g = j;
if (j != 1000) //continue L_a;
}
kernel_adi(500, 1000, c, d, e, f);
if (a < 43) goto B_c;
if (ubyte))((b[0])[0] goto B_c;
print_array(1000, c);
B_c:;
free(c);
free(d);
free(e);
free(f);
return 0;
}

int legalfunc_polybench_alloc_data(long a, int b) {
return legalimport_polybench_alloc_data(i32_wrap_i64(a),
i32_wrap_i64(a >> 32L),
b)
}