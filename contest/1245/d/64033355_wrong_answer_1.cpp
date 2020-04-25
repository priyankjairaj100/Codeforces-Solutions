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
#define endl '\n'
const int MAX = 1e5 + 5;
const int MOD = 1e9 + 7;
//////////////////////////////////

int n;
int x[MAX*10], y[MAX*10], c[MAX*10], k[MAX*10];
vector <int> g[MAX*10];
int vis[MAX*10];
int kv[MAX*10];
set <int> ct;
set <pii> kt;
int curr_c, min_c, min_cid;

void go(int x){
    vis[x] = 1;
    if(c[x] <= min_c){
        min_c = c[x];
        min_cid = x;
    }
    
    int mnn = MOD*100;
   
    for(auto y: g[x]){
        if(k[y] <= mnn){
            mnn = k[y];
            kv[x] = y;
        }
        if(!vis[y]) go(y);
    }

    int kcc = k[kv[x]] + k[x];
    if(kcc >= c[x]){
        ct.insert(x);
        curr_c++;
    }
}


int32_t main(){
    fastio
    cin >> n;
    rep(i,1,n,1) cin >> x[i] >> y[i];
    rep(i,1,n,1) cin >> c[i];
    rep(i,1,n,1) cin >> k[i];

    map <int, int> xx, yy;
    rep(i,1,n,1){
        if(yy[x[i]]){
            g[i].pb(yy[x[i]]);
            g[yy[x[i]]].pb(i);
        }
        else{
            yy[x[i]] = y[i];
        }
    }

    rep(i,1,n,1){
        if(xx[y[i]]){
            g[i].pb(xx[y[i]]);
            g[xx[y[i]]].pb(i);
        }
        else{
            xx[y[i]] = x[i];
        }
    }

    rep(i,1,n,1){
        if(!vis[i]){
            curr_c = 0;
            min_c = MOD;
            go(i);
            if(curr_c == 0) ct.insert(min_cid);
        }
    }

    int tc = 0;
    for(auto xx: ct) tc += c[xx];
    rep(i,1,n,1){
        if(ct.find(i) == ct.end()){
            tc += (k[i] + k[kv[i]]);
            kt.insert({min(i, kv[i]), max(i, kv[i])});
        }
    }
    cout << tc << endl;
    cout << ct.size() << endl;
    for(auto xx: ct) cout << xx << " ";
    cout << endl;
    cout << kt.size() << endl;
    for(auto xx: kt) cout << xx.first << " " << xx.second << endl;
    return 0; 
}