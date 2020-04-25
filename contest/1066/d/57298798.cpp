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

int n,m,k;
int a[200005];

int ok(int x){
    int st = n - x + 1;
    int sum = 0, bx = 1;
    rep(i,st,n,1){
        if(sum + a[i] <= k) sum+=a[i];
        else sum = 0, bx++, i--;
    }
    if(bx <= m ) return 1;
    return 0;
}

int bs(int lo, int hi){
    if(lo == hi) return lo;
    int mid = (lo + hi + 1)/2;
    if(!ok(mid)) return bs(lo, mid-1);
    else return bs(mid, hi);
}

int32_t main()
{
    fastio
    cin>>n>>m>>k;
    rep(i,1,n,1) cin >> a[i];
    cout << bs(1, n);
    return 0;
}