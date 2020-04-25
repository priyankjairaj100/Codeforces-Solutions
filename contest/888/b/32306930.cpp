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

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    ll n,L=0,R=0,D=0,U=0; cin>>n;
    char s[n];cin>>s;
    for (int i=0;i<n;++i)
    {
   		if(s[i]=='L')
   			L++;
   		else if(s[i]=='R')
   			R++;
   		else if(s[i]=='U')
   			U++;
   		else
   			D++;
    }
    ll ans=((min(L,R))+(min(U,D)))<<1;
    cout<<ans<<el;
	return(0);
}