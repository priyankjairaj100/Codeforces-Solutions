#include <bits/stdc++.h>
#include <string>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define int long long
#define fastio  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define ordered_multiset tree<int, null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>
#define rep(i, a, b, d) for (int i = a; i <= b; i += d)
#define brep(i, a, b, d) for (int i = a; i >= b; i -= d)
#define pb push_back
#define all(x) x.begin(), x.end()
#define pii pair<int, int>
const int MAX = 1e5 + 5;
const int MOD = 1e9 + 7;
//////////////////////////////////


int32_t main(){
    fastio
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s[55];
        int tt = 0;
        rep(i,1,n,1) cin >> s[i];
        int oc = 0, tc = 0;
        rep(i,1,n,1) for(auto c: s[i]){
            if(c == '1') oc++;
            else tc++;
        }
        tt = oc + tc;
        if(tt%2 == 1){
            cout << n << endl;
            continue;
        }
        if(oc%2 == 0 and tc%2 == 0){
            cout << n << endl;
            continue;
        }
        cout << n-1 << endl;
    }
    return 0;
}