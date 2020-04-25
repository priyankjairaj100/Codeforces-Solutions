#include <bits/stdc++.h>
using namespace std;
#define ll long long
const long long MOD=1000000007;
int main()
{
	ll n,k; cin>>n>>k;
	ll d[2005][2005];

for (int i=1;i<=2000;i++)
		d[1][i]=1;
	
	for (int l=1;l<=(k-1);l++)
		for (int x=1; x<=n; x++)
			for (int i=1;i*x<= n;i++)
			{
				d[l+1][i*x]+=d[l][x];
				d[l+1][i*x]-=d[l+1][i*x]/MOD*MOD;
			}
	int res=0;
	for (int x=1; x<=n; x++)
	{
		res+=d[k][x];
		res-=res/MOD*MOD;
	}
	cout<<res;
	return(0);
}