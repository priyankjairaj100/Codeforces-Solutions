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
LL n,m,a[MAX],num; vector<LL> gr[MAX], g[MAX];
LL vis[MAX], vis1[MAX];
stack <LL> s;
map <LL,LL> mp;
void dfs(LL x){
	vis[x]=1;
	for(auto i: g[x]) if(!vis[i]) dfs(i);
	s.push(x);
}
void dfs2(LL x){
	vis1[x]=1;
	mp[a[x]]++;
	for(auto i: gr[x]) if(!vis1[i]) dfs2(i);
}
int main() {
	cin>>n;
	rep(i,1,n,1) cin>>a[i];
	cin>>m;
	rep(i,1,m,1){ LL u,v; cin>>u>>v; g[u].pb(v); gr[v].pb(u);}
	rep(i,1,n,1) if(!vis[i]) dfs(i); LL ans1=0, ans2=1;
	while(!s.empty()){
		LL t = s.top(); s.pop();
		if(!vis1[t]){
			mp.clear();
			dfs2(t);
			ans1 += mp.begin()->f;
			ans2*= mp.begin()->s%MOD;		
		}
	}
	cout<<ans1<<" "<<ans2<<endl;
	return 0;
}