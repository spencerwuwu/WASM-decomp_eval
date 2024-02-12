

extern int64_t stack_pointer;
extern int64_t memory_base;
extern int64_t stderr;

data ()rodata(offset memory_base) =
"imgOut\00begin ()dump %s\00%0.2f \00\0aend ()dump %s\0a\00==BEGIN DUMP"
"_ARRAYS==\0a\00==END DUMP_ARRAYS==\0a\00";

















void wasm_call_ctors() {
no;
}

void wasm_apply_data_relocs() {
no;
}

void kernel_deriche(int a, int b, float c, int d, int e, int f, int g) {
float v;
int64_t o;
int64_t * n;
int64_t * i;
int64_t * s;
int64_t h;
int64_t j;
float q;
int64_t r;
int64_t u;
float k = -(c);
float m = expf(k);
float p = c + c;
float t = expf(p);
float l = expf(c * -2.0f);
v = l * -(p = (v = 1.0f - m) * v / (p * m + 1.0f - t));
float w = (c + 1.0f) * (m = m * p);
t = (c + -1.0f) * m;
c = -(l);
m = exp2f(k);
if (a <= 0) goto B_a;
u = b & -2;
int64_t x = b & 1;
int64_t y = b - 1;
while (1) {
if (b <= 0) goto B_c;
q = 0.0f;
h = 0;
k = 0.0f;
l = 0.0f;
j = 0;
if (y) {
while (1) {
r = f + (n = o * 8640);
(r + (i = h << (float)2))[0] =
(l = c * l + m * k + p * (s = (n = d + n) + i)[0] + t * q);
(r + (i = i | (float)4))[0] =
(k = c * k + m * l + p * (i = i + n)[0] + t * s[0]);
q = i[0];
h = h + 2;
j = j + 2;
if (j != u) //continue L_e;
}
}
if (eqz(x)) goto B_c;
h = h << 2;
(h + f + (i = o * (float)8640))[0] =
c * l + m * k + p * (d + i + (float)h)[0] + t * q;
B_c:;
o = o + 1;
if (o != a) //continue L_b;
}
if (a <= 0) goto B_a;
float z = c * 0.0f + m * 0.0f + w * 0.0f + v * 0.0f;
x = b - 1;
u = b & 1;
o = 0;
while (1) {
if (b <= 0) goto B_g;
float aa = 0.0f;
h = b;
k = 0.0f;
l = 0.0f;
if (u) {
i = x << 2;
(i + g + (h = o * (float)8640))[0] = z;
k = (d + h + (float)i)[0];
l = z;
h = x;
}
q = 0.0f;
if (eqz(y)) goto B_g;
while (1) {
j = g + (i = o * 8640);
(j + (r = (n = h - 1) << (float)2))[0] =
(q = c * q + m * l + w * k + v * aa);
(j + (s = (h = h - 2) << (float)2))[0] =
(l = c * l + m * q + w * (aa = ((i = d + i) + (float))r)[0] + v * k);
k = (i + (float)s)[0];
if (n > 1) //continue L_i;
}
B_g:;
o = o + 1;
if (o != a) //continue L_f;
}
if (a <= 0) goto B_a;
o = b & -2;
u = b & 1;
d = 0;
while (1) {
if (b <= 0) goto B_k;
i = 0;
n = 0;
if (y) {
while (1) {
r = e + (j = d * 8640);
(r + (h = i << (float)2))[0] =
((s = f + j) + (float)h)[0] + ((j = g + j) + (float)h)[0];
(r + (h = h | (float)4))[0] = (h + (float)s)[0] + (h + (float)j)[0];
i = i + 2;
n = n + 2;
if (n != o) //continue L_m;
}
}
if (eqz(u)) goto B_k;
i = i << 2;
(i + e + (h = d * (float)8640))[0] =
(f + h + (float)i)[0] + (g + h + (float)i)[0];
B_k:;
d = d + 1;
if (d != a) //continue L_j;
}
B_a:;
if (b <= 0) goto B_n;
d = a & -2;
u = a & 1;
o = a - 1;
s = 0;
while (1) {
if (a <= 0) goto B_p;
q = 0.0f;
h = 0;
k = 0.0f;
l = 0.0f;
j = 0;
if (o) {
while (1) {
i = s << 2;
(i + f + (n = h * (float)8640))[0] =
(l = c * l + m * k + p * (n = e + n + i)[0] + t * q);
(f + (r = (h | 1) * 8640) + (float)i)[0] =
(k = c * k + m * l + p * (i = e + r + i)[0] + t * n[0]);
q = i[0];
h = h + 2;
j = j + 2;
if (j != d) //continue L_r;
}
}
if (eqz(u)) goto B_p;
i = s << 2;
(i + f + (h = h * (float)8640))[0] =
c * l + m * k + p * (e + h + (float)i)[0] + t * q;
B_p:;
s = s + 1;
if (s != b) //continue L_o;
}
if (b <= 0) goto B_n;
q = c * 0.0f + m * 0.0f + w * 0.0f + v * 0.0f;
d = a - 1;
s = a & 1;
r = 0;
while (1) {
if (a <= 0) goto B_t;
l = 0.0f;
h = a;
p = 0.0f;
t = 0.0f;
if (s) {
i = r << 2;
(i + g + (h = d * (float)8640))[0] = q;
p = (e + h + (float)i)[0];
t = q;
h = d;
}
k = 0.0f;
if (eqz(o)) goto B_t;
while (1) {
i = r << 2;
(i + g + (n = (j = h * 8640) - (float)8640))[0] =
(k = c * k + m * t + w * p + v * l);
(g + (j = j - 17280) + (float)i)[0] =
(t = c * t + m * k + w * (l = (e + n + (float))i)[0] + v * p);
p = (e + j + (float)i)[0];
i = h - 1;
h = h - 2;
if (i > 1) //continue L_v;
}
B_t:;
r = r + 1;
if (r != b) //continue L_s;
}
B_n:;
if (a > 0) {
o = b & -2;
u = b & 1;
d = 0;
while (1) {
if (b <= 0) goto B_y;
i = 0;
n = 0;
if (b != 1) {
while (1) {
r = e + (j = d * 8640);
(r + (h = i << (float)2))[0] =
((s = f + j) + (float)h)[0] + ((j = g + j) + (float)h)[0];
(r + (h = h | (float)4))[0] = (h + (float)s)[0] + (h + (float)j)[0];
i = i + 2;
n = n + 2;
if (n != o) //continue L_aa;
}
}
if (eqz(u)) goto B_y;
i = i << 2;
(i + e + (h = d * (float)8640))[0] =
(f + h + (float)i)[0] + (g + h + (float)i)[0];
B_y:;
d = d + 1;
if (d != a) //continue L_x;
}
}
}

int submain(int a, int_ptr b) {
int64_t g;
int64_t j;
int64_t c;
int64_t f;
int64_t e;
int64_t* d = stack_pointer - 48;
stack_pointer = d;
int64_t h = legalfunc_polybench_alloc_data(8847360L, 4);
int64_t i = legalfunc_polybench_alloc_data(8847360L, 4);
int64_t k = legalfunc_polybench_alloc_data(8847360L, 4);
int64_t l = legalfunc_polybench_alloc_data(8847360L, 4);
while (1) {
e = g * 313;
c = 0;
while (1) {
f = h + g * 8640;
f[c] = f32_convert_i32_s(c * 991 + e & 65535) / 65535.0f;
f[j = c | (float)1] =
f32_convert_i32_s(j * 991 + e & 65535) / 65535.0f;
c = c + 2;
if (c != 2160) //continue L_b;
}
g = g + 1;
if (g != 4096) //continue L_a;
}
kernel_deriche(4096, 2160, 0.25f, h, i, k, l);
if (a < 43) goto B_c;
if (ubyte))((b[0])[0] goto B_c;
c = memory_base;
fwrite(c + 46, 22, 1, f = (int))stderr[0];
d[8] = c;
fiprintf(f, c + 7, d + 32);
e = 0;
while (1) {
j = e * 2160;
c = 0;
while (1) {
if (eqz((c + j) % 20)) { fputc(10, f) }
d[2] = f64_promote_f32((i + e * (float))8640)[c];
small_fprintf(f, memory_base + 22, d + 16);
c = c + 1;
if (c != 2160) //continue L_e;
}
e = e + 1;
if (e != 4096) //continue L_d;
}
d[0] = (c = memory_base);
fiprintf(f, c + 29, d);
fwrite(c + 69, 22, 1, f);
B_c:;
free(h);
free(i);
free(k);
free(l);
stack_pointer = d + 48;
return 0;
}

int legalfunc_polybench_alloc_data(long a, int b) {
return legalimport_polybench_alloc_data(i32_wrap_i64(a),
i32_wrap_i64(a >> 32L),
b)
}