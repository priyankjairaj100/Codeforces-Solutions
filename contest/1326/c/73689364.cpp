#include <bits/stdc++.h>
#include <string>
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
//using namespace __gnu_pbds;
using namespace std;
//#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
//#define ordered_multiset tree<int, null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>
#define int long long
#define jai_shree_ram  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, a, b, d) for (int i = a; i <= b; i += d)
#define brep(i, a, b, d) for (int i = a; i >= b; i -= d)
#define pb push_back
#define all(x) x.begin(), x.end()
#define pii pair<int, int>
#define endl '\n'
int MAX = 1e5 + 5;
int MOD = 998244353;
////////////////////////////////


int32_t main(){
    jai_shree_ram
    int n, k;
    cin >> n >> k;
    int p[n+1];
    rep(i,1,n,1) cin >> p[i];
    int m[n+1];
    int zz = 0;
    rep(i,1,n,1) m[i] = 0;
    rep(i,1,n,1) if(p[i] >=  n - k + 1) m[i] = 1, zz += p[i];
    int curr = 0;
    vector <int> v;

    int i = 0;
    for(i = 1; i <= n; i++) if(m[i]) break;
    i++;

    while(i <= n){
        if(m[i]){
            v.pb(curr);
            curr = 0;
        }
        else{
            curr++;
        }
        i++;
    }
    int ans = 1;
    for(auto c: v){
        ans *= (c+1);
        ans %= MOD;
    }
    cout <<zz << " "<< ans;
    return 0;
}