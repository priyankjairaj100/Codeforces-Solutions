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

int n,m,a[300005];

int ok(int x){
    int mn  = (a[1] + x)%m <= a[1] ? 0 : a[1];
    rep(i,2,n,1){
        if(a[i] <= mn){
            if(mn - a[i] <= x) continue;
            else return 0;
        }
        else{
            if(m + mn - a[i] <= x) continue;
            mn = a[i];
        }
    }
    return 1;
}

int bs(int lo, int hi){
    if(lo == hi) return lo;
    int mid = (lo+hi)/2;
    if(!ok(mid)) return bs(mid+1, hi);
    else return bs(lo, mid);
}

int32_t main()
{
    fastio
    cin>>n>>m;
    rep(i,1,n,1) cin>>a[i];
    cout << bs(0,m);
    return 0; 
}