#include "bits/stdc++.h"
using namespace std;

#define MAXN 15000009
int f[400000];
int gcd(int a, int b)
{

  if (a == 0 || b == 0)
    return 0;
  if (a == b)
    return a;
  if (a > b)
    return gcd(a - b, b);
  return gcd(a, b - a);
}
// stores smallest prime factor for every number
int spf[MAXN];

// Calculating SPF (Smallest Prime Factor) for every
// number till MAXN.
// Time Complexity : O(nloglogn)
void sieve()
{
  spf[1] = 1;
  for (int i = 2; i < MAXN; i++)

    // marking smallest prime factor for every
    // number to be itself.
    spf[i] = i;

  // separately marking spf for every even
  // number as 2
  for (int i = 4; i < MAXN; i += 2)
    spf[i] = 2;

  for (int i = 3; i * i < MAXN; i++)
  {
    // checking if i is prime
    if (spf[i] == i)
    {
      // marking SPF for all numbers divisible by i
      for (int j = i * i; j < MAXN; j += i)

        // marking spf[j] if it is not
        // previously marked
        if (spf[j] == j)
          spf[j] = i;
    }
  }
}

// A O(log n) function returning primefactorization
// by dividing by smallest prime factor at every step
vector<int> getFactorization(int x)
{
  vector<int> ret;
  while (x != 1)
  {
    ret.push_back(spf[x]);
    x = x / spf[x];
  }
  return ret;
}

// driver program for above function
int main(int argc, char const *argv[])
{
  // precalculating Smallest Prime Factor
  sieve();
  int n; cin>>n;
  int a[n+1]; for(int i = 1; i<=n; i++) cin>>a[i];
  int d = 0;
  if( *max_element(a+1,a+1+n) == *min_element(a+1,a+1+n)) d = 1;
  if(d == 1) {cout<<"-1"<<endl; return 0;}
  int g = a[1];
  for(int i = 1; i<=n; i++) g = gcd(g,a[i]);
  for(int i = 1; i<=n; i++) a[i]/=g; 
  //cout << "prime factorization for " << x << " : ";

  // calling getFactorization function
  for(int i = 1; i<=n; i++){
    vector<int> p = getFactorization(a[i]);
    for(int j = 0; j < p.size(); j++) if(p[j] != p[j+1]) f[p[j]]++;
  }
  int c = *max_element(f+1,f+400000);
  if(c<=1){ cout<<n-1<<endl; return 0;}
  else cout<<n-c<<endl;
  return 0;
}