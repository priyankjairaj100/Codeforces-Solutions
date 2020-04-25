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

int a[100009], c[100009];
set <pii> x;

int main(){
    #define int long long
    fastio
    int n,m; cin>>n>>m;
    rep(i,1,n,1) cin>>a[i];
    rep(i,1,n,1) {cin>>c[i]; x.insert({c[i],i});}
    rep(cfc,1,m,1){
        int t,d;
        cin>>t>>d;
        int p = 0;
        if(a[t] >= d) {p += d * c[t]; a[t]-=d; d = 0; if(a[t] == 0) x.erase({c[t],t}); }
        else{
            p += c[t] * a[t];
            d-= a[t]; a[t] = 0; x.erase({c[t],t});
        }
        while(d!=0){
            if(x.empty()){p = 0; break;}
            pii xt = *x.begin();
            int ind = xt.second;
            if(a[ind] >= d) {p += d * c[ind]; a[ind]-=d; d = 0; if(a[ind] == 0) x.erase({c[ind],ind}); }
            else{
                p += c[ind] * a[ind];
                d-= a[ind]; a[ind] = 0; x.erase({c[ind],ind});
            }
        }
        cout<<p<<endl;
    }
    return 0;
}