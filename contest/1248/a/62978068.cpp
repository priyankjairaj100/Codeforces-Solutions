//Gear Third
#include <bits/stdc++.h>
#include <string>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define int long long
const int MAX = 1e5 + 5;
const int MOD = 1e9 + 7;
#define fastio  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define ordered_multiset tree<int, null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>
#define rep(i, a, b, d) for (int i = a; i <= b; i += d)
#define brep(i, a, b, d) for (int i = a; i >= b; i -= d)
#define pb push_back
#define all(x) x.begin(), x.end()
#define pii pair<int, int>



int32_t main(){
    fastio
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int o1 = 0, o2 = 0;
        int a[n+1]; rep(i,1,n,1){
            cin >> a[i];
            if(a[i]%2) o1++;
        }
        int m; cin >> m;
        int b[m+1];
        rep(i,1,m,1){
            cin >> b[i];
            if(b[i]%2) o2++;
        }
        int ans = 0;
        ans += o1 * o2;
        ans += (n - o1) * (m - o2);
        cout << ans <<endl;
    }
    return 0;    
}