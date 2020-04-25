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

int n, k; 
string s;
int pre[MAX]; 
int mn = MOD, mn_id = -1; 
vector <int> lx[MAX];

int32_t main(){
    fastio
    cin >> n >> k;
    cin >> s;
    rep(i,0,n-1,1){
        if(s[i] == '0') pre[i+1] = 1;
        pre[i+1] += pre[i];
    }
    rep(i,1,n-k,1){
        int f = pre[i-1] + k+1;
        int it = lower_bound(pre+i, pre+n, f) - (pre);
        int c = pre[it] - pre[i-1];
        if(c == k+1){
            int len = it - i;
            if(len <= mn){
                lx[len].pb(i);
                mn = len;
            }
        }
    }
    int ans = MOD;
    for(auto x: lx[mn]){
        vector <int> v;
        rep(i,x,x+mn,1){
            if(s[i-1] == '0') v.pb(i+1);
        }
        int e1 = v[0], e2 = v[k];
        rep(i,0,k,1) ans = min(ans, max(abs(v[i] - e1), abs(v[i] - e2)));
    }
    cout << ans << endl;
    return 0;   
}