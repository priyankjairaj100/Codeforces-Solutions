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
const int a_size = 2e5 + 5;
////////////////////////////////

int n;
pii a[a_size];
int BIT[a_size];


void update(int x, int del){
    for(; x <= a_size-1; x = x + (x& -x)) BIT[x] += del;
}

int query(int x){
    int ret = 0;
    for(; x >= 1; x = x - (x& -x)) ret += BIT[x];
    return ret;
}

int32_t main(){
    jai_shree_ram
    int n, q;
    cin >> n >> q;
    int a[n+1];
    rep(i,1,n,1) cin >> a[i];
    rep(i,1,q,1){
        int l, r;
        cin >> l >> r;
        update(l, 1);
        update(r+1, -1);
    }
    sort(a+1,a+1+n, greater<int>());
    int x[n+1];
    rep(i,1,n,1) x[i] = query(i);
    sort(x+1,x+1+n, greater <int>());
    int i = 1, ans = 0;
    while(i <= n) ans += (x[i]*a[i++]);
    cout << ans << endl;
    return 0; 
}