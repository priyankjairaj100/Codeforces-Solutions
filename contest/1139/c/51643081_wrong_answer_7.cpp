//la_flame_ never dies out.

#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef long double LD;

const int MAX	= 1e5 + 5;
const int MOD	= 1e9 + 7;
const LD  EPS	= 1e-10;
const LD PI = acos(-1.0);
#define fastio			ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define rep(i,a,b,d) for(int i = a; i<=b; i+=d)
#define brep(i,a,b,d) for(int i = a; i>=b; i-=d)
#define pb push_back
#define pii pair<int, int>

int n,k; vector <int> g[100005];
int ans = 0;
int vis[100005];
int cc = 0;


int modpow(int base, int exp) {
  base %= MOD;
  int result = 1;
  while (exp > 0) {
    if (exp & 1) result = (result * base) % MOD;
    base = (base * base) % MOD;
    exp >>= 1;
  }
  return result;
}

void dfs(int x){
    cc++;
    vis[x] = 1;
    for(auto y: g[x]){
        if(!vis[y]) dfs(y);
    }
}

void dfsu(){
    rep(i,1,n,1) if(!vis[i]) { cc = 0; dfs(i); ans -= modpow(cc, k); ans%=MOD; }
}


int32_t main(){
    fastio
    cin>>n>>k;
    rep(i,1,n-1,1){
        int u,v,x; cin>>u>>v>>x;
        if(x == 1) continue;
        g[u].pb(v);
        g[v].pb(u);
    }
    ans = modpow(n,k); ans%=MOD;
    dfsu();
    cout<<ans<<endl;
    return 0;  
}