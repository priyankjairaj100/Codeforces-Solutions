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
        int n, s, k;
        cin >> n >> s >> k;
        int a[k+1];
        map <int, int> m;
        rep(i,1,k,1) {
            cin >> a[i];
            m[a[i]] = 1;
        } 
        int u = MOD, l = MOD;
        rep(i,s,n,1){
            if(!m[i]){
                u = i - s;
                break;
            }
        }
        brep(i,s,1,1){
            if(!m[i]){
                l = s - i;
                break;
            }
        }
        cout << min(l, u) << endl;
    }
    return 0;
}