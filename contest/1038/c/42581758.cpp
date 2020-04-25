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
bool cmp(ll x, ll y) {return x > y;  }
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    ll n; cin>>n; ll a[n+2], b[n+2]; a[n+1] = 0; b[n+1] = 0;
    fr1(i,n) cin>> a[i];
    fr1(i,n) cin>>b[i];
        sort(a+1,a+1+n,cmp); sort(b+1,b+1+n,cmp);
        
    ll pa = 1, pb = 1, t =1,sa = 0, sb = 0;
    while(pa<=n+1 && pb<=n+1){ 
        if(t%2){
            if(a[pa] >= b[pb]){ sa+=a[pa]; pa++; }
            else pb++;
        }
        else{
            if(b[pb] >= a[pa]){ sb+=b[pb]; pb++; }
            else pa++;
        }
        //cout<<sa<<" "<<sb<<endl;
        t++;
    }
    cout<<sa-sb; 
    return(0);
}