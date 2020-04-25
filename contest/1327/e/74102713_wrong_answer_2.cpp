#include <bits/stdc++.h>
#include <string>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define pii pair<int, int>
#define ordered_set tree<int, null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>
//#define ordered_multiset tree<int, null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>
#define int long long
#define jai_shree_ram  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, a, b, d) for (int i = a; i <= b; i += d)
#define brep(i, a, b, d) for (int i = a; i >= b; i -= d)
#define pb push_back
#define all(x) x.begin(), x.end()
#define endl '\n'
int MAX = 1e5 + 5;
int MOD = 998244353;
////////////////////////////////


int32_t main(){
    jai_shree_ram
    int n;
    cin >> n;
    rep(i,1,n,1){
        int x = n - i - 1;
        int ans = 0;
        if(n == i){
            ans = 10;
            cout << ans << " ";
            continue;
        }

        if(x > 0){
            ans = x * 810;
            ans %= MOD;
        }
        
        ans += 90;
        ans %= MOD;
        ans += 90;
        ans %= MOD;
        cout << ans << " ";
    }
    return 0; 
}