//IWNLA
#include <bits/stdc++.h>
#include <string>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define int long long
typedef long double LD;
const int MAX = 1e5 + 5;
const int MOD = 1e9 + 7;
const LD EPS = 1e-10;
const LD PI = acos(-1.0);
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


int32_t main(){
	fastio
    int t, k; cin >> t >> k;
    int dp[100005];
    dp[0] = 1, dp[1] = 1 + (k == 1);
    rep(i,2,100000,1){
        dp[i] = dp[i-1];
        if(i>=k) dp[i] += dp[i-k], dp[i] %= MOD;
    }
    dp[0] = 0;
    rep(i,1,100000,1) dp[i]+=dp[i-1], dp[i]%=MOD;
    while(t--){
        int a, b; cin >> a >> b;
        if(dp[b] >= dp[a-1]) cout << dp[b] - dp[a-1] << endl;
        else cout << dp[b] - dp[a-1] + MOD << endl;
    }    
    return 0; 
}