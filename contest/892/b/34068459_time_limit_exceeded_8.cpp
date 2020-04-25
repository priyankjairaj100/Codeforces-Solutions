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
    ll n; cin>>n; ll a[n],t[n];
    for (int i = 0; i < n; ++i)
    {
    	cin>>a[i];
    	t[i]=0;
    }
    for (int i = n-1; i>=0;i--)
    {
    	for(int j = i-1; j>=(i-a[i]) && j>=0 ;j--)
    	{
    		t[j]=1;
    	}
    }
    ll ans=0;
    for (int i = 0; i < n; ++i)
    {
    	if(!t[i])
    		ans++;
    }
    cout<<ans<<endl;
	return(0);
}