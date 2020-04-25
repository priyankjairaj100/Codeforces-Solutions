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
    ll n,a,b; cin>>n>>a>>b; ll ans=0;
    for (int i = 1; i <n ; ++i)
    	ans= max(ans,min( a/i , b/(n-i) ));
    cout<<ans<<endl;
	return(0);
}