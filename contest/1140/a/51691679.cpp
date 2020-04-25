//la_flame_ never dies out.

#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef long double LD;

const int MAX	= 1e5 + 5;
const int MOD	= 1e9 + 7;
const LD  EPS	= 1e-10;
const LD PI = acos(-1.0);
#define fastio			ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define rep(i,a,b,d) for(int i = a; i<=b; i+=d)
#define brep(i,a,b,d) for(int i = a; i>=b; i-=d)
#define pb push_back
#define pii pair<int, int>

int c[100005], ans = 0, a[100005], n;

void solve(int x){
    rep(j,x,a[x],1) if(!c[j]) { c[j] = 1; solve(j); }
}

int32_t main(){
    fastio
    cin>>n; rep(i,1,n,1) cin>>a[i];
    rep(i,1,n,1){
        if(c[i] == 1) continue;
        solve(i); ans++;
    }
    cout<<ans<<endl;
    return 0;  
}