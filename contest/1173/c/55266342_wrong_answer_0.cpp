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
    int n; cin>>n; int x = 0;
    int a[n+1], b[n+1];
    rep(i,1,n,1) cin>>a[i];
    rep(i,1,n,1) cin>>b[i];
    rep(i,1,n,1) if(b[i] == 1) x = i; b[0] = 0;
    int z = 0;
    rep(i,x+1,n,1){
        int y = i - x;
        if(b[i] <= y and b[i]) z = max(z, b[i] - y + 1);
    }
    int f = 0;
    rep(i,x+1,n,1){
        if(b[i] != i-x+1) f = 1;
    }
    if(!f and b[x-1]==0) cout<< x - 1 <<endl;
    else cout << x + z + n<<endl;
    cout<<z<<" "<<x<<endl;
    return 0;
}