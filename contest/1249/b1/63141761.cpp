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
/////////////////////////////////

vector<int> g[2*MAX];
 int n;
int a[2*MAX];
int ans[2*MAX];
int vis[2*MAX];
vector <int> temp;

void dfs(int x){
    vis[x] = 1;
    temp.pb(x);
    for(auto y: g[x]){
        if(!vis[y]) dfs(y);
    }
}

int32_t main(){
    fastio
    int q; cin >> q;
    while(q--){
        cin >> n;
        rep(i,1,n,1) {ans[i] = 0; g[i].clear();}
        rep(i,1,n,1){
            cin >> a[i];
            if(i == a[i]) ans[i] = 1;
            else{
                g[i].pb(a[i]);
            }
        }
        rep(i,1,n,1) vis[i] = 0;
        rep(i,1,n,1){
            if(!vis[i]) dfs(i);
            int sz = temp.size();
            for(auto z: temp) ans[z] = sz;
            temp.clear();
        }
        rep(i,1,n,1) cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}