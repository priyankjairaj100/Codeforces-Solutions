#include <bits/stdc++.h>
#include <string>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define pii pair<int, int>
#define ordered_set tree<int, null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>
//#define ordered_multiset tree<int, null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>
//#define int long long
#define jai_shree_ram  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, a, b, d) for (int i = a; i <= b; i += d)
#define brep(i, a, b, d) for (int i = a; i >= b; i -= d)
#define pb push_back
#define all(x) x.begin(), x.end()
#define endl '\n'
int MAX = 1e5 + 5;
int MOD = 1e9 + 7;
////////////////////////////////

int k;



int32_t main(){
    jai_shree_ram
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n >> k;
        int x = 1;
        for(;x <= n; x++) if((x*(x+1))/2 >= k) break;

        string ans = "";
        rep(i,1,n,1) ans += 'a';
        ans[x] = 'b';
        k = k - ((x*(x-1))/2);
        ans[k-1] = 'b';

        reverse(all(ans));
        cout << ans << endl;
    }
    return 0; 
}