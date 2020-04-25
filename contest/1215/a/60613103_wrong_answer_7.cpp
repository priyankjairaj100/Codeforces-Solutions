 //Sanji > Zoro
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
//const int MOD =   998244353;
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


int32_t main(){
    fastio
    int a1, a2; cin >> a1 >> a2;
    int k1, k2, n; cin >> k1 >> k2 >> n;
    int t1 = a1 * (k1 - 1) + a2 * (k2 - 1);
    int ans = 0, ans1 = 0;
    int n1 = n;
    if(t1 >= n){
        ans = 0;
    }
    else{
        int tn = n - t1;
        ans = tn;
    }
    int ans2 = 0;
        int num = 0;
        num += (n / k1);
        if(num > a1) num = a1;
        ans1 += a1;
        n -= ans1*k1;
        ans1 += (n/k2);
    n = n1;
         num = 0;
        num += (n/k2);
        if(num > a2) num = a2;
        ans2 += a2;
        n -= ans2   *k2;
        ans2 += (n/k1);
    cout << ans << " " << min(n1, max(ans1, ans2)) << endl;
    return 0;   
}