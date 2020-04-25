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
        int n; cin >> n;
        int x[n+1], y[n+1], l[n+1], u[n+1], r[n+1], d[n+1];
        int xmax = 100000, ymax = 100000, xmin = -100000, ymin = -100000;
        rep(i,1,n,1){
            cin >> x[i] >> y[i] >> l[i] >> u[i] >> r[i] >> d[i];
            if(!l[i]) xmin = max(xmin, x[i]);
            if(!r[i]) xmax = min(xmax, x[i]);
            if(!d[i]) ymin = max(ymin, y[i]);
            if(!u[i]) ymax = min(ymax, y[i]);
        }
        if(xmax < xmin or ymax < ymin){cout<<0<<endl; continue;}
        cout<<"1 "<<(xmax+xmin)/2<<" "<<(ymax + ymin)/2<<endl;
    }
    return 0;   
}