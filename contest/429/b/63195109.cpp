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

int dp[1005][1005];
int dp1[1005][1005];
int dp2[1005][1005];
int dp3[1005][1005];
int a[1005][1005];

int32_t main(){
    fastio
    int n, m;
     cin >> n >> m;
     rep(i,1,n,1) rep(j,1,m,1) cin >> a[i][j];
     rep(i,1,n,1){
         rep(j,1,m,1){
             dp[i][j] = max(dp[i-1][j], dp[i][j-1]) + a[i][j];
         }
     }
rep(i,1,n,1){
         brep(j,m,1,1){
             dp1[i][j] = max(dp1[i-1][j], dp1[i][j+1]) + a[i][j];
         }
     }
          brep(i,n,1,1){
         rep(j,1,m,1){
             dp2[i][j] = max(dp2[i+1][j], dp2[i][j-1]) + a[i][j];
         }
     }
     brep(i,n,1,1){
         brep(j,m,1,1){
             dp3[i][j] = max(dp3[i+1][j], dp3[i][j+1]) + a[i][j];
         }
     }

     int ans = 0;
     rep(i,2,n-1,1) rep(j,2,m-1,1){
         int k1 = max(ans, dp[i - 1][j] + dp1[i][j + 1] + dp2[i][j - 1] + dp3[i + 1][j]);
         int k2 = max(ans, dp[i][j - 1] + dp1[i - 1][j] + dp2[i + 1][j] + dp3[i][j + 1]);
         ans = max(ans, max(k1, k2));
     }
     cout << ans << endl;
    return 0;
}