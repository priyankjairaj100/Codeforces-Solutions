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

int f[200005][3], t[3];

int32_t main()
{
    fastio
    int n, l, r; cin>>n>>l>>r;
    t[0] = r / 3 - (l - 1) / 3;
    t[1] = (r + 1) / 3 - l / 3;
    t[2] = (r + 2) / 3 - (l + 1) / 3;
    f[0][0] = 1;
    for (int i = 1; i <= n; i++)
        for (int j = 0; j <= 2; j++)
            for (int k = 0; k <= 2; k++)
                f[i][(k + j) % 3] = (f[i][(k + j) % 3] + f[i - 1][j] * t[k] % MOD) % MOD;
    cout << f[n][0] << endl;
    return 0; 
}