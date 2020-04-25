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
 
const int lim = 1 << 19;
int dp[lim][21];
int m[lim];
 
 
int32_t main(){
    fastio
    int n; cin >> n;
    int a[n+1]; rep(i,1,n,1) {cin >> a[i]; m[a[i]] = i;}
    int ans[n+1]; rep(i,1,n,1) ans[i] = -1;
 
    rep(i,1,n,1){
        int curr = lim - 1 - a[i];
        for(int j = curr; j>0; j = (j-1) & curr){
            if(m[j]) ans[i] = j, ans[m[j]] = a[i];
        }
    }
    rep(i,1,n,1) cout << ans[i] << " ";
    return 0;
}