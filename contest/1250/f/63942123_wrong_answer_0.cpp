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

int n, z;
int a[2*MAX];

int ok(int x){
    int pa = 1, pb = n - x + 1, mn = MOD;
    rep(i,1,x,1) mn = min(mn, a[pb++] - a[pa++]);
    return (mn >= z);
}

int bs(int lo, int hi){
    if(lo == hi) return lo;
    int mid = (lo + hi+ 1)/2;
    if(ok(mid)) return bs(mid, hi);
    else return bs(lo, mid-1);
}

int32_t main(){
    fastio
    cin >> n >> z;
    rep(i,1,n,1) cin >> a[i];
    sort(a+1,a+1+n);
    cout << bs(0, n/2) << endl;
    return 0; 
}