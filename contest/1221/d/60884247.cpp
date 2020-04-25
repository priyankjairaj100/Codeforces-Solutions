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

int a[300005], b[300005];
int n;
const int lim = 1000000000000000005;

int32_t main(){
    fastio
    int q; cin >> q;
    while(q--){
        cin >> n;
        rep(i,1,n,1) cin >> a[i] >> b[i];
        int dp[n+5][3];
        rep(i,0,n+1,1) rep(j,0,2,1) dp[i][j] = lim;
        dp[1][0] = 0; dp[1][1] = b[1]; dp[1][2] = 2*b[1];
        rep(i,2,n,1){
            rep(x,0,2,1){
                rep(y,0,2,1){
                    if(a[i] + x == a[i-1] + y);
                    else dp[i][x] = min(dp[i][x], dp[i-1][y] + x*b[i]);
                }
            }
        }
        cout << min(min(dp[n][0], dp[n][1]), dp[n][2]) << endl;
    }
    return 0;
}
