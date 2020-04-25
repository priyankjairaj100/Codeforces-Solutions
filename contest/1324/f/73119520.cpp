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
#define endl '\n'
int MAX = 1e5 + 5;
int MOD = 1e9 + 7;
////////////////////////////////

vector <int> g[200005];
int n;
int a[200005], dp[200005], ans[200005];

void dfs(int x, int pp){
    for(auto y : g[x]){
        if(y == pp) continue;
        dfs(y, x);
        if(dp[y] > 0) dp[x] += dp[y];
    }
}

void dfs1(int x, int pp){
    ans[x] = dp[x];
    for(auto y: g[x]){
        if(y == pp) continue;
        dp[x] -= max(0LL, dp[y]);
        dp[y] += max(0LL, dp[x]);
        dfs1(y, x);
        dp[y] -= max(0LL, dp[x]);
        dp[x] += max(0LL, dp[y]);
    }
}

int32_t main(){
    jai_shree_ram
    cin >> n;
    rep(i,1,n,1) {
        cin >> a[i];
        if(a[i]) dp[i] = 1;
        else dp[i] = -1; 
    }
    rep(i,1,n-1,1){
        int u, v;
        cin >> u >> v;
        g[u].pb(v);
        g[v].pb(u);
    }

    dfs(1, -1);
    dfs1(1, -1);
    rep(i,1,n,1) cout << ans[i] << " ";
    cout << endl;
    return 0; 
}