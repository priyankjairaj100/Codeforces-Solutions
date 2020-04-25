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

int a[100009], n, ans = 1;

void bs(int lo, int hi){
    if(lo == hi) return;
    int mid = (lo + hi)/2;
    if(a[hi] - a[lo] > 5){ bs(lo, mid); bs(mid+1, hi);}
    if(a[hi] - a[lo] <= 5) ans = max(ans, hi - lo + 1);
}

int32_t main(){
    fastio
     cin>>n;rep(i,1,n,1) cin>>a[i];
    sort(a+1,a+1+n);
    bs(1,n);
    cout<<ans<<endl;
    return 0;  
}