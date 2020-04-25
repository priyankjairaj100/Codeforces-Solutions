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
int dp[2*MAX];
int a[MAX], b[MAX], pre[MAX];


int32_t main(){
    fastio
    cin >> n >> c;
    rep(i,1,n-1,1) cin >> a[i];
    rep(i,1,n-1,1) cin >> b[i], pre[i] = b[i];
    int x = 1;
    dp[1] = 0;
    rep(i,2,n-1,1) pre[i] += pre[i-1];

    rep(i,2,n,1){
        int a1 = dp[i-1] + a[i-1], a2 = 0;

        int et = dp[x] + pre[i-1] - pre[x-1];
        
        if(et <= dp[i - 1] + b[i - 1]){
            a2 = et;
        }
        else {a2 = dp[i-1]+b[i-1]; x = i-1;}
        dp[i] = min(a1,a2+c);
    }

    rep(i,1,n,1) cout << dp[i] <<  " ";
    return 0;
}