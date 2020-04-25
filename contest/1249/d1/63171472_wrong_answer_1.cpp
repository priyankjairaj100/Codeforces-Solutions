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
/////////////////////////////////

int n, k;
multiset <pii> x[205];
int val[205];

int32_t main(){
    fastio
    cin >> n >> k;
    rep(i,1,n,1){
        int l, r; cin >> l >> r;
        x[l].insert({r, i});
        val[l]++;
        val[r+1]--;
    }
    vector <int> m;
    rep(i,1,200,1) val[i] += val[i-1];

    rep(i,1,200,1){
        if(val[i] > k){
            int rem = val[i] - k;
            for(auto it = x[i].rbegin();it != x[i].rend();--it){
                if(rem == 0) break;
                rem--;
                pii ss = *it;
                m.pb(ss.second);
                rep(j,i,ss.first,1) val[j]--;
            }
        }
    }

    cout << m.size() << endl;
    for(auto xx: m) cout << xx << " "; 
    return 0;
}