#include <bits/stdc++.h>
#include <string>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define pii pair<int, int>
#define ordered_set tree<int, null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>
//#define ordered_multiset tree<int, null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>
//#define int long long
#define jai_shree_ram  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, a, b, d) for (int i = a; i <= b; i += d)
#define brep(i, a, b, d) for (int i = a; i >= b; i -= d)
#define pb push_back
#define all(x) x.begin(), x.end()
#define endl '\n'
int MAX = 1e5 + 5;
int MOD = 998244353;
////////////////////////////////

template <typename T>
T modpow(T base, T exp, T modulus)
{
    base %= modulus;
    T result = 1;
    while (exp > 0)
    {
        if (exp & 1)
            result = (result * base) % modulus;
        base = (base * base) % modulus;
        exp >>= 1;
    }
    return result;
}


int32_t main(){
    jai_shree_ram
    int n;
    cin >> n;
    rep(i,1,n,1){
        if(i == 1) cout << 10 << " ";
        else if(i == 2) cout << 180 << " ";
        else{
            int ans = 0;
            ans = 2 * 10 * 9;
            int z = modpow(10,n-2, MOD);
            ans *= z;
            ans %= MOD;

            z = (n - 2) * modpow(10, n-3, MOD) * 810;
            z%=MOD;
            ans += z;
            ans%=MOD;
            cout << ans << " ";
        }
    }
    return 0; 
}