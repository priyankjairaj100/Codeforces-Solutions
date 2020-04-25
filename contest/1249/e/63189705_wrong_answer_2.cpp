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

int n, c;
int dp[2*MAX][2];
int a[MAX], b[MAX], pre[MAX];


int32_t main(){
    fastio
    cin >> n >> c;
    rep(i,1,n-1,1) cin >> a[i];
    rep(i,1,n-1,1) cin >> b[i];
    dp[1][1] = MOD;
    rep(i,2,n,1){
        dp[i][0] = min(dp[i-1][0], dp[i-1][1]) + a[i-1];
        dp[i][1] = min(dp[i-1][0] + c, dp[i-1][1]) + b[i-1];
    }
    rep(i,1,n,1) cout << min(dp[i][0], dp[i][1]) << " ";
    return 0;
}