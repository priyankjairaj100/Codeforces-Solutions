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
    int t;
    cin >> t;
    while(t--){
        string p;
        cin >> p;
        string s;
        cin >> s;
        map <int, int> m, n;
        sort(all(p));
        int l = s.length();
        int flag  = 0;
        rep(i,0,l-1,1){
            rep(j,i,l-1,1){
                if(flag) break;
                string ss;
                n.clear();
                rep(k,i,j,1){
                    ss += s[k];
                } 
                sort(all(ss));
                if(ss == p){
                    cout<< "YES" << endl; 
                    flag = 1;
                    break;
                }
            }
        }
        if(!flag) cout << "NO" << endl;

    }    
    return 0; 
}