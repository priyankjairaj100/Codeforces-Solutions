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

LL md = 998244353;
LL flag = 0, b = 0, w = 0, n, isol = 0;
LL v[300005];
LL pw[300005];
void dfs1(int x, int sign, vector<int> g[300005]){
	v[x] = -sign; if(v[x]==1) b++; else w++;
	for(auto i:g[x]) {if(!v[i]) dfs1(i,v[x],g); else if(v[i] == v[x]) flag = 1;} 
}

void dfs(vector<int> g[300005])
{
	LL ans = 1;
	rep(i,1,n,1) v[i] = 0;
	rep(i,1,n,1) if(!g[i].size()) isol++;
	if(isol) rep(i,1,isol,1) {ans*=3; ans%=md;}
	rep(i,1,n,1) if(!v[i] and g[i].size()){
		b=0, w=0;
		dfs1(i, 1, g);
		ans*=((pw[b]+pw[w])%md);
		ans%=md;
	}
	if(!flag) cout<<ans<<endl;
	else cout<<0<<endl;
}

int main(){
	fastio
	pw[1] = 2; rep(i,2,300005,1) pw[i]= (pw[i-1]*2)%md;
	int t; cin>>t;
	while(t--){
		b=0, w=0, flag = 0, isol = 0;
		int m; cin>>n>>m;
		vector <int> g[300005];
		rep(i,1,m,1){
			int x, y; cin>>x>>y;
			g[x].pb(y);
			g[y].pb(x);
		}
		dfs(g);
	}
	return 0; 
}