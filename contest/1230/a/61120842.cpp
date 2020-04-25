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

int32_t main(){
    fastio
    int a[5];
    rep(i,1,4,1) cin >>a[i];
    sort(a+1,a+5);
    int ans = 0;
    if(a[4] == a[1] + a[2] + a[3]) ans = 1;
    else if(a[1] + a[2] == a[3] + a[4]) ans = 1;
    else if(a[1] + a[3] == a[2] + a[4]) ans = 1;
    else if(a[1] + a[4] == a[2] + a[3]) ans = 1;
    if(ans) cout <<"YES"<<endl;
    else cout << "NO"<<endl;
    return 0;
}
