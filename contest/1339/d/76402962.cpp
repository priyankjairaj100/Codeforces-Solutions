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
int MOD = 1e16 + 7;
////////////////////////////////
int n, r, ln;
vector <int> g[100005];
int f;
int val[100005];

dfs(int x, int pp){
    for(auto y: g[x]){
        if(y == pp) continue;
        val[y] = val[x] + 1;
        dfs(y, x);
    }
}

 
int32_t main(){
    jai_shree_ram
    cin >> n;
    rep(i,1,n-1,1){
        int u, v;
        cin >> u >> v;
        g[u].pb(v);
        g[v].pb(u);
    }
    set <int> s;

    rep(i,1,n,1) if(g[i].size() == 1){
        ln++;
        s.insert(g[i][0]);
    }
    int max_ans = n-1 - ln + s.size();
    int min_ans;
    r = *s.begin();
    s.clear();
    dfs(r, 0);

    rep(i,1,n,1) if(g[i].size() == 1) s.insert(val[i]%2);
    if(s.size() == 1) min_ans = 1;
    else min_ans = 3;
    cout << min_ans << " " << max_ans << endl; 
    return 0; 
}