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
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s; cin>>s; int ans = 0;
        int f = n, l = n;
        if(n == 1) { cout<<0<<endl; continue; }
        rep(i,0,n-1,1) if(s[i] == '>') {f = i+1; break;}
        brep(i,n-1,0,1) if(s[i] == '<') {l = i+1; break;}
        l = n - l + 1; 
        //cout<<f<<" "<<l<<endl
        ans = min( (min(f - 1, n - f + 1)), min(l - 1, n - l + 1) );
        cout<<ans<<endl;
    }
    return 0;  
}