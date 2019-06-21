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

const vector<string> suffix = {"@163.com", "@126.com", "@188.com", "@yeah.net", "@netease.com", "@vip.163.com"};

const vector<char> ch = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

const int MINLEN = 6;
const int MAXLEN = 18;

const int NUM = 150;

int main() { __
	
	srand( (unsigned)time(NULL) );
	
	vector<string> prefix;
	vector<string> res;
	
	for ( int i = 0; i < NUM; ++i ) {
		string tmpStr = "";
		int tmpLen = (rand() % (MAXLEN - MINLEN + 1)) + MINLEN;
		
		for ( int j = 0; j < tmpLen; ++j ) {
			tmpStr += ch[ rand() % ch.size() ];
		}
		prefix.push_back(tmpStr);
		
		tmpStr += suffix[ rand() % suffix.size() ];
		res.push_back(tmpStr);
	}
	
	for ( auto it : prefix) {
		cout << it << endl;
	}
	
	cout << "{";
	for ( auto it : prefix) {
		cout << '"' << it << '"' << ", ";
	}
	cout << "\b\b}" << endl;
	
	cout << endl;
	
	for ( auto it : res ) {
		cout << it << endl;
	}
	
	cout << "{";
	for ( auto it : res) {
		cout << '"' << it << '"' << ", ";
	}
	cout << "\b\b}" << endl;
	return 0;
}
