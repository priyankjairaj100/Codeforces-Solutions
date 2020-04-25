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
        string s;
        cin >> s;
        int n = s.length();
        queue <int> e, o;
        rep(i,0,n-1,1){
            int curr = s[i] - '0';
            if(curr % 2) o.push(curr);
            else e.push(curr);
        }
        while(!e.empty() or !o.empty()){
            int vo = 11, ve = 11;
            if(!e.empty()){
                ve = e.front();
            }
            if(!o.empty()){
                vo = o.front();
            }
            if(ve <= vo){
                cout << ve;
                e.pop();
            }
            else{
                cout << vo;
                o.pop();
            }
        }
        cout << endl;
    }
    return 0;
}