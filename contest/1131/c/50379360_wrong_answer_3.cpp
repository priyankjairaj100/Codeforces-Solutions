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

map <int,int> m;

int main(){
    #define int long long
    fastio
    set <int> x;
    int n; cin>>n; int a[n+1]; rep(i,1,n,1) {cin>>a[i]; m[a[i]]++; x.insert(a[i]); }
    vector <int> y,z;
    for(auto c: x){
        if(m[c] > 1) {rep(i,1,m[c]-1,1) z.pb(c); y.pb(c);}
        else z.pb(c);
    }
    for(auto c: z) cout<<c<<" ";
   if(y.size() > 0) for(int i = y.size() - 1; i>=0; i--) cout<<y[i]<<" ";
    return 0;
}