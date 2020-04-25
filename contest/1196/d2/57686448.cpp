//IWNLA
#include <bits/stdc++.h>
#include <string>
using namespace std;
 
#define int long long
typedef long double LD;
 
const int MAX = 1e5 + 5;
const int MOD = 1e9 + 7;
const LD EPS = 1e-10;
const LD PI = acos(-1.0);
#define fastio                        \
ios_base::sync_with_stdio(false); \
cin.tie(NULL);                    \
cout.tie(NULL);
#define rep(i, a, b, d) for (int i = a; i <= b; i += d)
#define brep(i, a, b, d) for (int i = a; i >= b; i -= d)
#define pb push_back
#define pii pair<int, int>


 
int32_t main(){
    fastio
    int q; cin >> q;
    while(q--){
        int n,k; cin >>n>>k;
        string s; cin >> s;
        int a[n+1];
        rep(i,1,n,1){
            if(s[i-1] == 'R') a[i] = 0;
            else if(s[i-1] == 'G') a[i] = 1;
            else a[i] = 2;
        }
        int x[n+1], y[n+1], z[n+1];
        rep(i,1,n,1){
            if(a[i] != i%3) x[i] = 1;
            else x[i] = 0;
            if(a[i] != (i+1)%3) y[i] = 1;
            else y[i] = 0;
            if(a[i] != (i+2)%3) z[i] = 1;
            else z[i] = 0;
        }
        int xa = 0, ya = 0, za = 0, xx = 0, yy = 0, zz = 0;
        rep(i,1,k,1) xa += x[i]; xx = xa;
        rep(i,k+1,n,1){xa += x[i]; xa -= x[i-k]; xx = min(xa, xx);}
        
        rep(i,1,k,1) ya += y[i]; yy = ya;
        rep(i,k+1,n,1){ya += y[i]; ya -= y[i-k]; yy = min(ya, yy);}
        
        rep(i,1,k,1) za += z[i]; zz = za;
        rep(i,k+1,n,1){za += z[i]; za -= z[i-k]; zz = min(za, zz);}
        cout<< min(xx, min(yy, zz)) <<endl;
    }
    return 0;   
}