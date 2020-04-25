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

int q[2*MAX], a, x, b, y, k;

int ok(int t){
    int l = (a*b)/__gcd(a, b);
    int tx = t/a, ty = t/b, tc = t/l;
    tx -= tc;
    ty -= tc;
    int tot = 0;
    rep(i,1,tc,1) tot += (q[i] * (x + y)/100);
    if(x > y){
        rep(i,tc+1,tc + tx,1) tot += (q[i] * x)/100;
        rep(i,tc + tx + 1, tc + tx + ty,1) tot += (q[i] * y)/100;
    }
    else{
        rep(i,tc+1,tc + ty,1) tot += (q[i] * y)/100;
        rep(i,tc + ty + 1, tc + tx + ty,1) tot += (q[i] * x)/100;
    }
    return tot >= k;
}

int bs(int lo, int hi){
    if(lo == hi) return lo;
    int mid = (lo + hi)/2;
    if(ok(mid)) return bs(lo, mid);
    else return bs(mid+1, hi);
}

int32_t main(){
    fastio
    int qx; cin >> qx;
    while(qx--){
        int n; cin >> n;
        rep(i,1,n,1) cin >> q[i];
        sort(q+1,q+1+n, greater <int>());
        cin >> x >> a >> y >> b;
        cin >> k;
        if(!ok(n)) cout << -1 << endl;
        else cout << bs(1, n) << endl;
    }   
    return 0; 
}