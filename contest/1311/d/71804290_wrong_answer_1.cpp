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
int MAX = 1e5 + 5;
int MOD = 1e9 + 7;
////////////////////////////////

int lim = 10005;
int ans = MOD;
int ans1;
int a, b, c;
int ax, bx, cx;

void chk(int a1, int b1, int c1){
    ans1 = abs(a - a1) + abs(b - b1) + abs(c - c1);
    if(ans1 <= ans and a1 <= b1 and b1 <= c1){
        ans = ans1;
        ax = a1;
        bx = b1;
        cx = c1;
    }
}

int32_t main(){
    jai_shree_ram
    int t;
    cin >> t;
    while(t--){
        cin >> a >> b >> c;
        ans = MOD;
        for(int a1 = 1; a1 <= lim; a1++){
            
            int b1 = (b/a1) * a1;
            int b2 = ((b/a1) + 1) * a1;
            int b3 = ((b/a1) - 1) * a1;

            if(b1 > 0){
                int c1 = (c/b1) * b1;
                int c2 = (c/b1 + 1) * b1;
                int c3 = (c/b1 - 1) * b1;
                chk(a1, b1, c1);
                chk(a1, b1, c2);
                chk(a1, b1, c3);
            }

            if(b2 > 0){
                int c4 = (c/b2) * b2;
                int c5 = (c/b2 + 1) * b2;
                int c6 = (c/b2 - 1) * b2;
                chk(a1, b2, c4);
                chk(a1, b2, c5);
                chk(a1, b2, c6);
            }

            if(b3 > 0){
                int c7 = (c / b3) * b3;
                int c8 = ((c / b3) + 1) * b3;
                int c9 = ((c / b3 - 1)) * b3;
                chk(a1, b3, c7);
                chk(a1, b3, c8);
                chk(a1, b3, c9);
            }
        }

        cout << ans << endl;
        cout << ax << " "  << bx << " " << cx << endl;
    }
    return 0; 
}