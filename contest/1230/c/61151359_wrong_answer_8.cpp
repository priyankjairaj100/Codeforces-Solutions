//Gear Third
#include <bits/stdc++.h>
#include <string>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define int long long
const int MAX = 1e5 + 5;
const int MOD = 1e9 + 7;
#define fastio  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define ordered_multiset tree<int, null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>
#define rep(i, a, b, d) for (int i = a; i <= b; i += d)
#define brep(i, a, b, d) for (int i = a; i >= b; i -= d)
#define pb push_back
#define all(x) x.begin(), x.end()
#define pii pair<int, int>
//auto cmp = [](int a, int b) {return a > b ;};
//set<int, decltype(cmp)> s(cmp);
/*__________________________________________*/

int deg[10], ass[10];
vector <int> g[10];

int32_t main(){
    fastio
    int n, m; cin >> n >> m;
    rep(i,1,m,1){
        int x, y; cin >> x >> y;
        deg[x]++;
        g[x].pb(y);
        deg[y]++;
        g[y].pb(x);
    }
    if(n <= 6) {cout <<m << endl; return 0;}

    int ans = 0;
    rep(i,1,7,1){
        int ans1 = m - deg[i];
        int t = 0;
        rep(j,1,n,1){
            if(j!=i) t = max(t, 6 - deg[i]);
        }
        ans1 += min(deg[i], t + 1);
        ans = max(ans, ans1);
    }

    cout << ans << endl;
    return 0;
}
