#include <bits/stdc++.h>
#include <string>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define int long long
#define fastio  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define ordered_multiset tree<int, null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>
#define rep(i, a, b, d) for (int i = a; i <= b; i += d)
#define brep(i, a, b, d) for (int i = a; i >= b; i -= d)
#define pb push_back
#define all(x) x.begin(), x.end()
#define pii pair<int, int>
const int MAX = 1e5 + 5;
const int MOD = 1e9 + 7;
//////////////////////////////////
int n, s;
int l[2*MAX], r[2*MAX];
vector <pii> v;

int ok(int x){
	int temp = 0, cnt = 0;
	    brep(i,n-1,0,1){
		if(cnt>n/2) break;
		if(v[i].first >= x) cnt++;
		else if(v[i].second < x) continue;
		else temp += (x - v[i].first), cnt++;
	}
	if(cnt<=n/2) return 0;
	return temp<=s;
}

int bs(int lo, int hi){
    if(lo == hi) return lo;
    int mid = (lo + hi + 1)/2;
    if(ok(mid)) return bs(mid, hi);
    else return bs(lo, mid - 1);
}

int32_t main(){
    fastio
    int t; cin >> t;
    while(t--){
        v.clear();
        cin >> n >> s;
        rep(i,1,n,1){
            int u, uu; cin >> u >> uu;
            v.pb({u, uu});
            s -= u;
        }
        sort(all(v));
        cout << bs(0, 1e14) << endl;
    }
    return 0;
}