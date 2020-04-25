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
    string s; cin >> s;
    int n = s.length();
    int o = 0, t = 0, z = 0;
    string f, tm;
    rep(i,0,n-1,1){
        if(s[i] == '1') o++;
        else f+=s[i];
    }
    int fi = -1;
    for(auto c: f){
        if(c == '2') rep(i,1,o,1) tm += '1', fi = 1;
        tm += c;
    }
    if(fi == -1){
        rep(i,1,o,1) tm+='1';
    }    
    cout << tm << endl;
    return 0;   
}