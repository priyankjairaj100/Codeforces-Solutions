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

int a[1000005], b[1000005];

int32_t main()
{
    fastio
    string s; cin >> s;
    int l = s.length();
    int curr = 0;
    rep(i,0,l-1,1){
        if(s[i] == 'v' and s[i-1] == 'v') a[i]++;
        a[i]+=a[i-1];
    }
    brep(i,l-1,0,1){
        if(s[i] == 'v' and s[i+1] == 'v') b[i]++;
        b[i] += b[i+1];
    }
    int ans = 0;
    rep(i,2,l-3,1){
        if(s[i] == 'o') ans += a[i-1] * b[i+1];
    }
    cout<<ans;
    return 0;
}