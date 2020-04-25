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

int n, a[200005], b[200005];

int32_t main(){
    fastio
    cin>>n;
    rep(i,1,n-1,1) cin>>a[i];
    rep(i,2,n-1,1) a[i]+= a[i-1];
    int c = 0;
    rep(i,1,n-1,1) b[i] = a[i]; sort(b+1,b+1+n-1);
    set <int> x; x.insert(0);
    rep(i,1,n-1,1) x.insert(a[i]);
    if((int)(x.size()) != n){ cout<<"-1"<<endl; return 0; }
    int p1 = 0;
    for(auto z: x) {p1++; if(z == 0) break;}
    int k = 1;
    set <int> y; 
    for(auto z : x) y.insert(z + p1);
    for(auto z: y){ if(z!=k){ cout<<"-1"<<endl; return 0; } else k++; }
    cout<<p1<<" ";
    rep(i,1,n-1,1) cout<<a[i]+p1<<" ";
    return 0;  
}