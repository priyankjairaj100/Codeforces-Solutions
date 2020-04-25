//I will become the king of pirates.. no wait
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


int32_t main()
{
    fastio
    int q; cin>>q;
    while(q--){
        int n, m; cin>>n>>m;
        string a[n+1];
        int r[n+1], c[m+1];
        rep(i,1,n,1) cin>>a[i];
        rep(i,1,n,1){ int x = 0; rep(j,0,m-1,1){ if(a[i][j] == '*')x++;} r[i] = x; }
        rep(i,0,m-1,1){ int x = 0; rep(j,1,n,1){ if(a[j][i] == '*')x++;} c[i+1] = x; }
        int ans = MOD;
        rep(i,1,n,1) rep(j,0,m-1,1){int x = (a[i][j] == '.')? 1 : 0; ans = min(ans, n + m -  r[i] - c[j+1] - x); }
        cout << ans <<endl;
    }
    return 0;
}