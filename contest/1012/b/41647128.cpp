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

vector <ll> g[2][200009];
ll vis[2][200009];
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

void dfs(ll x, ll y){
    vis[y][x] = 1;
    for(auto i: g[y][x])
        if(!vis[!y][i]) dfs(i, !y);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    ll n, m , q; cin>>n>>m>>q;
    ll x, y;
    while(q--){
        cin>>x>>y;
        g[0][x].push_back(y);
        g[1][y].push_back(x);
    }
    ll cc = 0;
    fr1(i, n) if(!vis[0][i]) {dfs(i, 0); cc++;}
    fr1(i, m) if(!vis[1][i]) cc++;
    cout<<cc - 1<<endl;
    return(0);
}