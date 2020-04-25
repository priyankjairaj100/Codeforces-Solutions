#include <bits/stdc++.h>
#include <string>
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
//using namespace __gnu_pbds;
//#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
//#define ordered_multiset tree<int, null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>
using namespace std;
#define int long long
#define fastio  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
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
    fastio
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s1, s2;
        cin >> s1 >> s2;
        int x = 0;
        vector <int> y;
        rep(i,1,n,1) if(s1[i-1] != s2[i-1]) x++, y.pb(i-1);
        if(x >= 3){
            cout << "NO" << endl;
            continue;
        }
        if(x == 2){
            int i = y[0], j = y[1];
            if((s1[i] == s1[j]) and (s2[j] == s2[i])){
                cout << "YES" << endl;
            }
            else cout << "NO" << endl;
            continue;
        }
        cout << "NO" << endl;
    }
    return 0;
}