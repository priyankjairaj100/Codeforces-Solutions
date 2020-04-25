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
#define endl '\n'
int MAX = 1e5 + 5;
int MOD = 1e9 + 7;
////////////////////////////////

int a, b, c, d;
int x, y, x1, y1, x2, y2;
vector<pii> xx, yy;

bool ok(){
    for(auto ax: xx){
        for(auto ay:yy){
            //cout << ax.first << " " << ax.second << endl;
            //cout << ay.first << " " << ay.second << endl;
            if(ax.first >= x1 and ax.second <= x2 and ax.second <= x2 and ax.second >= x1
               and ay.first >= y1 and ay.first <= y2 and ay.second <= y2 and ay.second >= y1) return 1;
        }
    }
    return 0;
}

int32_t main(){
    jai_shree_ram 
    int t;
    cin >> t;
    while(t--){
        cin >> a >> b >> c >> d;
        cin >> x >> y >> x1 >> y1 >> x2 >> y2;
        xx.clear();
        yy.clear();
        if(a > b) xx.pb({x - (a-b), x});
        else if(b > a) xx.pb({x, x + (b-a)});

        else if(a == b and a) xx.pb({x-1, x}), xx.pb({x, x+1});
        else xx.pb({x, x});

        if(c > d) yy.pb({y - (c-d), y});
        else if(d > c) yy.pb({y, y + (d-c)});
        
        else if(c == d and c) yy.pb({y-1, y}), yy.pb({y, y+1});
        else yy.pb({y, y});
        
        if(ok()) cout <<"YES" << endl;
        else cout << "NO" <<endl;
    }
    return 0; 
}