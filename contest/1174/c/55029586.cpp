//aho baka
#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef long double LD;

const int MAX = 1e5 + 5;
const int MOD = 1e9 + 7;
const LD EPS = 1e-10;
const LD PI = acos(-1.0);
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define rep(i, a, b, d) for (int i = a; i <= b; i += d)
#define brep(i, a, b, d) for (int i = a; i >= b; i -= d)
#define pb push_back
#define pii pair<int, int>

int n; vector <int> pr;

bool isPrime(int n) 
{ 
    // Corner cases 
    if (n <= 1) 
        return false; 
    if (n <= 3) 
        return true; 
  
    // This is checked so that we can skip 
    // middle five numbers in below loop 
    if (n % 2 == 0 || n % 3 == 0) 
        return false; 
  
    for (int i = 5; i * i <= n; i = i + 6) 
        if (n % i == 0 || n % (i + 2) == 0) 
            return false; 
  
    return true; 
} 
  
// Function to print primes 
void gp(int n) 
{ 
    for (int i = 2; i <= n; i++) { 
        if (isPrime(i)) 
            pr.pb(i); 
    } 
} 

int32_t main(){
    fastio
    cin>>n;
    gp(n);
    int a[n+1], k = 0, t = 0;
    for(auto p : pr){
        k = p;
        t++;
        while(k <= n){
            a[k] = t;
            k+=p;
        }
    }
    rep(i,2,n,1) cout<<a[i]<<" ";
	return 0;
}