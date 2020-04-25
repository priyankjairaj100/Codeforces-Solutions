//IWNLA
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

int dp[2005][2005];
int mm = 998244353;

int power(int x, unsigned int y, int p) 
{ 
    int res = 1;      // Initialize result 
  
    x = x % p;  // Update x if it is more than or  
                // equal to p 
  
    while (y > 0) 
    { 
        // If y is odd, multiply x with result 
        if (y & 1) 
            res = (res*x) % p; 
  
        // y must be even now 
        y = y>>1; // y = y/2 
        x = (x*x) % p;   
    } 
    return res; 
}

int32_t main(){
    fastio
    int n,m,k; cin>>n>>m>>k;
    k++;
    rep(i,1,n,1) dp[i][1] = 1;
    rep(i,1,n,1){
        rep(j,2,i,1){
            dp[i][j] = dp[i-1][j] + dp[i-1][j-1]; 
            dp[i][j] %= mm;
        }
    } 
    cout << (((dp[n][k] * power(m-1, k-1, mm))%mm) * m)%mm <<endl;
    return 0;   
}