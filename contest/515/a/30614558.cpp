#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll a,b,s; cin>>a>>b>>s;
	if(a<0)
		a= -a;
	if(b<0)
		b= -b;
	if(((s>a+b)&&((s-a-b)%2==0))||(s==a+b)||((a==0)&&(b==0)&&(s%2==0)))
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
	return(0);
}