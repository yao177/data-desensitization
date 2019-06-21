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
	const ll mod = 256;
	const ll MOD = 0x7fffffffffffffff;
	
	ll res = 0;
	string s = "dwoh7";
	for ( auto it : s ) {
		res = res * mod;
		res %= MOD;
		res += (int)it;
		res %= MOD;
	}
	cout << res << endl;
	
	vector<int> t;
	while ( res ) {
//		cout << res % 2;
		t.push_back(res % 2);
		res /= 2;
	}
	string str( 64 - t.size(), '0' );
	for ( auto it : t ) {
		str += it + '0';
	}
	cout << str << endl;
	
//	cout << endl << t.size() << endl;
	
	
	return 0;
}
