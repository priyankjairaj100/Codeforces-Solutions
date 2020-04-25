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
    int n; cin>>n; set <int> x;
    rep(i,1,n,1){ int t; cin>>t; x.insert(t); }
    int t = x.size();
    if(t == 1) { cout<<0; }
    if(t == 2) { int a = *x.begin(), b = *x.rbegin(); if(abs(b-a) % 2 == 0) cout<<abs(b-a)/2<<endl; else cout<<abs(b-a); }
    if(t>3){ cout<<"-1"; return 0; }
    if(t == 3){ vector <int> a; for(auto y: x) a.pb(y); sort(a.begin(),a.end()); if(a[0] - a[1] == a[1] - a[2]){cout<<abs(a[0]-a[1])<<endl;} else {cout<<"-1"<<endl; return 0;} }
    return 0; 
}