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

int n, k, c1[200005], c[200005], ans = -1;
vector <int> x;
vector <int> y[200005];

int ok(int cps){
    int len = 0;
    for(auto y:x) len += y/cps;
    if(len >= k){ ans = max(cps, ans); return 1; }
    return 0;
}

void bs(int lo, int hi){
    if(lo == hi) return;
    int mid  = (lo + hi)/2;
    if(ok(mid)){ bs(mid + 1, hi); }
    else bs(lo,mid);
}

int main(){
    #define int long long
    cin>>n>>k;
    set <int> u;
    int a[n + 1]; rep(i,1,n,1){cin>>a[i]; c[a[i]]++; c1[a[i]]++; u.insert(a[i]);}
    rep(i,1,n,1){if(c1[a[i]]) x.pb(c1[a[i]]); c1[a[i]] = 0;}
    bs(1,n);
    for(auto y : u){ rep(i,1, c[y]/ans, 1) cout<<y<<" "; }
    //cout<<ans<<endl;
    return 0; 
}