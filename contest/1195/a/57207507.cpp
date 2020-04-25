//I will become the king of pirates.. no wait
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

int t[10000];

int32_t main()
{
    fastio
    int n, k; cin>>n>>k;
    int a[n+1];
    rep(i,1,n,1){cin>>a[i]; t[a[i]]++;} 
    int x = (n+1)/2;
    int ans = 0, f = 0;
    rep(i,1,n,1){
        if(t[a[i]] >= 2){
            while(t[a[i]] >= 2){
                t[a[i]] -= 2;
                ans += 2;
                x--;
                if(!x) break;
            }
        } 
    }
    if(!x) {cout<<ans<<endl; return 0;}
    int z = 0;
    rep(i,1,n,1){
        if(t[a[i]]) z++;
    }
    if(x < z){
        ans += x;
    }
    else ans += z;
    cout<<ans<<endl;
    return 0;
}