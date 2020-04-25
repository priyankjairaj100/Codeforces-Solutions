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


int32_t main(){
    fastio
    int n; cin >> n;
    int a[n], b[n];
    rep(i,1,n-1,1) cin >> a[i];
    rep(i,1,n-1,1) cin >> b[i];
    int dp[n+1];
    rep(i,0,3,1){
        memset(dp, -1, sizeof(dp));
        dp[1] = i;
        rep(j,2,n,1) rep(k,0,3,1) if( (k|dp[j-1]) == a[j-1] and (k&dp[j-1]) == b[j-1]) dp[j] = k;
        int fg = 0;
        rep(j,1,n,1) if(dp[j] == -1) fg = 1;
        if(fg) continue;
        cout << "YES" << endl;
        rep(j,1,n,1) cout << dp[j] << " ";
        return 0; 
    }
    cout << "NO" << endl;
    return 0;   
}