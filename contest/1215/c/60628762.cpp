 //Sanji > Zoro
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
    int n; cin >> n;
    string a, b; cin >> a >>b;
    int ca = 0, cb = 0;
    for(auto c: a) {if(c == 'a') ca++; else cb++;}
    for(auto c: b) {if(c == 'a') ca++; else cb++;}
    if(ca%2 == 1 or cb%2 == 1){cout<<-1<<endl; return 0;}
    vector <int> t1, t2;
    rep(i,0,n-1,1){
        if(a[i] != b[i]){
            if(a[i] == 'a' and b[i] == 'b') t1.pb(i);
            else t2.pb(i);
        }
    }
    if(t1.size()%2 != t2.size()%2){
        cout << "-1" <<endl;
        return 0;
    }
    vector <pii> ans;
    if(t1.size() > 1)
    rep(i,0,t1.size() - 1,2){
        if(i + 1 >= t1.size())break;
        int ia = t1[i], ib = t1[i+1];
        ans.pb({ia+1, ib+1});
    }
    if(t2.size() > 1)
    rep(i,0,t2.size() - 1,2){
        if(i + 1 >= t2.size())break;
        int ia = t2[i], ib = t2[i+1];
        ans.pb({ia+1, ib+1});
    }
    if(t1.size()%2 == 1 or t2.size()%2 == 1){
        int ia = t1[t1.size() - 1], ib = t2[t2.size() - 1];
        ans.pb({ia + 1, ia + 1});
        ans.pb({ia + 1, ib + 1});
    } 
    cout << ans.size() << endl;
    for(auto d: ans) cout << d.first <<" "<<d.second<<endl; 
    return 0;   
}