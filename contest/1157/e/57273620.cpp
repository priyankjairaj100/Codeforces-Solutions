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

int n, a[200005], b[200005];
multiset <int> s;

int32_t main()
{
    fastio
    cin>>n;
    rep(i,1,n,1) cin>>a[i];
    rep(i,1,n,1) {cin>>b[i]; s.insert(b[i]);}
    vector <int> d;
    rep(i,1,n,1){
        auto p = s.lower_bound(n-a[i]);
        if(p == s.end()) {d.pb(*s.begin()); s.erase(s.begin());}
        else {d.pb(*s.lower_bound(n-a[i])); s.erase(p);}
    }
    rep(i,0,n-1,1){
        cout<< (a[i+1] + d[i])%n <<" ";
    }
    return 0;
}