/*|-----------------------------------------------|
  | Problem solved by Priyank Jairaj, BITS Pilani |
  | Github: priyankjairaj100, StopStalk: la_flame |
  |-----------------------------------------------|*/

#include<bits/stdc++.h>
using namespace std;
const long long MOD=1000000007;
#define ll long long

int main()
{
	ll t,n,c=0; cin>>t>>n;
	for (int i = 0; i < n; ++i)
	{
		ll temp; cin>>temp;
		t-=(86400-temp);
		c++;
		if(t<=0)
		{
			cout<<c<<endl;
			return(0);
		}
	}
	return(0);
}