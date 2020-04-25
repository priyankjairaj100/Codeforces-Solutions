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
#define endl '\n' // for interactive problems comment it out or use fflush
int MAX = 1e5 + 5;
int MOD = 1e9 + 7;
const int a_size = 1e4 + 5;
////////////////////////////////

int n, m, nx, ny, ans = 0;
int a[40];
vector <int> x, y;

getsum1(){
    int b[nx+1];
    rep(i,1,nx,1) b[i] = a[i];
    int tot = (1 << nx) - 1, sum;
    rep(i,0,tot,1){
        sum = 0;
        rep(j,0,nx,1) if(i & (1 << j)) sum += b[j+1], sum %= m;
        x.pb(sum);
    }
}

getsum2(){
    int b[ny+1];
    rep(i,1,ny,1) b[i] = a[i+nx];
    int tot = (1 << ny) - 1, sum;
    rep(i,0,tot,1){
        sum = 0;
        rep(j,0,ny,1) if(i & (1 << j)) sum += b[j+1], sum %= m;
        y.pb(sum);
    }
}

solve(int curr){
    int req = m - curr - 1;
    int best = y[ lower_bound(y.begin(), y.end(), -req) - y.begin() ];
    ans = max(ans, curr-best);
}


int32_t main(){
    jai_shree_ram
    cin >> n >> m;
    rep(i,1,n,1){
        cin >> a[i]; 
        a[i] %= m;
    }
    nx = n/2, ny = n - n/2;
    getsum1();
    getsum2();
    rep(i,0, y.size()-1,1) y[i] = -y[i];
    sort(all(y));
    for(auto curr: x) solve(curr);
    cout << ans << endl;
    return 0; 
}