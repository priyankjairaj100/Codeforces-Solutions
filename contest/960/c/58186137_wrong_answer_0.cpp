//IWNLA
#include <bits/stdc++.h>
#include <string>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

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
#define ordered_set tree<int, null_type,greater<int>, rb_tree_tag,tree_order_statistics_node_update>
#define rep(i, a, b, d) for (int i = a; i <= b; i += d)
#define brep(i, a, b, d) for (int i = a; i >= b; i -= d)
#define pb push_back
#define pii pair<int, int>

int32_t main(){
    fastio
	int x, d;
	cin >> x >> d;
	vector <int> ans;
	int b = 0, n  = 0;
	rep(e,1,50,1){
		if(x & (1LL << (e-1LL) )){
			rep(i,1,e-1,1) ans.pb(b);
			b += d;
			n++;
		}
	}
	rep(i,1,n,1) ans.pb(b+=d);
	cout << ans.size() << endl;
	for(auto c: ans) cout << c<< " ";
    return 0;
}