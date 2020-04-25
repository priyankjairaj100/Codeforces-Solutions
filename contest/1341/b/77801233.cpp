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

int chk(int x1, int y1, int x2, int y2){
    return x1 <= y2 && y1 <= x2;
}

int32_t main(){
    jai_shree_ram
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int a[n+1], b[n+1];
        rep(i,1,n,1){
            b[i] = 0;
            cin >> a[i];
        }
        b[0] = 0;
        rep(i,2,n-1,1){
            if(a[i] > a[i-1] and a[i] > a[i+1]) b[i] = 1;
            b[i] += b[i-1];
        }
        b[n] = b[n-1];
        int ans = b[k-1], id = 1;
        rep(i,k+1,n,1){
            if((b[i-1] - b[i-k+1]) > ans) ans = (b[i] - b[i-k]), id = i-k+1; 
        }
        cout <<ans+1 << " "<< id << endl;
    }
    return 0; 
}