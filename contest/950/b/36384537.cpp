/*|-----------------------------------------------|
  | Problem solved by Priyank Jairaj, BITS Pilani |
  | Github: priyankjairaj100, StopStalk: la_flame |
  |-----------------------------------------------|*/

#include<bits/stdc++.h>
using namespace std;
const long long MOD=1000000007;
#define ll long long
#define el "\n"
#define for(i,n) for (ll i = 0; i < n; ++i)
#define dec(i,n) for (ll i = n; i > 0; --i)

ll modl(const ll input, const ll ceil) {
    return input >= ceil ? input % ceil : input;}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    ll n,m; cin>>n>>m;
    ll a[n],b[m];
    for(i,n)cin>>a[i];
    for(i,m)cin>>b[i];
    ll p1=-1,p2=-1,s1=0,s2=0,ans=0;
    while(p1<n && p2<m){
        if(s1<s2){
            p1++;
            s1+=a[p1];
        }
        else if(s1>s2){
            p2++;
            s2+=b[p2];
        }
        else{
            ans++; p1++; p2++;
            s1=a[p1]; s2=b[p2];
        }
    }
    cout<<ans-1<<el;
	return(0);
}