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

vector <int> v, v1;

int a[1005][1005];

void Divisors(int n) 
{ 
    // Note that this loop runs till square root 
    for (int i=1; i<=sqrt(n); i++) 
    { 
        if (n%i == 0) 
        { 
            // If divisors are equal, print only one 
            if (n/i == i) 
                v.pb(i); 
  
            else // Otherwise print both 
                v.pb(i), v.pb(n/i); 
        } 
    } 
} 

int check(){
    int n = v1.size();
    rep(i,1,n,1){
        rep(j,1,n,1){
            if(a[i][j] != 0 and a[i][j] != v1[i-1] * v1[j-1]) return 0;
        }
    }
    return 1;
}

int32_t main(){
    fastio
    int n; cin >> n;
    rep(i,1,n,1){
        rep(j,1, n,1){
            cin >> a[i][j];
        }
    }
    int val = a[1][2];
    rep(i, 2, n, 1) val = __gcd(val, a[1][i]);
    Divisors(val);
    for(auto x: v){
        v1.clear();
        v1.pb(x);
        rep(i,2,n,1) v1.pb(a[1][i] / x);
        //for(auto y: v1) cout << y << endl;
        if(check()){ 
            for(auto y: v1) cout << y << " ";
            return 0;
        }
    }
    return 0;   
}
