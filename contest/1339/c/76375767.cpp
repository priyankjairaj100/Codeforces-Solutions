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

int n;
int a[100005];


 
int32_t main(){
    jai_shree_ram
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        rep(i,1,n,1) cin >> a[i];
    
        int d = 0, m = a[1];
        rep(i,2,n,1){
            d = max(d, m - a[i]);
            m = max(m, a[i]);
        }
        int x = 0, ans = 0, y = 1;

        while(x < d){
            if(!x) x++;
            else y= y*2, x+=y;
            ans++;
        }
        cout << ans << endl;
    } 
    return 0; 
}