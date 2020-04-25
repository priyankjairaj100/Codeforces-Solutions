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
const int MAX = 1e5 + 5;
const int MOD = 1e9 + 7;
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
        if (prime[p])
            primes.pb(p);
}

bool isPrime(int n) 
{ 
    // Corner cases 
    if (n <= 1)  return false; 
    if (n <= 3)  return true; 
  
    // This is checked so that we can skip  
    // middle five numbers in below loop 
    if (n%2 == 0 || n%3 == 0) return false; 
  
    for (int i=5; i*i<=n; i=i+6) 
        if (n%i == 0 || n%(i+2) == 0) 
           return false; 
  
    return true; 
} 

int32_t main(){
    jai_shree_ram

    int t; cin >> t;
    SieveOfEratosthenes(MAX);
    //for(auto x: primes) cout << x << endl;
    while(t--){
        int n; cin >> n;
        if(isPrime(n)){
            cout << "NO" << endl;
            continue;
        }
        int f= 0, a = 0, b = 0, c = 0;
        for(auto x: primes){
            if(n%x == 0){
                a = x;
                n/=x;
                break;
            }
            if(x > n) break;
        }

        if(isPrime(n)){
            cout << "NO" << endl;
            continue;
        }

        if(n%(a*a) == 0){
            b = a*a;
            n/=b;
        }
        else{
            for(auto x: primes){
                if(n%x == 0 and x!=a){
                    n/=x;
                    b = x;
                    f++;
                    break;
                }
                if(x > n) break;
            }
        }

        if(a == b or a == n or b == n or a < 2 or b < 2 or n < 2){
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;
        cout << a << " " << b << " " << n << endl;
    }   
    return 0;
}