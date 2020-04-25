#include <bits/stdc++.h>
#include <string>
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
//using namespace __gnu_pbds;
using namespace std;
//#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
//#define ordered_multiset tree<int, null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>
#define int long long
#define jai_shree_ram  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, a, b, d) for (int i = a; i <= b; i += d)
#define brep(i, a, b, d) for (int i = a; i >= b; i -= d)
#define pb push_back
#define all(x) x.begin(), x.end()
#define pii pair<int, int>
#define endl '\n'
int MAX = 1e5 + 5;
int MOD = 1e9 + 7;
////////////////////////////////


int32_t main(){
    jai_shree_ram
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        pii a[n+1];
        int f1 = 0, f2 = 0;
        set <int> s;
        rep(i,1,2*n,1) s.insert(i); 
        rep(i,1,n,1){
            cin >> a[i].first;
            a[i].second = i;
            s.erase(a[i].first);
        }
        sort(a+1,a+1+n);

        pii b[n+1];
        int flag = 0;
        brep(i,n,1,1){
            auto x = s.upper_bound(a[i].first);
            if(x == s.end()){
                flag = 1;
                break;
            }
            int id = a[i].second;
            int val = *x;

            b[id].first = val;
            b[id].second = a[i].first;
            s.erase(val);
        }
        if(flag) cout << -1 << endl;

        else{
            rep(i,1,n,1) cout << b[i].first << " " << b[i].second << " ";
            cout << endl;
        }
    }
    return 0;
}