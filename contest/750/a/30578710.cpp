#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, k; cin>>n>>k;
  int maxT=4*60-k;
  int i=0,t=0;
  while(i<n&&t+5*(i+1)<=maxT)
  {
    t+=5*(i+1);
    i++;
  }
  cout<<i<<endl;
  return 0;
}