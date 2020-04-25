//IWNLA
#include <bits/stdc++.h>
#include <string>
using namespace std;
 
#define int long long
typedef long double LD;
 
const int MAX = 1e5 + 5;
const int MOD = 1e9 + 7;
const LD EPS = 1e-10;
const LD PI = acos(-1.0);
#define fastio                        \
ios_base::sync_with_stdio(false); \
cin.tie(NULL);                    \
cout.tie(NULL);
#define rep(i, a, b, d) for (int i = a; i <= b; i += d)
#define brep(i, a, b, d) for (int i = a; i >= b; i -= d)
#define pb push_back
#define pii pair<int, int>
 
 
int32_t main(){
    fastio
    int q; cin >> q;
    while(q--){
        int n,k; cin >>n>>k;
        string s; cin >> s;
        int a[n+1];
        rep(i,1,n,1){
            if(s[i-1] == 'R') a[i] = 0;
            else if(s[i-1] == 'G') a[i] = 1;
            else a[i] = 2;
        }
        int ans = MOD;
        rep(i,1,n-k+1,1){
            rep(p,1,3,1){
            int d = 0;
            rep(j,i,i+k-1,1){ if(a[j] != (p+j)%3) d++; }
            ans = min(ans, d);
            }
        }
        cout<<ans<<endl;
    }
    return 0;   
}