// Kyu bhai, kyu
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


int32_t main()
{
    fastio
    int n,q; cin>>n; int s[n+2]; rep(i,1,n,1) cin>>s[i];
    sort(s+1,s+1+n); s[0] = 0;
    int d[n+1]; rep(i,1,n-1,1) d[i] = s[i+1] - s[i];
    sort(d+1,d+n);
    vector <int> pre; pre.pb(0);
    rep(i,1,n-1,1) pre.pb(d[i] + pre[i-1]);
    cin>>q;
    while(q--){
        int l,r; cin>>l>>r;
        int len = r - l + 1;
        auto j = upper_bound(d+1,d+n,len) - (d+1);
        int ans = 0;
        ans += len;
        ans += pre[j];
        ans += len * (n - 1 - j);
        cout<<ans<<endl;
    }
    return 0; 
}