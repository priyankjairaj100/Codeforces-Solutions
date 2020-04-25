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
const int MAX = 1e5 + 5;
const int MOD = 1e9 + 7;
//////////////////////////////////
 
int n, x, y;
int a[MAX];
 
int ok(int z, int ss){
    return (z/x + z/y >= ss);
}
 
int bs(int lo, int hi, int ss){
    if(lo == hi) return lo;
    int mid = (lo + hi)/2;
    if(ok(mid, ss)) return bs(lo, mid, ss);
    else return bs(mid+1, hi, ss);
}
 
int32_t main(){
    fastio
    cin >> n >> x >> y;
    rep(i,1,n,1) {
        cin >> a[i];
        int t = bs(0, 1e18, a[i]);
        if(t%x == 0 and t%y == 0) cout << "Both" << endl;
        else if(t%x == 0) cout << "Vova" << endl;
        else cout << "Vanya" << endl;
    }
    return 0; 
}