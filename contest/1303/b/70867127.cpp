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
int MOD = 1e18 + 7;
////////////////////////////////

int n, g, b;

int ok(int x){
    int ta = x/(g + b);
    int gg = (n+1)/2;
    int rem = x - ta*(g+b);
    int mm = min(g, rem);
    int tot = ta*g + mm;

    if(tot >= gg) return 1;
    return 0;
}

int bs(int lo, int hi){
    int mid = (lo + hi)/2;
    if(lo == hi) return lo;

    if(ok(mid)) return bs(lo, mid);
    else return bs(mid+1, hi);
}

int32_t main(){
    jai_shree_ram
    int t; cin >> t;
    while(t--){
        cin >> n >> g >> b;
        cout << max( n, bs(1, MOD)) << endl;
    }
    return 0;
}