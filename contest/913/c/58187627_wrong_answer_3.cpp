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
	int n, l; cin >> n >> l;
	int a[n+1];
	rep(i,1,n,1) cin >> a[i];
	int mx[51];
	brep(i,n-1,1,1) a[i] = min(a[i+1], a[i]);
	rep(i,1,n,1){
		int m = a[i];
		rep(j,1,i,1){
			m = min(a[j], 2 * m);
		}
		mx[i] = m;
	}
	rep(i,n+1,33,1) mx[i] = mx[i-1] * 2; 
	int ans = 0, msb = 0;
	rep(i,1,32,1) if(l & (1LL << (i-1))) ans += mx[i], msb = i;
	cout << min(ans, mx[msb + 1]) << endl;
    return 0;
}