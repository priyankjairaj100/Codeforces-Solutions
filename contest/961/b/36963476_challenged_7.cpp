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
    ll n,k; cin>>n>>k;
    ll a[n],b[n],c[n];
    fr(i,n)cin>>a[i];
    fr(i,n)cin>>b[i];
    fr(i,n){
        if(b[i]==1)
            c[i]=0;
            else
            c[i]=a[i];
    }
    ll s=0; fr(i,k)s+=c[i]; 
    ll max = s,max_i=0;
    for(ll i=0; i<n-k;i++){
        s = s + c[k+i] - c[i];
        if(s>max){
            max = s;max_i=i;}
    }
    //cout<<max_i<<el;
    for(ll i =max_i+1;i<max_i+k+1;i++)
        b[i]=1;
    ll ans = 0;
    fr(i,n)if(b[i])ans+=a[i];ll sum1=0;
    fr(i,n)sum1+=a[i];
    if(n>k)
        cout<<ans;
    else
        cout<<sum1<<el;
    return(0);
}