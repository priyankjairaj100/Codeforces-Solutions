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
#define rep(i,a,b,d) for(int i = a; i<=b; i+=d)


int main(){
  int n; cin>>n; 
  map < int,pair<int,int> > m;
  rep(i,1,n,1){
    int x, y; cin>>x>>y;
    m[i] = make_pair(x,y);
  }
  int i = 1;
rep(j,1,n,1){
  int x = m[i].first; int y = m[i].second;
  if(m[x].first == y or m[x].second == y);
  else{ m[i].first = y; m[i].second = x;}
  i = m[i].first; 
}
LL k = 1;
rep(i,1,n,1) {cout<<m[k].first<<" "; k = m[k].first;}
  return 0;
}