#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll w,k,n,ans; cin>>k>>n>>w;
	ans=(k*(w*(w+1))/2 - n);
	if (ans<0)
	    ans=0;
	cout<<ans<<endl;
	return(0);
}