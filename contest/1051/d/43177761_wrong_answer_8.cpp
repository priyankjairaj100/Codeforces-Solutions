#include <bits/stdc++.h>
using namespace std;
typedef long long LL; 
#define fr1(i,n) for(LL i = 1; i<=n ; ++i)
LL dp[2009][2009][2];
int main() {
    LL n, k; cin>>n>>k;
    dp[1][1][0] = 2; dp[1][2][1] = 2;
    fr1(i,n)
      fr1(j,k){
        dp[i+1][j][0] += (dp[i][j][0] + 2*dp[i][j][1]);
        dp[i+1][j][1] += dp[i][j][1];
        dp[i+1][j+1][0] += dp[i][j][0];
        dp[i+1][j+1][1] += 2*dp[i][j][0];
        dp[i+1][j+2][1] += dp[i][j][1];
      }
      cout<<(dp[n][k][1]+dp[n][k][0])%998244353<<endl;
	return 0;
}