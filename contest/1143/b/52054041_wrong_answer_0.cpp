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

int32_t main()
{
    fastio
    int n; cin>>n;
    vector <int> d; d.pb(-1);
    int dig = 0, n1 = n; while(n1!=0){ d.pb(n1%10); n1/=10; dig++; } d.pb(-1);
    int ans = 1, res = 1; reverse(d.begin(),d.end());
    rep(i,1,dig,1){ans = 1;
    int num = 0; rep(j,1,i-1,1){num*=10; num+=d[j];}
    num--;
    while(num!=0){ ans*=num%10; num/=10;}
    ans*= d[i]-1;  
    rep(j,i+1,dig,1) ans*=9; res = max(res, ans);}
    cout<<res<<endl;
    return 0; 
}