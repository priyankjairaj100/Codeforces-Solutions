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
    int n,m;
    cin >> n >> m;
    int a[n+1][m+1];
    int x = -1;
    rep(i,1,n,1) rep(j,1,m,1) cin >>a[i][j];
    int k = 0;
    rep(i,1,n,1){
        rep(j,1,m-1,1){
            if(a[i][j] != a[i][j+1]) k = 1, x = i; 
        }
    }
    if(!k){
        rep(i,1,n,1) k = k ^ a[i][1];
        if(!k){cout<<"NIE"<<endl; return 0;}
        else {cout<<"TAK"<<endl; rep(i,1,n,1) cout<<"1 ";}
        return 0;
    }
    cout<<"TAK"<<endl;
    int xv = 0, y = 0;
    rep(i,1,n,1){
        if(i != x) xv ^= a[i][1];
    }
    rep(j,1,m,1) if(xv ^ a[x][j]) {y = j; break;}
    rep(i,1,n,1) {if(i != x) cout<<"1 "; else cout<<y<<" ";} 
    return 0;   
}