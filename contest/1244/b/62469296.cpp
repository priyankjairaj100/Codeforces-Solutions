//Gear Third
#include <bits/stdc++.h>
#include <string>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define int long long
const int MAX = 1e5 + 5;
const int MOD = 1e9 + 7;
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
 

int32_t main(){
    fastio
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s;
        cin >> s;
        int f=0, l=0;
        rep(i,0,n-1,1){
            if(s[i] == '1') l = i+1; 
        }
        if(l == 0){
            cout << n<<endl;
            continue;
        }
        brep(i,n-1,0,1) if(s[i] == '1') f = i+1;
        int ans = max( 2*l, 2*(n-f+1));
        cout << ans <<endl;
    }
    return 0;   
}