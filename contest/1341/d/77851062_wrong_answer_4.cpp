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
#define endl '\n' // for interactive problems comment it out or use fflush
int MAX = 1e5 + 5;
int MOD = 1e9 + 7;
const int a_size = 1e4 + 5;
////////////////////////////////

map <string, int> dig;
map <int, string> str;
int n, k;
map <pair<string, string>, int> cst;
string ss[2005];

get_pc(){
    dig["1110111"] = 0;
    dig["0010010"] = 1;
    dig["1011101"] = 2;
    dig["1011011"] = 3;
    dig["0111010"] = 4;
    dig["1101011"] = 5;
    dig["1101111"] = 6;
    dig["1010010"] = 7;
    dig["1111111"] = 8;
    dig["1111011"] = 9;

    str[0] = "1110111";
    str[1] = "0010010";
    str[2] = "1011101";
    str[3] = "1011011";
    str[4] = "0111010";
    str[5] = "1101011";
    str[6] = "1101111";
    str[7] = "1010010";
    str[8] = "1111111";
    str[9] = "1111011";
}

void gtc(string sx, string sy){
    rep(i,0,6,1) if(sx[i] == '1' and sy[i] == '0'){
        cst[{sx, sy}] = -1;
        return;
    }

    int t = 0;
    rep(i,0,6,1) if(sx[i] == '0' and sy[i] == '1') t++;
    cst[{sx, sy}] = t;
}



int solve(string s){
    brep(i,9,0,1){
        int no = cst[{s, str[i]}];
        if(no == -1 or no > k) continue;
        else{
            k -= no;
            return i;
        }
    }
    return -1;
}

int solve1(int x){
    int mc = 0, mi = x;

    rep(i,0,9,1){
        int tt = cst[{str[x], str[i]}];
        if(tt >= mc and tt <= k){
            mc = tt;
            mi = i;
        }
    }

    k -= mc;
    return mi;
}

int32_t main(){
    jai_shree_ram
    get_pc();
    vector <string> sa;
    
    rep(i,0,127,1){
        string i1 = "";

        rep(kk,0,6,1){
            if(i & (1 << kk)) i1 = '1'  + i1;
            else i1 = '0' + i1;
        }

        sa.pb(i1);
    }

    rep(i,0,127,1) rep(j,0,127,1) gtc(sa[i], sa[j]);

    cin >> n >> k;
    vector <int> f;
    
    rep(i,1,n,1){
        string st;
        cin >> st;
        ss[i] = st;
        int xx = solve(st);
        if(xx == -1){
            cout << -1 << endl;
            return 0;
        }
        f.pb(xx);
    }

    if(k){
        brep(i,n,1,1){
            f[i-1] = solve1(f[i-1]);
        }
    }
    for(auto x: f) cout <<x;
    return 0; 
}