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
    int w1,h1,w2,h2; cin>>w1>>h1>>w2>>h2;
    int s = 2* (h1+h2+2) + w1 + w2;
    if(w1 != w2) {s++; s+= abs(w2-w1) - 1;}
    cout<<s<<endl;
    return 0;
}