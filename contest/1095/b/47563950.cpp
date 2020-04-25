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

int main(){
	int n; cin>>n; 	int a[n]; for(int i = 0; i<n; i++) cin>>a[i];
	sort(a,a+n);
	if(a[n-1]-a[1] < a[n-2]-a[0]) cout<<a[n-1] - a[1]<<endl; else cout<<a[n-2]-a[0]<<endl;
	return 0;
}