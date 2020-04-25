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

int n;
vector <int> g[100005];
map <pii, int> m;

int32_t main(){
    jai_shree_ram
    int t;
    t = 1;
    while(t--){
        cin >> n;
        rep(i,1,n,1) g[i].clear();
        m.clear();
        rep(i,1,n-1,1){
            int u, v;
            cin >> u >> v;
            g[u].pb(v);
            g[v].pb(u);
            m[{min(u, v), max(u, v)}] = i;
        }
        int ans[n];
        set <int> s;
        rep(i,0,n-2,1) s.insert(i);
        rep(i,0,n-1,1) ans[i] = -1;
        
        int m_deg = 0;
        rep(i,1,n,1) m_deg = max(m_deg, (int)g[i].size());
        
        if(m_deg >= 3){
            int v;
            rep(i,1,n,1) if(g[i].size() >= 3){
                v = i;
                break;
            }
            int x1 = g[v][0], x2 = g[v][1], x3 = g[v][2];
            ans[m[{min(v, x1), max(v, x1)}]] = 0;
            ans[m[{min(v, x2), max(v, x2)}]] = 1;
            ans[m[{min(v, x3), max(v, x3)}]] = 2;
            s.erase(0);
            s.erase(1);
            s.erase(2); 
        }

        rep(i,1,n-1,1){
            if(ans[i] == -1) {ans[i] = *s.begin(); s.erase(ans[i]);} 
        }
        rep(i,1,n-1,1) cout << ans[i] << endl;
    }
    return 0; 
}