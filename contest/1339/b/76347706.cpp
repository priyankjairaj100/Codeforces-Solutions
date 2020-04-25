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
int MOD = 1e16 + 7;
////////////////////////////////
 
 
int32_t main(){
    jai_shree_ram
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n+1];
        rep(i,1,n,1) cin >> a[i];
        sort(a+1,a+1+n);
        int pa = 1, pb = n;
        vector <int> v;
        while(pa <= pb){
            if(pa == pb) v.pb(a[pa]);
            else v.pb(a[pa]), v.pb(a[pb]);
            pa++;
            pb--;
        }
        reverse(all(v));
        for(auto x: v) cout << x << " ";
        cout << endl;
    }
    return 0; 
}