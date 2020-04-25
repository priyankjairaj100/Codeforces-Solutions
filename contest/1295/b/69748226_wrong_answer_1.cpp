#include <bits/stdc++.h>
#include <string>
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
//using namespace __gnu_pbds;
using namespace std;
//#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
//#define ordered_multiset tree<int, null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>
#define int long long
#define jai_shree_ram  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
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
    jai_shree_ram
    int t; cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        string s; cin >> s;

        int c = 0, cc = 0, tx = 0;

        rep(i,0,n-1,1){
            if(s[i] == '1') c++;
            else cc++;

            if(cc - c == x) tx++;
        }

        int f = cc - c;
        
        if(!f and tx){
            cout << -1 << endl;
            continue;
        }

        c=0, cc = 0, tx = 0;
        if (x == 0)
        {
            tx++;
        }

        rep(i,0,n-1,1){
            if(s[i] == '1') c++;
            else cc++;
            int tt = cc - c;
            int num = (x - tt);
            if(num >= 0 and num%f == 0 and num/f >=0){
                
                tx++;
            }
        }
        cout << tx << endl;
    }
    return 0;
}