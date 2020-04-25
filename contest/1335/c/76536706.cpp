#include <bits/stdc++.h>
#include <string>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define pii pair<int, int>
#define ordered_set tree<int, null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>
//#define ordered_multiset tree<int, null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>
#define int long long
#define jai_shree_ram  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, a, b, d) for (int i = a; i <= b; i += d)
#define brep(i, a, b, d) for (int i = a; i >= b; i -= d)
#define pb push_back
#define all(x) x.begin(), x.end()
#define endl '\n'
int MAX = 1e5 + 5;
int MOD = 1e9 + 7;
////////////////////////////////


 
int32_t main(){
    jai_shree_ram
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n+1];
        map <int, int> m;
        set <int> s;
        rep(i,1,n,1){
            cin >> a[i];
            m[a[i]]++;
            s.insert(a[i]);
        }
        int ans = 0;
        int d = s.size();

        for(auto x: m){
            int c = x.second;
            if(c <= d-1) ans = max(ans, c);
            if(c-1 <= d) ans = max(ans, c-1);
            if(d <= c-1) ans = max(ans, d);
            if(d-1 <= c) ans = max(ans, d-1);
        }
        cout << ans << endl;
    }
    return 0; 
}