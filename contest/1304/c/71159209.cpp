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

int lies(int p, int l, int h){
    return (p >= l and p <= h);
}

int32_t main(){
    jai_shree_ram
    int q; cin >> q;
    while(q--){
        int n, m; cin >> n >> m;
        int l[n+2], r[n+2], t[n+2];
        rep(i,1,n,1){
            cin >> t[i] >> l[i] >> r[i];
        }
        t[n+1] = MOD;
        l[n+1] = -MOD;
        r[n+1] = MOD;

        int lid = m;
        int rid = m;
        int flag = 0;
        t[0] = 0;
        rep(i,1,n,1){
            int dt = t[i] - t[i-1];
            int l1 = lid - dt;
            int r1 = rid + dt;
        
            if(l1 > r[i] or r1 < l[i]){
                flag = 1;
                break;
            }

            l1 = max(l1, l[i]);
            r1 = min(r1, r[i]);

            lid = l1;
            rid = r1;
        }
        if(!flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}