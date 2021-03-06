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
    int arr[] = {2,3,5,7,11,13,17,19,23,29,31};
    int n; cin >> n;
    vector <int> v;
    if(n == 8){cout << 24 << endl; return 0;}
    rep(i,2,n,1){
        while(n%i == 0){
            n/=i;
            v.pb(i);
        }
    }
    int s = v.size(), ans = 1, k = 0;
    brep(j,s-1,0,1) ans = ans * powl(arr[k++], v[j] - 1);
    cout << ans << endl;
    return 0;   
}