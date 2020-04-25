#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll a,b,s; cin>>a>>b>>s;
	if((s>(abs(a)+abs(b)))&&((s-(abs(a)+abs(b))%2==0)))
		cout<<"Yes";
	else if (s==(abs(a)+abs(b)))
		cout<<"Yes";
	else if ((a==0)&&(b==0)&&(s%2==0))
		cout<<"Yes";
	else
		cout<<"No";
	return(0);
}