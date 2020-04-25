/*|-----------------------------------------------|
  | Problem solved by Priyank Jairaj, BITS Pilani |
  | Github: priyankjairaj100, StopStalk: la_flame |
  |-----------------------------------------------|*/

/***********************************************
*   TEMPLATE AUTHOR:         BHUVNESH JAIN     *
*    INSTITUITION:   BITS PILANI, PILANI       *
************************************************/

// https://github.com/likecs/Competitive-Programming-Setup/blob/master/code_template.cpp //

#include <bits/stdc++.h>
using namespace std;
 
typedef long long LL; 
typedef long double LD;

const int MAX	= 1e5 + 5;
const int LIM	= 3e5 + 5;
const int MOD	= 1e9 + 7;
const LD  EPS	= 1e-10;
const double PI = acos(-1.0);

#define fastio			ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Assert(x)		{if(!(x)){cerr<<"Assertion failed at line "<<__LINE__<<": "<<#x<<" = "<<(x)<<"\n";exit(1);}}
#define inchar			getchar//_unlocked
#define outchar(x)		putchar(x)//_unlocked(x)

#define fr(i,n) for(LL i = 0; i<n ; ++i)
#define fr1(i,n) for(LL i = 1; i<=n ; ++i)
#define frb(i,n) for(LL i = n-1; i>=0 ; --i)
#define frb1(i,n) for(LL i = n; i>=1 ; --i)

queue <int> q;
void bin(int n) 
{ 
    long long i; 
    for (i = 1LL << 33; i > 0; i = i / 2) 
        if(n & i) q.push(i); 
}

int main(){
	int n, k; cin>>n>>k;
  int a = __builtin_popcount(n);
  int b = (n%2==1)? n/2 + 1 : n/2;
  if(k>b or k<a){cout<<"NO"<<endl; return 0;}
  cout<<"YES"<<endl;
  bin(n);
  int c = k - a;
  int pos = 0;
  while(c){
    int x = q.front(); q.pop();
    if(x>2){ q.push(x/2); q.push(x/2); c--; }
    else q.push(x);
  }
  while(!q.empty()){cout<<q.front()<<" "; q.pop();}
  return 0;
}