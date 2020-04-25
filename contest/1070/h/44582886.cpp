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

int main()
{
	LL n; cin>>n;
	map <string, pair<LL,string > > x;
	rep(i,1,n,1) {
		string s; cin>>s; LL l = s.length();
		map <string,LL> tm;
		rep(j,0,l-1,1) rep(k,j,l-1,1){ string temp=""; rep(m,j,k,1) temp+=s[m]; if(tm[temp] == 1)continue; tm[temp]++; x[temp].first++; x[temp].second = s; }
	}
	LL q; cin>>q;
	while(q--){
		string qs; cin>>qs;
		if(x[qs].first == 0) cout<<"0 -"<<endl;
		else
			cout<<x[qs].first<<" "<<x[qs].second<<endl;
	}
	return 0;
}