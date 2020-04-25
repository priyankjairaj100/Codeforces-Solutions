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
/*__________________________________________*/

int deg[10], ass[10];

int32_t main(){
    fastio
    int n, m; cin >> n >> m;
    rep(i,1,m,1){
        int x, y; cin >> x >> y;
        deg[x]++;
        deg[y]++;
    }
    if(n <= 6) {cout <<m << endl; return 0;}
    //int ans = 0;
    sort(deg+1,deg+1+7);
    int ans = m - deg[1];
    if(deg[1]) ans++;
    cout << ans << endl;
    return 0;
}
