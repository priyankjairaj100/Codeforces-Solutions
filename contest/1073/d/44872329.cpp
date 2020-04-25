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
	fastio
	LL n, t; cin>>n>>t;
	LL a[n+1]; rep(i,1,n,1) cin>>a[i]; LL lb = *min_element(a+1,a+1+n);
	LL c1 = 0, t1 = t, totc = 0;
	while(t1>=lb){
	c1 = 0; LL ic = t1;
	rep(i,1,n,1)  if(t1>=a[i]) {t1-=a[i]; c1++;} 
	totc += c1 * (ic /  (ic-t1));
	t1 = ic % (ic - t1);
	}
	cout<<totc<<endl;
	return 0;
}