
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

int cnt[150005];

int32_t main()
{
    fastio
    int n; cin >> n;
    int a[n+1];
    rep(i,1,n,1) {cin >> a[i];
        if(!cnt[a[i]]) cnt[a[i]]++;
        else if(!cnt[a[i] + 1]) cnt[a[i] + 1]++;
        else cnt[a[i] - 1]++;
    }
    int ans = 0;
    rep(i,1,150001,1) if(cnt[i]) ans++;
    cout << ans << endl;
    return 0; 
}