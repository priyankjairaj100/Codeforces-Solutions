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
int a[100005][3], n;

int best(int sum, int x, int c){
    if(x > n) return -1;
    if(x == n) return sum + a[x][c];
    return a[x][c] + max(best(sum, x+1, !c), best(sum, x+2, !c));
}

int32_t main()
{
    fastio
    cin>>n;
    rep(i,1,n,1) cin >> a[i][1];
    rep(i,1,n,1) cin >> a[i][0];
    cout << max(best(0,1,1) , best(0,1,0)) <<endl;
    return 0;
}