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
        int n, k; cin >> n >> k;
        string s1;
        cin >> s1;
        int nn = n/k;
        string s[nn + 1];
        int i = 0;
        rep(j,1,nn,1){
            rep(d,1,k,1) s[j] += s1[i++];
        }

        map <pair <int, char>, int> m;

        rep(i,1,nn,1){
            rep(j,1,k,1){
                m[{j, s[i][j-1]}]++;
            }
        }

            int ans1 = 0;
            
            rep(j,0,k/2 - 1,1){
                int ans2 = MOD;
                for(char c = 'a'; c <= 'z'; c++){
                    ans2 = min(ans2, 2*nn - m[{j+1, c}] - m[{k-j, c}]);
                }
                ans1 += ans2;
            }

            if(k%2){
                int ans2 = MOD;
                for(char c = 'a'; c <= 'z'; c++) ans2 = min(ans2, nn - m[{(k/2 + 1), c}]);
                ans1 += ans2;
            }

        cout <<ans1<<endl;
    }
    return 0; 
}