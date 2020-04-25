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

int t[10000];
int a[100005][3];

int32_t main()
{
    fastio
    int n; cin>>n;
    rep(i,1,n,1) cin >> a[i][1];
    rep(i,1,n,1) cin >> a[i][2];
    int sum = a[1][1], sum1 = a[1][2];
    int c = 1;
    rep(i,1,n,1){
        if(c == 1){ if(a[i+1][2] > a[i+2][2]) sum += a[i+1][2]; else sum += a[i+2][2], i++; c = 2;}
        if(c == 2){ if(a[i+1][1] > a[i+2][1]) sum += a[i+1][1]; else sum += a[i+2][1], i++; c = 1;}
    }
    c = 2;
    rep(i,1,n,1){
        if(c == 1){ if(a[i+1][2] > a[i+2][2]) sum1 += a[i+1][2]; else sum1 += a[i+2][2], i++; c = 2;}
        if(c == 2){ if(a[i+1][1] > a[i+2][1]) sum1 += a[i+1][1]; else sum1 += a[i+2][1], i++; c = 1;}
    }
    cout << max(sum, sum1) <<endl;
    return 0;
}