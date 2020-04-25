#include <bits/stdc++.h> 
using namespace std; 
  
// function to print the divisors 
void printDivisors(int n) 
{ 
    // Vector to store half of the divisors 
    set<int> v; 
    for (int i=1; i<=sqrt(n); i++) 
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
    set <int> a;
    for (auto i:v) { int x = n/i; long long sum = x * (2 + (x-1)*i)/2; a.insert(sum); }
    for(auto i: a) cout<<i<<" "; 
} 
  
/* Driver program to test above function */
int main() 
{  
    int n; cin>>n;
    printDivisors(n); 
    return 0; 
} 