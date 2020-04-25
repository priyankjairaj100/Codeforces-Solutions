//aho baka
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


int32_t main(){
    fastio
    int n, x;
    cin>>n>>x;
    if(n==x and n == 1) {cout<<0<<endl; return 0;}
    set <int> rej; rej.insert(0);
    vector <int> pre;
    int lm = (1LL << n) - 1;
    rep(i,1,lm,1){
        if(rej.find(i) == rej.end() and rej.find(i^x) == rej.end()) rej.insert(i), rej.insert(i^x), pre.pb(i); 
    }
    int len = pre.size();
    int a[len+1];
    a[0] = pre[0];
    rep(i,1,len-1,1){
        a[i] = pre[i] ^ pre[i-1];
    }
    cout<<len<<endl;
    rep(i,0,len-1,1) cout<<a[i]<<" ";
	return 0;
}