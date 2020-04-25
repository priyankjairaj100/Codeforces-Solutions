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
#define all(c) (c).begin(),(c).end()

int main() {
	string s,s1=""; cin>>s;
	LL f = 0, l = s.length()-1;
	rep(i,0,s.length()-1,1){
		if(i%2){ s1=s[f]+s1; f++;}
		else{ s1=s[l]+s1; l--;}
	}
	cout<<s1<<endl;
	return 0;
}