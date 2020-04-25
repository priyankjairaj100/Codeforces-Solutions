#include <bits/stdc++.h> 
using namespace std;
#define ll long long
set<ll> a;
// function to print the divisors 
void printDivisors(ll n) 
{ 
    // Vector to store half of the divisors 
    set<ll> v; 
    for (ll i=1; i<=sqrt(n); i++) 
    { 
        if (n%i==0) 
        { 
            if (n/i == i) // check if divisors are equal 
                v.insert(i);
            else
            { 
                v.insert(i); 
  
                // push the second divisor in the vector 
                v.insert(n/i); 
            } 
        } 
    } 
  
    // The vector will be printed in reverse 
    for (auto i:v) { ll x = n/i; ll sum = x * (2 + (x-1)*i)/2; a.insert(sum); }
    for(auto i: a) cout<<i<<" "; 
} 
  
/* Driver program to test above function */
int main() 
{  
    int n; cin>>n;
    printDivisors(n); 
    return 0; 
} 