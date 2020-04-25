//la_flame_ never dies out.

#include <bits/stdc++.h>
using namespace std;
 
typedef long long LL; 
typedef long double LD;

const int MAX	= 1e5 + 5;
const int MOD	= 1e9 + 7;
const LD  EPS	= 1e-10;
const LD PI = acos(-1.0);
#define fastio			ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define rep(i,a,b,d) for(LL i = a; i<=b; i+=d)
#define brep(i,a,b,d) for(LL i = a; i>=b; i-=d)
#define pb push_back
#define pii pair<LL, LL>

vector <LL> x[150005];
LL c[150005];

int main(){
    fastio
    #define int long long
    int n; cin>>n;
    rep(i,1,n-1,1){
        LL u,v; cin>>u>>v;
        x[u].pb(v);
        x[v].pb(u);
    } int f = -1;
    rep(i,1,150005,1){ if(x[i].size() == 1){ cout<<i<<" "; c[i]=1; f = x[i][0]; n--; break; } }
    while(n > 1 ){
        for(auto t: x[f]){ if(!c[t]){ c[t] = 1; cout<<f<<" "; n--;f = t; break;} }
    }
    cout<<f<<endl;
    return 0; 
}