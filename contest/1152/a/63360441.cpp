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
    int n, m;
    cin >> n >> m;
    int o = 0, e= 0;
    rep(i,1,n,1){
        int t; cin >> t;
        if(t%2) o++;
        else e++;
    }
    int o1 = 0, e1 = 0;
    rep(i,1,m,1){
        int t;
        cin >> t;
        if(t%2) o1++;
        else e1++;
    }
    cout << min(e1, o) + min(o1, e) << endl;
    return 0;
}