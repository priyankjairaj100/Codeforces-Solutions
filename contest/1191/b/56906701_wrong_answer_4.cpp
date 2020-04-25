//aho baka
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

map <string, int> m;
string s[4];

int32_t main()
{
    fastio
    int m1 = 0;
    rep(i,1,3,1){cin>>s[i]; m[s[i]]++; if(m[s[i]] == 3) {cout<<0; return 0;} m1 = max(m1, m[s[i]]);}
    vector <int> x[3];
    rep(i,1,3,1) if(s[i][1] == 's') x[0].pb(s[i][0] - '0');
    rep(i,1,3,1) if(s[i][1] == 'p') x[1].pb(s[i][0] - '0');
    rep(i,1,3,1) if(s[i][1] == 'm') x[2].pb(s[i][0] - '0');
    int id = -1, num = 0;
    rep(i,0,2,1) if(x[i].size() >= 2) id = i, num = x[i].size();
    if(id == -1) {cout<<2<<endl; return 0;}
    sort(x[id].begin(), x[id].end());
    if(num == 3 and x[id][0] - x[id][1] == -1 and x[id][2] - x[id][1] == 1){ cout<<0<<endl; return 0;}
    if(num == 2 and x[id][0] - x[id][1] == -1) {cout<<1<<endl; return 0;}
    cout<< min(m1,2LL) <<endl;
    return 0;
}