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

int n, c[5009], dp[5009][5009];

int solve(int l, int r, int col){
    int &pa = dp[l][r];
    if(pa != -1) return pa;
    pa = MOD;
    if(l == 1 and r == n) pa =  0;
    else if(l == 1 and r != n) pa = c[r+1] == col? solve(l, r+1, col) : solve(l, r+1, c[r+1]) + 1;
    else if(l != 1 and r == n) pa = c[l-1] == col? solve(l-1, r, col) : solve(l-1, r, c[l-1]) + 1;
    else if(c[l-1] == col) pa = solve(l-1, r, col);
    else if(c[r+1] == col) pa = solve(l, r+1, col);
    else pa = min(solve(l-1, r, c[l-1]) + 1, solve(l, r+1, c[r+1]) + 1);
    //dp[l][r] = pa;
    return pa;
}

int32_t main()
{
    fastio
    memset(dp, -1, sizeof(dp));
    cin >> n;
    rep(i,1,n,1) cin>>c[i];
    int ans = MOD;
    rep(i,1,n,1) ans = min(ans, solve(i,i,c[i]));
    cout<<ans<<endl;
    return 0; 
}