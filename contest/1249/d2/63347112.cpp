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

int l[2*MAX], r[2*MAX];
set <pii> les[2*MAX], res[2*MAX], currs;

int32_t main(){
    fastio
    int n, k;
    cin >> n >> k;
    rep(i,1,n,1){
        cin >> l[i] >> r[i];
        les[l[i]].insert({r[i], i});
        res[r[i]].insert({r[i], i});
    }
    vector <int> ans;

    rep(i,1, 200000, 1){
        for(auto cx: les[i]) currs.insert(cx);
        if(currs.size() > k){
            int rem = currs.size() - k;
            set <pii> del;
            for(auto it = currs.rbegin(); rem ; ++it){
                --rem;
                pii tx = *it;
                ans.pb(tx.second);
                del.insert(tx);
            }
            for(auto it: del) currs.erase(it); 
        }
        for(auto it: res[i]) currs.erase(it);
    }
    
    cout << ans.size() << endl;
    for(auto i: ans) cout << i << " ";
    return 0;
}