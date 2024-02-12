

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

void kernel_heat_3d(int a, int b, int c, int d) {
int64_t n;
int64_t o;
int64_t p;
int64_t q;
int64_t * r;
double s;
int64_t h;
int64_t k;
int64_t j;
int64_t i;
int64_t m;
int64_t l;
int64_t e = b + -1;
int64_t f = b > 2;
b = 1;
while (1) {
int64_t g = b;
b = 1;
if (eqz(f)) goto B_b;
while (1) {
h = b;
i = h + -1;
j = h + 1;
b = 1;
while (1) {
k = b;
l = k + -1;
m = k + 1;
b = 1;
while (1) {
(d + (n = h * 115200) + (o = k * 960) + (b = (p = b) << (double)3))[0] =
(s = (r = (q = (n = c + n) + o) + b)[0]) +
((s = s * -2.0) + q[p = p + (double)1] + (r + (double))-8)[0] * 0.125 +
(s + (c + j * 115200 + o + (double)b)[0] +
(c + i * 115200 + o + (double))b)[0] *
0.125 +
(s + (n + m * 960 + (double)b)[0] + (n + l * 960 + (double))b)[0] *
0.125;
b = p;
if (p != e) //continue L_e;
}
o = k + 1;
b = o;
if (o != e) //continue L_d;
}
o = h + 1;
b = o;
if (o != e) //continue L_c;
}
B_b:;
b = 1;
if (eqz(f)) goto B_f;
while (1) {
h = b;
i = h + -1;
j = h + 1;
b = 1;
while (1) {
k = b;
l = k + -1;
m = k + 1;
b = 1;
while (1) {
(c + (n = h * 115200) + (o = k * 960) + (b = (p = b) << (double)3))[0] =
(s = (r = (q = (n = d + n) + o) + b)[0]) +
((s = s * -2.0) + q[p = p + (double)1] + (r + (double))-8)[0] * 0.125 +
(s + (d + j * 115200 + o + (double)b)[0] +
(d + i * 115200 + o + (double))b)[0] *
0.125 +
(s + (n + m * 960 + (double)b)[0] + (n + l * 960 + (double))b)[0] *
0.125;
b = p;
if (p != e) //continue L_i;
}
o = k + 1;
b = o;
if (o != e) //continue L_h;
}
o = h + 1;
b = o;
if (o != e) //continue L_g;
}
B_f:;
o = g + 1;
b = o;
if (o != 501) //continue L_a;
}
}

int submain(int a, int_ptr b) {
int64_t i;
int64_t k;
int64_t l;
int64_t m;
double n;
int64_t j;
int64_t g;
int64_t* c = stack_pointer - 48;
stack_pointer = c;
int64_t d = legalfunc_polybench_alloc_data(1728000L, 8);
int64_t e = legalfunc_polybench_alloc_data(1728000L, 8);
int64_t f = 0;
while (1) {
g = f;
int64_t h = g + 120;
f = 0;
while (1) {
j = h + (i = f);
f = 0;
while (1) {
(e + (k = g * 115200) + (l = i * 960) + (m = (f = f) << (double)3))[0] =
(n = f64_convert_i32_s(j - f) * 10.0 / 120.0);
(d + k + l + m)[0] = n;
k = f + 1;
f = k;
if (k != 120) //continue L_c;
}
k = i + 1;
f = k;
if (k != 120) //continue L_b;
}
k = g + 1;
f = k;
if (k != 120) //continue L_a;
}
kernel_heat_3d(f, 120, d, e);
if (a < 43) goto B_d;
if (ubyte))((b[0])[0] goto B_d;
f = memory_base;
fwrite(f + 42, 22, 1, m = (int))stderr[0];
c[8] = f + 15;
fiprintf(m, f + 0, c + 32);
f = 0;
while (1) {
j = f;
g = j * 14400;
f = 0;
while (1) {
l = f;
i = l * 120 + g;
f = 0;
while (1) {
if ((i + (f = f)) % 20) goto B_h;
fputc(10, m);
B_h:;
c[2] = (d + j * 115200 + l * (double)960)[f];
small_fprintf(m, memory_base + 17, c + 16);
k = f + 1;
f = k;
if (k != 120) //continue L_g;
}
k = l + 1;
f = k;
if (k != 120) //continue L_f;
}
k = j + 1;
f = k;
if (k != 120) //continue L_e;
}
c[0] = (f = memory_base) + 15;
fiprintf(m, f + 25, c);
fwrite(f + 65, 22, 1, m);
B_d:;
free(d);
stack_pointer = c + 48;
return 0;
}

int legalfunc_polybench_alloc_data(long a, int b) {
return legalimport_polybench_alloc_data(i32_wrap_i64(a),
i32_wrap_i64(a >> 32L),
b)
}