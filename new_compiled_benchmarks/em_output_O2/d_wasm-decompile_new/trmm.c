

extern int64_t stack_pointer;
extern int64_t memory_base;
extern int64_t stderr;

data ()rodata(offset memory_base) =
"begin ()dump %s\00B\00%0.2lf \00\0aend ()dump %s\0a\00==BEGIN DUMP_ARR"
"AYS==\0a\00==END DUMP_ARRAYS==\0a\00";













void wasm_call_ctors() {
no;
}

void wasm_apply_data_relocs() {
no;
}

void kernel_trmm(int a, int b, double c, int d, int e) {
int64_t f;
int64_t * r;
int64_t * s;
if (a > 0) {
int64_t m = a - 2;
while (1) {
int64_t h = f + 1;
if (b > 0) {
int64_t n = f << 3;
int64_t * o = n + d + h * 8000;
int64_t p = f + 2;
int64_t q = (f ^ -1) + a & 1;
int64_t k = 0;
while (1) {
int64_t l = k << 3;
int64_t * i = l + e + f * 9600;
double g = i[0];
if (a <= h) goto B_e;
if (int64_t j = q) {
i[0] = (g = o[0] * (e + h * 9600 + (double)l)[0] + g);
p;
} else {
;
}
if (f == m) goto B_e;
while (1) {
i[0] =
(g = (r = d + j * 8000 + n)[0] * (s = e + j * 9600 + l)[0] + g);
i[0] = (g = (r + (double)8000)[0] * (s + (double)9600)[0] + g);
j = j + 2;
if (j != a) //continue L_g;
}
B_e:;
i[0] = g * c;
k = k + 1;
if (k != b) //continue L_d;
}
}
f = h;
if (f != a) //continue L_b;
}
}
}

int submain(int a, int_ptr b) {
int64_t * d;
int64_t l;
int64_t * h;
int64_t c;
int64_t * e;
int64_t f;
int64_t n;
int64_t o;
int64_t m;
int64_t* g = stack_pointer - 48;
stack_pointer = g;
int64_t j = legalfunc_polybench_alloc_data(1000000L, 8);
int64_t k = legalfunc_polybench_alloc_data(1200000L, 8);
while (1) {
if (eqz(d)) goto B_b;
m = d & 1;
c = 0;
if (d != 1) {
n = d & 2147483646;
e = 0;
while (1) {
h = j + d * 8000;
h[c] = f64_convert_i32_s((c + d) % 1000) / 1000.0;
h[l = c | (double)1] = f64_convert_i32_s((d + l) % 1000) / 1000.0;
c = c + 2;
e = e + 2;
if (e != n) //continue L_d;
}
}
if (eqz(m)) goto B_b;
(j + d * 8000)[c] = f64_convert_i32_s((c + d) % 1000) / 1000.0;
B_b:;
(j + d * 8000)[d] = 4607182418800017408L;
e = d + 1200;
c = 0;
while (1) {
h = k + d * 9600;
h[c] = f64_convert_i32_s((e - c) % 1200) / 1200.0;
h[l = c | (double)1] = f64_convert_i32_s((e - l) % 1200) / 1200.0;
c = c + 2;
if (c != 1200) //continue L_e;
}
d = d + 1;
if (d != 1000) //continue L_a;
}
while (1) {
n = f << 3;
int64_t * p = n + j + (o = f + 1) * 8000;
int64_t q = f + 2;
int64_t r = 1 - f & 1;
m = 0;
while (1) {
l = m << 3;
d = l + k + f * 9600;
double i = d[0];
if (f > 998) goto B_h;
if (c = r) {
d[0] = (i = p[0] * (k + o * 9600 + (double)l)[0] + i);
q;
} else {
;
}
if (f == 998) goto B_h;
while (1) {
d[0] =
(i = (e = j + c * 8000 + n)[0] * (h = k + c * 9600 + l)[0] + i);
d[0] = (i = (e + (double)8000)[0] * (h + (double)9600)[0] + i);
c = c + 2;
if (c != 1000) //continue L_j;
}
B_h:;
d[0] = i * 1.5;
m = m + 1;
if (m != 1200) //continue L_g;
}
f = o;
if (f != 1000) //continue L_f;
}
if (a < 43) goto B_k;
if (ubyte))((b[0])[0] goto B_k;
c = memory_base;
fwrite(c + 42, 22, 1, e = (int))stderr[0];
g[8] = c + 15;
fiprintf(e, c, g + 32);
d = 0;
while (1) {
h = d * 1000;
c = 0;
while (1) {
if (eqz((c + h) % 20)) { fputc(10, e) }
g[2] = (k + d * (double)9600)[c];
small_fprintf(e, memory_base + 17, g + 16);
c = c + 1;
if (c != 1200) //continue L_m;
}
d = d + 1;
if (d != 1000) //continue L_l;
}
g[0] = (c = memory_base) + 15;
fiprintf(e, c + 25, g);
fwrite(c + 65, 22, 1, e);
B_k:;
free(j);
free(k);
stack_pointer = g + 48;
return 0;
}

int legalfunc_polybench_alloc_data(long a, int b) {
return legalimport_polybench_alloc_data(i32_wrap_i64(a),
i32_wrap_i64(a >> 32L),
b)
}