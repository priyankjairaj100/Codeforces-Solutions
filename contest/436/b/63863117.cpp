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
 
int ans[2005];
 
int32_t main(){
    fastio
    int n, m, k; 
    cin >> n >> m >> k;
    char c[n+1][m+1];
    rep(i,1,n,1) rep(j,1,m,1) cin >> c[i][j];
    rep(col,1,m,1){
        rep(i,2,n,1){
            int t = i - 1;
            if(i - t >= 1 and c[i-t][col] == 'D') ans[col]++;
            if(i + t <= n and c[i+t][col] == 'U') ans[col]++;
            if(col - t >= 1 and c[i][col - t] == 'R') ans[col]++;
            if(col + t <= m and c[i][col + t] == 'L') ans[col]++;            
        }
    }
    rep(i,1,m,1) cout << ans[i] << " ";
    return 0; 
}