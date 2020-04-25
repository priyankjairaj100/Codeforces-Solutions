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
#define endl '\n'
const int MAX = 1e5 + 5;
const int MOD = 1e9 + 7;
//////////////////////////////////

const int maxn = 1e5 + 5;
vector<int> V[maxn];
int a[maxn];

int32_t main(){
    fastio
    int n;
    cin >> n;
    long long ans = n,cnt = n;
    rep(i,0,n-1,1){
        cin >> a[i];
        V[a[i]].push_back(i);
    }
    sort(a,a + n);
    int now = 0;
    vector<int>::iterator it;
    rep(i,0,n-1,1){
        it = lower_bound(V[a[i]].begin(),V[a[i]].end(),now);
        if(it == V[a[i]].end()){
            ans += cnt;
            now = 0;
            it = lower_bound(V[a[i]].begin(),V[a[i]].end(),now);
        }
        now = *it;
        V[a[i]].erase(it);
        cnt --;
    }
    cout << ans << endl;
    return 0; 
}