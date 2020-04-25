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
int MOD = 1e19 + 7;
////////////////////////////////

int n, m, a, b, c;
vector <int> g[200005];
int pri[200005], da[200005], db[200005], dc[200005], pre[200005];

void djikstraA(){
    rep(i,0,n,1) da[i] = MOD;
    da[a] = 0;
    set <pii> s;
    s.insert({0, a});
 
    while(s.size()){
        int u = (*s.begin()).second;
        s.erase(s.begin());
        for(auto p: g[u])
            if(da[p] > da[u] + 1){
                s.erase({da[p], p});
                da[p] = da[u] + 1;
                s.insert({da[p], p});
            }
    }
}
void djikstraB(){
    rep(i,0,n,1) db[i] = MOD;
    db[b] = 0;
    set <pii> s;
    s.insert({0, b});
 
    while(s.size()){
        int u = (*s.begin()).second;
        s.erase(s.begin());
        for(auto p: g[u])
            if(db[p] > db[u] + 1){
                s.erase({db[p], p});
                db[p] = db[u] + 1;
                s.insert({db[p], p});
            }
    }
}
void djikstraC(){
    rep(i,0,n,1) dc[i] = MOD;
    dc[c] = 0;
    set <pii> s;
    s.insert({0, c});
 
    while(s.size()){
        int u = (*s.begin()).second;
        s.erase(s.begin());
        for(auto p: g[u])
            if(dc[p] > dc[u] + 1){
                s.erase({dc[p], p});
                dc[p] = dc[u] + 1;
                s.insert({dc[p], p});
            }
    }
}

int32_t main(){
    jai_shree_ram
    int t;
    cin >> t;
    while(t--){
        rep(i,1,200004,1) g[i].clear();
        cin >> n >> m >> a >> b >> c;
        rep(i,1,m,1) cin >> pri[i];
        rep(i,1,m,1){
            int u, v;
            cin >> u >> v;
            g[u].pb(v);
            g[v].pb(u);
        }
        djikstraA();
        djikstraB();
        djikstraC();
        sort(pri+1,pri+1+m);
        pre[0] = 0;
        rep(i,1,m,1) pre[i] = pri[i] + pre[i-1];
        int ans = MOD;

        rep(i,1,n,1){
            int ax = da[i], bx = db[i], cx = dc[i];
            if(ax + bx + cx > m) continue;
            int tot = 2*pre[bx] + (pre[bx+ax+cx] - pre[bx]);
            //cout << i << " " << ax << " " << bx << " " << cx << " " << tot << endl;
            ans = min(ans, tot);
        }
        cout << ans << endl;
    }
    return 0; 
}