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
        int a, b;
        cin >> a >> b;
        int steps = 0, curr = 1;
        if(a > b) swap(a, b);
        int a1 = a, b1 = b;
        while(a < b){
            a += curr;
            curr++;
            steps++;
        }
        int ans1 = steps + 2*abs(a - b);

        steps = 0, curr = 1;
        while(1){
            if(a1+curr > b1) break;
            a1 += curr;
            curr++;
            steps++;
        }
        int ans = steps + 2*abs(a-b);
        cout << min(ans, ans1) << endl;
    }    
    return 0; 
}