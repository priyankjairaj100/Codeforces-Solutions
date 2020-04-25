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


int32_t main(){
    fastio
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int r, p, s; cin >> r>> p >> s;
        string st; cin >> st;
        int sc = 0;
        vector <char> f;

        rep(i,0,n-1,1){

            char c = st[i];
            if(c == 'R'){
                if(p){
                    p--;
                    sc++;
                    f.pb('P');
                }
                else f.pb('#');
            }

            else if(c == 'P'){
                if(s){
                    s--;
                    sc++;
                    f.pb('S');
                }
                else f.pb('#');
            }

            else if(c == 'S'){
                if(r){
                    r--;
                    sc++;
                    f.pb('R');
                }
                else f.pb('#');
            }

        }
        //cout << r<<p<<s<<"*"<<endl;
        if(sc >= (n+1)/2){
            cout << "YES" << endl;
            int x = 0;
            while(r or p or s){
                if(f[x] == '#'){
                    if(r){
                        r--;
                        f[x] = 'R';
                    }
                    else if(p){
                        p--;
                        f[x] = 'P';
                    }
                    else if(s){
                        s--;
                        f[x] = 'S';
                    }
                }
                x++;
            }

            rep(i,0,f.size() - 1,1) cout << f[i];
            cout << endl;
        }
        else {cout <<"NO" << endl;}
    }
    return 0; 
}