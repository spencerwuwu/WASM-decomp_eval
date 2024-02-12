

extern int64_t stack_pointer;
extern int64_t memory_base;
extern int64_t table_base;
extern int64_t nb;
extern int64_t round_val;
extern int64_t word;
extern int64_t main_result;
extern int64_t Sbox;
extern int64_t Rcon0;
extern int64_t invSbox;
extern int64_t statemt;
extern int64_t key;
extern int64_t startTimer;
extern int64_t endTimer;
int64_t nb_1 = 2356;
int64_t round_val_1 = 2352;
int64_t word_1 = 2368;
int64_t main_result_1 = 2360;
int64_t Sbox_1 = 256;
int64_t Rcon0_1 = 128;
int64_t invSbox_1 = 1280;
int64_t statemt_1 = 4288;
int64_t key_1 = 4416;
int64_t startTimer_1 = 4544;
int64_t endTimer_1 = 4552;
int64_t type = 4560;








void wasm_call_ctors() {
}

void wasm_apply_data_relocs() {
}

int encrypt(int a, int_ptr b, int c) {
int64_t * d;
int64_t f;
int64_t * g;
KeySchedule(c, b);
if (c > 192191) goto B_h;
if (c > 128255) goto B_i;
b = 0;
d = 4;
if (c == 128128) goto B_b;
if (c == 128192) goto B_e;
b = 4;
goto B_a;
B_i:;
if (c == 128256) goto B_c;
if (c == 192128) goto B_g;
b = 4;
goto B_a;
B_h:;
if (c > 256127) goto B_j;
if (c == 192192) goto B_e;
if (c == 192256) goto B_c;
b = 4;
goto B_a;
B_j:;
if (c == 256128) goto B_f;
if (c == 256192) goto B_d;
if (c == 256256) goto B_c;
b = 4;
goto B_a;
B_g:;
b = 2;
d = 4;
goto B_b;
B_f:;
b = 4;
d = 4;
goto B_b;
B_e:;
b = 2;
d = 6;
goto B_b;
B_d:;
b = 4;
d = 6;
goto B_b;
B_c:;
b = 4;
d = 8;
B_b:;
nb[0] = d;
round_val[0] = b;
if (c > 192255) goto B_m;
if (c == 128192) goto B_l;
if (c == 128256) goto B_k;
b = 4;
if (c == 192192) goto B_l;
goto B_a;
B_m:;
if (c == 192256) goto B_k;
if (c == 256256) goto B_k;
b = 4;
if (c != 256192) goto B_a;
B_l:;
b = 6;
goto B_a;
B_k:;
b = 8;
B_a:;
int64_t e = b;
b = 0;
while (1) {
d = word;
b = a + ((f = b) << 4);
b[0] = b[0] ^ (d = d + (f << 2))[0];
g = b + 4;
g[0] = g[0] ^ (d + (int64_t)480)[0];
g = b + 8;
g[0] = g[0] ^ (d + (int64_t)960)[0];
b = b + 12;
b[0] = b[0] ^ (d + (int64_t)1440)[0];
d = f + 1;
b = d;
if (d != e) //continue L_n;
}
if (int64_t)(round_val[0] >= -8) goto B_p;
f = 1;
goto B_o;
B_p:;
d = 1;
while (1) {
ByteSub_ShiftRow(a, (b = nb)[0]);
MixColumn_AddRoundKey(a, b[0], b = d);
f = b + 1;
d = f;
f = f;
if (b < (int64_t)round_val[0] + 9) //continue L_q;
}
B_o:;
d = f;
ByteSub_ShiftRow(a, (int))nb[0];
if (c > 192255) goto B_u;
if (c == 128192) goto B_t;
if (c == 128256) goto B_s;
b = 4;
if (c == 192192) goto B_t;
goto B_r;
B_u:;
if (c == 192256) goto B_s;
if (c == 256256) goto B_s;
b = 4;
if (c != 256192) goto B_r;
B_t:;
b = 6;
goto B_r;
B_s:;
b = 8;
B_r:;
e = b;
c = e * d;
b = 0;
while (1) {
b = a + ((f = b) << 4);
b[0] = b[0] ^ (d = word + (f + c << 2))[0];
g = b + 4;
g[0] = g[0] ^ (d + (int64_t)480)[0];
g = b + 8;
g[0] = g[0] ^ (d + (int64_t)960)[0];
b = b + 12;
b[0] = b[0] ^ (d + (int64_t)1440)[0];
d = f + 1;
b = d;
if (d != e) //continue L_v;
}
b = 0;
d = (int64_t)main_result[0];
while (1) {
g = (memory_base + 0 + (f = (b = b) << (int64_t)2))[0];
f = (a + (int64_t)f)[0];
main_result[0] = (d = d + (f != g));
f = b + 1;
b = f;
d = d;
if (f != 16) //continue L_w;
}
return 0;
}

int KeySchedule(int_ptr a, int_ptr b) {
int64_t f;
int64_t e;
int64_t d;
int64_t l;
{* c (int,)a (int,)b (int,)c (int64_t)d } = stack_pointer - 16;
if (a > 192191) goto B_h;
if (a > 128255) goto B_i;
if (a != 128128) goto B_g;
a = 0;
d = 4;
e = 4;
f = 11;
goto B_b;
B_i:;
if (a == 128256) goto B_f;
d = -1;
if (a != 192128) goto B_a;
a = 0;
d = 6;
e = 4;
f = 13;
goto B_b;
B_h:;
if (a > 256127) goto B_j;
if (a == 192192) goto B_e;
d = -1;
if (a != 192256) goto B_a;
a = 0;
d = 6;
e = 8;
f = 15;
goto B_b;
B_j:;
if (a == 256128) goto B_d;
if (a == 256192) goto B_c;
d = -1;
if (a != 256256) goto B_a;
a = 1;
d = 8;
e = 8;
f = 15;
goto B_b;
B_g:;
d = -1;
if (a != 128192) goto B_a;
a = 0;
d = 4;
e = 6;
f = 13;
goto B_b;
B_f:;
a = 0;
d = 4;
e = 8;
f = 15;
goto B_b;
B_e:;
a = 0;
d = 6;
e = 6;
f = 13;
goto B_b;
B_d:;
a = 1;
d = 8;
e = 4;
f = 15;
goto B_b;
B_c:;
a = 1;
d = 8;
e = 6;
f = 15;
B_b:;
int64_t g = f;
int64_t h = e;
int64_t i = d;
int64_t j = a;
a = 0;
while (1) {
f = a;
d = f << 2;
a = 0;
while (1) {
(word + (a = a) * 480 + (int64_t)d)[0] = b[a + (int64_t)d];
e = a + 1;
a = e;
if (e != 4) //continue L_l;
}
d = f + 1;
a = d;
if (d != i) //continue L_k;
}
int64_t k = g * h;
j = j ^ 1;
a = i;
while (1) {
e = a;
a = e + -1;
d = e - (f = e / i) * i;
if (d) goto B_o;
b = word + (a << 2);
g = (b + (int64_t)960)[0];
a = Sbox;
h = (b + (int64_t)480)[0];
c.b = (a + ((l = g / 16) << 6))[g - (l << (int64_t)4)];
c.c =
(a + ((l = (g = (b + (int))1440)[0] / 16) << 6))[g - (l << (int64_t)4)];
c.a =
(a + ((g = h / 16) << 6))[h - (g << (int64_t)4)] ^
((f << 2) + Rcon0 + (int64_t)-4)[0];
a = a + ((f = (b = b[0]) / 16) << 6) + (b - (f << 4) << 2);
goto B_n;
B_o:;
c.a = (a = word + (a << 2))[0];
c.b = (a + (int64_t)480)[0];
c.c = (a + (int64_t)960)[0];
a = a + 1440;
B_n:;
c.d = a[0];
a = 0;
if (j | d != 4) goto B_p;
while (1) {
b = c + ((d = a) << 2);
a = b[0];
b[0] = (Sbox + ((f = a / 16) << 6))[a - (f << (int64_t)4)];
d = d + 1;
a = d;
if (d != 4) //continue L_q;
}
B_p:;
b = e - i;
a = 0;
while (1) {
d = word + (a = a) * 480;
d[e] = (int64_t)c[a] ^ (int64_t)d[b];
d = a + 1;
a = d;
if (d != 4) //continue L_r;
}
d = e + 1;
a = d;
if (d != k) //continue L_m;
}
d = 0;
B_a:;
return d;
}

void ByteSub_ShiftRow(int_ptr a, int_ptr b) {
int64_t e;
int64_t c;
int64_t d;
// br_table[B_e, B_a, B_d, B_a, B_c, ..B_a](b + -4)
B_e:;
c = a[5];
b = Sbox;
d = a[1];
a[1] = (b + (c << 2 & -64))[c & (int64_t)15];
c = a[9];
a[9] = (b + ((e = a[13]) << 2 & -64))[e & (int64_t)15];
a[5] = (b + (c << 2 & -64))[c & (int64_t)15];
a[13] = (b + (d << 2 & -64))[d & (int64_t)15];
c = a[2];
a[2] = (b + ((d = a[10]) << 2 & -64))[d & (int64_t)15];
a[10] = (b + (c << 2 & -64))[c & (int64_t)15];
c = a[6];
a[6] = (b + ((d = a[14]) << 2 & -64))[d & (int64_t)15];
a[14] = (b + (c << 2 & -64))[c & (int64_t)15];
c = a[3];
a[3] = (b + ((d = a[15]) << 2 & -64))[d & (int64_t)15];
a[15] = (b + ((d = a[11]) << 2 & -64))[d & (int64_t)15];
d = a[7];
a[7] = (b + (c << 2 & -64))[c & (int64_t)15];
a[11] = (b + (d << 2 & -64))[d & (int64_t)15];
a[0] = (b + ((c = a[0]) << 2 & -64))[c & (int64_t)15];
a[4] = (b + ((c = a[4]) << 2 & -64))[c & (int64_t)15];
a[8] = (b + ((c = a[8]) << 2 & -64))[c & (int64_t)15];
a = a + 48;
goto B_b;
B_d:;
c = a[5];
b = Sbox;
d = a[1];
a[1] = (b + (c << 2 & -64))[c & (int64_t)15];
c = a[9];
a[9] = (b + ((e = a[13]) << 2 & -64))[e & (int64_t)15];
a[5] = (b + (c << 2 & -64))[c & (int64_t)15];
a[13] = (b + ((c = a[17]) << 2 & -64))[c & (int64_t)15];
a[17] = (b + ((c = a[21]) << 2 & -64))[c & (int64_t)15];
a[21] = (b + (d << 2 & -64))[d & (int64_t)15];
c = a[2];
a[2] = (b + ((d = a[10]) << 2 & -64))[d & (int64_t)15];
a[10] = (b + ((d = a[18]) << 2 & -64))[d & (int64_t)15];
a[18] = (b + (c << 2 & -64))[c & (int64_t)15];
c = a[6];
a[6] = (b + ((d = a[14]) << 2 & -64))[d & (int64_t)15];
d = a[22];
a[22] = (b + (c << 2 & -64))[c & (int64_t)15];
a[14] = (b + (d << 2 & -64))[d & (int64_t)15];
c = a[15];
a[15] = (b + ((d = a[3]) << 2 & -64))[d & (int64_t)15];
a[3] = (b + (c << 2 & -64))[c & (int64_t)15];
c = a[19];
a[19] = (b + ((d = a[7]) << 2 & -64))[d & (int64_t)15];
a[7] = (b + (c << 2 & -64))[c & (int64_t)15];
c = a[23];
a[23] = (b + ((d = a[11]) << 2 & -64))[d & (int64_t)15];
a[11] = (b + (c << 2 & -64))[c & (int64_t)15];
a[0] = (b + ((c = a[0]) << 2 & -64))[c & (int64_t)15];
a[4] = (b + ((c = a[4]) << 2 & -64))[c & (int64_t)15];
a[8] = (b + ((c = a[8]) << 2 & -64))[c & (int64_t)15];
a[12] = (b + ((c = a[12]) << 2 & -64))[c & (int64_t)15];
a[16] = (b + ((c = a[16]) << 2 & -64))[c & (int64_t)15];
a = a + 80;
goto B_b;
B_c:;
c = a[5];
b = Sbox;
d = a[1];
a[1] = (b + (c << 2 & -64))[c & (int64_t)15];
c = a[9];
a[9] = (b + ((e = a[13]) << 2 & -64))[e & (int64_t)15];
a[5] = (b + (c << 2 & -64))[c & (int64_t)15];
a[13] = (b + ((c = a[17]) << 2 & -64))[c & (int64_t)15];
a[17] = (b + ((c = a[21]) << 2 & -64))[c & (int64_t)15];
a[21] = (b + ((c = a[25]) << 2 & -64))[c & (int64_t)15];
a[25] = (b + ((c = a[29]) << 2 & -64))[c & (int64_t)15];
a[29] = (b + (d << 2 & -64))[d & (int64_t)15];
c = a[2];
a[2] = (b + ((d = a[14]) << 2 & -64))[d & (int64_t)15];
a[14] = (b + ((d = a[26]) << 2 & -64))[d & (int64_t)15];
a[26] = (b + ((d = a[6]) << 2 & -64))[d & (int64_t)15];
a[6] = (b + ((d = a[18]) << 2 & -64))[d & (int64_t)15];
a[18] = (b + ((d = a[30]) << 2 & -64))[d & (int64_t)15];
a[30] = (b + ((d = a[10]) << 2 & -64))[d & (int64_t)15];
d = a[22];
a[22] = (b + (c << 2 & -64))[c & (int64_t)15];
a[10] = (b + (d << 2 & -64))[d & (int64_t)15];
c = a[19];
a[19] = (b + ((d = a[3]) << 2 & -64))[d & (int64_t)15];
a[3] = (b + (c << 2 & -64))[c & (int64_t)15];
c = a[23];
a[23] = (b + ((d = a[7]) << 2 & -64))[d & (int64_t)15];
a[7] = (b + (c << 2 & -64))[c & (int64_t)15];
c = a[27];
a[27] = (b + ((d = a[11]) << 2 & -64))[d & (int64_t)15];
a[11] = (b + (c << 2 & -64))[c & (int64_t)15];
c = a[31];
a[31] = (b + ((d = a[15]) << 2 & -64))[d & (int64_t)15];
a[15] = (b + (c << 2 & -64))[c & (int64_t)15];
a[0] = (b + ((c = a[0]) << 2 & -64))[c & (int64_t)15];
a[4] = (b + ((c = a[4]) << 2 & -64))[c & (int64_t)15];
a[8] = (b + ((c = a[8]) << 2 & -64))[c & (int64_t)15];
a[12] = (b + ((c = a[12]) << 2 & -64))[c & (int64_t)15];
a[16] = (b + ((c = a[16]) << 2 & -64))[c & (int64_t)15];
a[20] = (b + ((c = a[20]) << 2 & -64))[c & (int64_t)15];
a[24] = (b + ((c = a[24]) << 2 & -64))[c & (int64_t)15];
a = a + 112;
B_b:;
b = a;
a = b[0];
b[0] = (Sbox + (a << 2 & -64))[a & (int64_t)15];
B_a:;
}

int MixColumn_AddRoundKey(int a, int b, int c) {
int64_t f;
int64_t h;
int64_t i;
int64_t j;
int64_t k;
int64_t l;
int64_t m;
int64_t * n;
int64_t o;
int64_t p;
int64_t q;
int64_t* d = stack_pointer - 128;
if (b < 1) goto B_a;
int64_t e = c * b;
c = 0;
while (1) {
int64_t * g = d + (c = (f = c) << 4);
g[0] =
(j = select__if((i = (h = (a + (int))c)[0] << 1) ^ 283,
i,
(h & 2147483520) == 128));
g[0] =
(o =
select__if(
(j = (n = (m = (l = (a + (k = c | (int))4))[0] << 1) ^ l) ^ j) ^ 283,
j,
(n & -256) == 256));
n = word;
g[0] =
(((j = (a + (p = c | (int))8))[0] ^ (n = n + (f + e << 2))[0]) ^
(c = (a + (q = c | (int)))12))[0] ^
o;
(d + (int64_t)k)[0] =
(c ^ (h ^ (n + (int)))480)[0] ^
select__if((m = (k = j ^ (g = j << 1)) ^
select__if(m ^ 283, m, (l & 2147483520) == 128)) ^
283,
m,
(k & -256) == 256);
(d + (int64_t)p)[0] =
(l ^ (h ^ (n + (int)))960)[0] ^
select__if((g = (k = c ^ (m = c << 1)) ^
select__if(g ^ 283, g, (j & 2147483520) == 128)) ^
283,
g,
(k & -256) == 256);
(d + (int64_t)q)[0] =
(j ^ (l ^ (n + (int)))1440)[0] ^
select__if(
(h = select__if(m ^ 283, m, (c & 2147483520) == 128) ^ (c = i ^ h)) ^
283,
h,
(c & -256) == 256);
h = f + 1;
c = h;
if (h != b) //continue L_b;
}
B_a:;
if (b <= 0) goto B_c;
c = 0;
while (1) {
(a + (c = (h = c) << (int64_t)4))[0] = (d + (int64_t)c)[0];
(a + (l = c | (int64_t)4))[0] = (d + (int64_t)l)[0];
(a + (l = c | (int64_t)8))[0] = (d + (int64_t)l)[0];
(a + (c = c | (int64_t)12))[0] = (d + (int64_t)c)[0];
h = h + 1;
c = h;
if (h != b) //continue L_d;
}
B_c:;
return 0;
}

int AddRoundKey(int a, int_ptr b, int c) {
int64_t * d;
if (b > 192255) goto B_d;
if (b == 128192) goto B_c;
if (b == 128256) goto B_b;
d = 4;
if (b == 192192) goto B_c;
goto B_a;
B_d:;
if (b == 192256) goto B_b;
if (b == 256256) goto B_b;
d = 4;
if (b != 256192) goto B_a;
B_c:;
d = 6;
goto B_a;
B_b:;
d = 8;
B_a:;
int64_t* e = d;
int64_t* f = e * c;
b = 0;
while (1) {
b = a + ((c = b) << 4);
b[0] = b[0] ^ (d = word + (c + f << 2))[0];
int64_t * g = b + 4;
g[0] = g[0] ^ (d + (int64_t)480)[0];
g = b + 8;
g[0] = g[0] ^ (d + (int64_t)960)[0];
b = b + 12;
b[0] = b[0] ^ (d + (int64_t)1440)[0];
d = c + 1;
b = d;
if (d != e) //continue L_e;
}
return 0;
}

int decrypt(int a, int_ptr b, int c) {
int64_t * d;
int64_t g;
int64_t * h;
KeySchedule(c, b);
if (c > 192191) goto B_f;
if (c > 128255) goto B_g;
b = 10;
d = 4;
if (c == 128128) goto B_b;
if (c != 128192) goto B_a;
goto B_c;
B_g:;
if (c == 128256) goto B_e;
if (c != 192128) goto B_a;
b = 12;
d = 4;
goto B_b;
B_f:;
if (c > 256127) goto B_d;
if (c == 192192) goto B_c;
if (c != 192256) goto B_a;
B_e:;
b = 14;
d = 8;
goto B_b;
B_d:;
if (c == 256128) goto B_i;
if (c == 256192) goto B_h;
if (c != 256256) goto B_a;
b = 14;
d = 8;
goto B_b;
B_i:;
b = 14;
d = 4;
goto B_b;
B_h:;
b = 14;
d = 6;
goto B_b;
B_c:;
b = 12;
d = 6;
B_b:;
nb[0] = d;
round_val[0] = b;
B_a:;
d = (int64_t)round_val[0];
if (c > 192255) goto B_m;
if (c == 128192) goto B_l;
if (c == 128256) goto B_k;
b = 4;
if (c == 192192) goto B_l;
goto B_j;
B_m:;
if (c == 192256) goto B_k;
if (c == 256256) goto B_k;
b = 4;
if (c != 256192) goto B_j;
B_l:;
b = 6;
goto B_j;
B_k:;
b = 8;
B_j:;
int64_t e = b;
int64_t* f = e * d;
b = 0;
while (1) {
b = a + ((g = b) << 4);
b[0] = b[0] ^ (d = word + (g + f << 2))[0];
h = b + 4;
h[0] = h[0] ^ (d + (int64_t)480)[0];
h = b + 8;
h[0] = h[0] ^ (d + (int64_t)960)[0];
b = b + 12;
b[0] = b[0] ^ (d + (int64_t)1440)[0];
d = g + 1;
b = d;
if (d != e) //continue L_n;
}
InversShiftRow_ByteSub(a, (int))nb[0];
b = (int64_t)round_val[0];
if (b < 2) goto B_o;
b = b;
while (1) {
AddRoundKey_InversMixColumn(a, (d = nb)[0], b = (g = b) + -1);
InversShiftRow_ByteSub(a, d[0]);
b = b;
if (g > 2) //continue L_p;
}
B_o:;
if (c > 192255) goto B_t;
if (c == 128192) goto B_s;
if (c == 128256) goto B_r;
b = 4;
if (c == 192192) goto B_s;
goto B_q;
B_t:;
if (c == 192256) goto B_r;
if (c == 256256) goto B_r;
b = 4;
if (c != 256192) goto B_q;
B_s:;
b = 6;
goto B_q;
B_r:;
b = 8;
B_q:;
e = b;
b = 0;
while (1) {
d = word;
b = a + ((g = b) << 4);
b[0] = b[0] ^ (d = d + (g << 2))[0];
h = b + 4;
h[0] = h[0] ^ (d + (int64_t)480)[0];
h = b + 8;
h[0] = h[0] ^ (d + (int64_t)960)[0];
b = b + 12;
b[0] = b[0] ^ (d + (int64_t)1440)[0];
d = g + 1;
b = d;
if (d != e) //continue L_u;
}
b = 0;
d = (int64_t)main_result[0];
while (1) {
h = (memory_base + 64 + (g = (b = b) << (int64_t)2))[0];
g = (a + (int64_t)g)[0];
main_result[0] = (d = d + (g != h));
g = b + 1;
b = g;
d = d;
if (g != 16) //continue L_v;
}
return 0;
}

void InversShiftRow_ByteSub(int_ptr a, int_ptr b) {
int64_t e;
int64_t c;
int64_t d;
// br_table[B_e, B_a, B_d, B_a, B_c, ..B_a](b + -4)
B_e:;
c = a[9];
b = invSbox;
d = a[13];
a[13] = (b + (c << 2 & -64))[c & (int64_t)15];
c = a[5];
a[5] = (b + ((e = a[1]) << 2 & -64))[e & (int64_t)15];
a[9] = (b + (c << 2 & -64))[c & (int64_t)15];
a[1] = (b + (d << 2 & -64))[d & (int64_t)15];
c = a[14];
a[14] = (b + ((d = a[6]) << 2 & -64))[d & (int64_t)15];
a[6] = (b + (c << 2 & -64))[c & (int64_t)15];
c = a[2];
a[2] = (b + ((d = a[10]) << 2 & -64))[d & (int64_t)15];
a[10] = (b + (c << 2 & -64))[c & (int64_t)15];
c = a[15];
a[15] = (b + ((d = a[3]) << 2 & -64))[d & (int64_t)15];
a[3] = (b + ((d = a[7]) << 2 & -64))[d & (int64_t)15];
d = a[11];
a[11] = (b + (c << 2 & -64))[c & (int64_t)15];
a[7] = (b + (d << 2 & -64))[d & (int64_t)15];
a[0] = (b + ((c = a[0]) << 2 & -64))[c & (int64_t)15];
a[4] = (b + ((c = a[4]) << 2 & -64))[c & (int64_t)15];
a[8] = (b + ((c = a[8]) << 2 & -64))[c & (int64_t)15];
a = a + 48;
goto B_b;
B_d:;
c = a[17];
b = invSbox;
d = a[21];
a[21] = (b + (c << 2 & -64))[c & (int64_t)15];
c = a[13];
a[13] = (b + ((e = a[9]) << 2 & -64))[e & (int64_t)15];
a[17] = (b + (c << 2 & -64))[c & (int64_t)15];
a[9] = (b + ((c = a[5]) << 2 & -64))[c & (int64_t)15];
a[5] = (b + ((c = a[1]) << 2 & -64))[c & (int64_t)15];
a[1] = (b + (d << 2 & -64))[d & (int64_t)15];
c = a[22];
a[22] = (b + ((d = a[14]) << 2 & -64))[d & (int64_t)15];
a[14] = (b + ((d = a[6]) << 2 & -64))[d & (int64_t)15];
a[6] = (b + (c << 2 & -64))[c & (int64_t)15];
c = a[18];
a[18] = (b + ((d = a[10]) << 2 & -64))[d & (int64_t)15];
d = a[2];
a[2] = (b + (c << 2 & -64))[c & (int64_t)15];
a[10] = (b + (d << 2 & -64))[d & (int64_t)15];
c = a[15];
a[15] = (b + ((d = a[3]) << 2 & -64))[d & (int64_t)15];
a[3] = (b + (c << 2 & -64))[c & (int64_t)15];
c = a[19];
a[19] = (b + ((d = a[7]) << 2 & -64))[d & (int64_t)15];
a[7] = (b + (c << 2 & -64))[c & (int64_t)15];
c = a[23];
a[23] = (b + ((d = a[11]) << 2 & -64))[d & (int64_t)15];
a[11] = (b + (c << 2 & -64))[c & (int64_t)15];
a[0] = (b + ((c = a[0]) << 2 & -64))[c & (int64_t)15];
a[4] = (b + ((c = a[4]) << 2 & -64))[c & (int64_t)15];
a[8] = (b + ((c = a[8]) << 2 & -64))[c & (int64_t)15];
a[12] = (b + ((c = a[12]) << 2 & -64))[c & (int64_t)15];
a[16] = (b + ((c = a[16]) << 2 & -64))[c & (int64_t)15];
a = a + 80;
goto B_b;
B_c:;
c = a[25];
b = invSbox;
d = a[29];
a[29] = (b + (c << 2 & -64))[c & (int64_t)15];
c = a[21];
a[21] = (b + ((e = a[17]) << 2 & -64))[e & (int64_t)15];
a[25] = (b + (c << 2 & -64))[c & (int64_t)15];
a[17] = (b + ((c = a[13]) << 2 & -64))[c & (int64_t)15];
a[13] = (b + ((c = a[9]) << 2 & -64))[c & (int64_t)15];
a[9] = (b + ((c = a[5]) << 2 & -64))[c & (int64_t)15];
a[5] = (b + ((c = a[1]) << 2 & -64))[c & (int64_t)15];
a[1] = (b + (d << 2 & -64))[d & (int64_t)15];
c = a[30];
a[30] = (b + ((d = a[18]) << 2 & -64))[d & (int64_t)15];
a[18] = (b + ((d = a[6]) << 2 & -64))[d & (int64_t)15];
a[6] = (b + ((d = a[26]) << 2 & -64))[d & (int64_t)15];
a[26] = (b + ((d = a[14]) << 2 & -64))[d & (int64_t)15];
a[14] = (b + ((d = a[2]) << 2 & -64))[d & (int64_t)15];
a[2] = (b + ((d = a[22]) << 2 & -64))[d & (int64_t)15];
d = a[10];
a[10] = (b + (c << 2 & -64))[c & (int64_t)15];
a[22] = (b + (d << 2 & -64))[d & (int64_t)15];
c = a[31];
a[31] = (b + ((d = a[15]) << 2 & -64))[d & (int64_t)15];
a[15] = (b + (c << 2 & -64))[c & (int64_t)15];
c = a[27];
a[27] = (b + ((d = a[11]) << 2 & -64))[d & (int64_t)15];
a[11] = (b + (c << 2 & -64))[c & (int64_t)15];
c = a[23];
a[23] = (b + ((d = a[7]) << 2 & -64))[d & (int64_t)15];
a[7] = (b + (c << 2 & -64))[c & (int64_t)15];
c = a[19];
a[19] = (b + ((d = a[3]) << 2 & -64))[d & (int64_t)15];
a[3] = (b + (c << 2 & -64))[c & (int64_t)15];
a[0] = (b + ((c = a[0]) << 2 & -64))[c & (int64_t)15];
a[4] = (b + ((c = a[4]) << 2 & -64))[c & (int64_t)15];
a[8] = (b + ((c = a[8]) << 2 & -64))[c & (int64_t)15];
a[12] = (b + ((c = a[12]) << 2 & -64))[c & (int64_t)15];
a[16] = (b + ((c = a[16]) << 2 & -64))[c & (int64_t)15];
a[20] = (b + ((c = a[20]) << 2 & -64))[c & (int64_t)15];
a[24] = (b + ((c = a[24]) << 2 & -64))[c & (int64_t)15];
a = a + 112;
B_b:;
b = a;
a = b[0];
b[0] = (invSbox + (a << 2 & -64))[a & (int64_t)15];
B_a:;
}

int AddRoundKey_InversMixColumn(int a, int b, int_ptr c) {
int64_t * f;
int64_t * g;
int64_t * h;
int64_t e;
int64_t j;
int64_t k;
int64_t l;
int64_t* d = stack_pointer - 128;
if (b < 1) goto B_a;
e = c * b;
c = 0;
while (1) {
c = a + ((f = c) << 4);
c[0] = c[0] ^ (g = word + (f + e << 2))[0];
h = c + 4;
h[0] = h[0] ^ (g + (int64_t)480)[0];
h = c + 8;
h[0] = h[0] ^ (g + (int64_t)960)[0];
c = c + 12;
c[0] = c[0] ^ (g + (int64_t)1440)[0];
g = f + 1;
c = g;
if (g != b) //continue L_b;
}
B_a:;
if (b <= 0) goto B_c;
c = 0;
while (1) {
int64_t i = c;
c = i << 2;
g = 0;
while (1) {
f = d + (h = (g = g) + c << 2);
f[0] =
(j =
select__if(
(e =
(h =
select__if((j = (e = select__if((e = (h = (a + (int))h)[0] << 1) ^ 283,
e,
(h & 2147483520) == 128) ^
h) <<
1) ^
283,
j,
(e & 2147483520) == 128) ^
h) <<
1) ^
283,
e,
(h & 2147483520) == 128));
f[0] =
(j =
((h = a[((e = g + 1) & 3) | (int))c] ^
select__if(
(k =
(h =
h ^
select__if(
(l =
(k = select__if((k = h << 1) ^ 283, k, (h & 2147483520) == 128)) << 1) ^
283,
l,
(k & 2147483520) == 128)) <<
1) ^
283,
k,
(h & 2147483520) == 128)) ^
j);
f[0] =
(h =
(select__if(
(l =
(k =
select__if(
(l = (k = select__if((k = (h = a[(g + 2 & 3) | (int))c] << 1) ^ 283,
k,
(h & 2147483520) == 128) ^
h) <<
1) ^
283,
l,
(k & 2147483520) == 128)) <<
1) ^
283,
l,
(k & 2147483520) == 128) ^
h) ^
j);
f[0] =
(select__if(
(k =
(j =
select__if(
(k = (j = select__if((j = (g = a[(g + -1 & 3) | (int))c] << 1) ^ 283,
j,
(g & 2147483520) == 128)) <<
1) ^
283,
k,
(j & 2147483520) == 128)) <<
1) ^
283,
k,
(j & 2147483520) == 128) ^
g) ^
h;
g = e;
if (e != 4) //continue L_e;
}
g = i + 1;
c = g;
if (g != b) //continue L_d;
}
B_c:;
if (b <= 0) goto B_f;
c = 0;
while (1) {
(a + (c = (g = c) << (int64_t)4))[0] = (d + (int64_t)c)[0];
(a + (f = c | (int64_t)4))[0] = (d + (int64_t)f)[0];
(a + (f = c | (int64_t)8))[0] = (d + (int64_t)f)[0];
(a + (c = c | (int64_t)12))[0] = (d + (int64_t)c)[0];
g = g + 1;
c = g;
if (g != b) //continue L_g;
}
B_f:;
return 0;
}

int SubByte(int a) {
int64_t b;
return (Sbox + ((b = a / 16) << 6))[a - (b << (int64_t)4)];
}

int aes_main() {
{ a (long,)a (long,)b (long,)c (long,)d (long,)e (long,)f (long,)g (long)h } =
statemt;
a.h = 223338299399L;
a.g = 236223201504L;
a.f = 695784702104L;
a.e = 210453397553L;
a.d = 605590388784L;
a.c = 386547056776L;
a.b = 721554505974L;
a.a = 287762808882L;
{ b (long,)a (long,)b (long,)c (long,)d (long,)e (long,)f (long,)g (long)h } =
key;
b.h = 257698037839L;
b.g = 889058230281L;
b.f = 584115552277L;
b.e = 1060856922283L;
b.d = 712964571346L;
b.c = 747324309544L;
b.b = 94489280533L;
b.a = 541165879339L;
encrypt(a, b, 128128);
decrypt(a, b, 128128);
return 0;
}

int submain() {
{ b (long,)a (long,)b (long,)c (long,)d (long,)e (long,)f (long,)g (long)h }
double f;
int64_t* a = stack_pointer - 64;
stack_pointer = a;
main_result[0] = 0;
b = gettimeofday(a + 48, 0);
if (eqz(b)) goto B_a;
a[8] = b;
iprintf(memory_base + 2304, a + 32);
B_a:;
b = statemt;
b.h = 223338299399L;
b.g = 236223201504L;
b.f = 695784702104L;
b.e = 210453397553L;
b.d = 605590388784L;
b.c = 386547056776L;
b.b = 721554505974L;
b.a = 287762808882L;
{ c (long,)a (long,)b (long,)c (long,)d (long,)e (long,)f (long,)g (long)h } =
key;
c.a = 541165879339L;
c.b = 94489280533L;
c.c = 747324309544L;
c.d = 712964571346L;
c.e = 1060856922283L;
c.f = 584115552277L;
c.g = 889058230281L;
c.h = 257698037839L;
int64_t d = (int64_t)a[14];
long e = (long)a[6];
(double)startTimer[0] =
f64_convert_i32_s(d) * 0.000001 + f64_convert_i64_s(e);
encrypt(b, c, 128128);
decrypt(b, c, 128128);
b = gettimeofday(a + 48, 0);
if (eqz(b)) goto B_b;
a[4] = b;
iprintf(memory_base + 2304, a + 16);
B_b:;
b = (int64_t)a[14];
e = (long)a[6];
(double)endTimer[0] =
(f = f64_convert_i32_s(b) * 0.000001 + f64_convert_i64_s(e));
a[0] = f - (double)startTimer[0];
small_printf(memory_base + 2339, a);
b = (int64_t)main_result[0];
stack_pointer = a + 64;
return b;
}