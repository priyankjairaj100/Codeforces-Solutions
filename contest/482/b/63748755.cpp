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
//////////////////////////////////
 
int w[MAX][32], yy[MAX][32];
 
int32_t main(){
    fastio
    int n, m;
    cin >> n >> m;
    int a[n+1];
    vector <pair <pii, int>> vv;
    
    rep(i,1,m,1){
        int x, y, z;
        cin >> x >> y >> z;
        rep(j,0,31,1){
            if(z & (1ll << j)) yy[y+1][j]--, yy[x][j]++;
            else vv.pb({{x, y}, j});
        }
    }
 
    rep(j,0,31,1) rep(i,1,n,1) yy[i][j] += yy[i-1][j];
 
    rep(i,1,n,1){
        int xx = 0;
        rep(j,0,31,1){
            if(yy[i][j]) xx |= (1LL << j);
        }
        a[i] = xx;
    }
 
    rep(i,1,n,1){
        rep(j,0,31,1){
            if(!(a[i] & (1LL << j))) w[i][j] = 1;
            w[i][j] += w[i-1][j];
        }
    }
 
    for(auto tx: vv){
        int l = (tx.first).first;
        int r = (tx.first).second;
        int p = tx.second;
 
        int val = w[r][p] - w[l-1][p];
        if(!val){
            cout <<"NO" <<endl;
            return 0;
        }
    }
    
    cout << "YES" << endl;
    rep(i,1,n,1) cout << a[i] << " ";
    return 0; 
}