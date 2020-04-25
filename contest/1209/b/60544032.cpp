 //IWNLA
#include <bits/stdc++.h>
#include <string>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define int long long
typedef long double LD;
const int MAX = 1e5 + 5;
const int MOD = 1e9 + 7;
//const int MOD =   998244353;
const LD EPS = 1e-10;
const LD PI = acos(-1.0);
#define fastio  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define ordered_multiset tree<int, null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>
#define rep(i, a, b, d) for (int i = a; i <= b; i += d)
#define brep(i, a, b, d) for (int i = a; i >= b; i -= d)
#define pb push_back
#define all(x) x.begin(), x.end()
#define pii pair<int, int>
//auto cmp = [](int a, int b) {return a > b ;};
//set<int, decltype(cmp)> s(cmp);
/*__________________________________________*/

int c[101];

int32_t main(){
    fastio
    int n; cin >> n;
    string s; cin >> s;
    int a[n+1][1001];
    memset(a,0,sizeof(a));
    rep(e,1,n,1){
        int x, y; cin >> y >> x;
        if(s[e-1] == '1'){
            rep(j,1,x,1) a[e][j] = 1;
            int curr = 0, val = 0;
            rep(j,x+1,1000,1){
                
                if(curr == y){
                    val = !val;
                    a[e][j] = val;
                    curr = 0;
                }
                else{
                    a[e][j] = val;
                }
                curr++;
            }
        }
        else{
            rep(j,1,x,1) a[e][j] = 0;
            int curr = 0, val = 1;
            rep(j,x+1,1000,1){
                
                if(curr == y){
                    val = !val;
                    a[e][j] = val;
                    curr = 0;
                }
                else{
                    a[e][j] = val;
                }
                curr++;
            }
        }
    }
    int ans = 0;
    rep(i,1,1000,1){
        int t = 0;
        rep(j,1,n,1){
            t+=a[j][i];
        }
        ans = max(ans, t);
    }
    cout << ans << endl;
    return 0;   
}