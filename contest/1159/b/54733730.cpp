// Kyu bhai, kyu
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
    int n; cin >> n; pii a[n];
    rep(i,0,n-1,1) {cin >> a[i].first; a[i].second = i+1;}
    sort(a,a+n);
    int k = MOD; set <int> num; rep(i,1,n,1) num.insert(i);
    for(auto x: a){
        n--; if(!n) break;
        int y = x.first, ind = x.second;
        int z = max(*num.rbegin() - ind, ind - *num.begin());
        num.erase(ind);
        k = min(k,y/z);
    }
    cout<<k<<endl;
    return 0; 
}