import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
import global table_base:int;
import global stderr:int;

data rodata(offset: memory_base) =
  "begin dump: %s\00table\00%d \00\0aend   dump: %s\0a\00==BEGIN DUMP_ARR"
  "AYS==\0a\00==END   DUMP_ARRAYS==\0a\00";

import function strcmp(a:int, b:int):int;

import function free(a:int);

import function fprintf(a:int, b:int, c:int):int;

import function legalimport_polybench_alloc_data(a:int, b:int, c:int):int;

export function wasm_call_ctors() {
}

export function wasm_apply_data_relocs() {
}

export function kernel_nussinov(a:int, b:int, c:int) {
  var ub:int;
  var le:int;
  var vi:int;
  var gm:int;
  var lp:int;
  var d:int = stack_pointer;
  var e:int = 32;
  var f:int_ptr = d - e;
  f[7] = a;
  f[6] = b;
  f[5] = c;
  var g:int = f[7];
  var h:int = 1;
  var i:int = g - h;
  f[4] = i;
  loop L_b {
    var j:int = f[4];
    var k:int = 0;
    var l:int = j;
    var m:int = k;
    var n:int = l >= m;
    var o:int = 1;
    var p:int = n & o;
    if (eqz(p)) goto B_a;
    var q:int = f[4];
    var r:int = 1;
    var s:int = q + r;
    f[3] = s;
    loop L_d {
      var t:int = f[3];
      var u:int = f[7];
      var v:int = t;
      var w:int = u;
      var x:int = v < w;
      var y:int = 1;
      var z:int = x & y;
      if (eqz(z)) goto B_c;
      var aa:int = f[3];
      var ba:int = 1;
      var ca:int = aa - ba;
      var da:int = 0;
      var ea:int = ca;
      var fa:int = da;
      var ga:int = ea >= fa;
      var ha:int = 1;
      var ia:int = ga & ha;
      if (eqz(ia)) goto B_e;
      var ja:int = f[5];
      var ka:int = f[4];
      var la:int = 10000;
      var ma:int = ka * la;
      var na:int = ja + ma;
      var oa:int = f[3];
      var pa:int = 2;
      var qa:int = oa << pa;
      var ra:int_ptr = na + qa;
      var sa:int = ra[0];
      var ta:int = f[5];
      var ua:int = f[4];
      var va:int = 10000;
      var wa:int = ua * va;
      var xa:int = ta + wa;
      var ya:int = f[3];
      var za:int = 1;
      var ab:int = ya - za;
      var bb:int = 2;
      var cb:int = ab << bb;
      var db:int_ptr = xa + cb;
      var eb:int = db[0];
      var fb:int = sa;
      var gb:int = eb;
      var hb:int = fb >= gb;
      var ib:int = 1;
      var jb:int = hb & ib;
      if (eqz(jb)) goto B_g;
      var kb:int = f[5];
      var lb:int = f[4];
      var mb:int = 10000;
      var nb:int = lb * mb;
      var ob:int = kb + nb;
      var pb:int = f[3];
      var qb:int = 2;
      var rb:int = pb << qb;
      var sb:int_ptr = ob + rb;
      var tb:int = sb[0];
      ub = tb;
      goto B_f;
      label B_g:
      var vb:int = f[5];
      var wb:int = f[4];
      var xb:int = 10000;
      var yb:int = wb * xb;
      var zb:int = vb + yb;
      var ac:int = f[3];
      var bc:int = 1;
      var cc:int = ac - bc;
      var dc:int = 2;
      var ec:int = cc << dc;
      var fc:int_ptr = zb + ec;
      var gc:int = fc[0];
      ub = gc;
      label B_f:
      var hc:int = ub;
      var ic:int = f[5];
      var jc:int = f[4];
      var kc:int = 10000;
      var lc:int = jc * kc;
      var mc:int = ic + lc;
      var nc:int = f[3];
      var oc:int = 2;
      var pc:int = nc << oc;
      var qc:int_ptr = mc + pc;
      qc[0] = hc;
      label B_e:
      var rc:int = f[4];
      var sc:int = 1;
      var tc:int = rc + sc;
      var uc:int = f[7];
      var vc:int = tc;
      var wc:int = uc;
      var xc:int = vc < wc;
      var yc:int = 1;
      var zc:int = xc & yc;
      if (eqz(zc)) goto B_h;
      var ad:int = f[5];
      var bd:int = f[4];
      var cd:int = 10000;
      var dd:int = bd * cd;
      var ed:int = ad + dd;
      var fd:int = f[3];
      var gd:int = 2;
      var hd:int = fd << gd;
      var id:int_ptr = ed + hd;
      var jd:int = id[0];
      var kd:int = f[5];
      var ld:int = f[4];
      var md:int = 1;
      var nd:int = ld + md;
      var od:int = 10000;
      var pd:int = nd * od;
      var qd:int = kd + pd;
      var rd:int = f[3];
      var sd:int = 2;
      var td:int = rd << sd;
      var ud:int_ptr = qd + td;
      var vd:int = ud[0];
      var wd:int = jd;
      var xd:int = vd;
      var yd:int = wd >= xd;
      var zd:int = 1;
      var ae:int = yd & zd;
      if (eqz(ae)) goto B_j;
      var be:int = f[5];
      var ce:int = f[4];
      var de:int = 10000;
      var ee:int = ce * de;
      var fe:int = be + ee;
      var ge:int = f[3];
      var he:int = 2;
      var ie:int = ge << he;
      var je:int_ptr = fe + ie;
      var ke:int = je[0];
      le = ke;
      goto B_i;
      label B_j:
      var me:int = f[5];
      var ne:int = f[4];
      var oe:int = 1;
      var pe:int = ne + oe;
      var qe:int = 10000;
      var re:int = pe * qe;
      var se:int = me + re;
      var te:int = f[3];
      var ue:int = 2;
      var ve:int = te << ue;
      var we:int_ptr = se + ve;
      var xe:int = we[0];
      le = xe;
      label B_i:
      var ye:int = le;
      var ze:int = f[5];
      var af:int = f[4];
      var bf:int = 10000;
      var cf:int = af * bf;
      var df:int = ze + cf;
      var ef:int = f[3];
      var ff:int = 2;
      var gf:int = ef << ff;
      var hf:int_ptr = df + gf;
      hf[0] = ye;
      label B_h:
      var if:int = f[3];
      var jf:int = 1;
      var kf:int = if - jf;
      var lf:int = 0;
      var mf:int = kf;
      var nf:int = lf;
      var of:int = mf >= nf;
      var pf:int = 1;
      var qf:int = of & pf;
      if (eqz(qf)) goto B_k;
      var rf:int = f[4];
      var sf:int = 1;
      var tf:int = rf + sf;
      var uf:int = f[7];
      var vf:int = tf;
      var wf:int = uf;
      var xf:int = vf < wf;
      var yf:int = 1;
      var zf:int = xf & yf;
      if (eqz(zf)) goto B_k;
      var ag:int = f[4];
      var bg:int = f[3];
      var cg:int = 1;
      var dg:int = bg - cg;
      var eg:int = ag;
      var fg:int = dg;
      var gg:int = eg < fg;
      var hg:int = 1;
      var ig:int = gg & hg;
      if (eqz(ig)) goto B_m;
      var jg:int = f[5];
      var kg:int = f[4];
      var lg:int = 10000;
      var mg:int = kg * lg;
      var ng:int = jg + mg;
      var og:int = f[3];
      var pg:int = 2;
      var qg:int = og << pg;
      var rg:int_ptr = ng + qg;
      var sg:int = rg[0];
      var tg:int = f[5];
      var ug:int = f[4];
      var vg:int = 1;
      var wg:int = ug + vg;
      var xg:int = 10000;
      var yg:int = wg * xg;
      var zg:int = tg + yg;
      var ah:int = f[3];
      var bh:int = 1;
      var ch:int = ah - bh;
      var dh:int = 2;
      var eh:int = ch << dh;
      var fh:int_ptr = zg + eh;
      var gh:int = fh[0];
      var hh:int = f[6];
      var ih:int = f[4];
      var jh:ubyte_ptr = hh + ih;
      var kh:int = jh[0];
      var lh:int = 24;
      var mh:int = kh << lh;
      var nh:int = mh >> lh;
      var oh:int = f[6];
      var ph:int = f[3];
      var qh:ubyte_ptr = oh + ph;
      var rh:int = qh[0];
      var sh:int = 24;
      var th:int = rh << sh;
      var uh:int = th >> sh;
      var vh:int = nh + uh;
      var wh:int = 3;
      var xh:int = vh;
      var yh:int = wh;
      var zh:int = xh == yh;
      var ai:int = 1;
      var bi:int = 0;
      var ci:int = 1;
      var di:int = zh & ci;
      var ei:int = select_if(ai, bi, di);
      var fi:int = gh + ei;
      var gi:int = sg;
      var hi:int = fi;
      var ii:int = gi >= hi;
      var ji:int = 1;
      var ki:int = ii & ji;
      if (eqz(ki)) goto B_o;
      var li:int = f[5];
      var mi:int = f[4];
      var ni:int = 10000;
      var oi:int = mi * ni;
      var pi:int = li + oi;
      var qi:int = f[3];
      var ri:int = 2;
      var si:int = qi << ri;
      var ti:int_ptr = pi + si;
      var ui:int = ti[0];
      vi = ui;
      goto B_n;
      label B_o:
      var wi:int = f[5];
      var xi:int = f[4];
      var yi:int = 1;
      var zi:int = xi + yi;
      var aj:int = 10000;
      var bj:int = zi * aj;
      var cj:int = wi + bj;
      var dj:int = f[3];
      var ej:int = 1;
      var fj:int = dj - ej;
      var gj:int = 2;
      var hj:int = fj << gj;
      var ij:int_ptr = cj + hj;
      var jj:int = ij[0];
      var kj:int = f[6];
      var lj:int = f[4];
      var mj:ubyte_ptr = kj + lj;
      var nj:int = mj[0];
      var oj:int = 24;
      var pj:int = nj << oj;
      var qj:int = pj >> oj;
      var rj:int = f[6];
      var sj:int = f[3];
      var tj:ubyte_ptr = rj + sj;
      var uj:int = tj[0];
      var vj:int = 24;
      var wj:int = uj << vj;
      var xj:int = wj >> vj;
      var yj:int = qj + xj;
      var zj:int = 3;
      var ak:int = yj;
      var bk:int = zj;
      var ck:int = ak == bk;
      var dk:int = 1;
      var ek:int = 0;
      var fk:int = 1;
      var gk:int = ck & fk;
      var hk:int = select_if(dk, ek, gk);
      var ik:int = jj + hk;
      vi = ik;
      label B_n:
      var jk:int = vi;
      var kk:int = f[5];
      var lk:int = f[4];
      var mk:int = 10000;
      var nk:int = lk * mk;
      var ok:int = kk + nk;
      var pk:int = f[3];
      var qk:int = 2;
      var rk:int = pk << qk;
      var sk:int_ptr = ok + rk;
      sk[0] = jk;
      goto B_l;
      label B_m:
      var tk:int = f[5];
      var uk:int = f[4];
      var vk:int = 10000;
      var wk:int = uk * vk;
      var xk:int = tk + wk;
      var yk:int = f[3];
      var zk:int = 2;
      var al:int = yk << zk;
      var bl:int_ptr = xk + al;
      var cl:int = bl[0];
      var dl:int = f[5];
      var el:int = f[4];
      var fl:int = 1;
      var gl:int = el + fl;
      var hl:int = 10000;
      var il:int = gl * hl;
      var jl:int = dl + il;
      var kl:int = f[3];
      var ll:int = 1;
      var ml:int = kl - ll;
      var nl:int = 2;
      var ol:int = ml << nl;
      var pl:int_ptr = jl + ol;
      var ql:int = pl[0];
      var rl:int = cl;
      var sl:int = ql;
      var tl:int = rl >= sl;
      var ul:int = 1;
      var vl:int = tl & ul;
      if (eqz(vl)) goto B_q;
      var wl:int = f[5];
      var xl:int = f[4];
      var yl:int = 10000;
      var zl:int = xl * yl;
      var am:int = wl + zl;
      var bm:int = f[3];
      var cm:int = 2;
      var dm:int = bm << cm;
      var em:int_ptr = am + dm;
      var fm:int = em[0];
      gm = fm;
      goto B_p;
      label B_q:
      var hm:int = f[5];
      var im:int = f[4];
      var jm:int = 1;
      var km:int = im + jm;
      var lm:int = 10000;
      var mm:int = km * lm;
      var nm:int = hm + mm;
      var om:int = f[3];
      var pm:int = 1;
      var qm:int = om - pm;
      var rm:int = 2;
      var sm:int = qm << rm;
      var tm:int_ptr = nm + sm;
      var um:int = tm[0];
      gm = um;
      label B_p:
      var vm:int = gm;
      var wm:int = f[5];
      var xm:int = f[4];
      var ym:int = 10000;
      var zm:int = xm * ym;
      var an:int = wm + zm;
      var bn:int = f[3];
      var cn:int = 2;
      var dn:int = bn << cn;
      var en:int_ptr = an + dn;
      en[0] = vm;
      label B_l:
      label B_k:
      var fn:int = f[4];
      var gn:int = 1;
      var hn:int = fn + gn;
      f[2] = hn;
      loop L_s {
        var in:int = f[2];
        var jn:int = f[3];
        var kn:int = in;
        var ln:int = jn;
        var mn:int = kn < ln;
        var nn:int = 1;
        var on:int = mn & nn;
        if (eqz(on)) goto B_r;
        var pn:int = f[5];
        var qn:int = f[4];
        var rn:int = 10000;
        var sn:int = qn * rn;
        var tn:int = pn + sn;
        var un:int = f[3];
        var vn:int = 2;
        var wn:int = un << vn;
        var xn:int_ptr = tn + wn;
        var yn:int = xn[0];
        var zn:int = f[5];
        var ao:int = f[4];
        var bo:int = 10000;
        var co:int = ao * bo;
        var do:int = zn + co;
        var eo:int = f[2];
        var fo:int = 2;
        var go:int = eo << fo;
        var ho:int_ptr = do + go;
        var io:int = ho[0];
        var jo:int = f[5];
        var ko:int = f[2];
        var lo:int = 1;
        var mo:int = ko + lo;
        var no:int = 10000;
        var oo:int = mo * no;
        var po:int = jo + oo;
        var qo:int = f[3];
        var ro:int = 2;
        var so:int = qo << ro;
        var to:int_ptr = po + so;
        var uo:int = to[0];
        var vo:int = io + uo;
        var wo:int = yn;
        var xo:int = vo;
        var yo:int = wo >= xo;
        var zo:int = 1;
        var ap:int = yo & zo;
        if (eqz(ap)) goto B_u;
        var bp:int = f[5];
        var cp:int = f[4];
        var dp:int = 10000;
        var ep:int = cp * dp;
        var fp:int = bp + ep;
        var gp:int = f[3];
        var hp:int = 2;
        var ip:int = gp << hp;
        var jp:int_ptr = fp + ip;
        var kp:int = jp[0];
        lp = kp;
        goto B_t;
        label B_u:
        var mp:int = f[5];
        var np:int = f[4];
        var op:int = 10000;
        var pp:int = np * op;
        var qp:int = mp + pp;
        var rp:int = f[2];
        var sp:int = 2;
        var tp:int = rp << sp;
        var up:int_ptr = qp + tp;
        var vp:int = up[0];
        var wp:int = f[5];
        var xp:int = f[2];
        var yp:int = 1;
        var zp:int = xp + yp;
        var aq:int = 10000;
        var bq:int = zp * aq;
        var cq:int = wp + bq;
        var dq:int = f[3];
        var eq:int = 2;
        var fq:int = dq << eq;
        var gq:int_ptr = cq + fq;
        var hq:int = gq[0];
        var iq:int = vp + hq;
        lp = iq;
        label B_t:
        var jq:int = lp;
        var kq:int = f[5];
        var lq:int = f[4];
        var mq:int = 10000;
        var nq:int = lq * mq;
        var oq:int = kq + nq;
        var pq:int = f[3];
        var qq:int = 2;
        var rq:int = pq << qq;
        var sq:int_ptr = oq + rq;
        sq[0] = jq;
        var tq:int = f[2];
        var uq:int = 1;
        var vq:int = tq + uq;
        f[2] = vq;
        continue L_s;
      }
      unreachable;
      label B_r:
      var wq:int = f[3];
      var xq:int = 1;
      var yq:int = wq + xq;
      f[3] = yq;
      continue L_d;
    }
    unreachable;
    label B_c:
    var zq:int = f[4];
    var ar:int = -1;
    var br:int = zq + ar;
    f[4] = br;
    continue L_b;
  }
  unreachable;
  label B_a:
}

export function submain(a:int, b:int):int {
  var c:int = stack_pointer;
  var d:int = 32;
  var e:int_ptr = c - d;
  stack_pointer = e;
  e[7] = a;
  e[6] = b;
  var f:int = 2500;
  e[5] = f;
  var g:long = 2500L;
  var h:int = 1;
  var i:int = legalfunc_polybench_alloc_data(g, h);
  e[4] = i;
  var j:long = 6250000L;
  var k:int = 4;
  var l:int = legalfunc_polybench_alloc_data(j, k);
  e[3] = l;
  var m:int = e[5];
  var n:int = e[4];
  var o:int = e[3];
  init_array(m, n, o);
  var p:int = e[5];
  var q:int = e[4];
  var r:int = e[3];
  kernel_nussinov(p, q, r);
  var s:int = e[7];
  var t:int = 42;
  var u:int = s;
  var v:int = t;
  var w:int = u > v;
  var x:int = 1;
  var y:int = w & x;
  if (eqz(y)) goto B_a;
  var z:int_ptr = e[6];
  var aa:int = z[0];
  var ba:int = 87;
  var ca:int = memory_base;
  var da:int = ca + ba;
  var ea:int = strcmp(aa, da);
  if (ea) goto B_a;
  var fa:int = e[5];
  var ga:int = e[3];
  print_array(fa, ga);
  label B_a:
  var ha:int = e[4];
  free(ha);
  var ia:int = e[3];
  free(ia);
  var ja:int = 0;
  var ka:int = 32;
  var la:int = e + ka;
  stack_pointer = la;
  return ja;
}

function init_array(a:int, b:int, c:int) {
  var d:int = stack_pointer;
  var e:int = 32;
  var f:int_ptr = d - e;
  f[7] = a;
  f[6] = b;
  f[5] = c;
  var g:int = 0;
  f[4] = g;
  loop L_b {
    var h:int = f[4];
    var i:int = f[7];
    var j:int = h;
    var k:int = i;
    var l:int = j < k;
    var m:int = 1;
    var n:int = l & m;
    if (eqz(n)) goto B_a;
    var o:int = f[4];
    var p:int = 1;
    var q:int = o + p;
    var r:int = 4;
    var s:int = q % r;
    var t:int = f[6];
    var u:int = f[4];
    var v:byte_ptr = t + u;
    v[0] = s;
    var w:int = f[4];
    var x:int = 1;
    var y:int = w + x;
    f[4] = y;
    continue L_b;
  }
  unreachable;
  label B_a:
  var z:int = 0;
  f[4] = z;
  loop L_d {
    var aa:int = f[4];
    var ba:int = f[7];
    var ca:int = aa;
    var da:int = ba;
    var ea:int = ca < da;
    var fa:int = 1;
    var ga:int = ea & fa;
    if (eqz(ga)) goto B_c;
    var ha:int = 0;
    f[3] = ha;
    loop L_f {
      var ia:int = f[3];
      var ja:int = f[7];
      var ka:int = ia;
      var la:int = ja;
      var ma:int = ka < la;
      var na:int = 1;
      var oa:int = ma & na;
      if (eqz(oa)) goto B_e;
      var pa:int = f[5];
      var qa:int = f[4];
      var ra:int = 10000;
      var sa:int = qa * ra;
      var ta:int = pa + sa;
      var ua:int = f[3];
      var va:int = 2;
      var wa:int = ua << va;
      var xa:int_ptr = ta + wa;
      var ya:int = 0;
      xa[0] = ya;
      var za:int = f[3];
      var ab:int = 1;
      var bb:int = za + ab;
      f[3] = bb;
      continue L_f;
    }
    unreachable;
    label B_e:
    var cb:int = f[4];
    var db:int = 1;
    var eb:int = cb + db;
    f[4] = eb;
    continue L_d;
  }
  unreachable;
  label B_c:
}

function print_array(a:int, b:int) {
  var c:int = stack_pointer;
  var d:int = 64;
  var e:int_ptr = c - d;
  stack_pointer = e;
  e[15] = a;
  e[14] = b;
  var f:int = 0;
  e[11] = f;
  var g:int_ptr = stderr;
  var h:int = g[0];
  var i:int = 42;
  var j:int = memory_base;
  var k:int = j + i;
  fprintf(h, k, f);
  var l:int = g[0];
  var m:int = 15;
  var n:int = memory_base;
  var o:int = n + m;
  e[8] = o;
  var p:int = 0;
  var q:int = n + p;
  var r:int = 32;
  var s:int = e + r;
  fprintf(l, q, s);
  var t:int = 0;
  e[13] = t;
  loop L_b {
    var u:int = e[13];
    var v:int = e[15];
    var w:int = u;
    var x:int = v;
    var y:int = w < x;
    var z:int = 1;
    var aa:int = y & z;
    if (eqz(aa)) goto B_a;
    var ba:int = e[13];
    e[12] = ba;
    loop L_d {
      var ca:int = e[12];
      var da:int = e[15];
      var ea:int = ca;
      var fa:int = da;
      var ga:int = ea < fa;
      var ha:int = 1;
      var ia:int = ga & ha;
      if (eqz(ia)) goto B_c;
      var ja:int = e[11];
      var ka:int = 20;
      var la:int = ja % ka;
      if (la) goto B_e;
      var ma:int_ptr = stderr;
      var na:int = ma[0];
      var oa:int = 86;
      var pa:int = memory_base;
      var qa:int = pa + oa;
      var ra:int = 0;
      fprintf(na, qa, ra);
      label B_e:
      var sa:int_ptr = stderr;
      var ta:int = sa[0];
      var ua:int = e[14];
      var va:int = e[13];
      var wa:int = 10000;
      var xa:int = va * wa;
      var ya:int = ua + xa;
      var za:int = e[12];
      var ab:int = 2;
      var bb:int = za << ab;
      var cb:int_ptr = ya + bb;
      var db:int = cb[0];
      e[0] = db;
      var eb:int = 21;
      var fb:int = memory_base;
      var gb:int = fb + eb;
      fprintf(ta, gb, e);
      var hb:int = e[11];
      var ib:int = 1;
      var jb:int = hb + ib;
      e[11] = jb;
      var kb:int = e[12];
      var lb:int = 1;
      var mb:int = kb + lb;
      e[12] = mb;
      continue L_d;
    }
    unreachable;
    label B_c:
    var nb:int = e[13];
    var ob:int = 1;
    var pb:int = nb + ob;
    e[13] = pb;
    continue L_b;
  }
  unreachable;
  label B_a:
  var qb:int_ptr = stderr;
  var rb:int = qb[0];
  var sb:int = 15;
  var tb:int = memory_base;
  var ub:int = tb + sb;
  e[4] = ub;
  var vb:int = 25;
  var wb:int = tb + vb;
  var xb:int = 16;
  var yb:int = e + xb;
  fprintf(rb, wb, yb);
  var zb:int = qb[0];
  var ac:int = 65;
  var bc:int = memory_base;
  var cc:int = bc + ac;
  var dc:int = 0;
  fprintf(zb, cc, dc);
  var ec:int = 64;
  var fc:int = e + ec;
  stack_pointer = fc;
}

function legalfunc_polybench_alloc_data(a:long, b:int):int {
  return legalimport_polybench_alloc_data(i32_wrap_i64(a),
                                          i32_wrap_i64(a >> 32L),
                                          b)
}

