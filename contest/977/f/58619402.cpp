//IWNLA
#include <bits/stdc++.h>
#include <string>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define int long long
typedef long double LD;
const int MAX = 1e5 + 5;
const int MOD = 1e9 + 7;
const LD EPS = 1e-10;
const LD PI = acos(-1.0);
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

map <int, int> m;
int a[200005];

int32_t main(){
	fastio
    int n; cin >> n;
    rep(i,1,n,1) cin >> a[i];
    rep(i,1,n,1){
        if(m.find(a[i] - 1) != m.end()) m[a[i]] = m[a[i] - 1] + 1;
        else m[a[i]] = 1;
    }
    pii ans = {0,0};
    for(auto x : m) if(x.second > ans.second) ans = x;
    cout << ans.second << endl;
    int st = ans.first - ans.second + 1;
    rep(i,1,n,1){
        if(a[i] == st) {cout << i << " "; if(st == ans.first) break; st++;}
    }
    return 0; 
}