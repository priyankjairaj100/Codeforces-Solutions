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
        int n, l, r;
        cin >> n >> l >> r;
        if(l == (n*(n-1) + 1)) {cout << 1 << endl; continue;}
        int szc = 2*(n-1), num = 1;
        while(l > szc){
            l -= szc;
            num++;
            szc = 2*(n - num);
        }
        
       // cout << num << " " << l << endl;
        int steps = r - l + 1;
        if(r == n*(n-1) + 1) steps--;
        int id = 0;

        while(steps > 0){
            rep(i, 1, 2 * (n - num), 1){
                id++;
                //cout << id << endl;
                int curr;
                if(i%2 == 1){
                    curr = num;
                }
                else{
                    curr = num + i/2;
                }
                //cout << id << " " << l <<" " << steps<< endl;
                if(id >= l){
                    cout << curr<< " ";
                    steps--;
                    if(steps == 0) break;
                }
            }
            num++;
        }

        if(r == n*(n-1) + 1) cout << 1;
        cout << endl;
    }
    return 0; 
}