// Kyu bhai, kyu
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
    int m,n; cin >> m >> n;
    bitset <10009> bs[m+1];
    rep(i,0,m-1,1){
        int x; cin>>x;
        rep(j,0,x-1,1){ int y; cin >> y; bs[i][y-1] = 1; }
    }
    rep(i,0,m-1,1) rep(j,i+1,m-1,1) if((bs[i] & bs[j]).none()){cout<<"impossible"<<endl; return 0;}
    cout<< "possible" <<endl;
    return 0; 
}