// Kyu bhai, kyu
#include <bits/stdc++.h>
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

int n, c[5009], dp[5009][5009]
bool vis[5009][5009];

int solve(int l, int r){
    if(vis[l][r]) return dp[l][r];
    vis[l][r] = 1;
    if(l == r) return dp[l][r] = 0;
    dp[l][r] = min(solve(l, r-1) + 1 , solve(l+1, r) + 1);
    if(c[l] == c[r]) dp[l][r] = min(dp[l][r] , solve(l+1, r-1) + 1);
    return dp[l][r];
}

int32_t main()
{
    fastio
    cin >> n;
    int m = 0;
    for(int i = 1, j = 1; i <= n; i++, j++) {cin>>c[j]; if(c[j] == c[j-1]) j--; else m++;}
    n = m;
    int ans = solve(1,n);
    cout<<ans<<endl;
    return 0; 
}