#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k; cin>>n>>k;
	int a[n+2],ans=0;
	a[0]=k;a[n+1]=0;
	if(n==1)
	{
		cin>>a[1];
		if(a[1]<=k)
			cout<<k-a[1]<<endl<<k;
		else
			cout<<"0"<<endl<<a[1];
	}
	else{
	for(int i=1;i<n+1;i++)
		cin>>a[i];
	for(int i=1;i<n+1;i++)
	{
			if((a[i-1]+a[i]<=k)&&(a[i]+a[i+1]<=k))
			{
				ans+=min((k-a[i-1]-a[i]),(k-a[i]-a[i+1]));
				a[i]+=min((k-a[i-1]-a[i]),(k-a[i]-a[i+1]));
			}
	}
	cout<<ans<<endl;
	for(int i=1;i<n+1;i++)
		cout<<a[i]<<" ";}
	return(0);
}