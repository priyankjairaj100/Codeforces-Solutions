//IWNLA
#include <bits/stdc++.h>
#include <string>
using namespace std;
 
#define int long long
typedef long double LD;
 
const int MAX = 1e5 + 5;
const int MOD = 1e9 + 7;
const LD EPS = 1e-10;
const LD PI = acos(-1.0);
#define fastio                        \
ios_base::sync_with_stdio(false); \
cin.tie(NULL);                    \
cout.tie(NULL);
#define rep(i, a, b, d) for (int i = a; i <= b; i += d)
#define brep(i, a, b, d) for (int i = a; i >= b; i -= d)
#define pb push_back
#define pii pair<int, int>

 
int32_t main(){
    fastio
	int n; cin >> n;
	int a[n+1]; rep(i,1,n,1) cin >> a[i];
	sort(a+1,a+1+n);
	set <int> s;
	rep(i,1,n,1) s.insert(a[i]);
	int w = 0, ts = 0;
	int f = a[1], cnt = 0;
	rep(i,1,n,1) if(a[i] == f) cnt++;
	if(s.size() == n-1 and cnt == 2 and f!=0);
	else if(s.size() == n);
	else w = MOD;
	while(1){
		if(w+1 > n) break;
		int l = a[w+1];
		l -= w;
		ts += l;
		w++;
	}
	//cout<< ts << endl;
	if(ts%2 == 0) cout<< "cslnb" <<endl;
	else cout << "sjfnb" << endl;
    return 0;   
}