

extern int64_t stack_pointer;
extern int64_t memory_base;
extern int64_t table_base;
extern int64_t stderr;

data ()rodata(offset memory_base) =
"w\00begin ()dump %s\00%0.2lf \00\0aend ()dump %s\0a\00==BEGIN DUMP_ARR"
"AYS==\0a\00==END DUMP_ARRAYS==\0a\00";













void wasm_call_ctors() {
}

void wasm_apply_data_relocs() {
}

void kernel_gemver(int a, double b, double c, int d, int e, int f, int g, int h, int i, int j, int k, int l) {
int64_t * n;
int64_t q;
int64_t m;
int64_t * r;
int64_t * o;
double s;
if (a < 1) goto B_a;
m = 0;
while (1) {
o = g + (m = (n = m) << 3);
int64_t * p = e + m;
m = 0;
while (1) {
r = d + n * 16000 + (m = (q = m) << 3);
r[0] = o[0] * (h + (double)m)[0] + p[0] * (f + (double)m)[0] + r[0];
q = q + 1;
m = q;
if (q != a) //continue L_c;
}
q = n + 1;
m = q;
if (q != a) //continue L_b;
}
B_a:;
if (a <= 0) goto B_d;
m = 0;
while (1) {
r = j + (n = (o = m) << 3);
s = r[0];
m = 0;
while (1) {
r[0] =
(s = (d + (m = m) * 16000 + (double)n)[0] * c * (double)k[m] + s);
s = s;
q = m + 1;
m = q;
if (q != a) //continue L_f;
}
q = o + 1;
m = q;
if (q != a) //continue L_e;
}
B_d:;
if (a <= 0) goto B_g;
m = 0;
while (1) {
r = j + (q = (m = m) << 3);
r[0] = r[0] + (l + (double)q)[0];
q = m + 1;
m = q;
if (q != a) //continue L_h;
}
B_g:;
if (a <= 0) goto B_i;
m = 0;
while (1) {
n = i + ((r = m) << 3);
s = n[0];
m = 0;
while (1) {
n[0] =
(s = (d + r * 16000 + (q = (m = m) << (double)3))[0] * b *
(j + (double)q)[0] +
s);
s = s;
q = m + 1;
m = q;
if (q != a) //continue L_k;
}
q = r + 1;
m = q;
if (q != a) //continue L_j;
}
B_i:;
}

int submain(int a, int_ptr b) {
int64_t n;
int64_t * o;
double p;
int64_t * q;
int64_t * r;
int64_t* c = stack_pointer - 48;
stack_pointer = c;
int64_t d = legalfunc_polybench_alloc_data(4000000L, 8);
int64_t e = legalfunc_polybench_alloc_data(2000L, 8);
int64_t f = legalfunc_polybench_alloc_data(2000L, 8);
int64_t g = legalfunc_polybench_alloc_data(2000L, 8);
int64_t h = legalfunc_polybench_alloc_data(2000L, 8);
int64_t i = legalfunc_polybench_alloc_data(2000L, 8);
int64_t j = legalfunc_polybench_alloc_data(2000L, 8);
int64_t k = legalfunc_polybench_alloc_data(2000L, 8);
int64_t l = legalfunc_polybench_alloc_data(2000L, 8);
int64_t m = 0;
while (1) {
(e + (m = (n = m) << (double)3))[0] = f64_convert_i32_s(n);
(g + m)[0] = (p = f64_convert_i32_s(o = n + 1) / 2000.0) * 0.5;
(f + m)[0] = p * 0.25;
(h + m)[0] = p / 6.0;
(k + m)[0] = p * 0.125;
(l + m)[0] = p / 9.0;
(j + m)[0] = 0L;
(i + m)[0] = 0L;
m = 0;
while (1) {
(d + n * 16000)[m = (double)m] =
f64_convert_i32_s(m * n % 2000) / 2000.0;
q = m + 1;
m = q;
if (q != 2000) //continue L_b;
}
m = o;
if (o != 2000) //continue L_a;
}
m = 0;
while (1) {
r = g + (m = (o = m) << 3);
int64_t * s = e + m;
m = 0;
while (1) {
q = d + o * 16000 + (m = (n = m) << 3);
q[0] = r[0] * (h + (double)m)[0] + s[0] * (f + (double)m)[0] + q[0];
n = n + 1;
m = n;
if (n != 2000) //continue L_d;
}
n = o + 1;
m = n;
if (n != 2000) //continue L_c;
}
m = 0;
while (1) {
o = j + (q = (r = m) << 3);
p = o[0];
m = 0;
while (1) {
o[0] =
(p = (d + (m = m) * 16000 + (double)q)[0] * 1.2 * (double)k[m] + p);
p = p;
n = m + 1;
m = n;
if (n != 2000) //continue L_f;
}
n = r + 1;
m = n;
if (n != 2000) //continue L_e;
}
m = 0;
while (1) {
q = j + (n = (m = m) << 3);
q[0] = q[0] + (l + (double)n)[0];
n = m + 1;
m = n;
if (n != 2000) //continue L_g;
}
m = 0;
while (1) {
o = i + ((q = m) << 3);
p = o[0];
m = 0;
while (1) {
o[0] =
(p = (d + q * 16000 + (n = (m = m) << (double)3))[0] * 1.5 *
(j + (double)n)[0] +
p);
p = p;
n = m + 1;
m = n;
if (n != 2000) //continue L_i;
}
n = q + 1;
m = n;
if (n != 2000) //continue L_h;
}
if (a < 43) goto B_j;
if (ubyte))((b[0])[0] goto B_j;
m = memory_base;
fwrite(m + 42, 22, 1, q = (int))stderr[0];
c[8] = m + 0;
fiprintf(q, m + 2, c + 32);
m = 0;
while (1) {
m = m;
if (m % 20) goto B_l;
fputc(10, q);
B_l:;
c[2] = (double)i[m];
small_fprintf(q, memory_base + 17, c + 16);
n = m + 1;
m = n;
if (n != 2000) //continue L_k;
}
c[0] = (m = memory_base) + 0;
fiprintf(q, m + 25, c);
fwrite(m + 65, 22, 1, q);
B_j:;
free(d);
free(e);
free(f);
free(g);
free(h);
free(i);
free(j);
free(k);
free(l);
stack_pointer = c + 48;
return 0;
}

int legalfunc_polybench_alloc_data(long a, int b) {
return legalimport_polybench_alloc_data(i32_wrap_i64(a),
i32_wrap_i64(a >> 32L),
b)
}