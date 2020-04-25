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


int32_t main(){
    fastio
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n+1];
        pii b[n+1];
        string s; cin >> s;
        rep(i,1,n,1){a[i] = (s[i-1] - '0'); b[i].first = a[i]; b[i].second = i;}
        sort(b+1,b+1+n);
        set <int> x[10];
        rep(i,1,n,1){
            x[b[i].first].insert(b[i].second);
        }
        vector <int> v;
        set <int> val;
        rep(i,1,n,1) val.insert(b[i].first);
        int curr = 0, cnt = 0, flag = 0;
        int f  = 0;
        for(auto i: val){
            int temp = i;
            if(f) break;
            while(1){
                if(x[temp].lower_bound(curr) == x[temp].end()){
                    if(x[temp].size()){
                        f = 1;
                        break;
                    }
                    else break;
                }
                else{
                    if(!f){
                    auto itr = x[temp].lower_bound(curr);
                    v.pb(*itr);
                    curr = *itr;
                    x[temp].erase(itr);
                    }
                    else break;
                }
            }           
        }
        int ans[n+1];
        //if(cnt > 1){cout << "-" << endl; continue;}
        memset(ans, 0, sizeof(ans));
        for(auto z: v) ans[z] = 1;
        rep(i,1,n,1) if(!ans[i]) ans[i] = 2;
        vector <int> cc;
        rep(i,1,n,1) if(ans[i] == 1) cc.pb(a[i]);
        rep(i,1,n,1) if(ans[i] == 2) cc.pb(a[i]);
        vector <int> cx;
        for(auto z: cc) cx.pb(z);
        sort(all(cx));
  //      int flag = 0;
        rep(i,0,n-1,1) if(cc[i] != cx[i]) flag = 1;
        if(flag){cout << "-" << endl; continue;}
        rep(i,1,n,1) cout << ans[i];
        cout << endl;
    }
    return 0;   
}