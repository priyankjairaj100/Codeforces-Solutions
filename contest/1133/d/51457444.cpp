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

map <pii, int> m;
int d0 = 0, d1 = 0;

int32_t main(){
    fastio
    int n; cin>>n;
    int a[n], b[n];
    rep(i,1,n,1) cin>>a[i]; rep(i,1,n,1) cin>>b[i];
    rep(i,1,n,1){
        int g = __gcd(a[i],b[i]);
        if(a[i] == 0 and b[i] == 0) {d0++; continue;}
        else if(b[i] == 0) {d1++; continue;}
        else if(a[i] == 0) continue;
        a[i]/=g; b[i]/=g; 
        if(a[i] <= 0){ a[i]*=-1; b[i]*=-1;}
        m[{a[i], b[i]}]++;
    }
    int ans = 0;
    for(auto x: m){ ans = max(ans, x.second);}
    ans = max(ans, d1);
    cout<<ans + d0<<endl;
    return 0;  
}