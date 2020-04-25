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
const int lim = 1<<22;
int dp[lim][22];
int m[lim];

int32_t main(){
    fastio
    int n; cin >> n;
    int a[n+1]; rep(i,1,n,1) {cin >> a[i]; m[a[i]]++;}
    
    rep(mask, 0, lim-1, 1){
        if(m[mask]) dp[mask][0] =  mask;
    
        if(mask&1 and m[mask^1]) dp[mask][0] = mask^1;

        rep(i,1,21,1){

            if(dp[mask][i-1]) dp[mask][i] = dp[mask][i-1];
            
            if(mask & (1 << i))
                if(dp[mask ^ (1<<i)][i-1])
                    dp[mask][i] = dp[mask ^ (1<<i)][i-1];
        }
    }

    rep(i,1,n,1){
        int curr = lim - 1 - a[i];
        if(dp[curr][21]) cout << dp[curr][21] << " ";
        else cout << -1 << " ";
    }
    
    return 0;
}