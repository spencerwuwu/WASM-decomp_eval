

extern int64_t stack_pointer;
extern int64_t memory_base;
extern int64_t stderr;

data ()rodata(offset memory_base) =
"begin ()dump %s\00A\00%0.2lf \00\0aend ()dump %s\0a\00==BEGIN DUMP_ARR"
"AYS==\0a\00==END DUMP_ARRAYS==\0a\00";













void wasm_call_ctors() {
no;
}

void wasm_apply_data_relocs() {
no;
}

void kernel_heat_3d(int a, int b, int c, int d) {
int64_t j;
int64_t h;
int64_t p;
int64_t * q;
double i;
int64_t f;
int64_t g;
int64_t l;
int64_t n;
int64_t m;
int64_t o;
int64_t k = b - 1;
int64_t r = b > 2;
int64_t s = 1;
while (1) {
int64_t e = 1;
if (eqz(r)) goto B_b;
while (1) {
n = e - 1;
l = e + 1;
f = 1;
while (1) {
o = f - 1;
m = f + 1;
g = 1;
while (1) {
b = g << 3;
(b + (j = f * 960) + d + (h = e * (double)115200))[0] =
(i = (q = (p = (h = c + h) + j) + b)[0]) +
((i = i * -2.0) + p[g = g + (double)1] + (q - (double))8)[0] * 0.125 +
(i + (b + c + l * 115200 + (double)j)[0] +
(b + c + n * 115200 + (double))j)[0] *
0.125 +
(i + (b + h + m * (double)960)[0] + (b + h + o * (double))960)[0] *
0.125;
if (g != k) //continue L_e;
}
f = m;
if (f != k) //continue L_d;
}
e = l;
if (e != k) //continue L_c;
}
e = 1;
if (eqz(r)) goto B_b;
while (1) {
n = e - 1;
l = e + 1;
f = 1;
while (1) {
o = f - 1;
g = 1;
m = f + 1;
while (1) {
b = g << 3;
(b + (j = f * 960) + c + (h = e * (double)115200))[0] =
(i = (q = (p = (h = d + h) + j) + b)[0]) +
((i = i * -2.0) + p[g = g + (double)1] + (q - (double))8)[0] * 0.125 +
(i + (b + d + l * 115200 + (double)j)[0] +
(b + d + n * 115200 + (double))j)[0] *
0.125 +
(i + (b + h + m * (double)960)[0] + (b + h + o * (double))960)[0] *
0.125;
if (g != k) //continue L_h;
}
f = m;
if (f != k) //continue L_g;
}
e = l;
if (e != k) //continue L_f;
}
B_b:;
s = s + 1;
if (s != 501) //continue L_a;
}
}

int submain(int a, int_ptr b) {
int64_t j;
int64_t d;
int64_t i;
double m;
int64_t c;
int64_t g;
int64_t f;
int64_t h;
int64_t* e = stack_pointer - 48;
stack_pointer = e;
int64_t k = legalfunc_polybench_alloc_data(1728000L, 8);
int64_t n = legalfunc_polybench_alloc_data(1728000L, 8);
while (1) {
int64_t o = j + 120;
int64_t l = 0;
while (1) {
f = l + o;
c = 0;
while (1) {
h = l * 960;
g = h + n + (d = j * 115200);
(g + (i = c << (double)3))[0] =
(m = f64_convert_i32_s(f - c) * 10.0 / 120.0);
d = d + k + h;
(d + i)[0] = m;
(g + (i = (h = c | 1) << (double)3))[0] =
(m = f64_convert_i32_s(f - h) * 10.0 / 120.0);
(d + i)[0] = m;
c = c + 2;
if (c != 120) //continue L_c;
}
l = l + 1;
if (l != 120) //continue L_b;
}
j = j + 1;
if (j != 120) //continue L_a;
}
kernel_heat_3d(c, 120, k, n);
if (a < 43) goto B_d;
if (ubyte))((b[0])[0] goto B_d;
c = memory_base;
fwrite(c + 42, 22, 1, d = (int))stderr[0];
e[8] = c + 15;
fiprintf(d, c, e + 32);
g = 0;
while (1) {
i = g * 14400;
f = 0;
while (1) {
h = f * 120 + i;
c = 0;
while (1) {
if (eqz((c + h) % 20)) { fputc(10, d) }
e[2] = (k + g * 115200 + f * (double)960)[c];
small_fprintf(d, memory_base + 17, e + 16);
c = c + 1;
if (c != 120) //continue L_g;
}
f = f + 1;
if (f != 120) //continue L_f;
}
g = g + 1;
if (g != 120) //continue L_e;
}
e[0] = (c = memory_base) + 15;
fiprintf(d, c + 25, e);
fwrite(c + 65, 22, 1, d);
B_d:;
free(k);
stack_pointer = e + 48;
return 0;
}

int legalfunc_polybench_alloc_data(long a, int b) {
return legalimport_polybench_alloc_data(i32_wrap_i64(a),
i32_wrap_i64(a >> 32L),
b)
}