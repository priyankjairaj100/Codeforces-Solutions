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


int occ[200005], val[200005], xv[200005];

int32_t main(){
    fastio
	int n; cin >> n;
	rep(i,1,n,1) cin >> val[i];
	int q; cin >> q;
	int x = 0;
	rep(e,1,q,1){
		int t; cin >> t;
		if(t == 1){
			int p, va; cin >> p >> va;
			occ[p] = e;
			val[p] = va;
		}
		else{cin >> x;
		xv[e] = x;}
	}
	brep(i,q-1,0,1) xv[i] = max(xv[i], xv[i+1]);
	rep(i,1,n,1) val[i] = max(val[i], xv[occ[i]]);
	rep(i,1,n,1) cout<<val[i]<<" ";
    return 0;
}