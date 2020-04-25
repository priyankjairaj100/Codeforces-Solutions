#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll n,temp=0,max=0; cin>>n; ll a[n],i=n;
	while(i--)
		cin>>a[i]; 
	for(i=0;i<n-1;i++)
	{
		if(a[i+1]>=a[i]){
			temp++;
			if(temp>max)
				max=temp;
		}
		else
			temp=0;
	}
	cout<<max+1<<endl;
	return(0);
}