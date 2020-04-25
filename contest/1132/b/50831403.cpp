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

int pre[300005];

int32_t main(){
    fastio
    int sum = 0;
    int n; cin>>n; int a[n+1]; rep(i,1,n,1) cin>>a[i]; sort(a+1,a+1+n); a[0] = 0; rep(i,1,n,1) sum += a[i]; 
    int m; cin>>m; int q[n+1]; rep(i,1,m,1) cin>>q[i];
    rep(i,1,m,1){
        int ans = a[n - q[i] + 1];
        ans = sum - ans;
        cout<<ans<<endl;
    }
    return 0;  
}