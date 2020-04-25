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

int a, b;

int ok(int x, int y){
    return (x>= 1 and x<= a and y>=1 and y<= b);
}

int32_t main(){
    jai_shree_ram
    int t; cin >> t;
    while(t--){
        int x, y;
        cin >> a >> b >> x >> y;
        x++;
        y++;

        int a1 = 0, a2 = 0, a3 = 0, a4 = 0;
        
        if(ok(x-1, b)) a1 = (x-1) * b;
        if(ok(a-x, b)) a2 = (a-x) * b;
        if(ok(a, b-y)) a3 = a * (b-y);
        if(ok(a, y-1)) a4 = a * (y-1);

        int m1 = max(a1, a2);
        int m2 = max(a3, a4);
        int a5 = max(m1, m2);

        cout << a5 << endl;
    }
    return 0; 
}