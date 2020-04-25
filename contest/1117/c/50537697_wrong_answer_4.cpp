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

LL x1, y1, x2, y2, n, x, y, u[100005], r[100005], ans = MOD;

LL ok(LL d){
    LL xf = x2 - x1, yf = y2 - y1;
    LL d1 = abs(xf - r[d]) + abs(yf - u[d]);
    //cout<<d<<" "<<d1<<endl;
    if(d1 <= d){ ans = min(ans, d); return 1;}
    return 0;
}

void bs(LL lo, LL hi){
    if(lo == hi) return;
    LL mid = (lo + hi)/2;
    if(ok(mid)) bs(lo,mid);
    else bs(mid + 1, hi);
}

int main(){
    #define int long long
    cin >> x1 >> y1 >> x2 >> y2;
    cin >> n; string s; cin>>s; int k = 0;
    for(auto c: s){if(c == 'U') u[++k]++; else if(c == 'D') u[++k]--; else if(c == 'L') r[++k]--; else r[++k]++;}
    rep(i,1,100005,1){ u[i] = u[(i-1)%n + 1]; r[i] = r[(i-1)%n + 1]; }
    rep(i,1,100005,1){ u[i]+=u[i-1]; r[i]+=r[i-1];}
    bs(1,100005);
    if(ans == MOD){ cout<<-1<<endl; return 0;}
    cout<<ans<<endl;
    return 0; 
}