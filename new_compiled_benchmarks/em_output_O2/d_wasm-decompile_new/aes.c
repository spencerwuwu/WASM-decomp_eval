typedef struct struct_1 {
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    int g;
    int h;
    int i;
    int j;
    int k;
    int l;
    int m;
    int n;
    int o;
    int p;
} struct_1;
typedef struct struct_2 {
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    int g;
    int h;
    int i;
    int j;
    int k;
    int l;
    int m;
    int n;
    int o;
    int p;
    int q;
    int r;
    int s;
    int t;
    int u;
    int v;
    int w;
    int x;
    int y;
    int z;
    int aa;
    int ba;
    int ca;
    int da;
    int ea;
    int fa;
} struct_2;
typedef struct struct_3 {
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    int g;
    int h;
    int i;
    int j;
    int k;
    int l;
    int m;
    int n;
    int o;
    int p;
} struct_3;


extern int64_t stack_pointer;
extern int64_t memory_base;
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
int64_t nb_1 = 2228;
int64_t round_val_1 = 2224;
int64_t word_1 = 2240;
int64_t main_result_1 = 2232;
int64_t Sbox_1 = 128;
int64_t Rcon0_1 = 0;
int64_t invSbox_1 = 1152;
int64_t statemt_1 = 4160;
int64_t key_1 = 4288;
int64_t startTimer_1 = 4416;
int64_t endTimer_1 = 4424;
int64_t type = 4432;








void wasm_call_ctors() {
no;
}

void wasm_apply_data_relocs() {
no;
}

int encrypt(struct_1 a, int_ptr b, int c) {
int64_t * e;
int64_t * g;
KeySchedule(c, b);
b = 6;
int64_t * d = 2;
int64_t f = 4;
if (c <= 192191) {
if (c <= 128255) {
if (c == 128128) goto B_e;
if (c != 128192) goto B_a;
goto B_b;
}
if (c == 128256) goto B_f;
if (c != 192128) goto B_a;
nb[0] = 4;
round_val[0] = 2;
goto B_a;
}
if (c <= 256127) {
if (c == 192192) goto B_b;
if (c == 192256) goto B_f;
goto B_a;
}
if (c == 256128) goto B_d;
if (c == 256192) goto B_c;
if (c != 256256) goto B_a;
B_f:;
b = 8;
d = 4;
goto B_b;
B_e:;
nb[0] = 4;
round_val[0] = 0;
goto B_a;
B_d:;
nb[0] = 4;
round_val[0] = 4;
goto B_a;
B_c:;
nb[0] = 6;
round_val[0] = 4;
f = 6;
goto B_a;
B_b:;
nb[0] = b;
round_val[0] = d;
if (c <= 192255) {
if (c == 128192) goto B_k;
if (c == 128256) goto B_j;
if (c == 192192) goto B_k;
goto B_a;
}
if (c == 192256) goto B_j;
if (c == 256256) goto B_j;
if (c != 256192) goto B_a;
B_k:;
f = 6;
goto B_a;
B_j:;
f = 8;
B_a:;
d = 0;
while (1) {
b = a + (d << 4);
b[0] = b[0] ^ (e = (e = word) + (d << 2))[0];
g = b + 4;
g[0] = g[0] ^ e[120];
g = b + 8;
g[0] = g[0] ^ e[240];
b = b + 12;
b[0] = b[0] ^ (e + (int64_t)1440)[0];
d = d + 1;
if (d != f) //continue L_m;
}
b = 1;
if (int64_t)(round_val[0] < -8) {
e = 1;
goto B_n;
}
while (1) {
ByteSub_ShiftRow(a, (d = nb)[0]);
MixColumn_AddRoundKey(a, d[0], b);
d = b < (int64_t)round_val[0] + 9;
e = b + 1;
b = e;
if (d) //continue L_p;
}
B_n:;
ByteSub_ShiftRow(a, (int))nb[0];
f = 4;
if (c <= 192255) {
if (c == 128192) goto B_s;
if (c == 128256) goto B_r;
if (c == 192192) goto B_s;
goto B_q;
}
if (c == 192256) goto B_r;
if (c == 256256) goto B_r;
if (c != 256192) goto B_q;
B_s:;
f = 6;
goto B_q;
B_r:;
f = 8;
B_q:;
c = e * f;
d = 0;
while (1) {
b = a + (d << 4);
b[0] = b[0] ^ (e = word + (c + d << 2))[0];
g = b + 4;
g[0] = g[0] ^ e[120];
g = b + 8;
g[0] = g[0] ^ e[240];
b = b + 12;
b[0] = b[0] ^ (e + (int64_t)1440)[0];
d = d + 1;
if (d != f) //continue L_u;
}
e = main_result;
e[0] =
e[0] + ((d = a.a) != 57) + ((b = a.b) != 37) + (a.c != 132) +
(a.d != 29) +
(a.e != 2) +
(a.f != 220) +
(a.g != 9) +
(a.h != 251) +
(a.i != 220) +
(a.j != 17) +
(a.k != 133) +
(a.l != 151) +
(a.m != 25) +
(a.n != 106) +
(a.o != 11) +
(a.p != 50);
return 0;
}

int KeySchedule(int_ptr a, struct_2 b) {
int64_t * e;
int64_t d;
int64_t f;
int64_t i;
int64_t * c = 4;
int64_t g = -1;
int64_t h = {
d = {
if (a <= 192191) {
e = 1;
if (a <= 128255) {
d = 11;
if (a != 128128) goto B_j;
goto B_c;
}
if (a == 128256) goto B_i;
if (a != 192128) goto B_a;
d = 13;
goto B_d;
}
if (a <= 256127) {
if (a == 192192) goto B_h;
if (a != 192256) goto B_a;
d = 15;
c = 8;
goto B_d;
}
if (a == 256128) goto B_g;
if (a == 256192) goto B_f;
if (a != 256256) goto B_a;
d = 15;
i = 8;
f = 1;
c = 8;
0;
goto B_b;
B_j:;
if (a != 128192) goto B_a;
d = 13;
c = 6;
goto B_c;
B_i:;
d = 15;
c = 8;
goto B_c;
B_h:;
d = 13;
i = 6;
c = 6;
1;
goto B_b;
B_g:;
15;
goto B_e;
B_f:;
c = 6;
15;
B_e:;
}
i = 8;
f = 1;
0;
goto B_b;
B_d:;
i = 6;
e = 0;
1;
goto B_b;
B_c:;
i = 4;
0;
B_b:;
}
a = word;
a[0] = (g = b.a);
a[120] = b.b;
a[240] = b.c;
a[360] = b.d;
a[1] = b.e;
a[121] = b.f;
a[241] = b.g;
(a + 1444)[0] = b.h;
a[2] = b.i;
a[122] = b.j;
a[242] = b.k;
(a + 1448)[0] = b.l;
a[3] = b.m;
a[123] = b.n;
a[243] = b.o;
(a + 1452)[0] = b.p;
if (e) goto B_n;
a = word;
a[4] = (g = b.q);
a[124] = b.r;
a[244] = b.s;
(a + 1456)[0] = b.t;
a[5] = b.u;
a[125] = b.v;
a[245] = b.w;
(a + 1460)[0] = b.x;
if (h) goto B_n;
a = word;
a[6] = (g = b.y);
a[126] = b.z;
a[246] = b.aa;
(a + 1464)[0] = b.ba;
a[7] = b.ca;
a[127] = b.da;
a[247] = b.ea;
(a + 1468)[0] = b.fa;
B_n:;
int64_t j = c * d;
int64_t k = f ^ 1;
b = i;
while (1) {
a = b - 1;
d =
{
c = b - (g = b / i) * i;
if (eqz(c)) {
f = Sbox;
c =
f + ((e = (c = ((a = word + (a << 2)) + (int))1440)[0] / 16) << 6) +
(c - (e << 4) << 2);
e = f + ((d = (e = a[240]) / 16) << 6) + (e - (d << 4) << 2);
h = (f + ((h = (d = a[120]) / 16) << 6))[d - (h << (int64_t)4)] ^
(Rcon0 + (g << 2) - (int64_t)4)[0];
g = a[0];
goto B_q;
}
a = word + (a << 2);
h = a[0];
g = (a + (int64_t)1440)[0];
f = a[240];
d = a[120];
d;
if (k | c != 4) goto B_p;
a = Sbox;
c = a + ((c = f / 16) << 6) + (f - (c << 4) << 2);
e = a + ((e = d / 16) << 6) + (d - (e << 4) << 2);
h = (a + ((f = h / 16) << 6))[h - (f << (int64_t)4)];
B_q:;
g = (Sbox + ((a = g / 16) << 6))[g - (a << (int64_t)4)];
f = c[0];
e[0];
B_p:;
}
a = word;
(a + (c = b << (int64_t)2))[0] = h ^ (a + (e = b - i << (int64_t)2))[0];
h = a + 480;
(h + c)[0] = d ^ (e + (int64_t)h)[0];
d = a + 960;
(d + c)[0] = f ^ (d + (int64_t)e)[0];
a = a + 1440;
(a + c)[0] = g ^ (a + (int64_t)e)[0];
b = b + 1;
if (b != j) //continue L_o;
}
g = 0;
B_a:;
return g;
}

void ByteSub_ShiftRow(int_ptr a, int b) {
int64_t * c;
int64_t e;
int64_t d;
int64_t g;
int64_t f;
c = {
// br_table[B_e, B_a, B_d, B_a, B_c, ..B_a](b - 4)
B_e:;
d = a[1];
a[1] = ((b = Sbox) + ((c = a[5]) << 2 & -64))[c & (int64_t)15];
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
e = 12;
f = 8;
g = 4;
a;
goto B_b;
B_d:;
d = a[1];
a[1] = ((b = Sbox) + ((c = a[5]) << 2 & -64))[c & (int64_t)15];
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
e = 20;
f = 16;
g = 12;
a + 32;
goto B_b;
B_c:;
d = a[1];
a[1] = ((b = Sbox) + ((c = a[5]) << 2 & -64))[c & (int64_t)15];
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
e = 28;
f = 24;
g = 20;
a - -64;
B_b:;
}
c[0] = ((b = Sbox) + ((d = c[0]) << 2 & -64))[d & (int64_t)15];
c = a + (g << 2);
c[0] = (b + ((c = c[0]) << 2 & -64))[c & (int64_t)15];
c = a + (f << 2);
c[0] = (b + ((c = c[0]) << 2 & -64))[c & (int64_t)15];
a = a + (e << 2);
a[0] = (b + ((a = a[0]) << 2 & -64))[a & (int64_t)15];
B_a:;
}

int MixColumn_AddRoundKey(int a, int b, int c) {
int64_t k;
int64_t d;
int64_t * l;
int64_t h;
int64_t f;
int64_t g;
int64_t i;
int64_t m;
int64_t j;
int64_t o;
int64_t p;
int64_t* e = stack_pointer - 128;
if (b <= 0) goto B_a;
int64_t n = b * c;
while (1) {
c = (a + (d = k << (int64_t)4))[0];
(d + (int64_t)e)[0] =
(((l = word + (k + n << 2))[0] ^
select__if(
(j = (i = (g = (f = (a + (h = d | (int))4))[0] << 1) ^ f) ^
select__if((m = c << 1) ^ 283, m, (c & 2147483520) == 128)) ^
283,
j,
(i & -256) == 256)) ^
(i = (a + (j = d | (int)))8))[0] ^
(d = (a + (o = d | (int))12))[0];
(e + (int64_t)h)[0] =
d ^
(c ^
(l[120] ^
select__if((g = (p = i ^ (h = i << 1)) ^
select__if(g ^ 283, g, (f & 2147483520) == 128)) ^
283,
g,
(p & -256) == 256)));
(e + (int64_t)j)[0] =
f ^
(c ^
(l[240] ^
select__if((h = (j = d ^ (g = d << 1)) ^
select__if(h ^ 283, h, (i & 2147483520) == 128)) ^
283,
h,
(j & -256) == 256)));
(e + (int64_t)o)[0] =
i ^
(f ^
((l + (int64_t)1440)[0] ^
select__if(
(d = (c = c ^ m) ^ select__if(g ^ 283, g, (d & 2147483520) == 128)) ^
283,
d,
(c & -256) == 256)));
k = k + 1;
if (k != b) //continue L_b;
}
f = 0;
if (b <= 0) goto B_a;
while (1) {
(a + (c = f << (int64_t)4))[0] = (c + (int64_t)e)[0];
(a + (d = c | (int64_t)4))[0] = (d + (int64_t)e)[0];
(a + (d = c | (int64_t)8))[0] = (d + (int64_t)e)[0];
(a + (c = c | (int64_t)12))[0] = (c + (int64_t)e)[0];
f = f + 1;
if (f != b) //continue L_c;
}
B_a:;
return 0;
}

int AddRoundKey(int a, int_ptr b, int c) {
int64_t * e;
int64_t d = 4;
if (b <= 192255) {
if (b == 128192) goto B_c;
if (b == 128256) goto B_b;
if (b == 192192) goto B_c;
goto B_a;
}
if (b == 192256) goto B_b;
if (b == 256256) goto B_b;
if (b != 256192) goto B_a;
B_c:;
d = 6;
goto B_a;
B_b:;
d = 8;
B_a:;
int64_t g = c * d;
c = 0;
while (1) {
b = a + (c << 4);
b[0] = b[0] ^ (e = word + (c + g << 2))[0];
int64_t * f = b + 4;
f[0] = f[0] ^ e[120];
f = b + 8;
f[0] = f[0] ^ e[240];
b = b + 12;
b[0] = b[0] ^ (e + (int64_t)1440)[0];
c = c + 1;
if (c != d) //continue L_e;
}
return 0;
}

int decrypt(struct_3 a, int_ptr b, int c) {
int64_t e;
int64_t * d;
int64_t * f;
int64_t * g;
KeySchedule(c, b);
b = {
if (c <= 192191) {
if (c <= 128255) {
if (c == 128128) goto B_h;
if (c != 128192) goto B_i;
goto B_d;
}
if (c == 128256) goto B_k;
if (c != 192128) goto B_i;
e = 4;
nb[0] = 4;
b = 12;
round_val[0] = 12;
goto B_a;
}
if (c > 256127) goto B_j;
if (c == 192192) goto B_d;
if (c != 192256) goto B_i;
B_k:;
nb[0] = 8;
round_val[0] = 14;
14;
goto B_c;
B_j:;
if (c == 256128) goto B_g;
if (c == 256192) goto B_f;
if (c == 256256) goto B_e;
B_i:;
(int64_t)round_val[0];
goto B_c;
B_h:;
e = 4;
nb[0] = 4;
b = 10;
round_val[0] = 10;
goto B_a;
B_g:;
e = 4;
nb[0] = 4;
b = 14;
round_val[0] = 14;
goto B_a;
B_f:;
nb[0] = 6;
b = 14;
round_val[0] = 14;
e = 6;
goto B_a;
B_e:;
nb[0] = 8;
b = 14;
round_val[0] = 14;
goto B_b;
B_d:;
nb[0] = 6;
round_val[0] = 12;
12;
B_c:;
}
e = 4;
if (c <= 192191) {
if (c == 128192) goto B_n;
if (c == 128256) goto B_b;
goto B_a;
}
if (c == 256192) goto B_n;
if (c == 192256) goto B_b;
if (c != 192192) goto B_a;
B_n:;
e = 6;
goto B_a;
B_b:;
e = 8;
B_a:;
int64_t* h = b * e;
while (1) {
b = a + (d << 4);
b[0] = b[0] ^ (f = word + (d + h << 2))[0];
g = b + 4;
g[0] = g[0] ^ f[120];
g = b + 8;
g[0] = g[0] ^ f[240];
b = b + 12;
b[0] = b[0] ^ (f + (int64_t)1440)[0];
d = d + 1;
if (d != e) //continue L_p;
}
InversShiftRow_ByteSub(a, (int))nb[0];
b = (int64_t)round_val[0];
if (b >= 2) {
while (1) {
AddRoundKey_InversMixColumn(a, (d = nb)[0], f = b - 1);
InversShiftRow_ByteSub(a, d[0]);
d = b > 2;
b = f;
if (d) //continue L_r;
}
}
e = 4;
if (c <= 192255) {
if (c == 128192) goto B_u;
if (c == 128256) goto B_t;
if (c == 192192) goto B_u;
goto B_s;
}
if (c == 192256) goto B_t;
if (c == 256256) goto B_t;
if (c != 256192) goto B_s;
B_u:;
e = 6;
goto B_s;
B_t:;
e = 8;
B_s:;
d = 0;
while (1) {
b = a + (d << 4);
b[0] = b[0] ^ (f = (f = word) + (d << 2))[0];
g = b + 4;
g[0] = g[0] ^ f[120];
g = b + 8;
g[0] = g[0] ^ f[240];
b = b + 12;
b[0] = b[0] ^ (f + (int64_t)1440)[0];
d = d + 1;
if (d != e) //continue L_w;
}
f = main_result;
f[0] =
f[0] + ((d = a.a) != 50) + ((b = a.b) != 67) + (a.c != 246) +
(a.d != 168) +
(a.e != 136) +
(a.f != 90) +
(a.g != 48) +
(a.h != 141) +
(a.i != 49) +
(a.j != 49) +
(a.k != 152) +
(a.l != 162) +
(a.m != 224) +
(a.n != 55) +
(a.o != 7) +
(a.p != 52);
return 0;
}

void InversShiftRow_ByteSub(int_ptr a, int b) {
int64_t * c;
int64_t e;
int64_t d;
int64_t g;
int64_t f;
c = {
// br_table[B_e, B_a, B_d, B_a, B_c, ..B_a](b - 4)
B_e:;
d = a[13];
a[13] = ((b = invSbox) + ((c = a[9]) << 2 & -64))[c & (int64_t)15];
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
e = 12;
f = 8;
g = 4;
a;
goto B_b;
B_d:;
d = a[21];
a[21] = ((b = invSbox) + ((c = a[17]) << 2 & -64))[c & (int64_t)15];
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
e = 20;
f = 16;
g = 12;
a + 32;
goto B_b;
B_c:;
d = a[29];
a[29] = ((b = invSbox) + ((c = a[25]) << 2 & -64))[c & (int64_t)15];
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
e = 28;
f = 24;
g = 20;
a - -64;
B_b:;
}
c[0] = ((b = invSbox) + ((d = c[0]) << 2 & -64))[d & (int64_t)15];
c = a + (g << 2);
c[0] = (b + ((c = c[0]) << 2 & -64))[c & (int64_t)15];
c = a + (f << 2);
c[0] = (b + ((c = c[0]) << 2 & -64))[c & (int64_t)15];
a = a + (e << 2);
a[0] = (b + ((a = a[0]) << 2 & -64))[a & (int64_t)15];
B_a:;
}

int AddRoundKey_InversMixColumn(int a, int b, int_ptr c) {
int64_t f;
int64_t * h;
int64_t k;
int64_t d;
int64_t g;
int64_t * e;
int64_t* i = stack_pointer - 128;
if (b <= 0) goto B_a;
int64_t j = b * c;
while (1) {
c = a + (f << 4);
c[0] = c[0] ^ (h = word + (f + j << 2))[0];
e = c + 4;
e[0] = e[0] ^ h[120];
e = c + 8;
e[0] = e[0] ^ h[240];
c = c + 12;
c[0] = c[0] ^ (h + (int64_t)1440)[0];
f = f + 1;
if (f != b) //continue L_b;
}
if (b <= 0) goto B_a;
while (1) {
f = k << 2;
c = 0;
while (1) {
(i + (e = c + f << (int64_t)2))[0] =
(((((select__if(
(g =
(d =
select__if(
(g =
(d = select__if((d = (h = a[((j = c + 1) & 3) | (int))f] << 1) ^ 283,
d,
(h & 2147483520) == 128)) <<
1) ^
283,
g,
(d & 2147483520) == 128) ^
h) <<
1) ^
283,
g,
(d & 2147483520) == 128) ^
select__if(
(d =
(e =
select__if((g = (d = select__if((d = (e = (a + (int))e)[0] << 1) ^ 283,
d,
(e & 2147483520) == 128) ^
e) <<
1) ^
283,
g,
(d & 2147483520) == 128) ^
e) <<
1) ^
283,
d,
(e & 2147483520) == 128)) ^
select__if(
(g =
(d =
select__if(
(g = (d = select__if((d = (e = a[(c + 2 & 3) | (int))f] << 1) ^ 283,
d,
(e & 2147483520) == 128) ^
e) <<
1) ^
283,
g,
(d & 2147483520) == 128)) <<
1) ^
283,
g,
(d & 2147483520) == 128)) ^
select__if(
(g =
(d =
select__if(
(g = (d = select__if((d = (c = a[(c - 1 & 3) | (int))f] << 1) ^ 283,
d,
(c & 2147483520) == 128)) <<
1) ^
283,
g,
(d & 2147483520) == 128)) <<
1) ^
283,
g,
(d & 2147483520) == 128)) ^
h) ^
e) ^
c;
c = j;
if (c != 4) //continue L_d;
}
k = k + 1;
if (k != b) //continue L_c;
}
f = 0;
if (b <= 0) goto B_a;
while (1) {
(a + (c = f << (int64_t)4))[0] = (c + (int64_t)i)[0];
(a + (h = c | (int64_t)4))[0] = (h + (int64_t)i)[0];
(a + (h = c | (int64_t)8))[0] = (h + (int64_t)i)[0];
(a + (c = c | (int64_t)12))[0] = (c + (int64_t)i)[0];
f = f + 1;
if (f != b) //continue L_e;
}
B_a:;
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
double d;
int64_t* b = stack_pointer + -64;
stack_pointer = b;
main_result[0] = 0;
{ a (long,)a (long,)b (long,)c (long,)d (long,)e (long,)f (long,)g (long)h } =
gettimeofday(b + 48, 0);
if (a) {
b[8] = a;
iprintf(memory_base + 2176, b + 32);
}
a = statemt;
a.h = 223338299399L;
a.g = 236223201504L;
a.f = 695784702104L;
a.e = 210453397553L;
a.d = 605590388784L;
a.c = 386547056776L;
a.b = 721554505974L;
a.a = 287762808882L;
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
(double)startTimer[0] =
(int))f64_convert_i32_s(b[14] * 0.000001 +
(long))f64_convert_i64_s(b[6];
encrypt(a, c, 128128);
decrypt(a, c, 128128);
a = gettimeofday(b + 48, 0);
if (a) {
b[4] = a;
iprintf(memory_base + 2176, b + 16);
}
(double)endTimer[0] =
(d = f64_convert_i32_s(a = (int))b[14] * 0.000001 +
(long)))f64_convert_i64_s(b[6];
b[0] = d - (double)startTimer[0];
small_printf(memory_base + 2211, b);
a = (int64_t)main_result[0];
stack_pointer = b - -64;
return a;
}