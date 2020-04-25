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

vector <int> primes;

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
void printPrime(int n) 
{ 
    for (int i = 2; i <= n; i++) { 
        if (isPrime(i)) 
            primes.pb(i);
    } 
}

int32_t main(){
	fastio
    int n; cin >> n;
    int a[n+1]; rep(i,1,n,1) cin >> a[i];
    sort(a+1,a+1+n);
    int sum = 0;
    rep(i,1,n,1) sum += a[i];
    int ans = 0, curr = 0;
    int one = 0, two = 0;
    rep(i,1,n,1){if(a[i] == 1) one++; else two++;}
    if(1){
        printPrime(sum);
        primes.pb(sum);
        int curr = 0;
        for(auto p: primes){
            while(curr < p){
                if(two and p - curr >= 2){
                    two--;
                    cout << "2 ";
                    curr+=2;
                    continue;
                }
                else{
                    one--;
                    cout << "1 ";
                    curr++;
                    continue;
                }
            }
        }
        return 0;
    }
//// cout<<"1 ";
    return 0;   
}