//la_flame_ never dies out.

#include <bits/stdc++.h>
using namespace std;

//#define int long long
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

int par[500005], ans[500005], n, m;

int find(int x){
    if(par[x] == x) return x;
    return par[x] = find(par[x]);
}

void unionf(int x, int y){
    if(find(x) == find(y)) return;
    par[find(x)] = find(y);
}

int32_t main()
{
    fastio
    cin>>n>>m;
    rep(i,1,n,1) par[i] = i;
    rep(i,1,m,1){
        int k, x; cin>>k; if(!k) continue;
        cin>>x; k--;
        while(k--){
            int y; cin>>y;
            unionf(x,y);
            x = y;
        }
    }
    rep(i,1,n,1) ans[find(i)]++;
    rep(i,1,n,1) cout << ans[find(i)] << " ";
    return 0; 
}