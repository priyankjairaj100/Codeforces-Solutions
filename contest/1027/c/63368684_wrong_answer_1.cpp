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
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n+1]; rep(i,1,n,1) cin >> a[i];
        map <int, int> m;
        rep(i,1,n,1) m[a[i]]++;
        vector <int> v;
        for(auto x: m){
            if(x.second >= 2) v.pb(x.first);
        }
        double ans = 1e18, id = 0;
        pii ff;
        if(v.size() >= 2)
        rep(i,0,v.size() - 1,1){
            double ta = 0;
            if(i == 0){
                double l = v[i+1], b = v[i];
                ta = (l + b)*(l+b)/(l*b); 
                if(ta <= ans){
                    ans = ta;
                    ff = {l, b};
                }
            }
            else if(i == v.size() - 1){
                double l = v[i], b = v[i-1];
                ta = (l + b)*(l+b)/(l*b);
               if(ta <= ans){
                    ans = ta;
                    ff = {l, b};
                }
            }
            else{
                double l = v[i], b1 = v[i+1], b2 = v[i-1];
                double t1 = (l + b1)*(l + b1)/(l*b1);
                double t2 = (l + b2)*(l + b2)/(l*b2);
                if(t1 <= ans){
                    ans = t1;
                    ff = {l, b1};
                }
                if(t2 <= ans){
                    ans = t2;
                    ff = {l, b2};
                }
            }
        }
        else{
            for(auto x: m){
                if(x.second >= 4){
                    ff = {x.first, x.first};
                }
            }
        }
        cout << ff.first << " " << ff.first << " " << ff.second << " " << ff.second << endl;
    }
    return 0;
}