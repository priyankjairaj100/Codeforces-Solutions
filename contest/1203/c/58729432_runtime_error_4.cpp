//IWNLA
#include <bits/stdc++.h>
#include <string>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define int long long
typedef long double LD;
const int MAX = 1e5 + 5;
const int MOD = 1e9 + 7;
const LD EPS = 1e-10;
const LD PI = acos(-1.0);
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

int divCount(int n) 
{ 
    // sieve method for prime calculation 
    bool hash[n + 1]; 
    memset(hash, true, sizeof(hash)); 
    for (int p = 2; p * p < n; p++) 
        if (hash[p] == true) 
            for (int i = p * 2; i < n; i += p) 
                hash[i] = false; 
  
    // Traversing through all prime numbers 
    int total = 1; 
    for (int p = 2; p <= n; p++) { 
        if (hash[p]) { 
  
            // calculate number of divisor 
            // with formula total div =  
            // (p1+1) * (p2+1) *.....* (pn+1) 
            // where n = (a1^p1)*(a2^p2)....  
            // *(an^pn) ai being prime divisor 
            // for n and pi are their respective  
            // power in factorization 
            int count = 0; 
            if (n % p == 0) { 
                while (n % p == 0) { 
                    n = n / p; 
                    count++; 
                } 
                total = total * (count + 1); 
            } 
        } 
    } 
    return total; 
}

int32_t main(){
	fastio
    int n; cin >> n;
    int a[n+1], x = 1;
    rep(i,1,n,1){cin >> a[i];}
    x = a[1];
    rep(i,2,n,1) x = __gcd(x, a[i]);
    cout << divCount(x) << endl;
    return 0;  
}