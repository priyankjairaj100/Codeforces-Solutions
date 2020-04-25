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
	ll x,n; cin>>n>>x;
	ll a[n],one=0;
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
		one+=a[i];
	}
	if(x-one == n-1)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return(0);
}