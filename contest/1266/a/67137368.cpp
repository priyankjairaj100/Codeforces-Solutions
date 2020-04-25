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
    int n; cin >> n;
    while(n--){
        string s; cin >> s;
        int sum = 0, even = 0;
        int a[10];
        rep(i,0,9,1) a[i] = 0;
        for(auto c: s){
            int nn = (c - '0');
            a[nn]++;
            sum += nn;
            if(nn%2 == 0 and nn) even++;
    }
    if(sum%3 == 0 and a[0] > 1) cout << "red" << endl;
    else if(a[0] == 1 and sum%3 == 0 and even) cout << "red" << endl;
    else cout << "cyan" << endl;
    }
    return 0;
}