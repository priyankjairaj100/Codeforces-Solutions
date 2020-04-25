//la_flame_ never dies out.

#include <bits/stdc++.h>
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

int32_t main()
{
    fastio
    int n; cin>>n;
    int a[n+1]; rep(i,1,n,1) cin>>a[i];
    int ans = 0, ans1 = 0;
    vector <int> e,o;
    int x=0,y=0, esum = 0, osum = 0;
    rep(i,1,n,1){if(a[i]%2==0){e.pb(a[i]); esum+=a[i];} else{o.pb(a[i]); osum+=a[i];}}
    sort(e.begin(), e.end());
    sort(o.begin(), o.end());
    x = e.size(), y = o.size();
    int i = 1;
    if(x > y){
    while(i<= y+1){ esum -= e[x-i]; i++; } osum = 0;
    ans = esum + osum; cout<<ans<<endl; return 0;}
    i = 1;
    if(y > x){
    while(i<= x+1){ osum -= o[y-i]; i++; } esum = 0;
    ans = esum + osum; cout<<ans<<endl; return 0;}
    //cout<<ans<<" "<<ans1<<endl;
    cout<<0<<endl;
    return 0; 
}