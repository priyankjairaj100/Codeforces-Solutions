#include <bits/stdc++.h>
#include <string>
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
//using namespace __gnu_pbds;
using namespace std;
//#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
//#define ordered_multiset tree<int, null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>
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
    int t; cin >> t;
    while(t--){
        int x; cin >> x;
        if(x <= 20 and x >= 16){
            cout << "YES" << endl;
            continue;
        }
        if(x < 16){
            cout << "NO" << endl;
            continue;
        }
        int st = (x - 1)/14;
        if(14*st + 6 >= x) cout <<"YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}