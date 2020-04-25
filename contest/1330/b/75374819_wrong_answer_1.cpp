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
        int n;
        cin >> n;
        int a[n+1];
        map <int, int> m;
        rep(i,1,n,1) cin >> a[i];
        int pre[n+2], pst[n+2];
        rep(i,0,n+1,1) pre[i] = -1, pst[i] = -1;
        int mx = 0, cnt = 0;
        
        pre[0] = 0;
        pst[n+1] = 0;

        rep(i,1,n,1){
            m[a[i]]++;
            mx = max(mx, a[i]);
            if(m[a[i]] > 1 or mx!=i){
                pre[i] = 0;
            }
            else{
                pre[i] = 1;
            }
        }

        mx = 0;
        m.clear();
        
        brep(i,n,1,1){
            //cout << a[i] << endl;
            m[a[i]]++;
            mx = max(mx, a[i]);
            //cout << mx <<" "<<m[a[i]] << endl;
            if(m[a[i]] > 1 or mx != (n-i+1)){
                pst[i] = 0;
            }
            else{
                pst[i] = 1;
            }
            //cout << pst[i] << endl;
        }

        vector <pii> ans;
        rep(i,1,n-1,1){
            //cout << pst[i] << endl;
            if(pre[i] == 1 and pst[i+1] == 1){
                ans.pb({i, n - i});
            }
        }

        cout << ans.size() << endl;
        for(auto d: ans) cout << d.first << " " << d.second << endl;
    }
    return 0; 
}