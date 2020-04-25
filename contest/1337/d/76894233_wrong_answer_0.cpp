#include <bits/stdc++.h>
#include <string>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define pii pair<int, int>
#define ordered_set tree<int, null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>
//#define ordered_multiset tree<int, null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>
#define int long long
#define jai_shree_ram  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, a, b, d) for (int i = a; i <= b; i += d)
#define brep(i, a, b, d) for (int i = a; i >= b; i -= d)
#define pb push_back
#define all(x) x.begin(), x.end()
//#define endl '\n' // for interactive problems comment it out or use fflush
int MAX = 1e5 + 5;
int MOD = 1e18 + 7;
////////////////////////////////

int ans;
int nr, ng, nb;
set<int> sr, sr1, g, g1, b, b1;

mm(int x, int y, int z){
    int tot = (x-y)*(x-y) + (y-z)*(y-z) + (z-x)*(z-x);
    ans = min(ans, tot);
}

vector <int> getg(int x){
    vector <int> res;
    int gg, gg1;
    if(g.lower_bound(x) != g.end()) gg = *g.lower_bound(x), res.pb(gg);
    if(g1.lower_bound(x) != g1.end()) gg1 = -(*g1.lower_bound(-x)), res.pb(gg1);
    
    if(g.upper_bound(x) != g.end()) gg = *g.upper_bound(x), res.pb(gg);
    if(g1.upper_bound(-x) != g1.end()) gg1 = -(*g1.upper_bound(-x)), res.pb(gg1);
    return res;
}

vector <int> getb(int x){
    vector <int> res;
    int bb, bb1;
    if(b.lower_bound(x) != b.end()) bb = *b.lower_bound(x), res.pb(bb);
    if(b1.lower_bound(-x) != b1.end()) bb1 = -(*b1.lower_bound(-x)), res.pb(bb1);
    
    if(b.upper_bound(x) != b.end()) bb = *b.upper_bound(x), res.pb(bb);
    if(b1.upper_bound(-x) != b1.end()) bb1 = -(*g1.upper_bound(-x)), res.pb(bb1);
    return res;
}

vector <int> getr(int x){
    vector <int> res;
    int gg, gg1;
    if(sr.lower_bound(x) != sr.end()) gg = *sr.lower_bound(x), res.pb(gg);
    if(sr1.lower_bound(x) != sr1.end()) gg1 = -(*sr1.lower_bound(-x)), res.pb(gg1);
    
    if(sr.upper_bound(x) != sr.end()) gg = *sr.upper_bound(x), res.pb(gg);
    if(sr1.upper_bound(-x) != sr1.end()) gg1 = -(*sr1.upper_bound(-x)), res.pb(gg1);
    return res;
}



int32_t main(){
    jai_shree_ram
    int t;
    cin >> t;
    while(t--){
        g.clear();
        g1.clear();
        b.clear();
        b1.clear();
        sr.clear();
        sr1.clear();
        ans = MOD * 7;
        cin >> nr >> ng >> nb;
        int x, r[nr+1], ga[ng+1], ba[ng+1];
        rep(i,1,nr,1){
             cin >> x;
             r[i] = x;
             sr.insert(x);
             sr1.insert(-x);
        }
        
        rep(i,1,ng,1){
             cin >> x;
             ga[i] = x;
             g.insert(x);
             g1.insert(-x);
        }
        
        rep(i,1,nb,1){
             cin >> x;
                ba[i] = x;
             b.insert(x);
             b1.insert(-x);
        }
        //rgb
        rep(i,1,nr,1){
            vector <int> vg = getg(r[i]);
            for(auto dg: vg){
                vector <int> vb = getb(dg);
                for(auto db: vb) mm(r[i], dg, db);
            }
        }
        //rbg
        rep(i,1,nr,1){
            vector <int> vb = getb(r[i]);
            for(auto db: vb){
                vector <int> vg = getg(db);
                for(auto dg: vg) mm(r[i], dg, db);
            }
        }
        //brg
        rep(i,1,nb,1){
            vector <int> vr = getr(ba[i]);
            for(auto dr: vr){
                vector <int> vg = getg(dr);
                for(auto dg: vg) mm(dr, dg, ba[i]);
            }
        }
        //bgr
        rep(i,1,nb,1){
            vector <int> vg = getg(ba[i]);
            for(auto dg: vg){
                vector <int> vr = getr(dg);
                for(auto dr: vr) mm(dr, dg, ba[i]);
            }
        }
        //grb
        rep(i,1,ng,1){
            vector <int> vr = getr(ga[i]);
            for(auto dr: vr){
                vector <int> vb = getb(dr);
                for(auto db: vb) mm(dr, ga[i], db);
            }
        }
        //gbr
        rep(i,1,ng,1){
            vector <int> vb = getb(ga[i]);
            for(auto db: vb){
                vector <int> vr = getr(db);
                for(auto dr: vr) mm(dr, ga[i], db);
            }
        }



        cout << ans << endl;
    }
    return 0; 
}