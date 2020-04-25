//I will become the king of pirates.. no wait
#include <bits/stdc++.h>
#include <string>
using namespace std;

#define int long long
typedef long double LD;

const int MAX = 1e5 + 5;
const int MOD = 1e9 + 7;
const LD EPS = 1e-10;
const LD PI = acos(-1.0);
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define rep(i, a, b, d) for (int i = a; i <= b; i += d)
#define brep(i, a, b, d) for (int i = a; i >= b; i -= d)
#define pb push_back
#define pii pair<int, int>



int32_t main()
{
    fastio
    int t; cin>>t;
    while(t--){
        int n, k; cin>>n>>k;
        int dp[n+5]; rep(i,1,n+4,1) dp[i] = 0;
        dp[0] = 0; dp[1] = 1; dp[2] = 1;
        rep(i,3,n,1){
            if(dp[i-1] == 0 or dp[i-2] == 0 or (i-k>=0 and dp[i-k] == 0)) dp[i] = 1;
            else dp[i] = 0;
        }
        if(dp[n] == 1) cout<<"Alice"<<endl;
        else cout<<"Bob" <<endl;
    }
    return 0;
}