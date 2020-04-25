#include <bits/stdc++.h>
#include <string>
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
//using namespace __gnu_pbds;
//#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
//#define ordered_multiset tree<int, null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>
using namespace std;
#define int long long
#define fastio  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, a, b, d) for (int i = a; i <= b; i += d)
#define brep(i, a, b, d) for (int i = a; i >= b; i -= d)
#define pb push_back
#define all(x) x.begin(), x.end()
#define pii pair<int, int>
#define endl '\n'
const int MAX = 1e5 + 5;
const int MOD = 1e17 + 7;
////////////////////////////////

int n;
pii a[2*MAX];
int dp[2*MAX][2];

int32_t main(){
    fastio
    cin >> n;
    rep(i,1,n,1){
        cin >> a[i].first;
        a[i].second = i;
    }
    sort(a+1,a+1+n);
    if(n <= 5){
        cout << a[n].first - a[1].first << " " << 1 << endl;
        rep(i,1,n,1) cout << 1 << " ";
        cout << endl;
        return 0;
    }
    dp[1][0] = MOD; dp[1][1] = MOD;
    dp[2][0] = MOD; dp[2][1] = MOD;
    dp[3][0] = a[3].first - a[1].first; dp[3][1] = MOD;
    dp[4][0] = MOD; dp[4][1] = a[4].first - a[1].first;
    dp[5][0] = MOD; dp[5][1] = MOD;
    dp[6][0] = dp[3][0] + (a[6].first - a[4].first);
    dp[6][1] = MOD;

    rep(i,7,n,1){
        if(min(dp[i-3][0], dp[i-3][1])+(a[i].first - a[i-2].first) <= min(dp[i-4][1], dp[i-4][0]) + (a[i].first - a[i-3].first)){
            dp[i][0] = min(dp[i-3][0], dp[i-3][1])+(a[i].first - a[i-2].first);
            dp[i][1] = MOD;
        }
        else{
            dp[i][0] = MOD;
            dp[i][1] = min(dp[i-4][1], dp[i-4][0]) + (a[i].first - a[i-3].first);
        }
    }
    cout << min(dp[n][0], dp[n][1]) << endl;
    int ans[n+1];
    int curr = 1;
    brep(i,n,1,1){
        if(dp[i][0] <= dp[i][1]){
            ans[a[i].second] = curr;
            ans[a[i-1].second] = curr;
            ans[a[i-2].second] = curr;
            i-=2;
            curr++;
        }
        else{
            ans[a[i].second] = curr;
            ans[a[i-1].second] = curr;
            ans[a[i-2].second] = curr;
            ans[a[i-3].second] = curr;
            i-=3;
            curr++;
        }
    }
    rep(i,1,n,1) cout << ans[i] << " ";
    return 0;
}