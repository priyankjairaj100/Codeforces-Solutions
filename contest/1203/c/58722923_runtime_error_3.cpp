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

void SieveOfEratosthenes(int n, bool prime[], 
                         bool primesquare[], int a[]) 
{ 
    // Create a boolean array "prime[0..n]" and 
    // initialize all entries it as true. A value 
    // in prime[i] will finally be false if i is 
    // Not a prime, else true. 
    for (int i = 2; i <= n; i++) 
        prime[i] = true; 
  
    // Create a boolean array "primesquare[0..n*n+1]" 
    // and initialize all entries it as false. A value 
    // in squareprime[i] will finally be true if i is 
    // square of prime, else false. 
    for (int i = 0; i <= (n * n + 1); i++) 
        primesquare[i] = false; 
  
    // 1 is not a prime number 
    prime[1] = false; 
  
    for (int p = 2; p * p <= n; p++) { 
        // If prime[p] is not changed, then 
        // it is a prime 
        if (prime[p] == true) { 
            // Update all multiples of p 
            for (int i = p * 2; i <= n; i += p) 
                prime[i] = false; 
        } 
    } 
  
    int j = 0; 
    for (int p = 2; p <= n; p++) { 
        if (prime[p]) { 
            // Storing primes in an array 
            a[j] = p; 
  
            // Update value in primesquare[p*p], 
            // if p is prime. 
            primesquare[p * p] = true; 
            j++; 
        } 
    } 
} 
  
// Function to count divisors 
int countDivisors(int n) 
{ 
    // If number is 1, then it will have only 1 
    // as a factor. So, total factors will be 1. 
    if (n == 1) 
        return 1; 
  
    bool prime[n + 1], primesquare[n * n + 1]; 
  
    int a[n]; // for storing primes upto n 
  
    // Calling SieveOfEratosthenes to store prime 
    // factors of n and to store square of prime 
    // factors of n 
    SieveOfEratosthenes(n, prime, primesquare, a); 
  
    // ans will contain total number of distinct 
    // divisors 
    int ans = 1; 
  
    // Loop for counting factors of n 
    for (int i = 0;; i++) { 
        // a[i] is not less than cube root n 
        if (a[i] * a[i] * a[i] > n) 
            break; 
  
        // Calculating power of a[i] in n. 
        int cnt = 1; // cnt is power of prime a[i] in n. 
        while (n % a[i] == 0) // if a[i] is a factor of n 
        { 
            n = n / a[i]; 
            cnt = cnt + 1; // incrementing power 
        } 
  
        // Calculating number of divisors 
        // If n = a^p * b^q then total divisors of n 
        // are (p+1)*(q+1) 
        ans = ans * cnt; 
    } 
  
    // if a[i] is greater than cube root of n 
  
    // First case 
    if (prime[n]) 
        ans = ans * 2; 
  
    // Second case 
    else if (primesquare[n]) 
        ans = ans * 3; 
  
    // Third casse 
    else if (n != 1) 
        ans = ans * 4; 
  
    return ans; // Total divisors 
}

int32_t main(){
	fastio
    int n; cin >> n;
    int a[n+1], x = 1;
    rep(i,1,n,1){cin >> a[i];}
    x = a[1];
    rep(i,2,n,1) x = __gcd(x, a[i]);
    cout << countDivisors(x) << endl;
    return 0;  
}