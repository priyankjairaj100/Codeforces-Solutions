//la_flame_ never dies out.

#include <bits/stdc++.h>
using namespace std;
 
typedef long long LL; 
typedef long double LD;

const int MAX	= 1e5 + 5;
const int MOD	= 1e9 + 7;
const LD  EPS	= 1e-10;
const LD PI = acos(-1.0);
#define fastio			ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define rep(i,a,b,d) for(LL i = a; i<=b; i+=d)
#define brep(i,a,b,d) for(LL i = a; i>=b; i-=d)
#define pb push_back
#define pii pair<LL, LL>

int main(){
    #define int long long
    fastio
	int n,k; cin>>n>>k;
	int a[n+1]; rep(i,0,n-1,1) cin>>a[i]; 
	string s; cin>>s;
	int ans = 0; s+="*"; a[n] = 0;
	rep(i,0,n-1,1){
		priority_queue <int> q;
		q.push(a[i]);
		int curr = 1, s1 = a[i];
		while(s[i] == s[i+1] ) {curr++; s1+=a[i+1]; q.push(a[i+1]); i++;}
		if(curr<=k) {ans+=s1; continue;}
		rep(x,1,k,1) {ans+= q.top(); q.pop();}
	}
	cout<<ans<<endl;
    return 0;
}