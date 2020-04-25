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

int n, a[100005];
int s[1000];
int mm =   998244353;

int dig(int x){
    int ans = 0;
    while(x) x/=10, ans++;
    return ans;
}

int idig(int num, int i){
    int p = (int)pow(10, i-1);
    num/=p;
    return num % 10;
}

int32_t main()
{
    fastio
    cin >> n;
    rep(i,1,n,1) cin >>a[i];
    int x = dig(a[1]);
    rep(i,1,x,1){
        int sum = 0;
        rep(j,1,n,1){
            sum += idig(a[j], i);
        }
        s[2*i] = sum*n, s[2*i-1] = sum*n;
    }
    int ans = 0;
    brep(i,2*x,1,1){
        ans*=10;
        ans%=mm;
        ans += s[i];
        ans%=mm;
    }
    cout<<ans<<endl;
    return 0;
}