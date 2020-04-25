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

int n, pref[100005], post[100005];

int32_t main(){
    fastio
    int sum = 0; cin>>n; int a[n+1]; rep(i,1,n,1) {cin>>a[i]; sum+=a[i]; pref[i] = a[i];}
    if(sum%2 == 1){cout<<"NO"<<endl; return 0;}
    rep(i,1,n,1) pref[i] += pref[i-1];
    set <int> x; int f = 0;
    rep(i,1,n,1){x.insert(a[i]); if(pref[i] == sum/2 or x.find(pref[i] - sum/2) != x.end()) f = 1;}
    reverse(a+1, a+1+n); reverse(pref+1, pref+1+n);
    x.clear();
    rep(i,1,n,1){x.insert(a[i]); if(pref[i] == sum/2 or x.find(pref[i] - sum/2) != x.end()) f = 1;}
    if(f) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;  
}