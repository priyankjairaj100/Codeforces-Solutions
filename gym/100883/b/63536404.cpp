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
    int n; cin >> n;
    int u[n+1];
    rep(i,1,n,1) cin >> u[i];
    map <int, int> m;
    set <int> s;
    multiset <int> ms;
    rep(i,1,n,1) m[u[i]]++;
    for(auto x: m) s.insert(x.second), ms.insert(x.second);
    
    brep(i,n,1,1){
        if(s.size() == 2){
            int a = *s.begin();
            int b = *s.rbegin();
            if(b - a == 1 and ms.count(b) == 1) {
                cout << i;
                return 0;
            }
            if(a == 1 and ms.count(1) == 1){
                cout << i;
                return 0;
            }
        }
        if(s.size() == 1){
            int a = *s.begin();
            if(a == 1){
                cout << i;
                return 0;
            }
        }
        int x = ms.count(m[u[i]]);
        if(x == 1){
            s.erase(m[u[i]]);
        }
        auto itr = ms.lower_bound(m[u[i]]);
        ms.erase(itr);
        m[u[i]]--;
        x = ms.count(m[u[i]]);
        if(x == 0){
            s.insert(m[u[i]]);
        }
        ms.insert(m[u[i]]);
    }
    return 0; 
}