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

int dp[2*MAX][10];

int32_t main(){
    fastio
    int n; cin >> n;
    int a[2*MAX];
    rep(i,1,n,1) cin >> a[i];
    rep(i,1,5,1) dp[1][i] = i;
    rep(i,2,n,1){
        if(a[i] > a[i-1]){
            rep(j,1,5,1) if(dp[i-1][j]) rep(k,j+1,5,1) dp[i][k] = j; 

        }
        else if(a[i] < a[i-1]){
            rep(j,1,5,1) if(dp[i-1][j]) rep(k,1,j-1,1) dp[i][k] = j;
        }
        else{
            rep(j,1,5,1) if(dp[i-1][j]) rep(k,1,5,1) if(j != k) dp[i][k] = j;
        }
    }
    int fg = 0, id = 0;
    rep(i,1,5,1) if(dp[n][i]) fg = 1, id = i;
    if(!fg){
        cout << "-1" << endl;
        return 0;
    } 
    vector <int> v;
    v.pb(id);
    brep(i,n,2,1){
        v.pb(dp[i][id]);
        id  = dp[i][id];
    }
    reverse(all(v));
    for(auto p: v) cout << p << " ";
    return 0;    
}