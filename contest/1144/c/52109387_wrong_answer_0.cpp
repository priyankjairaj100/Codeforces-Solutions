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

int x[200005];

int32_t main()
{
    fastio
    int n; cin>>n;
    int a[n+1]; rep(i,1,n,1) {cin>>a[i]; x[a[i]]++;}
    int f = 0;
    rep(i,1,n,1) if(x[a[i]] > 2) f = 1;
    if(f == 1){ cout<<"NO"<<endl; return 0; }
    cout<<"YES"<<endl;
    set <int> p,q;
    rep(i,1,n,1){ if(x[a[i]] == 2) q.insert(a[i]); else if(x[a[i]] == 1){ p.insert(a[i]); } }
    cout<<p.size()<<endl;
    for(auto s: p) cout<<s<<" "; cout<<endl;
    cout<<q.size()<<endl;
    vector<int> z;
    for(auto s: q) z.pb(s);
    reverse(z.begin(),z.end());
    for(auto s: z) cout<<s<<" "; cout<<endl;
    return 0; 
}