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
    int n, w, h;
    cin >> n >> w >> h;
    multiset <pair<pii, int>> s;
    rep(i,1,n,1){
        int x, y; cin >> x >> y;
        s.insert({{x, y}, i});
    }
    pair <pii, int> curr = {{w, h}, 0};
    vector <int> ans;

    while(s.upper_bound(curr) != s.end()){
        auto it = *s.upper_bound(curr);
        if(((it.first).first > (curr.first).first) and ((it.first).second > (curr.first).second)) ans.pb(it.second);
        curr = it;
    }
    cout << ans.size() << endl;
    for(auto x: ans) cout << x << " ";
    return 0; 
}