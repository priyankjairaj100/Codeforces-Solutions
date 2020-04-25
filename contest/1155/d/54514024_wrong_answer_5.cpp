//la_flame_ never dies out.

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

int n, pre[300005], post[300005], Left[300005], Right[300005], x, ans, a[300005];


int32_t main()
{
    fastio
    cin>>n>>x;
    rep(i,1,n,1) cin>>a[i];
    rep(i,1,n,1) pre[i] = pre[i-1] + a[i];
    brep(i,n,1,1) post[i] = post[i+1] + a[i];
    int lmin = 0;
    rep(i,1,n,1){lmin = min(lmin, pre[i]); Left[i] = max(0LL, pre[i] - lmin);}
    int lmax = 0;
    brep(i,n,1,1){lmax = max(lmax, pre[i]); Right[i] = max(0LL, lmax - pre[i-1]);}
    int ans = 0, ans1 = 0;
    rep(i,1,n,1){
        ans = max(ans, x* pre[i] + Right[i+1] + ans1);
        ans = max(ans, Left[i]);
        ans1 = max(ans1, Left[i] - x * pre[i]);
    }
    cout<<ans<<endl;
    return 0; 
}