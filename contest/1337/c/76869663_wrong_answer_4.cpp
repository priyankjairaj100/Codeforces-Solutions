#include <bits/stdc++.h>
#include <string>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define pii pair<int, int>
#define ordered_set tree<int, null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>
//#define ordered_multiset tree<int, null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>
#define int long long
#define jai_shree_ram  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, a, b, d) for (int i = a; i <= b; i += d)
#define brep(i, a, b, d) for (int i = a; i >= b; i -= d)
#define pb push_back
#define all(x) x.begin(), x.end()
//#define endl '\n' // for interactive problems comment it out or use fflush
int MAX = 1e5 + 5;
int MOD = 1e9 + 7;
////////////////////////////////

int n, k;
vector <int> g[200005];
pii d[200005];
int dz[200005];
int par[200005];


dfs(int u, int pp){
    for(auto y: g[u]){
        if(y == pp) continue;
        par[y] = u;
        d[y] = {d[u].first + 1LL, y};
        dfs(y, u);
    }
}

 
int32_t main(){
    jai_shree_ram
    cin >> n >> k;    
    rep(i,1,n-1,1){
        int u, v;
        cin >> u >> v;
        g[u].pb(v);
        g[v].pb(u);
    }
    d[1] = {0, 1};
    dfs(1, 0);
    int ans = 0;
    set <pair<pii, int>> s;


    rep(i,1,n,1) s.insert({{d[i].first, d[i].first}, d[i].second});

    while(k--){
        auto x = *s.rbegin();
        ans += (x.first).first;
        int v = par[x.second];

        pair<pii, int> y = {{d[v].first, d[v].first}, d[v].second};
        s.erase(y);
        s.insert({{d[v].first -1, d[v].first}, d[v].second});
        s.erase(x);
    }

    cout << ans << endl;
    return 0; 
}