/*|-----------------------------------------------|
  | Problem solved by Priyank Jairaj, BITS Pilani |
  | Github: priyankjairaj100, StopStalk: la_flame |
  |-----------------------------------------------|*/

/***********************************************
*   TEMPLATE AUTHOR:         BHUVNESH JAIN     *
*    INSTITUITION:   BITS PILANI, PILANI       *
************************************************/

// https://github.com/likecs/Competitive-Programming-Setup/blob/master/code_template.cpp //

#include <bits/stdc++.h>
using namespace std;
 
typedef long long LL; 
typedef long double LD;

const int MAX	= 1e5 + 5;
const int LIM	= 3e5 + 5;
const int MOD	= 1e9 + 7;
const LD  EPS	= 1e-10;
const double PI = acos(-1.0);

#define fastio			ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Assert(x)		{if(!(x)){cerr<<"Assertion failed at line "<<__LINE__<<": "<<#x<<" = "<<(x)<<"\n";exit(1);}}
#define inchar			getchar//_unlocked
#define outchar(x)		putchar(x)//_unlocked(x)

#define fr(i,n) for(LL i = 0; i<n ; ++i)
#define fr1(i,n) for(LL i = 1; i<=n ; ++i)
#define frb(i,n) for(LL i = n-1; i>=0 ; --i)
#define frb1(i,n) for(LL i = n; i>=1 ; --i)

double tick(){static clock_t oldt,newt=clock();double diff=1.0*(newt-oldt)/CLOCKS_PER_SEC;oldt=newt;return diff;}

template<typename T> void inpos(T &x){x=0;register T c=inchar();while(((c<48)||(c>57))&&(c!='-'))c=inchar();bool neg=0;\
if(c=='-')neg=1;for(;c<48||c>57;c=inchar());for(;c>47&&c<58;c=inchar())x=(x<<3)+(x<<1)+(c&15);if(neg)x=-x;}
template<typename T> void outpos(T n){if(n<0){outchar('-');n*=-1;}char snum[65];int i=0;do{snum[i++]=n%10+'0';n/=10;}\
while(n);i=i-1;while(i>=0)outchar(snum[i--]);outchar('\n');}
inline void instr(char *str){register char c=0;register int i=0;while(c<33)c=inchar();while(c!='\n'&&c!=' '&&c!=EOF){\
str[i]=c;c=inchar();++i;}str[i]='\0';}

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

LL c[105];
char m[105];
vector<LL> x[1005];
LL h = 1;
int main() {
    LL n; cin>>n; 
    LL a[n+1]; fr1(i,n){cin>>a[i]; c[a[i]]++; x[a[i]].push_back(i);}
    LL n1=0, n2=0, n3=0;
    fr1(i,100) if(c[i]){ if(c[i]==1)n1++; else if(c[i]==2)n2++; else n3++; }
    if(!n3 && n1%2) { cout<<"NO"<<endl; return 0;}
    cout<<"YES"<<endl;
    fr1(i,100) if(c[i] == 1) for(auto j: x[i]) m[j] = 'A' + (h=!h); LL k = 0;
    if(n1%2) fr1(i,100) if(c[i] >= 3) {for(auto j: x[i]){ if(k == 0) {m[j] = 'B'; k = 1;} else m[j] = 'A'; } break;}
    fr1(i,n) if(m[i]!='B') m[i] = 'A';
    fr1(i,n) cout<<m[i]; cout<<endl;
	return 0;
}