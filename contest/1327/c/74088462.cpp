#include <bits/stdc++.h>
#include <string>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define pii pair<int, int>
#define ordered_set tree<int, null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>
//#define ordered_multiset tree<int, null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>
#define int long long
#define jai_shree_ram  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, a, b, d) for (int i = a; i <= b; i += d)
#define brep(i, a, b, d) for (int i = a; i >= b; i -= d)
#define pb push_back
#define all(x) x.begin(), x.end()
#define endl '\n'
int MAX = 1e5 + 5;
int MOD = 1e9 + 7;
////////////////////////////////


int32_t main(){
    jai_shree_ram
    int n, m, k;
    cin >> n >> m >> k;
    int sx, sy, fx, fy;
    rep(i,1,k,1) cin >> sx >> sy;
    rep(i,1,k,1) cin >> fx >> fy;
    int cc = 2*n*m;
    int ans = n*m + n + m - 2;
    cout << ans << endl;

    rep(i,1,n-1,1) cout << "U";
    rep(i,1,m-1,1) cout << "L";
    rep(i,1,n,1){
        if(i%2){
            rep(j,1,m-1,1) cout <<"R";
            cout << "D";
        }
        else{
            rep(j,1,m-1,1) cout << "L";
            cout << "D";
        }
    }
    return 0; 
}