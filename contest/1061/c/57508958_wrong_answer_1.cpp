//IWNLA
#include <bits/stdc++.h>
#include <string>
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

int m[1000005];

int32_t main(){
    fastio
    vector <int> f[1000005];
    int x = 1e6 + 2;
    rep(i,1,x,1) rep(j,i,x,i) f[j].pb(i);
    int n; cin >> n;
    int a[n+1]; rep(i,1,n,1) cin >> a[i];
    int ans = 1;
    rep(i,1,n,1){
        for(auto p: f[a[i]]){
            if(p > i) break;
            ans += m[p-1];
            ans %= MOD;
            m[p]++;
        }
    }
    cout << ans << endl;
    return 0;   
}