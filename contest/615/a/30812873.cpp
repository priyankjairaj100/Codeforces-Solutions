#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,m; cin>>n>>m;
	int bulb[105]={0};
	for(int i=0;i<n;i++)
	{
		int x; cin>>x;
		for(int j=1;j<=x;j++)
		{
			int temp; cin>>temp;
			bulb[temp]=1;
		}
	}
	for(int i=1;i<=m;i++)
	{
		if(bulb[i]==0)
		{
			cout<<"NO"<<endl;
			return(0);
		}
	}
	cout<<"YES"<<endl;
	return(0);
}