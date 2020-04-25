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

int a, b;

int ok(int x, int y){
    return (x>= 1 and x<= a and y>=1 and y<= b);
}

int32_t main(){
    jai_shree_ram
    int t; cin >> t;
    while(t--){
        int a, b, p;
        cin >> a >> b >> p;
        string s;
        cin >> s;
        int l = s.length();
        
        int nxt[l+1];
        int cst[l+1];
        nxt[l-1] = l-1;
        cst[l-1] = 0;
        char curr = s[l-1];

        brep(i,l-2,0,1){
            if(s[i] == curr){
                nxt[i] = nxt[i+1];
            }
            else{
                nxt[i] = i+1;
                curr = s[i];
            }

            if(s[i] == 'A') cst[i] = a;
            else cst[i] = b;

            cst[i] += cst[nxt[i]];
        }

        rep(i,0,l-1,1){
            if(cst[i] <= p){
                cout << i+1 << endl;
                break;
            }
            //cout << cst[i] << " ";
        }
    }
    return 0; 
}