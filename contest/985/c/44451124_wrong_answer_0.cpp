// https://github.com/likecs/Competitive-Programming-Setup/blob/master/code_template.cpp //

#include <bits/stdc++.h>
using namespace std;
 
typedef long long LL; 
typedef long double LD;

const int MAX	= 1e5 + 5;
const int MOD	= 1e9 + 7;
const LD  EPS	= 1e-10;
const LD PI = acos(-1.0);
#define fastio			ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define rep(i,a,b,d) for(LL i = a; i<=b; i+=d)
#define brep(i,a,b,d) for(LL i = a; i>=b; i-=d)
#define pb push_back
#define f first
#define s second
#define pii pair<LL, LL>

int main() {
	LL n,k,l; cin>>n>>k>>l; LL m = n*k;
	LL a[m+1]; rep(i,1,m,1) cin>>a[i];
	sort(a+1,a+1+m);
	if(!l){ if(a[1] == a[m])cout<<a[1]*n<<endl; else cout<<"0"<<endl; return 0; }
	if(a[n]-a[1]>l){cout<<0<<endl; return 0;}
	if(n==1){cout<<a[1]<<endl; return 0;}
	LL id = 0;
	rep(i,1,m,1){ if(a[i] > l+a[1]){id = i-1; break;} }
	LL e = id;
	while(1){ e++; if(a[e]==a[id])id=e; else break; } cout<<id<<endl;
	LL sum = 0;
	rep(i,0,(n-2),1)sum+=a[id-i];
	sum+=a[1];
	cout<<sum<<endl;
	return 0;
}