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
//#define endl '\n' // for interactive problems comment it out or use fflush
int MAX = 1e5 + 5;
int MOD = 1e9 + 7;
////////////////////////////////


 
int32_t main(){
    jai_shree_ram
    map <int, pii> m;
    int a[6] = {4, 8, 15, 16, 23, 42};
    for(auto x: a) for(auto y: a) if(x != y) m[x*y] = {min(x, y), max(x, y)};

    int x, y;
    vector <int> v;

    cout << "? 1 2" << endl;
    cin >> x;

    cout << "? 2 3" << endl;
    cin >> y;

    if(m[x].second == m[y].first) v.pb(m[x].first), v.pb(m[x].second), v.pb(m[y].second);
    else v.pb(m[y].first), v.pb(m[y].second), v.pb(m[x].first);

    cout << "? 4 5" << endl;
    cin >> x;
    cout << "? 5 6" << endl;
    cin >> y;

    
    if(m[x].second == m[y].first) v.pb(m[x].first), v.pb(m[x].second), v.pb(m[y].second);
    else v.pb(m[y].first), v.pb(m[y].second), v.pb(m[x].first);

    for(auto z: v) cout << z << " ";
    cout << endl;
    cout.flush();

    return 0; 
}