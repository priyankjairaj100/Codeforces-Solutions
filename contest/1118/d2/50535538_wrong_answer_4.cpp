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

LL n,m, a[200005], ans = MOD;

LL ok(LL d){
    LL sum = 0;
    rep(i,1,n,1) sum += max(a[i] - (i-1)/d, 0LL);
    //cout<<d<<" "<<sum<<endl;
    if(sum >= m){ans = min(d, ans); return 1;}
    return 0;
}

void bs(LL lo, LL hi){
    if(lo == hi) return;
    LL mid = (lo + hi)/2;
    if(ok(mid)) bs(lo, mid);
    else bs(mid+1,hi);
} 

int main(){
    #define int long long
    cin>>n>>m; rep(i,1,n,1){ cin>>a[i]; a[i]*=-1;}
    sort(a+1,a+1+n); rep(i,1,n,1) swap(a[i], a[n-i+1]);
    rep(i,1,n,1) a[i]*=-1;
    bs(1, MOD);
    if(ans == MOD) cout<<-1<<endl;
    cout<<ans<<endl;
    return 0; 
}