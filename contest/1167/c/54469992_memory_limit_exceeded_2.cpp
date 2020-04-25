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

int n,m, ans = 0;
vector <int> g[500005];

void dfs(int x, int pp){
    ans++;
    for(auto y: g[x]){
        if(y == pp) continue;
        dfs(y, x);
    }
}

int32_t main()
{
    fastio
    cin>>n>>m;
    rep(i,1,m,1){
        int k, x; cin>>k; if(!k) continue;
        cin>>x; k--;
        while(k--){
            int y; cin>>y;
            g[x].pb(y);
            g[y].pb(x);
            x = y;
        }
    }
    rep(i,1,n,1){ ans = 0; dfs(i, -1); cout<<ans<<" "; }
    return 0; 
}