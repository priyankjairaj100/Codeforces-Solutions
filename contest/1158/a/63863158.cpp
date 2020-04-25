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
 
int b[MAX], g[MAX];
 
int32_t main(){
    fastio
    int n, m;
    cin >> n >> m;
    rep(i,1,n,1) cin >> b[i];
    rep(i,1,m,1) cin >> g[i];
    sort(b+1,b+1+n);
    sort(g+1,g+1+m);
 
    if(g[1] < b[n]){
        cout << "-1";
        return 0;
    }
    int ans = 0;
    rep(i,1,n,1) ans += m*b[i];
    rep(i,1,m,1) ans += (g[i] - b[n]);
    if(g[1] != b[n]) ans += (b[n] - b[n-1]);
    cout << ans << endl;
    return 0; 
}
