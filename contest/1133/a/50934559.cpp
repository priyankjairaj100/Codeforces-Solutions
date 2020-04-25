//la_flame_ never dies out.

#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef long double LD;

const int MAX	= 1e5 + 5;
const int MOD	= 1e9 + 7;
const LD  EPS	= 1e-10;
const LD PI = acos(-1.0);
#define fastio			ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define rep(i,a,b,d) for(int i = a; i<=b; i+=d)
#define brep(i,a,b,d) for(int i = a; i>=b; i-=d)
#define pb push_back
#define pii pair<int, int>


int32_t main(){
    fastio
    int a,b,c,d; string x,y; cin>>x>>y; a = ((x[0]-'0') * 10 +  (x[1] - '0')) * 60 + (x[3] - '0')*10 + (x[4] - '0');
    b = ((y[0]-'0') * 10 +  (y[1] - '0')) * 60 + (y[3] - '0')*10 + (y[4] - '0');
    int m = (a+b)/2;
    c = m/60; d = m%60;
    if(c < 10) cout<<"0"<<c<<":";
    else{ cout<<c<<":"; }
    if(d<10){ cout<<"0"<<d; }
    else{ cout<<d;}
    return 0;  
}