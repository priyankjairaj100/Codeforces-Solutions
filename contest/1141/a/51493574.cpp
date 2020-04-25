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
    int n, m; cin>>n>>m;
    if(m%n != 0 or n >m){ cout<<"-1"<<endl; return 0; }
    m/=n;
    int a = 2, b = 0;
    while( m % a == 0 ){ b++; a*=2; }
    int c = 3, d = 0;
    while( m % c == 0 ){ d++; c*=3; }
    //cout<<b<<d<<endl;
    if( (int)pow(2,b) * (int)pow(3,d) == m ){ cout<<b+d<<endl; return 0; }
    cout<<"-1"<<endl;
    return 0;  
}