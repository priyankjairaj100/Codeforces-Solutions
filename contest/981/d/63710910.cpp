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

int dp[55][55], a[55], mask;

int ok(int n, int k){
    if(!n) return (!k);
    if(!k) return 0;
    int &ans = dp[n][k];
    if(~ans) return ans;
    ans = 0;
    int sum = 0;
    brep(i,n,1,1){
        sum += a[i];
        if((sum & mask) == mask) ans |= ok(i-1, k-1);
    }
    return ans;
}

int32_t main(){
    fastio
    int n, k; cin >> n >> k;
    rep(i,1,n,1) cin >> a[i];
    brep(i,60,0,1){
        memset(dp,-1,sizeof(dp));
        mask |= (1LL << i);
        if(!ok(n, k)) mask ^= (1LL << i);
    }
    cout << mask;
    return 0; 
}