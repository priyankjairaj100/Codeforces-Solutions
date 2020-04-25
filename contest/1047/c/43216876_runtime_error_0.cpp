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

int spf[MAXN];
void sieve()
{
  spf[1] = 1;
  for (int i = 2; i < MAXN; i++)
    spf[i] = i;
  for (int i = 4; i < MAXN; i += 2)
    spf[i] = 2;
  for (int i = 3; i * i < MAXN; i++)
  {
    if (spf[i] == i)
    {
      for (int j = i * i; j < MAXN; j += i)
        if (spf[j] == j)
          spf[j] = i;
    }
  }
}
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

int main(int argc, char const *argv[])
{
  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  sieve();
  int n; cin>>n;
  int a[n+1]; for(int i = 1; i<=n; i++) cin>>a[i];
  int d = 0;
  if( *max_element(a+1,a+1+n) == *min_element(a+1,a+1+n)) d = 1;
  if(d == 1) {cout<<"-1"<<endl; return 0;}
  int g = a[1];
  for(int i = 1; i<=n; i++) g = gcd(g,a[i]);
  for(int i = 1; i<=n; i++) a[i]/=g; 
  for(int i = 1; i<=n; i++){
    vector<int> p = getFactorization(a[i]);
   // p.push_back(0);
    int e = p.size();
    for(int j = 0; j < e - 1; j++) if(p[j] != p[j+1]) f[p[j]]++;
    int k = e-1; if(a[e-2] != a[k]) f[p[k]]++;
  }
  int c = *max_element(f+1,f+400000);
  if(c<=1){ cout<<n-1<<endl; return 0;}
  else cout<<n-c<<endl;
  return 0;
}