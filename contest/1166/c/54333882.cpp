//la_flame_ never dies out.

#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef long double LD;

const int MAX = 1e5 + 5;
const int MOD = 1e9 + 7;
const LD EPS = 1e-10;
const LD PI = acos(-1.0);
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define rep(i, a, b, d) for (int i = a; i <= b; i += d)
#define brep(i, a, b, d) for (int i = a; i >= b; i -= d)
#define pb push_back
#define pii pair<int, int>

int ans = 0,n , a[200005], ans1 = 0;

void bs(int i,int lo, int hi){
    if(lo>hi) return;
    if(lo == hi){if(a[lo] <= 2*a[i]) ans1 = max(ans1, lo - i); return; } 
    int mid = (lo + hi)/2;
    if(a[mid] <= 2*a[i]) {ans1 = max(ans1, mid - i); bs(i,mid+1,hi);}
    else bs(i,lo,mid); 
}

int32_t main()
{
    fastio
    cin>>n; rep(i,1,n,1) {cin>>a[i]; a[i] = abs(a[i]);}
    sort(a+1,a+1+n);
    rep(i,1,n-1,1){ans1=0; bs(i,i+1,n); ans+=ans1;}
    cout<<ans<<endl;
    return 0; 
}