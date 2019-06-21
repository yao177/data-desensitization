#include <bits/stdc++.h>
using namespace std;
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

const vector<string> mail = {"2qzdlydwy7h24ve@163.com", "0madoh@188.com", "fx2d798g3@163.com", "h5ow4yy@188.com", "h8lszpwn@vip.163.com", "glje854u@126.com", "uohrp1@188.com", "ga0209a5wfp6z@netease.com", "5s695pvwte@163.com", "s26k0k@netease.com", "5omx201mlzgg@yeah.net", "kiq8b3h46@netease.com", "d495mb68d5ebvhtb@vip.163.com", "zv8ak6yqxr4pdbl@yeah.net", "4crp0ie2r4foo0wj@163.com", "yzpshobfdwq6wt664u@188.com", "2j2khund4261@163.com", "65gvr94w8wkkbsam@netease.com", "qbv7yf7je17dlj9tr6@netease.com", "zuf5laoo7@vip.163.com", "wqa2krv@188.com", "zronqvhall6upr3khv@163.com", "xvrljk31njvugto8f4@netease.com", "6wfu0xsmt@163.com", "ygwz3ig6o@netease.com", "t4evkcp@163.com", "2x264qoxyb521@188.com", "7tm4u0m79n@vip.163.com", "ly4t22y54q@yeah.net", "5iiu2a8@163.com", "qs6vzhtz8n9wyzf6l0@netease.com", "fk2emf@netease.com", "3u5wkr2krgneaj@yeah.net", "2i0w9mscck9tsr@126.com", "oa02sunyj0odgq765q@netease.com", "z0sa9buytmkdd6ov1@188.com", "28gw9111ut@yeah.net", "kvjk0q1b2awspa2r@yeah.net", "518ngb@163.com", "ftjc4p@vip.163.com", "7w6vhow@netease.com", "g266g8893j3@yeah.net", "2b5xu70jdpl7mbely@126.com", "jh4l01nzl@netease.com", "ev16snrxqqcbl4@vip.163.com", "mbbrr7kh0o24t@188.com", "eey2366xsrbnk@163.com", "u8g14gwtu4cfnah5u@netease.com", "nzipbbkeh1@netease.com", "dcgxsr9hzu1l8q@netease.com", "25f4ojvggieolax@163.com", "8rup542jjq@188.com", "8gcpkpi0x320lknfvm@vip.163.com", "c1kzqh4@vip.163.com", "kpyw06r7ykxvwsa@163.com", "3t6lke2sc59hogqa0a@vip.163.com", "f27e4fdgarl8d3@netease.com", "av7atddpff@vip.163.com", "94aghoa@163.com", "zeimcfqnlddl8mz6@126.com", "pnel5ss3q@163.com", "raw8fzondhyez594nk@vip.163.com", "gx1mxic96mzdd0pr@163.com", "27hc4p3f0b@163.com", "xaozbq@vip.163.com", "uxl6wzacfxru@yeah.net", "yjnvqlcj22izfkopfd@yeah.net", "wpvpdt@netease.com", "k4d13zk@yeah.net", "5q10cexxz1i@163.com", "mblfoxkklixk@126.com", "n973d9yf047bjiicwh@yeah.net", "52crwc0tg7mm@126.com", "2m3vkrcek9kp0@netease.com", "qpyucjitvubz@yeah.net", "nnz5bw2w7gqtlf@163.com", "zp26dqoltv9@163.com", "9p3g5xll@163.com", "i2mzfpe4@163.com", "u8i250t9dysur8@netease.com", "zmhn2v3ho0c@yeah.net", "t4pbculc7@163.com", "oysq1t@188.com", "kqkyyte8i3a7@188.com", "swlc9g@126.com", "j110xrkg3n87vl@vip.163.com", "cu4ih3vtaxash@vip.163.com", "nk3gnsj2pdvqgz@163.com", "qn3g54lm10vqopdu99@188.com", "6jt1i3@188.com", "qr6908zld25odikfwd@yeah.net", "bbceni1heoe07pgj@vip.163.com", "kk1e2xd6j3@188.com", "69qy4dxu9linro@netease.com", "qzv2x6hezdrbi2qtrv@netease.com", "8rt251fpjqlizr@vip.163.com", "cuaufa9ah@netease.com", "lyfkrwxtfi@yeah.net", "8wwlau3@vip.163.com", "mk4b05uzu29hgp@netease.com", "50gs50@126.com", "je19cudlbeukeaqgst@netease.com", "wa87t31c2a40uw@126.com", "pn4gavqzcz5@vip.163.com", "rip5c203@netease.com", "zfut2x1mwi6r828u@126.com", "553qpfqbduhsoe6@163.com", "bm0jp8fww9liv7gi@yeah.net", "97zsn5xk4cd4gy9@126.com", "bc7i5w60vo@yeah.net", "b076bpcvmwhhtq@188.com", "k25orobp@188.com", "bbzrfoq@vip.163.com", "9azeiicj39@188.com", "m9pzzmm2i@126.com", "dgd95wfqkulrc3qpb2@vip.163.com", "7dbkvu1q8acedcz5c@126.com", "p5mjo078rashnrsxqq@vip.163.com", "4gkcnjbav0wcp71@vip.163.com", "i1e1cw07e66h2d@188.com", "lbi3i4pd9o@126.com", "xtx3kxqyvs28hgr@163.com", "rr82s8nlbojl34j@188.com", "ibksdmsqt6l@126.com", "k9ev8906o0bz85@188.com", "2j69fyatmw80mgnkx2@126.com", "a9u8jbw@126.com", "nbjrms@188.com", "27lov3zqo0i@vip.163.com", "5n8n89qmstc@netease.com", "qlnsbuhigz0xkvx9@vip.163.com", "xuxmf0am6qv6s6s@netease.com", "ixxyvx2gysohi@netease.com", "e8zeu2w1wifp9re7we@vip.163.com", "f6bvuthyx@163.com", "vs1jft@netease.com", "yu6ogn@188.com", "9wopphyj16mowa@126.com", "aqcwvcaba@netease.com", "gx1m1faqwmp@netease.com", "n5cdjjwzk7zwae22@126.com", "f29060dx7tt6aqyx@126.com", "lddncpav@vip.163.com", "fo4ntylfbrncdrbr9y@vip.163.com", "eraj8wex4p29@vip.163.com", "60ndqxwt4chv9r3@yeah.net", "0l1d8ru25g4wsxv4@188.com", "fvsnaed7y3ea6d@188.com", "qtwq5qqq8@yeah.net", "vyrex4q9wmqajv@netease.com"};


int main() { __
	
	vector<string> res;
	
	for ( auto it : mail ) {
		string tmp = it;
		
		string::size_type pos;
		pos = tmp.find("@");
		string prefix = tmp.substr(0, pos);
//		cout << prefix << ' ';
		string suffix = tmp.substr(pos, tmp.size() - pos);
//		cout << suffix << endl;
		
//		string hide(prefix.size() - 3, '*');
		string hide(3, '*');
		
		prefix = hide + prefix.substr(prefix.size() - 3, 3);
		
		tmp = prefix + suffix;
		
		res.push_back(tmp);
	}
	
	for ( auto it : res ) {
		cout << it << endl;
	}
	
	return 0;
}
