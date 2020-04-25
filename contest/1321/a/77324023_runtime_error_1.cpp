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
#define endl '\n' // for interactive problems comment it out or use fflush
int MAX = 1e5 + 5;
int MOD = 1e9 + 7;
////////////////////////////////


int32_t main(){
    jai_shree_ram
    int n;
    cin >> n;
    int a[n+1], b[n+1];
    rep(i,1,n,1) cin >> a[i];
    rep(i,1,n,1) cin >> b[i];
    int x = 0, y = 0;
    rep(i,1,n,1){
        if(a[i] == 1 and b[i] == 0) x++;
        else if(a[i] == 0 and b[i] == 1) y++;
    }
    if(x == 0){
        cout << -1 << endl;
    }
    double xx = x, yy = y;
    int ans;
    if(y%x == 0) ans = (y/x) + 1;

    else ans = ceil(yy/xx);
    cout << ans << endl;
    return 0; 
}