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
#define all(c) (c).begin(),(c).end()

int main() {
	fastio
	LL n,s; cin>>n>>s;
	LL a[n+1], b[n+1];
	rep(i,1,n,1) cin>>a[i]; rep(i,1,n,1) cin>>b[i];
	if(a[s] and a[1]) {cout<<"YES"<<endl;  return 0;}
	if(a[1] and b[s]) {
		rep(i,s+1,n,1){ if(b[i] and a[i]) cout<<"YES"<<endl; return 0; }
	}
	cout<<"NO"<<endl;
	return 0;
}