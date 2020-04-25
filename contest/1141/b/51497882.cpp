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

int32_t main(){
    fastio
    int n; cin>>n;
    int a[n+1]; rep(i,1,n,1) cin>>a[i];
    int m = 0, curr = 0;
    rep(i,1,n,1){ if(a[i] == 1){ curr++; m = max(m, curr); } else{ m = max(m, curr); curr = 0; } }
    curr = 0; int m2 = 0;
    int i = 1;
    if(a[1] == 1 ){ while(a[i] == 1 and i<=n){ curr++; i++; } }
    m2 = curr; curr = 0; i = n;
    if(a[n] == 1){ while(a[i] == 1 and i>=1){ curr++; i--; } }
    int ans = max(m, m2 + curr);
    cout<<ans<<endl;
    return 0;  
}