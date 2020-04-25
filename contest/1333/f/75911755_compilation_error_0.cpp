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
int MOD = 1e9 + 7;
////////////////////////////////

int np;

int n;
vector<char> is_prime(n + 1, true);
is_prime[0] = is_prime[1] = false;
for (int i = 2; i * i <= n; i++)
{
    if (is_prime[i])
    {
        for (int j = i * i; j <= n; j += i)
            is_prime[j] = false;
    }
}
int32_t main(){
    jai_shree_ram
    int n;
    cin >> n;
    SieveOfEratosthenes(n);
    rep(i,1,n,1) if(is_prime[i]) np++;
    np++;
    rep(i,2,np,1) cout << 1 << " ";
    int x = 2;
    rep(i,np+1,n,1) {cout << x << " "; x++;}
    return 0; 
}