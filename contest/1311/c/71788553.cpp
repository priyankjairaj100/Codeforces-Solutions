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
    int t;
    cin >> t;
    while(t--){
        int n, mm;
        cin >> n >> mm;
        string s;
        cin >> s;
        int len = s.length();
        
        int x[len+4];
        rep(i,0,len+2,1) x[i] = 0;

        int p;
        rep(i,1,mm,1){
            cin >> p;
            x[1]++;
            x[p+1]--;
        }

        rep(i,1,len,1) x[i] += x[i-1];
        rep(i,1,len,1) x[i]++;
        //rep(i,1,len,1) cout << x[i] << endl;
        map <char, int> m;
        rep(i,1,len,1){
            char c= s[i-1];
            m[c] += x[i];
        }
        for(char c = 'a'; c <= 'z'; c++){
            cout << m[c] << " ";
        }
        cout << endl;
    }
    return 0; 
}