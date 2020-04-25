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
    ll n; cin>>n; ll a[n];
    for (int i = 0; i < n; ++i)
    	cin>>a[i];
    ll ans=1,p2=n-1;
    for (int i = n-1; i>=0;i--)
    {
    	p2=min(p2,i-a[i]);
    	if(i<=p2)
    		ans++;
    }
    cout<<ans<<endl;
	return(0);
}