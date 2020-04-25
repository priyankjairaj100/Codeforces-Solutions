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

map <int, int> c[2];

int32_t main()
{
    fastio
    int n; cin >> n; 
    c[0][0] = 1;
    int ans = 0, curr = 0, temp = 0;
    rep(i,1,n,1){
        cin >> temp;
        curr ^= temp;
        ans += c[i%2][curr];
        c[i%2][curr]++;
    }
    cout<<ans<<endl;
    return 0; 
}