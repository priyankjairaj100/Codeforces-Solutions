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
/*__________________________________________*/

int num(string s){
    int ans = 0;
    rep(i,0,s.length() - 1,1){
        ans *= 2;
        ans += (s[i] - '0');
    }
    return ans;
}


int32_t main(){
    fastio

	int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int ans = 0;
        int n = s.length();
        rep(i,0,n-1,1){
            brep(j,i,i-20,1){
                if(j < 0)break;
                int len = i - j + 1;
               // cout << i << " " << j << " " << len << " " << num(s.substr(j,i)) <<endl;
                if(len == num(s.substr(j,len))) ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;   
}
