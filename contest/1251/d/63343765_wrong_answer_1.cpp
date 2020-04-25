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
int n, s;
int l[2*MAX], r[2*MAX];

int ok(int x){
    vector <int> v0;
    int l0 = (n+1)/2;
    rep(i,1,n,1) if(r[i] >= x) v0.pb(i);
    if(v0.size() < l0) return 0;
    
    set <pii> ss;
    for(auto ix: v0) ss.insert({l[ix], ix});
    vector <int> vf;
    for(auto it = ss.rbegin(); it!=ss.rend(); --it){
        if(vf.size() == l0) break;
        vf.pb((*it).second);
    }
    if(vf.size() != l0) return 0;
    
    int s1 = s;
    rep(i,1,n,1) s1 -= l[i];
    for(auto i: vf){
        if(l[i] >= x) continue;
        s1 -= (x - l[i]);
    }
    return (s1 >= 0)? 1 : 0;
}

int bs(int lo, int hi){
    if(lo == hi) return lo;
    int mid = (lo + hi + 1)/2;
    if(ok(mid)) return bs(mid, hi);
    else return bs(lo, mid - 1);
}

int32_t main(){
    fastio
    int t; cin >> t;
    while(t--){
        cin >> n >> s;
        rep(i,1,n,1) cin >> l[i] >> r[i];
        int ml = *max_element(l+1,l+1+n);
        int mr = *max_element(r+1,r+1+n);
        cout << bs(ml, mr) << endl;
    }
    return 0;
}