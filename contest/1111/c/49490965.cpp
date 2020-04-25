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
int n, k, a, b;
int pos[100005];

LL solve(LL l, LL r, vector <LL> &x){
  if(!x.size()) return a;
  LL a1 = b* x.size()* (r-l+1);
  if(l >= r) return a1;
  vector <LL> u,v;
  LL mid = (l+r)/2;
  for(auto z: x){
    if(z <= mid) u.pb(z);
    else v.pb(z);
  }
  return min(a1, solve(l,mid,u) + solve(mid+1,r,v));
}

int main(){
    #define int long long
    fastio
    cin>>n>>k>>a>>b;
    vector <int> x;
    rep(i,1,k,1) {cin>>pos[i]; x.pb(pos[i]);}
    cout<<solve(1,(1LL<<n),x);
    return 0;
}