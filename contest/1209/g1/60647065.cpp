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

int cnt[200005], last[200005];

int32_t main(){
    fastio
    int n, k; cin >> n >> k;
    int a[n+1];
    rep(i,1,n,1){
        cin >> a[i];
        cnt[a[i]]++;
        last[a[i]] = i;
    }
    int ans = 0;
    for(int i = 1;i <= n;){
        int x = last[a[i]];
        set <int> s;
        rep(j,i,x,1){
            x = max(x, last[a[j]]);
            s.insert(a[j]);
        }
        int mx = 0;
        for(auto y : s) mx = max(mx, cnt[y]);
        //cout << i << " " << x << " " << mx << endl;
        ans += (x - i + 1 - mx);
        i = x + 1;
    }
    cout << ans << endl;
    return 0;   
}