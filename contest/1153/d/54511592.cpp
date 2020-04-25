//la_flame_ never dies out.

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

int n, a[300005], dp[300005], k = 0;
vector <int> g[300005];

void dfs(int x){
    for(auto y: g[x]){
        dfs(y);
        if(a[x]) dp[x] = min(dp[y], dp[x]);   
        else dp[x] += dp[y];
    }
}

int32_t main()
{
    fastio
    cin>>n;
    rep(i,1,n,1) cin>>a[i];
    rep(i,2,n,1){
        int x; cin>>x;
        g[x].pb(i);
    }
    rep(i,1,n,1) {if(g[i].size() == 0){k++; dp[i] = 1;} else if(a[i]) dp[i] = MOD;}
    dfs(1);
    cout<< k + 1 - dp[1] <<endl;
    return 0; 
}