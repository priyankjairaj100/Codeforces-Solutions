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

int n, m; int a[200005];
int x[200005];

void solve(int p){
    if(p-1>=1 and p-1<=n and a[p-1] != m){ if(a[p-1] > m) cout<<"2 "<<p-1<<" "<<p<<endl; else cout<<"1 "<<p-1<<" "<<p<<endl;   a[p - 1] = m; solve(p-1); }
    if(p+1>=1 and p+1<=n and a[p+1] != m){ if(a[p+1] > m) cout<<"2 "<<p+1<<" "<<p<<endl; else cout<<"1 "<<p+1<<" "<<p<<endl;   a[p + 1] = m; solve(p+1); }
}

int32_t main()
{
    fastio
    cin>>n;
    rep(i,1,n,1){ cin>>a[i]; x[a[i]]++;}
    int ans = 0;
    rep(i,1,n,1){ if(x[a[i]] > ans){ ans = x[a[i]]; m = a[i]; } }
    cout<<n-ans<<endl;
    rep(i,1,n,1) if(a[i] == m){ solve(i);}
    return 0; 
}