//aho bakaa
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

int32_t main(){
    fastio
    int n,m,ta,tb,k; cin>>n>>m>>ta>>tb>>k;
    int a[n+1], b[n+1]; set <pii> x;
    rep(i,1,n,1) cin>>a[i]; 
    rep(i,1,m,1) cin>>b[i], x.insert({b[i], i});
    int ans1 = 0, flag = 0;
    rep(f,1,n,1){
        int t = f - 1;
        if(t > k) continue;
        if(x.lower_bound({a[f] + ta,0}) == x.end()) {flag = 1; continue;}
        pii z = *x.lower_bound({a[f] + ta,0});
        int curr = z.second - 1;
        int left = k-t;
       // cout<<curr<<" "<<t<<endl;
        if(m - curr <= left) {flag = 1; continue;}
        else ans1 = max(ans1, b[curr + left + 1] + tb);
    }
    if(flag or n<=k or m<=k) cout<<"-1"<<endl;
    else cout<<ans1<<endl;
	return 0;
}