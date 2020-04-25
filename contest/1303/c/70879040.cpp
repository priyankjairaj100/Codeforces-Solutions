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
int MOD = 1e18 + 7;
////////////////////////////////

string s, curr;
int len, ci;
map <int, int> m;

int ok(int x){
    int l = curr.length();
    char c = s[x];
    if(ci == -1){
        curr = c;
        ci = 0;
    }
    else if(ci-1 >=0 and curr[ci-1] == c){
        ci--;
    }
    else if(ci + 1 < l and curr[ci+1] == c){
        ci++;
    }
    else if(ci-1 == -1){
        if(m[c]) return 0;
        curr = c + curr;
    }
    else if(ci+1 == l){
        if(m[c]) return 0;
        curr = curr + c;
        ci++;
    }
    else return 0;
    return 1;
}

int32_t main(){
    jai_shree_ram
    int t; cin >> t;
    while(t--){
        cin >> s;
        len = s.length();
        curr = "";
        int flag = 0;
        ci = -1;
        m.clear();
        rep(i,0,len-1,1){
            if(ok(i));
            else{
                flag = 1;
                break;
            }
            m[s[i]]++;
        }

        if(flag){
            cout << "NO" << endl;
            continue;
        }
        for(char cc = 'a'; cc <= 'z'; cc++){
            if(!m[cc]) curr += cc;
        }
        cout << "YES" << endl;
        cout << curr << endl;
    }
    return 0;
}