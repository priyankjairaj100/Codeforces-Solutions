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

string s;

bool chk(int l, int r){
    int n = r - l + 1;
    string t = "";
    rep(i,l,r,1) t += s[i];

    rep(i, 0, n-1,1) if(t[i] != t[n-1-i]) return 0;
    return 1;
}

string f1(){
    int n = s.length();
    int l = 0;
    string sc = "";
    rep(num, 0, (n-1)/2 - 1,1){
        if(s[num] != s[n-1-num]) break;
        else l = num+1;
    }
    string ans = "";
    string s1 = "", s2 = "";
    
    rep(d,0,l,1){
        if(d) sc += s[d-1];
        
        brep(i, n-1-d, d, 1){
            if(chk(d, i)){
                s1 = sc;
                rep(j, d, i, 1) s1 += s[j];
                string sc1 = sc;
                reverse(all(sc1));
                s1 += sc1;
                break;
            }
        }
        
        rep(i, d, n-1-d, 1){
            if(chk(i, n-1-d)){
                s2 = sc;
                rep(j, i, n-1-d, 1) s2 += s[j];
                string sc1 = sc;
                reverse(all(sc1));
                s2 += sc1;
                break;
            }
        }

        if(s1.length() >= ans.length()){
            ans = s1;
        }
        if(s2.length() >= ans.length()){
            ans = s2;
        }
        string sc1 = sc;
        reverse(all(sc1));
        string js = sc + sc1;

        if(js.length() >= ans.length()){
            ans = js;
        }

    }
    return ans;
}

int32_t main(){
    jai_shree_ram
    int t; cin >> t;
    while(t--){
        cin >> s;
        cout << f1() << endl;
    }
    return 0; 
}