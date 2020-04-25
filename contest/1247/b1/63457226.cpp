#include <bits/stdc++.h>
#include <string>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define int long long
#define fastio  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define ordered_multiset tree<int, null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>
#define rep(i, a, b, d) for (int i = a; i <= b; i += d)
#define brep(i, a, b, d) for (int i = a; i >= b; i -= d)
#define pb push_back
#define all(x) x.begin(), x.end()
#define pii pair<int, int>
const int MAX = 1e5 + 5;
const int MOD = 1e9 + 7;
//////////////////////////////////


int32_t main(){
    fastio
    int ty; cin >> ty;
    while(ty--){
        int n, k, d; cin >> n >> k >> d;
        int a[n+1]; rep(i,1,n,1) cin >> a[i];
        int c[k+1];
        memset(c,0,sizeof(c));
        set <int> s;
        rep(i,1,d,1){
            c[a[i]]++;
            s.insert(a[i]);
        }
        int ans = s.size();
        rep(i,d+1,n,1){
            int out = a[i-d];
            int occ = c[out];
            if(occ == 1){
                s.erase(out);
            }
            s.insert(a[i]);
            c[out]--;
            c[a[i]]++;
            int h = s.size();
            ans = min(ans, h);
        }
        cout << ans << endl;
    }
    return 0; 
}