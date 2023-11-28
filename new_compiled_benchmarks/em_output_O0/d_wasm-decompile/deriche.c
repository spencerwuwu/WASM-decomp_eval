import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
import global table_base:int;
import global stderr:int;

data rodata(offset: memory_base) =
  "imgOut\00begin dump: %s\00%0.2f \00\0aend   dump: %s\0a\00==BEGIN DUMP"
  "_ARRAYS==\0a\00==END   DUMP_ARRAYS==\0a\00";

import function expf(a:float):float;

import function powf(a:float, b:float):float;

import function strcmp(a:int, b:int):int;

import function free(a:int);

import function fprintf(a:int, b:int, c:int):int;

import function legalimport_polybench_alloc_data(a:int, b:int, c:int):int;

export function wasm_call_ctors() {
}

export function wasm_apply_data_relocs() {
}

export function kernel_deriche(a:int, b:int, c:float, d:int, e:int, f:int, g:int) {
  var h:int = stack_pointer;
  var i:int = 128;
  var j:{ a:float, b:float, c:float, d:float, e:float, f:float, g:float, h:float, i:float, j:float, k:float, l:float, m:float, n:float, o:float, p:float, q:float, r:float, s:float, t:float, u:float, v:float, w:float, x:int, y:int, z:int, aa:int, ba:int, ca:int, da:float, ea:int, fa:int } = 
    h - i;
  stack_pointer = j;
  j.fa = a;
  j.ea = b;
  j.da = c;
  j.ca = d;
  j.ba = e;
  j.aa = f;
  j.z = g;
  var k:float = j.da;
  var l:float = -(k);
  var m:float = expf(l);
  var n:float = 1.0f;
  var o:float = n - m;
  var p:float = j.da;
  var q:float = -(p);
  var r:float = expf(q);
  var s:float = 1.0f;
  var t:float = s - r;
  var u:float = o * t;
  var v:float = j.da;
  var w:float = 2.0f;
  var x:float = w * v;
  var y:float = j.da;
  var z:float = -(y);
  var aa:float = expf(z);
  var ba:float = x * aa;
  var ca:float = 1.0f;
  var da:float = ba + ca;
  var ea:float = j.da;
  var fa:float = 2.0f;
  var ga:float = fa * ea;
  var ha:float = expf(ga);
  var ia:float = da - ha;
  var ja:float = u / ia;
  j.m = ja;
  var ka:float = j.m;
  j.h = ka;
  j.l = ka;
  var la:float = j.m;
  var ma:float = j.da;
  var na:float = -(ma);
  var oa:float = expf(na);
  var pa:float = la * oa;
  var qa:float = j.da;
  var ra:float = 1.0f;
  var sa:float = qa - ra;
  var ta:float = pa * sa;
  j.g = ta;
  j.k = ta;
  var ua:float = j.m;
  var va:float = j.da;
  var wa:float = -(va);
  var xa:float = expf(wa);
  var ya:float = ua * xa;
  var za:float = j.da;
  var ab:float = 1.0f;
  var bb:float = za + ab;
  var cb:float = ya * bb;
  j.f = cb;
  j.j = cb;
  var db:float = j.m;
  var eb:float = -(db);
  var fb:float = j.da;
  var gb:float = -2.0f;
  var hb:float = gb * fb;
  var ib:float = expf(hb);
  var jb:float = eb * ib;
  j.e = jb;
  j.i = jb;
  var kb:float = j.da;
  var lb:float = -(kb);
  var mb:float = 2.0f;
  var nb:float = powf(mb, lb);
  j.d = nb;
  var ob:float = j.da;
  var pb:float = -2.0f;
  var qb:float = pb * ob;
  var rb:float = expf(qb);
  var sb:float = -(rb);
  j.c = sb;
  var tb:float = 1.0f;
  j.a = tb;
  var ub:float = 1.0f;
  j.b = ub;
  var vb:int = 0;
  j.y = vb;
  loop L_b {
    var wb:int = j.y;
    var xb:int = j.fa;
    var yb:int = wb;
    var zb:int = xb;
    var ac:int = yb < zb;
    var bc:int = 1;
    var cc:int = ac & bc;
    if (eqz(cc)) goto B_a;
    var dc:int = 0;
    var ec:float = f32_convert_i32_s(dc);
    j.u = ec;
    var fc:int = 0;
    var gc:float = f32_convert_i32_s(fc);
    j.t = gc;
    var hc:int = 0;
    var ic:float = f32_convert_i32_s(hc);
    j.w = ic;
    var jc:int = 0;
    j.x = jc;
    loop L_d {
      var kc:int = j.x;
      var lc:int = j.ea;
      var mc:int = kc;
      var nc:int = lc;
      var oc:int = mc < nc;
      var pc:int = 1;
      var qc:int = oc & pc;
      if (eqz(qc)) goto B_c;
      var rc:float = j.l;
      var sc:int = j.ca;
      var tc:int = j.y;
      var uc:int = 8640;
      var vc:int = tc * uc;
      var wc:int = sc + vc;
      var xc:int = j.x;
      var yc:int = 2;
      var zc:int = xc << yc;
      var ad:float_ptr = wc + zc;
      var bd:float = ad[0];
      var cd:float = j.k;
      var dd:float = j.w;
      var ed:float = cd * dd;
      var fd:float = rc * bd;
      var gd:float = fd + ed;
      var hd:float = j.d;
      var id:float = j.u;
      var jd:float = hd * id;
      var kd:float = jd + gd;
      var ld:float = j.c;
      var md:float = j.t;
      var nd:float = ld * md;
      var od:float = nd + kd;
      var pd:int = j.aa;
      var qd:int = j.y;
      var rd:int = 8640;
      var sd:int = qd * rd;
      var td:int = pd + sd;
      var ud:int = j.x;
      var vd:int = 2;
      var wd:int = ud << vd;
      var xd:float_ptr = td + wd;
      xd[0] = od;
      var yd:int = j.ca;
      var zd:int = j.y;
      var ae:int = 8640;
      var be:int = zd * ae;
      var ce:int = yd + be;
      var de:int = j.x;
      var ee:int = 2;
      var fe:int = de << ee;
      var ge:float_ptr = ce + fe;
      var he:float = ge[0];
      j.w = he;
      var ie:float = j.u;
      j.t = ie;
      var je:int = j.aa;
      var ke:int = j.y;
      var le:int = 8640;
      var me:int = ke * le;
      var ne:int = je + me;
      var oe:int = j.x;
      var pe:int = 2;
      var qe:int = oe << pe;
      var re:float_ptr = ne + qe;
      var se:float = re[0];
      j.u = se;
      var te:int = j.x;
      var ue:int = 1;
      var ve:int = te + ue;
      j.x = ve;
      continue L_d;
    }
    unreachable;
    label B_c:
    var we:int = j.y;
    var xe:int = 1;
    var ye:int = we + xe;
    j.y = ye;
    continue L_b;
  }
  unreachable;
  label B_a:
  var ze:int = 0;
  j.y = ze;
  loop L_f {
    var af:int = j.y;
    var bf:int = j.fa;
    var cf:int = af;
    var df:int = bf;
    var ef:int = cf < df;
    var ff:int = 1;
    var gf:int = ef & ff;
    if (eqz(gf)) goto B_e;
    var hf:int = 0;
    var if:float = f32_convert_i32_s(hf);
    j.o = if;
    var jf:int = 0;
    var kf:float = f32_convert_i32_s(jf);
    j.n = kf;
    var lf:int = 0;
    var mf:float = f32_convert_i32_s(lf);
    j.s = mf;
    var nf:int = 0;
    var of:float = f32_convert_i32_s(nf);
    j.r = of;
    var pf:int = j.ea;
    var qf:int = 1;
    var rf:int = pf - qf;
    j.x = rf;
    loop L_h {
      var sf:int = j.x;
      var tf:int = 0;
      var uf:int = sf;
      var vf:int = tf;
      var wf:int = uf >= vf;
      var xf:int = 1;
      var yf:int = wf & xf;
      if (eqz(yf)) goto B_g;
      var zf:float = j.j;
      var ag:float = j.s;
      var bg:float = j.i;
      var cg:float = j.r;
      var dg:float = bg * cg;
      var eg:float = zf * ag;
      var fg:float = eg + dg;
      var gg:float = j.d;
      var hg:float = j.o;
      var ig:float = gg * hg;
      var jg:float = ig + fg;
      var kg:float = j.c;
      var lg:float = j.n;
      var mg:float = kg * lg;
      var ng:float = mg + jg;
      var og:int = j.z;
      var pg:int = j.y;
      var qg:int = 8640;
      var rg:int = pg * qg;
      var sg:int = og + rg;
      var tg:int = j.x;
      var ug:int = 2;
      var vg:int = tg << ug;
      var wg:float_ptr = sg + vg;
      wg[0] = ng;
      var xg:float = j.s;
      j.r = xg;
      var yg:int = j.ca;
      var zg:int = j.y;
      var ah:int = 8640;
      var bh:int = zg * ah;
      var ch:int = yg + bh;
      var dh:int = j.x;
      var eh:int = 2;
      var fh:int = dh << eh;
      var gh:float_ptr = ch + fh;
      var hh:float = gh[0];
      j.s = hh;
      var ih:float = j.o;
      j.n = ih;
      var jh:int = j.z;
      var kh:int = j.y;
      var lh:int = 8640;
      var mh:int = kh * lh;
      var nh:int = jh + mh;
      var oh:int = j.x;
      var ph:int = 2;
      var qh:int = oh << ph;
      var rh:float_ptr = nh + qh;
      var sh:float = rh[0];
      j.o = sh;
      var th:int = j.x;
      var uh:int = -1;
      var vh:int = th + uh;
      j.x = vh;
      continue L_h;
    }
    unreachable;
    label B_g:
    var wh:int = j.y;
    var xh:int = 1;
    var yh:int = wh + xh;
    j.y = yh;
    continue L_f;
  }
  unreachable;
  label B_e:
  var zh:int = 0;
  j.y = zh;
  loop L_j {
    var ai:int = j.y;
    var bi:int = j.fa;
    var ci:int = ai;
    var di:int = bi;
    var ei:int = ci < di;
    var fi:int = 1;
    var gi:int = ei & fi;
    if (eqz(gi)) goto B_i;
    var hi:int = 0;
    j.x = hi;
    loop L_l {
      var ii:int = j.x;
      var ji:int = j.ea;
      var ki:int = ii;
      var li:int = ji;
      var mi:int = ki < li;
      var ni:int = 1;
      var oi:int = mi & ni;
      if (eqz(oi)) goto B_k;
      var pi:float = j.b;
      var qi:int = j.aa;
      var ri:int = j.y;
      var si:int = 8640;
      var ti:int = ri * si;
      var ui:int = qi + ti;
      var vi:int = j.x;
      var wi:int = 2;
      var xi:int = vi << wi;
      var yi:float_ptr = ui + xi;
      var zi:float = yi[0];
      var aj:int = j.z;
      var bj:int = j.y;
      var cj:int = 8640;
      var dj:int = bj * cj;
      var ej:int = aj + dj;
      var fj:int = j.x;
      var gj:int = 2;
      var hj:int = fj << gj;
      var ij:float_ptr = ej + hj;
      var jj:float = ij[0];
      var kj:float = zi + jj;
      var lj:float = pi * kj;
      var mj:int = j.ba;
      var nj:int = j.y;
      var oj:int = 8640;
      var pj:int = nj * oj;
      var qj:int = mj + pj;
      var rj:int = j.x;
      var sj:int = 2;
      var tj:int = rj << sj;
      var uj:float_ptr = qj + tj;
      uj[0] = lj;
      var vj:int = j.x;
      var wj:int = 1;
      var xj:int = vj + wj;
      j.x = xj;
      continue L_l;
    }
    unreachable;
    label B_k:
    var yj:int = j.y;
    var zj:int = 1;
    var ak:int = yj + zj;
    j.y = ak;
    continue L_j;
  }
  unreachable;
  label B_i:
  var bk:int = 0;
  j.x = bk;
  loop L_n {
    var ck:int = j.x;
    var dk:int = j.ea;
    var ek:int = ck;
    var fk:int = dk;
    var gk:int = ek < fk;
    var hk:int = 1;
    var ik:int = gk & hk;
    if (eqz(ik)) goto B_m;
    var jk:int = 0;
    var kk:float = f32_convert_i32_s(jk);
    j.v = kk;
    var lk:int = 0;
    var mk:float = f32_convert_i32_s(lk);
    j.u = mk;
    var nk:int = 0;
    var ok:float = f32_convert_i32_s(nk);
    j.t = ok;
    var pk:int = 0;
    j.y = pk;
    loop L_p {
      var qk:int = j.y;
      var rk:int = j.fa;
      var sk:int = qk;
      var tk:int = rk;
      var uk:int = sk < tk;
      var vk:int = 1;
      var wk:int = uk & vk;
      if (eqz(wk)) goto B_o;
      var xk:float = j.h;
      var yk:int = j.ba;
      var zk:int = j.y;
      var al:int = 8640;
      var bl:int = zk * al;
      var cl:int = yk + bl;
      var dl:int = j.x;
      var el:int = 2;
      var fl:int = dl << el;
      var gl:float_ptr = cl + fl;
      var hl:float = gl[0];
      var il:float = j.g;
      var jl:float = j.v;
      var kl:float = il * jl;
      var ll:float = xk * hl;
      var ml:float = ll + kl;
      var nl:float = j.d;
      var ol:float = j.u;
      var pl:float = nl * ol;
      var ql:float = pl + ml;
      var rl:float = j.c;
      var sl:float = j.t;
      var tl:float = rl * sl;
      var ul:float = tl + ql;
      var vl:int = j.aa;
      var wl:int = j.y;
      var xl:int = 8640;
      var yl:int = wl * xl;
      var zl:int = vl + yl;
      var am:int = j.x;
      var bm:int = 2;
      var cm:int = am << bm;
      var dm:float_ptr = zl + cm;
      dm[0] = ul;
      var em:int = j.ba;
      var fm:int = j.y;
      var gm:int = 8640;
      var hm:int = fm * gm;
      var im:int = em + hm;
      var jm:int = j.x;
      var km:int = 2;
      var lm:int = jm << km;
      var mm:float_ptr = im + lm;
      var nm:float = mm[0];
      j.v = nm;
      var om:float = j.u;
      j.t = om;
      var pm:int = j.aa;
      var qm:int = j.y;
      var rm:int = 8640;
      var sm:int = qm * rm;
      var tm:int = pm + sm;
      var um:int = j.x;
      var vm:int = 2;
      var wm:int = um << vm;
      var xm:float_ptr = tm + wm;
      var ym:float = xm[0];
      j.u = ym;
      var zm:int = j.y;
      var an:int = 1;
      var bn:int = zm + an;
      j.y = bn;
      continue L_p;
    }
    unreachable;
    label B_o:
    var cn:int = j.x;
    var dn:int = 1;
    var en:int = cn + dn;
    j.x = en;
    continue L_n;
  }
  unreachable;
  label B_m:
  var fn:int = 0;
  j.x = fn;
  loop L_r {
    var gn:int = j.x;
    var hn:int = j.ea;
    var in:int = gn;
    var jn:int = hn;
    var kn:int = in < jn;
    var ln:int = 1;
    var mn:int = kn & ln;
    if (eqz(mn)) goto B_q;
    var nn:int = 0;
    var on:float = f32_convert_i32_s(nn);
    j.q = on;
    var pn:int = 0;
    var qn:float = f32_convert_i32_s(pn);
    j.p = qn;
    var rn:int = 0;
    var sn:float = f32_convert_i32_s(rn);
    j.o = sn;
    var tn:int = 0;
    var un:float = f32_convert_i32_s(tn);
    j.n = un;
    var vn:int = j.fa;
    var wn:int = 1;
    var xn:int = vn - wn;
    j.y = xn;
    loop L_t {
      var yn:int = j.y;
      var zn:int = 0;
      var ao:int = yn;
      var bo:int = zn;
      var co:int = ao >= bo;
      var do:int = 1;
      var eo:int = co & do;
      if (eqz(eo)) goto B_s;
      var fo:float = j.f;
      var go:float = j.q;
      var ho:float = j.e;
      var io:float = j.p;
      var jo:float = ho * io;
      var ko:float = fo * go;
      var lo:float = ko + jo;
      var mo:float = j.d;
      var no:float = j.o;
      var oo:float = mo * no;
      var po:float = oo + lo;
      var qo:float = j.c;
      var ro:float = j.n;
      var so:float = qo * ro;
      var to:float = so + po;
      var uo:int = j.z;
      var vo:int = j.y;
      var wo:int = 8640;
      var xo:int = vo * wo;
      var yo:int = uo + xo;
      var zo:int = j.x;
      var ap:int = 2;
      var bp:int = zo << ap;
      var cp:float_ptr = yo + bp;
      cp[0] = to;
      var dp:float = j.q;
      j.p = dp;
      var ep:int = j.ba;
      var fp:int = j.y;
      var gp:int = 8640;
      var hp:int = fp * gp;
      var ip:int = ep + hp;
      var jp:int = j.x;
      var kp:int = 2;
      var lp:int = jp << kp;
      var mp:float_ptr = ip + lp;
      var np:float = mp[0];
      j.q = np;
      var op:float = j.o;
      j.n = op;
      var pp:int = j.z;
      var qp:int = j.y;
      var rp:int = 8640;
      var sp:int = qp * rp;
      var tp:int = pp + sp;
      var up:int = j.x;
      var vp:int = 2;
      var wp:int = up << vp;
      var xp:float_ptr = tp + wp;
      var yp:float = xp[0];
      j.o = yp;
      var zp:int = j.y;
      var aq:int = -1;
      var bq:int = zp + aq;
      j.y = bq;
      continue L_t;
    }
    unreachable;
    label B_s:
    var cq:int = j.x;
    var dq:int = 1;
    var eq:int = cq + dq;
    j.x = eq;
    continue L_r;
  }
  unreachable;
  label B_q:
  var fq:int = 0;
  j.y = fq;
  loop L_v {
    var gq:int = j.y;
    var hq:int = j.fa;
    var iq:int = gq;
    var jq:int = hq;
    var kq:int = iq < jq;
    var lq:int = 1;
    var mq:int = kq & lq;
    if (eqz(mq)) goto B_u;
    var nq:int = 0;
    j.x = nq;
    loop L_x {
      var oq:int = j.x;
      var pq:int = j.ea;
      var qq:int = oq;
      var rq:int = pq;
      var sq:int = qq < rq;
      var tq:int = 1;
      var uq:int = sq & tq;
      if (eqz(uq)) goto B_w;
      var vq:float = j.a;
      var wq:int = j.aa;
      var xq:int = j.y;
      var yq:int = 8640;
      var zq:int = xq * yq;
      var ar:int = wq + zq;
      var br:int = j.x;
      var cr:int = 2;
      var dr:int = br << cr;
      var er:float_ptr = ar + dr;
      var fr:float = er[0];
      var gr:int = j.z;
      var hr:int = j.y;
      var ir:int = 8640;
      var jr:int = hr * ir;
      var kr:int = gr + jr;
      var lr:int = j.x;
      var mr:int = 2;
      var nr:int = lr << mr;
      var or:float_ptr = kr + nr;
      var pr:float = or[0];
      var qr:float = fr + pr;
      var rr:float = vq * qr;
      var sr:int = j.ba;
      var tr:int = j.y;
      var ur:int = 8640;
      var vr:int = tr * ur;
      var wr:int = sr + vr;
      var xr:int = j.x;
      var yr:int = 2;
      var zr:int = xr << yr;
      var as:float_ptr = wr + zr;
      as[0] = rr;
      var bs:int = j.x;
      var cs:int = 1;
      var ds:int = bs + cs;
      j.x = ds;
      continue L_x;
    }
    unreachable;
    label B_w:
    var es:int = j.y;
    var fs:int = 1;
    var gs:int = es + fs;
    j.y = gs;
    continue L_v;
  }
  unreachable;
  label B_u:
  var hs:int = 128;
  var is:int = j + hs;
  stack_pointer = is;
}

export function submain(a:int, b:int):int {
  var c:int = stack_pointer;
  var d:int = 48;
  var e:int = c - d;
  stack_pointer = e;
  e[11]:int = a;
  e[10]:int = b;
  var f:int = 4096;
  e[9]:int = f;
  var g:int = 2160;
  e[8]:int = g;
  var h:long = 8847360L;
  var i:int = 4;
  var j:int = legalfunc_polybench_alloc_data(h, i);
  e[6]:int = j;
  var k:long = 8847360L;
  var l:int = 4;
  var m:int = legalfunc_polybench_alloc_data(k, l);
  e[5]:int = m;
  var n:long = 8847360L;
  var o:int = 4;
  var p:int = legalfunc_polybench_alloc_data(n, o);
  e[4]:int = p;
  var q:long = 8847360L;
  var r:int = 4;
  var s:int = legalfunc_polybench_alloc_data(q, r);
  e[3]:int = s;
  var t:int = e[9]:int;
  var u:int = e[8]:int;
  var v:int = e[6]:int;
  var w:int = e[5]:int;
  var x:int = 28;
  var y:int = e + x;
  var z:int = y;
  init_array(t, u, z, v, w);
  var aa:int = e[9]:int;
  var ba:int = e[8]:int;
  var ca:float = e[7]:float;
  var da:int = e[6]:int;
  var ea:int = e[5]:int;
  var fa:int = e[4]:int;
  var ga:int = e[3]:int;
  kernel_deriche(aa, ba, ca, da, ea, fa, ga);
  var ha:int = e[11]:int;
  var ia:int = 42;
  var ja:int = ha;
  var ka:int = ia;
  var la:int = ja > ka;
  var ma:int = 1;
  var na:int = la & ma;
  if (eqz(na)) goto B_a;
  var oa:int_ptr = e[10]:int;
  var pa:int = oa[0];
  var qa:int = 91;
  var ra:int = memory_base;
  var sa:int = ra + qa;
  var ta:int = strcmp(pa, sa);
  if (ta) goto B_a;
  var ua:int = e[9]:int;
  var va:int = e[8]:int;
  var wa:int = e[5]:int;
  print_array(ua, va, wa);
  label B_a:
  var xa:int = e[6]:int;
  free(xa);
  var ya:int = e[5]:int;
  free(ya);
  var za:int = e[4]:int;
  free(za);
  var ab:int = e[3]:int;
  free(ab);
  var bb:int = 0;
  var cb:int = 48;
  var db:int = e + cb;
  stack_pointer = db;
  return bb;
}

function init_array(a:int, b:int, c:int, d:int, e:int) {
  var f:int = stack_pointer;
  var g:int = 32;
  var h:int_ptr = f - g;
  h[7] = a;
  h[6] = b;
  h[5] = c;
  h[4] = d;
  h[3] = e;
  var i:float_ptr = h[5];
  var j:float = 0.25f;
  i[0] = j;
  var k:int = 0;
  h[2] = k;
  loop L_b {
    var l:int = h[2];
    var m:int = h[7];
    var n:int = l;
    var o:int = m;
    var p:int = n < o;
    var q:int = 1;
    var r:int = p & q;
    if (eqz(r)) goto B_a;
    var s:int = 0;
    h[1] = s;
    loop L_d {
      var t:int = h[1];
      var u:int = h[6];
      var v:int = t;
      var w:int = u;
      var x:int = v < w;
      var y:int = 1;
      var z:int = x & y;
      if (eqz(z)) goto B_c;
      var aa:int = h[2];
      var ba:int = 313;
      var ca:int = aa * ba;
      var da:int = h[1];
      var ea:int = 991;
      var fa:int = da * ea;
      var ga:int = ca + fa;
      var ha:int = 65536;
      var ia:int = ga % ha;
      var ja:float = f32_convert_i32_s(ia);
      var ka:float = 65535.0f;
      var la:float = ja / ka;
      var ma:int = h[4];
      var na:int = h[2];
      var oa:int = 8640;
      var pa:int = na * oa;
      var qa:int = ma + pa;
      var ra:int = h[1];
      var sa:int = 2;
      var ta:int = ra << sa;
      var ua:float_ptr = qa + ta;
      ua[0] = la;
      var va:int = h[1];
      var wa:int = 1;
      var xa:int = va + wa;
      h[1] = xa;
      continue L_d;
    }
    unreachable;
    label B_c:
    var ya:int = h[2];
    var za:int = 1;
    var ab:int = ya + za;
    h[2] = ab;
    continue L_b;
  }
  unreachable;
  label B_a:
}

function print_array(a:int, b:int, c:int) {
  var d:int = stack_pointer;
  var e:int = 64;
  var f:int = d - e;
  stack_pointer = f;
  f[15]:int = a;
  f[14]:int = b;
  f[13]:int = c;
  var g:int_ptr = stderr;
  var h:int = g[0];
  var i:int = 46;
  var j:int = memory_base;
  var k:int = j + i;
  var l:int = 0;
  fprintf(h, k, l);
  var m:int = g[0];
  var n:int = 0;
  var o:int = memory_base;
  var p:int = o + n;
  f[8]:int = p;
  var q:int = 7;
  var r:int = o + q;
  var s:int = 32;
  var t:int = f + s;
  fprintf(m, r, t);
  var u:int = 0;
  f[12]:int = u;
  loop L_b {
    var v:int = f[12]:int;
    var w:int = f[15]:int;
    var x:int = v;
    var y:int = w;
    var z:int = x < y;
    var aa:int = 1;
    var ba:int = z & aa;
    if (eqz(ba)) goto B_a;
    var ca:int = 0;
    f[11]:int = ca;
    loop L_d {
      var da:int = f[11]:int;
      var ea:int = f[14]:int;
      var fa:int = da;
      var ga:int = ea;
      var ha:int = fa < ga;
      var ia:int = 1;
      var ja:int = ha & ia;
      if (eqz(ja)) goto B_c;
      var ka:int = f[12]:int;
      var la:int = f[14]:int;
      var ma:int = ka * la;
      var na:int = f[11]:int;
      var oa:int = ma + na;
      var pa:int = 20;
      var qa:int = oa % pa;
      if (qa) goto B_e;
      var ra:int_ptr = stderr;
      var sa:int = ra[0];
      var ta:int = 90;
      var ua:int = memory_base;
      var va:int = ua + ta;
      var wa:int = 0;
      fprintf(sa, va, wa);
      label B_e:
      var xa:int_ptr = stderr;
      var ya:int = xa[0];
      var za:int = f[13]:int;
      var ab:int = f[12]:int;
      var bb:int = 8640;
      var cb:int = ab * bb;
      var db:int = za + cb;
      var eb:int = f[11]:int;
      var fb:int = 2;
      var gb:int = eb << fb;
      var hb:float_ptr = db + gb;
      var ib:float = hb[0];
      var jb:double = f64_promote_f32(ib);
      f[0]:double = jb;
      var kb:int = 22;
      var lb:int = memory_base;
      var mb:int = lb + kb;
      fprintf(ya, mb, f);
      var nb:int = f[11]:int;
      var ob:int = 1;
      var pb:int = nb + ob;
      f[11]:int = pb;
      continue L_d;
    }
    unreachable;
    label B_c:
    var qb:int = f[12]:int;
    var rb:int = 1;
    var sb:int = qb + rb;
    f[12]:int = sb;
    continue L_b;
  }
  unreachable;
  label B_a:
  var tb:int_ptr = stderr;
  var ub:int = tb[0];
  var vb:int = 0;
  var wb:int = memory_base;
  var xb:int = wb + vb;
  f[4]:int = xb;
  var yb:int = 29;
  var zb:int = wb + yb;
  var ac:int = 16;
  var bc:int = f + ac;
  fprintf(ub, zb, bc);
  var cc:int = tb[0];
  var dc:int = 69;
  var ec:int = memory_base;
  var fc:int = ec + dc;
  var gc:int = 0;
  fprintf(cc, fc, gc);
  var hc:int = 64;
  var ic:int = f + hc;
  stack_pointer = ic;
}

function legalfunc_polybench_alloc_data(a:long, b:int):int {
  return legalimport_polybench_alloc_data(i32_wrap_i64(a),
                                          i32_wrap_i64(a >> 32L),
                                          b)
}

