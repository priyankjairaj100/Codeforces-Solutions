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
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int k[n+1];
        map <int, int> m, d;
        int nd = 0;
        rep(e,1,n,1){
            cin >> k[e];
            int f = 0;
            rep(i,1,k[e],1){
                int x; cin >> x;
                if(!m[x] and !f) {
                    f = 1;
                    m[x] = 1;
                    d[e] = 1;
                    nd++;
                }
            }
        }
        if(nd == n){
            cout << "OPTIMAL" << endl;
            continue;
        }
        else{
            cout << "IMPROVE" << endl;
        }
        int p,q;
        rep(i,1,n,1) if(!m[i]) q = i;
        rep(i,1,n,1) if(!d[i]) p = i;
        cout << p << " " << q << endl;
    }
    return 0; 
}