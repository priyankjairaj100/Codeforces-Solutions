/*|-----------------------------------------------|
  | Problem solved by Priyank Jairaj, BITS Pilani |
  | Github: priyankjairaj100, StopStalk: la_flame |
  |-----------------------------------------------|*/

#include<bits/stdc++.h>
using namespace std;
const long long MOD=1000000007;
#define ll long long
#define el "\n"
ll modl(const ll input, const ll ceil) {
    return input >= ceil ? input % ceil : input;}
#define fr(i,n) for(ll i=0;i<n;++i)
#define fr1(i,n) for(ll i=1;i<=n;++i)
bool myfn(int i, int j) { return i < j; }

ll gcd(ll a, ll b)
{

    if (a == 0 || b == 0)
        return 0;
    if (a == b)
        return a;
    if (a > b)
        return gcd(a - b, b);
    return gcd(a, b - a);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    ll n,k; cin>>n>>k;
    ll a[n];
    fr(i,n)cin >> a[i]; ll f = 0;
    ll r = -1 , s=-1;
    fr(i,n){
        if(a[i]>k && !f){f=1; r = i;}
        if(a[i]>k && f){s = i;} 
    }
    ll ans;
    if(r == -1 && s == -1) ans = n;
    else if(r == s) ans = n-1;
    else ans = n - (s - r) - 1;
    cout<<ans<<el;
    return(0);
}