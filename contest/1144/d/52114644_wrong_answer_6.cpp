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

int n, m, mn; int a[200005];

void solve(int x, int p){
    if(p-1>=1 and p-1<=n and a[p-1] != x){ if(x == mn) cout<<"2 "<<p-1<<" "<<p<<endl; else cout<<"1 "<<p-1<<" "<<p<<endl;   a[p - 1] = x; solve(x, p-1); }
    if(p+1>=1 and p+1<=n and a[p+1] != x){ if(x == mn) cout<<"2 "<<p+1<<" "<<p<<endl; else cout<<"1 "<<p+1<<" "<<p<<endl;   a[p + 1] = x; solve(x, p+1); }
}

int32_t main()
{
    fastio
    cin>>n;
    rep(i,1,n,1) cin>>a[i];
    m = *max_element(a+1,a+1+n), mn = *min_element(a+1,a+1+n); int tm = 0, tn = 0;
    rep(i,1,n,1) {if(a[i] == m) tm++; if(a[i] == mn) tn++;}
    if(m >= mn){ cout<<n - tm<<endl; int i = 0; rep(i,1,n,1) if(a[i] == m){solve(m, i);} }
    else{ cout<<n - tn<<endl;int i = 0; rep(i,1,n,1) if(a[i] == mn){solve(mn, i);} }
    return 0; 
}