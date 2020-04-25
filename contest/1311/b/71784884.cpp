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


int32_t main(){
    jai_shree_ram
    int t;
    cin >> t;
    while(t--){
        int n, mm;
        cin >> n >> mm;
        int a[n+1], p[mm+1];
        rep(i,1,n,1) cin >> a[i];
        int b[n+1];
        rep(i,1,n,1) b[i] = a[i];
        map <int, int> m;
        
        rep(i,1,mm,1) {
            cin >> p[i];
            m[p[i]] = 1;
            if(!m[p[i] + 1]) m[p[i] + 1] = 2;
        }
       // rep(i,1,n,1) cout << m[i] << endl;

        for(int i = 1; i <= n; i++){
            if(m[i] == 1){
                int l = i, r = i;
                for(r = i; r <= n; r++) if(m[r] == 2) break;
                sort(b+l, b+r+1);
                i = r;
            }
        }

        sort(a+1,a+1+n);
        int flag = 0;
        rep(i,1,n,1) if(b[i] != a[i]){
            flag = 1;
            cout << "NO" << endl;
            break;
        }

        if(!flag){
            cout << "YES" << endl;
        }

    }
    return 0; 
}