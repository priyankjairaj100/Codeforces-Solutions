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
    int n; cin>>n; int a[n+1]; rep(i,1,n,1) cin>>a[i];
    sort(a+1,a+1+n);
    int ans = 0, res = 0, t = a[1];
    rep(i,1,n,1){ if(a[i] - t <= 5){ ans++; res = max(ans, res);} else{ ans = 1; t = a[i];} }
    cout<<res<<endl;
    return 0;  
}