#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll n; cin>>n; ll a[n],i=0;
	for(i=0;i<n;i++){
		cin>>a[i];
		if(a[i]==1)
			cout<<"NO"<<endl;
		else if(sqrt(a[i])*sqrt(a[i])==a[i])
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}

	return(0);
}