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

map<int, int> tot, cnt;
int n;
int a[1000005], BIT[1000005];

void update(int idx, int val){
    while(idx <= n){
        BIT[idx] += val;
        idx += idx & (-idx);
    }
}
 
int sum(int idx){
    if(idx <= 0)    return 0;
    int ans = 0;
    while(idx){
        ans += BIT[idx];
        idx -= idx & (-idx);
    }
    return ans;
}

int32_t main(){
	fastio
    cin >> n;
    rep(i,1,n,1) cin >> a[i], tot[a[i]]++;
    int ans = 0;
    brep(i,n,1,1){
        int req = tot[a[i]] - cnt[a[i]] - 1;
        ans += sum(req);
        cnt[a[i]]++;
        update(cnt[a[i]], 1);
    }
    cout << ans << endl;
    return 0; 
}