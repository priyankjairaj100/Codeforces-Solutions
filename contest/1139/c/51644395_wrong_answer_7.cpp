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

long long square(long long x)
{

return (x*x)%MOD;
}

long long power(long long base, long long expo)
{
    if (base == 0)
        return 0;
    if (expo == 0)
        return 1;
    else
    {
        if (expo % 2 == 0)
            return square(power(base, expo / 2)) % MOD;
        else
            return (base * power(base, expo - 1)) % MOD;
    }
}

void dfs(int x){
    cc++;
    vis[x] = 1;
    for(auto y: g[x]){
        if(!vis[y]) dfs(y);
    }
}

void dfsu(){
    rep(i,1,n,1) if(!vis[i]) { cc = 0; dfs(i); ans -= power(cc, k); ans%=MOD; }
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
    ans = power(n,k);ans%=MOD;
    dfsu();
    cout<<ans<<endl;
    return 0;  
}