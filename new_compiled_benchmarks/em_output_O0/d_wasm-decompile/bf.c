import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
import global table_base:int;
export import global bf_init_P:int;
export import global key_P:int;
export import global bf_init_S:int;
export import global key_S:int;
export import global in_key:int;
export import global out_key:int;
export import global startTimer:int;
export import global endTimer:int;
global bf_init_P_1:int = 0;
global key_P_1:int = 14624;
global bf_init_S_1:int = 80;
global key_S_1:int = 14704;
global in_key_1:int = 4176;
global out_key_1:int = 9376;
global startTimer_1:int = 18800;
global endTimer_1:int = 18808;

data data(offset: memory_base) =
  "\88j?$\d3\08\a3\85.\8a\19\13Dsp\03"8\09\a4\d01\9f)\98\fa.\08\89lN\ec\e6"
  "!(Ew\13\d08\cffT\bel\0c\e94\b7)\ac\c0\ddP|\c9\b5\d5\84?\17\09G\b5\d9\d5"
  "\16\92\1b\fby\89\00\00\00\00\00\00\00\00\a6\0b1\d1\ac\b5\df\98\dbr\fd/"
  "\b7\df\1a\d0\ed\af\e1\b8\96~&jE\90|\ba\99\7f,\f1G\99\a1$\f7l\91\b3\e2\f2"
  "\01\08\16\fc\8e\85\d8 iciNWq\a3\feX\a4~=\93\f4\8ft\95\0dX\b6\8erX\cd\8b"
  "q\eeJ\15\82\1d\a4T{\b5YZ\c29\d50\9c\13`\f2*#\b0\d1\c5\f0\85`(\18yA\ca\ef"
  "8\db\b8\b0\dcy\8e\0e\18:`\8b\0e\9el>\8a\1e\b0\c1w\15\d7'K1\bd\da/\afx`"
  "\`U\f3%U\e6\94\abU\aab\98HW@\14\e8cj9\caU\b6\10\ab*4\\cc\b4\ce\e8A\11\af"
  "\86T\a1\93\e9r|\11\14\ee\b3*\bcoc]\c5\a9+\f61\18t\16>\\ce\1e\93\87\9b3"
  "\ba\d6\af\\cf$l\81S2zw\86\95(\98H\8f;\af\b9Kk\1b\e8\bf\c4\93!(f\cc\09\d8"
  "a\91\a9!\fb`\ac|H2\80\ec]]]\84\ef\b1u\85\e9\02#&\dc\88\1be\eb\81>\89#\c5"
  "\ac\96\d3\f3om\0f9B\f4\83\82D\0b.\04 \84\a4J\f0\c8i^\9b\1f\9eBh\c6!\9a"
  "l\e9\f6a\9c\0cg\f0\88\d3\ab\d2\a0Qjh/T\d8(\a7\0f\96\a33Q\abl\0b\efn\e4"
  ";z\13P\f0;\ba\98*\fb~\1de\f1\a1v\01\af9>Y\caf\88\0eC\82\19\86\ee\8c\b4"
  "\9foE\c3\a5\84}\be^\8b;\d8uo\e0s \c1\85\9fD\1a@\a6j\c1Vb\aa\d3N\06w?6r"
  "\df\fe\1b=\02\9bB$\d7\d07H\12\0a\d0\d3\ea\0f\db\9b\c0\f1I\c9rS\07{\1b\99"
  "\80\d8y\d4%\f7\de\e8\f6\1aP\fe\e3;Ly\b6\bd\e0l\97\ba\06\c0\04\b6O\a9\c1"
  "\c4`\9f@\c2\9e\^c$j\19\afo\fbh\b5Sl>\eb\b29\13o\ecR;\1fQ\fcm,\950\9bDE"
  "\81\cc\09\bd^\af\04\d0\e3\be\fdJ3\de\07(\0ff\b3K.\19W\a8\cb\c0\0ft\c8E"
  "9_\0b\d2\db\fb\d3\b9\bd\c0yU\0a2`\1a\c6\00\a1\d6yr,@\fe%\9fg\cc\a3\1f\fb"
  "\f8\e9\a5\8e\f8"2\db\df\16u<\15ka\fd\c8\1eP/\abR\05\ad\fa\b5=2`\87#\fd"
  "H{1S\82\df\00>\bbW\\9e\a0\8co\ca.V\87\1a\dbi\17\df\f6\a8B\d5\c3\ff~(\c6"
  "2g\acsUO\8c\b0'[i\c8X\ca\bb]\a3\ff\e1\a0\11\f0\b8\98=\fa\10\b8\83!\fdl"
  "\b5\fcJ[\d3\d1-y\e4S\9aeE\f8\b6\bcI\8e\d2\90\97\fbK\da\f2\dd\e13~\cb\a4"
  "A\13\fbb\e8\c6\e4\ce\da\ca \ef\01Lw6\fe\9e~\d0\b4\1f\f1+M\da\db\95\98\91"
  "\90\aeq\8e\ad\ea\a0\d5\93k\d0\d1\8e\d0\e0%\c7\af/[<\8e\b7\94u\8e\fb\e2"
  "\f6\8fd+\12\f2\12\b8\88\88\1c\f0\0d\90\a0^\adO\1c\c3\8fh\91\f1\cf\d1\ad"
  "\c1\a8\b3\18"//w\17\0e\be\fe-u\ea\a1\1f\02\8b\0f\cc\a0\e5\e8to\b5\d6\f3"
  "\ac\18\99\e2\89\ce\e0O\a8\b4\b7\e0\13\fd\81;\c4|\d9\a8\ad\d2f\a2_\16\05"
  "w\95\80\14s\cc\93w\14\1a!e \ad\e6\86\fa\b5w\f5BT\c7\cf5\9d\fb\0c\af\cd"
  "\eb\a0\89>{\d3\1bA\d6I~\1e\ae-\0e%\00^\b3q \bb\00h"\af\e0\b8W\9b6d$\1e"
  "\b9\09\f0\1d\91cU\aa\a6\dfY\89C\c1x\7fSZ\d9\a2[} \c5\b9\e5\02v\03&\83\a9"
  "\cf\95bh\19\c8\11AJsN\ca-G\b3J\a9\14{R\00Q\1b\15)S\9a?W\0f\d6\e4\c6\9b"
  "\bcv\a4`+\00t\e6\81\b5o\ba\08\1f\e9\1bWk\ec\96\f2\15\d9\0d*!ec\b6\b6\f9"
  "\b9\e7.\054\ffdV\85\c5]-\b0S\a1\8f\9f\a9\99G\ba\08j\07\85n\e9pzKD)\b3\b5"
  ".\09u\db#&\19\c4\b0\a6n\ad}\df\a7I\b8`\ee\9cf\b2\ed\8fq\8c\aa\ec\ff\17"
  "\9ailRdV\e1\9e\b1\c2\a5\026\19)L\09u@\13Y\a0>:\18\e4\9a\98T?e\9dB[\d6\e4"
  "\8fk\d6?\f7\99\07\9c\d2\a1\f50\e8\ef\e68-M\c1]%\f0\86 \ddL&\ebp\84\c6\e9"
  "\82c^\cc\1e\02?kh\09\c9\ef\ba>\14\18\97<\a1pjk\845\7fh\86\e2\a0R\05S\9c"
  "\b77\07P\aa\1c\84\07>\\ae\de\7f\ecD}\8e\b8\f2\16W7\da:\b0\0d\0cP\f0\04"
  "\1f\1c\f0\ff\b3\00\02\1a\f5\0c\ae\b2t\b5<Xz\83%\bd!\09\dc\f9\13\91\d1\f6"
  "/\a9|sG2\94\01G\f5"\81\e5\e5:\dc\da\c274v\b5\c8\a7\dd\f3\9aFaD\a9\0e\03"
  "\d0\0f>\c7\c8\ecA\1eu\a4\99\cd8\e2/\0e\ea;\a1\bb\8021\b3>\188\8bTN\08\b9"
  "mO\03\0dBo\bf\04\0a\f6\90\12\b8,y|\97$r\b0yV\af\89\af\bc\1fw\9a\de\10\08"
  "\93\d9\12\ae\8b\b3.?\cf\dc\1fr\12U$qk.\e6\dd\1aP\87\cd\84\9f\18GXz\17\da"
  "\08t\bc\9a\9f\bc\8c}K\e9:\ecz\ec\fa\1d\85\dbfC\09c\d2\c3d\c4G\18\1c\ef"
  "\08\d9\1527;C\dd\16\ba\c2$CM\a1\12Q\c4e*\02\00\94P\dd\e4:\13\9e\f8\dfq"
  "UN1\10\d6w\ac\81\9b\19\11_\f1V5\04k\c7\a3\d7;\18\11<\09\a5$Y\ed\e6\8f\f2"
  "\fa\fb\f1\97,\bf\ba\9en<\15\1epE\e3\86\b1o\e9\ea\0a^\0e\86\b3*>Z\1c\e7"
  "\1fw\fa\06=N\b9\dce)\0f\1d\e7\99\d6\89>\80%\c8fRx\c9L.j\b3\10\9c\ba\0e"
  "\15\c6x\ea\e2\94S<\fc\a5\f4-\0a\1e\a7N\f7\f2=+\1d6\0f&9\19`y\c2\19\08\a7"
  "#R\b6\12\13\f7n\fe\ad\ebf\1f\c3\ea\95E\bc\e3\83\c8{\a6\d17\7f\b1(\ff\8c"
  "\01\ef\dd2\c3\a5Zl\be\85!Xe\02\98\abh\0f\a5\ce\ee;\95/\db\ad}\ef*\84/n"
  "[(\b6!\15pa\07)uG\dd\ec\10\15\9fa0\a8\cc\13\96\bda\eb\1e\fe4\03\cfc\03"
  "\aa\90\s\b59\a2pL\0b\9e\9e\d5\14\de\aa\cb\bc\86\cc\ee\a7,b`\ab\\ab\9cn"
  "\84\f3\b2\af\1e\8bd\ca\f0\bd\19\b9i#\a0P\bbZe2Zh@\b3\b4*<\d5\e9\9e1\f7"
  "\b8!\c0\19\0bT\9b\99\a0_\87~\99\f7\95\a8}=b\9a\887\f8w-\e3\97_\93\ed\11"
  "\81\12h\16)\885\0e\d6\1f\e6\c7\a1\df\de\96\99\baXx\a5\84\f5Wcr"\1b\ff\c3"
  "\83\9b\96F\c2\1a\eb\0a\b3\cdT0.S\e4H\d9\8f(1\bcm\ef\f2\ebX\ea\ff\c64a\ed"
  "(\fes<|\ee\d9\14J]\e3\b7d\e8\14]\10B\e0\13> \b6\e2\eeE\ea\ab\aa\a3\15O"
  "l\db\d0O\cb\faB\f4B\c7\b5\bbj\ef\1d;Oe\05!\cdA\9ey\1e\d8\c7M\85\86jGK\e4"
  "Pb\81=\f2\a1b\cfF&\8d[\a0\83\88\fc\a3\b6\c7\c1\c3$\15\7f\92t\cbi\0b\8a"
  "\84G\85\b2\92V\00\bf[\09\9dH\19\adt\b1b\14\00\0e\82#*\8dBX\ea\f5U\0c>\f4"
  "\ad\1dap?#\92\f0r3A~\93\8d\f1\ec_\d6\db;"lY7\de|`t\ee\cb\a7\f2\85@n2w\ce"
  "\84\80\07\a6\9eP\f8\19U\d8\ef\e85\97\d9a\aa\a7i\a9\c2\06\0c\c5\fc\ab\04"
  "Z\dc\ca\0b\80.zD\9e\844E\c3\05g\d5\fd\c9\9e\1e\0e\d3\dbs\db\cd\88U\10y"
  "\da_g@Cg\e3e4\c4\c5\d88>q\9e\f8(= \ffm\f1\e7!>\15J=\b0\8f+\9f\e3\e6\f7"
  "\ad\83\dbhZ=\e9\f7@\81\94\1c&L\f64)i\94\f7 \15A\f7\d4\02v.k\f4\bch\00\a2"
  "\d4q$\08\d4j\f4 3\b7\d4\b7C\afa\00P.\f69\1eFE$\97tO!\14@\88\8b\bf\1d\fc"
  "\95M\af\91\b5\96\d3\dd\f4pE/\a0f\ec\09\bc\bf\85\97\bd\03\d0m\ac\7f\04\85"
  "\cb1\b3'\eb\96A9\fdU\e6G%\da\9a\0a\ca\ab%xP(\f4)\04S\da\86,\0a\fbm\b6\e9"
  "b\14\dch\00iH\d7\a4\c0\0eh\ee\8d\a1'\a2\fe?O\8c\ad\87\e8\06\e0\8c\b5\b6"
  "\d6\f4z|\1e\ce\aa\ec_7\d3\99\a3x\ceB*k@5\9e\fe \b9\85\f3\d9\ab\d79\ee\8b"
  "N\12;\f7\fa\c9\1dV\18mK1f\a3&\b2\97\e3\eat\fan:2C[\dd\f7\e7Ah\fb x\caN"
  "\f5\0a\fb\97\b3\fe\d8\acV@E'\95H\ba::SU\87\8d\83 \b7\a9k\feK\95\96\d0\bc"
  "g\a8UX\9a\15\a1c)\a9\cc3\db\e1\99VJ*\a6\f9%1?\1c~\f4^|1)\90\02\e8\f8\fd"
  "p/'\04\\15\bb\80\e3,(\05H\15\c1\95"m\c6\e4?\13\c1H\dc\86\0f\c7\ee\c9\f9"
  "\07\0f\1f\04A\a4yG@\17n\88]\ebQ_2\d1\c0\9b\d5\8f\c1\bc\f2d5\11A4x{%`\9c"
  "*`\a3\e8\f8\df\1blc\1f\c2\b4\12\0e\9e2\e1\02\d1Of\af\15\81\d1\ca\e0\95"
  "#k\e1\92>3b\0b$;"\b9\be\ee\0e\a2\b2\85\99\0d\ba\e6\8c\0cr\de(\f7\a2-Ex"
  "\12\d0\fd\94\b7\95b\08}d\f0\f5\cc\e7o\a3IT\faH}\87'\fd\9d\c3\1e\8d>\f3"
  "AcG\0at\ff.\99\abno:7\fd\f8\f4`\dc\12\a8\f8\dd\eb\a1L\e1\1b\99\0dkn\db"
  "\10U{\c67,gm;\d4e'\04\e8\d0\dc\c7\0d)\f1\a3\ff\00\cc\92\0f9\b5\0b\ed\0f"
  "i\fb\9f{f\9c}\db\ce\0b\cf\91\a0\a3^\15\d9\88/\13\bb$\ad[Q\bfy\94{\eb\d6"
  ";v\b3.97yY\11\cc\97\e2&\80-1.\f4\a7\adBh;+j\c6\ccLu\12\1c\f1.x7B\12j\e7"
  "Q\92\b7\e6\bb\a1\06Pc\fbK\18\10k\1a\fa\ed\ca\11\d8\bd%=\c9\c3\e1\e2Y\16"
  "BD\86\13\12\0an\ec\0c\d9*\ea\ab\d5Ng\afd_\a8\86\da\88\e9\bf\be\fe\c3\e4"
  "dW\80\bc\9d\86\c0\f7\f0\f8{x`M`\03`F\83\fd\d1\b0\1f8\f6\04\aeEw\cc\fc6"
  "\d73kB\83q\ab\1e\f0\87A\80\b0_^\00<\beW\a0w$\ae\e8\bd\99BFUa.X\bf\8f\f4"
  "XN\a2\fd\dd\f28\eft\f4\c2\bd\89\87\c3\f9fSt\8e\b3\c8U\f2u\b4\b9\d9\fcF"
  "a&\ebz\84\df\1d\8by\0ej\84\e2\95_\91\8eYnFpW\b4 \91U\d5\8cL\de\02\c9\e1"
  "\ac\0b\b9\d0\05\82\bbHb\a8\11\9e\a9tu\b6\19\7f\b7\09\dc\a9\e0\a1\09-f3"
  "F2\c4\02\1fZ\e8\8c\be\f0\09%\a0\99J\10\fen\1d\1d=\b9\1a\df\a4\a5\0b\0f"
  "\f2\86\a1i\f1h(\83\da\b7\dc\fe\069W\9b\ce\e2\a1R\7f\cdO\01^\11P\fa\83\06"
  "\a7\c4\b5\02\a0'\d0\e6\0d'\8c\f8\9aA\86?w\06L`\c3\b5\06\a8a(z\17\f0\e0"
  "\86\f5\c0\aaX`\00b}\dc0\d7\9e\e6\11c\ea8#\94\dd\c2S4\16\c2\c2V\ee\cb\bb"
  "\de\b6\bc\90\a1}\fc\ebv\1dY\ce\09\e4\05o\88\01|K=\0ar9$|\92|_r\e3\86\b9"
  "\9dMr\b4[\c1\1a\fc\b8\9e\d3xUT\ed\b5\a5\fc\08\d3|=\d8\c4\0f\adM^\efP\1e"
  "\f8\e6a\b1\d9\14\85\a2<\13Ql\e7\c7\d5o\c4N\e1V\ce\bf*67\c8\c6\dd42\9a\d7"
  "\12\82c\92\8e\fa\0eg\e0\00`@7\ce9:\cf\f5\fa\d37w\c2\ab\1b-\c5Z\9eg\b0\"
  "B7\a3O@'\82\d3\be\9b\bc\99\9d\8e\11\d5\15s\0f\bf~\1c-\d6{\c4\00\c7k\1b"
  "\8c\b7E\90\a1!\be\b1n\b2\b4n6j/\abHWyn\94\bc\d2v\a3\c6\c8\c2Ie\ee\f8\0f"
  "S}\de\8dF\1d\0as\d5\c6M\d0L\db\bb9)PF\ba\a9\e8&\95\ac\04\e3^\be\f0\d5\fa"
  "\a1\9aQ-j\e2\8c\efc"\ee\86\9a\b8\c2\89\c0\f6.$C\aa\03\1e\a5\a4\d0\f2\9c"
  "\baa\c0\83Mj\e9\9bP\15\e5\8f\d6[d\ba\f9\a2&(\e1::\a7\86\95\a9K\e9bU\ef"
  "\d3\ef/\c7\da\f7R\f7io\04?Y\0a\faw\15\a9\e4\80\01\86\b0\87\ad\e6\09\9b"
  "\93\e5>;Z\fd\90\e9\97\d74\9e\d9\b7\f0,Q\8b+\02:\ac\d5\96}\a6}\01\d6>\cf"
  "\d1(-}|\cf%\9f\1f\9b\b8\f2\adr\b4\d6ZL\f5\88Zq\ac)\e0\e6\a5\19\e0\fd\ac"
  "\b0G\9b\fa\93\ed\8d\c4\d3\e8\ccW;()f\d5\f8(.\13y\91\01_xU`u\edD\0e\96\f7"
  "\8c^\d3\e3\d4m\05\15\bam\f4\88%a\a1\03\bd\f0d\05\15\9e\eb\c3\a2W\90<\ec"
  "\1a'\97*\07:\a9\9bm?\1b\f5!c\1e\fbf\9c\f5\19\f3\dc&(\d93u\f5\fdU\b1\82"
  "4V\03\bb<\ba\8a\11wQ(\f8\d9\0a\c2gQ\cc\ab_\92\ad\ccQ\17\e8M\8e\dc08bX\9d"
  "7\91\f9 \93\c2\90z\ea\ce{>\fbd\ce!Q2\beOw~\e3\b6\a8F=)\c3iS\deH\80\e6\13"
  "d\10\08\ae\a2$\b2m\dd\fd-\85if!\07\09\0aF\9a\b3\dd\c0Ed\cf\delX\ae\c8 "
  "\1c\dd\f7\be[@\8dX\1b\7f\01\d2\cc\bb\e3\b4k~j\a2\ddE\ffY:D\0a5>\d5\cd\b4"
  "\bc\a8\ce\ear\bb\84d\fa\ae\12f\8dGo<\bfc\e4\9b\d2\9e]/T\1bw\c2\aepcN\f6"
  "\8d\0d\0etW\13[\e7q\16r\f8]}S\af\08\cb@@\cc\e2\b4NjF\d24\84\af\15\01(\04"
  "\b0\e1\1d:\98\95\b4\9f\b8\06H\a0n\ce\82;?o\82\ab 5K\1d\1a\01\f8'r'\b1`"
  "\15a\dc?\93\e7+y:\bb\bd%E4\e19\88\a0Ky\ceQ\b7\c92/\c9\ba\1f\a0~\c8\1c\e0"
  "\f6\d1\c7\bc\c3\11\01\cf\c7\aa\e8\a1I\87\90\1a\9a\bdO\d4\cb\de\da\d08\da"
  "\0a\d5*\c39\03g6\91\c6|1\f9\8dO+\b1\e0\b7Y\9e\f7:\bb\f5C\ff\19\d5\f2\9c"
  "E\d9',"\97\bf*\fc\e6\15q\fc\91\0f%\15\94\9ba\93\e5\fa\eb\9c\b6\ceYd\a8"
  "\c2\d1\a8\ba\12^\07\c1\b6\0cj\05\e3eP\d2\10B\a4\03\cb\0en\ec\e0;\db\98"
  "\16\be\a0\98Ld\e9x22\95\1f\9f\df\92\d3\e0+4\a0\d3\1e\f2q\89At\0a\1b\8c"
  "4\a3K q\be\c5\d82v\c3\8d\9f5\df./\99\9bGo\0b\e6\1d\f1\e3\0fT\daL\e5\91"
  "\d8\da\1e\cfyb\ceo~>\cdf\b1\18\16\05\1d,\fd\c5\d2\8f\84\99"\fb\f6W\f3#"
  "\f5#v2\a615\a8\93\02\cd\ccVb\81\f0\ac\b5\ebuZ\976\16n\ccs\d2\88\92b\96"
  "\de\d0I\b9\81\1b\90PL\14V\c6q\bd\c7\c6\e6\0a\14z2\06\d0\e1E\9a{\f2\c3\fd"
  "S\aa\c9\00\0f\a8b\e2\bf%\bb\f6\d2\bd5\05i\12q"\02\04\b2|\cf\cb\b6+\9cv"
  "\cd\c0>\11S\d3\e3@\16`\bd\ab8\f0\adG%\9c 8\bav\ceF\f7\c5\a1\afw``u N\fe"
  "\cb\85\d8\8d\e8\8a\b0\f9\aaz~\aa\f9L\\c2H\19\8c\8a\fb\02\e4j\c3\01\f9\e1"
  "\eb\d6i\f8\d4\90\a0\de\\a6-%\09?\9f\e6\08\c22aN\b7[\e2w\ce\e3\df\8fW\e6"
  "r\c3:KurtVonnegutsCommencementAddressatMITLadiesandgentlemenoftheclass"
  "of97WearsunscreenIfIcouldofferyouonlyonetipforthefuturesunscreenwouldb"
  "eitThelongtermbenefitsofsunscreenhavebeenprovedbyscientistswhereasther"
  "estofmyadvicehasnobasismorereliablethanmyownmeanderingexperienceIwilld"
  "ispensethisadvicenowEnjoythepowerandbeautyofyouryouthOhnevermindYouwil"
  "lnotunderstandthepowerandbeautyofyouryouthuntiltheyvefadedButtrustmein"
  "20yearsyoulllookbackatphotosofyourselfandrecallinawayyoucantgraspnowho"
  "wmuchpossibilitylaybeforeyouandhowfabulousyoureallylookedYouarenotasfa"
  "tasyouimagineDontworryaboutthefutureOrworrybutknowthatKurtVonneguKurtV"
  "onnegutsCommencementAddressatMITLadiesandgentlemenoftheclassof97Wearsu"
  "nscreenIfIcouldofferyouonlyonetipforthefuturesunscreenwouldbeitThelong"
  "termbenefitsofsunscreenhavebeenprovedbyscientistswhereastherestofmyadv"
  "icehasnobasismorereliablethanmyownmeanderingexperienceIwilldispensethi"
  "sadvicenowEnjoythepowerandbeautyofyouryouthOhnevermindYouwillnotunders"
  "tandthepowerandbeautyofyouryouthuntiltheyvefadedButtrustmein20yearsyou"
  "lllookbackatphotosofyourselfandrecallinawayyoucantgraspnowhowmuchpossi"
  "bilitylaybeforeyouandhowfabulousyoureallylookedYouarenotasfatasyouimag"
  "ineDontworryaboutthefutureOrworrybutknowthatKurtVonnegutsCommencementA"
  "ddressatMITLadiesandgentlemenoftheclassof97WearsunscreenIfIcouldoffery"
  "ouonlyonetipforthefuturesunscreenwouldbeitThelongtermbenefitsofsunscre"
  "enhavebeenprovedbyscientistswhereastherestofmyadvicehasnobasismorereli"
  "ablethanmyownmeanderingexperienceIwilldispensethisadvicenowEnjoythepow"
  "erandbeautyofyouryouthOhnevermindYouwillnotunderstandthepowerandbeauty"
  "ofyouryouthuntiltheyvefadedButtrustmein20yearsyoulllookbackatphotosofy"
  "ourselfandrecallinawayyoucantgraspnowhowmuchpossibilitylaybeforeyouand"
  "howfabulousyoureallylookedYouarenotasfatasyouimagineDontworryaboutthef"
  "utureOrworrybutknowthatKurtVonnegutsCommencementAddressatMITLadiesandg"
  "entlemenoftheclassof97WearsunscreenIfIcouldofferyouonlyonetipforthefut"
  "uresunscreenwouldbeitThelongtermbenefitsofsunscreenhavebeenprovedbysci"
  "entistswhereastherestofmyadvicehasnobasismorereliablethanmyownmeanderi"
  "ngexperienceIwilldispensethisadvicenowEnjoythepowerandbeautyofyouryout"
  "hOhnevermindYouwillnotunderstandthepowerandbeautyofyouryouthuntiltheyv"
  "efadedButtrustmein20yearsyoulllookbackatphotosofyourselfandrecallinawa"
  "yyoucantgraspnowhowmuchpossibilitylaybeforeyouandhowfabulousyoureallyl"
  "ookedYouarenotasfatasyouimagineDontworryaboutthefutureOrworryKurtVonne"
  "gutsCommencementAddressatMITLadiesandgentlemenoftheclassof97Wearsunscr"
  "eenIfIcouldofferyouonlyonetipforthefuturesunscreenwouldbeitThelongterm"
  "benefitsofsunscreenhavebeenprovedbyscientistswhereastherestofmyadviceh"
  "asnobasismorereliablethanmyownmeanderingexperienceIwilldispensethisadv"
  "icenowEnjoythepowerandbeautyofyouryouthOhnevermindYouwillnotunderstand"
  "thepowerandbeautyofyouryouthuntiltheyvefadedButtrustmein20yearsyoulllo"
  "okbackatphotosofyourselfandrecallinawayyoucantgraspnowhowmuchpossibili"
  "tylaybeforeyouandhowfabulousyoureallylookedYouarenotasfatasyouimagineD"
  "ontworryaboutthefutureOrworrybutknowthatKurtVonneguKurtVonnegutsCommen"
  "cementAddressatMITLadiesandgentlemenoftheclassof97WearsunscreenIfIcoul"
  "dofferyouonlyonetipforthefuturesunscreenwouldbeitThelongtermbenefitsof"
  "sunscreenhavebeenprovedbyscientistswhereastherestofmyadvicehasnobasism"
  "orereliablethanmyownmeanderingexperienceIwilldispensethisadvicenowEnjo"
  "ythepowerandbeautyofyouryouthOhnevermindYouwillnotunderstandthepoweran"
  "dbeautyofyouryouthuntiltheyvefadedButtrustmein20yearsyoulllookbackatph"
  "otosofyourselfandrecallinawayyoucantgraspnowhowmuchpossibilitylaybefor"
  "eyouandhowfabulousyoureallylookedYouarenotasfatasyouimagineDontworryab"
  "outthefutureOrworrybutknowthatKurtVonnegutsCommencementAddressatMITLad"
  "iesandgentlemenoftheclassof97WearsunscreenIfIcouldofferyouonlyonetipfo"
  "rthefuturesunscreenwouldbeitThelongtermbenefitsofsunscreenhavebeenprov"
  "edbyscientistswhereastherestofmyadvicehasnobasismorereliablethanmyownm"
  "eanderingexperienceIwilldispensethisadvicenowEnjoythepowerandbeautyofy"
  "ouryouthOhnevermindYouwillnotunderstandthepowerandbeautyofyouryouthunt"
  "iltheyvefadedButtrustmein20yearsyoulllookbackatphotosofyourselfandreca"
  "llinawayyoucantgraspnowhowmuchpossibilitylaybeforeyouandhowfabulousyou"
  "reallylookedYouarenotasfatasyouimagineDontworryaboutthefutureOrworrybu"
  "tknowthatKurtVonnegutsCommencementAddressatMITLadiesandgentlemenofthec"
  "lassof97WearsunscreenIfIcouldofferyouonlyonetipforthefuturesunscreenwo"
  "uldbeitThelongtermbenefitsofsunscreenhavebeenprovedbyscientistswhereas"
  "therestofmyadvicehasnobasismorereliablethanmyownmeanderingexperienceIw"
  "illdispensethisadvicenowEnjoythepowerandbeautyofyouryouthOhnevermindYo"
  "uwillnotunderstandthepowerandbeautyofyouryouthuntiltheyvefadedButtrust"
  "mein20yearsyoulllookbackatphotosofyourselfandrecallinawayyoucantgraspn"
  "owhowmuchpossibilitylaybeforeyouandhowfabulousyoureallylookedYouarenot"
  "asfatasyouimagineDontworryaboutthefutureOrworrybutknowthattsCommenceme"
  "ntAddressatMITLadiesandgentlemenoftheclassof97WearsunscreenIfIcouldoff"
  "eryouonlyonetipforthefutureKurtVonnegutsCommencementAddressatMITLadies"
  "andgentlemenoftheclassof97WearsunscreenIfIcouldofferyouonlyonetipforth"
  "efuturesunscreenwouldbeitThelongtermbenefitsofsunscreenhavebeenprovedb"
  "yscientistswhereastherest\05\8c\e517\f7\b3\16\eat\c5ih\fa\1ej\fd|)i\ef"
  "\fc\bd\ef\b6?\bb\8c\ef\fd\8e\d8\1a\89\aa\e14\f8\0d\adM4\f9C\c2\f6\cf\05"
  "M\11\aa\18!H\fc\09\1c\07!\909}\fa\8f0W\cb\c1\cd\cb\cf\ca\d6\878\13L\fb"
  "dz\8d\87g\d2\adOm\10\cc\9b\02\0c#z\f7B\d4\1e\b7\cf\8e\c9\ff1\e5\d18\d5"
  "\ab\e8\b5z>*K5\88\ea\03,\12\08\86\a0\c1\de\\97]\eeLC\ba\91\1d\b8\d6\ad"
  "\b21)\fb\80\b9\bf1p\df\fcU\db_Dh\d2\03\137\7fLJ\0c\b4\16|\fc.\aa7\007\ca"
  "\90\e8\b3\c8\c9\ce%\db\c3bM\9a\9d\16'\a9BW\cc\96\19Q\d6\91\a3\9a\a6\dc"
  "\1a]*#\01\8f\b2\85\03\0b5\b8\08\8f\cf\e6+\bcG88\f1\e6~\b4e\86z\ab\d9\ad"
  "\dd8.\a6\f0\9f\1d\b5\e4w\f0\d0\0a\bc\a4\019J\0f\09\8aR\fb\95\f69\1cF\f3"
  "\a8\90\c2k\d5pg\ba\af;\bb\faZ\efI\e6\85\ad\c3\\d3\8e\a3\e2\b8\eds9\10\11"
  "+\bc\ba\85\a52\c3\13D$\99\b2\0f4U4{]}V$\8a5;\a1\a1\1a\b2\cb\e4\1b%\8cC"
  "\ec\07\b6XG\8b\e4\16\0f\93\dc\12\84o\0d\f9(\01o\05\8c&k\06\f9\e6\82G\b2"
  "Q'(\1c\d9\d8v\9f\e4\d0y\0a8i\0b\01\a7i@\d1,V\bf\ed\fee\19~\a1%6\0cW\9c"
  "\96\9bE4p\ea\8f\95)\0f-\d3\a5\bd\a2\89\a6\bc\af\80\e0 \99\80\be\a9\82\7f"
  "\bf\ee\df\92\9b\b1\8e\b0N\e54`\8dw\df$\0a\18\0f\f5\80\07\c4jd\1e ?\84X"
  "\85\fa\c3\89"\\db\14uQ\d8\b5t\f1N\83\b2"\8a\ce\0a\903\d2lozt1\d5\98\e8"
  "\e4\14\f5z\d4\e1\ad\be\98\15==\b3\adGn&\07\c6\9d\99\cfW\11**\d7\12\d0Z"
  "\ac\9d\17.%\a6\daA\19\88\adU\95i6\14\da\06A\b8\ef.&\9dD\f0\e4u\e0\13\99"
  "\03"\e9/9gO\11\d0\df\\1eo\7f=\cd\d4\e8\05\cfk\9eQ\c0\87CK<vD3\1e\c8\b0"
  "\bb>\01d\ad?v\1fl\8b\8a\f8\e9Q\f4$\f1\e7:\9a\c9n\09'V\e3I<=(P\c3\e0\bb"
  "7\9aHh\da<\fd\f8\d8Z,\d5N\b1\94L\f49\aa\01\a6K\ce{\a6\ce\87\dd!\82\1a\94"
  "\94\e0u8K\972Z1\040\ff\93*\b7:L\83\10m\deVU\86\fd\d1J\11\dc\eeR\c8\8cY"
  "\d2u\ae\b4D\06\a3\09\f9\f93|\b65\06='\be\0a(?\cf\\bd\1eE1\08\e9tyP\95\a9"
  "H\a4\cb\98G\c9\a9\90\cdS\0a\d6\d5\00\93 >[\a2\a4\a0\d3\c4\9f\a6\09I\dd"
  "Out\14gpP\93\e2\cd\19l\d2=\a3.9f\b9~\03\06\1bv\8bqC>\04\f2X\98_\\8e\e9"
  "\8b"\b1\f4\82\0c\04S\1d\a8\ab\0fFs\d8$\daj\d5\\d7\d7+\9b\c8M\c6D%\ff\d7"
  ">\9a4\fb\c6\947\cfOc\f3\87+@\cc\b3j\90Nx^\e9\a0\c8\\bf2+\81\e5\a8\c20\83"
  "N\e4\a3\9d`\af\cb\bd\cdQ\eeR=TTo\d9\a3\07\12M\9c)\d1/\0a\fa:\ec\bb\f8\d4"
  "\83<4~\b4q\cf\87p\c0\be\b1D\abM\db\fdi\0c\9d\de \9f\\b9X\c0q'\12M\d7p\df"
  "r\80f*\db\0f\7f\17r\98}\fe\0c4N\f2J\82}\8a\12,\98\0c\ecu\c2S\c0\ffm\df"
  "\ed\1f\cb\aa(\bcZ.\c4|\f3\99\7f\f7t\aeC\e9\c7\94oD<N\c4w\9f\daUp\09\14"
  "F\a8M.\1a'\13\0a\ac\9f\87\0a~\19\85\cf\c1 \99}e3UNNL\91\baf\f9N\b6\8a\e0"
  "\11\cf\15\cd2\8b\df\05\c4N\fe\efR\81\de\16\92\f5\b2\cd\a9\a8\8a\93\18o"
  "E^q\be\9dR\e9W\86\95\fd[\a1\80-\feQKf\1a\9a\9fI\a3\c6\06\1bT\88\a5t\be"
  "\ea\11\a0\00\edx\96\fc{\ae\ee\88\1d\e2\d3\14Vhz\87\f1\11\e5\cfzB\89\a4"
  "\1a\01Zj\8f\b6E\a0\ba\0a\e79O\e2\d1\ba{R\e7\e4B\ef\d6h\c8a\01\e5f\80Mi"
  "6v:U$\ef\85#\04\d0\8d\13\b1\aclm\9e'CF0\af\d4\b5K2\f8b^\a1|\f9\bb\9e\89"
  "N#\8eZ\82qy?%K]\ae\16tsi\d7\dd\93u(\8e&i+\9a\a9'P.6\06\99\8f\f8\c1n\e8"
  "M\8ca\14z\fdRP\cd\f9\8c\a8\8e\02\df\9b\80K\f8K\a8Fq\82\c4heo\b6&\fa7\18"
  "\9cI\afN6\0a\02\8e\fd\ce\04\cb\b1\df_\e7-\0c{y\ed\95\bf1]R\9dUU\96"\f1"
  "\ecW\09\bc\ac\97_X\00`\e9\d7\82\f7\9d\0a\1e\99\f9\c6\9f\bc/P\af\db\ab7"
  "\ac\d6\e76X2WqT\0a#\aaz_\acI\e0ab(\9a\87^\8am3\bd\95\b04\9dk\18\18\1d\a2"
  "S\14\e4\c5\a3\a3\een\a6\d5\84#\aa@\f2\9f,_\e0\f2\fez\9e\b5\d6\d8\e0\03"
  "#t\e2\f6\13\f8\e7\9a\bdH!\1f\a9"\cccL\0a5~4\a8p\bb3\ad\0af\aa\f7\12N\ea"
  "6\d3\a5pDUq\f8\a5Z_\14Iy(\ees\1d\7f\df\b3\fcMk)\e9w\efK\d0=\bc\c9#\e6\d7"
  "\03\cb\8d|\d2\b4\fc\00\f4\94\be`-\da\eax\8f\88\00?G\d7\09\e9\1b\e2\1d\ff"
  "p@\ec\a5A'j""\fb\fc\bc \16\f8\96D\\09\073\cd\84\00\06\a3\93@`\a8\cf\eb"
  "m\8a\1d\0e\deh\8da\b7u\8e&\18\c06\ceh\02<\0eM\ea\b6)\10\c0\03\0b\d4h\e0"
  "/\1bg\d5\a7\b7z>\82\b3z\ee!\de]\cf\eeuiybgY?\84\a8 f\f4\f0\11\0b\a9N\a7"
  "\f7\fd\e2\ae\d5t}c\1ah6&\fc\d0\87\b0]\0a\1dc\d9\9b\c6)\f4*c\14\e9\d4\c1"
  "\af\1b{x\bb\9b\a7\0eF\e1\cb\12\81;\b1\87\00\fd\04\7f\9f7W\d7\c2\d0\04\e9"
  "^-\82\d5\e7Z\cccZ)\a6]\08\1a\10|\0e\1f\85\10\b8\80\d1\b2\f7\df\d3\09~`"
  "\1aV+~\11z\0dZk\99\c1V&\13\d9uH\f1\b8\a4\8e\a4\a9\ec\e2r\a9\16\e6\a8q\80"
  "\03\a61^G-\a1 M\a4~\c5\e2\83\bc\b0r\7f\1f\a2\c8\a8k\83X>\f8H\83\e1q\92"
  "\bd\fch\94\116<\bf\ce\a1qU\c9\1a\c9|\17\91\86\12\bb\8f#\f6Jt+%h\f7\fa/"
  ";\fb\93`\cd\cf\84\caa\bc\a9\86\0f_\ba\1f\9c\b7\00\f1\83\86\00<\96\93;\11"
  "\9aI\f5\12<\b4\b5q\c7\8f`\a2\c5\f9@%\ae\d90\17}\8d\d5\e3\fa\8b\c2L\ea\16"
  "\b9\eerX\0b?\08X\daQ1\1f\d6\d4='\bf\c7a?/^\fc\c5\02_\f32\97\fe5\f4\c49"
  "<0T\0eU\d2\a31\d6G\bf\9f\ef\a5B\9bU\f0\Z:x\12\cb\bcP&\bc\b1p\b0h\9f\d6"
  "\d31\zA\b08F \99E\0c\89\c7\9fF\f2\b4<t\ebdX\faC\e1h\81I\9b\aad{\f3/\11"
  "\0a\89\b8>\03\f34\f4\93v\b8\17\07\16D\ce)\a7\cb\a6\e2\d6\b3\f3\f9\16v\e0"
  "g88\06\f6/(k\c08\154\a6\dcg\dbT\d2\14\19V&\b1\9d\c0\a3C\aa`*w\cb\cd\8c"
  "\d8\eb\e4\8a*\b3}Ip\c7\b4&\9fd\\90\9e\f0\b7\ce*\f0\ce\f6\b6@9If\a4\e5\8c"
  "Y\db\eac\a9n|]\bb[\05\c5X)\01B\92\0e\82p\be\1c\11y\d9q\1f\eb\cd\a4\c0e"
  "\f8\8219\efW\06u\81v=\d5\db0Eq\b72?\9a\e3g\81Cq\98\f7\b3Q\88\ea`\92]\8b"
  "\c3k\da\96+\81\1fS9\ab\ea\0bZF\a8\00\d2\82=n\d7\fb\a1=\92s\9a\a1\ad\8a"
  "B\f6=\10PJvg\90\d8\dbp7\d50\f5\c9\f0M_\e7\d9\cc\ce4\e3\f7:\81e\e7'\b3\bb"
  "BrZ\c1E\cb\ca\fcb\82\92\a16I\ab\a9\c9\18}\11\e8\b9A\1b\d4\e1\8e`S\17\8d"
  "[\9a\a1R\fd\fa\9a2U\dd\1b\b5\a8s\f3\f9\18\e5\9a\88sn\16\d7\a6?\13\13\c9"
  "\bb;T\11\81p\92c\13\b0\cfw\0b\dd\d6\06\16\87\e1\91t=e\80V\da\d2nb\13\c4"
  "u\f8\c6\0d\96m\1en4?\dc\aa\d6\e2b\97{\c4\e9\a5\c6\8eK\05\bc\f1\9f"8e=="
  "\d0\8c\b3\19\89\85~\b0\a6\18\ce\85=]\80\ff\d8a\073\fb0M\d0\8b\9e\bb\d8"
  "\d8\9f\0ar\f3\1f\f8Q\a0w\bd\dfKO-\0d\87\c1\e5\f7\92\f1r?A"g`\c5\05\0f\e4"
  "-\d0\c8\c9\95J.c\b6\c9\8f\b8,\9e;75\0a\f9w\08\ef\ae\f4\a8\0f\96A\b6\ba"
  "2\09\c5\b0\f0\f3\b1\b5R\fb\0c#\f4\17\9e>\98+\ed3\d3\1d\cfZ\9c\0bP\c7\c1"
  "t\e6\97\98\fd\f4V\9b\08\f6\b8c+@\c4][\a9\05\ed\02:\d0Y\e1\ce\1f\1c\91 "
  "J0\133\c6\b7\ef4\d8\bc\98]n\8c-\921\1f\acu2\08D\cc\03\dbu(\c3\e8\b3\c8"
  "\bax7\01b\a8xp\b6\da\deMq\ff\bd\00\91XH\c7W\cci.\bcMM\b7\15V2\d9\c3\0a"
  "\d7\1d\ae\9b>\dbH\7f\b5P\b3\b1\af8\d5A<c\b17\0d\cd\f6#\cag\d7qm\b9W\b9"
  "Z\01JX\95\bb\e6Q\03\87\aaIFqv\b7\fa\d1\d0\f8\11\c4$\bc\80\b91\86\96m\c3"
  "\0e\c1\8e+\05u\94\0f,\92\91\a2|\ca\ef}\cd\82\bd\dd\fd\abI$\7f#\0c\e6\99"
  "\9f%\e3R\bc\e2l\b6\82=m~\8e\fe\f3+X\ac\1e\c1x\98\90\fc(\1f\13\b5v\1bC\a7"
  "\fe\f2bW\c0\16\ad\ad\81\09pvZ\8e\af)P\c6\17\11S\c5\a3\fc\04z\f9}G\1bWG"
  "\19\ed\83\90\bd\f4\8c\de\0b_\88\a6pX\04\1b\fa\07\dd\9fv"\b5p\0b@\de_G\7f"
  "\d2Y\0bI\7f\d9\d7\fa\87\df\e0\9b\1c\d2\aa\7f-|\94\9b|\83?z\85\15/\93$\bd"
  "\b0\91I\08\1f\c5\8a+\a0\a3.H0\1a8\ab\8a4\16\b7\bf\eak\e6\caW\ffl\ac\84"
  "\a4\9a\88\c8U\83\04\bcj\01\d5*1\ddF\depcGi\ce\0dg\df%h$a\fd\95\deQ\e8\e9"
  "\e4\df\88{\c9\0a3\afP\a8\c6\ee(\a1q\aa.\90\c2\da\98P\02\e4\ddD\bf[Q\15"
  "\d8D\9cu\91Xo\f1\c9!\9e#\f5E\8c\a2+l.wE\e0y\88M<v\db\97\93O\a1\ea\c1.\d8"
  "\df\f1\eb\0f\e3\1bG\ea\eb\a3\8f\82j\f4\ca\17\de\b94m\96+QD\da\a2\afL\a5"
  "\85\e8\ach\f0\e2\86\10\ba\ca<*[\d1\80\04\ff~\9c\8e\f0\8f\e0\f0\06c?\d7"
  "JG9\12\19E\93V\9c\fc\9d\e3\ab\9d\10aeMF\da\d42D\97k\ad\8c\dd\ba\d9'&\17"
  "\d9K\fbI\b2\06\e2\09\bb\e4K\c6]\bf\b4\1a\1d=\d7\87\00\ecA,,\b2\18\02b\"
  "\97\faD-\c4\b2\ae_9\d9Xm\a3\eda\ca\92\e7'\c5\1b\f2o\bf\0b\d1\02\9d\04\1a"
  "5\93\fa\8eB\cdM\e6T\956=\14\d4@?\f1c\ec\bax\1c.\d1{\feVb\00\8a\bf\02\b6"
  "\fa\b3B\df\c1\80\ff\0fc\04\0a\b2\85\9d\0e \cb*\dd\a0\07\b2/L\8b\83l\fc"
  "X\90)\13\db\a8\d1\f8\c1\81W\b2y8\84Q$_\1e^\f2M\e0s;\d0\8e\afk\c7\c0f\94"
  "\1a$\a7\d5li\b9c\b4d\ac\a3\ef\f8\e86\a9\b6\fc\86TpB\1a\1aS\8f\a2\c6\d6"
  "\02\ee\89\c3\a5\11#\dd\08e <T\8a\8ef\f1#\fe\a8\ben>:0\e4i\db:\9f\b0\a2"
  "\e2 U\da}|\dd'\af;\f7n\b6\82\1eJ\10\8d\e8q\cb\8d\ea*Z\fb8]\01\9b\ff\04"
  "=C\10-\e9\c3J\0e\94v\f7\e0\aa\8d\e2S\be\d1Z4\e1x\c9\eeL\cd\0c8*Tz^\ec\18"
  "|\87\a2\d8\90\05\e7l\a0!\c4c\02\fd\af9;\05\05\e5\16\f1&|\b8AR`\d3\91\0f"
  "\1c\7f\90\e7\aco\b8\fbG\d6\90`x\8d\80VaT\8a|\aa\a3\13\0b\b6\b6m\few\e9"
  "Io\94\09L\b4v\14\1d\ba\03\ef\f5\b3{\83\0f\cb\d7@:g\8d\1d\01\ce\b6\a8\d3"
  "v\98\f6Ds\a0'\0f"\89\ae\aa\8bv\cd\12\a6\e4T\8eY\b1\c9\0d\a3D\b3\dc?\ba"
  "d\1a\cd\93\f1}\bcr\a6\a8\d6e\94@\ff \d5\02'36bI\bdq\0eiV\e0i\b125\89\ad"
  "\99q\d7\06p\81q\febJw\0f\f7r\ed\a5\86\f7\e3t\b5Y\bd,R\07\c5\8c\9a{\9de"
  "\939\a2\8f\f8\8f\82i\9a\f5\c6m&\8b\ce\ff\aa?!\84x\e1\d5\1d\ba\a8\cc|\ef"
  "\c4\87\18\06e\d6>*\ef-\1d\f9\ba\a8tT6\82b\aat\80r\a3\13\d3\1c\8e\07i\98"
  "\bc\11)\09(\1f\89Ebc\d1P\1e\d2\1fp\93\dfjAJf\10i \d1s\b7F.\fdO\ba\1b\11"
  "5\919\10\12\f9\15\aa\09n\bfs"Gw\bd\16\9a\e7\9a\f8\0b\e4G\c6\0f\1a\e0&\19"
  "\a9L\a42\aa\b9p\ba\83\d4\bf\01 \a8\\14\e7@\a7\c1\bf\b0>Y\b6\8e\17\03S\0f"
  "yJ\b1t\X\af\ecE\fd\10\1d\df\c5\8ax\9a\b9\dd0\85~\1b\ed\80g\94\d2\83_k\17"
  ".8\a7\91\beEV\bc\f7_\ad\bb#+\a3\b4\c9\d1\c0\d1\91R+\fcR\17\0d\b6\a5\d2"
  "\c2\t\fadC\9f\84\95d\89T\1c\cfi\0d=.}\09qk\c2\c0\91\d7\b4F\1b\19\e8\dc"
  "\8f\1d@\bc\d0\0b\05\d9\c3_\0b\e2c\e2\cauk\8d7/n\b9\c6\d6\94\b1\d1\96s\13"
  "\c9\cd\ad\f0~\ae\8b\d5\d7\04\14](l\b8\fcdu6x\7fG\a4\fc\f8I\86+2\dfH\8b"
  "\92\b9q%\ad\a2\8c\d2$\c5\10\9ft\92\d4a\81\f8\fc\89\94`\82l\cf){\cf\f7c"
  "\fd\ae\0d\ac\d6\ba\c2\cf\ff\a0\92\c5\fa\dan\c1\13~LcXm2\85\bb\cet\0f\d1"
  "|Q\bcX\1c\ef\f1DG\1e}\82\1e\a3m\9c\8cp\ee](\d0\08\e4\a1\e3\ff\bd\af\05"
  "\c4\ed\b5ewS\ba\89\d4q\831\9bzs\9f6\0fv\09V\c2\cd\8c!\03\02\08\d1\1f\a0"
  "\05\1a\1d\b3\fc\99\d2\\f2S\16`M={\e4vCO\02\18\e8\06\d42\d6\b8/\18K\da\a0"
  "\be\84*\beU\b2\e6F\d1S(\96\b0\86|_@\ea\a3\d4`\c7N\c7\ad\1a#\1bvI\91\b8"
  "\8b+#L\93\b1\a2^\e5b\ab\0e.\d0\06pA\ae\e5\801\1d\c9K0\d7\89\bc\ec\0d\d4"
  "\15w\fd\bcNoy\b2\02Z\c9:\f7]\b7\10\8a\ee\ca.M(\1c\ba~\e5\d9\c6\be\a6v4"
  "d\eb_\d7\98<\16{\eb\d00\c3\7f\d8\bdb\8a\aa\f4\dey\cb\cc\a5\11i1[\b8y\9e"
  "3\95\9c\c7\1c\a0\a2\07\cb<{\f0\97\f72\e0\de\86\cdsHl\01.\1b|\b2\af\de\13"
  "{A5MXR\c1\f1\0ae\83\cfvnq1\11\aav\01\0fc\c3\d2\ed\b5\e64;\b1s;\eb\d19\80"
  "\c8\de\08o\07M\f4\09m\fb\ec~\e1\13`[Yb'\e0\adF\8fDi\b1\fd\0c\OX\ce$\83"
  "d\bbS\df\a2\abT\1dE\e8o\f0%\04\8eu1V\cc\d9$:$\0en\dd\10\19\bb\f3\1dE\13"
  "M+\0aQ#\e5\e58\f7C\81d\d2\94)\ef\e9G\8a\bf\03J\0f\9f\df<\c9\d2\9fK\1e\d8"
  "\83\b1\ab?\f3\bd'\9c\ffs\b5\f0\09\d8\b8\e4\cb\87\f2ll\a7\122\ab\17\8b\95"
  "\e8)\b8&\d8\e8g2t\92\8d\bb\cc<\f9\8c\0d\0di\8cq\b8y\ea\c7 \ab\13\f6\c0"
  "c\c26\a0_\b1c\\b4\9dT\0a\7f\8d\fc>;\8bT\9bM\d4\0e[\b0\a3\d8\02\9c\e4\e9"
  "!\96\df\b5\c2`2.M\a0\ee\a6#\00\b4\08~\0f^\08\0a&_U\85\a3\97\13\fd"g*z\d6"
  "\dd-\8a\d5\a0\cf^v!\81\c0\16\a1\b7\d3\c0\8d\ce\c5\8d.\fe|K\e8\1a\afM\b8"
  "\ee\1aY\8dv\8bI\b5q\e1\f9\84l\08\09\cf\99L\e9\155\a9\d9e\86\e3\d7\c7\e5"
  "W\1f\ea'\11\88\c4Z\0eM\fd\d0\13\e5+\fe\02qSFL''G\87\01\b2\8f[\cd\1cfW\e2"
  "FK\aeK\a3~V>A\87\8b\84\86>\\ba\00\03W\fdm\a68\ba|\e01\ab \ef.\a3i\a8\f3"
  "\8eod\cf\d0\08p^\91\1e\19q\e1E\e9\df\f2!\c5\cc\03T3\bdX\99X=\87\16\e2\b1"
  "\de\95F\a6\c7'g\af\c6\12\b7w\U5\aaita\d3G\cf\05k\f5\9a\d4\03\86\ce+z\e0"
  "\c3\1a\bd\1a\d7\b3\c7\12\fc\b2e\b9\c2\a9\9b\b1\88\d3\b4\eaX\e0\17\db\af"
  "2#J\f1\93l\7fn\d3\f1\9f\d0\e9\c2\a9\05t\9b\a0z\90b\c8\d71\09\83\8c|\9b"
  "R\de\e7\e0\cbAs^\c8q\8c\c0}#\a7\83\98\9eA\c19Q\ac\e8-\b8A:\0c\d3j\e3\fd"
  "N\afT\d0\f3qd@i'\f5\dfs\fcjO\c0\a6\19\95\8d\f0\d7\bd\b7\c1J\bfsPb\19\b6"
  "\01\a4\9c\0b\13Gm\d9m\ff\01\d8\f1\95qJZ+\0a\c8\e7(I\e7G\ce\7f\f3\9f\ba"
  "\ab9t\09Z\102\aa\07\05P<\80JD\b2b\f6p\baH\e2\b7\c0\049\1e\dd1\cb\ed\03"
  "%\fd/\c7\ca(8e\b1\96\d3\97\a5g\eb\d3\d1\890\03.\06\c6$\a7\fb\beI\d6\08"
  "\d0\f9\05\07\f5\a9\c3\e6tl\81\b47m\cb|\0b\b3-\a86\146\e6\fd\7f\c3z\ec\af"
  "\a4\cd\f5M\c3r\0b\c3\8f\f5{\e8\f1\\d5\c7\1b\aa\e6 B\af\7fZ\93\01\e9L\14"
  "\e5V~\a7\bf\d8uU\f8\bc\d6\e9\8bU\c2\08\d6\9d\eb\a8\b2#\c0\b1|\8cF\d4vt"
  "z\ed\14i\e5\0e\b1\e7\c9c\8cah\1a\e2C\e9\19\b04P\88\dc\90\cc\c0h\00\98S"
  "\af\ff{(t\14\bfOD=\e0\d4L\d6\be\eaWB\e03\bbf(0\9bj\d8i\d4m\e9rx\e1\9d\82"
  "\0d:,o\df\d3ElA\11\d5\bcK\c5\f2(J!b\09\12\cc\c1zd\ce\cc\bd\f3\adGn\e6\f3"
  "g\a5c\12W\d1\b7"\c3\02\c7\c1\b6\97\92k\ca\a6\deO\c4\8dY\c5\fe\b8\104\03"
  "\d8\095M\1d\de\80\94+u+\a6;\99\cf\99Z\d3x\ffn[b\82\ab\95\+\b3+\1a\b9\0f"
  "\07\10]oU\a2 \8f\0e\00\ad\01F\c5\d8\aa\e7\8e\ae\ee\d1 \16\e4\d0'b\0f2\0d"
  "E\dc\a9\d0D@e\d1u\af]\d4\fdIK\f9\015\b4^{R\a8 A\8a\88\fcZB\c1\b9<\f8\ac"
  "\a1\e4\80\82nv\\c693SR\f0At\94\df\ce\94|m6\ca\1c\a9\cad\1b\eb\ed12\bcH"
  "X\baa(\12Q\9dxm\c1.\03P5\b6\1f\d6\a5 \97^\04qN\dc\cd$\85\ed\97\012\a0?"
  "\d2AT\94X!\0e\d0\\aeu\a4\b5\c5\9b\ee\90\f6\1a\0c\d0<:_yi\85\1d@\18)\dd"
  "\b8'M\a9q\8b\a0%\e8dS\b8\d1\0450\eb>g\f7\158<m\9aL\06]^E\13K\ccA\09\df"
  "t\fb\f5r\15\f4\f7.\98=\d7i\f7-=\0bs\a3\117\ce6\0f\ads\7f\0c\02>\e3\a0\03"
  "*\fd7\a5\95\02\e7\86yBO\19{\d9\8b\adW\e8\e8^\94\a9\a6 $\9e\cb\8d\91\1a"
  "|\b2T\ef\17\cch\c6\ba\90\97Q\97\ec\82\f9HUgm\b7x\95->Z\ee\91"m\d1~\81\cf"
  "\81L\\b8:yk1'J\a0\d2#Error return from gettimeofday: %d\00%0.6f\0a\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00";

import function printf(a:int, b:int):int;

import function gettimeofday(a:int, b:int):int;

export function wasm_call_ctors() {
}

export function wasm_apply_data_relocs() {
}

export function local_memcpy(a:int, b:int, c:int) {
  var d:int = stack_pointer;
  var e:int = 32;
  var f:int_ptr = d - e;
  f[7] = a;
  f[6] = b;
  f[5] = c;
  var g:int = f[7];
  f[4] = g;
  var h:int = f[6];
  f[3] = h;
  loop L_b {
    var i:int = f[5];
    var j:int = -1;
    var k:int = i + j;
    f[5] = k;
    var l:int = 0;
    var m:int = i;
    var n:int = l;
    var o:int = m > n;
    var p:int = 1;
    var q:int = o & p;
    if (eqz(q)) goto B_a;
    var r:int_ptr = f[3];
    var s:int = r[0];
    var t:int_ptr = f[4];
    t[0] = s;
    var u:int = f[4];
    var v:int = 4;
    var w:int = u + v;
    f[4] = w;
    var x:int = f[3];
    var y:int = 4;
    var z:int = x + y;
    f[3] = z;
    continue L_b;
  }
  unreachable;
  label B_a:
}

export function BF_set_key(a:int, b:int) {
  var c:int = stack_pointer;
  var d:int = 48;
  var e:int_ptr = c - d;
  stack_pointer = e;
  e[11] = a;
  e[10] = b;
  var f:int = bf_init_P;
  var g:int = key_P;
  var h:int = 18;
  local_memcpy(g, f, h);
  var i:int = bf_init_S;
  var j:int = key_S;
  var k:int = 1024;
  local_memcpy(j, i, k);
  e[8] = g;
  var l:int = e[11];
  var m:int = 72;
  var n:int = l;
  var o:int = m;
  var p:int = n > o;
  var q:int = 1;
  var r:int = p & q;
  if (eqz(r)) goto B_a;
  var s:int = 72;
  e[11] = s;
  label B_a:
  var t:int = e[10];
  e[4] = t;
  var u:int = e[10];
  var v:int = e[11];
  var w:int = u + v;
  e[3] = w;
  var x:int = 0;
  e[9] = x;
  loop L_c {
    var y:int = e[9];
    var z:int = 18;
    var aa:int = y;
    var ba:int = z;
    var ca:int = aa < ba;
    var da:int = 1;
    var ea:int = ca & da;
    if (eqz(ea)) goto B_b;
    var fa:ubyte_ptr = e[4];
    var ga:int = 1;
    var ha:int = fa + ga;
    e[4] = ha;
    var ia:int = fa[0];
    var ja:int = 255;
    var ka:int = ia & ja;
    e[7] = ka;
    var la:int = e[4];
    var ma:int = e[3];
    var na:int = la;
    var oa:int = ma;
    var pa:int = na >= oa;
    var qa:int = 1;
    var ra:int = pa & qa;
    if (eqz(ra)) goto B_d;
    var sa:int = e[10];
    e[4] = sa;
    label B_d:
    var ta:int = e[7];
    var ua:int = 8;
    var va:int = ta << ua;
    e[7] = va;
    var wa:ubyte_ptr = e[4];
    var xa:int = 1;
    var ya:int = wa + xa;
    e[4] = ya;
    var za:int = wa[0];
    var ab:int = 255;
    var bb:int = za & ab;
    var cb:int = e[7];
    var db:int = cb | bb;
    e[7] = db;
    var eb:int = e[4];
    var fb:int = e[3];
    var gb:int = eb;
    var hb:int = fb;
    var ib:int = gb >= hb;
    var jb:int = 1;
    var kb:int = ib & jb;
    if (eqz(kb)) goto B_e;
    var lb:int = e[10];
    e[4] = lb;
    label B_e:
    var mb:int = e[7];
    var nb:int = 8;
    var ob:int = mb << nb;
    e[7] = ob;
    var pb:ubyte_ptr = e[4];
    var qb:int = 1;
    var rb:int = pb + qb;
    e[4] = rb;
    var sb:int = pb[0];
    var tb:int = 255;
    var ub:int = sb & tb;
    var vb:int = e[7];
    var wb:int = vb | ub;
    e[7] = wb;
    var xb:int = e[4];
    var yb:int = e[3];
    var zb:int = xb;
    var ac:int = yb;
    var bc:int = zb >= ac;
    var cc:int = 1;
    var dc:int = bc & cc;
    if (eqz(dc)) goto B_f;
    var ec:int = e[10];
    e[4] = ec;
    label B_f:
    var fc:int = e[7];
    var gc:int = 8;
    var hc:int = fc << gc;
    e[7] = hc;
    var ic:ubyte_ptr = e[4];
    var jc:int = 1;
    var kc:int = ic + jc;
    e[4] = kc;
    var lc:int = ic[0];
    var mc:int = 255;
    var nc:int = lc & mc;
    var oc:int = e[7];
    var pc:int = oc | nc;
    e[7] = pc;
    var qc:int = e[4];
    var rc:int = e[3];
    var sc:int = qc;
    var tc:int = rc;
    var uc:int = sc >= tc;
    var vc:int = 1;
    var wc:int = uc & vc;
    if (eqz(wc)) goto B_g;
    var xc:int = e[10];
    e[4] = xc;
    label B_g:
    var yc:int = e[7];
    var zc:int = e[8];
    var ad:int = e[9];
    var bd:int = 2;
    var cd:int = ad << bd;
    var dd:int_ptr = zc + cd;
    var ed:int = dd[0];
    var fd:int = ed ^ yc;
    dd[0] = fd;
    var gd:int = e[9];
    var hd:int = 1;
    var id:int = gd + hd;
    e[9] = id;
    continue L_c;
  }
  unreachable;
  label B_b:
  var jd:int = 0;
  e[5] = jd;
  var kd:int = 0;
  e[6] = kd;
  var ld:int = 0;
  e[9] = ld;
  loop L_i {
    var md:int = e[9];
    var nd:int = 18;
    var od:int = md;
    var pd:int = nd;
    var qd:int = od < pd;
    var rd:int = 1;
    var sd:int = qd & rd;
    if (eqz(sd)) goto B_h;
    var td:int = 20;
    var ud:int = e + td;
    var vd:int = ud;
    var wd:int = 1;
    BF_encrypt(vd, wd);
    var xd:int = e[5];
    var yd:int = e[8];
    var zd:int = e[9];
    var ae:int = 2;
    var be:int = zd << ae;
    var ce:int_ptr = yd + be;
    ce[0] = xd;
    var de:int = e[6];
    var ee:int = e[8];
    var fe:int = e[9];
    var ge:int = 1;
    var he:int = fe + ge;
    var ie:int = 2;
    var je:int = he << ie;
    var ke:int_ptr = ee + je;
    ke[0] = de;
    var le:int = e[9];
    var me:int = 2;
    var ne:int = le + me;
    e[9] = ne;
    continue L_i;
  }
  unreachable;
  label B_h:
  var oe:int = key_S;
  e[8] = oe;
  var pe:int = 0;
  e[9] = pe;
  loop L_k {
    var qe:int = e[9];
    var re:int = 1024;
    var se:int = qe;
    var te:int = re;
    var ue:int = se < te;
    var ve:int = 1;
    var we:int = ue & ve;
    if (eqz(we)) goto B_j;
    var xe:int = 20;
    var ye:int = e + xe;
    var ze:int = ye;
    var af:int = 1;
    BF_encrypt(ze, af);
    var bf:int = e[5];
    var cf:int = e[8];
    var df:int = e[9];
    var ef:int = 2;
    var ff:int = df << ef;
    var gf:int_ptr = cf + ff;
    gf[0] = bf;
    var hf:int = e[6];
    var if:int = e[8];
    var jf:int = e[9];
    var kf:int = 1;
    var lf:int = jf + kf;
    var mf:int = 2;
    var nf:int = lf << mf;
    var of:int_ptr = if + nf;
    of[0] = hf;
    var pf:int = e[9];
    var qf:int = 2;
    var rf:int = pf + qf;
    e[9] = rf;
    continue L_k;
  }
  unreachable;
  label B_j:
  var sf:int = 48;
  var tf:int = e + sf;
  stack_pointer = tf;
}

export function BF_encrypt(a:int, b:int) {
  var c:int = stack_pointer;
  var d:int = 32;
  var e:int_ptr = c - d;
  e[7] = a;
  e[6] = b;
  var f:int = key_P;
  e[3] = f;
  var g:int = key_S;
  e[2] = g;
  var h:int_ptr = e[7];
  var i:int = h[0];
  e[5] = i;
  var j:int_ptr = e[7];
  var k:int = j[1];
  e[4] = k;
  var l:int = e[6];
  if (eqz(l)) goto B_b;
  var m:int_ptr = e[3];
  var n:int = m[0];
  var o:int = e[5];
  var p:int = o ^ n;
  e[5] = p;
  var q:int_ptr = e[3];
  var r:int = q[1];
  var s:int = e[4];
  var t:int = s ^ r;
  e[4] = t;
  var u:int = e[2];
  var v:int = e[5];
  var w:int = 24;
  var x:int = v >> w;
  var y:int = 2;
  var z:int = x << y;
  var aa:int_ptr = u + z;
  var ba:int = aa[0];
  var ca:int = e[2];
  var da:int = e[5];
  var ea:int = 16;
  var fa:int = da >> ea;
  var ga:int = 255;
  var ha:int = fa & ga;
  var ia:int = 256;
  var ja:int = ha + ia;
  var ka:int = 2;
  var la:int = ja << ka;
  var ma:int_ptr = ca + la;
  var na:int = ma[0];
  var oa:int = ba + na;
  var pa:int = e[2];
  var qa:int = e[5];
  var ra:int = 8;
  var sa:int = qa >> ra;
  var ta:int = 255;
  var ua:int = sa & ta;
  var va:int = 512;
  var wa:int = ua + va;
  var xa:int = 2;
  var ya:int = wa << xa;
  var za:int_ptr = pa + ya;
  var ab:int = za[0];
  var bb:int = oa ^ ab;
  var cb:int = e[2];
  var db:int = e[5];
  var eb:int = 255;
  var fb:int = db & eb;
  var gb:int = 768;
  var hb:int = fb + gb;
  var ib:int = 2;
  var jb:int = hb << ib;
  var kb:int_ptr = cb + jb;
  var lb:int = kb[0];
  var mb:int = bb + lb;
  var nb:int = -1;
  var ob:int = mb & nb;
  var pb:int = e[4];
  var qb:int = pb ^ ob;
  e[4] = qb;
  var rb:int_ptr = e[3];
  var sb:int = rb[2];
  var tb:int = e[5];
  var ub:int = tb ^ sb;
  e[5] = ub;
  var vb:int = e[2];
  var wb:int = e[4];
  var xb:int = 24;
  var yb:int = wb >> xb;
  var zb:int = 2;
  var ac:int = yb << zb;
  var bc:int_ptr = vb + ac;
  var cc:int = bc[0];
  var dc:int = e[2];
  var ec:int = e[4];
  var fc:int = 16;
  var gc:int = ec >> fc;
  var hc:int = 255;
  var ic:int = gc & hc;
  var jc:int = 256;
  var kc:int = ic + jc;
  var lc:int = 2;
  var mc:int = kc << lc;
  var nc:int_ptr = dc + mc;
  var oc:int = nc[0];
  var pc:int = cc + oc;
  var qc:int = e[2];
  var rc:int = e[4];
  var sc:int = 8;
  var tc:int = rc >> sc;
  var uc:int = 255;
  var vc:int = tc & uc;
  var wc:int = 512;
  var xc:int = vc + wc;
  var yc:int = 2;
  var zc:int = xc << yc;
  var ad:int_ptr = qc + zc;
  var bd:int = ad[0];
  var cd:int = pc ^ bd;
  var dd:int = e[2];
  var ed:int = e[4];
  var fd:int = 255;
  var gd:int = ed & fd;
  var hd:int = 768;
  var id:int = gd + hd;
  var jd:int = 2;
  var kd:int = id << jd;
  var ld:int_ptr = dd + kd;
  var md:int = ld[0];
  var nd:int = cd + md;
  var od:int = -1;
  var pd:int = nd & od;
  var qd:int = e[5];
  var rd:int = qd ^ pd;
  e[5] = rd;
  var sd:int_ptr = e[3];
  var td:int = sd[3];
  var ud:int = e[4];
  var vd:int = ud ^ td;
  e[4] = vd;
  var wd:int = e[2];
  var xd:int = e[5];
  var yd:int = 24;
  var zd:int = xd >> yd;
  var ae:int = 2;
  var be:int = zd << ae;
  var ce:int_ptr = wd + be;
  var de:int = ce[0];
  var ee:int = e[2];
  var fe:int = e[5];
  var ge:int = 16;
  var he:int = fe >> ge;
  var ie:int = 255;
  var je:int = he & ie;
  var ke:int = 256;
  var le:int = je + ke;
  var me:int = 2;
  var ne:int = le << me;
  var oe:int_ptr = ee + ne;
  var pe:int = oe[0];
  var qe:int = de + pe;
  var re:int = e[2];
  var se:int = e[5];
  var te:int = 8;
  var ue:int = se >> te;
  var ve:int = 255;
  var we:int = ue & ve;
  var xe:int = 512;
  var ye:int = we + xe;
  var ze:int = 2;
  var af:int = ye << ze;
  var bf:int_ptr = re + af;
  var cf:int = bf[0];
  var df:int = qe ^ cf;
  var ef:int = e[2];
  var ff:int = e[5];
  var gf:int = 255;
  var hf:int = ff & gf;
  var if:int = 768;
  var jf:int = hf + if;
  var kf:int = 2;
  var lf:int = jf << kf;
  var mf:int_ptr = ef + lf;
  var nf:int = mf[0];
  var of:int = df + nf;
  var pf:int = -1;
  var qf:int = of & pf;
  var rf:int = e[4];
  var sf:int = rf ^ qf;
  e[4] = sf;
  var tf:int_ptr = e[3];
  var uf:int = tf[4];
  var vf:int = e[5];
  var wf:int = vf ^ uf;
  e[5] = wf;
  var xf:int = e[2];
  var yf:int = e[4];
  var zf:int = 24;
  var ag:int = yf >> zf;
  var bg:int = 2;
  var cg:int = ag << bg;
  var dg:int_ptr = xf + cg;
  var eg:int = dg[0];
  var fg:int = e[2];
  var gg:int = e[4];
  var hg:int = 16;
  var ig:int = gg >> hg;
  var jg:int = 255;
  var kg:int = ig & jg;
  var lg:int = 256;
  var mg:int = kg + lg;
  var ng:int = 2;
  var og:int = mg << ng;
  var pg:int_ptr = fg + og;
  var qg:int = pg[0];
  var rg:int = eg + qg;
  var sg:int = e[2];
  var tg:int = e[4];
  var ug:int = 8;
  var vg:int = tg >> ug;
  var wg:int = 255;
  var xg:int = vg & wg;
  var yg:int = 512;
  var zg:int = xg + yg;
  var ah:int = 2;
  var bh:int = zg << ah;
  var ch:int_ptr = sg + bh;
  var dh:int = ch[0];
  var eh:int = rg ^ dh;
  var fh:int = e[2];
  var gh:int = e[4];
  var hh:int = 255;
  var ih:int = gh & hh;
  var jh:int = 768;
  var kh:int = ih + jh;
  var lh:int = 2;
  var mh:int = kh << lh;
  var nh:int_ptr = fh + mh;
  var oh:int = nh[0];
  var ph:int = eh + oh;
  var qh:int = -1;
  var rh:int = ph & qh;
  var sh:int = e[5];
  var th:int = sh ^ rh;
  e[5] = th;
  var uh:int_ptr = e[3];
  var vh:int = uh[5];
  var wh:int = e[4];
  var xh:int = wh ^ vh;
  e[4] = xh;
  var yh:int = e[2];
  var zh:int = e[5];
  var ai:int = 24;
  var bi:int = zh >> ai;
  var ci:int = 2;
  var di:int = bi << ci;
  var ei:int_ptr = yh + di;
  var fi:int = ei[0];
  var gi:int = e[2];
  var hi:int = e[5];
  var ii:int = 16;
  var ji:int = hi >> ii;
  var ki:int = 255;
  var li:int = ji & ki;
  var mi:int = 256;
  var ni:int = li + mi;
  var oi:int = 2;
  var pi:int = ni << oi;
  var qi:int_ptr = gi + pi;
  var ri:int = qi[0];
  var si:int = fi + ri;
  var ti:int = e[2];
  var ui:int = e[5];
  var vi:int = 8;
  var wi:int = ui >> vi;
  var xi:int = 255;
  var yi:int = wi & xi;
  var zi:int = 512;
  var aj:int = yi + zi;
  var bj:int = 2;
  var cj:int = aj << bj;
  var dj:int_ptr = ti + cj;
  var ej:int = dj[0];
  var fj:int = si ^ ej;
  var gj:int = e[2];
  var hj:int = e[5];
  var ij:int = 255;
  var jj:int = hj & ij;
  var kj:int = 768;
  var lj:int = jj + kj;
  var mj:int = 2;
  var nj:int = lj << mj;
  var oj:int_ptr = gj + nj;
  var pj:int = oj[0];
  var qj:int = fj + pj;
  var rj:int = -1;
  var sj:int = qj & rj;
  var tj:int = e[4];
  var uj:int = tj ^ sj;
  e[4] = uj;
  var vj:int_ptr = e[3];
  var wj:int = vj[6];
  var xj:int = e[5];
  var yj:int = xj ^ wj;
  e[5] = yj;
  var zj:int = e[2];
  var ak:int = e[4];
  var bk:int = 24;
  var ck:int = ak >> bk;
  var dk:int = 2;
  var ek:int = ck << dk;
  var fk:int_ptr = zj + ek;
  var gk:int = fk[0];
  var hk:int = e[2];
  var ik:int = e[4];
  var jk:int = 16;
  var kk:int = ik >> jk;
  var lk:int = 255;
  var mk:int = kk & lk;
  var nk:int = 256;
  var ok:int = mk + nk;
  var pk:int = 2;
  var qk:int = ok << pk;
  var rk:int_ptr = hk + qk;
  var sk:int = rk[0];
  var tk:int = gk + sk;
  var uk:int = e[2];
  var vk:int = e[4];
  var wk:int = 8;
  var xk:int = vk >> wk;
  var yk:int = 255;
  var zk:int = xk & yk;
  var al:int = 512;
  var bl:int = zk + al;
  var cl:int = 2;
  var dl:int = bl << cl;
  var el:int_ptr = uk + dl;
  var fl:int = el[0];
  var gl:int = tk ^ fl;
  var hl:int = e[2];
  var il:int = e[4];
  var jl:int = 255;
  var kl:int = il & jl;
  var ll:int = 768;
  var ml:int = kl + ll;
  var nl:int = 2;
  var ol:int = ml << nl;
  var pl:int_ptr = hl + ol;
  var ql:int = pl[0];
  var rl:int = gl + ql;
  var sl:int = -1;
  var tl:int = rl & sl;
  var ul:int = e[5];
  var vl:int = ul ^ tl;
  e[5] = vl;
  var wl:int_ptr = e[3];
  var xl:int = wl[7];
  var yl:int = e[4];
  var zl:int = yl ^ xl;
  e[4] = zl;
  var am:int = e[2];
  var bm:int = e[5];
  var cm:int = 24;
  var dm:int = bm >> cm;
  var em:int = 2;
  var fm:int = dm << em;
  var gm:int_ptr = am + fm;
  var hm:int = gm[0];
  var im:int = e[2];
  var jm:int = e[5];
  var km:int = 16;
  var lm:int = jm >> km;
  var mm:int = 255;
  var nm:int = lm & mm;
  var om:int = 256;
  var pm:int = nm + om;
  var qm:int = 2;
  var rm:int = pm << qm;
  var sm:int_ptr = im + rm;
  var tm:int = sm[0];
  var um:int = hm + tm;
  var vm:int = e[2];
  var wm:int = e[5];
  var xm:int = 8;
  var ym:int = wm >> xm;
  var zm:int = 255;
  var an:int = ym & zm;
  var bn:int = 512;
  var cn:int = an + bn;
  var dn:int = 2;
  var en:int = cn << dn;
  var fn:int_ptr = vm + en;
  var gn:int = fn[0];
  var hn:int = um ^ gn;
  var in:int = e[2];
  var jn:int = e[5];
  var kn:int = 255;
  var ln:int = jn & kn;
  var mn:int = 768;
  var nn:int = ln + mn;
  var on:int = 2;
  var pn:int = nn << on;
  var qn:int_ptr = in + pn;
  var rn:int = qn[0];
  var sn:int = hn + rn;
  var tn:int = -1;
  var un:int = sn & tn;
  var vn:int = e[4];
  var wn:int = vn ^ un;
  e[4] = wn;
  var xn:int_ptr = e[3];
  var yn:int = xn[8];
  var zn:int = e[5];
  var ao:int = zn ^ yn;
  e[5] = ao;
  var bo:int = e[2];
  var co:int = e[4];
  var do:int = 24;
  var eo:int = co >> do;
  var fo:int = 2;
  var go:int = eo << fo;
  var ho:int_ptr = bo + go;
  var io:int = ho[0];
  var jo:int = e[2];
  var ko:int = e[4];
  var lo:int = 16;
  var mo:int = ko >> lo;
  var no:int = 255;
  var oo:int = mo & no;
  var po:int = 256;
  var qo:int = oo + po;
  var ro:int = 2;
  var so:int = qo << ro;
  var to:int_ptr = jo + so;
  var uo:int = to[0];
  var vo:int = io + uo;
  var wo:int = e[2];
  var xo:int = e[4];
  var yo:int = 8;
  var zo:int = xo >> yo;
  var ap:int = 255;
  var bp:int = zo & ap;
  var cp:int = 512;
  var dp:int = bp + cp;
  var ep:int = 2;
  var fp:int = dp << ep;
  var gp:int_ptr = wo + fp;
  var hp:int = gp[0];
  var ip:int = vo ^ hp;
  var jp:int = e[2];
  var kp:int = e[4];
  var lp:int = 255;
  var mp:int = kp & lp;
  var np:int = 768;
  var op:int = mp + np;
  var pp:int = 2;
  var qp:int = op << pp;
  var rp:int_ptr = jp + qp;
  var sp:int = rp[0];
  var tp:int = ip + sp;
  var up:int = -1;
  var vp:int = tp & up;
  var wp:int = e[5];
  var xp:int = wp ^ vp;
  e[5] = xp;
  var yp:int_ptr = e[3];
  var zp:int = yp[9];
  var aq:int = e[4];
  var bq:int = aq ^ zp;
  e[4] = bq;
  var cq:int = e[2];
  var dq:int = e[5];
  var eq:int = 24;
  var fq:int = dq >> eq;
  var gq:int = 2;
  var hq:int = fq << gq;
  var iq:int_ptr = cq + hq;
  var jq:int = iq[0];
  var kq:int = e[2];
  var lq:int = e[5];
  var mq:int = 16;
  var nq:int = lq >> mq;
  var oq:int = 255;
  var pq:int = nq & oq;
  var qq:int = 256;
  var rq:int = pq + qq;
  var sq:int = 2;
  var tq:int = rq << sq;
  var uq:int_ptr = kq + tq;
  var vq:int = uq[0];
  var wq:int = jq + vq;
  var xq:int = e[2];
  var yq:int = e[5];
  var zq:int = 8;
  var ar:int = yq >> zq;
  var br:int = 255;
  var cr:int = ar & br;
  var dr:int = 512;
  var er:int = cr + dr;
  var fr:int = 2;
  var gr:int = er << fr;
  var hr:int_ptr = xq + gr;
  var ir:int = hr[0];
  var jr:int = wq ^ ir;
  var kr:int = e[2];
  var lr:int = e[5];
  var mr:int = 255;
  var nr:int = lr & mr;
  var or:int = 768;
  var pr:int = nr + or;
  var qr:int = 2;
  var rr:int = pr << qr;
  var sr:int_ptr = kr + rr;
  var tr:int = sr[0];
  var ur:int = jr + tr;
  var vr:int = -1;
  var wr:int = ur & vr;
  var xr:int = e[4];
  var yr:int = xr ^ wr;
  e[4] = yr;
  var zr:int_ptr = e[3];
  var as:int = zr[10];
  var bs:int = e[5];
  var cs:int = bs ^ as;
  e[5] = cs;
  var ds:int = e[2];
  var es:int = e[4];
  var fs:int = 24;
  var gs:int = es >> fs;
  var hs:int = 2;
  var is:int = gs << hs;
  var js:int_ptr = ds + is;
  var ks:int = js[0];
  var ls:int = e[2];
  var ms:int = e[4];
  var ns:int = 16;
  var os:int = ms >> ns;
  var ps:int = 255;
  var qs:int = os & ps;
  var rs:int = 256;
  var ss:int = qs + rs;
  var ts:int = 2;
  var us:int = ss << ts;
  var vs:int_ptr = ls + us;
  var ws:int = vs[0];
  var xs:int = ks + ws;
  var ys:int = e[2];
  var zs:int = e[4];
  var at:int = 8;
  var bt:int = zs >> at;
  var ct:int = 255;
  var dt:int = bt & ct;
  var et:int = 512;
  var ft:int = dt + et;
  var gt:int = 2;
  var ht:int = ft << gt;
  var it:int_ptr = ys + ht;
  var jt:int = it[0];
  var kt:int = xs ^ jt;
  var lt:int = e[2];
  var mt:int = e[4];
  var nt:int = 255;
  var ot:int = mt & nt;
  var pt:int = 768;
  var qt:int = ot + pt;
  var rt:int = 2;
  var st:int = qt << rt;
  var tt:int_ptr = lt + st;
  var ut:int = tt[0];
  var vt:int = kt + ut;
  var wt:int = -1;
  var xt:int = vt & wt;
  var yt:int = e[5];
  var zt:int = yt ^ xt;
  e[5] = zt;
  var au:int_ptr = e[3];
  var bu:int = au[11];
  var cu:int = e[4];
  var du:int = cu ^ bu;
  e[4] = du;
  var eu:int = e[2];
  var fu:int = e[5];
  var gu:int = 24;
  var hu:int = fu >> gu;
  var iu:int = 2;
  var ju:int = hu << iu;
  var ku:int_ptr = eu + ju;
  var lu:int = ku[0];
  var mu:int = e[2];
  var nu:int = e[5];
  var ou:int = 16;
  var pu:int = nu >> ou;
  var qu:int = 255;
  var ru:int = pu & qu;
  var su:int = 256;
  var tu:int = ru + su;
  var uu:int = 2;
  var vu:int = tu << uu;
  var wu:int_ptr = mu + vu;
  var xu:int = wu[0];
  var yu:int = lu + xu;
  var zu:int = e[2];
  var av:int = e[5];
  var bv:int = 8;
  var cv:int = av >> bv;
  var dv:int = 255;
  var ev:int = cv & dv;
  var fv:int = 512;
  var gv:int = ev + fv;
  var hv:int = 2;
  var iv:int = gv << hv;
  var jv:int_ptr = zu + iv;
  var kv:int = jv[0];
  var lv:int = yu ^ kv;
  var mv:int = e[2];
  var nv:int = e[5];
  var ov:int = 255;
  var pv:int = nv & ov;
  var qv:int = 768;
  var rv:int = pv + qv;
  var sv:int = 2;
  var tv:int = rv << sv;
  var uv:int_ptr = mv + tv;
  var vv:int = uv[0];
  var wv:int = lv + vv;
  var xv:int = -1;
  var yv:int = wv & xv;
  var zv:int = e[4];
  var aw:int = zv ^ yv;
  e[4] = aw;
  var bw:int_ptr = e[3];
  var cw:int = bw[12];
  var dw:int = e[5];
  var ew:int = dw ^ cw;
  e[5] = ew;
  var fw:int = e[2];
  var gw:int = e[4];
  var hw:int = 24;
  var iw:int = gw >> hw;
  var jw:int = 2;
  var kw:int = iw << jw;
  var lw:int_ptr = fw + kw;
  var mw:int = lw[0];
  var nw:int = e[2];
  var ow:int = e[4];
  var pw:int = 16;
  var qw:int = ow >> pw;
  var rw:int = 255;
  var sw:int = qw & rw;
  var tw:int = 256;
  var uw:int = sw + tw;
  var vw:int = 2;
  var ww:int = uw << vw;
  var xw:int_ptr = nw + ww;
  var yw:int = xw[0];
  var zw:int = mw + yw;
  var ax:int = e[2];
  var bx:int = e[4];
  var cx:int = 8;
  var dx:int = bx >> cx;
  var ex:int = 255;
  var fx:int = dx & ex;
  var gx:int = 512;
  var hx:int = fx + gx;
  var ix:int = 2;
  var jx:int = hx << ix;
  var kx:int_ptr = ax + jx;
  var lx:int = kx[0];
  var mx:int = zw ^ lx;
  var nx:int = e[2];
  var ox:int = e[4];
  var px:int = 255;
  var qx:int = ox & px;
  var rx:int = 768;
  var sx:int = qx + rx;
  var tx:int = 2;
  var ux:int = sx << tx;
  var vx:int_ptr = nx + ux;
  var wx:int = vx[0];
  var xx:int = mx + wx;
  var yx:int = -1;
  var zx:int = xx & yx;
  var ay:int = e[5];
  var by:int = ay ^ zx;
  e[5] = by;
  var cy:int_ptr = e[3];
  var dy:int = cy[13];
  var ey:int = e[4];
  var fy:int = ey ^ dy;
  e[4] = fy;
  var gy:int = e[2];
  var hy:int = e[5];
  var iy:int = 24;
  var jy:int = hy >> iy;
  var ky:int = 2;
  var ly:int = jy << ky;
  var my:int_ptr = gy + ly;
  var ny:int = my[0];
  var oy:int = e[2];
  var py:int = e[5];
  var qy:int = 16;
  var ry:int = py >> qy;
  var sy:int = 255;
  var ty:int = ry & sy;
  var uy:int = 256;
  var vy:int = ty + uy;
  var wy:int = 2;
  var xy:int = vy << wy;
  var yy:int_ptr = oy + xy;
  var zy:int = yy[0];
  var az:int = ny + zy;
  var bz:int = e[2];
  var cz:int = e[5];
  var dz:int = 8;
  var ez:int = cz >> dz;
  var fz:int = 255;
  var gz:int = ez & fz;
  var hz:int = 512;
  var iz:int = gz + hz;
  var jz:int = 2;
  var kz:int = iz << jz;
  var lz:int_ptr = bz + kz;
  var mz:int = lz[0];
  var nz:int = az ^ mz;
  var oz:int = e[2];
  var pz:int = e[5];
  var qz:int = 255;
  var rz:int = pz & qz;
  var sz:int = 768;
  var tz:int = rz + sz;
  var uz:int = 2;
  var vz:int = tz << uz;
  var wz:int_ptr = oz + vz;
  var xz:int = wz[0];
  var yz:int = nz + xz;
  var zz:int = -1;
  var aaa:int = yz & zz;
  var baa:int = e[4];
  var caa:int = baa ^ aaa;
  e[4] = caa;
  var daa:int_ptr = e[3];
  var eaa:int = daa[14];
  var faa:int = e[5];
  var gaa:int = faa ^ eaa;
  e[5] = gaa;
  var haa:int = e[2];
  var iaa:int = e[4];
  var jaa:int = 24;
  var kaa:int = iaa >> jaa;
  var laa:int = 2;
  var maa:int = kaa << laa;
  var naa:int_ptr = haa + maa;
  var oaa:int = naa[0];
  var paa:int = e[2];
  var qaa:int = e[4];
  var raa:int = 16;
  var saa:int = qaa >> raa;
  var taa:int = 255;
  var uaa:int = saa & taa;
  var vaa:int = 256;
  var waa:int = uaa + vaa;
  var xaa:int = 2;
  var yaa:int = waa << xaa;
  var zaa:int_ptr = paa + yaa;
  var aba:int = zaa[0];
  var bba:int = oaa + aba;
  var cba:int = e[2];
  var dba:int = e[4];
  var eba:int = 8;
  var fba:int = dba >> eba;
  var gba:int = 255;
  var hba:int = fba & gba;
  var iba:int = 512;
  var jba:int = hba + iba;
  var kba:int = 2;
  var lba:int = jba << kba;
  var mba:int_ptr = cba + lba;
  var nba:int = mba[0];
  var oba:int = bba ^ nba;
  var pba:int = e[2];
  var qba:int = e[4];
  var rba:int = 255;
  var sba:int = qba & rba;
  var tba:int = 768;
  var uba:int = sba + tba;
  var vba:int = 2;
  var wba:int = uba << vba;
  var xba:int_ptr = pba + wba;
  var yba:int = xba[0];
  var zba:int = oba + yba;
  var aca:int = -1;
  var bca:int = zba & aca;
  var cca:int = e[5];
  var dca:int = cca ^ bca;
  e[5] = dca;
  var eca:int_ptr = e[3];
  var fca:int = eca[15];
  var gca:int = e[4];
  var hca:int = gca ^ fca;
  e[4] = hca;
  var ica:int = e[2];
  var jca:int = e[5];
  var kca:int = 24;
  var lca:int = jca >> kca;
  var mca:int = 2;
  var nca:int = lca << mca;
  var oca:int_ptr = ica + nca;
  var pca:int = oca[0];
  var qca:int = e[2];
  var rca:int = e[5];
  var sca:int = 16;
  var tca:int = rca >> sca;
  var uca:int = 255;
  var vca:int = tca & uca;
  var wca:int = 256;
  var xca:int = vca + wca;
  var yca:int = 2;
  var zca:int = xca << yca;
  var ada:int_ptr = qca + zca;
  var bda:int = ada[0];
  var cda:int = pca + bda;
  var dda:int = e[2];
  var eda:int = e[5];
  var fda:int = 8;
  var gda:int = eda >> fda;
  var hda:int = 255;
  var ida:int = gda & hda;
  var jda:int = 512;
  var kda:int = ida + jda;
  var lda:int = 2;
  var mda:int = kda << lda;
  var nda:int_ptr = dda + mda;
  var oda:int = nda[0];
  var pda:int = cda ^ oda;
  var qda:int = e[2];
  var rda:int = e[5];
  var sda:int = 255;
  var tda:int = rda & sda;
  var uda:int = 768;
  var vda:int = tda + uda;
  var wda:int = 2;
  var xda:int = vda << wda;
  var yda:int_ptr = qda + xda;
  var zda:int = yda[0];
  var aea:int = pda + zda;
  var bea:int = -1;
  var cea:int = aea & bea;
  var dea:int = e[4];
  var eea:int = dea ^ cea;
  e[4] = eea;
  var fea:int_ptr = e[3];
  var gea:int = fea[16];
  var hea:int = e[5];
  var iea:int = hea ^ gea;
  e[5] = iea;
  var jea:int = e[2];
  var kea:int = e[4];
  var lea:int = 24;
  var mea:int = kea >> lea;
  var nea:int = 2;
  var oea:int = mea << nea;
  var pea:int_ptr = jea + oea;
  var qea:int = pea[0];
  var rea:int = e[2];
  var sea:int = e[4];
  var tea:int = 16;
  var uea:int = sea >> tea;
  var vea:int = 255;
  var wea:int = uea & vea;
  var xea:int = 256;
  var yea:int = wea + xea;
  var zea:int = 2;
  var afa:int = yea << zea;
  var bfa:int_ptr = rea + afa;
  var cfa:int = bfa[0];
  var dfa:int = qea + cfa;
  var efa:int = e[2];
  var ffa:int = e[4];
  var gfa:int = 8;
  var hfa:int = ffa >> gfa;
  var ifa:int = 255;
  var jfa:int = hfa & ifa;
  var kfa:int = 512;
  var lfa:int = jfa + kfa;
  var mfa:int = 2;
  var nfa:int = lfa << mfa;
  var ofa:int_ptr = efa + nfa;
  var pfa:int = ofa[0];
  var qfa:int = dfa ^ pfa;
  var rfa:int = e[2];
  var sfa:int = e[4];
  var tfa:int = 255;
  var ufa:int = sfa & tfa;
  var vfa:int = 768;
  var wfa:int = ufa + vfa;
  var xfa:int = 2;
  var yfa:int = wfa << xfa;
  var zfa:int_ptr = rfa + yfa;
  var aga:int = zfa[0];
  var bga:int = qfa + aga;
  var cga:int = -1;
  var dga:int = bga & cga;
  var ega:int = e[5];
  var fga:int = ega ^ dga;
  e[5] = fga;
  var gga:int_ptr = e[3];
  var hga:int = gga[17];
  var iga:int = e[4];
  var jga:int = iga ^ hga;
  e[4] = jga;
  goto B_a;
  label B_b:
  var kga:int_ptr = e[3];
  var lga:int = kga[17];
  var mga:int = e[5];
  var nga:int = mga ^ lga;
  e[5] = nga;
  var oga:int_ptr = e[3];
  var pga:int = oga[16];
  var qga:int = e[4];
  var rga:int = qga ^ pga;
  e[4] = rga;
  var sga:int = e[2];
  var tga:int = e[5];
  var uga:int = 24;
  var vga:int = tga >> uga;
  var wga:int = 2;
  var xga:int = vga << wga;
  var yga:int_ptr = sga + xga;
  var zga:int = yga[0];
  var aha:int = e[2];
  var bha:int = e[5];
  var cha:int = 16;
  var dha:int = bha >> cha;
  var eha:int = 255;
  var fha:int = dha & eha;
  var gha:int = 256;
  var hha:int = fha + gha;
  var iha:int = 2;
  var jha:int = hha << iha;
  var kha:int_ptr = aha + jha;
  var lha:int = kha[0];
  var mha:int = zga + lha;
  var nha:int = e[2];
  var oha:int = e[5];
  var pha:int = 8;
  var qha:int = oha >> pha;
  var rha:int = 255;
  var sha:int = qha & rha;
  var tha:int = 512;
  var uha:int = sha + tha;
  var vha:int = 2;
  var wha:int = uha << vha;
  var xha:int_ptr = nha + wha;
  var yha:int = xha[0];
  var zha:int = mha ^ yha;
  var aia:int = e[2];
  var bia:int = e[5];
  var cia:int = 255;
  var dia:int = bia & cia;
  var eia:int = 768;
  var fia:int = dia + eia;
  var gia:int = 2;
  var hia:int = fia << gia;
  var iia:int_ptr = aia + hia;
  var jia:int = iia[0];
  var kia:int = zha + jia;
  var lia:int = -1;
  var mia:int = kia & lia;
  var nia:int = e[4];
  var oia:int = nia ^ mia;
  e[4] = oia;
  var pia:int_ptr = e[3];
  var qia:int = pia[15];
  var ria:int = e[5];
  var sia:int = ria ^ qia;
  e[5] = sia;
  var tia:int = e[2];
  var uia:int = e[4];
  var via:int = 24;
  var wia:int = uia >> via;
  var xia:int = 2;
  var yia:int = wia << xia;
  var zia:int_ptr = tia + yia;
  var aja:int = zia[0];
  var bja:int = e[2];
  var cja:int = e[4];
  var dja:int = 16;
  var eja:int = cja >> dja;
  var fja:int = 255;
  var gja:int = eja & fja;
  var hja:int = 256;
  var ija:int = gja + hja;
  var jja:int = 2;
  var kja:int = ija << jja;
  var lja:int_ptr = bja + kja;
  var mja:int = lja[0];
  var nja:int = aja + mja;
  var oja:int = e[2];
  var pja:int = e[4];
  var qja:int = 8;
  var rja:int = pja >> qja;
  var sja:int = 255;
  var tja:int = rja & sja;
  var uja:int = 512;
  var vja:int = tja + uja;
  var wja:int = 2;
  var xja:int = vja << wja;
  var yja:int_ptr = oja + xja;
  var zja:int = yja[0];
  var aka:int = nja ^ zja;
  var bka:int = e[2];
  var cka:int = e[4];
  var dka:int = 255;
  var eka:int = cka & dka;
  var fka:int = 768;
  var gka:int = eka + fka;
  var hka:int = 2;
  var ika:int = gka << hka;
  var jka:int_ptr = bka + ika;
  var kka:int = jka[0];
  var lka:int = aka + kka;
  var mka:int = -1;
  var nka:int = lka & mka;
  var oka:int = e[5];
  var pka:int = oka ^ nka;
  e[5] = pka;
  var qka:int_ptr = e[3];
  var rka:int = qka[14];
  var ska:int = e[4];
  var tka:int = ska ^ rka;
  e[4] = tka;
  var uka:int = e[2];
  var vka:int = e[5];
  var wka:int = 24;
  var xka:int = vka >> wka;
  var yka:int = 2;
  var zka:int = xka << yka;
  var ala:int_ptr = uka + zka;
  var bla:int = ala[0];
  var cla:int = e[2];
  var dla:int = e[5];
  var ela:int = 16;
  var fla:int = dla >> ela;
  var gla:int = 255;
  var hla:int = fla & gla;
  var ila:int = 256;
  var jla:int = hla + ila;
  var kla:int = 2;
  var lla:int = jla << kla;
  var mla:int_ptr = cla + lla;
  var nla:int = mla[0];
  var ola:int = bla + nla;
  var pla:int = e[2];
  var qla:int = e[5];
  var rla:int = 8;
  var sla:int = qla >> rla;
  var tla:int = 255;
  var ula:int = sla & tla;
  var vla:int = 512;
  var wla:int = ula + vla;
  var xla:int = 2;
  var yla:int = wla << xla;
  var zla:int_ptr = pla + yla;
  var ama:int = zla[0];
  var bma:int = ola ^ ama;
  var cma:int = e[2];
  var dma:int = e[5];
  var ema:int = 255;
  var fma:int = dma & ema;
  var gma:int = 768;
  var hma:int = fma + gma;
  var ima:int = 2;
  var jma:int = hma << ima;
  var kma:int_ptr = cma + jma;
  var lma:int = kma[0];
  var mma:int = bma + lma;
  var nma:int = -1;
  var oma:int = mma & nma;
  var pma:int = e[4];
  var qma:int = pma ^ oma;
  e[4] = qma;
  var rma:int_ptr = e[3];
  var sma:int = rma[13];
  var tma:int = e[5];
  var uma:int = tma ^ sma;
  e[5] = uma;
  var vma:int = e[2];
  var wma:int = e[4];
  var xma:int = 24;
  var yma:int = wma >> xma;
  var zma:int = 2;
  var ana:int = yma << zma;
  var bna:int_ptr = vma + ana;
  var cna:int = bna[0];
  var dna:int = e[2];
  var ena:int = e[4];
  var fna:int = 16;
  var gna:int = ena >> fna;
  var hna:int = 255;
  var ina:int = gna & hna;
  var jna:int = 256;
  var kna:int = ina + jna;
  var lna:int = 2;
  var mna:int = kna << lna;
  var nna:int_ptr = dna + mna;
  var ona:int = nna[0];
  var pna:int = cna + ona;
  var qna:int = e[2];
  var rna:int = e[4];
  var sna:int = 8;
  var tna:int = rna >> sna;
  var una:int = 255;
  var vna:int = tna & una;
  var wna:int = 512;
  var xna:int = vna + wna;
  var yna:int = 2;
  var zna:int = xna << yna;
  var aoa:int_ptr = qna + zna;
  var boa:int = aoa[0];
  var coa:int = pna ^ boa;
  var doa:int = e[2];
  var eoa:int = e[4];
  var foa:int = 255;
  var goa:int = eoa & foa;
  var hoa:int = 768;
  var ioa:int = goa + hoa;
  var joa:int = 2;
  var koa:int = ioa << joa;
  var loa:int_ptr = doa + koa;
  var moa:int = loa[0];
  var noa:int = coa + moa;
  var ooa:int = -1;
  var poa:int = noa & ooa;
  var qoa:int = e[5];
  var roa:int = qoa ^ poa;
  e[5] = roa;
  var soa:int_ptr = e[3];
  var toa:int = soa[12];
  var uoa:int = e[4];
  var voa:int = uoa ^ toa;
  e[4] = voa;
  var woa:int = e[2];
  var xoa:int = e[5];
  var yoa:int = 24;
  var zoa:int = xoa >> yoa;
  var apa:int = 2;
  var bpa:int = zoa << apa;
  var cpa:int_ptr = woa + bpa;
  var dpa:int = cpa[0];
  var epa:int = e[2];
  var fpa:int = e[5];
  var gpa:int = 16;
  var hpa:int = fpa >> gpa;
  var ipa:int = 255;
  var jpa:int = hpa & ipa;
  var kpa:int = 256;
  var lpa:int = jpa + kpa;
  var mpa:int = 2;
  var npa:int = lpa << mpa;
  var opa:int_ptr = epa + npa;
  var ppa:int = opa[0];
  var qpa:int = dpa + ppa;
  var rpa:int = e[2];
  var spa:int = e[5];
  var tpa:int = 8;
  var upa:int = spa >> tpa;
  var vpa:int = 255;
  var wpa:int = upa & vpa;
  var xpa:int = 512;
  var ypa:int = wpa + xpa;
  var zpa:int = 2;
  var aqa:int = ypa << zpa;
  var bqa:int_ptr = rpa + aqa;
  var cqa:int = bqa[0];
  var dqa:int = qpa ^ cqa;
  var eqa:int = e[2];
  var fqa:int = e[5];
  var gqa:int = 255;
  var hqa:int = fqa & gqa;
  var iqa:int = 768;
  var jqa:int = hqa + iqa;
  var kqa:int = 2;
  var lqa:int = jqa << kqa;
  var mqa:int_ptr = eqa + lqa;
  var nqa:int = mqa[0];
  var oqa:int = dqa + nqa;
  var pqa:int = -1;
  var qqa:int = oqa & pqa;
  var rqa:int = e[4];
  var sqa:int = rqa ^ qqa;
  e[4] = sqa;
  var tqa:int_ptr = e[3];
  var uqa:int = tqa[11];
  var vqa:int = e[5];
  var wqa:int = vqa ^ uqa;
  e[5] = wqa;
  var xqa:int = e[2];
  var yqa:int = e[4];
  var zqa:int = 24;
  var ara:int = yqa >> zqa;
  var bra:int = 2;
  var cra:int = ara << bra;
  var dra:int_ptr = xqa + cra;
  var era:int = dra[0];
  var fra:int = e[2];
  var gra:int = e[4];
  var hra:int = 16;
  var ira:int = gra >> hra;
  var jra:int = 255;
  var kra:int = ira & jra;
  var lra:int = 256;
  var mra:int = kra + lra;
  var nra:int = 2;
  var ora:int = mra << nra;
  var pra:int_ptr = fra + ora;
  var qra:int = pra[0];
  var rra:int = era + qra;
  var sra:int = e[2];
  var tra:int = e[4];
  var ura:int = 8;
  var vra:int = tra >> ura;
  var wra:int = 255;
  var xra:int = vra & wra;
  var yra:int = 512;
  var zra:int = xra + yra;
  var asa:int = 2;
  var bsa:int = zra << asa;
  var csa:int_ptr = sra + bsa;
  var dsa:int = csa[0];
  var esa:int = rra ^ dsa;
  var fsa:int = e[2];
  var gsa:int = e[4];
  var hsa:int = 255;
  var isa:int = gsa & hsa;
  var jsa:int = 768;
  var ksa:int = isa + jsa;
  var lsa:int = 2;
  var msa:int = ksa << lsa;
  var nsa:int_ptr = fsa + msa;
  var osa:int = nsa[0];
  var psa:int = esa + osa;
  var qsa:int = -1;
  var rsa:int = psa & qsa;
  var ssa:int = e[5];
  var tsa:int = ssa ^ rsa;
  e[5] = tsa;
  var usa:int_ptr = e[3];
  var vsa:int = usa[10];
  var wsa:int = e[4];
  var xsa:int = wsa ^ vsa;
  e[4] = xsa;
  var ysa:int = e[2];
  var zsa:int = e[5];
  var ata:int = 24;
  var bta:int = zsa >> ata;
  var cta:int = 2;
  var dta:int = bta << cta;
  var eta:int_ptr = ysa + dta;
  var fta:int = eta[0];
  var gta:int = e[2];
  var hta:int = e[5];
  var ita:int = 16;
  var jta:int = hta >> ita;
  var kta:int = 255;
  var lta:int = jta & kta;
  var mta:int = 256;
  var nta:int = lta + mta;
  var ota:int = 2;
  var pta:int = nta << ota;
  var qta:int_ptr = gta + pta;
  var rta:int = qta[0];
  var sta:int = fta + rta;
  var tta:int = e[2];
  var uta:int = e[5];
  var vta:int = 8;
  var wta:int = uta >> vta;
  var xta:int = 255;
  var yta:int = wta & xta;
  var zta:int = 512;
  var aua:int = yta + zta;
  var bua:int = 2;
  var cua:int = aua << bua;
  var dua:int_ptr = tta + cua;
  var eua:int = dua[0];
  var fua:int = sta ^ eua;
  var gua:int = e[2];
  var hua:int = e[5];
  var iua:int = 255;
  var jua:int = hua & iua;
  var kua:int = 768;
  var lua:int = jua + kua;
  var mua:int = 2;
  var nua:int = lua << mua;
  var oua:int_ptr = gua + nua;
  var pua:int = oua[0];
  var qua:int = fua + pua;
  var rua:int = -1;
  var sua:int = qua & rua;
  var tua:int = e[4];
  var uua:int = tua ^ sua;
  e[4] = uua;
  var vua:int_ptr = e[3];
  var wua:int = vua[9];
  var xua:int = e[5];
  var yua:int = xua ^ wua;
  e[5] = yua;
  var zua:int = e[2];
  var ava:int = e[4];
  var bva:int = 24;
  var cva:int = ava >> bva;
  var dva:int = 2;
  var eva:int = cva << dva;
  var fva:int_ptr = zua + eva;
  var gva:int = fva[0];
  var hva:int = e[2];
  var iva:int = e[4];
  var jva:int = 16;
  var kva:int = iva >> jva;
  var lva:int = 255;
  var mva:int = kva & lva;
  var nva:int = 256;
  var ova:int = mva + nva;
  var pva:int = 2;
  var qva:int = ova << pva;
  var rva:int_ptr = hva + qva;
  var sva:int = rva[0];
  var tva:int = gva + sva;
  var uva:int = e[2];
  var vva:int = e[4];
  var wva:int = 8;
  var xva:int = vva >> wva;
  var yva:int = 255;
  var zva:int = xva & yva;
  var awa:int = 512;
  var bwa:int = zva + awa;
  var cwa:int = 2;
  var dwa:int = bwa << cwa;
  var ewa:int_ptr = uva + dwa;
  var fwa:int = ewa[0];
  var gwa:int = tva ^ fwa;
  var hwa:int = e[2];
  var iwa:int = e[4];
  var jwa:int = 255;
  var kwa:int = iwa & jwa;
  var lwa:int = 768;
  var mwa:int = kwa + lwa;
  var nwa:int = 2;
  var owa:int = mwa << nwa;
  var pwa:int_ptr = hwa + owa;
  var qwa:int = pwa[0];
  var rwa:int = gwa + qwa;
  var swa:int = -1;
  var twa:int = rwa & swa;
  var uwa:int = e[5];
  var vwa:int = uwa ^ twa;
  e[5] = vwa;
  var wwa:int_ptr = e[3];
  var xwa:int = wwa[8];
  var ywa:int = e[4];
  var zwa:int = ywa ^ xwa;
  e[4] = zwa;
  var axa:int = e[2];
  var bxa:int = e[5];
  var cxa:int = 24;
  var dxa:int = bxa >> cxa;
  var exa:int = 2;
  var fxa:int = dxa << exa;
  var gxa:int_ptr = axa + fxa;
  var hxa:int = gxa[0];
  var ixa:int = e[2];
  var jxa:int = e[5];
  var kxa:int = 16;
  var lxa:int = jxa >> kxa;
  var mxa:int = 255;
  var nxa:int = lxa & mxa;
  var oxa:int = 256;
  var pxa:int = nxa + oxa;
  var qxa:int = 2;
  var rxa:int = pxa << qxa;
  var sxa:int_ptr = ixa + rxa;
  var txa:int = sxa[0];
  var uxa:int = hxa + txa;
  var vxa:int = e[2];
  var wxa:int = e[5];
  var xxa:int = 8;
  var yxa:int = wxa >> xxa;
  var zxa:int = 255;
  var aya:int = yxa & zxa;
  var bya:int = 512;
  var cya:int = aya + bya;
  var dya:int = 2;
  var eya:int = cya << dya;
  var fya:int_ptr = vxa + eya;
  var gya:int = fya[0];
  var hya:int = uxa ^ gya;
  var iya:int = e[2];
  var jya:int = e[5];
  var kya:int = 255;
  var lya:int = jya & kya;
  var mya:int = 768;
  var nya:int = lya + mya;
  var oya:int = 2;
  var pya:int = nya << oya;
  var qya:int_ptr = iya + pya;
  var rya:int = qya[0];
  var sya:int = hya + rya;
  var tya:int = -1;
  var uya:int = sya & tya;
  var vya:int = e[4];
  var wya:int = vya ^ uya;
  e[4] = wya;
  var xya:int_ptr = e[3];
  var yya:int = xya[7];
  var zya:int = e[5];
  var aza:int = zya ^ yya;
  e[5] = aza;
  var bza:int = e[2];
  var cza:int = e[4];
  var dza:int = 24;
  var eza:int = cza >> dza;
  var fza:int = 2;
  var gza:int = eza << fza;
  var hza:int_ptr = bza + gza;
  var iza:int = hza[0];
  var jza:int = e[2];
  var kza:int = e[4];
  var lza:int = 16;
  var mza:int = kza >> lza;
  var nza:int = 255;
  var oza:int = mza & nza;
  var pza:int = 256;
  var qza:int = oza + pza;
  var rza:int = 2;
  var sza:int = qza << rza;
  var tza:int_ptr = jza + sza;
  var uza:int = tza[0];
  var vza:int = iza + uza;
  var wza:int = e[2];
  var xza:int = e[4];
  var yza:int = 8;
  var zza:int = xza >> yza;
  var aab:int = 255;
  var bab:int = zza & aab;
  var cab:int = 512;
  var dab:int = bab + cab;
  var eab:int = 2;
  var fab:int = dab << eab;
  var gab:int_ptr = wza + fab;
  var hab:int = gab[0];
  var iab:int = vza ^ hab;
  var jab:int = e[2];
  var kab:int = e[4];
  var lab:int = 255;
  var mab:int = kab & lab;
  var nab:int = 768;
  var oab:int = mab + nab;
  var pab:int = 2;
  var qab:int = oab << pab;
  var rab:int_ptr = jab + qab;
  var sab:int = rab[0];
  var tab:int = iab + sab;
  var uab:int = -1;
  var vab:int = tab & uab;
  var wab:int = e[5];
  var xab:int = wab ^ vab;
  e[5] = xab;
  var yab:int_ptr = e[3];
  var zab:int = yab[6];
  var abb:int = e[4];
  var bbb:int = abb ^ zab;
  e[4] = bbb;
  var cbb:int = e[2];
  var dbb:int = e[5];
  var ebb:int = 24;
  var fbb:int = dbb >> ebb;
  var gbb:int = 2;
  var hbb:int = fbb << gbb;
  var ibb:int_ptr = cbb + hbb;
  var jbb:int = ibb[0];
  var kbb:int = e[2];
  var lbb:int = e[5];
  var mbb:int = 16;
  var nbb:int = lbb >> mbb;
  var obb:int = 255;
  var pbb:int = nbb & obb;
  var qbb:int = 256;
  var rbb:int = pbb + qbb;
  var sbb:int = 2;
  var tbb:int = rbb << sbb;
  var ubb:int_ptr = kbb + tbb;
  var vbb:int = ubb[0];
  var wbb:int = jbb + vbb;
  var xbb:int = e[2];
  var ybb:int = e[5];
  var zbb:int = 8;
  var acb:int = ybb >> zbb;
  var bcb:int = 255;
  var ccb:int = acb & bcb;
  var dcb:int = 512;
  var ecb:int = ccb + dcb;
  var fcb:int = 2;
  var gcb:int = ecb << fcb;
  var hcb:int_ptr = xbb + gcb;
  var icb:int = hcb[0];
  var jcb:int = wbb ^ icb;
  var kcb:int = e[2];
  var lcb:int = e[5];
  var mcb:int = 255;
  var ncb:int = lcb & mcb;
  var ocb:int = 768;
  var pcb:int = ncb + ocb;
  var qcb:int = 2;
  var rcb:int = pcb << qcb;
  var scb:int_ptr = kcb + rcb;
  var tcb:int = scb[0];
  var ucb:int = jcb + tcb;
  var vcb:int = -1;
  var wcb:int = ucb & vcb;
  var xcb:int = e[4];
  var ycb:int = xcb ^ wcb;
  e[4] = ycb;
  var zcb:int_ptr = e[3];
  var adb:int = zcb[5];
  var bdb:int = e[5];
  var cdb:int = bdb ^ adb;
  e[5] = cdb;
  var ddb:int = e[2];
  var edb:int = e[4];
  var fdb:int = 24;
  var gdb:int = edb >> fdb;
  var hdb:int = 2;
  var idb:int = gdb << hdb;
  var jdb:int_ptr = ddb + idb;
  var kdb:int = jdb[0];
  var ldb:int = e[2];
  var mdb:int = e[4];
  var ndb:int = 16;
  var odb:int = mdb >> ndb;
  var pdb:int = 255;
  var qdb:int = odb & pdb;
  var rdb:int = 256;
  var sdb:int = qdb + rdb;
  var tdb:int = 2;
  var udb:int = sdb << tdb;
  var vdb:int_ptr = ldb + udb;
  var wdb:int = vdb[0];
  var xdb:int = kdb + wdb;
  var ydb:int = e[2];
  var zdb:int = e[4];
  var aeb:int = 8;
  var beb:int = zdb >> aeb;
  var ceb:int = 255;
  var deb:int = beb & ceb;
  var eeb:int = 512;
  var feb:int = deb + eeb;
  var geb:int = 2;
  var heb:int = feb << geb;
  var ieb:int_ptr = ydb + heb;
  var jeb:int = ieb[0];
  var keb:int = xdb ^ jeb;
  var leb:int = e[2];
  var meb:int = e[4];
  var neb:int = 255;
  var oeb:int = meb & neb;
  var peb:int = 768;
  var qeb:int = oeb + peb;
  var reb:int = 2;
  var seb:int = qeb << reb;
  var teb:int_ptr = leb + seb;
  var ueb:int = teb[0];
  var veb:int = keb + ueb;
  var web:int = -1;
  var xeb:int = veb & web;
  var yeb:int = e[5];
  var zeb:int = yeb ^ xeb;
  e[5] = zeb;
  var afb:int_ptr = e[3];
  var bfb:int = afb[4];
  var cfb:int = e[4];
  var dfb:int = cfb ^ bfb;
  e[4] = dfb;
  var efb:int = e[2];
  var ffb:int = e[5];
  var gfb:int = 24;
  var hfb:int = ffb >> gfb;
  var ifb:int = 2;
  var jfb:int = hfb << ifb;
  var kfb:int_ptr = efb + jfb;
  var lfb:int = kfb[0];
  var mfb:int = e[2];
  var nfb:int = e[5];
  var ofb:int = 16;
  var pfb:int = nfb >> ofb;
  var qfb:int = 255;
  var rfb:int = pfb & qfb;
  var sfb:int = 256;
  var tfb:int = rfb + sfb;
  var ufb:int = 2;
  var vfb:int = tfb << ufb;
  var wfb:int_ptr = mfb + vfb;
  var xfb:int = wfb[0];
  var yfb:int = lfb + xfb;
  var zfb:int = e[2];
  var agb:int = e[5];
  var bgb:int = 8;
  var cgb:int = agb >> bgb;
  var dgb:int = 255;
  var egb:int = cgb & dgb;
  var fgb:int = 512;
  var ggb:int = egb + fgb;
  var hgb:int = 2;
  var igb:int = ggb << hgb;
  var jgb:int_ptr = zfb + igb;
  var kgb:int = jgb[0];
  var lgb:int = yfb ^ kgb;
  var mgb:int = e[2];
  var ngb:int = e[5];
  var ogb:int = 255;
  var pgb:int = ngb & ogb;
  var qgb:int = 768;
  var rgb:int = pgb + qgb;
  var sgb:int = 2;
  var tgb:int = rgb << sgb;
  var ugb:int_ptr = mgb + tgb;
  var vgb:int = ugb[0];
  var wgb:int = lgb + vgb;
  var xgb:int = -1;
  var ygb:int = wgb & xgb;
  var zgb:int = e[4];
  var ahb:int = zgb ^ ygb;
  e[4] = ahb;
  var bhb:int_ptr = e[3];
  var chb:int = bhb[3];
  var dhb:int = e[5];
  var ehb:int = dhb ^ chb;
  e[5] = ehb;
  var fhb:int = e[2];
  var ghb:int = e[4];
  var hhb:int = 24;
  var ihb:int = ghb >> hhb;
  var jhb:int = 2;
  var khb:int = ihb << jhb;
  var lhb:int_ptr = fhb + khb;
  var mhb:int = lhb[0];
  var nhb:int = e[2];
  var ohb:int = e[4];
  var phb:int = 16;
  var qhb:int = ohb >> phb;
  var rhb:int = 255;
  var shb:int = qhb & rhb;
  var thb:int = 256;
  var uhb:int = shb + thb;
  var vhb:int = 2;
  var whb:int = uhb << vhb;
  var xhb:int_ptr = nhb + whb;
  var yhb:int = xhb[0];
  var zhb:int = mhb + yhb;
  var aib:int = e[2];
  var bib:int = e[4];
  var cib:int = 8;
  var dib:int = bib >> cib;
  var eib:int = 255;
  var fib:int = dib & eib;
  var gib:int = 512;
  var hib:int = fib + gib;
  var iib:int = 2;
  var jib:int = hib << iib;
  var kib:int_ptr = aib + jib;
  var lib:int = kib[0];
  var mib:int = zhb ^ lib;
  var nib:int = e[2];
  var oib:int = e[4];
  var pib:int = 255;
  var qib:int = oib & pib;
  var rib:int = 768;
  var sib:int = qib + rib;
  var tib:int = 2;
  var uib:int = sib << tib;
  var vib:int_ptr = nib + uib;
  var wib:int = vib[0];
  var xib:int = mib + wib;
  var yib:int = -1;
  var zib:int = xib & yib;
  var ajb:int = e[5];
  var bjb:int = ajb ^ zib;
  e[5] = bjb;
  var cjb:int_ptr = e[3];
  var djb:int = cjb[2];
  var ejb:int = e[4];
  var fjb:int = ejb ^ djb;
  e[4] = fjb;
  var gjb:int = e[2];
  var hjb:int = e[5];
  var ijb:int = 24;
  var jjb:int = hjb >> ijb;
  var kjb:int = 2;
  var ljb:int = jjb << kjb;
  var mjb:int_ptr = gjb + ljb;
  var njb:int = mjb[0];
  var ojb:int = e[2];
  var pjb:int = e[5];
  var qjb:int = 16;
  var rjb:int = pjb >> qjb;
  var sjb:int = 255;
  var tjb:int = rjb & sjb;
  var ujb:int = 256;
  var vjb:int = tjb + ujb;
  var wjb:int = 2;
  var xjb:int = vjb << wjb;
  var yjb:int_ptr = ojb + xjb;
  var zjb:int = yjb[0];
  var akb:int = njb + zjb;
  var bkb:int = e[2];
  var ckb:int = e[5];
  var dkb:int = 8;
  var ekb:int = ckb >> dkb;
  var fkb:int = 255;
  var gkb:int = ekb & fkb;
  var hkb:int = 512;
  var ikb:int = gkb + hkb;
  var jkb:int = 2;
  var kkb:int = ikb << jkb;
  var lkb:int_ptr = bkb + kkb;
  var mkb:int = lkb[0];
  var nkb:int = akb ^ mkb;
  var okb:int = e[2];
  var pkb:int = e[5];
  var qkb:int = 255;
  var rkb:int = pkb & qkb;
  var skb:int = 768;
  var tkb:int = rkb + skb;
  var ukb:int = 2;
  var vkb:int = tkb << ukb;
  var wkb:int_ptr = okb + vkb;
  var xkb:int = wkb[0];
  var ykb:int = nkb + xkb;
  var zkb:int = -1;
  var alb:int = ykb & zkb;
  var blb:int = e[4];
  var clb:int = blb ^ alb;
  e[4] = clb;
  var dlb:int_ptr = e[3];
  var elb:int = dlb[1];
  var flb:int = e[5];
  var glb:int = flb ^ elb;
  e[5] = glb;
  var hlb:int = e[2];
  var ilb:int = e[4];
  var jlb:int = 24;
  var klb:int = ilb >> jlb;
  var llb:int = 2;
  var mlb:int = klb << llb;
  var nlb:int_ptr = hlb + mlb;
  var olb:int = nlb[0];
  var plb:int = e[2];
  var qlb:int = e[4];
  var rlb:int = 16;
  var slb:int = qlb >> rlb;
  var tlb:int = 255;
  var ulb:int = slb & tlb;
  var vlb:int = 256;
  var wlb:int = ulb + vlb;
  var xlb:int = 2;
  var ylb:int = wlb << xlb;
  var zlb:int_ptr = plb + ylb;
  var amb:int = zlb[0];
  var bmb:int = olb + amb;
  var cmb:int = e[2];
  var dmb:int = e[4];
  var emb:int = 8;
  var fmb:int = dmb >> emb;
  var gmb:int = 255;
  var hmb:int = fmb & gmb;
  var imb:int = 512;
  var jmb:int = hmb + imb;
  var kmb:int = 2;
  var lmb:int = jmb << kmb;
  var mmb:int_ptr = cmb + lmb;
  var nmb:int = mmb[0];
  var omb:int = bmb ^ nmb;
  var pmb:int = e[2];
  var qmb:int = e[4];
  var rmb:int = 255;
  var smb:int = qmb & rmb;
  var tmb:int = 768;
  var umb:int = smb + tmb;
  var vmb:int = 2;
  var wmb:int = umb << vmb;
  var xmb:int_ptr = pmb + wmb;
  var ymb:int = xmb[0];
  var zmb:int = omb + ymb;
  var anb:int = -1;
  var bnb:int = zmb & anb;
  var cnb:int = e[5];
  var dnb:int = cnb ^ bnb;
  e[5] = dnb;
  var enb:int_ptr = e[3];
  var fnb:int = enb[0];
  var gnb:int = e[4];
  var hnb:int = gnb ^ fnb;
  e[4] = hnb;
  label B_a:
  var inb:int = e[5];
  var jnb:int = -1;
  var knb:int = inb & jnb;
  var lnb:int_ptr = e[7];
  lnb[1] = knb;
  var mnb:int = e[4];
  var nnb:int = -1;
  var onb:int = mnb & nnb;
  var pnb:int_ptr = e[7];
  pnb[0] = onb;
}

export function BF_cfb64_encrypt(a:int, b:int, c:int, d:int, e:int, f:int) {
  var g:int = stack_pointer;
  var h:int = 64;
  var i:int = g - h;
  stack_pointer = i;
  i[15]:int = a;
  i[14]:int = b;
  i[13]:int = c;
  i[12]:int = d;
  i[11]:int = e;
  i[10]:int = f;
  var j:int_ptr = i[11]:int;
  var k:int = j[0];
  i[6]:int = k;
  var l:int = i[13]:int;
  i[5]:int = l;
  var m:int = i[12]:int;
  i[2]:int = m;
  var n:int = i[10]:int;
  if (eqz(n)) goto B_b;
  loop L_d {
    var o:int = i[5]:int;
    var p:int = -1;
    var q:int = o + p;
    i[5]:int = q;
    if (eqz(o)) goto B_c;
    var r:int = i[6]:int;
    if (r) goto B_e;
    var s:ubyte_ptr = i[2]:int;
    var t:int = 1;
    var u:int = s + t;
    i[2]:int = u;
    var v:int = s[0];
    var w:int = 255;
    var x:int = v & w;
    var y:int = 24;
    var z:int = x << y;
    i[9]:int = z;
    var aa:ubyte_ptr = i[2]:int;
    var ba:int = 1;
    var ca:int = aa + ba;
    i[2]:int = ca;
    var da:int = aa[0];
    var ea:int = 255;
    var fa:int = da & ea;
    var ga:int = 16;
    var ha:int = fa << ga;
    var ia:int = i[9]:int;
    var ja:int = ia | ha;
    i[9]:int = ja;
    var ka:ubyte_ptr = i[2]:int;
    var la:int = 1;
    var ma:int = ka + la;
    i[2]:int = ma;
    var na:int = ka[0];
    var oa:int = 255;
    var pa:int = na & oa;
    var qa:int = 8;
    var ra:int = pa << qa;
    var sa:int = i[9]:int;
    var ta:int = sa | ra;
    i[9]:int = ta;
    var ua:ubyte_ptr = i[2]:int;
    var va:int = 1;
    var wa:int = ua + va;
    i[2]:int = wa;
    var xa:int = ua[0];
    var ya:int = 255;
    var za:int = xa & ya;
    var ab:int = i[9]:int;
    var bb:int = ab | za;
    i[9]:int = bb;
    var cb:int = i[9]:int;
    i[3]:int = cb;
    var db:ubyte_ptr = i[2]:int;
    var eb:int = 1;
    var fb:int = db + eb;
    i[2]:int = fb;
    var gb:int = db[0];
    var hb:int = 255;
    var ib:int = gb & hb;
    var jb:int = 24;
    var kb:int = ib << jb;
    i[8]:int = kb;
    var lb:ubyte_ptr = i[2]:int;
    var mb:int = 1;
    var nb:int = lb + mb;
    i[2]:int = nb;
    var ob:int = lb[0];
    var pb:int = 255;
    var qb:int = ob & pb;
    var rb:int = 16;
    var sb:int = qb << rb;
    var tb:int = i[8]:int;
    var ub:int = tb | sb;
    i[8]:int = ub;
    var vb:ubyte_ptr = i[2]:int;
    var wb:int = 1;
    var xb:int = vb + wb;
    i[2]:int = xb;
    var yb:int = vb[0];
    var zb:int = 255;
    var ac:int = yb & zb;
    var bc:int = 8;
    var cc:int = ac << bc;
    var dc:int = i[8]:int;
    var ec:int = dc | cc;
    i[8]:int = ec;
    var fc:ubyte_ptr = i[2]:int;
    var gc:int = 1;
    var hc:int = fc + gc;
    i[2]:int = hc;
    var ic:int = fc[0];
    var jc:int = 255;
    var kc:int = ic & jc;
    var lc:int = i[8]:int;
    var mc:int = lc | kc;
    i[8]:int = mc;
    var nc:int = i[8]:int;
    i[4]:int = nc;
    var oc:int = 12;
    var pc:int = i + oc;
    var qc:int = pc;
    var rc:int = 1;
    BF_encrypt(qc, rc);
    var sc:int = i[12]:int;
    i[2]:int = sc;
    var tc:int = i[3]:int;
    i[7]:int = tc;
    var uc:int = i[7]:int;
    var vc:int = 24;
    var wc:int = uc >> vc;
    var xc:int = 255;
    var yc:int = wc & xc;
    var zc:byte_ptr = i[2]:int;
    var ad:int = 1;
    var bd:int = zc + ad;
    i[2]:int = bd;
    zc[0] = yc;
    var cd:int = i[7]:int;
    var dd:int = 16;
    var ed:int = cd >> dd;
    var fd:int = 255;
    var gd:int = ed & fd;
    var hd:byte_ptr = i[2]:int;
    var id:int = 1;
    var jd:int = hd + id;
    i[2]:int = jd;
    hd[0] = gd;
    var kd:int = i[7]:int;
    var ld:int = 8;
    var md:int = kd >> ld;
    var nd:int = 255;
    var od:int = md & nd;
    var pd:byte_ptr = i[2]:int;
    var qd:int = 1;
    var rd:int = pd + qd;
    i[2]:int = rd;
    pd[0] = od;
    var sd:int = i[7]:int;
    var td:int = 255;
    var ud:int = sd & td;
    var vd:byte_ptr = i[2]:int;
    var wd:int = 1;
    var xd:int = vd + wd;
    i[2]:int = xd;
    vd[0] = ud;
    var yd:int = i[4]:int;
    i[7]:int = yd;
    var zd:int = i[7]:int;
    var ae:int = 24;
    var be:int = zd >> ae;
    var ce:int = 255;
    var de:int = be & ce;
    var ee:byte_ptr = i[2]:int;
    var fe:int = 1;
    var ge:int = ee + fe;
    i[2]:int = ge;
    ee[0] = de;
    var he:int = i[7]:int;
    var ie:int = 16;
    var je:int = he >> ie;
    var ke:int = 255;
    var le:int = je & ke;
    var me:byte_ptr = i[2]:int;
    var ne:int = 1;
    var oe:int = me + ne;
    i[2]:int = oe;
    me[0] = le;
    var pe:int = i[7]:int;
    var qe:int = 8;
    var re:int = pe >> qe;
    var se:int = 255;
    var te:int = re & se;
    var ue:byte_ptr = i[2]:int;
    var ve:int = 1;
    var we:int = ue + ve;
    i[2]:int = we;
    ue[0] = te;
    var xe:int = i[7]:int;
    var ye:int = 255;
    var ze:int = xe & ye;
    var af:byte_ptr = i[2]:int;
    var bf:int = 1;
    var cf:int = af + bf;
    i[2]:int = cf;
    af[0] = ze;
    var df:int = i[12]:int;
    i[2]:int = df;
    label B_e:
    var ef:ubyte_ptr = i[15]:int;
    var ff:int = 1;
    var gf:int = ef + ff;
    i[15]:int = gf;
    var hf:int = ef[0];
    var if:int = 255;
    var jf:int = hf & if;
    var kf:int = i[2]:int;
    var lf:int = i[6]:int;
    var mf:ubyte_ptr = kf + lf;
    var nf:int = mf[0];
    var of:int = 255;
    var pf:int = nf & of;
    var qf:int = jf ^ pf;
    i[7]:byte = qf;
    var rf:int = i[7]:ubyte;
    var sf:byte_ptr = i[14]:int;
    var tf:int = 1;
    var uf:int = sf + tf;
    i[14]:int = uf;
    sf[0] = rf;
    var vf:int = i[7]:ubyte;
    var wf:int = i[2]:int;
    var xf:int = i[6]:int;
    var yf:byte_ptr = wf + xf;
    yf[0] = vf;
    var zf:int = i[6]:int;
    var ag:int = 1;
    var bg:int = zf + ag;
    var cg:int = 7;
    var dg:int = bg & cg;
    i[6]:int = dg;
    continue L_d;
  }
  unreachable;
  label B_c:
  goto B_a;
  label B_b:
  loop L_g {
    var eg:int = i[5]:int;
    var fg:int = -1;
    var gg:int = eg + fg;
    i[5]:int = gg;
    if (eqz(eg)) goto B_f;
    var hg:int = i[6]:int;
    if (hg) goto B_h;
    var ig:ubyte_ptr = i[2]:int;
    var jg:int = 1;
    var kg:int = ig + jg;
    i[2]:int = kg;
    var lg:int = ig[0];
    var mg:int = 255;
    var ng:int = lg & mg;
    var og:int = 24;
    var pg:int = ng << og;
    i[9]:int = pg;
    var qg:ubyte_ptr = i[2]:int;
    var rg:int = 1;
    var sg:int = qg + rg;
    i[2]:int = sg;
    var tg:int = qg[0];
    var ug:int = 255;
    var vg:int = tg & ug;
    var wg:int = 16;
    var xg:int = vg << wg;
    var yg:int = i[9]:int;
    var zg:int = yg | xg;
    i[9]:int = zg;
    var ah:ubyte_ptr = i[2]:int;
    var bh:int = 1;
    var ch:int = ah + bh;
    i[2]:int = ch;
    var dh:int = ah[0];
    var eh:int = 255;
    var fh:int = dh & eh;
    var gh:int = 8;
    var hh:int = fh << gh;
    var ih:int = i[9]:int;
    var jh:int = ih | hh;
    i[9]:int = jh;
    var kh:ubyte_ptr = i[2]:int;
    var lh:int = 1;
    var mh:int = kh + lh;
    i[2]:int = mh;
    var nh:int = kh[0];
    var oh:int = 255;
    var ph:int = nh & oh;
    var qh:int = i[9]:int;
    var rh:int = qh | ph;
    i[9]:int = rh;
    var sh:int = i[9]:int;
    i[3]:int = sh;
    var th:ubyte_ptr = i[2]:int;
    var uh:int = 1;
    var vh:int = th + uh;
    i[2]:int = vh;
    var wh:int = th[0];
    var xh:int = 255;
    var yh:int = wh & xh;
    var zh:int = 24;
    var ai:int = yh << zh;
    i[8]:int = ai;
    var bi:ubyte_ptr = i[2]:int;
    var ci:int = 1;
    var di:int = bi + ci;
    i[2]:int = di;
    var ei:int = bi[0];
    var fi:int = 255;
    var gi:int = ei & fi;
    var hi:int = 16;
    var ii:int = gi << hi;
    var ji:int = i[8]:int;
    var ki:int = ji | ii;
    i[8]:int = ki;
    var li:ubyte_ptr = i[2]:int;
    var mi:int = 1;
    var ni:int = li + mi;
    i[2]:int = ni;
    var oi:int = li[0];
    var pi:int = 255;
    var qi:int = oi & pi;
    var ri:int = 8;
    var si:int = qi << ri;
    var ti:int = i[8]:int;
    var ui:int = ti | si;
    i[8]:int = ui;
    var vi:ubyte_ptr = i[2]:int;
    var wi:int = 1;
    var xi:int = vi + wi;
    i[2]:int = xi;
    var yi:int = vi[0];
    var zi:int = 255;
    var aj:int = yi & zi;
    var bj:int = i[8]:int;
    var cj:int = bj | aj;
    i[8]:int = cj;
    var dj:int = i[8]:int;
    i[4]:int = dj;
    var ej:int = 12;
    var fj:int = i + ej;
    var gj:int = fj;
    var hj:int = 1;
    BF_encrypt(gj, hj);
    var ij:int = i[12]:int;
    i[2]:int = ij;
    var jj:int = i[3]:int;
    i[7]:int = jj;
    var kj:int = i[7]:int;
    var lj:int = 24;
    var mj:int = kj >> lj;
    var nj:int = 255;
    var oj:int = mj & nj;
    var pj:byte_ptr = i[2]:int;
    var qj:int = 1;
    var rj:int = pj + qj;
    i[2]:int = rj;
    pj[0] = oj;
    var sj:int = i[7]:int;
    var tj:int = 16;
    var uj:int = sj >> tj;
    var vj:int = 255;
    var wj:int = uj & vj;
    var xj:byte_ptr = i[2]:int;
    var yj:int = 1;
    var zj:int = xj + yj;
    i[2]:int = zj;
    xj[0] = wj;
    var ak:int = i[7]:int;
    var bk:int = 8;
    var ck:int = ak >> bk;
    var dk:int = 255;
    var ek:int = ck & dk;
    var fk:byte_ptr = i[2]:int;
    var gk:int = 1;
    var hk:int = fk + gk;
    i[2]:int = hk;
    fk[0] = ek;
    var ik:int = i[7]:int;
    var jk:int = 255;
    var kk:int = ik & jk;
    var lk:byte_ptr = i[2]:int;
    var mk:int = 1;
    var nk:int = lk + mk;
    i[2]:int = nk;
    lk[0] = kk;
    var ok:int = i[4]:int;
    i[7]:int = ok;
    var pk:int = i[7]:int;
    var qk:int = 24;
    var rk:int = pk >> qk;
    var sk:int = 255;
    var tk:int = rk & sk;
    var uk:byte_ptr = i[2]:int;
    var vk:int = 1;
    var wk:int = uk + vk;
    i[2]:int = wk;
    uk[0] = tk;
    var xk:int = i[7]:int;
    var yk:int = 16;
    var zk:int = xk >> yk;
    var al:int = 255;
    var bl:int = zk & al;
    var cl:byte_ptr = i[2]:int;
    var dl:int = 1;
    var el:int = cl + dl;
    i[2]:int = el;
    cl[0] = bl;
    var fl:int = i[7]:int;
    var gl:int = 8;
    var hl:int = fl >> gl;
    var il:int = 255;
    var jl:int = hl & il;
    var kl:byte_ptr = i[2]:int;
    var ll:int = 1;
    var ml:int = kl + ll;
    i[2]:int = ml;
    kl[0] = jl;
    var nl:int = i[7]:int;
    var ol:int = 255;
    var pl:int = nl & ol;
    var ql:byte_ptr = i[2]:int;
    var rl:int = 1;
    var sl:int = ql + rl;
    i[2]:int = sl;
    ql[0] = pl;
    var tl:int = i[12]:int;
    i[2]:int = tl;
    label B_h:
    var ul:ubyte_ptr = i[15]:int;
    var vl:int = 1;
    var wl:int = ul + vl;
    i[15]:int = wl;
    var xl:int = ul[0];
    i[6]:byte = xl;
    var yl:int = i[2]:int;
    var zl:int = i[6]:int;
    var am:ubyte_ptr = yl + zl;
    var bm:int = am[0];
    i[7]:byte = bm;
    var cm:int = i[6]:ubyte;
    var dm:int = i[2]:int;
    var em:int = i[6]:int;
    var fm:byte_ptr = dm + em;
    fm[0] = cm;
    var gm:int = i[7]:ubyte;
    var hm:int = 255;
    var im:int = gm & hm;
    var jm:int = i[6]:ubyte;
    var km:int = 255;
    var lm:int = jm & km;
    var mm:int = im ^ lm;
    var nm:byte_ptr = i[14]:int;
    var om:int = 1;
    var pm:int = nm + om;
    i[14]:int = pm;
    nm[0] = mm;
    var qm:int = i[6]:int;
    var rm:int = 1;
    var sm:int = qm + rm;
    var tm:int = 7;
    var um:int = sm & tm;
    i[6]:int = um;
    continue L_g;
  }
  unreachable;
  label B_f:
  label B_a:
  var vm:int = 0;
  i[6]:byte = vm;
  var wm:int = 0;
  i[7]:byte = wm;
  var xm:int = 0;
  i[7]:int = xm;
  var ym:int = 0;
  i[4]:int = ym;
  var zm:int = 0;
  i[3]:int = zm;
  var an:int = 0;
  i[8]:int = an;
  var bn:int = 0;
  i[9]:int = bn;
  var cn:int = i[6]:int;
  var dn:int_ptr = i[11]:int;
  dn[0] = cn;
  var en:int = 64;
  var fn:int = i + en;
  stack_pointer = fn;
}

export function blowfish_main():int {
  var a:int = stack_pointer;
  var b:int = 144;
  var c:int_ptr = a - b;
  stack_pointer = c;
  var d:int = 0;
  c[9] = d;
  var e:int = 0;
  c[6] = e;
  var f:int = 0;
  c[5] = f;
  var g:int = 1;
  c[4] = g;
  var h:int = 0;
  c[3] = h;
  var i:int = 0;
  c[8] = i;
  loop L_b {
    var j:int = c[8];
    var k:int = 8;
    var l:int = j;
    var m:int = k;
    var n:int = l < m;
    var o:int = 1;
    var p:int = n & o;
    if (eqz(p)) goto B_a;
    var q:int = c[8];
    var r:int = 136;
    var s:int = c + r;
    var t:int = s;
    var u:byte_ptr = t + q;
    var v:int = 0;
    u[0] = v;
    var w:int = c[8];
    var x:int = 40;
    var y:int = c + x;
    var z:int = y;
    var aa:byte_ptr = z + w;
    var ba:int = 0;
    aa[0] = ba;
    var ca:int = c[8];
    var da:int = 1;
    var ea:int = ca + da;
    c[8] = ea;
    continue L_b;
  }
  unreachable;
  label B_a:
  var fa:int = 136;
  var ga:int = c + fa;
  var ha:int = ga;
  var ia:int = 8;
  BF_set_key(ia, ha);
  var ja:int = 0;
  c[8] = ja;
  loop L_d {
    var ka:int = c[6];
    var la:int = 5200;
    var ma:int = ka;
    var na:int = la;
    var oa:int = ma < na;
    var pa:int = 1;
    var qa:int = oa & pa;
    if (eqz(qa)) goto B_c;
    loop L_e {
      var ra:int = c[6];
      var sa:int = 5200;
      var ta:int = ra;
      var ua:int = sa;
      var va:int = ta < ua;
      var wa:int = 0;
      var xa:int = 1;
      var ya:int = va & xa;
      var za:int = wa;
      if (eqz(ya)) goto B_f;
      var ab:int = c[8];
      var bb:int = 40;
      var cb:int = ab;
      var db:int = bb;
      var eb:int = cb < db;
      za = eb;
      label B_f:
      var fb:int = za;
      var gb:int = 1;
      var hb:int = fb & gb;
      if (eqz(hb)) goto B_g;
      var ib:int = c[6];
      var jb:int = 1;
      var kb:int = ib + jb;
      c[6] = kb;
      var lb:int = in_key;
      var mb:ubyte_ptr = lb + ib;
      var nb:int = mb[0];
      var ob:int = c[8];
      var pb:int = 1;
      var qb:int = ob + pb;
      c[8] = qb;
      var rb:int = 96;
      var sb:int = c + rb;
      var tb:int = sb;
      var ub:byte_ptr = tb + ob;
      ub[0] = nb;
      continue L_e;
      label B_g:
    }
    var vb:int = 96;
    var wb:int = c + vb;
    var xb:int = wb;
    var yb:int = 48;
    var zb:int = c + yb;
    var ac:int = zb;
    var bc:int = c[8];
    var cc:int = 40;
    var dc:int = c + cc;
    var ec:int = dc;
    var fc:int = c[4];
    var gc:int = 36;
    var hc:int = c + gc;
    var ic:int = hc;
    BF_cfb64_encrypt(xb, ac, bc, ec, ic, fc);
    var jc:int = 0;
    c[7] = jc;
    loop L_i {
      var kc:int = c[7];
      var lc:int = c[8];
      var mc:int = kc;
      var nc:int = lc;
      var oc:int = mc < nc;
      var pc:int = 1;
      var qc:int = oc & pc;
      if (eqz(qc)) goto B_h;
      var rc:int = c[7];
      var sc:int = 48;
      var tc:int = c + sc;
      var uc:ubyte_ptr = tc + rc;
      var vc:int = uc[0];
      var wc:int = c[5];
      var xc:int = 1;
      var yc:int = wc + xc;
      c[5] = yc;
      var zc:int = out_key;
      var ad:ubyte_ptr = zc + wc;
      var bd:int = ad[0];
      var cd:int = 255;
      var dd:int = bd & cd;
      var ed:int = vc;
      var fd:int = dd;
      var gd:int = ed != fd;
      var hd:int = 1;
      var id:int = gd & hd;
      var jd:int = c[3];
      var kd:int = jd + id;
      c[3] = kd;
      var ld:int = c[7];
      var md:int = 1;
      var nd:int = ld + md;
      c[7] = nd;
      continue L_i;
    }
    unreachable;
    label B_h:
    var od:int = 0;
    c[8] = od;
    continue L_d;
  }
  unreachable;
  label B_c:
  var pd:int = c[3];
  var qd:int = 144;
  var rd:int = c + qd;
  stack_pointer = rd;
  return pd;
}

export function submain():int {
  var a:int = stack_pointer;
  var b:int = 16;
  var c:int = a - b;
  stack_pointer = c;
  var d:int = 0;
  c[3]:int = d;
  var e:double = rtclock();
  var f:double_ptr = startTimer;
  f[0] = e;
  var g:int = blowfish_main();
  c[3]:int = g;
  var h:double = rtclock();
  var i:double_ptr = endTimer;
  i[0] = h;
  var j:double = i[0];
  var k:double = f[0];
  var l:double = j - k;
  c[0]:double = l;
  var m:int = 14611;
  var n:int = memory_base;
  var o:int = n + m;
  printf(o, c);
  var p:int = c[3]:int;
  var q:int = 16;
  var r:int = c + q;
  stack_pointer = r;
  return p;
}

function rtclock():double {
  var a:int = stack_pointer;
  var b:int = 32;
  var c:int = a - b;
  stack_pointer = c;
  var d:int = 16;
  var e:int = c + d;
  var f:int = e;
  var g:int = 0;
  var h:int = gettimeofday(f, g);
  c[3]:int = h;
  var i:int = c[3]:int;
  if (eqz(i)) goto B_a;
  var j:int = c[3]:int;
  c[0]:int = j;
  var k:int = 14576;
  var l:int = memory_base;
  var m:int = l + k;
  printf(m, c);
  label B_a:
  var n:long = c[2]:long;
  var o:double = f64_convert_i64_s(n);
  var p:int = c[6]:int;
  var q:double = f64_convert_i32_s(p);
  var r:double = 0.000001;
  var s:double = q * r;
  var t:double = s + o;
  var u:int = 32;
  var v:int = c + u;
  stack_pointer = v;
  return t;
}

