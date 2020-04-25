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


int32_t main()
{
    fastio
    int n; cin>>n; int a[n+1]; rep(i,1,n,1) cin>>a[i];
    int ans = a[1], t = 0; vector <int> x;
    rep(i,2,n,1){
        if(a[1] >= 2*a[i]) ans += a[i], x.pb(i);
        t+=a[i];
    }
    t+=a[1];
    if(2*ans > t){
        cout<< x.size() + 1<<endl;
        cout<<1<<" ";
        for(auto y: x) cout<< y<<" ";
    }
    else cout<<"0"<<endl;
    return 0;
}