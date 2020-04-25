//aho bakaa
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
    int a,b,c; cin>>a>>b>>c;
    int ans = 0;
    if(a == b) ans = 2*a + 2*c;
    else ans = min(a,b) * 2 + 1 + 2*c;
    cout<<ans<<endl;
	return 0;
}