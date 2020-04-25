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

int n, e, cc;
vector <int> g[500005];
int vis[500005];

void dfs(int i){
    vis[i] = 1;
    for(auto j: g[i]){
        if(!vis[j]) dfs(j);
    }
}

int32_t main(){
    jai_shree_ram
    cin >> n;
    int l[n+1], r[n+1];
    rep(i,1,n,1) cin >> l[i] >> r[i];
    map <int, int> ml, mr;
    rep(i,1,n,1) ml[l[i]] = i, mr[r[i]] = i;
    set <int> sl;

    rep(i,1,2*n,1){
        if(ml[i]){
            sl.insert(l[ml[i]]);
        }
        if(mr[i]){
            sl.erase(l[mr[i]]);
            auto ptr = sl.upper_bound(l[mr[i]]);
            while(ptr != sl.end()){
                e++;
                if(e >= n){
                    cout << "NO" << endl;
                    return 0;
                }
                int id = *ptr;
                g[ml[id]].pb(mr[i]);
                g[mr[i]].pb(ml[id]);
                ++ptr;
            }
        }
    }

    rep(i,1,n,1){
        if(!vis[i]) dfs(i), cc++;
    }

    // rep(i,1,n,1){
     //   cout << i << endl;
     //   for(auto x: g[i]) cout << x << " ";
      //  cout << endl << "********" << endl;
    //}

    if(cc == 1) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0; 
}