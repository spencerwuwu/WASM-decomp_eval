import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
export import global sha_info_data:int;
export import global sha_info_digest:int;
export import global sha_info_count_lo:int;
export import global sha_info_count_hi:int;
export import global indata:int;
export import global startTimer:int;
export import global endTimer:int;
global sha_info_data_1:int = 16464;
global sha_info_digest_1:int = 16528;
global sha_info_count_lo_1:int = 16548;
global sha_info_count_hi_1:int = 16552;
global indata_1:int = 0;
global startTimer_1:int = 16560;
global endTimer_1:int = 16568;
export global in_i:int = 16384;
export global outData:int = 16400;

data data(offset: memory_base) =
  "KurtVonnegutsCommencementAddressatMITLadiesandgentlemenoftheclassof97W"
  "earsunscreenIfIcouldofferyouonlyonetipforthefuturesunscreenwouldbeitTh"
  "elongtermbenefitsofsunscreenhavebeenprovedbyscientistswhereastherestof"
  "myadvicehasnobasismorereliablethanmyownmeanderingexperienceIwilldispen"
  "sethisadvicenowEnjoythepowerandbeautyofyouryouthOhnevermindYouwillnotu"
  "nderstandthepowerandbeautyofyouryouthuntiltheyvefadedButtrustmein20yea"
  "rsyoulllookbackatphotosofyourselfandrecallinawayyoucantgraspnowhowmuch"
  "possibilitylaybeforeyouandhowfabulousyoureallylookedYouarenotasfatasyo"
  "uimagineDontworryaboutthefutureOrworrybutknowthatKurtVonneguKurtVonneg"
  "utsCommencementAddressatMITLadiesandgentlemenoftheclassof97Wearsunscre"
  "enIfIcouldofferyouonlyonetipforthefuturesunscreenwouldbeitThelongtermb"
  "enefitsofsunscreenhavebeenprovedbyscientistswhereastherestofmyadviceha"
  "snobasismorereliablethanmyownmeanderingexperienceIwilldispensethisadvi"
  "cenowEnjoythepowerandbeautyofyouryouthOhnevermindYouwillnotunderstandt"
  "hepowerandbeautyofyouryouthuntiltheyvefadedButtrustmein20yearsyoullloo"
  "kbackatphotosofyourselfandrecallinawayyoucantgraspnowhowmuchpossibilit"
  "ylaybeforeyouandhowfabulousyoureallylookedYouarenotasfatasyouimagineDo"
  "ntworryaboutthefutureOrworrybutknowthatKurtVonnegutsCommencementAddres"
  "satMITLadiesandgentlemenoftheclassof97WearsunscreenIfIcouldofferyouonl"
  "yonetipforthefuturesunscreenwouldbeitThelongtermbenefitsofsunscreenhav"
  "ebeenprovedbyscientistswhereastherestofmyadvicehasnobasismorereliablet"
  "hanmyownmeanderingexperienceIwilldispensethisadvicenowEnjoythepowerand"
  "beautyofyouryouthOhnevermindYouwillnotunderstandthepowerandbeautyofyou"
  "ryouthuntiltheyvefadedButtrustmein20yearsyoulllookbackatphotosofyourse"
  "lfandrecallinawayyoucantgraspnowhowmuchpossibilitylaybeforeyouandhowfa"
  "bulousyoureallylookedYouarenotasfatasyouimagineDontworryaboutthefuture"
  "OrworrybutknowthatKurtVonnegutsCommencementAddressatMITLadiesandgentle"
  "menoftheclassof97WearsunscreenIfIcouldofferyouonlyonetipforthefuturesu"
  "nscreenwouldbeitThelongtermbenefitsofsunscreenhavebeenprovedbyscientis"
  "tswhereastherestofmyadvicehasnobasismorereliablethanmyownmeanderingexp"
  "erienceIwilldispensethisadvicenowEnjoythepowerandbeautyofyouryouthOhne"
  "vermindYouwillnotunderstandthepowerandbeautyofyouryouthuntiltheyvefade"
  "dButtrustmein20yearsyoulllookbackatphotosofyourselfandrecallinawayyouc"
  "antgraspnowhowmuchpossibilitylaybeforeyouandhowfabulousyoureallylooked"
  "YouarenotasfatasyouimagineDontworryaboutthefutureOrworryKurtVonnegutsC"
  "ommencementAddressatMITLadiesandgentlemenoftheclassof97WearsunscreenIf"
  "IcouldofferyouonlyonetipforthefuturesunscreenwouldbeitThelongtermbenef"
  "itsofsunscreenhavebeenprovedbyscientistswhereastherestofmyadvicehasnob"
  "asismorereliablethanmyownmeanderingexperienceIwilldispensethisadviceno"
  "wEnjoythepowerandbeautyofyouryouthOhnevermindYouwillnotunderstandthepo"
  "werandbeautyofyouryouthuntiltheyvefadedButtrustmein20yearsyoulllookbac"
  "katphotosofyourselfandrecallinawayyoucantgraspnowhowmuchpossibilitylay"
  "beforeyouandhowfabulousyoureallylookedYouarenotasfatasyouimagineDontwo"
  "rryaboutthefutureOrworrybutknowthatKurtVonneguKurtVonnegutsCommencemen"
  "tAddressatMITLadiesandgentlemenoftheclassof97WearsunscreenIfIcouldoffe"
  "ryouonlyonetipforthefuturesunscreenwouldbeitThelongtermbenefitsofsunsc"
  "reenhavebeenprovedbyscientistswhereastherestofmyadvicehasnobasismorere"
  "liablethanmyownmeanderingexperienceIwilldispensethisadvicenowEnjoythep"
  "owerandbeautyofyouryouthOhnevermindYouwillnotunderstandthepowerandbeau"
  "tyofyouryouthuntiltheyvefadedButtrustmein20yearsyoulllookbackatphotoso"
  "fyourselfandrecallinawayyoucantgraspnowhowmuchpossibilitylaybeforeyoua"
  "ndhowfabulousyoureallylookedYouarenotasfatasyouimagineDontworryaboutth"
  "efutureOrworrybutknowthatKurtVonnegutsCommencementAddressatMITLadiesan"
  "dgentlemenoftheclassof97WearsunscreenIfIcouldofferyouonlyonetipforthef"
  "uturesunscreenwouldbeitThelongtermbenefitsofsunscreenhavebeenprovedbys"
  "cientistswhereastherestofmyadvicehasnobasismorereliablethanmyownmeande"
  "ringexperienceIwilldispensethisadvicenowEnjoythepowerandbeautyofyouryo"
  "uthOhnevermindYouwillnotunderstandthepowerandbeautyofyouryouthuntilthe"
  "yvefadedButtrustmein20yearsyoulllookbackatphotosofyourselfandrecallina"
  "wayyoucantgraspnowhowmuchpossibilitylaybeforeyouandhowfabulousyoureall"
  "ylookedYouarenotasfatasyouimagineDontworryaboutthefutureOrworrybutknow"
  "thatKurtVonnegutsCommencementAddressatMITLadiesandgentlemenoftheclasso"
  "f97WearsunscreenIfIcouldofferyouonlyonetipforthefuturesunscreenwouldbe"
  "itThelongtermbenefitsofsunscreenhavebeenprovedbyscientistswhereasthere"
  "stofmyadvicehasnobasismorereliablethanmyownmeanderingexperienceIwilldi"
  "spensethisadvicenowEnjoythepowerandbeautyofyouryouthOhnevermindYouwill"
  "notunderstandthepowerandbeautyofyouryouthuntiltheyvefadedButtrustmein2"
  "0yearsyoulllookbackatphotosofyourselfandrecallinawayyoucantgraspnowhow"
  "muchpossibilitylaybeforeyouandhowfabulousyoureallylookedYouarenotasfat"
  "asyouimagineDontworryaboutthefutureOrworrybutknowthattsCommencementAdd"
  "ressatMITLadiesandgentlemenoftheclassof97WearsunscreenIfIcouldofferyou"
  "onlyonetipforthefutureKurtVonnegutsCommencementAddressatMITLadiesandge"
  "ntlemenoftheclassof97WearsunscreenIfIcouldofferyouonlyonetipforthefutu"
  "resunscreenwouldbeitThelongtermbenefitsofsunscreenhavebeenprovedbyscie"
  "ntistswhereastherestofmyadvicehasnobasismorereliablethanmyownmeanderin"
  "gexperienceIwilldispensethisadvicenowEnjoythepowerandbeautyofyouryouth"
  "OhnevermindYouwillnotunderstandthepowerandbeautyofyouryouthuntiltheyve"
  "fadedButtrustmein20yearsyoulllookbackatphotosofyourselfandrecallinaway"
  "youcantgraspnowhowmuchpossibilitylaybeforeyouandhowfabulousyoureallylo"
  "okedYouarenotasfatasyouimagineDontworryaboutthefutureOrworrybutknowtha"
  "tKurtVonnegutsCommencementAddressatMITLadiesandgentlemenoftheclassof97"
  "WearsunscreenIfIcouldofferyouonlyonetipforthefuturesunscreenwouldbeitT"
  "helongtermbenefitsofsunscreenhavebeenprovedbyscientistswhereastheresto"
  "fmyadvicehasnobasismorereliablethanmyownmeanderingexperienceIwilldispe"
  "nsethisadvicenowEnjoythepowerandbeautyofyouryouthOhnevermindYouwillnot"
  "understandthepowerandbeautyofyouryouthuntiltheyvefadedButtrustmein20ye"
  "arsyoulllookbackatphotosofyourselfandrecallinawayyoucantgraspnowhowmuc"
  "hpossibilitylaybeforeyouandhowfabulousyoureallylookedYouarenotasfatasy"
  "ouimagineDontworryaboutthefutureOrworrybutknowthatKurtVonnegutsCommenc"
  "ementAddressatMITLadiesandgentlemenoftheclassof97WearsunscreenIfIcould"
  "offeryouonlyonetipforthefuturesunscreenwouldbeitThelongtermbenefitsofs"
  "unscreenhavebeenprovedbyscientistswhereastherestofmyadvicehasnobasismo"
  "rereliablethanmyownmeanderingexperienceIwilldispensethisadvicenowEnjoy"
  "thepowerandbeautyofyouryouthOhnevermindYouwillnotunderstandthepoweraKu"
  "rtVonnegutsCommencementAddressatMITLadiesandgentlemenoftheclassof97Wea"
  "rsunscreenIfIcouldofferyouonlyonetipforthefuturesunscreenwouldbeitThel"
  "ongtermbenefitsofsunscreenhavebeenprovedbyscientistswhereastherestofmy"
  "advicehasnobasismorereliablethanmyownmeanderingexperienceIwilldispense"
  "thisadvicenowEnjoythepowerandbeautyofyouryouthOhnevermindYouwillnotund"
  "erstandthepowerandbeautyofyouryouthuntiltheyvefadedButtrustmein20years"
  "youlllookbackatphotosofyourselfandrecallinawayyoucantgraspnowhowmuchpo"
  "ssibilitylaybeforeyouandhowfabulousyoureallylookedYouarenotasfatasyoui"
  "magineDontworryaboutthefutureOrworrybutknowthatKurtVonneguKurtVonnegut"
  "sCommencementAddressatMITLadiesandgentlemenoftheclassof97Wearsunscreen"
  "IfIcouldofferyouonlyonetipforthefuturesunscreenwouldbeitThelongtermben"
  "efitsofsunscreenhavebeenprovedbyscientistswhereastherestofmyadvicehasn"
  "obasismorereliablethanmyownmeanderingexperienceIwilldispensethisadvice"
  "nowEnjoythepowerandbeautyofyouryouthOhnevermindYouwillnotunderstandthe"
  "powerandbeautyofyouryouthuntiltheyvefadedButtrustmein20yearsyoulllookb"
  "ackatphotosofyourselfandrecallinawayyoucantgraspnowhowmuchpossibilityl"
  "aybeforeyouandhowfabulousyoureallylookedYouarenotasfatasyouimagineDont"
  "worryaboutthefutureOrworrybutknowthatKurtVonnegutsCommencementAddressa"
  "tMITLadiesandgentlemenoftheclassof97WearsunscreenIfIcouldofferyouonlyo"
  "netipforthefuturesunscreenwouldbeitThelongtermbenefitsofsunscreenhaveb"
  "eenprovedbyscientistswhereastherestofmyadvicehasnobasismorereliabletha"
  "nmyownmeanderingexperienceIwilldispensethisadvicenowEnjoythepowerandbe"
  "autyofyouryouthOhnevermindYouwillnotunderstandthepowerandbeautyofyoury"
  "outhuntiltheyvefadedButtrustmein20yearsyoulllookbackatphotosofyourself"
  "andrecallinawayyoucantgraspnowhowmuchpossibilitylaybeforeyouandhowfabu"
  "lousyoureallylookedYouarenotasfatasyouimagineDontworryaboutthefutureOr"
  "worrybutknowthatKurtVonnegutsCommencementAddressatMITLadiesandgentleme"
  "noftheclassof97WearsunscreenIfIcouldofferyouonlyonetipforthefuturesuns"
  "creenwouldbeitThelongtermbenefitsofsunscreenhavebeenprovedbyscientists"
  "whereastherestofmyadvicehasnobasismorereliablethanmyownmeanderingexper"
  "ienceIwilldispensethisadvicenowEnjoythepowerandbeautyofyouryouthOhneve"
  "rmindYouwillnotunderstandthepowerandbeautyofyouryouthuntiltheyvefadedB"
  "uttrustmein20yearsyoulllookbackatphotosofyourselfandrecallinawayyoucan"
  "tgraspnowhowmuchpossibilitylaybeforeyouandhowfabulousyoureallylookedYo"
  "uarenotasfatasyouimagineDontworryaboutthefutureOrworrybutknowthattsCom"
  "mencementAddressatMITLadiesandgentlemenoftheclassof97WearsunscreenIfIc"
  "ouldofferyouonlyonetipforthefutureKurtVonnegutsCommencementAddressatMI"
  "TLadiesandgentlemenoftheclassof97WearsunscreenIfIcouldofferyouonlyonet"
  "ipforthefuturesunscreenwouldbeitThelongtermbenefitsofsunscreenhavebeen"
  "provedbyscientistswhereastherestofmyadvicehasnobasismorereliablethanmy"
  "ownmeanderingexperienceIwilldispensethisadvicenowEnjoythepowerandbeaut"
  "yofyouryouthOhnevermindYouwillnotunderstandthepowerandbeautyofyouryout"
  "huntiltheyvefadedButtrustmein20yearsyoulllookbackatphotosofyourselfand"
  "recallinawayyoucantgraspnowhowmuchpossibilitylaybeforeyouandhowfabulou"
  "syoureallylookedYouarenotasfatasyouimagineDontworryaboutthefutureOrwor"
  "rybutknowthatKurtVonnegutsCommencementAddressatMITLadiesandgentlemenof"
  "theclassof97WearsunscreenIfIcouldofferyouonlyonetipforthefuturesunscre"
  "enwouldbeitThelongtermbenefitsofsunscreenhavebeenprovedbyscientistswhe"
  "reastherestofmyadvicehasnobasismorereliablethanmyownmeanderingexperien"
  "ceIwilldispensethisadvicenowEnjoythepowerandbeautyofyouryouthOhnevermi"
  "ndYouwillnotunderstandthepowerandbeautyofyouryouthuntiltheyvefadedButt"
  "rustmein20yearsyoulllookbackatphotosofyourselfandrecallinawayyoucantgr"
  "aspnowhowmuchpossibilitylaybeforeyouandhowfabulousyoureallylookedYouar"
  "enotasfatasyouimagineDontworryaboutthefutureOrworrybutknowthatKurtVonn"
  "egutsCommencementAddressatMITLadiesandgentlemenoftheclassof97Wearsunsc"
  "reenIfIcouldofferyouonlyonetipforthefuturesunscreenwouldbeitThelongter"
  "mbenefitsofsunscreenhavebeenprovedbyscientistswhereastherestofmyadvice"
  "hasnobasismorereliablethanmyownmeanderingexperienceIwilldispensethisad"
  "vicenowEnjoythepowerandbeautyofyouryouthOhnevermindYouwillnotunderstan"
  "dthepoweraKurtVonnegutsCommencementAddressatMITLadiesandgentlemenofthe"
  "classof97WearsunscreenIfIcouldofferyouonlyonetipforthefuturesunscreenw"
  "ouldbeitThelongtermbenefitsofsunscreenhavebeenprovedbyscientistswherea"
  "stherestofmyadvicehasnobasismorereliablethanmyownmeanderingexperienceI"
  "willdispensethisadvicenowEnjoythepowerandbeautyofyouryouthOhnevermindY"
  "ouwillnotunderstandthepowerandbeautyofyouryouthuntiltheyvefadedButtrus"
  "tmein20yearsyoulllookbackatphotosofyourselfandrecallinawayyoucantgrasp"
  "nowhowmuchpossibilitylaybeforeyouandhowfabulousyoureallylookedYouareno"
  "tasfatasyouimagineDontworryaboutthefutureOrworrybutknowthatKurtVonnegu"
  "KurtVonnegutsCommencementAddressatMITLadiesandgentlemenoftheclassof97W"
  "earsunscreenIfIcouldofferyouonlyonetipforthefuturesunscreenwouldbeitTh"
  "elongtermbenefitsofsunscreenhavebeenprovedbyscientistswhereastherestof"
  "myadvicehasnobasismorereliablethanmyownmeanderingexperienceIwilldispen"
  "sethisadvicenowEnjoythepowerandbeautyofyouryouthOhnevermindYouwillnotu"
  "nderstandthepowerandbeautyofyouryouthuntiltheyvefadedButtrustmein20yea"
  "rsyoulllookbackatphotosofyourselfandrecallinawayyoucantgraspnowhowmuch"
  "possibilitylaybeforeyouandhowfabulousyoureallylookedYouarenotasfatasyo"
  "uimagineDontworryaboutthefutureOrworrybutknowthatKurtVonnegutsCommence"
  "mentAddressatMITLadiesandgentlemenoftheclassof97WearsunscreenIfIcouldo"
  "fferyouonlyonetipforthefuturesunscreenwouldbeitThelongtermbenefitsofsu"
  "nscreenhavebeenprovedbyscientistswhereastherestofmyadvicehasnobasismor"
  "ereliablethanmyownmeanderingexperienceIwilldispensethisadvicenowEnjoyt"
  "hepowerandbeautyofyouryouthOhnevermindYouwillnotunderstandthepowerandb"
  "eautyofyouryouthuntiltheyvefadedButtrustmein20yearsyoulllookbackatphot"
  "osofyourselfandrecallinawayyoucantgraspnowhowmuchpossibilitylaybeforey"
  "ouandhowfabulousyoureallylookedYouarenotasfatasyouimagineDontworryabou"
  "tthefutureOrworrybutknowthatKurtVonnegutsCommencementAddressatMITLadie"
  "sandgentlemenoftheclassof97WearsunscreenIfIcouldofferyouonlyonetipfort"
  "hefuturesunscreenwouldbeitThelongtermbenefitsofsunscreenhavebeenproved"
  "byscientistswhereastherestofmyadvicehasnobasismorereliablethanmyownmea"
  "nderingexperienceIwilldispensethisadvicenowEnjoythepowerandbeautyofyou"
  "ryouthOhnevermindYouwillnotunderstandthepowerandbeautyofyouryouthuntil"
  "theyvefadedButtrustmein20yearsyoulllookbackatphotosofyourselfandrecall"
  "inawayyoucantgraspnowhowmuchpossibilitylaybeforeyouandhowfabulousyoure"
  "allylookedYouarenotasfatasyouimagineDontworryaboutthefutureOrworrybutk"
  "nowthattsCommencementAddressatMITLadiesandgentlemenoftheclassof97Wears"
  "unscreenIfIcouldofferyouonlyonetipforthefutureKurtVonnegutsCommencemen"
  "tAddressatMITLadiesandgentlemenoftheclassof97WearsunscreenIfIcouldoffe"
  "ryouonlyonetipforthefuturesunscreenwouldbeitThelongtermbenefitsofsunsc"
  "reenhavebeenprovedbyscientistswhereastherestofmyadvicehasnobasismorere"
  "liablethanmyownmeanderingexperienceIwilldispensethisadvicenowEnjoythep"
  "owerandbeautyofyouryouthOhnevermindYouwillnotunderstandthepowerandbeau"
  "tyofyouryouthuntiltheyvefadedButtrustmein20yearsyoulllookbackatphotoso"
  "fyourselfandrecallinawayyoucantgraspnowhowmuchpossibilitylaybeforeyoua"
  "ndhowfabulousyoureallylookedYouarenotasfatasyouimagineDontworryaboutth"
  "efutureOrworrybutknowthatKurtVonnegutsCommencementAddressatMITLadiesan"
  "dgentlemenoftheclassof97WearsunscreenIfIcouldofferyouonlyonetipforthef"
  "uturesunscreenwouldbeitThelongtermbenefitsofsunscreenhavebeenprovedbys"
  "cientistswhereastherestofmyadvicehasnobasismorereliablethanmyownmeande"
  "ringexperienceIwilldispensethisadvicenowEnjoythepowerandbeautyofyouryo"
  "uthOhnevermindYouwillnotunderstandthepowerandbeautyofyouryouthuntilthe"
  "yvefadedButtrustmein20yearsyoulllookbackatphotosofyourselfandrecallina"
  "wayyoucantgraspnowhowmuchpossibilitylaybeforeyouandhowfabulousyoureall"
  "ylookedYouarenotasfatasyouimagineDontworryaboutthefutureOrworrybutknow"
  "thatKurtVonnegutsCommencementAddressatMITLadiesandgentlemenoftheclasso"
  "f97WearsunscreenIfIcouldofferyouonlyonetipforthefuturesunscreenwouldbe"
  "itThelongtermbenefitsofsunscreenhavebeenprovedbyscientistswhereasthere"
  "stofmyadvicehasnobasismorereliablethanmyownmeanderingexperienceIwilldi"
  "spensethisadvicenowEnjoythepowerandbeautyofyouryouthOhnevermindYouwill"
  "notunderstandthepowerandbeautyofyouryouthuntiltheyvefadedButtrustmein2"
  "0yearsyoulllookbackatphotosofyourselfandrecallinawayyoucantgraspnowhow"
  "muchpossibilitylaybeforeyouandhowfabulousyoureallylookedYouarenotasfat"
  "asyouimagineDontworryaboutthefutureOrworrybutknowthatsunscreenwouldbei"
  "tThelongtermbenefitsofsunscreenhavebeenprovedbyscientistswhereastheres"
  "tofmyadvicehasnobasismorereliablethanmyownmeanderingexperienceIwilldis"
  "pensethisadvicenowEnjoythepowerandbeautyofyouryouthOhnevermindYouwilln"
  "otunderstandthepowerandbeautyofyouryouthuntiltheyvefadedButtrustmein20"
  "yearsyoulllookbackatphotosofyourselfandrecallinawayyoucantgraspnowhowm"
  "uchpossibilitylaybeforeyouandhowfabulousyoureallylookedYouarenotasfata"
  "syouimagineDontworryaboutthefutureOrworrybutknowthatndbeautyofyouryout"
  "huntiltheyvefadedButtrustmein20yearsyoulllookbackatphotosofyourselfand"
  "recallinawayyoucantgraspnowhowmuchpossibilitylaybeforeyouandhowfabulou"
  "syoureallylookedYouarenotasfatasyouimagineDontworryaboutthefutureOrwor"
  "rybutknowthatsunscreenwouldbeitThelongtermbenefitsofsunscreenhavebeenp"
  "rovedbyscientistswhereastherestofmyadvicehasnobasismorereliablethanmyo"
  "wnmeanderingexperienceIwilldispensethisadvicenowEnjoythepowerandbeauty"
  "ofyouryouthOhnevermindYouwillnotunderstandthepowerandbeautyofyouryouth"
  "untiltheyvefadedButtrustmein20yearsyoulllookbackatphotosofyourselfandr"
  "ecallinawayyoucantgraspnowhowmuchpossibilitylaybeforeyouandhowfabulous"
  "youreallylookedYouarenotasfatasyouimagineDontworryaboutthefutureOrworr"
  "ybutknowthatndbeautyofyouryouthuntiltheyvefadedButtrustmein20yearsyoul"
  "lloo\00 \00\00\00 \00\00\00\00\00\00\00\00\00\007Zj\00\85\94\dc\93\12!"
  "A,C\ba\f7c"\f9s\adError return from gettimeofday: %d\00%0.6f\0a\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00"
  "\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00";

import function memset(a:int, b:int, c:int):int;

import function gettimeofday(a:int, b:int):int;

import function iprintf(a:int, b:int):int;

import function small_printf(a:int, b:int):int;

export function wasm_call_ctors() {
  nop
}

export function wasm_apply_data_relocs() {
  nop
}

export function local_memset(a:int, b:int, c:int, d:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int }) {
  var e:int;
  if (c < 4) goto B_a;
  d = a + select_if(d << 2, 0, d > 0);
  c = c / 4;
  var f:int = c - 1;
  a = c & 7;
  if (a) {
    loop L_c {
      d.a = b;
      d = d + 4;
      c = c - 1;
      e = e + 1;
      if (e != a) continue L_c;
    }
  }
  if (f < 7) goto B_a;
  loop L_d {
    d.h = b;
    d.g = b;
    d.f = b;
    d.e = b;
    d.d = b;
    d.c = b;
    d.b = b;
    d.a = b;
    d = d + 32;
    e = c > 8;
    c = c - 8;
    if (e) continue L_d;
  }
  label B_a:
}

export function local_memcpy(a:int_ptr, b:int_ptr@1, c:int) {
  if (c >= 4) {
    c = c >> 2;
    loop L_b {
      a[0] = b[0];
      a = a + 4;
      b = b + 4;
      var d:int = c > 1;
      c = c - 1;
      if (d) continue L_b;
    }
  }
}

export function sha_transform() {
  var a:int;
  var e:int;
  var i:int;
  var d:{ a:int, b:int, c:int, d:int, e:int }
  var g:int;
  var j:int;
  var c:{ a:long, b:long, c:long, d:long, e:long, f:long, g:long, h:long } = 
    stack_pointer - 320;
  stack_pointer = c;
  c.h = (a = sha_info_data)[7]:long;
  c.g = a[6]:long;
  c.f = a[5]:long;
  c.e = a[4]:long;
  c.d = a[3]:long;
  var b:{ a:int, b:int, c:int, d:int, e:int } = 16;
  c.c = a[2]:long;
  c.a = a[0]:long;
  c.b = a[1]:long;
  loop L_a {
    a = c + (b << 2);
    a[0]:int =
      (a + -64)[0]:int ^
      ((a - 56)[0]:int ^ ((a - 32)[0]:int ^ (a - 12)[0]:int));
    b = b + 1;
    if (b != 80) continue L_a;
  }
  b = sha_info_digest;
  var l:int = b.e;
  var h:int = l;
  var m:int = b.d;
  var k:int = m;
  var n:int = b.c;
  a = n;
  var o:int = b.b;
  var f:int = o;
  var p:int = b.a;
  b = p;
  loop L_b {
    b = 
      c[e]:int + ((i = a) & f) + ((d = b) << 5) + ((g = k) & (f ^ -1)) + h +
      1518500249;
    a = f << 30;
    j = 20;
    h = g;
    k = i;
    f = d;
    e = e + 1;
    if (e != 20) continue L_b;
  }
  loop L_c {
    b = c[j]:int + ((h = i) ^ ((e = a) ^ d)) + ((f = b) << 5) + g +
        1859775393;
    a = d << 30;
    k = 40;
    g = i;
    i = e;
    d = f;
    j = j + 1;
    if (j != 40) continue L_c;
  }
  loop L_d {
    b = 
      c[k]:int + ((d = b) << 5) + h + ((((i = e) | (g = a)) & f) | (a & e)) -
      1894007588;
    a = f << 30;
    j = 60;
    h = e;
    e = g;
    f = d;
    k = k + 1;
    if (k != 60) continue L_d;
  }
  loop L_e {
    b = 
      c[j]:int + ((h = g) ^ ((e = a) ^ d)) + ((f = b) << 5) + i - 899497514;
    a = d << 30;
    i = g;
    g = e;
    d = f;
    j = j + 1;
    if (j != 80) continue L_e;
  }
  d = sha_info_digest;
  d.e = h + l;
  d.d = e + m;
  d.c = a + n;
  d.b = f + o;
  d.a = b + p;
  stack_pointer = c + 320;
}

export function sha_init() {
  var a:{ a:long, b:long, c:int } = sha_info_digest;
  a.c = -1009589776;
  a.b = 1167088121787636990L;
  a.a = -1167088121787636991L;
  sha_info_count_lo[0]:int = 0;
  sha_info_count_hi[0]:int = 0;
}

export function sha_update(a:int_ptr@1, b:int) {
  var d:int;
  var c:{ a:int, b:int } = sha_info_count_lo;
  c.a = (c = c.a) + (d = b << 3);
  var e:int_ptr = sha_info_count_hi;
  e[0] = e[0] + (d > (c ^ -1)) + (b >> 29);
  if (b < 64) {
    d = b;
    goto B_a;
  }
  loop L_c {
    c = sha_info_data;
    e = 16;
    d = a;
    loop L_d {
      c.a = d[0]:int@1;
      c.b = d[4]:int@1;
      c = c + 8;
      d = d + 8;
      var f:int = e != 2;
      e = e - 2;
      if (f) continue L_d;
    }
    a = a - -64;
    c = b > 127;
    sha_transform();
    d = b + -64;
    b = d;
    if (c) continue L_c;
  }
  label B_a:
  if (d >= 4) {
    c = d >> 2;
    d = sha_info_data;
    loop L_f {
      d[0]:int = a[0];
      d = d + 4;
      a = a + 4;
      e = c > 1;
      c = c - 1;
      if (e) continue L_f;
    }
  }
}

export function sha_final() {
  var c:int;
  var a:{ a:long, b:long, c:long, d:long, e:long, f:long, g:long, h:int, i:int }
  sha_info_data[a = (c = sha_info_count_lo[0]:int) >> 3 & 63]:int = 128;
  var b:int = a + 1;
  var d:int = sha_info_count_hi[0]:int;
  if (a >= 56) {
    if ((a ^ 60) >= 4) { sha_info_data[b]:int = 0 }
    sha_transform();
    a = sha_info_data;
    a.a = 0L;
    a.g = 0L;
    a.f = 0L;
    a.e = 0L;
    a.d = 0L;
    a.c = 0L;
    a.b = 0L;
    goto B_a;
  }
  if (a > 51) goto B_a;
  memset(sha_info_data + (b << 2), 0, 55 - a & -4);
  label B_a:
  a = sha_info_data;
  a.i = c;
  a.h = d;
  sha_transform();
}

export function sha_stream() {
  var a:int = sha_info_digest;
  a[4]:int = -1009589776;
  a[1]:long = 1167088121787636990L;
  a[0]:long = -1167088121787636991L;
  a = sha_info_count_lo;
  a[0]:int = 0;
  var b:int_ptr = sha_info_count_hi;
  b[0] = 0;
  var c:int = indata;
  sha_update(c, 8192);
  sha_update(c - -8192, 8192);
  sha_info_data[a = (c = a[0]:int) >> 3 & 63]:int = 128;
  var d:int = a + 1;
  b = b[0];
  if (a >= 56) {
    if ((a ^ 60) >= 4) { sha_info_data[d]:int = 0 }
    sha_transform();
    a = sha_info_data;
    a[0]:long = 0L;
    a[6]:long = 0L;
    a[5]:long = 0L;
    a[4]:long = 0L;
    a[3]:long = 0L;
    a[2]:long = 0L;
    a[1]:long = 0L;
    goto B_a;
  }
  if (a > 51) goto B_a;
  memset(sha_info_data + (d << 2), 0, 55 - a & -4);
  label B_a:
  a = sha_info_data;
  a[15]:int = c;
  a[14]:int = b;
  sha_transform();
}

export function submain():int {
  var h:double;
  var a:int = stack_pointer + -64;
  stack_pointer = a;
  var b:{ a:int, b:int, c:int, d:int, e:int } = gettimeofday(a + 48, 0);
  if (b) {
    a[8]:int = b;
    iprintf(memory_base + 16420, a + 32);
  }
  startTimer[0]:double =
    f64_convert_i32_s(b = a[14]:int) * 0.000001 +
    f64_convert_i64_s(a[6]:long);
  sha_stream();
  b = sha_info_digest;
  var d:int = b.e;
  var e:int = b.d;
  var f:int = b.c;
  var g:int = b.b;
  b = b.a;
  var c:int = gettimeofday(a + 48, 0);
  if (c) {
    a[4]:int = c;
    iprintf(memory_base + 16420, a + 16);
  }
  endTimer[0]:double =
    (h = f64_convert_i32_s(c = a[14]:int) * 0.000001 +
         f64_convert_i64_s(a[6]:long));
  a[0]:double = h - startTimer[0]:double;
  small_printf(memory_base + 16455, a);
  stack_pointer = a - -64;
  return (b != 6969911) + (g != -1814260603) + (f != 742465810) +
         (e != 1677179459) +
         (d != -1384908510);
}

