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


int main(){
    #define int long long
    fastio
    int n; cin>>n; int a[n+1], b[n+1]; rep(i,1,n,1) cin>>a[i]>>b[i];
    int ans = 0; a[0] = 0, b[0] = 0;
    rep(i,1,n,1) {  ans += min(a[i], b[i]) - max(a[i-1], b[i-1]) + 1; }
    int f = 0;
    rep(i,1,n,1){ if(a[i] ==a[i-1] and b[i] == b[i-1]) { f++; if(f > 1) ans--; } else f=0; }
    rep(i,1,n,1) { if(a[i] ==a[i-1] and b[i] == b[i-1] and a[i] != b[i]) ans--; }
    cout<<ans<<endl;
    return 0;
}