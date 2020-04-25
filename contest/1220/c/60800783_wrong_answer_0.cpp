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

int a[500005];

int32_t main(){
    fastio
    string s;
    cin >> s;
    int n = s.length();
    if(n == 1){
        cout << "Mike" << endl;
        return 0;   
    }
    char curr = s[0];
    rep(i,1,n-1,1){
        if(s[i] < curr){
            curr = s[i];
            a[i] = 0;
        }
        else a[i] = 1;
    }
    rep(i,1,n,1) cout << a[i-1] << endl;
    cout <<"Mike"<<endl;
    rep(i,2,n-1,1){
        if(a[i-1]) cout <<"Ann"<<endl;
        else cout << "Mike" <<endl;
    }
    cout << "Mike"<<endl;
    return 0;   
}
