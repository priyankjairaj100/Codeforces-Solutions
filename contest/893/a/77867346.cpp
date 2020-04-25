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
const int a_size = 1e4 + 5;
////////////////////////////////


int32_t main(){
    jai_shree_ram
    int n;
    cin >> n;
    set <int> s;
    s.insert(1);
    s.insert(2);
    int flag = 0;

    rep(i,1,n,1){
        int x;
        cin >> x;
        int y = *s.begin(), z = *s.rbegin();
        if(x == y) y = z;
        else if(x == z);
        else {
            flag = 1;
            cout << "NO" << endl;
            return 0;
        }
        rep(k,1,3,1){
            s.insert(k);
        }
        s.erase(y);
    }

    cout << "YES" << endl;
    return 0; 
}