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
int n, p;

int bs(int lo, int hi){
    if(lo == hi) return lo;
    int mid = (lo + hi)/2;
}

int32_t main(){
    fastio
    //int n, p;
    cin >> n >> p;
    rep(i,1,40,1){
        int x = i;
        int a = __builtin_popcount(n - x*p);
        int b = n - x*p;
        if(a <= i and i <= b){
            cout << i << endl;
            return 0;
        }
    }
    cout << -1;
    return 0; 
}