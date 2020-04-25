//la_flame_ never dies out.

#include <bits/stdc++.h>
using namespace std;
 
typedef long long LL; 
typedef long double LD;

const int MAX	= 1e5 + 5;
const int MOD	= 1e9 + 7;
const LD  EPS	= 1e-10;
const LD PI = acos(-1.0);
#define fastio			ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define rep(i,a,b,d) for(LL i = a; i<=b; i+=d)
#define brep(i,a,b,d) for(LL i = a; i>=b; i-=d)
#define pb push_back
#define pii pair<LL, LL>

int ans_k = 0, ans = 0;
int a[100005],n,s;

int ok(int x){
    int tot = 0;
    rep(i,1,x,1) tot += (a[i] + i*x);
    if(tot <= s){ if(tot >= ans){ans = tot; ans_k = x;} return 1;}
    return 0;
}

void bs(int a, int b){
    if(a == b) return;
    int mid = (a + b)/2;
    if(ok(mid)) bs(mid+1, b);
    else bs(a, mid);
}

int main(){
    fastio
    #define int long long
    cin>>n>>s; rep(i,1,n,1) cin>>a[i]; sort(a+1, a+1+n);
    bs(1,100003);
    cout<<ans_k<<" "<<ans<<endl;
    return 0;  
}