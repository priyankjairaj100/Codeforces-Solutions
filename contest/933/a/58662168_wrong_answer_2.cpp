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
    int a[n+2]; rep(i,1,n,1) cin >> a[i];
    int val[n+2]; rep(i,0,n,1) val[i] = 1; val[n+1] = 0;
    brep(i,n-1,1,1){
        rep(j,i,n-1,1){
            if(a[j] > a[j+1]) break;
            else val[i]++;
        }
    }
    int fval[n+2]; rep(i,0,n+1,1) fval[i] = 1;
    rep(i,1,n,1){
        brep(j,i,2,1){
            if(a[j-1] <= a[j]) fval[i]++;
            else break;
        }
    }
    int pans = 0, t=0;
    rep(i,1,n-1,1){if(a[i] <= a[i+1]) t++, pans = max(pans, t); else t = 0;}
    int gval[n+2]; rep(i,0,n+1,1) gval[i] = 0;
    rep(i,2,n,1){
        brep(j,i,2,1){
            if(a[j-1] >= a[j]) gval[i]++;
            else break;
        }
    } gval[0] = 0;
    int ans[n+1]; rep(i,1,n,1) ans[i] = 1;
    rep(i,1,n,1){
        int j = i - gval[i];
        ans[i] += gval[i];
        if(a[j-1] <= a[i]) ans[i] += fval[j-1];
        if(a[j+1] <= a[i+1]) ans[i] += val[i+1];
    }
    cout << max((*max_element(ans+1,ans+1+n)), pans);
    return 0; 
}