#include <bits/stdc++.h>
#include <string>
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
//using namespace __gnu_pbds;
using namespace std;
//#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
//#define ordered_multiset tree<int, null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>
#define int long long
#define jai_shree_ram  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, a, b, d) for (int i = a; i <= b; i += d)
#define brep(i, a, b, d) for (int i = a; i >= b; i -= d)
#define pb push_back
#define all(x) x.begin(), x.end()
#define pii pair<int, int>
#define endl '\n'
int MAX = 1e5 + 5;
int MOD = 1e9 + 7;
////////////////////////////////

int x[26][100005];
int cnt[25];

int32_t main(){
    jai_shree_ram
    string s;
    cin >> s;
    int l = s.length();
    
    rep(i,0,l-1,1){
        int z = (s[i] - 'a');
        x[z][i]++;
        cnt[z]++;
    }
    rep(i,0,25,1) brep(j,l-2,0,1) x[i][j] += x[i][j+1];
    int ans = 0;

    //rep(i,0,l-1,1) cout << x[1][i] << endl;

    rep(i,0,25,1){
        rep(j,0,25,1){
            int v = 0;
            rep(k,0,l-2,1){
                if((s[k] - 'a') == i) {
                    v += x[j][k+1];
                }
            }
            ans = max(ans, v);
        }
    }


    rep(i,0,25,1) ans = max(ans, cnt[i]);

    cout << ans << endl;
    return 0;
}