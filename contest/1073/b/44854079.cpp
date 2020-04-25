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



LL idx[2*MAX];

int main() {
	fastio
	LL n; cin>>n;
	LL t = 1; LL a[n+1];
	rep(i,1,n,1) {cin>>a[i]; idx[a[i]] = t; t++;} 
	LL x = 0;
	rep(e,1,n,1){
		LL temp; cin>>temp; 
		if(idx[temp]>x){  cout<<idx[temp] - x<<" "; x = idx[temp]; }
		else { cout<<"0 "; }
	}
	return 0;
}
