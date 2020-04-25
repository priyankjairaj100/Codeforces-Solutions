#include <bits/stdc++.h>
#include <string>
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
//using namespace __gnu_pbds;
using namespace std;
//#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
//#define ordered_multiset tree<int, null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>
#define int long long
#define jai_shree_ram  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, a, b, d) for (int i = a; i <= b; i += d)
#define brep(i, a, b, d) for (int i = a; i >= b; i -= d)
#define pb push_back
#define all(x) x.begin(), x.end()
#define pii pair<int, int>
#define endl '\n'
int MAX = 1e5 + 5;
int MOD = 1e9 + 7;
////////////////////////////////


int32_t main(){
    jai_shree_ram
    int n, mm;
    cin >> n >> mm;

    string s[n+1];
    rep(i,1,n,1) cin >> s[i];
    map <string, int> m;
    
    rep(i,1,n,1){
        m[s[i]] = 1;
    }

    string ss = "";
    vector <string> v;

    if(mm == 1){
        cout << 1 << endl;
        cout << s[0] << endl;
        return 0;
    }


    rep(i,1,n,1){
        string s1 = "";
        brep(j,mm-1,0,1) s1 += s[i][j];

        if(s[i] == s1){
            v.pb(s[i]);
            continue;
        }

        if(m[s1] > 0 and m[s[i]] > 0){
            ss = ss + s[i];
            ss = s1 + ss;
            m[s1] = 0;
            m[s[i]] = 0;
        }

    }

    string sx = "";
    if(v.size()) sx = v[0];
    string ans = "";

    int len = ss.length();

    int mid = len/2 - 1;
    rep(i,0, len-1,1){
        ans += ss[i];
        if(i == mid) ans += sx;
    }

    cout << ans.length() << endl;
    cout << ans << endl;
    return 0;
}