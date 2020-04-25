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
const int MAX = 1e5 + 5;
const int MOD = 1e9 + 7;
//////////////////////////////////

int m[100005];
vector <int> primes;

void SieveOfEratosthenes(int n) { 
    bool prime[n+1]; 
    memset(prime, true, sizeof(prime)); 
    for (int p=2; p*p<=n; p++){ 
        if (prime[p] == true){ 
            for (int i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 

    for (int p=2; p<=n; p++) 
       if (prime[p]) primes.pb(p); 
}

const int ss = 70;

int32_t main(){
    fastio
    int n, k; cin >> n >> k;
    int aa = sqrt(100005);
    SieveOfEratosthenes(aa);
    map <vector <int>, int> m;
    map <int, vector<int>> mv;

    int a[n+1];
    rep(i,1,n,1) cin >> a[i];

    rep(i,1,n,1){
        vector <int> v;
        for(auto p: primes){
            int ta = 0;
            int tp = p;
            while(a[i]%tp == 0){
                tp *= p;
                ta++;
            }
            v.pb(ta%k);
        }
        while(v.size() != 70) v.pb(0);
        m[v]++;
        mv[i] = v;
    }

    int ans = 0;
    rep(i,1,n,1){
        vector <int> vv = mv[i];
        vector <int> req;
        for(auto c: vv) req.pb((k-c)%k);

        if(m.find(req) != m.end()){
            int same = 1;
            rep(j,0,req.size()-1,1) if(req[j] != vv[j]) same = 0;
            if(same) ans += (m[req] - 1);
            else ans += m[req]; 
        }
    }
    cout << ans/2 << endl;
    return 0; 
}