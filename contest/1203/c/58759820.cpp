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

int solve(int n){
    int ans = 0;
    rep(i,1,sqrt(n),1){
        if(n%i == 0){
            if(n/i == i) ans++;
            else ans += 2;
        }
    }
    return ans;
}

int32_t main(){
	fastio
    int n; cin >> n;
    int a[n+1], x = 1;
    rep(i,1,n,1){cin >> a[i];}
    x = a[1];
    rep(i,2,n,1) x = __gcd(x, a[i]);
    cout << solve(x) <<endl;
    return 0;  
}