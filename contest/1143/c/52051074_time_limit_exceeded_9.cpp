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

int n; vector <int> g[100005]; int root;
int c[100005]; int par[100005];
map <pii,int> mp;

int32_t main()
{
    fastio
    int n; cin>>n;
    rep(i,1,n,1){int p; cin>>p>>c[i]; par[i] = p; if(p == -1){ root = i; continue; } g[p].pb(i); mp[{p,i}]= 1;}
    int f =0;
    rep(i,1,n,1){
        int x = 0;
        if(c[i] == 1){ 
            for(auto y: g[i]){ if(mp[{i,y}] == 0) continue; if(c[y] == 0){ x = 1; break;} }
            if(x == 1){continue;}
            else{ f = 1;
                cout<<i<<" ";
                mp[{par[i],i}] = 0;
                for(auto y: g[i]){ par[y] = par[i];  g[par[i]].pb(y); mp[{par[i],y}] = 1;}
                g[i].clear(); 
            } 
         }
    }
    if(f == 0){cout<<-1<<endl; return 0;}
    return 0; 
}