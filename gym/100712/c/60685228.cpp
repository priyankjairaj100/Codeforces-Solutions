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

map <char, int> m;

int32_t main(){
    fastio
    int n; cin >> n;
    string s; cin >> s;
    for(char c = 'a';c<='z';c++) m[c] = 0;
    for(auto c: s) m[c]++;
    int one = 0, zero = 0;
    one = min(m['o'], min(m['n'], m['e']));
    m['o'] -= one;
    m['n'] -= one;
    m['e'] -= one;
    zero = min(min(m['z'], m['e']), min(m['r'], m['o']));
    rep(i,1,one,1) cout <<"1 ";
    rep(i,1,zero,1) cout << "0 ";
    return 0;   
}
