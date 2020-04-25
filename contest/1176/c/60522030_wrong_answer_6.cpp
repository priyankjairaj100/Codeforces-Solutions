 //IWNLA
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
    int a[n+1]; rep(i,1,n,1){
        cin >> a[i];
        if(a[i] == 4) {a[i] = 1; continue;}
        if(a[i] == 8) {a[i] = 2; continue;}
        if(a[i] == 15) {a[i] = 3; continue;}
        if(a[i] == 16) {a[i] = 4; continue;}
        if(a[i] == 23) {a[i] = 5; continue;}
        if(a[i] == 42) {a[i] = 6; continue;}
    }
    int c[7], tot[n+1]; rep(i,1,6,1) c[i] = 0;
    rep(i,0,n,1) tot[i] = 0;

    rep(i,1,n,1){
        if(a[i] == 1) c[1]++;
        else{
            if(c[a[i] - 1]) c[a[i]]++;
        }
        tot[i] = tot[i-1];
        if(a[i] == 6){
            int add = 1;
            if(c[a[i] - 1] == 0) add = 0;
            if(add){
                rep(i,1,6,1) c[i]--;
            }
            tot[i] += add;
        }
    }
    cout <<n -  6 * tot[n] << endl;
    return 0;   
}