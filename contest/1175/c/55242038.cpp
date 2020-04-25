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
	int t; cin>>t;
    while(t--){
        int n,k, min = MOD, x;
        cin>>n>>k; int a[n+1]; rep(i,1,n,1) cin>>a[i];
        rep(i,1,n-k,1){
            if(abs(a[i] - a[i+k]) <= min){
                min = abs(a[i] - a[i+k]);
                x = a[i] + (a[i + k] - a[i])/2;
            }
        }
        cout<<x<<endl;
    }
}