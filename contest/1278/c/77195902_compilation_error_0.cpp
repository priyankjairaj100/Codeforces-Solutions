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

int ok(int n, int d){
    int sum = (n*(n+1))/2;
    if(sum < d) return 0;
    return sum%2 == d%2;
}

int32_t main(){
    jai_shree_ram
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[2*n + 1];
        rep(i,1,n+n,1){
            cin >> a[i];
            if(a[i] == 2) a[i] = -1;
        }

        int b[n+1];
        rep(i,n+1,n+n,1) b[i-n] = a[i];
        int pa[n+1], pb[n+2];
        pa[0] = 0, pb[n+1] = 0;
        rep(i,1,n,1) pa[i] = a[i], pa[i] += pa[i-1];
        brep(i,n,1,1) pb[i] = b[i], pb[i] += pb[i+1];
        
        map <int, int> m;
        m[0] = 0;
        rep(i,1,n,1){
            if(!m[pa[i]]) m[pa[i]] = i;
            else m[pa[i]] = max(m[pa[i]], i);
        }
        int ans = MOD;
        
        brep(i,n+1,1,1){
            int curr = pb[i];
            if(!m[-curr] and curr) continue;
            if()
            else{
                int tt = (n - m[-curr]) + (i-1);
                ans = min(ans, tt);
            }
        }

        if(ans == MOD) ans = 2*n;
        cout << ans << endl;
    }

    return 0; 
}