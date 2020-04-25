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
    n = n%4;
    if(n == 0){ cout<<1<<" "<<"A"<<endl; }
    if(n == 1){ cout<<0<<" "<<"A"<<endl;}
    if(n==2) cout<<1<<" "<<B<<endl;
    else cout<<2<<" "<<"A"<<endl;
    return 0;
}