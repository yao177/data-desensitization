#include <bits/stdc++.h>
#include "cryptopp/aes.h"	// Crypto++ 头文件
using namespace std;
using namespace CryptoPP;	// Crypto++ 命名域
#define __ ios_base::sync_with_stdio(0);cin.tie(0);
#define rep(i, a, b) for (int (i) = (a); (i) < (b); ++(i))
#define repd(i, a, b) for (int (i) = (a); (i) >= (b); --(i))
#define ni(a) int a; scanf("%d", &a)
#define si(a) scanf("%d", &a)
#define sii(a, b) scanf("%d%d", &a, &b)
#define sc(a) scanf("%c", &a)
#define scc(a, b) scanf("%c%c", &a, &b)
#define sd(a) scanf("%lf", &a)
#define sdd(a, b) scanf("%lf%lf", &a, &b)
typedef long long ll;
const int INF = 0x3f3f3f3f;
const int inf = 2 * INF;
/*<----------------- York ------------------>*/
const int maxn = 1e3 + 3;
const int mod = 256;
const int MOD = 0x7fffffff;

const vector<string> uid = {"dwoh7", "dwoh7", "swfo4", "lysz2", "psmc8", "lsnj0", "qdpj8", "bdej2", "minr4", "saoh0", "nvjq7", "emkz8", "ejwy1", "ehci9", "jqie7", "wusy6", "mvdw8", "xzfl4", "frpk9", "vbch9", "stda2", "wwjn6", "dieh3", "wpuv7", "fkyu1", "ebld8", "cbsk4", "nrbk8", "apyw6", "tqbf0", "usmi5", "gfsf4", "ntnl1", "ggft5", "maam6", "poiu1", "oecf2", "ienk7", "nwqh2", "rnwp5", "xqfc3", "aagv4", "bnab3", "ntxo3", "nmdb5", "okxk9", "txtw9", "xtge2", "yjjs6", "npkr8", "fsbn5", "jkpo0", "okud1", "tlbm7", "pjcn5", "vpwu4", "dyjz5", "jube1", "vtjt0", "uxlq8", "gbui0", "dntt9", "llvt8", "rswk1", "flkc1", "ykbb7", "pyxh5", "xvcg4", "ytcd9", "zgze7", "cuot8", "flka0", "smbp0", "wfzx5", "nhgz6", "prmq3", "uxch0", "pcdd4", "fohk3", "zzyd7", "yxaq4", "pgfx3", "xiyh8", "dnrk3", "vqph8", "cpjs8", "ahoe6", "ltqs3", "drea8", "vyit1", "yfhx6", "rfcf4", "akxy7", "dbtn3", "hlzb9", "ggoi4", "lgfb0", "rtac6", "hzkp2", "bqlx8", "rsia5", "gqho2", "qfxz5", "ocwz5", "kpss0", "gyvg2", "tfro6", "hdcn0", "ozty7", "semd2", "txvc1", "fllf0", "betp9", "rlqe7", "xbqx1", "wkea8", "lbnv6", "rhxq6", "arni6", "pztq6", "cmvo3", "lfbk5", "iyjz5", "cnij7", "lzet2", "snut2", "ruby7", "hvli1", "ehkb5", "fclx6", "cylw0", "reri0", "irth5", "kgnr7", "wqnm2", "vnem5", "owmr6", "aksl3", "uvni1", "rbjq3", "ctro3", "fnxi7", "dphp1", "ogye1", "vhxf5", "hwng6", "lekn6", "tump3", "ddwo6", "tzdt3", "lrzp4"};
const vector<string> pwd = {"vtfp47", "vtfp47", "jmnx77", "chfp28", "jekr60", "yyqf21", "azob38", "cyhx47", "yglo73", "zxrk34", "dxgl87", "shvh47", "mbkd46", "kmmo06", "zypl10", "pdvb73", "xkha26", "dbbk68", "tcmn68", "ylig38", "xgzh29", "qugm46", "jhmb13", "lryk56", "yhip11", "oliv52", "zbvg68", "odft11", "lcub94", "xwjr22", "jrer74", "djfx30", "wrih98", "eczg90", "lwca79", "fdqx15", "oiea67", "zefs63", "nzfi82", "horq63", "annk30", "otxf18", "pyjd60", "nbeg78", "qcng62", "ohsw10", "pgvs82", "clxp04", "fwdi31", "lynr14", "nmse70", "ebsf65", "uymw40", "xtkj12", "ggbe06", "bdrh52", "ihlc31", "ojoj76", "ttva41", "uxxf17", "gipx64", "kghb93", "lqoy95", "okfw33", "fexb56", "gjmn53", "dhto71", "kcpo83", "bfsy68", "ozgf04", "euxd15", "epqz01", "kifx04", "jdqz43", "ymms76", "agvf48", "kaoj53", "zaro77", "zxkn56", "umiq31", "blvb67", "tist77", "mvwp85", "neik75", "fpvr29", "bxrp32", "rlcs52", "wcyr04", "wnqd44", "ctct75", "wfwv58", "jttr20", "vopy70", "uokj78", "dlkm94", "vudm71", "bndw83", "tkwo31", "bjpu37", "wjhg42", "typa64", "ujwp92", "yblj80", "ymlq82", "vjnr24", "hxuh99", "dses18", "ydwj76", "bkce03", "ozou38", "lgzc03", "gltk54", "ogif88", "qznv69", "aejm85", "lczs23", "aoku43", "xrfr33", "hvjs16", "dozl18", "urer07", "uard34", "bglk68", "zqcl32", "vmzo12", "ikdp87", "xqtx67", "eafi39", "bcmz96", "gtln59", "frvf24", "ksab18", "kyvl46", "tlzd82", "arsd88", "hlmp04", "mvpi77", "zzjy37", "jvhn85", "glqp05", "mmzg10", "nwpb15", "hdwv93", "cbkc62", "pucn95", "rhtu11", "oejh53", "zkgg73", "oymf03", "vbta16", "iyfp40"};

int stringToNum(string s) {
	ll res = 0;
	for ( auto it : s ) {
		res *= mod;
		res += it;
		res %= MOD;
	}
	return (int)res;
}

string intToStr(int num) {
	string in = "";
	while (num) {
		int tmp = num % 2;
		if (tmp == 0) in += "0";
		else in += "1";
	}
	int len = in.size();
	if (len < 32) {
		int tmp = 32 - len;
		string res(tmp, '0');
		in = res + in;
	}
	return in;
}

string trans( string sNum ) {
	string sLe = sNum.substr( 0, sNum.size() / 2 );
	string sRi = sNum.substr( sNum.size() / 2 + 1, sNum.size() - sNum.size() / 2 );
	string res = sRi;
	
	unsigned char aesKey[AES::DEFAULT_KEYLENGTH];
	unsigned char inBlock[AES::BLOCKSIZE];
	strcpy( inBlock, sLe.c_str() );
	unsigned char outBlock[AES::BLOCKSIZE];
	unsigned char xorBlock[AES::BLOCKSIZE];
	memset( xorBlock, 0, AES::BLOCKSIZE );
	aesEncryptor.SetKey( aesKey, AES::DEFAULT_KEYLENGTH );
	aesEncryptor.ProcessAndXorBlock( inBlock, xorBlock, outBlock );
	
	string sEn(outBlock);
	res += sEn;
	
	return res;
}

int main() { __
	
	string name = "fuckU";
	int num = stringToNum(name);
	string nnum = intToStr(num);
	for ( int i = 0; i < 6; ++i ) {
		nnum = trans(nnum);
	}
	cout << nnum;
	
	return 0;
}
