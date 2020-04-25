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

int n, a[200005], sum[200005];
vector <int> g[200005];
multiset <int> s[200005];

void dfs(int x, int pp){
    sum[x] += a[x];
    for(auto y: g[x]){
        if( y == pp) continue;
        dfs(y,x);
        sum[x] += sum[y];
    }
}

void dfs1(int x, int pp){
    if(g[x].size() == 1) s[x].insert(a[x]);
    for(auto y: g[x]){
        if(y == pp) continue;
        dfs1(y,x);
        s[x].insert(max(sum[y], *s[y].rbegin()));
    }
}

int32_t main(){
    cin>>n;
    rep(i,1,n,1) cin>>a[i];
    rep(i,1,n-1,1){
        int u,v; cin>>u>>v;
        g[u].pb(v); g[v].pb(u);
    }
    dfs(1,0);
    dfs1(1,0);
    if(s[1].size() < 2){cout<<"Impossible"; return 0;}
    int ans = *s[1].rbegin() + *(--s[1].begin());
    cout<<ans<<endl;
	return 0;
}