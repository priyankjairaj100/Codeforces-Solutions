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

set <int> g[300005];
int col[300005], bp;

void dfs(int x){
    for(auto y: g[x]){
        if(col[y] == -col[x]) continue;
        else if(col[y] == col[x]) bp = 1;
        else if(!col[y]) col[y] = -col[x], dfs(y);
    }
}

int32_t main()
{
    fastio
    int n, m; cin>>n>>m;
    set <int> s;
    int u, v;
    rep(i,1,m,1){
        cin>>u>>v;
        if(u == v) {s.insert(u); continue;}
        s.insert(u); s.insert(v);
        g[u].insert(v); g[v].insert(u);
    }
    if(s.size() <= 3) {cout<<"YES"<<endl; return 0;}
    col[u] = 1;
    dfs(u);
    if(bp) {cout<<"NO"; return 0;}
    int p = 0, q = 0, r = 0;
    for(auto z : s){if(col[z] == 1)p++; if(col[z] == 0)r++; if(col[z] == -1)q++;}
    if(r) {cout<<"NO"; return 0;}
    if(p == 2 or q == 2) {cout<<"YES"<<endl; return 0;}
    cout<<"NO"<<endl;
    return 0; 
}