#include <bits/stdc++.h>
#include <string>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define int long long
#define fastio  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define ordered_multiset tree<int, null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>
#define rep(i, a, b, d) for (int i = a; i <= b; i += d)
#define brep(i, a, b, d) for (int i = a; i >= b; i -= d)
#define pb push_back
#define all(x) x.begin(), x.end()
#define pii pair<int, int>
const int MAX = 1e5 + 5;
const int MOD = 1e9 + 7;
//////////////////////////////////


int32_t main(){
    fastio
    int x; cin >> x;
    vector <int> ans;
    int t= 0;
    int n = (int)log2(x) + 1;
    int id = n-1;
    int tt = 0;

    rep(t,1,40,1){
        tt = t;
        if(__builtin_popcount(x) == ((int)log2(x) + 1)) break;
        if(t%2){
                brep(i,id,0,1){
                    if(x & (1 << i));
                    else {id = i; break;}
                }
                int num = (1 << (id+1)) - 1;
                ans.pb(id + 1);
                x = x ^ num;
            }
        else x++;
    }
    cout << tt - 1<< endl;
    for(auto c: ans) cout << c << " ";
    return 0;
}