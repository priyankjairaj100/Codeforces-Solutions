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

template<typename T> T gcd(T a, T b){return(b?__gcd(a,b):a);}
template<typename T> T lcm(T a, T b){return(a*(b/gcd(a,b)));}
int add(int a, int b, int c){int res=a+b;return(res>=c?res-c:res);}
int mod_neg(int a, int b, int c){int res;if(abs(a-b)<c)res=a-b;else res=(a-b)%c;return(res<0?res+c:res);}
int mul(int a, int b, int c){LL res=(LL)a*b;return(res>=c?res%c:res);}
LL mulmod(LL a,LL b, LL m){LL q = (LL)(((LD)a*(LD)b)/(LD)m);LL r=a*b-q*m;if(r>m)r%=m;if(r<0)r+=m;return r;}
template<typename T>T expo(T e, T n){T x=1,p=e;while(n){if(n&1)x=x*p;p=p*p;n>>=1;}return x;}
template<typename T>T power(T e, T n, T m){T x=1,p=e;while(n){if(n&1)x=mul(x,p,m);p=mul(p,p,m);n>>=1;}return x;}
template<typename T>T extended_euclid(T a, T b, T &x, T &y){T xx=0,yy=1;y=0;x=1;while(b){T q=a/b,t=b;b=a%b;a=t;\
t=xx;xx=x-q*xx;x=t;t=yy;yy=y-q*yy;y=t;}return a;}
template<typename T>T mod_inverse(T a, T n){T x,y,z=0;T d=extended_euclid(a,n,x,y);return(d>1?-1:mod_neg(x,z,n));}

vector<LL> g[100009];

int main() {
	LL n; cin>>n;
	rep(i,1,n-1,1){
		LL u,v; cin>>u>>v;
		g[u].pb(v); g[v].pb(u);
	}
	LL d[n+1];
	rep(i,1,n,1) d[i] = g[i].size(); LL c = 0;
	rep(i,1,n,1) if(d[i]<=2) c++;
	if(c<n-1){cout<<"No"<<endl; return 0;}
	else{
		cout<<"Yes"<<endl;
		if(c==n){vector <LL> xt; rep(i,1,n,1){ if(d[i]==1)xt.pb(i); }  cout<<1<<endl; cout<<xt[0]<<" "<<xt[1]<<endl;}
		else{
			LL x = 0;
			rep(i,1,n,1){
				if(d[i]>2) x = i; 
			}
			vector <LL> xv;
			rep(i,1,n,1) if(d[i]==1) xv.pb(i);
			cout<<xv.size()<<endl;
			for(auto j: xv) cout<<x<<" "<<j<<endl;
		}
	}
	return 0;
}