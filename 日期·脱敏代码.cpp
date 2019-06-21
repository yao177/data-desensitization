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

const int len = 150;
const int data[] = {19910210, 19910210, 19961100, 19930925, 19960314, 19930327, 19970200, 19920417, 19970427, 19920406, 19961211, 19950323, 19930408, 19980122, 19971212, 19980717, 19910324, 19900212, 19940211, 19900104, 19950417, 19980721, 19941126, 19951225, 19910708, 19980319, 19901127, 19950817, 19990312, 19960808, 19921118, 19961216, 19911225, 19900918, 19940726, 19950817, 19900608, 19940424, 19911109, 19960224, 19931125, 19900208, 19971205, 19930304, 19980901, 19930309, 19980307, 19961025, 19940404, 19991203, 19990808, 19950309, 19921004, 19961219, 19910425, 19951027, 19920714, 19960722, 19970819, 19921208, 19970515, 19960714, 19911219, 19990606, 19930802, 19940500, 19940115, 19960226, 19990804, 19910320, 19950823, 19900122, 19931019, 19980120, 19910916, 19970924, 19991112, 19961126, 19980214, 19980717, 19980422, 19990706, 19960102, 19910210, 19930627, 19980401, 19950102, 19990525, 19980421, 19990326, 19900300, 19960601, 19940314, 19960716, 19921211, 19940721, 19910308, 19990319, 19950121, 19980916, 19990427, 19950312, 19931213, 19930808, 19950324, 19970214, 19920226, 19941210, 19920603, 19960416, 19950123, 19940303, 19980612, 19901003, 19980204, 19990902, 19950704, 19970511, 19980106, 19920305, 19950620, 19951009, 19930407, 19930208, 19991122, 19960204, 19940322, 19920621, 19910216, 19970617, 19980323, 19970300, 19940420, 19951212, 19910401, 19911117, 19920401, 19950715, 19980818, 19921019, 19931102, 19990616, 19950209, 19921006, 19940915, 19921016, 19950322, 19960826, 19900321, 19990120, 19990423};
const int ranLe = -200;
const int ranRi = +200;

int main() { __

	vector<int> year, month, day;
	int tmpIn;
	for ( int i = 0; i < len; ++i ) {
		tmpIn = data[i];
		year.push_back( tmpIn / 10000 );
		tmpIn %= 10000;
		month.push_back( tmpIn / 100 );
		tmpIn %= 100;
		day.push_back( tmpIn );
	}
	
	srand( (unsigned)time(NULL) );
	vector<string> res;
	for ( int i = 0; i < len; ++i ) {
		struct tm tmin;
		struct tm *pre = &tmin;
		cout << year[i] << '-' << month[i] << "-" << day[i] << endl;
		pre->tm_year = year[i] - 1900;
		pre->tm_mon = month[i] - 1;
		pre->tm_mday = day[i];
		
		time_t date = mktime(pre);
//		cout << date << endl;
		
		int tmp = (rand() % (ranRi - ranLe + 1)) + ranLe;
		cout << tmp << endl;
		date += tmp * 60 * 60 * 24;
		struct tm tmout;
		struct tm *lat = &tmout;
		lat = localtime(&date);
//		cout << lat->tm_year << lat->tm_mon << lat->tm_mday << endl;
		char buf[32];
		strftime(buf, sizeof(buf), "%Y%m%d", lat);
		cout << buf << endl << endl;
		if (i) res.push_back(buf);
	}
	
	for ( auto it : res ) {
		cout << it.substr(0, 4) << '-' << it.substr(4, 2) << '-' << it.substr(6, 2) << endl;
	}
	return 0;
}
