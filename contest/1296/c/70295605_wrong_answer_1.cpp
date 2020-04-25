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



int32_t main(){
    jai_shree_ram
    int t; cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int p1[n+1], p2[n+1];
        rep(i,0,n,1) p1[i] = 0;
        rep(i,0,n,1) p2[i] = 0;
        int ans = MOD*100;
        pii aa;
        map <pii, vector <int>> m;
        m[{0,0}].pb(0);

        rep(i,1,n,1){
            if(s[i-1] == 'U') p1[i] = 1;
            if(s[i-1] == 'D') p1[i] = -1;
            if(s[i-1] == 'L') p2[i] = 1;
            if(s[i-1] == 'R') p2[i] = -1;
            p1[i] += p1[i-1];
            p2[i] += p2[i-1];
            
            m[{p1[i], p2[i]}].pb(i);
        }

        for(auto x: m){
            vector <int> v = x.second;
            if(v.size() <= 1) break;
            int nn = v.size();

            rep(i,1,nn-1,1){
                int len = v[i] - v[i-1];
                if(ans >= len){
                    ans =  len;
                    aa = {v[i-1] + 1, v[i]};
                }
            }
        }


        if(ans == MOD or (aa.second == aa.first)) cout << -1 << endl;
        else cout << aa.first << " " << aa.second << endl;
    }
    return 0;
}