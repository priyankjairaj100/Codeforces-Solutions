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

int m[10000][65];
vector <int> g[10000];
vector <int> u[10000];
int vis[10000];
int id = 0;

void dfs(int x){
    vis[x] = 1;
    u[id].pb(x);
    for(auto y: g[x]){
        if(!vis[y]) dfs(y);
    }
}

int32_t main(){
    fastio
    int n; cin >> n;
    int a[n+1], b[n+1];
    rep(i,1,n,1) cin >> a[i];
    rep(i,1,n,1) cin >> b[i];
    rep(i,1,n,1){
        int c = a[i];
        rep(j,1,60,1){
            if(c & (1LL << (j - 1))) m[i][j] = 1;
        }
    }
    set <int> bl;
    rep(j,1,60,1){
        int nu = 0;
        rep(i,1,n,1){
            if(m[i][j]) nu++;
        }
        if(nu == 1){
            rep(i,1,n,1) if(m[i][j]) bl.insert(i);
        }
    }
    rep(j,1,60,1){
        vector <int> v;
        rep(i,1,n,1){
            if(m[i][j] and bl.find(i) == bl.end()) v.pb(i);
        }
        if(v.size() <= 1) continue;
        int z = v.size();
        rep(i,1,z-1,1){
            g[v[i]].pb(v[i-1]);
            g[v[i-1]].pb(v[i]);
        }
    }
    rep(i,1,n,1){
        if(!vis[i]) dfs(i);
        id++;
    }
    id--;
    int fi = 0, mx = 0;
    rep(i,0,id,1){
        int ans = 0;
        for(auto y: u[i]) ans += b[y];
        mx = max(mx, ans);
    }   
    cout << mx << endl;
    return 0;
}
