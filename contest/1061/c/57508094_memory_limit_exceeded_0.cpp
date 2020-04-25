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

#define MAXN 100005
int spf[MAXN];
int m[MAXN];

void sieve() 
{ 
    spf[1] = 1; 
    for (int i=2; i<MAXN; i++) 
        spf[i] = i;
    for (int i=4; i<MAXN; i+=2) 
        spf[i] = 2; 
    for (int i=3; i*i<MAXN; i++) 
    { 
        if (spf[i] == i) 
        {
            for (int j=i*i; j<MAXN; j+=i)  
                if (spf[j]==j) 
                    spf[j] = i; 
        } 
    } 
}

vector<int> getFactorization(int x, int i) 
{ 
    vector<int> ret;
    ret.pb(1);
    while (spf[x] <= i) 
    {
        ret.push_back(spf[x]); 
        x = x / spf[x]; 
    } 
    return ret; 
}

int32_t main(){
    fastio
    int n; cin >> n;
    int a[n+1]; rep(i,1,n,1) cin >> a[i];
    sieve();
    int ans = 1;
    m[0]++;
    rep(i,2,n,1){
        vector <int> v = getFactorization(a[i], i);
        for(auto p: v){
            ans += m[p-1];
            ans %= MOD;
            m[p]++;
        }
    }
    cout << ans << endl;
    return 0;   
}