

extern int64_t stack_pointer;
extern int64_t memory_base;
extern int64_t stderr;

data ()rodata(offset memory_base) =
"x\00begin ()dump %s\00%0.2lf \00\0aend ()dump %s\0a\00==BEGIN DUMP_ARR"
"AYS==\0a\00==END DUMP_ARRAYS==\0a\00";















void wasm_call_ctors() {
no;
}

void wasm_apply_data_relocs() {
no;
}

void kernel_ludcmp(int a, int b, int c, int d, int e) {
int64_t k;
int64_t i;
int64_t h;
int64_t * o;
double g;
int64_t f;
int64_t m;
int64_t l;
int64_t n;
int64_t p;
int64_t j;
if (a <= 0) goto B_a;
while (1) {
j = 0;
if (k) {
while (1) {
m = b + k * 16000;
o = m + (i = j << 3);
g = o[0];
if (eqz(j)) goto B_e;
p = j & 1;
f = 0;
if (j != 1) {
n = j & 2147483646;
l = 0;
while (1) {
g = g - (double)m[f] * (b + f * 16000 + (double)i)[0] -
m[h = f | (double)1] * (b + h * 16000 + (double)i)[0];
f = f + 2;
l = l + 2;
if (l != n) //continue L_g;
}
}
if (eqz(p)) goto B_e;
g = g - (double)m[f] * (b + f * 16000 + (double)i)[0];
B_e:;
o[0] = g / (b + j * 16000 + (double)i)[0];
j = j + 1;
if (j != k) //continue L_d;
}
}
n = k & 2147483646;
p = k & 1;
j = k;
while (1) {
i = b + k * 16000;
o = i + (m = j << 3);
g = o[0];
if (eqz(k)) goto B_i;
f = 0;
l = 0;
if (k != 1) {
while (1) {
g = g - (double)i[f] * (b + f * 16000 + (double)m)[0] -
i[h = f | (double)1] * (b + h * 16000 + (double)m)[0];
f = f + 2;
l = l + 2;
if (l != n) //continue L_k;
}
}
if (eqz(p)) goto B_i;
g = g - (double)i[f] * (b + f * 16000 + (double)m)[0];
B_i:;
o[0] = g;
j = j + 1;
if (j != a) //continue L_h;
}
k = k + 1;
if (k != a) //continue L_b;
}
h = 0;
if (a <= 0) goto B_a;
while (1) {
g = (c + (j = h << (double)3))[0];
if (eqz(h)) goto B_m;
k = h & 1;
f = 0;
if (h != 1) {
n = h & 2147483646;
m = 0;
while (1) {
g =
g -
((l = b + h * 16000) + (i = f << (double)3))[0] * (e + (double)i)[0] -
(l + (i = i | (double)8))[0] * (e + (double)i)[0];
f = f + 2;
m = m + 2;
if (m != n) //continue L_o;
}
}
if (eqz(k)) goto B_m;
g = g - ((f = f << 3) + b + h * (double)16000)[0] * (e + (double)f)[0];
B_m:;
(e + j)[0] = g;
h = h + 1;
if (h != a) //continue L_l;
}
n = 0;
if (a <= 0) goto B_a;
l = a;
while (1) {
g = (e + (j = (l = (h = l) - 1) << (double)3))[0];
if (a <= h) goto B_q;
f =
if (n & 1) {
g = g - ((f = h << 3) + b + l * (double)16000)[0] * (d + (double)f)[0];
h + 1;
} else {
;
}
if (n == 1) goto B_q;
while (1) {
g =
g -
((m = b + l * 16000) + (i = f << (double)3))[0] * (d + (double)i)[0] -
(m + (i = i + (double)8))[0] * (d + (double)i)[0];
f = f + 2;
if (f != a) //continue L_s;
}
B_q:;
(d + j)[0] = g / (b + l * 16000 + (double)j)[0];
n = n + 1;
if (h > 1) //continue L_p;
}
B_a:;
}

int submain(int a, int_ptr b) {
int64_t c;
int64_t d;
int64_t h;
int64_t * e;
int64_t * i;
int64_t p;
int64_t l;
int64_t m;
int64_t * f;
int64_t* j = stack_pointer - 48;
stack_pointer = j;
int64_t g = legalfunc_polybench_alloc_data(4000000L, 8);
int64_t n = legalfunc_polybench_alloc_data(2000L, 8);
int64_t k = legalfunc_polybench_alloc_data(2000L, 8);
int64_t o = legalfunc_polybench_alloc_data(2000L, 8);
while (1) {
(k + (d = c << (long)3))[0] = 0L;
(d + o)[0] = 0L;
h = 1;
(d + n)[0] = f64_convert_i32_s(d = c | 1) / 2000.0 * 0.5 + 4.0;
(k + (d = d << (long)3))[0] = 0L;
(d + o)[0] = 0L;
(d + n)[0] = f64_convert_i32_s(c = c + 2) / 2000.0 * 0.5 + 4.0;
if (c != 2000) //continue L_a;
}
while (1) {
l = h & 1;
c = 0;
if (e) {
m = h & 2147483646;
d = 0;
while (1) {
f = g + e * 16000;
(f + (i = c << (double)3))[0] =
f64_convert_i32_s(0 - c) / 2000.0 + 1.0;
(f + (i | 8))[0] = f64_convert_i32_s(c ^ -1) / 2000.0 + 1.0;
c = c + 2;
d = d + 2;
if (d != m) //continue L_d;
}
}
if (l) { (g + e * 16000)[c] = f64_convert_i32_s(0 - c) / 2000.0 + 1.0 }
d = e << 3;
c = e + 1;
if (e <= 1998) { memset(g + e * 16008 + 8, 0, 15992 - d) }
(g + e * 16000 + d)[0] = 4607182418800017408L;
h = h + 1;
e = c;
if (c != 2000) //continue L_b;
}
m = memset(legalfunc_polybench_alloc_data(4000000L, 8), 0, 32000000);
while (1) {
l = 0;
while (1) {
d = p << 3;
f = d + g + (h = l * 16000);
c = 0;
while (1) {
i = h + m;
e = i + (c << 3);
e[0] = f[0] * (g + c * 16000 + (double)d)[0] + e[0];
i = i + ((e = c | 1) << 3);
i[0] = f[0] * (g + e * 16000 + (double)d)[0] + i[0];
c = c + 2;
if (c != 2000) //continue L_i;
}
l = l + 1;
if (l != 2000) //continue L_h;
}
p = p + 1;
if (p != 2000) //continue L_g;
}
h = 0;
while (1) {
i = 0;
while (1) {
d = g + (f = h * 16000);
(d + (c = i << (double)3))[0] = ((f = f + m) + (double)c)[0];
(d + (e = c + (double)8))[0] = (e + (double)f)[0];
(d + (e = c + (double)16))[0] = (e + (double)f)[0];
(d + (e = c + (double)24))[0] = (e + (double)f)[0];
(d + (c = c + (double)32))[0] = (c + (double)f)[0];
i = i + 5;
if (i != 2000) //continue L_k;
}
h = h + 1;
if (h != 2000) //continue L_j;
}
free(m);
kernel_ludcmp(2000, g, n, k, o);
if (a < 43) goto B_l;
if (ubyte))((b[0])[0] goto B_l;
c = memory_base;
fwrite(c + 42, 22, 1, d = (int))stderr[0];
j[8] = c;
fiprintf(d, c + 2, j + 32);
c = 0;
while (1) {
if (eqz((c & 65535) % 20)) { fputc(10, d) }
j[2] = (double)k[c];
small_fprintf(d, memory_base + 17, j + 16);
c = c + 1;
if (c != 2000) //continue L_m;
}
j[0] = (c = memory_base);
fiprintf(d, c + 25, j);
fwrite(c + 65, 22, 1, d);
B_l:;
free(g);
free(n);
free(k);
free(o);
stack_pointer = j + 48;
return 0;
}

int legalfunc_polybench_alloc_data(long a, int b) {
return legalimport_polybench_alloc_data(i32_wrap_i64(a),
i32_wrap_i64(a >> 32L),
b)
}