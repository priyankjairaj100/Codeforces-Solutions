#include <bits/stdc++.h>
using namespace std;
int x[3]={0};
int check(int n,int t)
{
	if(n==0)
		return(t);
	else if(n<0)
		return(-1);
	else
	{
		int z[3]={check(n-x[0],t+1),check(n-x[1],t+1),check(n-x[2],t+1)};
		sort(z,z+3);
		return(z[2]);
	}
}
int main()
{
	int n;
	cin>>n>>x[0]>>x[1]>>x[2];
	sort(x,x+3);
	int t=check(n,0);
	cout<<t<<endl;
	return(0);
}