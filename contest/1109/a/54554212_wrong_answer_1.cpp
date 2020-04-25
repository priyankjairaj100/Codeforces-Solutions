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

const int N = (1 << 20) + 5;

int c[2][N];

int32_t main()
{
    fastio
    int n; cin >> n; int a[n+1]; rep(i,1,n,1) cin >> a[i];
    int pre[n+1]; pre[0] = 0; rep(i,1,n,1) pre[i] = pre[i-1] ^ a[i];
    int ans = 0;
    rep(i,1,n,1){
        ans += c[i%2][pre[i]];
        c[i%2][pre[i]]++;
    }
    cout<<ans<<endl;
    return 0; 
}