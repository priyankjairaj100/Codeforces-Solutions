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
 
int check(string s){
    int n = s.length();
    int flag = 1;
    if(s[0] != '1') flag = 0;
    rep(i,1,n-1,1) if(s[i] != '0') flag = 0;
    if(!flag) return -1;
    else return n-1;
}
 
int32_t main(){
    fastio
    int n; cin >> n;
    string s[n+1];
    string s1 = "";
    int nz = 0;
    
    rep(i,1,n,1){
        cin >> s[i];
        if(s[i] == "0"){cout << "0"; return 0;}
        if(check(s[i]) == -1) s1 = s[i];
        else nz += check(s[i]);
    }
    if(s1 == "") cout  <<1;
    else cout << s1;
    rep(i,1,nz,1) cout << "0";
    return 0; 
}