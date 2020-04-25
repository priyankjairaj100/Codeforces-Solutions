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
    ll n,m; cin>>n>>m;
    ll a[n+1];
    fr(i,n+1)a[i]=0;
    fr(i,m){ll temp; cin>>temp; a[temp]++;}
    ll ans = *min_element(a+1,a+n+1);
    cout<<ans<<el;
    return(0);
}