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
    int n; cin>>n; int x =  ((n+1) % 2 == 0 )? (n+1)/2 : (n+1)/2 + 1;
	cout<<x<<endl;
    rep(i,1,x,1) cout<<"1 "<<i<<endl;
    int k = x;
    rep(i,2,x,1){
        if (k == n)
            break;
        cout<<i<<" "<<x<<endl;
        k++;
    }
    return 0;
}