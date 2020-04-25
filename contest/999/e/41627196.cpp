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

struct{
    ll count = 0;
    ll index = -1;
} typedef lul;

bool myfn(lul i, lul j) { return i.count < j.count; }

vector <int> g[5005];
ll reachs[5005];
ll vis[5005];


ll V, E, s;
lul cnt[5005];

void dfs1(ll start, ll x){
    if(!reachs[x]) cnt[start].count++;
    vis[x] = 1;
    for(auto i: g[x]) if(!vis[i]) dfs1(start, i);
}

void dfs(ll x){
    reachs[x] = 1;
    for(auto i: g[x])
        if(!reachs[i])
            dfs(i);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cin>>V>>E>>s;
    for(ll i = 1; i <= E; ++i){
        ll x,y; cin>>x>>y; 
        g[x].push_back(y);
    }
    dfs(s);
    fr1(i,V) {cnt[i].index = i; if(!reachs[i]){ fr1(j, V) vis[j] = 0; dfs1(i,i);}}
    sort(cnt + 1, cnt + V + 1, myfn);    
    ll ans = 0;
    for(ll i = V; i >= 1; --i) if(!reachs[cnt[i].index] ){dfs(cnt[i].index); ans++;}
    cout<<ans<<endl;
    return(0);
}