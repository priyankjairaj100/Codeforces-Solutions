//la_flame_ never dies out.

#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef long double LD;

const int MAX	= 1e5 + 5;
const int MOD	= 1e9 + 7;
const LD  EPS	= 1e-10;
const LD PI = acos(-1.0);
#define fastio			ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define rep(i,a,b,d) for(int i = a; i<=b; i+=d)
#define brep(i,a,b,d) for(int i = a; i>=b; i-=d)
#define pb push_back
#define pii pair<int, int>

int x[5005], l[5005], r[5005], ql[5005];

int32_t main(){
    fastio
    int n,q; cin>>n>>q;
    rep(i,1,q,1){int u,v; cin>>u>>v; l[i] = u; r[i] = v; rep(j,u,v,1) x[j]++;}
    int ans = MOD, id = -1, len = MOD;
    rep(i,1,q,1){
        int ans1 = 0;
        rep(j,l[i],r[i],1){
            if(x[j] == 1){ ans1++; }
        }
        ql[i] = ans1;
     //   int l1 = r[i] - l[i] + 1;
        if(ans1 < ans){ ans = ans1; id = i;}
    }
    rep(i,1,q,1){ if(ql[i] == ans){ int l1 = r[i] - l[i] + 1; if(l1 < len){ id = i; len = l1; } } }
    rep(i,l[id], r[id],1){
        x[i]--;
    }
    int id1 = id;
    ans = MOD;
    rep(i,1,q,1){
        int ans1 = 0;
        rep(j,l[i],r[i],1){
            if(x[i] == 1) ans1++;
        }
        if(ans1 < ans and i != id1){ ans = ans1; id = i; }
    }
    rep(i,l[id],r[id],1) x[i]--;
    ans = 0;
    rep(i,1,n,1) if(x[i]>0) ans++;
    cout<<ans<<endl;
    return 0;  
}