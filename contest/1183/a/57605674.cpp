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
    int n; cin>>n;
    rep(i,n,n+100,1){
    int r = 0, x = i;
    while(x) r += x%10, x/=10;
        if(r%4 == 0){cout<<i<<endl; return 0;}
    }
    return 0;
}