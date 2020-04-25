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
 
int n, k;
int a[200005];
vector <int> x[200005];
int c[200005];
multiset <int> s[200005];
int m[200005];

int32_t main(){
	fastio
    cin >> n >> k;
    rep(i,1,n,1) cin >> a[i];
    rep(i,1,n,1){
        int t = a[i];
        while(t>0){
            x[i].pb(t);
            t/=2;
        }
        x[i].pb(0);
        int d = 0;
        for(auto y: x[i]){
            c[y]++;
            if(s[y].size() < k){
                s[y].insert(d);
                m[y] += d;
            }
            else{
                int o = *s[y].rbegin();
                if(d < o){
                    s[y].erase(s[y].find(o));
                    m[y] += d;
                    m[y] -= o;
                }
            }
            d++;
        }
    }
    int ans = MOD;
        brep(i,200000,1,1){
            if(c[i] >= k)  ans = min(ans, m[i]);}
    cout << ans << endl;
    return 0;   
}