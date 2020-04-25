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
#define endl '\n' // for interactive problems comment it out or use fflush
int MAX = 1e5 + 5;
int MOD = 1e9 + 7;
////////////////////////////////


int32_t main(){
    jai_shree_ram
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int a[n+1];
        rep(i,1,n,1) cin >> a[i];
        pii x[n+1];
        int pa = 1, pb = n, z = 1;
        map <int, int> l, r, sumt;

        while(pa <= pb){
            sumt[a[pa] + a[pb]]++;

            int big, small;
            if(a[pa] > a[pb]) small = 1 + a[pb], big = k + a[pa];
            else small = 1 + a[pa], big = k + a[pb]; 
            
            l[small]++;
            r[big]++;
            
            z++;
            pa++;
            pb--;
        }

        int ans = MOD;
        int curr = 0;
        //for(auto d: r) cout << d.first << " " << d.second << endl;

        rep(sum,2,2*k,1){
            curr += l[sum];

            int t0 = curr;
            int t2 = n/2 - t0;
            t0 -= sumt[sum];
            int tans = t0 + 2*t2;
            //cout << sum << " " << sl.size() << " " << t2 << " " << tans <<endl; 
            ans = min(ans, tans);
            curr -= r[sum];
        }

        cout << ans << endl;
    }
    return 0; 
}