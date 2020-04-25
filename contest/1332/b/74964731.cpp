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


vector <int> primes;

void SieveOfEratosthenes(int n)
{
    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));

    for (int p = 2; p * p <= n; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples of p greater than or
            // equal to the square of it
            // numbers which are multiple of p and are
            // less than p^2 are already been marked.
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }

    // Print all prime numbers
    for (int p = 2; p <= n; p++)
        if (prime[p]) primes.pb(p);
}

int32_t main(){
    jai_shree_ram 
    SieveOfEratosthenes(33);
    int t;
    cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n+1];
        rep(i,1,n,1) cin >> a[i];
        map <int, vector <int>> m;
        rep(i,1,n,1){
            for(auto p: primes) if(a[i]%p == 0) m[p].pb(i);
        }
        vector <pii> v;
        for(auto x: m) v.pb({(x.second).size(), x.first});
        sort(all(v), greater<pii>());


        int marked = 0;
        int ans[n+1];
        rep(i,1,n,1) ans[i] = 0;
        int col = 0, prev = 0, fcol;
        for(auto x: v){
            int id = x.second;
            for(auto i: m[id]){
                if(marked == n) break;
                else {
                    if(!ans[i]) {
                        if(prev != id) prev = id, col++;
                        ans[i] = col, marked++;
                    }
                }
            }
        }
        cout << col << endl;
        rep(i,1,n,1) cout << ans[i] << " ";
        cout << endl;
    }
    return 0; 
}