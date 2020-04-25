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

map <int,int> x;

int main(){
    #define int long long
    int n; cin>>n; int a[n+1]; rep(i,1,n,1) {cin >> a[i]; x[a[i]]++;} int ans = 0;
    for(auto y: x){
        int temp = 0;
        rep(i,0,5,1) if(x.find(y.first + i)!= x.end()) temp+=x[y.first+i];
        ans = max(temp, ans);
    }
    cout<<ans<<endl;
    return 0; 
}