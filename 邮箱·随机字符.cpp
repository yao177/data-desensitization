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


int main() { __
	
//	随机字符
	cout << '{';
	for ( int i = 0; i < 10; ++i ) {
//		随机数字
		cout << "'" << i << "', ";
	}
	for ( char i = 'a'; i <= 'z'; ++i ) {
//		随机字母
		cout << "'" << i << "', ";
	}
	cout << "\b\b" << "};" << endl;
	
	return 0;
}
