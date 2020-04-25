#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ll n,t; cin>>n>>t; ll a[n+1];
	for(int i=1;i<n;i++)
		cin>>a[i];
	for (int i=1;i<=n;i+=a[i])
		if(i==t)
		{
			cout<<"YES"<<endl;
			return(0);
		}
	cout<<"NO"<<endl;
	return(0);
}