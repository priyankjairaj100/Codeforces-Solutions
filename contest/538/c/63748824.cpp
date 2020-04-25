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
 
map <int, int> mm;
 
int32_t main(){
    fastio
    int n, m; cin >> n >> m;
    pii ff, l;
    int x = 0, y = 0;
    rep(i,1,m,1){
        cin >> x >> y;
        mm[x] = y;
        if(i == 1) ff = {x, y};
        if(i == m) l = {x, y};
    }
    int h1 = ff.second, d1 = ff.first;
    int ans = h1 + (d1 - 1);
    ans = max(ans, l.second + (n - l.first));
 
    for(auto x: mm){
        int h2 =  x.second, d2 = x.first;
        if( (d2 - d1) < abs(h2 - h1) ){
            cout << "IMPOSSIBLE" << endl;
            return 0;
        }
        int curr = ((d2 - d1) - abs(h2 - h1))/2;
        curr += max(h1, h2);
        ans = max(ans, curr);
        d1 = d2;
        h1 = h2;    
    }
    cout << ans << endl;
    return 0; 
}