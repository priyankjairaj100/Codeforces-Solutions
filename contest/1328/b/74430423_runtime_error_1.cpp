#include <bits/stdc++.h>
#include <string>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define pii pair<int, int>
#define ordered_set tree<int, null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>
//#define ordered_multiset tree<int, null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>
//#define int long long
#define jai_shree_ram  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, a, b, d) for (int i = a; i <= b; i += d)
#define brep(i, a, b, d) for (int i = a; i >= b; i -= d)
#define pb push_back
#define all(x) x.begin(), x.end()
#define endl '\n'
int MAX = 1e5 + 5;
int MOD = 1e9 + 7;
////////////////////////////////

int k;

int ok(int x){
    return (((x*(x+1))/2) >= k);
}

int bs(int lo, int hi){
    int mid = (lo + hi + 1)/2;
    if(mid == hi) return hi;

    if(ok(mid)) return bs(lo, mid);
    else return bs(mid+1, hi);
}


int32_t main(){
    jai_shree_ram
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n >> k;
        int x = bs(1, n*n);
        if(k == 1) x = 1;

        //x++;
        string ans = "";
        rep(i,1,n,1) ans += 'a';
        ans[x] = 'b';
        //cout << ans << " ";
        k = k - (x*(x-1))/2;
        ans[k-1] = 'b';
        //cout << x << " " << k << endl;
        reverse(all(ans));
        cout << ans << endl;

    }
    return 0; 
}