/*|-----------------------------------------------|
  | Problem solved by Priyank Jairaj, BITS Pilani |
  | Github: priyankjairaj100, StopStalk: la_flame |
  |-----------------------------------------------|*/

#include<bits/stdc++.h>
using namespace std;
const long long MOD=1000000007;
#define ll long long
#define el "\n"
ll modl(const ll input, const ll ceil) {
    return input >= ceil ? input % ceil : input;}
#define fr(i,n) for(ll i=0;i<n;++i)
#define fr1(i,n) for(ll i=1;i<=n;++i)
bool myfn(int i, int j) { return i < j; }

ll n;
ll ans = 0;

ll gcd(ll a, ll b)
{

    if (a == 0 || b == 0)
        return 0;
    if (a == b)
        return a;
    if (a > b)
        return gcd(a - b, b);
    return gcd(a, b - a);
}

void dfs1(ll x,vector <ll> g[],ll vis[]){
    vis[x]=1;
    for(auto i:g[x]){
        if(!vis[i]){
            dfs1(i,g,vis);
            }
    }
}

void dfs(vector <ll> g[]){
    ll vis[n+1]; fr(i,n+1)vis[i]=0;
    ans=0;
    for(ll i = 1; i <= n; i++)
    if(!vis[i]){
        ans++;
    dfs1(i,g,vis);}
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    ll m,s;
        cin>>n>>m>>s;
        vector <ll> g[n+5];
        fr(i,m){
            ll u,v;
            cin>>u>>v;
            g[u].push_back(v);
           // g[v].push_back(u);
        }
        dfs(g);
        cout<<ans-1<<el;
    return(0);
}