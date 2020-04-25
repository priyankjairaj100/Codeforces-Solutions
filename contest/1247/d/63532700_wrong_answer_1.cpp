#include <bits/stdc++.h>
#include <string>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define int long long
#define fastio  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define ordered_multiset tree<int, null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>
#define rep(i, a, b, d) for (int i = a; i <= b; i += d)
#define brep(i, a, b, d) for (int i = a; i >= b; i -= d)
#define pb push_back
#define all(x) x.begin(), x.end()
#define pii pair<int, int>
const int MAX = 1e5 + 5;
const int MOD = 1e9 + 7;
//////////////////////////////////

int n, k;
int spf[MAX];

void sieve(int x){
    rep(i,1,x,1) spf[i] = i;
    rep(i,2,x,2) spf[i] = 2;
    rep(i,3,sqrt(x),1){
        if(spf[i] == i){
            for(int j = i*i; j<=x; j += i) if(spf[j] == j) spf[j] = i;
        }
    }
}

vector <pii> gpf(int x){
    vector <pii> res;
    multiset <int> mt;
    set <int> t;
    while(x!=1){
        mt.insert(spf[x]);
        t.insert(spf[x]);
        x /= spf[x];
    }
    for(auto c: t) res.pb({c, mt.count(c)%k});
    return res;
}

int32_t main(){
    fastio
    cin >> n >> k;
    int a[n+1];
    rep(i,1,n,1) cin >> a[i];
    sieve(MAX);
    map <int, int> m;
    int ans = 0;
    rep(i,1,n,1){
        int at = 1, rat = 1;
        vector <pii> st = gpf(a[i]);
        for(auto c: st) at *= pow(c.first, c.second);
        for(auto c: st) rat *= pow(c.first, (k - c.second)%k);
        a[i] = at;
        m[at]++;
        if(at == rat and m[rat] > 1) ans += (m[rat] - 1);
        if(at != rat) ans += m[rat];
    }
    cout << ans << endl; 
    return 0; 
}