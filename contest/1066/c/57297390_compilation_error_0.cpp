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

int l[200005], r[200005], id[200005], size[200005], t[200005];

int32_t main()
{
    fastio
    int q; cin>>q;
    int z = 0;
    rep(e,1,q,1){
        char c; int x; cin>>c>>x;
        if(c=='L'){
            l[e] = l[e-1] + 1;
            r[e] = r[e-1];
            id[x] = 0;
            z++; size[x] = z;
            t[x] = e;
        }
        else if(c == 'R'){
            l[e] = l[e-1];
            r[e] = r[e-1] + 1;
            id[x] = 1;
            z++; size[x] = z;
            t[x] = e;
        }
        else{
            r[e] = r[e-1];
            l[e] = l[e-1];
            if(id[x]) cout<< min(r[e] - r[t[x]], size[t[x]] + l[e] - l[t[x]]) <<endl;
            else cout<< min(l[e] - l[t[x]], size[t[x]] + r[e] - r[t[x]]) <<endl;
        }
    }
    return 0;
}