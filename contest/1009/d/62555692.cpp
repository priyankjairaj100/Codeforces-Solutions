//Gear Third
#include <bits/stdc++.h>
#include <string>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define int long long
const int MAX = 1e5 + 5;
const int MOD = 1e9 + 7;
#define fastio  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define ordered_multiset tree<int, null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>
#define rep(i, a, b, d) for (int i = a; i <= b; i += d)
#define brep(i, a, b, d) for (int i = a; i >= b; i -= d)
#define pb push_back
#define all(x) x.begin(), x.end()
#define pii pair<int, int>
//auto cmp = [](int a, int b) {return a > b ;};
//set<int, decltype(cmp)> s(cmp);

int32_t main(){
    fastio
    int n, m; cin >> n >> m;
    vector <pii> no;
    int tot = 0;
    rep(i,1,n,1){
        if(tot == m) break;
        rep(j,i+1,n,1){
            if(__gcd(i,j) == 1) no.pb({i, j}), tot++;
            if(tot == m) break;
        }
    }
    if(tot == m and m >= n-1){
        cout <<"Possible" << endl;
        for(auto x: no) cout << x.first << " " << x.second << endl;
    }
    else cout << "Impossible" << endl;
    return 0;   
}