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

int c[30][2005];

 
int32_t main(){
    jai_shree_ram
    int t;
    cin >> t;
    while(t--){
        rep(i,0,27,1) rep(j,0,2001,1) c[i][j] = 0;
        int n;
        cin >> n;
        int a[n+1];
        map <int, vector<int>> m;

        rep(i,1,n,1){
            cin >> a[i];
            c[a[i]][i]++;
            m[a[i]].pb(i);
        }

        int ans = 0;
        rep(i,1,26,1) rep(j, 1, n,1) c[i][j] += c[i][j-1];

        for(auto x: m){
            int ele = x.first;
            vector <int> v = x.second;
            int sz = v.size();

            for(int i = 0; i < sz; i++){
                for(int j = i; j < sz; j++){
                    int f = v[i], s = v[j];
                    int ans1;
                    
                    if(f == s) ans1 = c[ele][n];
                    else ans1 = c[ele][f] + (c[ele][n] - c[ele][s-1]);

                    if(s - f > 1)
                    for(auto y: m){
                        int ans2 = 0;
                        if(x.first == y.first) continue;

                        int sel = y.first;
                        
                        ans2 += (c[sel][s-1] - c[sel][f]);
                        ans = max(ans, ans1+ans2);
                    }
                    else ans = max(ans, ans1);
                }
            }
        }
        cout << ans << endl;
    }
    return 0; 
}