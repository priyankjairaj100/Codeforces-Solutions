//aho baka
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
    int n,m,k; cin>>n>>m>>k;
    int p[m+1]; rep(i,1,m,1) cin>>p[i];
    int del = 0, ans = 0, st = 1;
    while(del < m){
        int x = p[st] - del;
        int r = (x % k == 0) ? x/k * k : (x/k + 1) * k;
        int td = 0;
        while(p[st] <= r){
            st++;
            td++;
        }
        st++;
        del += td;
        ans++;
    }
    cout<<ans<<endl;
    return 0;
}