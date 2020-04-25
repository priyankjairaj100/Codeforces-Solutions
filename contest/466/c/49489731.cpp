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

int x[500005], y[500005];

int main(){
    #define int long long
    fastio
    int n; cin>>n;
    double sum = 0;
    int a[n+1]; rep(i,1,n,1){ cin>>a[i]; sum+=a[i];} sum/=3;
    int pref[n+1], post[n+1]; pref[1] = a[1], post[n] = a[n];
    rep(i,2,n,1) pref[i] = pref[i-1] + a[i];
    brep(i,n-1,1,1) post[i] = post[i+1] + a[i];
    int ans = 0;
    rep(i,1,n,1) if(post[i] == sum) y[i] = 1;
    brep(i,n-1,1,1) y[i] = y[i+1] + y[i];
    rep(i,1,n-1,1) if(pref[i]==sum) ans+=y[i+2];
    cout<<ans<<endl;
    return 0;
}