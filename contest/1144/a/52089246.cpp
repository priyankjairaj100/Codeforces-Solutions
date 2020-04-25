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
    while(n--){
        string s;cin>>s; int a = 0, b = 0;
        int x[27]; rep(i,1,26,1) x[i] = 0;
        for(auto c: s) x[c - 'a' + 1]++;
        rep(i,1,26,1) if(x[i]>1) a = 1;
        //rep(i,1,26,1) cout<<x[i]<<endl;
        int st=0, en=0;
        rep(i,1,26,1){ if(x[i]){st = i; break;}}
        rep(i,st+1,26,1){ if(x[i] == 0){en = i; break;} }

        if(en) rep(i,en+1,26,1){ if(x[i]) b = 1; }
        if(a + b == 0){cout<<"YES"<<endl;}
        else cout<<"NO"<<endl;
    }
    return 0; 
}