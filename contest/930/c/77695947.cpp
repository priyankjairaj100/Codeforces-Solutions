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
const int MAXN = 1e5 + 5;
////////////////////////////////

int n, m, BIT[MAXN], c[MAXN];

void update(int idx, int val){
    idx++;
    while(idx < MAXN){
        BIT[idx] = max(BIT[idx], val);
        idx += idx & (-idx);
    }
}
 
 
int query(int idx){
    idx++;
    int ans = 0;
    while(idx){
        ans = max(ans, BIT[idx]);
        idx -= idx & (-idx);
    }
    return ans;
}

int32_t main(){
    jai_shree_ram
    cin >> n >> m;
    rep(i,1,n,1){
        int l, r;
        cin >> l >> r;
        c[r+1]--;
        c[l]++;
    }
    rep(i,1,m,1) c[i] += c[i-1];
    int inc[m+1], ans = 0;
    rep(i,1,m,1){
	    inc[i] = query(c[i]);
	    update(c[i], inc[i]+1);
	}
	rep(i,0,MAXN-1,1) BIT[i] = 0;
	for(int i=m;i>=1;i--){
	    int z = 1+query(c[i]);
	    ans = max(ans, inc[i] + z);
	    update(c[i], z);
	}
    cout << ans << endl;
    return 0; 
}