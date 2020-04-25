//Gear Third
#include <bits/stdc++.h>
#include <string>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define int long long
const int MAX = 1e5 + 5;
const int MOD = 1e9 + 7;
#define fastio  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define ordered_multiset tree<int, null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>
#define rep(i, a, b, d) for (int i = a; i <= b; i += d)
#define brep(i, a, b, d) for (int i = a; i >= b; i -= d)
#define pb push_back
#define all(x) x.begin(), x.end()
#define pii pair<int, int>
//auto cmp = [](int a, int b) {return a > b ;};
//set<int, decltype(cmp)> s(cmp);
/*__________________________________________*/

const int m = 15000005;
vector <int> v;

void sieve(){
    bool prime[m+1]; 
    memset(prime, true, sizeof(prime)); 
    for (int p=2; p*p<=m; p++){ 
        if (prime[p] == true){ 
            for (int i=p*p; i<=m; i += p) 
                prime[i] = false; 
        } 
    } 
    for (int p=2; p<=m; p++) 
       if (prime[p]) v.pb(p);
}

map <int, int> ma;

int32_t main(){
    fastio
    sieve();
    int n; cin >> n;
    int a[n+1]; rep(i,1,n,1) cin >> a[i];
    int g = a[1];
    rep(i,1,n,1) g = __gcd(g, a[i]);
    rep(i,1,n,1) a[i]/=g;
    rep(i,1,n,1){
        for(auto x : v) { if(x>v) break; if(a[i]%x == 0) ma[x]++;}
    }
    int ans = 0;
    for(auto maa: ma) ans = max(maa.second, ans);
    if(ans == 0) cout << -1<<endl;
    else cout << n - ans <<endl;
    return 0; 
}
