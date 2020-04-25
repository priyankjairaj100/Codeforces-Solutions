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
	LL n,m,l; cin>>n>>m>>l;
	LL a[n+2], b[n+2]; rep(i,1,n,1) {cin>>a[i]; b[i] = a[i];} a[n+1] = 0; a[0] = 0; b[n+1] = 0; b[0] = 0;
	rep(i,1,n,1){if(a[i]<=l) a[i]=0; else a[i]=1;}
	LL c = 0;
	rep(i,1,n,1) if(a[i]==1 and a[i+1] == 0) c++; 
	while(m--){
		LL t; cin>>t;
		if(!t){
			cout<<c<<endl;
		}
		else{
			LL p,d; cin>>p>>d;
			b[p]+=d; 
			if(a[p]==0 and b[p]>l){
					if(a[p-1] and a[p+1]) c--;
					if(!a[p-1] and !a[p+1]) c++;
					a[p] = 1;
			}
		}
	}
	return 0;
}