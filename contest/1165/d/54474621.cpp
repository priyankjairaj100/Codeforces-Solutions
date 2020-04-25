//la_flame_ never dies out.

#include <bits/stdc++.h>
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

int32_t main()
{
    fastio
    int t; cin>>t;
    while(t--){
        int n;
		cin >> n;
		vector<int> d(n);
		for (int i = 0; i < n; ++i) cin >> d[i];
		sort(d.begin(), d.end());
		int x = d[0] * d[n-1];
		vector<int> dd;
		for (int i = 2; i * 1ll * i <= x; i++) {
			if (x % i == 0) {
				dd.push_back(i);
				if (i != x / i) {
					dd.push_back(x / i);
				}
			}
		}
		sort(dd.begin(), dd.end());

		if (d == dd) { 
			cout << x << endl;
		} else {
			cout << -1 << endl;
		}
    }
    return 0; 
}