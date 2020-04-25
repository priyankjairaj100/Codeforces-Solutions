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
    int a,b,c,d; cin>>a>>b>>c>>d;
    if(a == 0 and b == 0 and c== 0 and d==0){ cout<<"1"<<endl; return 0;}
    if(a!=d){ cout<<"0"<<endl; return 0; }
    if(a + b == 0 and c != 0) {cout<<"0"<<endl; return 0;}
    cout<<"1"<<endl;
    return 0;  
}