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
#define endl '\n'
const int MAX = 1e5 + 5;
const int MOD = 1e9 + 7;
//////////////////////////////////

int dp[MAX];

int32_t main(){
    fastio
    dp[1] = 1;
    dp[2] = 2;
    rep(i,3,1e5,1) {
        dp[i] = dp[i-1] + dp[i-2];
        dp[i]%=MOD;
        }

    string s;
    cin >> s;
    s += '#';
    int n = s.length();
    int curr = 0;

    vector <int> uu, nn;
    
    rep(i,0,n-1,1){
        if(s[i] != 'u') {if(curr)uu.pb(curr); curr = 0;}
        else curr++;
    }

    curr = 0;
    rep(i,0,n-1,1){
        if(s[i] != 'n') {if(curr) nn.pb(curr); curr = 0;}
        else curr++;
    }
    int x = 0;
    
    rep(i,0,n-1,1) if(s[i] == 'm' or s[i] == 'w') x++;
    if(x){
        cout <<"0" << endl;
        return 0;
    }
    
   // for(auto y: uu) cout << y << endl;


    int ans = 1;
    for(auto y: uu){
        ans *= dp[y];
        ans%= MOD;
    }

    for (auto y : nn)
    {
        ans *= dp[y];
        ans %= MOD;
    }
    cout << ans << endl;
    return 0; 
}