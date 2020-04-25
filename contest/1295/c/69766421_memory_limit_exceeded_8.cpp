#include <bits/stdc++.h>
#include <string>
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
//using namespace __gnu_pbds;
using namespace std;
//#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
//#define ordered_multiset tree<int, null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>
#define int long long
#define jai_shree_ram  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, a, b, d) for (int i = a; i <= b; i += d)
#define brep(i, a, b, d) for (int i = a; i >= b; i -= d)
#define pb push_back
#define all(x) x.begin(), x.end()
#define pii pair<int, int>
#define endl '\n'
const int MAX = 1e5 + 5;
const int MOD = 1e9 + 7;
////////////////////////////////

set<int> m[26];
int ans;
int flag;
int curr, nf, n, nn;
string ttt;

void solve(string tt){
    curr = -1;
    nf = 0;
    n = tt.length();

    rep(i,0,n-1,1){
        if(m[tt[i] - 'a'].upper_bound(curr) == m[tt[i] - 'a'].end()) break;
        curr = *m[tt[i] - 'a'].upper_bound(curr);
        nf++;
    }
    if(!nf){
        flag = 1;
        return;
    }
    ans++;
    ttt = tt.substr(nf);
    if(!ttt.length()) return;
    solve(ttt);
}

int32_t main(){
    jai_shree_ram
    int tc; cin >> tc;
    string s, t;
    while(tc--){
        cin >> s >> t;
        ans = 0;
        flag = 0;
        rep(i,0,25,1) m[i].clear();
        int nn =  s.length();
        rep(i,0,nn-1,1) m[s[i] - 'a'].insert(i);
        solve(t);
        if(flag) cout <<-1 << endl;
        else cout << ans << endl;
    }
    return 0;
}