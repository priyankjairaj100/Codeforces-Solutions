#include <bits/stdc++.h>
#include <string>
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
//using namespace __gnu_pbds;
using namespace std;
//#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
//#define ordered_multiset tree<int, null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>
#define int long long
#define fastio  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, a, b, d) for (int i = a; i <= b; i += d)
#define brep(i, a, b, d) for (int i = a; i >= b; i -= d)
#define pb push_back
#define all(x) x.begin(), x.end()
#define pii pair<int, int>
#define endl '\n'
const int MAX = 1e5 + 5;
const int MOD = 1e9 + 7;
////////////////////////////////


int32_t main(){
    fastio
    int n, a, b, k;
    cin >> n >> a >> b >> k;
    int p[n+1];
    vector <int> v;

    rep(i,1,n,1){
        cin >> p[i];
        if(p[i] % (a+b) == 0){
            v.pb(b);
        }
        
        p[i]%=(a+b);
        if(p[i] <= a);
        else{
            v.pb(p[i] - a);
        }
    }
    int ans =  n - v.size();
   // n = v.size();
    vector <int> vi;
    for(auto x: v){
        if(x%a == 0) vi.pb(x/a);
        else vi.pb(x/a + 1);
    }
    sort(vi.begin(), vi.end());
    n = vi.size();
    rep(i,0,n-1,1){
        if(k >= vi[i]){
            ans++;
            k-= vi[i];
        }
        else break;
    }
    cout << ans << endl;
    return 0; 
}