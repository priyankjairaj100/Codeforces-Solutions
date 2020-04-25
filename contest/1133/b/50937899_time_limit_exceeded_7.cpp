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


multiset <int> x;
 
int32_t main(){
    fastio
    int n,k; cin>>n>>k; int a[n+1];
    int ans = 0;
    rep(i,1,n,1) {
        cin>>a[i];
        int f = 0;
        for(auto y: x){
            if((y + a[i])%k == 0){
                x.erase(y);
                ans++;
                f = 1;
                break;
            }
        }
        if(f) continue;
        else x.insert(a[i]);
    }
    cout<<ans*2<<endl;
    return 0;  
}