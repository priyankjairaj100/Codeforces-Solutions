
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
#define all(x) x.begin(), x.end()


int32_t main()
{
    fastio
    int n; cin >> n;
    rep(i,1,n,1){
        int ans = 0;
        rep(j,1,n,1){
            //ans = ans ^ (i-1) * n + j - 1;
            cout << (i-1) * n + j - 1 << " ";
        }
        cout << endl;
    }
    return 0; 
}