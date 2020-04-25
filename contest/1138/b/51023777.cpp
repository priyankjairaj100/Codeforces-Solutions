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

int none = 0, cl = 0, acr = 0, both = 0;
vector <int> t0, t1, t2, t3;

int main(){
    #define int long long
    int n; cin>>n; int n1 = n/2;
    string s1, s2; cin>>s1>>s2;
    rep(i,0,n-1,1) { if(s1[i] == '0' and s2[i] == '0'){none++; t0.pb(i+1);} if(s1[i] == '0' and s2[i] == '1'){acr++; t1.pb(i+1);} if(s1[i] == '1' and s2[i] == '0'){cl++; t2.pb(i+1);} if(s1[i] == '1' and s2[i] == '1'){t3.pb(i+1); both++;} }
//
    int sa = 0, sb = 0, sc = 0, sd = 0;
    int f = 0;
    rep(i,0,cl,1) rep(j,0,acr,1) { int xd = acr + both - i - j;if(xd%2 != 0)continue; int xd1 = xd/2; if(xd1 >= 0 and xd1 <= both and (i + j + xd1 <= n1) and (cl - i + acr - j + both - xd1 <= n1) and (n1 - (i + j + xd1)) >= 0  and (n1 - (i + j + xd1)) <=none){sb=i;sc=j;sd=xd1; sa = n1 - (sb+sc+sd);f = 1; break;} }
    //cout<<sa<<" "<<sb<<" "<<sc<<" "<<sd<<endl;
    if(f == 1){ rep(i,0,sa-1,1) cout<<t0[i]<<" "; rep(i,0,sb-1,1) cout<<t2[i]<<" "; rep(i,0,sc-1,1) cout<<t1[i]<<" "; rep(i,0,sd-1,1) cout<<t3[i]<<" "; return 0;}
    else cout<<"-1"<<endl;
    return 0; 
}