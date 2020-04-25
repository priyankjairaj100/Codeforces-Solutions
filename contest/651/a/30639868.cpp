#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,x,y,c=0; cin>>a>>b;
	if(!((a==1)&&(b==1)))
	while((a>0)&&(b>0))
	{
		c++;
		if(a<=b)
		{
			a+=1;
			b-=2;
		}
		else
		{
			a-=2;
			b+=1;
		}
	}
	cout<<c<<endl;
	return(0);
}