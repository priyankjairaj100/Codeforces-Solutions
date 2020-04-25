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

int n, m;
int dp[MAX], res[MAX];
vector <pii> g[MAX];

int check(int p){
    if(dp[p]) return dp[p];
    dp[p] = 1;
    for(auto x: g[p]){
        int nxt = x.first;
        if(check(nxt) + 1 >= dp[p]){
            dp[p] = dp[nxt] + 1;
            res[p] = max(res[p], x.second);
        }
    }
    return dp[p];
}

int32_t main(){
    fastio
    cin >> n >> m;
    rep(i,1,m,1){
        int u, v; 
        cin >> u >> v;
        g[u].pb({v, i});
    }
    rep(i,1,n,1){
        if(check(i) == n){
            cout << res[i] << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;   
}