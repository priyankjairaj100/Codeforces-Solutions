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

bool isPrime(int n) 
{ 
    if (n <= 1)  return false; 
    for (int i=2; i<n; i++) 
        if (n%i == 0) 
            return false; 
    return true; 
}

int32_t main(){
    fastio
    int n; cin >> n; 
    if(n%2){cout<<"-1"; return 0;}
    int x;
    rep(i,n,2*n,1) if(isPrime(i)){x = i; break;}
    cout<<x<<endl;
    rep(i,1,n-1,1) cout<<i<<" "<<i+1<<endl;
    cout<<"1 "<<n<<endl;
    set <int> s;
    rep(i,1,n,1) s.insert(i);
    x-= n;
    while(x){
        int a = *s.begin();
        s.erase(s.begin());
        int t = *s.begin();
        s.erase(s.begin());
        int b = *s.begin();
        s.erase(s.begin());
        s.insert(t);
        cout<<a<<" "<<b<<endl;
        x--; 
    }
    return 0;
}