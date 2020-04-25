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
#define endl '\n' // for interactive problems comment it out or use fflush
int MAX = 1e5 + 5;
int MOD = 1e9 + 7;
////////////////////////////////

int n, m, ps, p[200005];
vector <int> g[200005], g1[200005];
int t, vis[200005], dis[200005];

void djikstra(int v){
    rep(i,0,n,1) dis[i] = MOD;
    dis[t] = 0;
    set <pii> s;
    s.insert({0, t});

    while(s.size()){
        int u = (*s.begin()).second;
        s.erase(s.begin());
        for(auto pp: g1[u])
            if(dis[pp] > dis[u] + 1){
                s.erase({dis[pp], pp});
                dis[pp] = dis[u] + 1;
                s.insert({dis[pp], pp});
            }
    }
}   


int32_t main(){
    jai_shree_ram
    cin >> n >> m;
    rep(i,1,m,1){
        int u, v;
        cin >> u >> v;
        g1[v].pb(u);
        g[u].pb(v);
        //g[v].pb(u);
    }
    cin >> ps;
    rep(i,1,ps,1) cin >> p[i];
    t = p[ps];
    djikstra(t);
    //rep(i,1,n,1) cout << dis[i] << endl;


    int ans_max = 0, ans_min = 0;

    rep(i,1,ps-1,1){
        int curr = p[i], to = p[i+1];
        int tot = 0;
        for(auto nxt: g[curr]) if(dis[nxt] == dis[curr] - 1) tot++;
        
        if(dis[to] == dis[curr] - 1) tot--;
        else ans_min++;
        
        ans_max += tot;
    }
    cout << ans_min << " " << ans_max << endl;
    return 0; 
}