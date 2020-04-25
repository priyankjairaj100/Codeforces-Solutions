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


int32_t main(){
    jai_shree_ram
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int p[n+1];
        map <int, int> m;
        rep(i,1,n,1) {
            cin >> p[i];
            m[p[i]] = i;
        }
        int b = n+1;
        int flag = 0;
        int curr = m[1];

        rep(i,2,n,1){
            int ns = curr + 1;
            if(ns >= b){
                b = min(b, curr);
                curr = m[i];
            }
            else{
                if(m[i] != ns){
                    flag = 1;
                    break;
                }
                curr++;
            }
        }
        if(!flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0; 
}